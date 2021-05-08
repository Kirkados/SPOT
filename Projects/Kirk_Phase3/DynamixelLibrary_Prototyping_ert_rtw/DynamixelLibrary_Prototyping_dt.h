//
//  DynamixelLibrary_Prototyping_dt.h
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


#include "ext_types.h"

// data type size table
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(InitializeForSpeed_DynamixelL_T),
  sizeof(MoveArm_Speed_DynamixelLibrar_T),
  sizeof(ReadArm_Position_DynamixelLib_T)
};

// data type name table
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "InitializeForSpeed_DynamixelL_T",
  "MoveArm_Speed_DynamixelLibrar_T",
  "ReadArm_Position_DynamixelLib_T"
};

// data type transitions for block I/O structure
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&DynamixelLibrary_Prototyping_B.Clock), 0, 0, 4 }
  ,

  { (char_T *)(&DynamixelLibrary_Prototyping_DW.obj), 14, 0, 1 },

  { (char_T *)(&DynamixelLibrary_Prototyping_DW.obj_o), 16, 0, 1 },

  { (char_T *)(&DynamixelLibrary_Prototyping_DW.ToWorkspace3_PWORK.LoggedData),
    11, 0, 4 },

  { (char_T *)(&DynamixelLibrary_Prototyping_DW.obj_g), 15, 0, 1 }
};

// data type transition table for block I/O structure
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

// data type transitions for Parameters structure
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&DynamixelLibrary_Prototyping_P.MATLABSystem1_P_GAIN), 0, 0, 7 }
};

// data type transition table for Parameters structure
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

// [EOF] DynamixelLibrary_Prototyping_dt.h
