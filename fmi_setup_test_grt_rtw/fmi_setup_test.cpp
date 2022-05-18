/*
 * fmi_setup_test.cpp
 *
 * Code generation for model "fmi_setup_test".
 *
 * Model version              : 1.27
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Tue May 17 19:49:05 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "fmi_setup_test.h"
#include "fmi_setup_test_private.h"

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
void fmi_setup_testModelClass::rt_ertODEUpdateContinuousStates(RTWSolverInfo *si
  )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3]{
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3]{
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t { rtsiGetT(si) };

  time_T tnew { rtsiGetSolverStopTime(si) };

  time_T h { rtsiGetStepSize(si) };

  real_T *x { rtsiGetContStates(si) };

  ODE3_IntgData *id { static_cast<ODE3_IntgData *>(rtsiGetSolverData(si)) };

  real_T *y { id->y };

  real_T *f0 { id->f[0] };

  real_T *f1 { id->f[1] };

  real_T *f2 { id->f[2] };

  real_T hB[3];
  int_T i;
  int_T nXc { 1 };

  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) std::memcpy(y, x,
                     static_cast<uint_T>(nXc)*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  fmi_setup_test_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  this->step();
  fmi_setup_test_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  this->step();
  fmi_setup_test_derivatives();

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
void fmi_setup_testModelClass::step()
{
  if (rtmIsMajorTimeStep((&fmi_setup_test_M))) {
    /* set solver stop time */
    if (!((&fmi_setup_test_M)->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&(&fmi_setup_test_M)->solverInfo,
                            (((&fmi_setup_test_M)->Timing.clockTickH0 + 1) *
        (&fmi_setup_test_M)->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&(&fmi_setup_test_M)->solverInfo,
                            (((&fmi_setup_test_M)->Timing.clockTick0 + 1) *
        (&fmi_setup_test_M)->Timing.stepSize0 + (&fmi_setup_test_M)
        ->Timing.clockTickH0 * (&fmi_setup_test_M)->Timing.stepSize0 *
        4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep((&fmi_setup_test_M))) {
    (&fmi_setup_test_M)->Timing.t[0] = rtsiGetT(&(&fmi_setup_test_M)->solverInfo);
  }

  /* Integrator: '<Root>/Integrator' */
  fmi_setup_test_B.Integrator = fmi_setup_test_X.Integrator_CSTATE;

  /* Outport: '<Root>/del' */
  fmi_setup_test_Y.del = fmi_setup_test_B.Integrator;
  if (rtmIsMajorTimeStep((&fmi_setup_test_M))) {
    /* Outport: '<Root>/del1' incorporates:
     *  UnitDelay: '<Root>/Unit Delay'
     */
    fmi_setup_test_Y.del1 = fmi_setup_test_DW.UnitDelay_DSTATE;
  }

  if (rtmIsMajorTimeStep((&fmi_setup_test_M))) {
    /* Matfile logging */
    rt_UpdateTXYLogVars((&fmi_setup_test_M)->rtwLogInfo, ((&fmi_setup_test_M)
      ->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep((&fmi_setup_test_M))) {
    if (rtmIsMajorTimeStep((&fmi_setup_test_M))) {
      /* Update for UnitDelay: '<Root>/Unit Delay' incorporates:
       *  Inport: '<Root>/ref1'
       */
      fmi_setup_test_DW.UnitDelay_DSTATE = fmi_setup_test_U.ref1;
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep((&fmi_setup_test_M))) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal((&fmi_setup_test_M))!=-1) &&
          !((rtmGetTFinal((&fmi_setup_test_M))-((((&fmi_setup_test_M)
               ->Timing.clockTick1+(&fmi_setup_test_M)->Timing.clockTickH1*
               4294967296.0)) * 0.2)) > ((((&fmi_setup_test_M)
              ->Timing.clockTick1+(&fmi_setup_test_M)->Timing.clockTickH1*
              4294967296.0)) * 0.2) * (DBL_EPSILON))) {
        rtmSetErrorStatus((&fmi_setup_test_M), "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&(&fmi_setup_test_M)->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++(&fmi_setup_test_M)->Timing.clockTick0)) {
      ++(&fmi_setup_test_M)->Timing.clockTickH0;
    }

    (&fmi_setup_test_M)->Timing.t[0] = rtsiGetSolverStopTime(&(&fmi_setup_test_M)
      ->solverInfo);

    {
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      (&fmi_setup_test_M)->Timing.clockTick1++;
      if (!(&fmi_setup_test_M)->Timing.clockTick1) {
        (&fmi_setup_test_M)->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void fmi_setup_testModelClass::fmi_setup_test_derivatives()
{
  XDot_fmi_setup_test_T *_rtXdot;
  _rtXdot = ((XDot_fmi_setup_test_T *) (&fmi_setup_test_M)->derivs);

  /* Derivatives for Integrator: '<Root>/Integrator' incorporates:
   *  Inport: '<Root>/ref'
   */
  _rtXdot->Integrator_CSTATE = fmi_setup_test_U.ref;
}

/* Model initialize function */
void fmi_setup_testModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&(&fmi_setup_test_M)->solverInfo, &(&fmi_setup_test_M
                          )->Timing.simTimeStep);
    rtsiSetTPtr(&(&fmi_setup_test_M)->solverInfo, &rtmGetTPtr((&fmi_setup_test_M)));
    rtsiSetStepSizePtr(&(&fmi_setup_test_M)->solverInfo, &(&fmi_setup_test_M)
                       ->Timing.stepSize0);
    rtsiSetdXPtr(&(&fmi_setup_test_M)->solverInfo, &(&fmi_setup_test_M)->derivs);
    rtsiSetContStatesPtr(&(&fmi_setup_test_M)->solverInfo, (real_T **)
                         &(&fmi_setup_test_M)->contStates);
    rtsiSetNumContStatesPtr(&(&fmi_setup_test_M)->solverInfo,
      &(&fmi_setup_test_M)->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&(&fmi_setup_test_M)->solverInfo,
      &(&fmi_setup_test_M)->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&(&fmi_setup_test_M)->solverInfo,
      &(&fmi_setup_test_M)->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&(&fmi_setup_test_M)->solverInfo,
      &(&fmi_setup_test_M)->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&(&fmi_setup_test_M)->solverInfo, (&rtmGetErrorStatus
      ((&fmi_setup_test_M))));
    rtsiSetRTModelPtr(&(&fmi_setup_test_M)->solverInfo, (&fmi_setup_test_M));
  }

  rtsiSetSimTimeStep(&(&fmi_setup_test_M)->solverInfo, MAJOR_TIME_STEP);
  (&fmi_setup_test_M)->intgData.y = (&fmi_setup_test_M)->odeY;
  (&fmi_setup_test_M)->intgData.f[0] = (&fmi_setup_test_M)->odeF[0];
  (&fmi_setup_test_M)->intgData.f[1] = (&fmi_setup_test_M)->odeF[1];
  (&fmi_setup_test_M)->intgData.f[2] = (&fmi_setup_test_M)->odeF[2];
  (&fmi_setup_test_M)->contStates = ((X_fmi_setup_test_T *) &fmi_setup_test_X);
  rtsiSetSolverData(&(&fmi_setup_test_M)->solverInfo, static_cast<void *>
                    (&(&fmi_setup_test_M)->intgData));
  rtsiSetSolverName(&(&fmi_setup_test_M)->solverInfo,"ode3");
  rtmSetTPtr((&fmi_setup_test_M), &(&fmi_setup_test_M)->Timing.tArray[0]);
  rtmSetTFinal((&fmi_setup_test_M), 10.0);
  (&fmi_setup_test_M)->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (nullptr);
    (&fmi_setup_test_M)->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo((&fmi_setup_test_M)->rtwLogInfo, (nullptr));
    rtliSetLogXSignalPtrs((&fmi_setup_test_M)->rtwLogInfo, (nullptr));
    rtliSetLogT((&fmi_setup_test_M)->rtwLogInfo, "tout");
    rtliSetLogX((&fmi_setup_test_M)->rtwLogInfo, "");
    rtliSetLogXFinal((&fmi_setup_test_M)->rtwLogInfo, "");
    rtliSetLogVarNameModifier((&fmi_setup_test_M)->rtwLogInfo, "rt_");
    rtliSetLogFormat((&fmi_setup_test_M)->rtwLogInfo, 0);
    rtliSetLogMaxRows((&fmi_setup_test_M)->rtwLogInfo, 0);
    rtliSetLogDecimation((&fmi_setup_test_M)->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[2];
      rt_LoggedOutputSignalPtrs[0] = &fmi_setup_test_Y.del;
      rt_LoggedOutputSignalPtrs[1] = &fmi_setup_test_Y.del1;
      rtliSetLogYSignalPtrs((&fmi_setup_test_M)->rtwLogInfo, ((LogSignalPtrsType)
        rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] {
        1,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] {
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] {
        1,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] {
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] {
        (nullptr),
        (nullptr)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] {
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] {
        SS_DOUBLE,
        SS_DOUBLE
      };

      static int_T rt_LoggedOutputComplexSignals[] {
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] {
        (nullptr),
        (nullptr)
      };

      static const char_T *rt_LoggedOutputLabels[]{
        "",
        "" };

      static const char_T *rt_LoggedOutputBlockNames[]{
        "fmi_setup_test/del",
        "fmi_setup_test/del1" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] {
        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] {
        {
          2,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (nullptr),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (nullptr),
          (nullptr),
          (nullptr),

          { rt_LoggedOutputBlockNames },

          { (nullptr) },
          (nullptr),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo((&fmi_setup_test_M)->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
    }

    rtliSetLogY((&fmi_setup_test_M)->rtwLogInfo, "yout");
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime((&fmi_setup_test_M)->rtwLogInfo, 0.0,
    rtmGetTFinal((&fmi_setup_test_M)), (&fmi_setup_test_M)->Timing.stepSize0,
    (&rtmGetErrorStatus((&fmi_setup_test_M))));

  /* InitializeConditions for Integrator: '<Root>/Integrator' */
  fmi_setup_test_X.Integrator_CSTATE = fmi_setup_test_P.Integrator_IC;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  fmi_setup_test_DW.UnitDelay_DSTATE =
    fmi_setup_test_P.UnitDelay_InitialCondition;
}

/* Model terminate function */
void fmi_setup_testModelClass::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
fmi_setup_testModelClass::fmi_setup_testModelClass() :
  fmi_setup_test_U(),
  fmi_setup_test_Y(),
  fmi_setup_test_B(),
  fmi_setup_test_DW(),
  fmi_setup_test_X(),
  fmi_setup_test_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
fmi_setup_testModelClass::~fmi_setup_testModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_fmi_setup_test_T * fmi_setup_testModelClass::getRTM()
{
  return (&fmi_setup_test_M);
}
