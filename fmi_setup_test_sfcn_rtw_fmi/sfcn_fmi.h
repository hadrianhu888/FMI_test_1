/*
 * Model-specific defintions for "fmi_setup_test"
 *
 * Generated on : Tue May 17 19:46:36 2022
 */
#pragma once

#include "simstruc.h"

#define MODEL_GUID "{f4f6213c-04b1-4e11-8208-fdce89ff1fae}"

/* Solver settings selected in Simulink */
#define  SFCN_FMI_IS_VARIABLE_STEP_SOLVER 0
#define SFCN_FMI_FIXED_STEP_SIZE 0.2
#define SFCN_FMI_IS_MT 1
#define SFCN_FMI_EXTRAPOLATION_ORDER -1
#define SFCN_FMI_NEWTON_ITER -1

/* Model sizes */
#define SFCN_FMI_ZC_LENGTH 0

/* Model identifier */
#define SFCN_FMI_MODEL_IDENTIFIER "fmi_setup_test"

/* Loading of MEX binaries, path to MATLAB bin */
#define SFCN_FMI_LOAD_MEX 0
#define SFCN_FMI_MATLAB_BIN "D:\\Program Files\\Matlab\\bin\\win64"
#define SFCN_FMI_MEXEXT "mexw64"
#define SFCN_FMI_NBR_MEX 0

static const char* SFCN_FMI_MEX_NAMES[1] = {""};

extern void  sfcn_fmi_mxGlobalTunable_(SimStruct* S, int_T create, int_T update);
extern void* sfcn_fmi_allocateBusObject(int_T isInput, int_T portid, int_T width);
extern void  sfcn_fmi_registerMdlCallbacks_(SimStruct* S);
extern void  sfcn_fmi_registerRTModelCallbacks_(SimStruct*S);
extern void  sfcn_fmi_copyToSFcnParams_(SimStruct* S);
extern void  sfcn_fmi_mxGlobalTunable_(SimStruct* S, int_T create, int_T update);


