

        /*
    * rt_nonfinite.h
    *
        * Code generation for model "fmi_test_1_sf".
    *
    * Model version              : 1.7
    * Simulink Coder version : 9.6 (R2021b) 14-May-2021
        * C source code generated on : Fri May 27 15:33:11 2022
 * 
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection: 
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
    */


    #ifndef RTW_HEADER_rt_nonfinite_h_
    #define RTW_HEADER_rt_nonfinite_h_


        

    
#include <stddef.h>
    #include "rtwtypes.h"



    

    

    

    

    

    

    

    

    

    

    

    

    

    

        
    


    extern real_T rtInf;


    


    extern real_T rtMinusInf;


    


    extern real_T rtNaN;


    


    extern real32_T rtInfF;


    


    extern real32_T rtMinusInfF;


    


    extern real32_T rtNaNF;



        extern void rt_InitInfAndNaN(size_t realSize);
            extern boolean_T rtIsInf(real_T value);
            extern boolean_T rtIsInfF(real32_T value);
            extern boolean_T rtIsNaN(real_T value);
            extern boolean_T rtIsNaNF(real32_T value);
    
    typedef struct  {
    struct {
        uint32_T wordH;
        uint32_T wordL;
    } words;
    } BigEndianIEEEDouble;

    typedef struct  {
    struct {
        uint32_T wordL;
        uint32_T wordH;
    } words;
    } LittleEndianIEEEDouble;

    typedef struct  {
    union {
        real32_T wordLreal;
        uint32_T wordLuint;
    } wordL;
    } IEEESingle;

    


    

    

    

    

    

    #endif /* RTW_HEADER_rt_nonfinite_h_ */
