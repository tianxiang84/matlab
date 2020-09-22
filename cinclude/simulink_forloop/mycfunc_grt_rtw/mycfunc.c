/*
 * mycfunc.c
 *
 * Code generation for model "mycfunc".
 *
 * Model version              : 1.19
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Sep 15 16:26:38 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "mycfunc.h"
#include "mycfunc_private.h"

/* Real-time model */
RT_MODEL_mycfunc_T mycfunc_M_;
RT_MODEL_mycfunc_T *const mycfunc_M = &mycfunc_M_;

/* Model step function */
void mycfunc_step(void)
{
  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:4' */
  /* '<S1>:1:6' */
  myMult2(21.0);

  /*  Specify the locations of myMult2.h and myMult2.c */

  /* Matfile logging */
  rt_UpdateTXYLogVars(mycfunc_M->rtwLogInfo, (&mycfunc_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(mycfunc_M)!=-1) &&
        !((rtmGetTFinal(mycfunc_M)-mycfunc_M->Timing.taskTime0) >
          mycfunc_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(mycfunc_M, "Simulation finished");
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
  if (!(++mycfunc_M->Timing.clockTick0)) {
    ++mycfunc_M->Timing.clockTickH0;
  }

  mycfunc_M->Timing.taskTime0 = mycfunc_M->Timing.clockTick0 *
    mycfunc_M->Timing.stepSize0 + mycfunc_M->Timing.clockTickH0 *
    mycfunc_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void mycfunc_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)mycfunc_M, 0,
                sizeof(RT_MODEL_mycfunc_T));
  rtmSetTFinal(mycfunc_M, 1.0);
  mycfunc_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    mycfunc_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(mycfunc_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(mycfunc_M->rtwLogInfo, (NULL));
    rtliSetLogT(mycfunc_M->rtwLogInfo, "tout");
    rtliSetLogX(mycfunc_M->rtwLogInfo, "");
    rtliSetLogXFinal(mycfunc_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(mycfunc_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(mycfunc_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(mycfunc_M->rtwLogInfo, 0);
    rtliSetLogDecimation(mycfunc_M->rtwLogInfo, 1);
    rtliSetLogY(mycfunc_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(mycfunc_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(mycfunc_M->rtwLogInfo, (NULL));
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(mycfunc_M->rtwLogInfo, 0.0, rtmGetTFinal
    (mycfunc_M), mycfunc_M->Timing.stepSize0, (&rtmGetErrorStatus(mycfunc_M)));
}

/* Model terminate function */
void mycfunc_terminate(void)
{
  /* (no terminate code required) */
}
