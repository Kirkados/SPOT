/*
 * test_pi_types.h
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

#ifndef RTW_HEADER_test_pi_types_h_
#define RTW_HEADER_test_pi_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef struct_tag_00WdPUlkccSGiiWn0iJdWG
#define struct_tag_00WdPUlkccSGiiWn0iJdWG

struct tag_00WdPUlkccSGiiWn0iJdWG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /*struct_tag_00WdPUlkccSGiiWn0iJdWG*/

#ifndef typedef_codertarget_raspi_internal_LE_T
#define typedef_codertarget_raspi_internal_LE_T

typedef struct tag_00WdPUlkccSGiiWn0iJdWG codertarget_raspi_internal_LE_T;

#endif                               /*typedef_codertarget_raspi_internal_LE_T*/

/* Parameters (default storage) */
typedef struct P_test_pi_T_ P_test_pi_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_test_pi_T RT_MODEL_test_pi_T;

#endif                                 /* RTW_HEADER_test_pi_types_h_ */
