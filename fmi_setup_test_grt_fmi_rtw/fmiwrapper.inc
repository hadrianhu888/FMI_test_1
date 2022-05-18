#include "fmi_setup_test.h"
#include "fmi_setup_test_private.h"

typedef struct {
	BuiltInDTypeId dtypeID;
	size_t size;
	void* address;
} ModelVariable;

#ifndef NO_FMI_FUNCTION_PREFIX
#define FMI2_FUNCTION_PREFIX fmi_setup_test_
#endif

#define MODEL_GUID       "{1bfd014c-53c7-47cd-bdab-9d7f2640ae8e}"
#define MODEL            fmi_setup_test
#define MODEL_INITIALIZE fmi_setup_test_initialize
#define MODEL_STEP       fmi_setup_test_step
#define MODEL_TERMINATE  fmi_setup_test_terminate
#define RT_MDL_TYPE      RT_MODEL_fmi_setup_test_T
#define STEP_SIZE        0.2
#define NUM_TASKS        1
#define NUM_SAMPLE_TIMES 1
#define FIRST_TASK_ID    0

/* R2019a defines the block parameters as extern */
#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(S) (&fmi_setup_test_P)
#endif

#define REUSABLE_FUNCTION

static void initializeModelVariables(RT_MDL_TYPE* S, ModelVariable modelVariables[]) {
    modelVariables[0].dtypeID = 0;
    modelVariables[0].size    = 0;
    modelVariables[0].address = &(rtmGetDefaultParam(S)->Memory_InitialCondition);
    modelVariables[1].dtypeID = 0;
    modelVariables[1].size    = 0;
    modelVariables[1].address = &(rtmGetDefaultParam(S)->UnitDelay_InitialCondition);
    modelVariables[2].dtypeID = 0;
    modelVariables[2].size    = 0;
    modelVariables[2].address = &(rtmGetU(S)->ref);
