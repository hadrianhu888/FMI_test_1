/*
 * fmi_setup_test_1.h
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

#ifndef RTW_HEADER_fmi_setup_test_1_h_
#define RTW_HEADER_fmi_setup_test_1_h_
#include <string.h>
#include "rtw_modelmap.h"
#ifndef fmi_setup_test_1_COMMON_INCLUDES_
#define fmi_setup_test_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* fmi_setup_test_1_COMMON_INCLUDES_ */

#include "fmi_setup_test_1_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<Root>/Delay' */
  real32_T Memory_PreviousInput;       /* '<Root>/Memory' */
} DW_fmi_setup_test_1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T input;                      /* '<Root>/input' */
  real32_T input1;                     /* '<Root>/input1' */
  real32_T input2;                     /* '<Root>/input2' */
  real32_T input3;                     /* '<Root>/input3' */
  real32_T input4;                     /* '<Root>/input4' */
} ExtU_fmi_setup_test_1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T output;                     /* '<Root>/output' */
} ExtY_fmi_setup_test_1_T;

/* Parameters (default storage) */
struct P_fmi_setup_test_1_T_ {
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<Root>/Delay'
                                    */
  real32_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<Root>/Memory'
                                   */
};

/* Real-time Model Data Structure */
struct tag_RTM_fmi_setup_test_1_T {
  const char_T *errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;
};

/* Block parameters (default storage) */
extern P_fmi_setup_test_1_T fmi_setup_test_1_P;

/* Block states (default storage) */
extern DW_fmi_setup_test_1_T fmi_setup_test_1_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_fmi_setup_test_1_T fmi_setup_test_1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_fmi_setup_test_1_T fmi_setup_test_1_Y;

/* Model entry point functions */
extern void fmi_setup_test_1_initialize(void);
extern void fmi_setup_test_1_step(void);
extern void fmi_setup_test_1_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  fmi_setup_test_1_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_fmi_setup_test_1_T *const fmi_setup_test_1_M;

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
 * '<Root>' : 'fmi_setup_test_1'
 * '<S1>'   : 'fmi_setup_test_1/powergui'
 */
#endif                                 /* RTW_HEADER_fmi_setup_test_1_h_ */
