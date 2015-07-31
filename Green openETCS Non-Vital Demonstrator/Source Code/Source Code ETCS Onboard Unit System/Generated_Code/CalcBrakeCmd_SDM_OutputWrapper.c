/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakeCmd_SDM_OutputWrapper.h"

void CalcBrakeCmd_reset_SDM_OutputWrapper(
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC)
{
  outC->init = kcg_true;
}

/* SDM_OutputWrapper::CalcBrakeCmd */
void CalcBrakeCmd_SDM_OutputWrapper(
  /* SDM_OutputWrapper::CalcBrakeCmd::triggeredEB */kcg_bool triggeredEB,
  /* SDM_OutputWrapper::CalcBrakeCmd::triggeredSB */kcg_bool triggeredSB,
  /* SDM_OutputWrapper::CalcBrakeCmd::revokedEB */kcg_bool revokedEB,
  /* SDM_OutputWrapper::CalcBrakeCmd::revokedSB */kcg_bool revokedSB,
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC)
{
  /* SDM_OutputWrapper::CalcBrakeCmd::IfBlock2::else */
  static kcg_bool else_clock_IfBlock2;
  /* SDM_OutputWrapper::CalcBrakeCmd::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  
  outC->brakeCmd.valid = kcg_true;
  if (outC->init) {
    else_clock_IfBlock2 = kcg_false;
    outC->init = kcg_false;
    else_clock_IfBlock1 = kcg_false;
  }
  else {
    else_clock_IfBlock2 = outC->trigSB;
    else_clock_IfBlock1 = outC->trigEB;
  }
  outC->trigSB = triggeredSB | (!revokedSB & !triggeredSB &
      else_clock_IfBlock2);
  outC->trigEB = (else_clock_IfBlock1 & !revokedEB & !triggeredEB) |
    triggeredEB;
  if (revokedSB) {
    outC->brakeCmd.m_servicebrake_cm = release_brake_TIU_Types_Pkg;
  }
  else if (outC->trigSB) {
    outC->brakeCmd.m_servicebrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_servicebrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
  if (revokedEB) {
    outC->brakeCmd.m_emergencybrake_cm = release_brake_TIU_Types_Pkg;
  }
  else if (outC->trigEB) {
    outC->brakeCmd.m_emergencybrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_emergencybrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcBrakeCmd_SDM_OutputWrapper.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

