//
//  DynamixelLibrary_Prototyping_types.h
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


#ifndef RTW_HEADER_DynamixelLibrary_Prototyping_types_h_
#define RTW_HEADER_DynamixelLibrary_Prototyping_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

// Model Code Variants
#ifndef struct_tag_Wt2OnxqUigLpjJD89hMCz
#define struct_tag_Wt2OnxqUigLpjJD89hMCz

struct tag_Wt2OnxqUigLpjJD89hMCz
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T P_GAIN;
  real_T I_GAIN;
  real_T VELOCITY_LIMIT;
  real_T ACCELERATION_TIME;
};

#endif                                 //struct_tag_Wt2OnxqUigLpjJD89hMCz

#ifndef typedef_InitializeForSpeed_DynamixelL_T
#define typedef_InitializeForSpeed_DynamixelL_T

typedef struct tag_Wt2OnxqUigLpjJD89hMCz InitializeForSpeed_DynamixelL_T;

#endif                                 //typedef_InitializeForSpeed_DynamixelL_T

#ifndef struct_tag_39DoUNY3txMjWNdf2GbSAB
#define struct_tag_39DoUNY3txMjWNdf2GbSAB

struct tag_39DoUNY3txMjWNdf2GbSAB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                 //struct_tag_39DoUNY3txMjWNdf2GbSAB

#ifndef typedef_ReadArm_Position_DynamixelLib_T
#define typedef_ReadArm_Position_DynamixelLib_T

typedef struct tag_39DoUNY3txMjWNdf2GbSAB ReadArm_Position_DynamixelLib_T;

#endif                                 //typedef_ReadArm_Position_DynamixelLib_T

#ifndef struct_tag_80SxTHy3kPZAUqgTUDmFM
#define struct_tag_80SxTHy3kPZAUqgTUDmFM

struct tag_80SxTHy3kPZAUqgTUDmFM
{
  boolean_T matlabCodegenIsDeleted;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_80SxTHy3kPZAUqgTUDmFM

#ifndef typedef_MoveArm_Speed_DynamixelLibrar_T
#define typedef_MoveArm_Speed_DynamixelLibrar_T

typedef struct tag_80SxTHy3kPZAUqgTUDmFM MoveArm_Speed_DynamixelLibrar_T;

#endif                                 //typedef_MoveArm_Speed_DynamixelLibrar_T

// Parameters (default storage)
typedef struct P_DynamixelLibrary_Prototypin_T_ P_DynamixelLibrary_Prototypin_T;

// Forward declaration for rtModel
typedef struct tag_RTM_DynamixelLibrary_Prot_T RT_MODEL_DynamixelLibrary_Pro_T;

#endif                      // RTW_HEADER_DynamixelLibrary_Prototyping_types_h_
