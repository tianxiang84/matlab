/*
 * File: myfunc_initialize.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 15-Sep-2020 09:27:32
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "myfunc.h"
#include "myfunc_initialize.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void myfunc_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * File trailer for myfunc_initialize.c
 *
 * [EOF]
 */