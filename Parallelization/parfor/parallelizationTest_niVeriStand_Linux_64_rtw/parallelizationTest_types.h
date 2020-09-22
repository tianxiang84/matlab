/*
 * parallelizationTest_types.h
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

#ifndef RTW_HEADER_parallelizationTest_types_h_
#define RTW_HEADER_parallelizationTest_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common_parallelizat_T
#define typedef_emxArray__common_parallelizat_T

typedef struct emxArray__common emxArray__common_parallelizat_T;

#endif                                 /*typedef_emxArray__common_parallelizat_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T_parallelizati_T
#define typedef_emxArray_real_T_parallelizati_T

typedef struct emxArray_real_T emxArray_real_T_parallelizati_T;

#endif                                 /*typedef_emxArray_real_T_parallelizati_T*/

#ifndef struct_emxArray_creal_T
#define struct_emxArray_creal_T

struct emxArray_creal_T
{
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_creal_T*/

#ifndef typedef_emxArray_creal_T_parallelizat_T
#define typedef_emxArray_creal_T_parallelizat_T

typedef struct emxArray_creal_T emxArray_creal_T_parallelizat_T;

#endif                                 /*typedef_emxArray_creal_T_parallelizat_T*/

/* Parameters (auto storage) */
typedef struct P_parallelizationTest_T_ P_parallelizationTest_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_parallelizationTest_T RT_MODEL_parallelizationTest_T;

#endif                                 /* RTW_HEADER_parallelizationTest_types_h_ */
