/*
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>            /* This example main program uses printf/fflush */
#include "fmi_setup_test.h"            /* Model's header file */

static RT_MODEL_fmi_setup_test_T fmi_setup_test_M_;
static RT_MODEL_fmi_setup_test_T *const fmi_setup_test_MPtr = &fmi_setup_test_M_;/* Real-time model */
static DW_fmi_setup_test_T fmi_setup_test_DW;/* Observable states */
static X_fmi_setup_test_T fmi_setup_test_X;/* Observable continuous states */

/* '<Root>/ref' */
static real_T fmi_setup_test_U_ref;

/* '<Root>/ref1' */
static real_T fmi_setup_test_U_ref1;

/* '<Root>/del' */
static real_T fmi_setup_test_Y_del;

/* '<Root>/del1' */
static real_T fmi_setup_test_Y_del1;

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M);
void rt_OneStep(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(fmi_setup_test_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model for base rate */
  fmi_setup_test_step(fmi_setup_test_M, fmi_setup_test_U_ref,
                      fmi_setup_test_U_ref1, &fmi_setup_test_Y_del,
                      &fmi_setup_test_Y_del1);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M = fmi_setup_test_MPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */
  fmi_setup_test_M->dwork = &fmi_setup_test_DW;
  fmi_setup_test_M->contStates = &fmi_setup_test_X;

  /* Initialize model */
  fmi_setup_test_initialize(fmi_setup_test_M, &fmi_setup_test_U_ref,
    &fmi_setup_test_U_ref1, &fmi_setup_test_Y_del, &fmi_setup_test_Y_del1);

  /* Simulating the model step behavior (in non real-time) to
   *  simulate model behavior at stop time.
   */
  while ((rtmGetErrorStatus(fmi_setup_test_M) == (NULL)) && !rtmGetStopRequested
         (fmi_setup_test_M)) {
    rt_OneStep(fmi_setup_test_M);
  }

  /* Disable rt_OneStep here */
  /* Terminate model */
  fmi_setup_test_terminate(fmi_setup_test_M);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
