/*
 * fmi_setup_test.c
 *
 * Code generation for model "fmi_setup_test".
 *
 * Model version              : 1.51
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri May 27 18:27:52 2022
 *
 * Target selection: grtfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "fmi_setup_test_capi.h"
#include "fmi_setup_test.h"
#include "fmi_setup_test_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_fmi_setup_test_T fmi_setup_test_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_fmi_setup_test_T fmi_setup_test_Y;

/* Real-time model */
static RT_MODEL_fmi_setup_test_T fmi_setup_test_M_;
RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M = &fmi_setup_test_M_;

/* Model step function */
void fmi_setup_test_step(void)
{
  /* Outport: '<Root>/output' incorporates:
   *  Inport: '<Root>/input'
   *  Inport: '<Root>/input1'
   *  Inport: '<Root>/input2'
   *  Inport: '<Root>/input3'
   *  Inport: '<Root>/input4'
   *  Product: '<Root>/Divide'
   *  Sum: '<Root>/Add'
   *  Sum: '<Root>/Add1'
   *  Sum: '<Root>/Add2'
   */
  fmi_setup_test_Y.output = (((fmi_setup_test_U.input / fmi_setup_test_U.input1
    + fmi_setup_test_U.input4) + fmi_setup_test_U.input1) +
    (fmi_setup_test_U.input2 + fmi_setup_test_U.input3)) +
    fmi_setup_test_U.input3;
}

/* Model initialize function */
void fmi_setup_test_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)fmi_setup_test_M, 0,
                sizeof(RT_MODEL_fmi_setup_test_T));

  /* external inputs */
  (void)memset(&fmi_setup_test_U, 0, sizeof(ExtU_fmi_setup_test_T));

  /* external outputs */
  fmi_setup_test_Y.output = 0.0F;

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  fmi_setup_test_InitializeDataMapInfo();
}

/* Model terminate function */
void fmi_setup_test_terminate(void)
{
  /* (no terminate code required) */
}
