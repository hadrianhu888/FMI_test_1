/*
 * File: fmi_setup_test.c
 *
 * Code generated for Simulink model 'fmi_setup_test'.
 *
 * Model version                  : 1.27
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Tue May 17 19:57:27 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "fmi_setup_test_capi.h"
#include "fmi_setup_test.h"
#include "fmi_setup_test_private.h"

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si ,
  RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M, real_T fmi_setup_test_U_ref,
  real_T fmi_setup_test_U_ref1, real_T *fmi_setup_test_Y_del, real_T
  *fmi_setup_test_Y_del1)
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 1;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  fmi_setup_test_derivatives(fmi_setup_test_M, fmi_setup_test_U_ref);

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  fmi_setup_test_step(fmi_setup_test_M, fmi_setup_test_U_ref,
                      fmi_setup_test_U_ref1, fmi_setup_test_Y_del,
                      fmi_setup_test_Y_del1);
  fmi_setup_test_derivatives(fmi_setup_test_M, fmi_setup_test_U_ref);

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  fmi_setup_test_step(fmi_setup_test_M, fmi_setup_test_U_ref,
                      fmi_setup_test_U_ref1, fmi_setup_test_Y_del,
                      fmi_setup_test_Y_del1);
  fmi_setup_test_derivatives(fmi_setup_test_M, fmi_setup_test_U_ref);

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void fmi_setup_test_step(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M,
  real_T fmi_setup_test_U_ref, real_T fmi_setup_test_U_ref1, real_T
  *fmi_setup_test_Y_del, real_T *fmi_setup_test_Y_del1)
{
  DW_fmi_setup_test_T *fmi_setup_test_DW = fmi_setup_test_M->dwork;
  X_fmi_setup_test_T *fmi_setup_test_X = fmi_setup_test_M->contStates;
  if (rtmIsMajorTimeStep(fmi_setup_test_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&fmi_setup_test_M->solverInfo,
                          ((fmi_setup_test_M->Timing.clockTick0+1)*
      fmi_setup_test_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(fmi_setup_test_M)) {
    fmi_setup_test_M->Timing.t[0] = rtsiGetT(&fmi_setup_test_M->solverInfo);
  }

  /* Outport: '<Root>/del' incorporates:
   *  Integrator: '<Root>/Integrator'
   */
  *fmi_setup_test_Y_del = fmi_setup_test_X->Integrator_CSTATE;
  if (rtmIsMajorTimeStep(fmi_setup_test_M)) {
    /* Outport: '<Root>/del1' incorporates:
     *  UnitDelay: '<Root>/Unit Delay'
     */
    *fmi_setup_test_Y_del1 = fmi_setup_test_DW->UnitDelay_DSTATE;
  }

  if (rtmIsMajorTimeStep(fmi_setup_test_M)) {
    if (rtmIsMajorTimeStep(fmi_setup_test_M)) {
      /* Update for UnitDelay: '<Root>/Unit Delay' incorporates:
       *  Inport: '<Root>/ref1'
       */
      fmi_setup_test_DW->UnitDelay_DSTATE = fmi_setup_test_U_ref1;
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(fmi_setup_test_M)) {
    rt_ertODEUpdateContinuousStates(&fmi_setup_test_M->solverInfo,
      fmi_setup_test_M, fmi_setup_test_U_ref, fmi_setup_test_U_ref1,
      fmi_setup_test_Y_del, fmi_setup_test_Y_del1);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++fmi_setup_test_M->Timing.clockTick0;
    fmi_setup_test_M->Timing.t[0] = rtsiGetSolverStopTime
      (&fmi_setup_test_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      fmi_setup_test_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void fmi_setup_test_derivatives(RT_MODEL_fmi_setup_test_T *const
  fmi_setup_test_M, real_T fmi_setup_test_U_ref)
{
  XDot_fmi_setup_test_T *_rtXdot;
  _rtXdot = ((XDot_fmi_setup_test_T *) fmi_setup_test_M->derivs);

  /* Derivatives for Integrator: '<Root>/Integrator' incorporates:
   *  Inport: '<Root>/ref'
   */
  _rtXdot->Integrator_CSTATE = fmi_setup_test_U_ref;
}

/* Model initialize function */
void fmi_setup_test_initialize(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M,
  real_T *fmi_setup_test_U_ref, real_T *fmi_setup_test_U_ref1, real_T
  *fmi_setup_test_Y_del, real_T *fmi_setup_test_Y_del1)
{
  DW_fmi_setup_test_T *fmi_setup_test_DW = fmi_setup_test_M->dwork;
  X_fmi_setup_test_T *fmi_setup_test_X = fmi_setup_test_M->contStates;

  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&fmi_setup_test_M->solverInfo,
                          &fmi_setup_test_M->Timing.simTimeStep);
    rtsiSetTPtr(&fmi_setup_test_M->solverInfo, &rtmGetTPtr(fmi_setup_test_M));
    rtsiSetStepSizePtr(&fmi_setup_test_M->solverInfo,
                       &fmi_setup_test_M->Timing.stepSize0);
    rtsiSetdXPtr(&fmi_setup_test_M->solverInfo, &fmi_setup_test_M->derivs);
    rtsiSetContStatesPtr(&fmi_setup_test_M->solverInfo, (real_T **)
                         &fmi_setup_test_M->contStates);
    rtsiSetNumContStatesPtr(&fmi_setup_test_M->solverInfo,
      &fmi_setup_test_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&fmi_setup_test_M->solverInfo,
      &fmi_setup_test_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&fmi_setup_test_M->solverInfo,
      &fmi_setup_test_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&fmi_setup_test_M->solverInfo,
      &fmi_setup_test_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&fmi_setup_test_M->solverInfo, (&rtmGetErrorStatus
      (fmi_setup_test_M)));
    rtsiSetRTModelPtr(&fmi_setup_test_M->solverInfo, fmi_setup_test_M);
  }

  rtsiSetSimTimeStep(&fmi_setup_test_M->solverInfo, MAJOR_TIME_STEP);
  fmi_setup_test_M->intgData.y = fmi_setup_test_M->odeY;
  fmi_setup_test_M->intgData.f[0] = fmi_setup_test_M->odeF[0];
  fmi_setup_test_M->intgData.f[1] = fmi_setup_test_M->odeF[1];
  fmi_setup_test_M->intgData.f[2] = fmi_setup_test_M->odeF[2];
  fmi_setup_test_M->contStates = ((X_fmi_setup_test_T *) fmi_setup_test_X);
  rtsiSetSolverData(&fmi_setup_test_M->solverInfo, (void *)
                    &fmi_setup_test_M->intgData);
  rtsiSetSolverName(&fmi_setup_test_M->solverInfo,"ode3");
  rtmSetTPtr(fmi_setup_test_M, &fmi_setup_test_M->Timing.tArray[0]);
  fmi_setup_test_M->Timing.stepSize0 = 0.2;

  /* states (continuous) */
  {
    (void) memset((void *)fmi_setup_test_X, 0,
                  sizeof(X_fmi_setup_test_T));
  }

  /* states (dwork) */
  (void) memset((void *)fmi_setup_test_DW, 0,
                sizeof(DW_fmi_setup_test_T));

  /* external inputs */
  *fmi_setup_test_U_ref = 0.0;
  *fmi_setup_test_U_ref1 = 0.0;

  /* external outputs */
  *fmi_setup_test_Y_del = 0.0;
  *fmi_setup_test_Y_del1 = 0.0;

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  fmi_setup_test_InitializeDataMapInfo(fmi_setup_test_M, (X_fmi_setup_test_T *)
    fmi_setup_test_M->contStates);

  /* InitializeConditions for Integrator: '<Root>/Integrator' */
  fmi_setup_test_X->Integrator_CSTATE = fmi_setup_test_P.Integrator_IC;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  fmi_setup_test_DW->UnitDelay_DSTATE =
    fmi_setup_test_P.UnitDelay_InitialCondition;
}

/* Model terminate function */
void fmi_setup_test_terminate(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(fmi_setup_test_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
