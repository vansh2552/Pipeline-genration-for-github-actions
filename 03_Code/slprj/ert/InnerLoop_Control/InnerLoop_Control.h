/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * File: InnerLoop_Control.h
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

#ifndef RTW_HEADER_InnerLoop_Control_h_
#define RTW_HEADER_InnerLoop_Control_h_
#ifndef InnerLoop_Control_COMMON_INCLUDES_
#define InnerLoop_Control_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* InnerLoop_Control_COMMON_INCLUDES_ */

#include "InnerLoop_Control_types.h"
#include "InnerLoop_Control_private.h"

extern void InnerLoop_Control(const real_T *rtu_PitchCorr, const real_T
  *rtu_RollCorr, const real_T *rtu_YawRateCorr, const real_T rtu_AHRSData[5],
  real_T rty_ActPosRef[3]);

/* Model reference registration function */
extern void InnerLoop_Control_initialize(void);

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
 * '<Root>' : 'InnerLoop_Control'
 * '<S1>'   : 'InnerLoop_Control/Model Info'
 * '<S2>'   : 'InnerLoop_Control/PitchFilter'
 * '<S3>'   : 'InnerLoop_Control/RollFilter'
 * '<S4>'   : 'InnerLoop_Control/YawRateFilter'
 */

/*-
 * Requirements for '<Root>': InnerLoop_Control

 */
#endif                                 /* RTW_HEADER_InnerLoop_Control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
