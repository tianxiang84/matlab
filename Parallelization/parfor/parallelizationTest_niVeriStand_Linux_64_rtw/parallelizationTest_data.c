#include "ni_modelframework.h"
#if defined VXWORKS || defined kNIOSLinux
#define parallelizationTest_P          parallelizationTest_P DataSection(".NIVS.defaultparams")
#endif

/*
 * parallelizationTest_data.c
 *
 * Code generation for model "parallelizationTest".
 *
 * Model version              : 1.9
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Sep 08 12:15:36 2020
 *
 * Target selection: NIVeriStand_Linux_64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "parallelizationTest.h"
#include "parallelizationTest_private.h"

/* Block parameters (auto storage) */
P_parallelizationTest_T parallelizationTest_P = {
  500.0,                               /* Expression: 500
                                        * Referenced by: '<Root>/matrix_size'
                                        */
  15.0                                 /* Expression: 15
                                        * Referenced by: '<Root>/repeat_times'
                                        */
};

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : parallelizationTest
 * Model version : 1.9
 * VeriStand Model Framework version : 2017.0.1.0 (2017 f1)
 * Source generated on : Tue Sep 08 12:15:36 2020
 *========================================================================*/
#if defined VXWORKS || defined kNIOSLinux

typedef struct {
  int32_t size;
  int32_t width;
  int32_t basetype;
} NI_ParamSizeWidth;

NI_ParamSizeWidth P_parallelizationTest_T_sizes[] DataSection(
  ".NIVS.defaultparamsizes") = {
  { sizeof(P_parallelizationTest_T), 1 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },
};

#endif
