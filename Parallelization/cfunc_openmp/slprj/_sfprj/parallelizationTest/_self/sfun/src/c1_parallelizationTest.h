#ifndef __c1_parallelizationTest_h__
#define __c1_parallelizationTest_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_parallelizationTestInstanceStruct
#define typedef_SFc1_parallelizationTestInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_parallelizationTest;
  void *c1_fEmlrtCtx;
  real_T *c1_u;
  real_T *c1_y;
} SFc1_parallelizationTestInstanceStruct;

#endif                                 /*typedef_SFc1_parallelizationTestInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_parallelizationTest_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_parallelizationTest_get_check_sum(mxArray *plhs[]);
extern void c1_parallelizationTest_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
