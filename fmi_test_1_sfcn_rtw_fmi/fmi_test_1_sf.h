/*
 * fmi_test_1_sf.h
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

#ifndef RTW_HEADER_fmi_test_1_sf_h_
#define RTW_HEADER_fmi_test_1_sf_h_
#include <string.h>
#include <stddef.h>
#ifndef fmi_test_1_sf_COMMON_INCLUDES_
#define fmi_test_1_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                fmi_test_1_sf
#define S_FUNCTION_LEVEL               2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* fmi_test_1_sf_COMMON_INCLUDES_ */

#include "fmi_test_1_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Block signals (default storage) */
typedef struct {
  real_T Integrator;                   /* '<Root>/Integrator' */
} B_fmi_test_1_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} X_fmi_test_1_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} XDot_fmi_test_1_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<Root>/Integrator' */
} XDis_fmi_test_1_T;

/* Continuous State Absolute Tolerance  */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} CStateAbsTol_fmi_test_1_T;

/* Continuous State Perturb Min  */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} CXPtMin_fmi_test_1_T;

/* Continuous State Perturb Max  */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} CXPtMax_fmi_test_1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T *input;                       /* '<Root>/input' */
  real_T *input1;                      /* '<Root>/input1' */
} ExternalUPtrs_fmi_test_1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T *output;                      /* '<Root>/output' */
  real_T *output1;                     /* '<Root>/output1' */
} ExtY_fmi_test_1_T;

/* Parameters (default storage) */
struct P_fmi_test_1_T_ {
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<Root>/Delay'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<Root>/Integrator'
                                        */
};

extern P_fmi_test_1_T fmi_test_1_DefaultP;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'fmi_test_1_sf'
 * '<S1>'   : 'fmi_test_1/powergui'
 */
#endif                                 /* RTW_HEADER_fmi_test_1_sf_h_ */
