#include "simstruc_types.h"

#include "fmi_test_1.h"
#include "fmi_test_1_private.h"

typedef struct {
	BuiltInDTypeId dtypeID;
	size_t size;
	void* address;
} ModelVariable;

#ifndef NO_FMI_FUNCTION_PREFIX
#define FMI2_FUNCTION_PREFIX fmi_test_1_
#endif

#define MODEL_GUID       "{ae5bd23e-04ae-4178-bbbb-0425970da9d2}"
#define MODEL            fmi_test_1
#define MODEL_INITIALIZE fmi_test_1_initialize
#define MODEL_STEP       fmi_test_1_step
#define MODEL_TERMINATE  fmi_test_1_terminate
#define RT_MDL_TYPE      RT_MODEL_fmi_test_1_T
#define STEP_SIZE        0.2
#define NUM_TASKS        1
#define NUM_SAMPLE_TIMES 1
#define FIRST_TASK_ID    0

/* since R2019a the block parameters are defined as extern */
#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(S) (&fmi_test_1_P)
#endif

/* Definitions for non-reusable models */
#define RT_MDL_INSTANCE     fmi_test_1_M
#define rtmGetU(S)          (&fmi_test_1_U)
#define rtmGetY(S)          (&fmi_test_1_Y)
#define rtmGetBlockIO(S)    (&fmi_test_1_B)

static void initializeModelVariables(RT_MDL_TYPE* S, ModelVariable modelVariables[]) {
    modelVariables[0].dtypeID = 0;
    modelVariables[0].size    = 0;
    modelVariables[0].address = &(rtmGetDefaultParam(S)->Delay_InitialCondition);
    modelVariables[1].dtypeID = 0;
    modelVariables[1].size    = 0;
    modelVariables[1].address = &(rtmGetU(S)->input);
    modelVariables[2].dtypeID = 0;
    modelVariables[2].size    = 0;
    modelVariables[2].address = &(rtmGetY(S)->output);
}

#define N_MODEL_VARIABLES 3
