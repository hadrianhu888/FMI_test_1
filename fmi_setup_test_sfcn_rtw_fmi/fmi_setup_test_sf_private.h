

    /*
* fmi_setup_test_sf_private.h
*
    * Code generation for model "fmi_setup_test_sf".
    *
    * Model version              : 1.27
    * Simulink Coder version : 9.6 (R2021b) 14-May-2021
        * C source code generated on : Tue May 17 19:46:36 2022
 * 
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection: 
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
*/


    #ifndef RTW_HEADER_fmi_setup_test_sf_private_h_
    #define RTW_HEADER_fmi_setup_test_sf_private_h_


        

                #include "rtwtypes.h"
            #include "multiword_types.h"



    

    

    

    
                        #if !defined(ss_VALIDATE_MEMORY)
        #define ss_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
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




    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    #endif /* RTW_HEADER_fmi_setup_test_sf_private_h_ */
