/*
 * ex_codegen_dsp_private.h
 *
 * Code generation for model "ex_codegen_dsp".
 *
 * Model version              : 1.13
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Fri Sep 11 16:13:20 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ex_codegen_dsp_private_h_
#define RTW_HEADER_ex_codegen_dsp_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern void RandSrcInitState_GZ(const uint32_T seed[], uint32_T state[], int32_T
  nChans);
extern void RandSrc_GZ_D(real_T y[], const real_T mean[], int32_T meanLen, const
  real_T xstd[], int32_T xstdLen, uint32_T state[], int32_T nChans, int32_T
  nSamps);
extern void MWSPCGlmsnw_D(const real_T x[], const real_T d[], real_T mu,
  uint32_T *startIdx, real_T xBuf[], real_T wBuf[], int32_T wLen, real_T leakFac,
  int32_T xLen, real_T y[], real_T eY[], real_T wY[]);

#endif                                 /* RTW_HEADER_ex_codegen_dsp_private_h_ */
