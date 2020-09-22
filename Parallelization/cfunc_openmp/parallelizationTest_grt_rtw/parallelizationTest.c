/*
 * parallelizationTest.c
 *
 * Code generation for model "parallelizationTest".
 *
 * Model version              : 1.23
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Sep 14 12:32:09 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "parallelizationTest.h"
#include "parallelizationTest_private.h"

/* Real-time model */
RT_MODEL_parallelizationTest_T parallelizationTest_M_;
RT_MODEL_parallelizationTest_T *const parallelizationTest_M =
  &parallelizationTest_M_;

/* Model step function */
void parallelizationTest_step(void)
{
  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  /* MATLAB Function 'MATLAB Function1': '<S2>:1' */
  /* '<S2>:1:3' */
  doubleIt(parallelizationTest_P.Constant_Value);

  /* Matfile logging */
  rt_UpdateTXYLogVars(parallelizationTest_M->rtwLogInfo,
                      (&parallelizationTest_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(parallelizationTest_M)!=-1) &&
        !((rtmGetTFinal(parallelizationTest_M)-
           parallelizationTest_M->Timing.taskTime0) >
          parallelizationTest_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(parallelizationTest_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++parallelizationTest_M->Timing.clockTick0)) {
    ++parallelizationTest_M->Timing.clockTickH0;
  }

  parallelizationTest_M->Timing.taskTime0 =
    parallelizationTest_M->Timing.clockTick0 *
    parallelizationTest_M->Timing.stepSize0 +
    parallelizationTest_M->Timing.clockTickH0 *
    parallelizationTest_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void parallelizationTest_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)parallelizationTest_M, 0,
                sizeof(RT_MODEL_parallelizationTest_T));
  rtmSetTFinal(parallelizationTest_M, 10.0);
  parallelizationTest_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    parallelizationTest_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(parallelizationTest_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(parallelizationTest_M->rtwLogInfo, (NULL));
    rtliSetLogT(parallelizationTest_M->rtwLogInfo, "tout");
    rtliSetLogX(parallelizationTest_M->rtwLogInfo, "");
    rtliSetLogXFinal(parallelizationTest_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(parallelizationTest_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(parallelizationTest_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(parallelizationTest_M->rtwLogInfo, 0);
    rtliSetLogDecimation(parallelizationTest_M->rtwLogInfo, 1);
    rtliSetLogY(parallelizationTest_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(parallelizationTest_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(parallelizationTest_M->rtwLogInfo, (NULL));
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(parallelizationTest_M->rtwLogInfo, 0.0,
    rtmGetTFinal(parallelizationTest_M), parallelizationTest_M->Timing.stepSize0,
    (&rtmGetErrorStatus(parallelizationTest_M)));
}

/* Model terminate function */
void parallelizationTest_terminate(void)
{
  /* (no terminate code required) */
}
