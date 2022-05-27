/*
 * fmi_setup_test_sid.h
 *
 * Code generation for model "fmi_setup_test_sf".
 *
 * Model version              : 1.51
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri May 27 18:25:59 2022
 *
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objective: Debugging
 * Validation result: Not run
 *
 * SOURCES: fmi_setup_test_sf.c
 */

/* statically allocated instance data for model: fmi_setup_test */
{
  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* model checksums */
    ssSetChecksumVal(rts, 0, 2635062149U);
    ssSetChecksumVal(rts, 1, 482467855U);
    ssSetChecksumVal(rts, 2, 2192281477U);
    ssSetChecksumVal(rts, 3, 2128839889U);
  }
}
