/*
 * File: builtin_typeid_types.h
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

#ifndef BUILTIN_TYPEID_TYPES_H
#define BUILTIN_TYPEID_TYPES_H
#include "rtwtypes.h"
#ifndef BUILTIN_TYPEID_TYPES
#define BUILTIN_TYPEID_TYPES

/* Enumeration of built-in data types */
typedef enum {
  SS_DOUBLE = 0,                       /* real_T    */
  SS_SINGLE = 1,                       /* real32_T  */
  SS_INT8 = 2,                         /* int8_T    */
  SS_UINT8 = 3,                        /* uint8_T   */
  SS_INT16 = 4,                        /* int16_T   */
  SS_UINT16 = 5,                       /* uint16_T  */
  SS_INT32 = 6,                        /* int32_T   */
  SS_UINT32 = 7,                       /* uint32_T  */
  SS_BOOLEAN = 8                       /* boolean_T */
} BuiltInDTypeId;

#define SS_NUM_BUILT_IN_DTYPE          ((int_T)SS_BOOLEAN+1)

/* Enumeration for MAT-file logging code */
typedef int_T DTypeId;

#endif                                 /* BUILTIN_TYPEID_TYPES */
#endif                                 /* BUILTIN_TYPEID_TYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
