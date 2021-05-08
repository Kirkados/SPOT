//
//  DynamixelLibrary_Prototyping.cpp
//
//  Code generation for model "DynamixelLibrary_Prototyping".
//
//  Model version              : 1.137
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat May  8 17:03:34 2021
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objectives:
//     1. Execution efficiency
//     2. RAM efficiency
//  Validation result: Not run


#include "DynamixelLibrary_Prototyping.h"
#include "DynamixelLibrary_Prototyping_private.h"
#include "DynamixelLibrary_Prototyping_dt.h"

// Block signals (default storage)
B_DynamixelLibrary_Prototypin_T DynamixelLibrary_Prototyping_B;

// Block states (default storage)
DW_DynamixelLibrary_Prototypi_T DynamixelLibrary_Prototyping_DW;

// Real-time model
RT_MODEL_DynamixelLibrary_Pro_T DynamixelLibrary_Prototyping_M_ =
  RT_MODEL_DynamixelLibrary_Pro_T();
RT_MODEL_DynamixelLibrary_Pro_T *const DynamixelLibrary_Prototyping_M =
  &DynamixelLibrary_Prototyping_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matlabCo_o4(MoveArm_Speed_DynamixelLibrar_T *obj);
static void matlabCodegenHandle_matlabCod_o(ReadArm_Position_DynamixelLib_T *obj);
static void matlabCodegenHandle_matlabCodeg(InitializeForSpeed_DynamixelL_T *obj);
static void matlabCodegenHandle_matlabCo_o4(MoveArm_Speed_DynamixelLibrar_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_o(ReadArm_Position_DynamixelLib_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(InitializeForSpeed_DynamixelL_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void DynamixelLibrary_Prototyping_step(void)
{
  real_T sampleTime;

  // Clock: '<Root>/Clock'
  DynamixelLibrary_Prototyping_B.Clock =
    DynamixelLibrary_Prototyping_M->Timing.t[0];

  // MATLABSystem: '<Root>/MATLAB System3' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Constant: '<Root>/Constant3'

  command_dynamixel_speed(DynamixelLibrary_Prototyping_P.Constant1_Value,
    DynamixelLibrary_Prototyping_P.Constant3_Value,
    DynamixelLibrary_Prototyping_P.Constant3_Value);

  // MATLABSystem: '<Root>/MATLAB System4'
  if (DynamixelLibrary_Prototyping_DW.obj_o.SampleTime !=
      DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime) {
    if (((!rtIsInf(DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime)) &&
         (!rtIsNaN(DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime))) ||
        rtIsInf(DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime)) {
      sampleTime = DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime;
    }

    DynamixelLibrary_Prototyping_DW.obj_o.SampleTime = sampleTime;
  }

  DynamixelLibrary_Prototyping_B.MATLABSystem4_o1 = 0.0;
  DynamixelLibrary_Prototyping_B.MATLABSystem4_o2 = 0.0;
  DynamixelLibrary_Prototyping_B.MATLABSystem4_o3 = 0.0;
  read_dynamixel_position(&DynamixelLibrary_Prototyping_B.MATLABSystem4_o1,
    &DynamixelLibrary_Prototyping_B.MATLABSystem4_o2,
    &DynamixelLibrary_Prototyping_B.MATLABSystem4_o3);

  // End of MATLABSystem: '<Root>/MATLAB System4'
  // MATLABSystem: '<Root>/MATLAB System1'
  if (DynamixelLibrary_Prototyping_DW.obj.P_GAIN !=
      DynamixelLibrary_Prototyping_P.MATLABSystem1_P_GAIN) {
    DynamixelLibrary_Prototyping_DW.obj.P_GAIN =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_P_GAIN;
  }

  if (DynamixelLibrary_Prototyping_DW.obj.I_GAIN !=
      DynamixelLibrary_Prototyping_P.MATLABSystem1_I_GAIN) {
    DynamixelLibrary_Prototyping_DW.obj.I_GAIN =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_I_GAIN;
  }

  if (DynamixelLibrary_Prototyping_DW.obj.VELOCITY_LIMIT !=
      DynamixelLibrary_Prototyping_P.MATLABSystem1_VELOCITY_LIMIT) {
    DynamixelLibrary_Prototyping_DW.obj.VELOCITY_LIMIT =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_VELOCITY_LIMIT;
  }

  if (DynamixelLibrary_Prototyping_DW.obj.ACCELERATION_TIME !=
      DynamixelLibrary_Prototyping_P.MATLABSystem1_ACCELERATION_TIME) {
    DynamixelLibrary_Prototyping_DW.obj.ACCELERATION_TIME =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_ACCELERATION_TIME;
  }

  // End of MATLABSystem: '<Root>/MATLAB System1'

  // External mode
  rtExtModeUploadCheckTrigger(2);

  {                                    // Sample time: [0.0s, 0.0s]
    rtExtModeUpload(0, (real_T)DynamixelLibrary_Prototyping_M->Timing.t[0]);
  }

  {                                    // Sample time: [0.05s, 0.0s]
    rtExtModeUpload(1, (real_T)
                    ((DynamixelLibrary_Prototyping_M->Timing.clockTick1) * 0.05));
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.0s, 0.0s]
    if ((rtmGetTFinal(DynamixelLibrary_Prototyping_M)!=-1) &&
        !((rtmGetTFinal(DynamixelLibrary_Prototyping_M)-
           DynamixelLibrary_Prototyping_M->Timing.t[0]) >
          DynamixelLibrary_Prototyping_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(DynamixelLibrary_Prototyping_M, "Simulation finished");
    }

    if (rtmGetStopRequested(DynamixelLibrary_Prototyping_M)) {
      rtmSetErrorStatus(DynamixelLibrary_Prototyping_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  DynamixelLibrary_Prototyping_M->Timing.t[0] =
    ((time_T)(++DynamixelLibrary_Prototyping_M->Timing.clockTick0)) *
    DynamixelLibrary_Prototyping_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    DynamixelLibrary_Prototyping_M->Timing.clockTick1++;
  }
}

// Model initialize function
void DynamixelLibrary_Prototyping_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&DynamixelLibrary_Prototyping_M->solverInfo,
                          &DynamixelLibrary_Prototyping_M->Timing.simTimeStep);
    rtsiSetTPtr(&DynamixelLibrary_Prototyping_M->solverInfo, &rtmGetTPtr
                (DynamixelLibrary_Prototyping_M));
    rtsiSetStepSizePtr(&DynamixelLibrary_Prototyping_M->solverInfo,
                       &DynamixelLibrary_Prototyping_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&DynamixelLibrary_Prototyping_M->solverInfo,
                          (&rtmGetErrorStatus(DynamixelLibrary_Prototyping_M)));
    rtsiSetRTModelPtr(&DynamixelLibrary_Prototyping_M->solverInfo,
                      DynamixelLibrary_Prototyping_M);
  }

  rtsiSetSimTimeStep(&DynamixelLibrary_Prototyping_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&DynamixelLibrary_Prototyping_M->solverInfo,
                    "FixedStepDiscrete");
  rtmSetTPtr(DynamixelLibrary_Prototyping_M,
             &DynamixelLibrary_Prototyping_M->Timing.tArray[0]);
  rtmSetTFinal(DynamixelLibrary_Prototyping_M, 10.0);
  DynamixelLibrary_Prototyping_M->Timing.stepSize0 = 0.05;

  // External mode info
  DynamixelLibrary_Prototyping_M->Sizes.checksums[0] = (3798511406U);
  DynamixelLibrary_Prototyping_M->Sizes.checksums[1] = (1837739412U);
  DynamixelLibrary_Prototyping_M->Sizes.checksums[2] = (2791067623U);
  DynamixelLibrary_Prototyping_M->Sizes.checksums[3] = (2756899789U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    DynamixelLibrary_Prototyping_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(DynamixelLibrary_Prototyping_M->extModeInfo,
      &DynamixelLibrary_Prototyping_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(DynamixelLibrary_Prototyping_M->extModeInfo,
                        DynamixelLibrary_Prototyping_M->Sizes.checksums);
    rteiSetTPtr(DynamixelLibrary_Prototyping_M->extModeInfo, rtmGetTPtr
                (DynamixelLibrary_Prototyping_M));
  }

  // block I/O
  (void) memset((static_cast<void *>(&DynamixelLibrary_Prototyping_B)), 0,
                sizeof(B_DynamixelLibrary_Prototypin_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&DynamixelLibrary_Prototyping_DW), 0,
                sizeof(DW_DynamixelLibrary_Prototypi_T));

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    DynamixelLibrary_Prototyping_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    real_T sampleTime;

    // Start for MATLABSystem: '<Root>/MATLAB System3'
    DynamixelLibrary_Prototyping_DW.obj_g.matlabCodegenIsDeleted = false;
    DynamixelLibrary_Prototyping_DW.obj_g.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/MATLAB System4'
    DynamixelLibrary_Prototyping_DW.obj_o.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime)) &&
         (!rtIsNaN(DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime))) ||
        rtIsInf(DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime)) {
      sampleTime = DynamixelLibrary_Prototyping_P.MATLABSystem4_SampleTime;
    }

    DynamixelLibrary_Prototyping_DW.obj_o.SampleTime = sampleTime;
    DynamixelLibrary_Prototyping_DW.obj_o.isInitialized = 1;
    DynamixelLibrary_Prototyping_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/MATLAB System4'

    // Start for MATLABSystem: '<Root>/MATLAB System1'
    DynamixelLibrary_Prototyping_DW.obj.matlabCodegenIsDeleted = false;
    DynamixelLibrary_Prototyping_DW.obj.P_GAIN =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_P_GAIN;
    DynamixelLibrary_Prototyping_DW.obj.I_GAIN =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_I_GAIN;
    DynamixelLibrary_Prototyping_DW.obj.VELOCITY_LIMIT =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_VELOCITY_LIMIT;
    DynamixelLibrary_Prototyping_DW.obj.ACCELERATION_TIME =
      DynamixelLibrary_Prototyping_P.MATLABSystem1_ACCELERATION_TIME;
    DynamixelLibrary_Prototyping_DW.obj.isInitialized = 1;
    initialize_dynamixel_speed_control
      (DynamixelLibrary_Prototyping_DW.obj.P_GAIN,
       DynamixelLibrary_Prototyping_DW.obj.I_GAIN,
       DynamixelLibrary_Prototyping_DW.obj.VELOCITY_LIMIT,
       DynamixelLibrary_Prototyping_DW.obj.ACCELERATION_TIME);
    DynamixelLibrary_Prototyping_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void DynamixelLibrary_Prototyping_terminate(void)
{
  // Terminate for MATLABSystem: '<Root>/MATLAB System3'
  matlabCodegenHandle_matlabCo_o4(&DynamixelLibrary_Prototyping_DW.obj_g);

  // Terminate for MATLABSystem: '<Root>/MATLAB System4'
  matlabCodegenHandle_matlabCod_o(&DynamixelLibrary_Prototyping_DW.obj_o);

  // Terminate for MATLABSystem: '<Root>/MATLAB System1'
  matlabCodegenHandle_matlabCodeg(&DynamixelLibrary_Prototyping_DW.obj);
}
