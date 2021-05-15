//
//  DynamixelLibrary_Prototyping_private.h
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


#ifndef RTW_HEADER_DynamixelLibrary_Prototyping_private_h_
#define RTW_HEADER_DynamixelLibrary_Prototyping_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "DynamixelLibrary_Prototyping.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern void DynamixelLibrary_P_Checklimits1(real_T rtu_omega_command, real_T
  rtu_alpha_command, real_T rtu_current_theta, real_T rtu_current_omega,
  B_Checklimits1_DynamixelLibra_T *localB);

#endif                    // RTW_HEADER_DynamixelLibrary_Prototyping_private_h_
