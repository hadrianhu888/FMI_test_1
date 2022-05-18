

        /*
    * fmi_setup_test_sf.h
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


    #ifndef RTW_HEADER_fmi_setup_test_sf_h_
    #define RTW_HEADER_fmi_setup_test_sf_h_


        

    
#include <string.h>

#include <math.h>

#include <stddef.h>
                #ifndef fmi_setup_test_sf_COMMON_INCLUDES_
            #define fmi_setup_test_sf_COMMON_INCLUDES_
                #include <stdlib.h>
                #define S_FUNCTION_NAME fmi_setup_test_sf
    #define S_FUNCTION_LEVEL 2
    #ifndef RTW_GENERATED_S_FUNCTION
    #define RTW_GENERATED_S_FUNCTION
    #endif

        #include "rtwtypes.h"
        #include "simstruc.h"
        #include "fixedpoint.h"
                #if !defined(MATLAB_MEX_FILE)
        #include "rt_matrx.h"
        #endif

        #if !defined(RTW_SFUNCTION_DEFINES)
        #define RTW_SFUNCTION_DEFINES
        typedef struct  {
        void *blockIO;
        void *defaultParam;
        void *nonContDerivSig;
        } LocalS;

        #define ssSetLocalBlockIO(S, io) ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
        #define ssGetLocalBlockIO(S) ((LocalS *)ssGetUserData(S))->blockIO

        #define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
        #define ssGetLocalDefaultParam(S) ((LocalS *)ssGetUserData(S))->defaultParam

        #define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
        #define ssGetLocalNonContDerivSig(S) ((LocalS *)ssGetUserData(S))->nonContDerivSig
        #endif



            #endif /* fmi_setup_test_sf_COMMON_INCLUDES_ */


        #include "fmi_setup_test_sf_types.h"
        
        /* Shared type includes */
                    #include "multiword_types.h"




    


    
#include "rtGetNaN.h"

#include "rt_nonfinite.h"

#include "rt_defines.h"


    

    

    

    

    

    

    

    

            
                /* Continuous states (default storage) */
                typedef struct  {
                            
                        real_T Integrator_CSTATE; /* '<Root>/Integrator' */
                    
    
        } X_fmi_setup_test_T;
        
                                /* State derivatives (default storage) */
                        typedef struct  {
                                
                        real_T Integrator_CSTATE; /* '<Root>/Integrator' */
                    
                } XDot_fmi_setup_test_T;                    
                /* State disabled  */
                typedef struct  {                            
                        boolean_T Integrator_CSTATE; /* '<Root>/Integrator' */
                    
            } XDis_fmi_setup_test_T;        



                            /* External inputs (root inport signals with default storage) */
                typedef struct  {
                





        
        
        
            real_T *ref;          /* '<Root>/ref' */
        
        
        






        
        
        
            real_T *ref1;          /* '<Root>/ref1' */
        
        
        
                } ExternalUPtrs_fmi_setup_test_T;

            

                            /* External outputs (root outports fed by signals with default storage) */
                typedef struct  {
                



        
        
        
            real_T *del;         /* '<Root>/del' */
        
        
        




        
        
        
            real_T *del1;         /* '<Root>/del1' */
        
        
        
                } ExtY_fmi_setup_test_T;

            
                        /* Parameters (default storage) */
                struct P_fmi_setup_test_T_ {
                    




                    
                    


                        



                            
                            
                                   real_T Integrator_IC; /* Expression: 0
  * Referenced by: '<Root>/Integrator'
   */

                        
                        
                        


                    
                        






                    
                    


                        



                            
                            
                                   real_T UnitDelay_InitialCondition; /* Expression: 0
  * Referenced by: '<Root>/Unit Delay'
   */

                        
                        
                        


                    
                        





                };


    

    

        extern P_fmi_setup_test_T fmi_setup_test_DefaultP;


    

    

    

    

    

    

            
    /*-
    * The generated code includes comments that allow you to trace directly
    * back to the appropriate location in the model.  The basic format
        * is <system>/block_name, where system is the system number (uniquely
        * assigned by Simulink) and block_name is the name of the block.
        *
        * Use the MATLAB hilite_system command to trace the generated code back
        * to the model.  For example,
        *
            * hilite_system('<S3>')    - opens system 3
            * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
        *
        * Here is the system hierarchy for this model
        *
            * '<Root>' : 'fmi_setup_test_sf'
    */


    

    #endif /* RTW_HEADER_fmi_setup_test_sf_h_ */
