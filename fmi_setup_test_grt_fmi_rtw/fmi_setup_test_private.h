

    /*
* fmi_setup_test_private.h
*
    * Code generation for model "fmi_setup_test".
    *
    * Model version              : 1.25
    * Simulink Coder version : 9.6 (R2021b) 14-May-2021
        * C source code generated on : Tue May 17 19:25:38 2022
 * 
 * Target selection: grtfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection: 
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
*/


    #ifndef RTW_HEADER_fmi_setup_test_private_h_
    #define RTW_HEADER_fmi_setup_test_private_h_


        

                #include "rtwtypes.h"
            #include "multiword_types.h"



    

    

    

    
                #if !defined(rt_VALIDATE_MEMORY)
                #define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    rtmSetErrorStatus(fmi_setup_test_M, RT_MEMORY_ALLOCATION_ERROR);\
    }
    #endif

    #if !defined(rt_FREE)
        #if !defined(_WIN32)
    #define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
    #else
    /* Visual and other windows compilers declare free without const */
    #define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
    #endif
    #endif




    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    #endif /* RTW_HEADER_fmi_setup_test_private_h_ */
