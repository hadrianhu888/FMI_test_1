

        /*
    * fmi_setup_test.h
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


    #ifndef RTW_HEADER_fmi_setup_test_h_
    #define RTW_HEADER_fmi_setup_test_h_


        

    
#include <stddef.h>

#include <string.h>
                #ifndef fmi_setup_test_COMMON_INCLUDES_
            #define fmi_setup_test_COMMON_INCLUDES_
                #include <stdlib.h>
        #include "rtwtypes.h"
        #include "rtw_continuous.h"
        #include "rtw_solver.h"

            #endif /* fmi_setup_test_COMMON_INCLUDES_ */


        #include "fmi_setup_test_types.h"
        
        /* Shared type includes */
                    #include "multiword_types.h"




    


    

    

    

    

    
        /* Macros for accessing real-time model data structure */
                #ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm) ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val) ((rtm)->dwork = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm) ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val) ((rtm)->inputs = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm) ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val) ((rtm)->outputs = (val))
#endif




        #ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm) ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val) ((rtm)->errorStatus = (val))
#endif


    


                    #define fmi_setup_test_M_TYPE RT_MODEL_fmi_setup_test_T




    

    

    

    

    
                /* Block states (default storage) for system '<Root>' */
                    
        typedef struct  {
        




                    
                    


                        



                            
                            
                                   real_T UnitDelay_DSTATE; /* '<Root>/Unit Delay' */

                        
                        
                        


                    
                        






                    
                    


                        



                            
                            
                                   real_T Memory_PreviousInput; /* '<Root>/Memory' */

                        
                        
                        


                    
                        





        } DW_fmi_setup_test_T;

            



                            /* External inputs (root inport signals with default storage) */
                typedef struct  {
                





        
        
        
                 real_T ref;          /* '<Root>/ref' */
        
        
        
                } ExtU_fmi_setup_test_T;

            

                            /* External outputs (root outports fed by signals with default storage) */
                typedef struct  {
                



        
        
        
                 real_T del;         /* '<Root>/del' */
        
        
        
                } ExtY_fmi_setup_test_T;

            
                        /* Parameters (default storage) */
                struct P_fmi_setup_test_T_ {
                    




                    
                    


                        



                            
                            
                                   real_T Memory_InitialCondition; /* Expression: 0
  * Referenced by: '<Root>/Memory'
   */

                        
                        
                        


                    
                        






                    
                    


                        



                            
                            
                                   real_T UnitDelay_InitialCondition; /* Expression: 0
  * Referenced by: '<Root>/Unit Delay'
   */

                        
                        
                        


                    
                        





                };

        


            /* Real-time Model Data Structure */
            
    struct tag_RTM_fmi_setup_test_T {
                    const char_T *errorStatus;
                    ExtU_fmi_setup_test_T *inputs;
                    ExtY_fmi_setup_test_T *outputs;
                    DW_fmi_setup_test_T *dwork;
            


    };




    

    

    
            /* Block parameters (default storage) */
            


    extern                 P_fmi_setup_test_T fmi_setup_test_P;




        /* External data declarations for dependent source files */
        
            extern const char *RT_MEMORY_ALLOCATION_ERROR;

    

                    


    extern                 P_fmi_setup_test_T fmi_setup_test_P; /* parameters */



        

    
            /* Model entry point functions */
                        extern RT_MODEL_fmi_setup_test_T *fmi_setup_test(void);
                                        extern void fmi_setup_test_initialize(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M);
                


                                                extern void fmi_setup_test_step(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M);
                        

                            extern void fmi_setup_test_terminate(RT_MODEL_fmi_setup_test_T * fmi_setup_test_M);
                


    

    

    

    

    

            
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
            * '<Root>' : 'fmi_setup_test'
    */


    

    #endif /* RTW_HEADER_fmi_setup_test_h_ */
