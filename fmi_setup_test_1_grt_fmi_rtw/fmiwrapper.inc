#include "simstruc_types.h"

#include "fmi_setup_test_1.h"
#include "fmi_setup_test_1_private.h"

typedef struct {
	BuiltInDTypeId dtypeID;
	size_t size;
	void* address;
} ModelVariable;

#ifndef NO_FMI_FUNCTION_PREFIX
#define FMI3_FUNCTION_PREFIX fmi_setup_test_1_
#endif

#define MODEL_GUID       "{a77ac3fd-07e1-40cc-af9c-e037e428724a}"
#define MODEL            fmi_setup_test_1
#define MODEL_INITIALIZE fmi_setup_test_1_initialize
#define MODEL_STEP       fmi_setup_test_1_step
#define MODEL_TERMINATE  fmi_setup_test_1_terminate
#define RT_MDL_TYPE      RT_MODEL_fmi_setup_test_1_T
#define STEP_SIZE        0.2
#define NUM_TASKS        1
#define NUM_SAMPLE_TIMES 1
#define FIRST_TASK_ID    0

/* since R2019a the block parameters are defined as extern */
#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(S) (&fmi_setup_test_1_P)
#endif

/* Definitions for non-reusable models */
#define RT_MDL_INSTANCE     fmi_setup_test_1_M
#define rtmGetU(S)          (&fmi_setup_test_1_U)
#define rtmGetY(S)          (&fmi_setup_test_1_Y)
#define rtmGetBlockIO(S)    (&fmi_setup_test_1_B)

static void initializeModelVariables(RT_MDL_TYPE* S, ModelVariable modelVariables[]) {
    modelVariables[0].dtypeID = 1;
    modelVariables[0].size    = 1;
    modelVariables[0].address = &(rtmGetDefaultParam(S)->Delay_InitialCondition);
    modelVariables[1].dtypeID = 1;
    modelVariables[1].size    = 1;
    modelVariables[1].address = &(rtmGetDefaultParam(S)->Memory_InitialCondition);
    modelVariables[2].dtypeID = 1;
    modelVariables[2].size    = 1;
    modelVariables[2].address = &(rtmGetU(S)->input);
    modelVariables[3].dtypeID = 1;
    modelVariables[3].size    = 1;
    modelVariables[3].address = &(rtmGetU(S)->input1);
    modelVariables[4].dtypeID = 1;
    modelVariables[4].size    = 1;
    modelVariables[4].address = &(rtmGetU(S)->input2);
    modelVariables[5].dtypeID = 1;
    modelVariables[5].size    = 1;
    modelVariables[5].address = &(rtmGetU(S)->input3);
    modelVariables[6].dtypeID = 1;
    modelVariables[6].size    = 1;
    modelVariables[6].address = &(rtmGetU(S)->input4);
    modelVariables[7].dtypeID = 1;
    modelVariables[7].size    = 1;
    modelVariables[7].address = &(rtmGetY(S)->output);
}

#define N_MODEL_VARIABLES 8
