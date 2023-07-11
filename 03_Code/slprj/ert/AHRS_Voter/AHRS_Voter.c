/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * File: AHRS_Voter.c
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

#include "AHRS_Voter.h"
#include "rtwtypes.h"
#include "AHRS_Voter_types.h"
#include <math.h>

/* System initialize for referenced model: 'AHRS_Voter' */
void AHRS_Voter_Init(real_T rty_AHRSData[5])
{
  int32_T i;

  /* SystemInitialize for SignalConversion: '<Root>/SignalConversion' incorporates:
   *  Merge: '<Root>/Merge'
   *
   * Block requirements for '<Root>/SignalConversion':
   *  1. HLR_11 AHRS Voting for Triple Sensors
   *  2. HLR_12 AHRS Voting for Dual Sensors
   *  3. HLR_13 AHRS Usage of Single Sensor
   *  4. HLR_14 AHRS Usage of No Sensor
   *
   * Block requirements for '<Root>/Merge':
   *  1. HLR_11 AHRS Voting for Triple Sensors
   *  2. HLR_12 AHRS Voting for Dual Sensors
   *  3. HLR_13 AHRS Usage of Single Sensor
   *  4. HLR_14 AHRS Usage of No Sensor
   */
  for (i = 0; i < 5; i = i + 1) {
    rty_AHRSData[i] = 0.0;
  }

  /* End of SystemInitialize for SignalConversion: '<Root>/SignalConversion' */
}

/* Output and update for referenced model: 'AHRS_Voter' */
void AHRS_Voter(const AHRS_Bus *rtu_AHRS1, const AHRS_Bus *rtu_AHRS2, const
                AHRS_Bus *rtu_AHRS3, real_T rty_AHRSData[5])
{
  real_T minV[5];
  real_T minV_0[5];
  real_T minV_1[5];
  real_T rtb_Switch1[5];
  real_T rtb_Switch1_h2ux[5];
  real_T rtb_Switch2[5];
  real_T rtb_Switch2_plpr[5];
  real_T rtb_Switch3[5];
  real_T rtb_Switch3_nvkn[5];
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T i_3;
  int32_T i_4;
  int32_T i_5;
  int32_T i_6;
  int32_T i_7;
  int32_T i_8;
  int32_T rtb_DataTypeConversion;
  int32_T rtb_DataTypeConversion1;
  int32_T rtb_DataTypeConversion2;

  /* DataTypeConversion: '<Root>/DataTypeConversion'
   *
   * Block requirements for '<Root>/DataTypeConversion':
   *  1. HLR_9 AHRS Validity Check
   */
  rtb_DataTypeConversion = (int32_T)(rtu_AHRS1->valid ? 1 : 0);

  /* DataTypeConversion: '<Root>/DataTypeConversion1'
   *
   * Block requirements for '<Root>/DataTypeConversion1':
   *  1. HLR_9 AHRS Validity Check
   */
  rtb_DataTypeConversion1 = (int32_T)(rtu_AHRS2->valid ? 1 : 0);

  /* DataTypeConversion: '<Root>/DataTypeConversion2'
   *
   * Block requirements for '<Root>/DataTypeConversion2':
   *  1. HLR_9 AHRS Validity Check
   */
  rtb_DataTypeConversion2 = (int32_T)(rtu_AHRS3->valid ? 1 : 0);

  /* SwitchCase: '<Root>/SwitchCase' incorporates:
   *  Sum: '<Root>/Sum'
   *
   * Block requirements for '<Root>/SwitchCase':
   *  1. HLR_11 AHRS Voting for Triple Sensors
   *  2. HLR_12 AHRS Voting for Dual Sensors
   *  3. HLR_13 AHRS Usage of Single Sensor
   *  4. HLR_14 AHRS Usage of No Sensor
   *
   * Block requirements for '<Root>/Sum':
   *  1. HLR_9 AHRS Validity Check
   */
  switch ((rtb_DataTypeConversion + rtb_DataTypeConversion1) +
          rtb_DataTypeConversion2) {
   case 3:
    /* Outputs for IfAction SubSystem: '<Root>/MidValue' incorporates:
     *  ActionPort: '<S2>/ActionPort'
     *
     * Block requirements for '<Root>/MidValue':
     *  1. HLR_11 AHRS Voting for Triple Sensors
     */
    /* MinMax: '<S2>/MinMax1' */
    minV[0] = fmin(rtu_AHRS1->theta, rtu_AHRS2->theta);
    minV[1] = fmin(rtu_AHRS1->phi, rtu_AHRS2->phi);
    minV[2] = fmin(rtu_AHRS1->r, rtu_AHRS2->r);
    minV[3] = fmin(rtu_AHRS1->q, rtu_AHRS2->q);
    minV[4] = fmin(rtu_AHRS1->p, rtu_AHRS2->p);

    /* MinMax: '<S2>/MinMax2' */
    minV_0[0] = fmin(rtu_AHRS2->theta, rtu_AHRS3->theta);
    minV_0[1] = fmin(rtu_AHRS2->phi, rtu_AHRS3->phi);
    minV_0[2] = fmin(rtu_AHRS2->r, rtu_AHRS3->r);
    minV_0[3] = fmin(rtu_AHRS2->q, rtu_AHRS3->q);
    minV_0[4] = fmin(rtu_AHRS2->p, rtu_AHRS3->p);

    /* MinMax: '<S2>/MinMax3' */
    minV_1[0] = fmin(rtu_AHRS3->theta, rtu_AHRS1->theta);
    minV_1[1] = fmin(rtu_AHRS3->phi, rtu_AHRS1->phi);
    minV_1[2] = fmin(rtu_AHRS3->r, rtu_AHRS1->r);
    minV_1[3] = fmin(rtu_AHRS3->q, rtu_AHRS1->q);
    minV_1[4] = fmin(rtu_AHRS3->p, rtu_AHRS1->p);
    for (i_7 = 0; i_7 < 5; i_7 = i_7 + 1) {
      /* SignalConversion: '<Root>/SignalConversion' incorporates:
       *  Merge: '<Root>/Merge'
       *  MinMax: '<S2>/MinMax'
       *  MinMax: '<S2>/MinMax1'
       *  MinMax: '<S2>/MinMax2'
       *  MinMax: '<S2>/MinMax3'
       *
       * Block requirements for '<Root>/SignalConversion':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       *
       * Block requirements for '<Root>/Merge':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       */
      rty_AHRSData[i_7] = fmax(fmax(minV[i_7], minV_0[i_7]), minV_1[i_7]);
    }

    /* End of Outputs for SubSystem: '<Root>/MidValue' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<Root>/AvgValue' incorporates:
     *  ActionPort: '<S1>/ActionPort'
     *
     * Block requirements for '<Root>/AvgValue':
     *  1. HLR_12 AHRS Voting for Dual Sensors
     */
    /* Switch: '<S1>/Switch1' */
    if (rtu_AHRS1->valid) {
      rtb_Switch1_h2ux[0] = rtu_AHRS1->theta;
      rtb_Switch1_h2ux[1] = rtu_AHRS1->phi;
      rtb_Switch1_h2ux[2] = rtu_AHRS1->r;
      rtb_Switch1_h2ux[3] = rtu_AHRS1->q;
      rtb_Switch1_h2ux[4] = rtu_AHRS1->p;
    } else {
      for (i_6 = 0; i_6 < 5; i_6 = i_6 + 1) {
        rtb_Switch1_h2ux[i_6] = 0.0;
      }
    }

    /* End of Switch: '<S1>/Switch1' */

    /* Switch: '<S1>/Switch2' */
    if (rtu_AHRS2->valid) {
      rtb_Switch2_plpr[0] = rtu_AHRS2->theta;
      rtb_Switch2_plpr[1] = rtu_AHRS2->phi;
      rtb_Switch2_plpr[2] = rtu_AHRS2->r;
      rtb_Switch2_plpr[3] = rtu_AHRS2->q;
      rtb_Switch2_plpr[4] = rtu_AHRS2->p;
    } else {
      for (i_5 = 0; i_5 < 5; i_5 = i_5 + 1) {
        rtb_Switch2_plpr[i_5] = 0.0;
      }
    }

    /* End of Switch: '<S1>/Switch2' */

    /* Switch: '<S1>/Switch3' */
    if (rtu_AHRS3->valid) {
      rtb_Switch3_nvkn[0] = rtu_AHRS3->theta;
      rtb_Switch3_nvkn[1] = rtu_AHRS3->phi;
      rtb_Switch3_nvkn[2] = rtu_AHRS3->r;
      rtb_Switch3_nvkn[3] = rtu_AHRS3->q;
      rtb_Switch3_nvkn[4] = rtu_AHRS3->p;
    } else {
      for (i_4 = 0; i_4 < 5; i_4 = i_4 + 1) {
        rtb_Switch3_nvkn[i_4] = 0.0;
      }
    }

    /* End of Switch: '<S1>/Switch3' */
    for (i_3 = 0; i_3 < 5; i_3 = i_3 + 1) {
      /* SignalConversion: '<Root>/SignalConversion' incorporates:
       *  Gain: '<S1>/Gain'
       *  Merge: '<Root>/Merge'
       *  Sum: '<S1>/Sum'
       *
       * Block requirements for '<Root>/SignalConversion':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       *
       * Block requirements for '<Root>/Merge':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       */
      rty_AHRSData[i_3] = 0.5 * ((rtb_Switch1_h2ux[i_3] + rtb_Switch2_plpr[i_3])
        + rtb_Switch3_nvkn[i_3]);
    }

    /* End of Outputs for SubSystem: '<Root>/AvgValue' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<Root>/OneValue' incorporates:
     *  ActionPort: '<S4>/ActionPort'
     *
     * Block requirements for '<Root>/OneValue':
     *  1. HLR_13 AHRS Usage of Single Sensor
     */
    /* Switch: '<S4>/Switch1' */
    if (rtu_AHRS1->valid) {
      rtb_Switch1[0] = rtu_AHRS1->theta;
      rtb_Switch1[1] = rtu_AHRS1->phi;
      rtb_Switch1[2] = rtu_AHRS1->r;
      rtb_Switch1[3] = rtu_AHRS1->q;
      rtb_Switch1[4] = rtu_AHRS1->p;
    } else {
      for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
        rtb_Switch1[i_2] = 0.0;
      }
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch2' */
    if (rtu_AHRS2->valid) {
      rtb_Switch2[0] = rtu_AHRS2->theta;
      rtb_Switch2[1] = rtu_AHRS2->phi;
      rtb_Switch2[2] = rtu_AHRS2->r;
      rtb_Switch2[3] = rtu_AHRS2->q;
      rtb_Switch2[4] = rtu_AHRS2->p;
    } else {
      for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
        rtb_Switch2[i_1] = 0.0;
      }
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch3' */
    if (rtu_AHRS3->valid) {
      rtb_Switch3[0] = rtu_AHRS3->theta;
      rtb_Switch3[1] = rtu_AHRS3->phi;
      rtb_Switch3[2] = rtu_AHRS3->r;
      rtb_Switch3[3] = rtu_AHRS3->q;
      rtb_Switch3[4] = rtu_AHRS3->p;
    } else {
      for (i_0 = 0; i_0 < 5; i_0 = i_0 + 1) {
        rtb_Switch3[i_0] = 0.0;
      }
    }

    /* End of Switch: '<S4>/Switch3' */
    for (i = 0; i < 5; i = i + 1) {
      /* SignalConversion: '<Root>/SignalConversion' incorporates:
       *  Merge: '<Root>/Merge'
       *  Sum: '<S4>/Sum'
       *
       * Block requirements for '<Root>/SignalConversion':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       *
       * Block requirements for '<Root>/Merge':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       */
      rty_AHRSData[i] = (rtb_Switch1[i] + rtb_Switch2[i]) + rtb_Switch3[i];
    }

    /* End of Outputs for SubSystem: '<Root>/OneValue' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<Root>/ZeroValue' incorporates:
     *  ActionPort: '<S5>/ActionPort'
     *
     * Block requirements for '<Root>/ZeroValue':
     *  1. HLR_14 AHRS Usage of No Sensor
     */
    for (i_8 = 0; i_8 < 5; i_8 = i_8 + 1) {
      /* SignalConversion: '<Root>/SignalConversion' incorporates:
       *  Constant: '<S5>/Constant'
       *  Merge: '<Root>/Merge'
       *
       * Block requirements for '<Root>/SignalConversion':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       *
       * Block requirements for '<Root>/Merge':
       *  1. HLR_11 AHRS Voting for Triple Sensors
       *  2. HLR_12 AHRS Voting for Dual Sensors
       *  3. HLR_13 AHRS Usage of Single Sensor
       *  4. HLR_14 AHRS Usage of No Sensor
       */
      rty_AHRSData[i_8] = 0.0;
    }

    /* End of Outputs for SubSystem: '<Root>/ZeroValue' */
    break;
  }

  /* End of SwitchCase: '<Root>/SwitchCase' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
