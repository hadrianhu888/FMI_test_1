

    /*
* fmi_setup_test_sid.h
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
*
  * SOURCES: fmi_setup_test_sf.c 
*/



        

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    /* statically allocated instance data for model: fmi_setup_test */
{
        extern P_fmi_setup_test_T fmi_setup_test_DefaultP;
    {
                    /* Local SimStruct for the generated S-Function */
        static LocalS slS;
        LocalS *lS = &slS;
        ssSetUserData(rts, lS);


        /* model parameters */
        ssSetLocalDefaultParam(rts, (real_T *) &fmi_setup_test_DefaultP);

    

    /* model checksums */
    ssSetChecksumVal(rts, 0, 1869378751U);
    ssSetChecksumVal(rts, 1, 429447473U);
    ssSetChecksumVal(rts, 2, 23110016U);
    ssSetChecksumVal(rts, 3, 3932369198U);

    }
}


    

    

    

    
