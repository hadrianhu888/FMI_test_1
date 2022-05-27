/*
 * fmi_test_1.c
 *
 * Code generation for model "fmi_test_1".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri May 27 15:29:54 2022
 *
 * Target selection: grtfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "fmi_test_1.h"
#include "fmi_test_1_private.h"

/* Block states (default storage) */
DW_fmi_test_1_T fmi_test_1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_fmi_test_1_T fmi_test_1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_fmi_test_1_T fmi_test_1_Y;

/* Real-time model */
static RT_MODEL_fmi_test_1_T fmi_test_1_M_;
RT_MODEL_fmi_test_1_T *const fmi_test_1_M = &fmi_test_1_M_;

/* Model step function */
void fmi_test_1_step(void)
{
  /* Outport: '<Root>/output' incorporates:
   *  Delay: '<Root>/Delay'
   */
  fmi_test_1_Y.output = fmi_test_1_DW.Delay_DSTATE;

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  Inport: '<Root>/input'
   */
  fmi_test_1_DW.Delay_DSTATE = fmi_test_1_U.input;
}

/* Model initialize function */
void fmi_test_1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(fmi_test_1_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&fmi_test_1_DW, 0,
                sizeof(DW_fmi_test_1_T));

  /* external inputs */
  fmi_test_1_U.input = 0.0;

  /* external outputs */
  fmi_test_1_Y.output = 0.0;

  /* InitializeConditions for Delay: '<Root>/Delay' */
  fmi_test_1_DW.Delay_DSTATE = fmi_test_1_P.Delay_InitialCondition;
}

/* Model terminate function */
void fmi_test_1_terminate(void)
{
  /* (no terminate code required) */
}
