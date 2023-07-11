/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * File: InnerLoop_Control.c
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

#include "InnerLoop_Control.h"
#include "rtwtypes.h"
#include "InnerLoop_Control_private.h"

MdlrefDW_InnerLoop_Control_T InnerLoop_Control_MdlrefDW;

/* Output and update for referenced model: 'InnerLoop_Control' */
void InnerLoop_Control(const real_T *rtu_PitchCorr, const real_T *rtu_RollCorr,
  const real_T *rtu_YawRateCorr, const real_T rtu_AHRSData[5], real_T
  rty_ActPosRef[3])
{
  real_T rtb_SOF[3];
  real_T rtb_Gain;
  real_T rtb_Gain_kyqb;
  real_T rtb_Sum1;
  int32_T i;
  int32_T i_0;

  /* Gain: '<Root>/SOF'
   *
   * Block requirements for '<Root>/SOF':
   *  1. HLR_5 Multi-Variable Inner Loop Control
   */
  for (i = 0; i < 3; i = i + 1) {
    rtb_SOF[i] = 0.0;
    for (i_0 = 0; i_0 < 5; i_0 = i_0 + 1) {
      rtb_SOF[i] = rtb_SOF[i] + (InnerLoop_Control_ConstP.SOF_Gain[i + (3 * i_0)]
        * rtu_AHRSData[i_0]);
    }
  }

  /* End of Gain: '<Root>/SOF' */

  /* Saturate: '<Root>/Saturation' incorporates:
   *  UnitDelay: '<S2>/UnitDelay'
   *  UnitDelay: '<S3>/UnitDelay'
   *  UnitDelay: '<S4>/UnitDelay'
   *
   * Block requirements for '<Root>/Saturation':
   *  1. HLR_5 Multi-Variable Inner Loop Control
   */
  if (InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE > 0.1) {
    rty_ActPosRef[0] = 0.1;
  } else if (InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE < -0.1) {
    rty_ActPosRef[0] = -0.1;
  } else {
    rty_ActPosRef[0] = InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE;
  }

  if (InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_ceii > 0.1) {
    rty_ActPosRef[1] = 0.1;
  } else if (InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_ceii < -0.1) {
    rty_ActPosRef[1] = -0.1;
  } else {
    rty_ActPosRef[1] = InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_ceii;
  }

  if (InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_j3xb > 0.1) {
    rty_ActPosRef[2] = 0.1;
  } else if (InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_j3xb < -0.1) {
    rty_ActPosRef[2] = -0.1;
  } else {
    rty_ActPosRef[2] = InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_j3xb;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Sum: '<Root>/Sum3'
   *
   * Block requirements for '<Root>/Sum3':
   *  1. HLR_5 Multi-Variable Inner Loop Control
   */
  rtb_Sum1 = (*rtu_YawRateCorr) - rtb_SOF[2];

  /* Gain: '<S4>/Gain' */
  rtb_Gain = 0.329679953964361 * rtb_Sum1;

  /* Sum: '<Root>/Sum2'
   *
   * Block requirements for '<Root>/Sum2':
   *  1. HLR_5 Multi-Variable Inner Loop Control
   */
  rtb_Sum1 = (*rtu_RollCorr) - rtb_SOF[1];

  /* Gain: '<S3>/Gain' */
  rtb_Gain_kyqb = 0.329679953964361 * rtb_Sum1;

  /* Sum: '<Root>/Sum1'
   *
   * Block requirements for '<Root>/Sum1':
   *  1. HLR_5 Multi-Variable Inner Loop Control
   */
  rtb_Sum1 = (*rtu_PitchCorr) - rtb_SOF[0];

  /* Update for UnitDelay: '<S2>/UnitDelay' incorporates:
   *  Gain: '<S2>/Gain'
   *  Gain: '<S2>/Gain1'
   *  Sum: '<S2>/Sum'
   */
  InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE = (0.329679953964361 *
    rtb_Sum1) + (0.670320046035639 *
                 InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE);

  /* Update for UnitDelay: '<S3>/UnitDelay' incorporates:
   *  Gain: '<S3>/Gain1'
   *  Sum: '<S3>/Sum'
   */
  InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_ceii = rtb_Gain_kyqb +
    (0.670320046035639 * InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_ceii);

  /* Update for UnitDelay: '<S4>/UnitDelay' incorporates:
   *  Gain: '<S4>/Gain1'
   *  Sum: '<S4>/Sum'
   */
  InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_j3xb = rtb_Gain +
    (0.670320046035639 * InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_j3xb);
}

/* Model initialize function */
void InnerLoop_Control_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE = 0.0;
  InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_ceii = 0.0;
  InnerLoop_Control_MdlrefDW.rtdw.UnitDelay_DSTATE_j3xb = 0.0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
