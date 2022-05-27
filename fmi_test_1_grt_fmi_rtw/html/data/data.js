var dataJson = {"arch":{"ispc":true,"isunix":false,"ismac":false},"build":"fmi_test_1","ref":false,"files":[{"name":"fmi_test_1.c","type":"source","group":"model","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Model files","code":"/*\r\n * fmi_test_1.c\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#include \"fmi_test_1.h\"\r\n#include \"fmi_test_1_private.h\"\r\n\r\n/* Block states (default storage) */\r\nDW_fmi_test_1_T fmi_test_1_DW;\r\n\r\n/* External inputs (root inport signals with default storage) */\r\nExtU_fmi_test_1_T fmi_test_1_U;\r\n\r\n/* External outputs (root outports fed by signals with default storage) */\r\nExtY_fmi_test_1_T fmi_test_1_Y;\r\n\r\n/* Real-time model */\r\nstatic RT_MODEL_fmi_test_1_T fmi_test_1_M_;\r\nRT_MODEL_fmi_test_1_T *const fmi_test_1_M = &fmi_test_1_M_;\r\n\r\n/* Model step function */\r\nvoid fmi_test_1_step(void)\r\n{\r\n  /* Outport: '<Root>/output' incorporates:\r\n   *  Delay: '<Root>/Delay'\r\n   */\r\n  fmi_test_1_Y.output = fmi_test_1_DW.Delay_DSTATE;\r\n\r\n  /* Update for Delay: '<Root>/Delay' incorporates:\r\n   *  Inport: '<Root>/input'\r\n   */\r\n  fmi_test_1_DW.Delay_DSTATE = fmi_test_1_U.input;\r\n}\r\n\r\n/* Model initialize function */\r\nvoid fmi_test_1_initialize(void)\r\n{\r\n  /* Registration code */\r\n\r\n  /* initialize error status */\r\n  rtmSetErrorStatus(fmi_test_1_M, (NULL));\r\n\r\n  /* states (dwork) */\r\n  (void) memset((void *)&fmi_test_1_DW, 0,\r\n                sizeof(DW_fmi_test_1_T));\r\n\r\n  /* external inputs */\r\n  fmi_test_1_U.input = 0.0;\r\n\r\n  /* external outputs */\r\n  fmi_test_1_Y.output = 0.0;\r\n\r\n  /* InitializeConditions for Delay: '<Root>/Delay' */\r\n  fmi_test_1_DW.Delay_DSTATE = fmi_test_1_P.Delay_InitialCondition;\r\n}\r\n\r\n/* Model terminate function */\r\nvoid fmi_test_1_terminate(void)\r\n{\r\n  /* (no terminate code required) */\r\n}\r\n"},{"name":"fmi_test_1.h","type":"header","group":"model","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Model files","code":"/*\r\n * fmi_test_1.h\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#ifndef RTW_HEADER_fmi_test_1_h_\r\n#define RTW_HEADER_fmi_test_1_h_\r\n#include <stddef.h>\r\n#include <string.h>\r\n#ifndef fmi_test_1_COMMON_INCLUDES_\r\n#define fmi_test_1_COMMON_INCLUDES_\r\n#include \"rtwtypes.h\"\r\n#include \"rtw_continuous.h\"\r\n#include \"rtw_solver.h\"\r\n#endif                                 /* fmi_test_1_COMMON_INCLUDES_ */\r\n\r\n#include \"fmi_test_1_types.h\"\r\n\r\n/* Shared type includes */\r\n#include \"multiword_types.h\"\r\n\r\n/* Macros for accessing real-time model data structure */\r\n#ifndef rtmGetErrorStatus\r\n#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)\r\n#endif\r\n\r\n#ifndef rtmSetErrorStatus\r\n#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))\r\n#endif\r\n\r\n/* Block states (default storage) for system '<Root>' */\r\ntypedef struct {\r\n  real_T Delay_DSTATE;                 /* '<Root>/Delay' */\r\n} DW_fmi_test_1_T;\r\n\r\n/* External inputs (root inport signals with default storage) */\r\ntypedef struct {\r\n  real_T input;                        /* '<Root>/input' */\r\n} ExtU_fmi_test_1_T;\r\n\r\n/* External outputs (root outports fed by signals with default storage) */\r\ntypedef struct {\r\n  real_T output;                       /* '<Root>/output' */\r\n} ExtY_fmi_test_1_T;\r\n\r\n/* Parameters (default storage) */\r\nstruct P_fmi_test_1_T_ {\r\n  real_T Delay_InitialCondition;       /* Expression: 0.0\r\n                                        * Referenced by: '<Root>/Delay'\r\n                                        */\r\n};\r\n\r\n/* Real-time Model Data Structure */\r\nstruct tag_RTM_fmi_test_1_T {\r\n  const char_T *errorStatus;\r\n};\r\n\r\n/* Block parameters (default storage) */\r\nextern P_fmi_test_1_T fmi_test_1_P;\r\n\r\n/* Block states (default storage) */\r\nextern DW_fmi_test_1_T fmi_test_1_DW;\r\n\r\n/* External inputs (root inport signals with default storage) */\r\nextern ExtU_fmi_test_1_T fmi_test_1_U;\r\n\r\n/* External outputs (root outports fed by signals with default storage) */\r\nextern ExtY_fmi_test_1_T fmi_test_1_Y;\r\n\r\n/* Model entry point functions */\r\nextern void fmi_test_1_initialize(void);\r\nextern void fmi_test_1_step(void);\r\nextern void fmi_test_1_terminate(void);\r\n\r\n/* Real-time Model object */\r\nextern RT_MODEL_fmi_test_1_T *const fmi_test_1_M;\r\n\r\n/*-\r\n * The generated code includes comments that allow you to trace directly\r\n * back to the appropriate location in the model.  The basic format\r\n * is <system>/block_name, where system is the system number (uniquely\r\n * assigned by Simulink) and block_name is the name of the block.\r\n *\r\n * Use the MATLAB hilite_system command to trace the generated code back\r\n * to the model.  For example,\r\n *\r\n * hilite_system('<S3>')    - opens system 3\r\n * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3\r\n *\r\n * Here is the system hierarchy for this model\r\n *\r\n * '<Root>' : 'fmi_test_1'\r\n * '<S1>'   : 'fmi_test_1/powergui'\r\n */\r\n#endif                                 /* RTW_HEADER_fmi_test_1_h_ */\r\n"},{"name":"fmi_test_1_private.h","type":"header","group":"model","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Model files","code":"/*\r\n * fmi_test_1_private.h\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#ifndef RTW_HEADER_fmi_test_1_private_h_\r\n#define RTW_HEADER_fmi_test_1_private_h_\r\n#include \"rtwtypes.h\"\r\n#include \"multiword_types.h\"\r\n#endif                                 /* RTW_HEADER_fmi_test_1_private_h_ */\r\n"},{"name":"fmi_test_1_types.h","type":"header","group":"model","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Model files","code":"/*\r\n * fmi_test_1_types.h\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#ifndef RTW_HEADER_fmi_test_1_types_h_\r\n#define RTW_HEADER_fmi_test_1_types_h_\r\n#include \"rtwtypes.h\"\r\n#include \"multiword_types.h\"\r\n\r\n/* Model Code Variants */\r\n\r\n/* Parameters (default storage) */\r\ntypedef struct P_fmi_test_1_T_ P_fmi_test_1_T;\r\n\r\n/* Forward declaration for rtModel */\r\ntypedef struct tag_RTM_fmi_test_1_T RT_MODEL_fmi_test_1_T;\r\n\r\n#endif                                 /* RTW_HEADER_fmi_test_1_types_h_ */\r\n"},{"name":"fmi_test_1_data.c","type":"source","group":"data","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Data files","code":"/*\r\n * fmi_test_1_data.c\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#include \"fmi_test_1.h\"\r\n#include \"fmi_test_1_private.h\"\r\n\r\n/* Block parameters (default storage) */\r\nP_fmi_test_1_T fmi_test_1_P = {\r\n  /* Expression: 0.0\r\n   * Referenced by: '<Root>/Delay'\r\n   */\r\n  0.0\r\n};\r\n"},{"name":"multiword_types.h","type":"header","group":"utility","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Utility files","code":"/*\r\n * multiword_types.h\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#ifndef MULTIWORD_TYPES_H\r\n#define MULTIWORD_TYPES_H\r\n#include \"rtwtypes.h\"\r\n\r\n/*\r\n * MultiWord supporting definitions\r\n */\r\ntypedef long long longlong_T;\r\n\r\n/*\r\n * MultiWord types\r\n */\r\ntypedef struct {\r\n  uint64_T chunks[2];\r\n} int128m_T;\r\n\r\ntypedef struct {\r\n  int128m_T re;\r\n  int128m_T im;\r\n} cint128m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[2];\r\n} uint128m_T;\r\n\r\ntypedef struct {\r\n  uint128m_T re;\r\n  uint128m_T im;\r\n} cuint128m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[3];\r\n} int192m_T;\r\n\r\ntypedef struct {\r\n  int192m_T re;\r\n  int192m_T im;\r\n} cint192m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[3];\r\n} uint192m_T;\r\n\r\ntypedef struct {\r\n  uint192m_T re;\r\n  uint192m_T im;\r\n} cuint192m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[4];\r\n} int256m_T;\r\n\r\ntypedef struct {\r\n  int256m_T re;\r\n  int256m_T im;\r\n} cint256m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[4];\r\n} uint256m_T;\r\n\r\ntypedef struct {\r\n  uint256m_T re;\r\n  uint256m_T im;\r\n} cuint256m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[5];\r\n} int320m_T;\r\n\r\ntypedef struct {\r\n  int320m_T re;\r\n  int320m_T im;\r\n} cint320m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[5];\r\n} uint320m_T;\r\n\r\ntypedef struct {\r\n  uint320m_T re;\r\n  uint320m_T im;\r\n} cuint320m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[6];\r\n} int384m_T;\r\n\r\ntypedef struct {\r\n  int384m_T re;\r\n  int384m_T im;\r\n} cint384m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[6];\r\n} uint384m_T;\r\n\r\ntypedef struct {\r\n  uint384m_T re;\r\n  uint384m_T im;\r\n} cuint384m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[7];\r\n} int448m_T;\r\n\r\ntypedef struct {\r\n  int448m_T re;\r\n  int448m_T im;\r\n} cint448m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[7];\r\n} uint448m_T;\r\n\r\ntypedef struct {\r\n  uint448m_T re;\r\n  uint448m_T im;\r\n} cuint448m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[8];\r\n} int512m_T;\r\n\r\ntypedef struct {\r\n  int512m_T re;\r\n  int512m_T im;\r\n} cint512m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[8];\r\n} uint512m_T;\r\n\r\ntypedef struct {\r\n  uint512m_T re;\r\n  uint512m_T im;\r\n} cuint512m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[9];\r\n} int576m_T;\r\n\r\ntypedef struct {\r\n  int576m_T re;\r\n  int576m_T im;\r\n} cint576m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[9];\r\n} uint576m_T;\r\n\r\ntypedef struct {\r\n  uint576m_T re;\r\n  uint576m_T im;\r\n} cuint576m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[10];\r\n} int640m_T;\r\n\r\ntypedef struct {\r\n  int640m_T re;\r\n  int640m_T im;\r\n} cint640m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[10];\r\n} uint640m_T;\r\n\r\ntypedef struct {\r\n  uint640m_T re;\r\n  uint640m_T im;\r\n} cuint640m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[11];\r\n} int704m_T;\r\n\r\ntypedef struct {\r\n  int704m_T re;\r\n  int704m_T im;\r\n} cint704m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[11];\r\n} uint704m_T;\r\n\r\ntypedef struct {\r\n  uint704m_T re;\r\n  uint704m_T im;\r\n} cuint704m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[12];\r\n} int768m_T;\r\n\r\ntypedef struct {\r\n  int768m_T re;\r\n  int768m_T im;\r\n} cint768m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[12];\r\n} uint768m_T;\r\n\r\ntypedef struct {\r\n  uint768m_T re;\r\n  uint768m_T im;\r\n} cuint768m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[13];\r\n} int832m_T;\r\n\r\ntypedef struct {\r\n  int832m_T re;\r\n  int832m_T im;\r\n} cint832m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[13];\r\n} uint832m_T;\r\n\r\ntypedef struct {\r\n  uint832m_T re;\r\n  uint832m_T im;\r\n} cuint832m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[14];\r\n} int896m_T;\r\n\r\ntypedef struct {\r\n  int896m_T re;\r\n  int896m_T im;\r\n} cint896m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[14];\r\n} uint896m_T;\r\n\r\ntypedef struct {\r\n  uint896m_T re;\r\n  uint896m_T im;\r\n} cuint896m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[15];\r\n} int960m_T;\r\n\r\ntypedef struct {\r\n  int960m_T re;\r\n  int960m_T im;\r\n} cint960m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[15];\r\n} uint960m_T;\r\n\r\ntypedef struct {\r\n  uint960m_T re;\r\n  uint960m_T im;\r\n} cuint960m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[16];\r\n} int1024m_T;\r\n\r\ntypedef struct {\r\n  int1024m_T re;\r\n  int1024m_T im;\r\n} cint1024m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[16];\r\n} uint1024m_T;\r\n\r\ntypedef struct {\r\n  uint1024m_T re;\r\n  uint1024m_T im;\r\n} cuint1024m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[17];\r\n} int1088m_T;\r\n\r\ntypedef struct {\r\n  int1088m_T re;\r\n  int1088m_T im;\r\n} cint1088m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[17];\r\n} uint1088m_T;\r\n\r\ntypedef struct {\r\n  uint1088m_T re;\r\n  uint1088m_T im;\r\n} cuint1088m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[18];\r\n} int1152m_T;\r\n\r\ntypedef struct {\r\n  int1152m_T re;\r\n  int1152m_T im;\r\n} cint1152m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[18];\r\n} uint1152m_T;\r\n\r\ntypedef struct {\r\n  uint1152m_T re;\r\n  uint1152m_T im;\r\n} cuint1152m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[19];\r\n} int1216m_T;\r\n\r\ntypedef struct {\r\n  int1216m_T re;\r\n  int1216m_T im;\r\n} cint1216m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[19];\r\n} uint1216m_T;\r\n\r\ntypedef struct {\r\n  uint1216m_T re;\r\n  uint1216m_T im;\r\n} cuint1216m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[20];\r\n} int1280m_T;\r\n\r\ntypedef struct {\r\n  int1280m_T re;\r\n  int1280m_T im;\r\n} cint1280m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[20];\r\n} uint1280m_T;\r\n\r\ntypedef struct {\r\n  uint1280m_T re;\r\n  uint1280m_T im;\r\n} cuint1280m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[21];\r\n} int1344m_T;\r\n\r\ntypedef struct {\r\n  int1344m_T re;\r\n  int1344m_T im;\r\n} cint1344m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[21];\r\n} uint1344m_T;\r\n\r\ntypedef struct {\r\n  uint1344m_T re;\r\n  uint1344m_T im;\r\n} cuint1344m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[22];\r\n} int1408m_T;\r\n\r\ntypedef struct {\r\n  int1408m_T re;\r\n  int1408m_T im;\r\n} cint1408m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[22];\r\n} uint1408m_T;\r\n\r\ntypedef struct {\r\n  uint1408m_T re;\r\n  uint1408m_T im;\r\n} cuint1408m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[23];\r\n} int1472m_T;\r\n\r\ntypedef struct {\r\n  int1472m_T re;\r\n  int1472m_T im;\r\n} cint1472m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[23];\r\n} uint1472m_T;\r\n\r\ntypedef struct {\r\n  uint1472m_T re;\r\n  uint1472m_T im;\r\n} cuint1472m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[24];\r\n} int1536m_T;\r\n\r\ntypedef struct {\r\n  int1536m_T re;\r\n  int1536m_T im;\r\n} cint1536m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[24];\r\n} uint1536m_T;\r\n\r\ntypedef struct {\r\n  uint1536m_T re;\r\n  uint1536m_T im;\r\n} cuint1536m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[25];\r\n} int1600m_T;\r\n\r\ntypedef struct {\r\n  int1600m_T re;\r\n  int1600m_T im;\r\n} cint1600m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[25];\r\n} uint1600m_T;\r\n\r\ntypedef struct {\r\n  uint1600m_T re;\r\n  uint1600m_T im;\r\n} cuint1600m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[26];\r\n} int1664m_T;\r\n\r\ntypedef struct {\r\n  int1664m_T re;\r\n  int1664m_T im;\r\n} cint1664m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[26];\r\n} uint1664m_T;\r\n\r\ntypedef struct {\r\n  uint1664m_T re;\r\n  uint1664m_T im;\r\n} cuint1664m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[27];\r\n} int1728m_T;\r\n\r\ntypedef struct {\r\n  int1728m_T re;\r\n  int1728m_T im;\r\n} cint1728m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[27];\r\n} uint1728m_T;\r\n\r\ntypedef struct {\r\n  uint1728m_T re;\r\n  uint1728m_T im;\r\n} cuint1728m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[28];\r\n} int1792m_T;\r\n\r\ntypedef struct {\r\n  int1792m_T re;\r\n  int1792m_T im;\r\n} cint1792m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[28];\r\n} uint1792m_T;\r\n\r\ntypedef struct {\r\n  uint1792m_T re;\r\n  uint1792m_T im;\r\n} cuint1792m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[29];\r\n} int1856m_T;\r\n\r\ntypedef struct {\r\n  int1856m_T re;\r\n  int1856m_T im;\r\n} cint1856m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[29];\r\n} uint1856m_T;\r\n\r\ntypedef struct {\r\n  uint1856m_T re;\r\n  uint1856m_T im;\r\n} cuint1856m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[30];\r\n} int1920m_T;\r\n\r\ntypedef struct {\r\n  int1920m_T re;\r\n  int1920m_T im;\r\n} cint1920m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[30];\r\n} uint1920m_T;\r\n\r\ntypedef struct {\r\n  uint1920m_T re;\r\n  uint1920m_T im;\r\n} cuint1920m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[31];\r\n} int1984m_T;\r\n\r\ntypedef struct {\r\n  int1984m_T re;\r\n  int1984m_T im;\r\n} cint1984m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[31];\r\n} uint1984m_T;\r\n\r\ntypedef struct {\r\n  uint1984m_T re;\r\n  uint1984m_T im;\r\n} cuint1984m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[32];\r\n} int2048m_T;\r\n\r\ntypedef struct {\r\n  int2048m_T re;\r\n  int2048m_T im;\r\n} cint2048m_T;\r\n\r\ntypedef struct {\r\n  uint64_T chunks[32];\r\n} uint2048m_T;\r\n\r\ntypedef struct {\r\n  uint2048m_T re;\r\n  uint2048m_T im;\r\n} cuint2048m_T;\r\n\r\n#endif                                 /* MULTIWORD_TYPES_H */\r\n"},{"name":"rtwtypes.h","type":"header","group":"utility","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Utility files","code":"/*\r\n * rtwtypes.h\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#ifndef RTWTYPES_H\r\n#define RTWTYPES_H\r\n#include \"tmwtypes.h\"\r\n#ifndef POINTER_T\r\n#define POINTER_T\r\n\r\ntypedef void * pointer_T;\r\n\r\n#endif\r\n\r\n/* Logical type definitions */\r\n#if (!defined(__cplusplus))\r\n#ifndef false\r\n#define false                          (0U)\r\n#endif\r\n\r\n#ifndef true\r\n#define true                           (1U)\r\n#endif\r\n#endif\r\n\r\n#ifndef INT64_T\r\n#define INT64_T\r\n\r\ntypedef long long int64_T;\r\n\r\n#define MAX_int64_T                    ((int64_T)(9223372036854775807LL))\r\n#define MIN_int64_T                    ((int64_T)(-9223372036854775807LL-1LL))\r\n#endif\r\n\r\n#ifndef UINT64_T\r\n#define UINT64_T\r\n\r\ntypedef unsigned long long uint64_T;\r\n\r\n#define MAX_uint64_T                   ((uint64_T)(0xFFFFFFFFFFFFFFFFULL))\r\n#endif\r\n\r\n/*===========================================================================*\r\n * Additional complex number type definitions                                           *\r\n *===========================================================================*/\r\n#ifndef CINT64_T\r\n#define CINT64_T\r\n\r\ntypedef struct {\r\n  int64_T re;\r\n  int64_T im;\r\n} cint64_T;\r\n\r\n#endif\r\n\r\n#ifndef CUINT64_T\r\n#define CUINT64_T\r\n\r\ntypedef struct {\r\n  uint64_T re;\r\n  uint64_T im;\r\n} cuint64_T;\r\n\r\n#endif\r\n#endif                                 /* RTWTYPES_H */\r\n"},{"name":"rtmodel.h","type":"header","group":"interface","path":"C:\\Users\\lordx\\Desktop\\FMI_test_1\\fmi_test_1_grt_fmi_rtw","tag":"","groupDisplay":"Interface files","code":"/*\r\n *  rtmodel.h:\r\n *\r\n * Code generation for model \"fmi_test_1\".\r\n *\r\n * Model version              : 1.6\r\n * Simulink Coder version : 9.6 (R2021b) 14-May-2021\r\n * C source code generated on : Fri May 27 15:29:54 2022\r\n *\r\n * Target selection: grtfmi.tlc\r\n * Note: GRT includes extra infrastructure and instrumentation for prototyping\r\n * Embedded hardware selection: Atmel->AVR\r\n * Emulation hardware selection:\r\n *    Differs from embedded hardware (MATLAB Host)\r\n * Code generation objective: Execution efficiency\r\n * Validation result: Not run\r\n */\r\n\r\n#ifndef RTW_HEADER_rtmodel_h_\r\n#define RTW_HEADER_rtmodel_h_\r\n\r\n/*\r\n *  Includes the appropriate headers when we are using rtModel\r\n */\r\n#include \"fmi_test_1.h\"\r\n#define GRTINTERFACE                   0\r\n\r\n/* Macros generated for backwards compatibility  */\r\n#ifndef rtmGetStopRequested\r\n#define rtmGetStopRequested(rtm)       ((void*) 0)\r\n#endif\r\n#endif                                 /* RTW_HEADER_rtmodel_h_ */\r\n"}],"coverage":[{"id":"SimulinkCoverage","name":"Simulink Coverage","files":[]},{"id":"Bullseye","name":"Bullseye Coverage","files":[]},{"id":"LDRA","name":"LDRA Testbed","files":[]}]};