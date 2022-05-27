#ifndef model_interface_h
#define model_interface_h
#include "tmwtypes.h"
#define N_MODEL_VARIABLES              7

typedef struct {
  BuiltInDTypeId dtypeID;
  size_t size;
  void* address;
} ModelVariable;

size_t getCGTypeSize(DTypeId typeIndex);
void initializeModelVariables(SimStruct* S, ModelVariable modelVariables[]);

#endif                                 /* model_interface_h */
