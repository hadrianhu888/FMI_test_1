#include "fmi_setup_test_sf.h"
#include "model_interface.h"



size_t getCGTypeSize(int typeIndex) {

  switch (typeIndex) {
    case 0: return 8; /* real_T */
    case 1: return 4; /* real32_T */
    case 2: return 1; /* int8_T */
    case 3: return 1; /* uint8_T */
    case 4: return 2; /* int16_T */
    case 5: return 2; /* uint16_T */
    case 6: return 4; /* int32_T */
    case 7: return 4; /* uint32_T */
    case 8: return 1; /* boolean_T */
    case 9: return 0; /* fcn_call_T */
    case 10: return 4; /* int_T */
    case 11: return 8; /* pointer_T */
    case 12: return 8; /* action_T */
    case 13: return 8; /* timer_uint32_pair_T */
    case 14: return 8; /* physical_connection */
