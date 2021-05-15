#include <stdio.h>
#include <stdlib.h>
#include "DynamixelLibrary_Prototyping.h"
#include "DynamixelLibrary_Prototyping_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "MW_raspi_init.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x
#define NAMELEN                        16

// Function prototype declaration
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
void *threadJoinStatus;
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(DynamixelLibrary_Prototyping_M) == (NULL)) &&
    !rtmGetStopRequested(DynamixelLibrary_Prototyping_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);

    // External mode
    {
      boolean_T rtmStopReq = false;
      rtExtModePauseIfNeeded(DynamixelLibrary_Prototyping_M->extModeInfo, 2,
        &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(DynamixelLibrary_Prototyping_M, true);
      }

      if (rtmGetStopRequested(DynamixelLibrary_Prototyping_M) == true) {
        rtmSetErrorStatus(DynamixelLibrary_Prototyping_M, "Simulation finished");
        break;
      }
    }

    // External mode
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(DynamixelLibrary_Prototyping_M->extModeInfo, 2,
                       &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(DynamixelLibrary_Prototyping_M, true);
      }
    }

    DynamixelLibrary_Prototyping_step();

    // Get model outputs here
    rtExtModeCheckEndTrigger();
    stopRequested = !((rtmGetErrorStatus(DynamixelLibrary_Prototyping_M) ==
                       (NULL)) && !rtmGetStopRequested
                      (DynamixelLibrary_Prototyping_M));
    runModel = !stopRequested;
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(DynamixelLibrary_Prototyping_M, "stopping the model");
  runModel = 0;
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    runModel = 0;
  }

  MW_killPyserver();
  mwRaspiTerminate();

  // Disable rt_OneStep() here

  // Terminate model
  DynamixelLibrary_Prototyping_terminate();
  rtExtModeShutdown(2);
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  UNUSED(argc);
  UNUSED(argv);
  mwRaspiInit();
  MW_launchPyserver();
  rtmSetErrorStatus(DynamixelLibrary_Prototyping_M, 0);
  rtExtModeParseArgs(argc, (const char_T **)argv, NULL);

  // Initialize model
  DynamixelLibrary_Prototyping_initialize();

  // External mode
  rtSetTFinalForExtMode(&rtmGetTFinal(DynamixelLibrary_Prototyping_M));
  rtExtModeCheckInit(2);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(DynamixelLibrary_Prototyping_M->extModeInfo, 2,
      &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(DynamixelLibrary_Prototyping_M, true);
    }
  }

  rtERTExtModeStartMsg();

  // Call RTOS Initialization function
  myRTOSInit(0.5, 0);

  // Wait for stop semaphore
  sem_wait(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(sem_destroy(&timerTaskSem[i]), 0, "sem_destroy");
    }
  }

#endif

  return 0;
}
