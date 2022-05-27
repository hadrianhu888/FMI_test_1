/*
 * fmi_setup_test_1.c
 *
 * Code generation for model "fmi_setup_test_1".
 *
 * Model version              : 1.53
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri May 27 18:30:21 2022
 *
 * Target selection: grtfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "fmi_setup_test_1_capi.h"
#include "fmi_setup_test_1.h"
#include "fmi_setup_test_1_private.h"

/* Block states (default storage) */
DW_fmi_setup_test_1_T fmi_setup_test_1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_fmi_setup_test_1_T fmi_setup_test_1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_fmi_setup_test_1_T fmi_setup_test_1_Y;

/* Real-time model */
static RT_MODEL_fmi_setup_test_1_T fmi_setup_test_1_M_;
RT_MODEL_fmi_setup_test_1_T *const fmi_setup_test_1_M = &fmi_setup_test_1_M_;

/* Model step function */
void fmi_setup_test_1_step(void)
{
  real32_T rtb_Add2;

  /* Sum: '<Root>/Add2' incorporates:
   *  Delay: '<Root>/Delay'
   *  Inport: '<Root>/input2'
   *  Inport: '<Root>/input3'
   */
  rtb_Add2 = (fmi_setup_test_1_U.input2 + fmi_setup_test_1_U.input3) +
    fmi_setup_test_1_DW.Delay_DSTATE;

  /* Outport: '<Root>/output' incorporates:
   *  Memory: '<Root>/Memory'
   */
  fmi_setup_test_1_Y.output = fmi_setup_test_1_DW.Memory_PreviousInput;

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  Memory: '<Root>/Memory'
   */
  fmi_setup_test_1_DW.Delay_DSTATE = fmi_setup_test_1_DW.Memory_PreviousInput;

  /* Update for Memory: '<Root>/Memory' incorporates:
   *  Inport: '<Root>/input'
   *  Inport: '<Root>/input1'
   *  Inport: '<Root>/input3'
   *  Inport: '<Root>/input4'
   *  Product: '<Root>/Divide'
   *  Sum: '<Root>/Add'
   *  Sum: '<Root>/Add1'
   */
  fmi_setup_test_1_DW.Memory_PreviousInput = (((fmi_setup_test_1_U.input /
    fmi_setup_test_1_U.input1 + fmi_setup_test_1_U.input4) +
    fmi_setup_test_1_U.input1) + rtb_Add2) + fmi_setup_test_1_U.input3;
}

/* Model initialize function */
void fmi_setup_test_1_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)fmi_setup_test_1_M, 0,
                sizeof(RT_MODEL_fmi_setup_test_1_T));

  /* states (dwork) */
  (void) memset((void *)&fmi_setup_test_1_DW, 0,
                sizeof(DW_fmi_setup_test_1_T));

  /* external inputs */
  (void)memset(&fmi_setup_test_1_U, 0, sizeof(ExtU_fmi_setup_test_1_T));

  /* external outputs */
  fmi_setup_test_1_Y.output = 0.0F;

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  fmi_setup_test_1_InitializeDataMapInfo();

  /* InitializeConditions for Delay: '<Root>/Delay' */
  fmi_setup_test_1_DW.Delay_DSTATE = fmi_setup_test_1_P.Delay_InitialCondition;

  /* InitializeConditions for Memory: '<Root>/Memory' */
  fmi_setup_test_1_DW.Memory_PreviousInput =
    fmi_setup_test_1_P.Memory_InitialCondition;
}

/* Model terminate function */
void fmi_setup_test_1_terminate(void)
{
  /* (no terminate code required) */
}
