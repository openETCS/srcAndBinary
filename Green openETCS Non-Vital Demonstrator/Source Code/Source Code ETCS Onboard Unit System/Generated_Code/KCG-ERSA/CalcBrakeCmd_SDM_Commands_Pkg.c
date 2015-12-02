/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakeCmd_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CalcBrakeCmd_init_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  outC->trigEB = kcg_true;
  outC->trigSB = kcg_true;
  outC->init = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcBrakeCmd_reset_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::CalcBrakeCmd */
void CalcBrakeCmd_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcBrakeCmd::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcBrakeCmd::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcBrakeCmd::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Commands_Pkg::CalcBrakeCmd::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::CalcBrakeCmd */ kcg_bool tmp1;
  /* SDM_Commands_Pkg::CalcBrakeCmd */ kcg_bool tmp;
  /* SDM_Commands_Pkg::CalcBrakeCmd::SB2EB */ kcg_bool SB2EB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::SB2SB */ kcg_bool SB2SB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::revSB */ kcg_bool revSB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::revEB */ kcg_bool revEB;
  
  outC->brakeCmd.valid = kcg_true;
  tmp = (*NationalValues).q_nvsbtsmperm == Q_NVSBTSMPERM_No;
  revSB = (*in_sdmCmd).sdmType == TSM_SDM_Types_Pkg;
  SB2EB = !(*TrainData_int).isSB_CmdAvailable | (tmp & revSB);
  revEB = ((*in_sdmCmd).revokedEB | (SB2EB & (*in_sdmCmd).revokedSB)) &
    (((*NationalValues).q_nvemrrls ==
        Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded) |
      (*speeds).OdoStandStill);
  SB2SB = ((!tmp & revSB) | !revSB) & (*TrainData_int).isSB_CmdAvailable;
  revSB = (*in_sdmCmd).revokedSB & SB2SB;
  /* last_init_ck_trigSB */ if (outC->init) {
    tmp1 = kcg_false;
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp1 = outC->trigEB;
    tmp = outC->trigSB;
  }
  outC->trigEB = (*in_sdmCmd).triggeredEB | (*in_sdmCmd).ebCmd | (SB2EB &
      (*in_sdmCmd).triggeredSB) | (tmp1 & !revEB);
  outC->trigSB = ((*in_sdmCmd).triggeredSB & SB2SB) | (tmp & !revSB);
  /* 1 */ if (outC->trigSB) {
    outC->brakeCmd.m_servicebrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else /* 2 */ if (revSB) {
    outC->brakeCmd.m_servicebrake_cm = release_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_servicebrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
  /* 3 */ if (outC->trigEB) {
    outC->brakeCmd.m_emergencybrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else /* 4 */ if (revEB) {
    outC->brakeCmd.m_emergencybrake_cm = release_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_emergencybrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcBrakeCmd_SDM_Commands_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

