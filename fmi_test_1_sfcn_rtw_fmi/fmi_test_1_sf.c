/*
 * fmi_test_1_sf.c
 *
 * Code generation for model "fmi_test_1_sf".
 *
 * Model version              : 1.7
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri May 27 15:33:11 2022
 *
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include <math.h>
#include "fmi_test_1_sf.h"
#include "fmi_test_1_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *fmi_test_1_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* System initialize for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  if (ssIsFirstInitCond(S)) {
    P_fmi_test_1_T *_rtP;
    X_fmi_test_1_T *_rtX;
    _rtX = ((X_fmi_test_1_T *) ssGetContStates(S));
    _rtP = ((P_fmi_test_1_T *) ssGetLocalDefaultParam(S));

    /* InitializeConditions for Delay: '<Root>/Delay' */
    ((real_T *)ssGetDWork(S, 0))[0] = _rtP->Delay_InitialCondition;

    /* InitializeConditions for Integrator: '<Root>/Integrator' */
    _rtX->Integrator_CSTATE = _rtP->Integrator_IC;
  } else {
    P_fmi_test_1_T *_rtP;
    X_fmi_test_1_T *_rtX;
    _rtX = ((X_fmi_test_1_T *) ssGetContStates(S));
    _rtP = ((P_fmi_test_1_T *) ssGetLocalDefaultParam(S));

    /* InitializeConditions for Delay: '<Root>/Delay' */
    ((real_T *)ssGetDWork(S, 0))[0] = _rtP->Delay_InitialCondition;

    /* InitializeConditions for Integrator: '<Root>/Integrator' */
    _rtX->Integrator_CSTATE = _rtP->Integrator_IC;
  }
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Check for invalid switching between solver types */
  if (!ssIsVariableStepSolver(S)) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "a solver type of fixed-step "
                     "because this S-Function was created from a model with "
                     "solver type of variable-step solver and it has continuous time blocks. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

#endif

  fmi_test_1_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  B_fmi_test_1_T *_rtB;
  X_fmi_test_1_T *_rtX;
  _rtX = ((X_fmi_test_1_T *) ssGetContStates(S));
  _rtB = ((B_fmi_test_1_T *) ssGetLocalBlockIO(S));
  if (ssIsSampleHit(S, 1, 0)) {
    /* Outport: '<Root>/output' incorporates:
     *  Delay: '<Root>/Delay'
     */
    ((real_T *)ssGetOutputPortSignal(S, 0))[0] = ((real_T *)ssGetDWork(S, 0))[0];
  }

  if (1) {
    /* Integrator: '<Root>/Integrator' */
    _rtB->Integrator = _rtX->Integrator_CSTATE;

    /* Outport: '<Root>/output1' */
    ((real_T *)ssGetOutputPortSignal(S, 1))[0] = _rtB->Integrator;
  }

  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  if (ssIsSampleHit(S, 1, 0)) {
    /* Update for Delay: '<Root>/Delay' */
    ((real_T *)ssGetDWork(S, 0))[0] = *((const real_T **)
      ssGetInputPortSignalPtrs(S, 0))[0];
  }

  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
#define MDL_DERIVATIVES

static void mdlDerivatives(SimStruct *S)
{
  XDot_fmi_test_1_T *_rtXdot;
  _rtXdot = ((XDot_fmi_test_1_T *) ssGetdX(S));

  /* Derivatives for Integrator: '<Root>/Integrator' */
  _rtXdot->Integrator_CSTATE = *((const real_T **)ssGetInputPortSignalPtrs(S, 1))
    [0];
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#include "fmi_test_1_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 2);           /* Number of sample times */
  ssSetNumContStates(S, 1);            /* Number of continuous states */
  ssSetNumPeriodicContStates(S, 0);   /* Number of periodic continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */
  ssSetZCCacheNeedsReset(S, 0);
  ssSetDerivCacheNeedsReset(S, 0);

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 2))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 0, 0.2);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* outport number: 1 */
  if (!ssSetOutputPortVectorDimension(S, 1, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 1, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 1, 0.0);
  ssSetOutputPortOffsetTime(S, 1, 0.0);
  ssSetOutputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 2))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortSampleTime(S, 0, 0.2);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 1 */
  {
    if (!ssSetInputPortVectorDimension(S, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 1, SS_DOUBLE);
    }

    ssSetInputPortSampleTime(S, 1, 0.0);
    ssSetInputPortOffsetTime(S, 1, 0.0);
    ssSetInputPortOverWritable(S, 1, 0);
    ssSetInputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 1)) {
    return;
  }

  /* '<Root>/Delay': DSTATE */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 1);
  ssSetDWorkUsedAsDState(S, 0, 1);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, true);
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 0.0);
  ssSetSampleTime(S, 1, 0.2);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
  ssSetOffsetTime(S, 1, 0.0);
}

#if defined(MATLAB_MEX_FILE)
#include "fixedpoint.c"
#include "simulink.c"
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                fmi_test_1_sf
#include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
