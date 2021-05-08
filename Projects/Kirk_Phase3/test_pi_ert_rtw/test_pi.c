/*
 * test_pi.c
 *
 * Code generation for model "test_pi".
 *
 * Model version              : 1.1
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Sat May  8 13:17:54 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test_pi.h"
#include "test_pi_private.h"

/* Block signals (default storage) */
B_test_pi_T test_pi_B;

/* Block states (default storage) */
DW_test_pi_T test_pi_DW;

/* Real-time model */
RT_MODEL_test_pi_T test_pi_M_;
RT_MODEL_test_pi_T *const test_pi_M = &test_pi_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(codertarget_raspi_internal_LE_T *obj);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void matlabCodegenHandle_matlabCodeg(codertarget_raspi_internal_LE_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void test_pi_step(void)
{
  real_T rtb_PulseGenerator;
  uint8_T tmp;
  static const char_T tmp_0[69] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'L',
    'E', 'D', ' ', 'v', 'a', 'l', 'u', 'e', '.', ' ', 'L', 'E', 'D', ' ', 'v',
    'a', 'l', 'u', 'e', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 'a', ' ',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', ' ', 'v', 'a', 'l', 'u', 'e', ' ', '(',
    't', 'r', 'u', 'e', ' ', 'o', 'r', ' ', 'f', 'a', 'l', 's', 'e', ')', '.' };

  static const char_T tmp_1[5] = "none";
  char_T tmp_2[5];
  int32_T i;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (test_pi_DW.clockTickCounter <
                        test_pi_P.PulseGenerator_Duty) &&
    (test_pi_DW.clockTickCounter >= 0) ? test_pi_P.PulseGenerator_Amp : 0.0;
  if (test_pi_DW.clockTickCounter >= test_pi_P.PulseGenerator_Period - 1.0) {
    test_pi_DW.clockTickCounter = 0;
  } else {
    test_pi_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<Root>/LED' */
  if ((rtb_PulseGenerator == 0.0) || (rtb_PulseGenerator == 1.0)) {
  } else {
    memcpy(&test_pi_B.cv[0], &tmp_0[0], 69U * sizeof(char_T));
    perror(test_pi_B.cv);
  }

  for (i = 0; i < 5; i++) {
    tmp_2[i] = tmp_1[i];
  }

  EXT_LED_setTrigger(0U, tmp_2);
  rtb_PulseGenerator = rt_roundd_snf(rtb_PulseGenerator);
  if (rtb_PulseGenerator < 256.0) {
    if (rtb_PulseGenerator >= 0.0) {
      tmp = (uint8_T)rtb_PulseGenerator;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  EXT_LED_write(0U, tmp);

  /* End of MATLABSystem: '<Root>/LED' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, (real_T)test_pi_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(test_pi_M)!=-1) &&
        !((rtmGetTFinal(test_pi_M)-test_pi_M->Timing.taskTime0) >
          test_pi_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(test_pi_M, "Simulation finished");
    }

    if (rtmGetStopRequested(test_pi_M)) {
      rtmSetErrorStatus(test_pi_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++test_pi_M->Timing.clockTick0)) {
    ++test_pi_M->Timing.clockTickH0;
  }

  test_pi_M->Timing.taskTime0 = test_pi_M->Timing.clockTick0 *
    test_pi_M->Timing.stepSize0 + test_pi_M->Timing.clockTickH0 *
    test_pi_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void test_pi_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)test_pi_M, 0,
                sizeof(RT_MODEL_test_pi_T));
  rtmSetTFinal(test_pi_M, 10.0);
  test_pi_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  test_pi_M->Sizes.checksums[0] = (2632652617U);
  test_pi_M->Sizes.checksums[1] = (3388343993U);
  test_pi_M->Sizes.checksums[2] = (4052464913U);
  test_pi_M->Sizes.checksums[3] = (3685353227U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    test_pi_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(test_pi_M->extModeInfo,
      &test_pi_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(test_pi_M->extModeInfo, test_pi_M->Sizes.checksums);
    rteiSetTPtr(test_pi_M->extModeInfo, rtmGetTPtr(test_pi_M));
  }

  /* states (dwork) */
  (void) memset((void *)&test_pi_DW, 0,
                sizeof(DW_test_pi_T));

  {
    static const char_T tmp[5] = "none";
    char_T tmp_0[5];
    int32_T i;

    /* Start for MATLABSystem: '<Root>/LED' */
    test_pi_DW.obj.matlabCodegenIsDeleted = false;
    test_pi_DW.objisempty = true;
    test_pi_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_0[i] = tmp[i];
    }

    EXT_LED_setTrigger(0U, tmp_0);
    test_pi_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/LED' */
  }

  /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  test_pi_DW.clockTickCounter = 0;
}

/* Model terminate function */
void test_pi_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/LED' */
  matlabCodegenHandle_matlabCodeg(&test_pi_DW.obj);
}
