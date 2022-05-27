/*
 * fmi_test_1_sid.h
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
 *
 * SOURCES: fmi_test_1_sf.c
 */

/* statically allocated instance data for model: fmi_test_1 */
{
  extern P_fmi_test_1_T fmi_test_1_DefaultP;

  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_fmi_test_1_T sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(B_fmi_test_1_T));
    }

    /* model parameters */
    ssSetLocalDefaultParam(rts, (real_T *) &fmi_test_1_DefaultP);

    /* model checksums */
    ssSetChecksumVal(rts, 0, 3323819307U);
    ssSetChecksumVal(rts, 1, 1823465168U);
    ssSetChecksumVal(rts, 2, 2536015825U);
    ssSetChecksumVal(rts, 3, 1788993214U);
  }
}
