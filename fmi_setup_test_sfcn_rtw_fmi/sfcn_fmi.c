/*
 * sfcn_fmi.c
 *
 *  Model-specific code required to build FMI executable
 *  from Simulink model "fmi_setup_test".
 *
 * Generated on : Fri May 27 18:25:59 2022
 */

#include <stddef.h>
#if defined(MATLAB_MEX_FILE)
#include "mex.h"
#undef mexCallMATLAB
#define mexCallMATLAB                  sfcn_fmi_load_mex
#else

/* Code to enable global tunable parameters in stand-alone mode */
#define RTW_GENERATED_SFCN_TUNABLE_PRMS_fmi_setup_test_sf
#define RTW_GENERATED_S_FUNCTION
#include "simstruc.h"
#include "fixedpoint.h"
#if defined (_MSC_VER)

#pragma warning(disable:4005)

#endif

#define mxGetData(x)                   x
#define ssFxpSetU32BitRegionCompliant(S, v)
#include "rt_nonfinite.c"
#endif

/* Include Simulink Coder-generated model code */
#include "fmi_setup_test_sf.c"

/* Register model callback routines in SimStruct */
void sfcn_fmi_registerMdlCallbacks_(SimStruct*S)
{
  ssSetmdlInitializeSizes(S, mdlInitializeSizes);
  ssSetmdlInitializeSampleTimes(S, mdlInitializeSampleTimes);

#if defined(MDL_INITIALIZE_CONDITIONS)

  ssSetmdlInitializeConditions(S, mdlInitializeConditions);

#else

  ssSetmdlInitializeConditions(S, NULL);

#endif

#if defined(MDL_START)

  ssSetmdlStart(S, mdlStart);

#else

  ssSetmdlStart(S, NULL);

#endif

#if defined(RTW_GENERATED_ENABLE)

  _ssSetRTWGeneratedEnable(S, mdlEnable);

#else

  _ssSetRTWGeneratedEnable(S, NULL);

#endif

  ssSetmdlOutputs(S,mdlOutputs);

#if defined(MDL_ZERO_CROSSINGS)

  ssSetmdlZeroCrossings(S, mdlZeroCrossings);

#else

  ssSetmdlZeroCrossings(S, NULL);

#endif

#if defined(MDL_DERIVATIVES)

  ssSetmdlDerivatives(S, mdlDerivatives);

#else

  ssSetmdlDerivatives(S, NULL);

#endif

#if defined (MDL_UPDATE)

  ssSetmdlUpdate(S, mdlUpdate);

#else

  ssSetmdlUpdate(S, NULL);

#endif

  ssSetmdlTerminate(S, mdlTerminate);
}

/* Register SolverInfo model method pointers */

/* Empty callback for use as mdlProjection in ODE solver */
static void mdlNoOpFunc(SimStruct *S)
{
  return;
}

void sfcn_fmi_registerRTModelCallbacks_(SimStruct*S)
{

#if defined(MDL_DERIVATIVES)

  S->mdlInfo->solverInfo->modelMethodsPtr->rtmDervisFcn = (rtMdlDerivativesFcn)
    mdlDerivatives;

#else

  S->mdlInfo->solverInfo->modelMethodsPtr->rtmDervisFcn = (rtMdlProjectionFcn)
    mdlNoOpFunc;

#endif

  S->mdlInfo->solverInfo->modelMethodsPtr->rtmProjectionFcn =
    (rtMdlProjectionFcn) mdlNoOpFunc;
  S->mdlInfo->solverInfo->modelMethodsPtr->rtmOutputsFcn = (rtMdlOutputsFcn)
    mdlOutputs;
}

/* Copy parameter values to S-function mxArrays */
void sfcn_fmi_copyToSFcnParams_(SimStruct* S)
{
  return;                /* No parameters in model (probably due to inlining) */
}

/* Handle mxArrays for global tunable parameters */
void sfcn_fmi_mxGlobalTunable_(SimStruct* S, int_T create, int_T update)
{
  return;                         /* no global tunable parameters as mxArrays */
}
