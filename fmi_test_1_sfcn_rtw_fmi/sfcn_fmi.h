/*
 * Model-specific defintions for "fmi_test_1"
 *
 * Generated on : Fri May 27 15:33:11 2022
 */

#pragma once

#include "simstruc.h"
#define MODEL_GUID                     "{c50de336-6e57-4256-a20a-9b47c63617c8}"

/* Solver settings selected in Simulink */
#define SFCN_FMI_IS_VARIABLE_STEP_SOLVER 1
#define SFCN_FMI_FIXED_STEP_SIZE       0.0
#define SFCN_FMI_IS_MT                 0
#define SFCN_FMI_EXTRAPOLATION_ORDER   0
#define SFCN_FMI_NEWTON_ITER           0

/* Model sizes */
#define SFCN_FMI_ZC_LENGTH             0

/* Model identifier */
#define SFCN_FMI_MODEL_IDENTIFIER      "fmi_test_1"

/* Loading of MEX binaries, path to MATLAB bin */
#define SFCN_FMI_LOAD_MEX              0
#define SFCN_FMI_MATLAB_BIN            "D:\\Program Files\\Matlab\\bin\\win64"
#define SFCN_FMI_MEXEXT                "mexw64"
#define SFCN_FMI_NBR_MEX               0

static const char* SFCN_FMI_MEX_NAMES[1] = { "" };

extern void sfcn_fmi_mxGlobalTunable_(SimStruct* S, int_T create, int_T update);
extern void* sfcn_fmi_allocateBusObject(int_T isInput, int_T portid, int_T width);
extern void sfcn_fmi_registerMdlCallbacks_(SimStruct* S);
extern void sfcn_fmi_registerRTModelCallbacks_(SimStruct*S);
extern void sfcn_fmi_copyToSFcnParams_(SimStruct* S);
extern void sfcn_fmi_mxGlobalTunable_(SimStruct* S, int_T create, int_T update);
