

                /*
            *  rtmodel.h:
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


    #ifndef RTW_HEADER_rtmodel_h_
    #define RTW_HEADER_rtmodel_h_


        

                /*
            *  Includes the appropriate headers when we are using rtModel
            */
            #include "fmi_setup_test.h"


    

    

    

                #define GRTINTERFACE 0


                /*
                * ROOT_IO_FORMAT: 0 (Individual arguments)
                * ROOT_IO_FORMAT: 1 (Structure reference)
                * ROOT_IO_FORMAT: 2 (Part of model data structure)
                */
                #define ROOT_IO_FORMAT 2



                /* Macros generated for backwards compatibility  */
                #ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm) ((void*) 0)
#endif






    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    #endif /* RTW_HEADER_rtmodel_h_ */
