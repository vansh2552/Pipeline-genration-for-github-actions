/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * File: AHRS_Voter.h
 *
 * Code generated for Simulink model 'AHRS_Voter'.
 *
 * Model version                  : 4.1
 * Simulink Coder version         : 23.2 (R2023b) 19-Apr-2023
 * C/C++ source code generated on : Wed Jul  5 12:35:33 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 10
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AHRS_Voter_h_
#define RTW_HEADER_AHRS_Voter_h_
#ifndef AHRS_Voter_COMMON_INCLUDES_
#define AHRS_Voter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* AHRS_Voter_COMMON_INCLUDES_ */

#include "AHRS_Voter_types.h"

extern void AHRS_Voter_Init(real_T rty_AHRSData[5]);
extern void AHRS_Voter(const AHRS_Bus *rtu_AHRS1, const AHRS_Bus *rtu_AHRS2,
  const AHRS_Bus *rtu_AHRS3, real_T rty_AHRSData[5]);

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
 * '<Root>' : 'AHRS_Voter'
 * '<S1>'   : 'AHRS_Voter/AvgValue'
 * '<S2>'   : 'AHRS_Voter/MidValue'
 * '<S3>'   : 'AHRS_Voter/Model Info'
 * '<S4>'   : 'AHRS_Voter/OneValue'
 * '<S5>'   : 'AHRS_Voter/ZeroValue'
 */

/*-
 * Requirements for '<Root>': AHRS_Voter

 */
#endif                                 /* RTW_HEADER_AHRS_Voter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
