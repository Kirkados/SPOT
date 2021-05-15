//
//  DynamixelLibrary_Prototyping.h
//
//  Code generation for model "DynamixelLibrary_Prototyping".
//
//  Model version              : 1.181
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat May 15 14:47:59 2021
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objectives:
//     1. Execution efficiency
//     2. RAM efficiency
//  Validation result: Not run


#ifndef RTW_HEADER_DynamixelLibrary_Prototyping_h_
#define RTW_HEADER_DynamixelLibrary_Prototyping_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "dynamixel_functions.h"
#include "dynamixel_sdk.h"
#include "DynamixelLibrary_Prototyping_types.h"

// Shared type includes
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

// Block signals for system '<Root>/Check limits1'
typedef struct {
  real_T saturated_omega;              // '<Root>/Check limits1'
} B_Checklimits1_DynamixelLibra_T;

// Block signals (default storage)
typedef struct {
  real_T SineWave;                     // '<Root>/Sine Wave'
  real_T Clock;                        // '<Root>/Clock'
  real_T saturated_omega;              // '<Root>/Check limits'
  real_T MATLABSystem4_o1;             // '<Root>/MATLAB System4'
  real_T MATLABSystem4_o2;             // '<Root>/MATLAB System4'
  real_T MATLABSystem4_o3;             // '<Root>/MATLAB System4'
  real_T MATLABSystem4_o4;             // '<Root>/MATLAB System4'
  real_T MATLABSystem4_o5;             // '<Root>/MATLAB System4'
  real_T MATLABSystem4_o6;             // '<Root>/MATLAB System4'
  B_Checklimits1_DynamixelLibra_T sf_Checklimits2;// '<Root>/Check limits2'
  B_Checklimits1_DynamixelLibra_T sf_Checklimits1;// '<Root>/Check limits1'
} B_DynamixelLibrary_Prototypin_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  InitializeForSpeed_DynamixelL_T obj; // '<Root>/MATLAB System1'
  ReadArm_Position_Rates_Dynami_T obj_o;// '<Root>/MATLAB System4'
  MoveArm_Speed_DynamixelLibrar_T obj_g;// '<Root>/MATLAB System3'
  real_T Delay_DSTATE;                 // '<Root>/Delay'
  real_T Delay1_DSTATE;                // '<Root>/Delay1'
  real_T Delay2_DSTATE;                // '<Root>/Delay2'
  real_T lastSin;                      // '<Root>/Sine Wave'
  real_T lastCos;                      // '<Root>/Sine Wave'
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 // '<Root>/To Workspace'

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                // '<Root>/To Workspace1'

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                // '<Root>/To Workspace2'

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                // '<Root>/To Workspace4'

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                // '<Root>/To Workspace5'

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                // '<Root>/To Workspace6'

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                // '<Root>/To Workspace7'

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                // '<Root>/To Workspace8'

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                // '<Root>/To Workspace3'

  int32_T systemEnable;                // '<Root>/Sine Wave'
} DW_DynamixelLibrary_Prototypi_T;

// Parameters (default storage)
struct P_DynamixelLibrary_Prototypin_T_ {
  real_T maxOmega;                     // Variable: maxOmega
                                          //  Referenced by:
                                          //    '<Root>/Check limits'
                                          //    '<Root>/Check limits1'
                                          //    '<Root>/Check limits2'

  real_T serverRate;                   // Variable: serverRate
                                          //  Referenced by:
                                          //    '<Root>/Check limits'
                                          //    '<Root>/Check limits1'
                                          //    '<Root>/Check limits2'

  real_T MATLABSystem1_P_GAIN;         // Expression: 100
                                          //  Referenced by: '<Root>/MATLAB System1'

  real_T MATLABSystem1_I_GAIN;         // Expression: 1920
                                          //  Referenced by: '<Root>/MATLAB System1'

  real_T MATLABSystem1_VELOCITY_LIMIT; // Expression: 22
                                          //  Referenced by: '<Root>/MATLAB System1'

  real_T MATLABSystem1_ACCELERATION_TIME;// Expression: 500
                                            //  Referenced by: '<Root>/MATLAB System1'

  real_T MATLABSystem4_SampleTime;     // Expression: 0.5
                                          //  Referenced by: '<Root>/MATLAB System4'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<Root>/Delay'

  real_T SineWave_Amp;                 // Expression: 0.1
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Bias;                // Expression: 0
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Freq;                // Expression: 2*pi/40
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_Hsin;                // Computed Parameter: SineWave_Hsin
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_HCos;                // Computed Parameter: SineWave_HCos
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_PSin;                // Computed Parameter: SineWave_PSin
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T SineWave_PCos;                // Computed Parameter: SineWave_PCos
                                          //  Referenced by: '<Root>/Sine Wave'

  real_T deltaT_Gain;                  // Expression: 0.5
                                          //  Referenced by: '<Root>/deltaT'

  real_T Delay1_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<Root>/Delay1'

  real_T Delay2_InitialCondition;      // Expression: 0.0
                                          //  Referenced by: '<Root>/Delay2'

};

// Real-time Model Data Structure
struct tag_RTM_DynamixelLibrary_Prot_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_DynamixelLibrary_Prototypin_T DynamixelLibrary_Prototyping_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_DynamixelLibrary_Prototypin_T DynamixelLibrary_Prototyping_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_DynamixelLibrary_Prototypi_T DynamixelLibrary_Prototyping_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void DynamixelLibrary_Prototyping_initialize(void);
  extern void DynamixelLibrary_Prototyping_step(void);
  extern void DynamixelLibrary_Prototyping_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_DynamixelLibrary_Pro_T *const DynamixelLibrary_Prototyping_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'DynamixelLibrary_Prototyping'
//  '<S1>'   : 'DynamixelLibrary_Prototyping/Check limits'
//  '<S2>'   : 'DynamixelLibrary_Prototyping/Check limits1'
//  '<S3>'   : 'DynamixelLibrary_Prototyping/Check limits2'

#endif                            // RTW_HEADER_DynamixelLibrary_Prototyping_h_
