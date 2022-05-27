#ifndef RTW_HEADER_fmi_setup_test_cap_host_h__
#define RTW_HEADER_fmi_setup_test_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} fmi_setup_test_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void fmi_setup_test_host_InitializeDataMapInfo
    (fmi_setup_test_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                              /* RTW_HEADER_fmi_setup_test_cap_host_h__ */

/* EOF: fmi_setup_test_capi_host.h */
