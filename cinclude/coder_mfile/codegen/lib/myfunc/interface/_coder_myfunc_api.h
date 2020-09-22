/*
 * File: _coder_myfunc_api.h
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 15-Sep-2020 09:27:32
 */

#ifndef _CODER_MYFUNC_API_H
#define _CODER_MYFUNC_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_myfunc_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern real_T myfunc(void);
extern void myfunc_api(const mxArray *plhs[1]);
extern void myfunc_atexit(void);
extern void myfunc_initialize(void);
extern void myfunc_terminate(void);
extern void myfunc_xil_terminate(void);

#endif

/*
 * File trailer for _coder_myfunc_api.h
 *
 * [EOF]
 */
