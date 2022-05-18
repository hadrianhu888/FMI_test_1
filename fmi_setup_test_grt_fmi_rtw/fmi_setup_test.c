

    

        /*
        * fmi_setup_test.c
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



        

    
                    #include "fmi_setup_test.h"


                    #include "fmi_setup_test_private.h"




    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    
    

        
    

                        




        /* Model step function */
        
                    
        void fmi_setup_test_step(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M) 
        {
                            







                        DW_fmi_setup_test_T *fmi_setup_test_DW = fmi_setup_test_M->dwork;
                        ExtU_fmi_setup_test_T *fmi_setup_test_U = (ExtU_fmi_setup_test_T *) fmi_setup_test_M->inputs;
                        ExtY_fmi_setup_test_T *fmi_setup_test_Y = (ExtY_fmi_setup_test_T *) fmi_setup_test_M->outputs;





            


        

                
        
            
            

        

        




                
        




                                                    
                
                                    /* Outport: '<Root>/del' incorporates:
 *  Memory: '<Root>/Memory'
 */
fmi_setup_test_Y->del = fmi_setup_test_DW->Memory_PreviousInput;
/* Update for Memory: '<Root>/Memory' incorporates:
 *  UnitDelay: '<Root>/Unit Delay'
 */
fmi_setup_test_DW->Memory_PreviousInput = fmi_setup_test_DW->UnitDelay_DSTATE;
/* Update for UnitDelay: '<Root>/Unit Delay' incorporates:
 *  Inport: '<Root>/ref'
 */
fmi_setup_test_DW->UnitDelay_DSTATE = fmi_setup_test_U->ref;






        



                




                    



        

            
            





        



            


        
        



                


        } 
        
            













    /* Model initialize function */
    
            void fmi_setup_test_initialize(RT_MODEL_fmi_setup_test_T *const fmi_setup_test_M)
    {


                            
















                        DW_fmi_setup_test_T *fmi_setup_test_DW = fmi_setup_test_M->dwork;






            
            
        




                        




                
                                




                

            




                




                                                
                                    

/* InitializeConditions for Memory: '<Root>/Memory' */
fmi_setup_test_DW->Memory_PreviousInput = fmi_setup_test_P.Memory_InitialCondition;
/* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
fmi_setup_test_DW->UnitDelay_DSTATE = fmi_setup_test_P.UnitDelay_InitialCondition;












                    
            




                




                                    




                
            
                


    }        




    





        
        /* Model terminate function */
                    void fmi_setup_test_terminate(RT_MODEL_fmi_setup_test_T * fmi_setup_test_M)

        {
            


                                                            




                        




                                        
                    




                




                        

        


        /* model code */
            rt_FREE(fmi_setup_test_M->inputs);
            rt_FREE(fmi_setup_test_M->outputs);
            rt_FREE(fmi_setup_test_M->dwork);


            

                rt_FREE(fmi_setup_test_M);


        }
            






    
    /* Model data allocation function */

            RT_MODEL_fmi_setup_test_T *fmi_setup_test(void) {


            RT_MODEL_fmi_setup_test_T *fmi_setup_test_M;
                fmi_setup_test_M = (RT_MODEL_fmi_setup_test_T *) malloc(sizeof(RT_MODEL_fmi_setup_test_T));
            if(fmi_setup_test_M == (NULL)) {
                return (NULL);
            }
                
                (void) memset((char *)fmi_setup_test_M, 0,
sizeof(RT_MODEL_fmi_setup_test_T));
                



















        













        /* states (dwork) */
        {
        


                    DW_fmi_setup_test_T *dwork = (DW_fmi_setup_test_T *) malloc(sizeof(DW_fmi_setup_test_T));
                rt_VALIDATE_MEMORY(fmi_setup_test_M,dwork);
                fmi_setup_test_M->dwork = (dwork);



        }

            /* external inputs */
            {
                                


                            ExtU_fmi_setup_test_T *fmi_setup_test_U = (ExtU_fmi_setup_test_T *) malloc(sizeof(ExtU_fmi_setup_test_T));

                    rt_VALIDATE_MEMORY(fmi_setup_test_M,fmi_setup_test_U);
                            fmi_setup_test_M->inputs = (((ExtU_fmi_setup_test_T *) fmi_setup_test_U));


            }

                /* external outputs */
                {
                
                    


                            ExtY_fmi_setup_test_T *fmi_setup_test_Y = (ExtY_fmi_setup_test_T *) malloc(sizeof(ExtY_fmi_setup_test_T));

                    rt_VALIDATE_MEMORY(fmi_setup_test_M,fmi_setup_test_Y);
                        fmi_setup_test_M->outputs = (fmi_setup_test_Y);


                }









        
            {
                        







                        DW_fmi_setup_test_T *fmi_setup_test_DW = fmi_setup_test_M->dwork;
                        ExtU_fmi_setup_test_T *fmi_setup_test_U = (ExtU_fmi_setup_test_T *) fmi_setup_test_M->inputs;
                        ExtY_fmi_setup_test_T *fmi_setup_test_Y = (ExtY_fmi_setup_test_T *) fmi_setup_test_M->outputs;





            
    
        















                    











        









        






        /* states (dwork) */
        
        



                                        (void) memset((void *)fmi_setup_test_DW,  0,
 sizeof(DW_fmi_setup_test_T));






        
    


        
        
        


        




        

            /* external inputs */
            
            
                                    
                                    fmi_setup_test_U->ref = 0.0;











            

                /* external outputs */
                
                
            



                            
                                    fmi_setup_test_Y->del = 0.0;











                











    
            






        }
    return fmi_setup_test_M;
}





    

    

    

    
