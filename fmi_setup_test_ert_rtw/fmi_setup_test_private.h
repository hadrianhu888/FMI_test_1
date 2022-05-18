/*
 * File: fmi_setup_test_private.h
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

#ifndef RTW_HEADER_fmi_setup_test_private_h_
#define RTW_HEADER_fmi_setup_test_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

/* private model entry point functions */
extern void fmi_setup_test_derivatives(RT_MODEL_fmi_setup_test_T *const
  fmi_setup_test_M, real_T fmi_setup_test_U_ref);

#endif                                /* RTW_HEADER_fmi_setup_test_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
