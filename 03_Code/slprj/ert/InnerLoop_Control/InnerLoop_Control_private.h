/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * File: InnerLoop_Control_private.h
 *
 * Code generated for Simulink model 'InnerLoop_Control'.
 *
 * Model version                  : 6.0
 * Simulink Coder version         : 23.2 (R2023b) 19-Apr-2023
 * C/C++ source code generated on : Mon Jun 26 10:54:46 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 10
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_InnerLoop_Control_private_h_
#define RTW_HEADER_InnerLoop_Control_private_h_
#include "rtwtypes.h"
#include "InnerLoop_Control_types.h"

/* Block states (default storage) for model 'InnerLoop_Control' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S2>/UnitDelay' (DWork 1) */
  real_T UnitDelay_DSTATE_ceii;        /* '<S3>/UnitDelay' (DWork 1) */
  real_T UnitDelay_DSTATE_j3xb;        /* '<S4>/UnitDelay' (DWork 1) */
} DW_InnerLoop_Control_fwu4_T;

/* Constant parameters (default storage) */
typedef struct {
  real_T SOF_Gain[15];                 /* Expression: fbLoopGain
                                        * Referenced by: '<Root>/SOF' (Parameter: Gain)
                                        */
} ConstP_InnerLoop_Control_T;

typedef struct {
  DW_InnerLoop_Control_fwu4_T rtdw;
} MdlrefDW_InnerLoop_Control_T;

/* Constant parameters (default storage) */
extern const ConstP_InnerLoop_Control_T InnerLoop_Control_ConstP;
extern MdlrefDW_InnerLoop_Control_T InnerLoop_Control_MdlrefDW;

#endif                             /* RTW_HEADER_InnerLoop_Control_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
