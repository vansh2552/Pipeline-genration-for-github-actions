/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * File: AHRS_Voter_types.h
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

#ifndef RTW_HEADER_AHRS_Voter_types_h_
#define RTW_HEADER_AHRS_Voter_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_AHRS_Bus_
#define DEFINED_TYPEDEF_FOR_AHRS_Bus_

typedef struct {
  boolean_T valid;
  real_T theta;
  real_T phi;
  real_T r;
  real_T q;
  real_T p;
} AHRS_Bus;

#endif
#endif                                 /* RTW_HEADER_AHRS_Voter_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
