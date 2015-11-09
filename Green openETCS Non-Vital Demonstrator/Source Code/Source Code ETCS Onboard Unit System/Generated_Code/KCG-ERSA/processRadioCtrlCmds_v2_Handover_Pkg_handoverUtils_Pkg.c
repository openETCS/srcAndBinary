/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2 */
void processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p45_radioNetworkRegistrationOrder_in */msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p42_establishOrTerminateSessionCmd_in */msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishOrTerminateSessionCmd_in,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::additionalSessionCmdsFromTrack_in */msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::morcStatus */morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::mobileDeviceNo */kcg_int mobileDeviceNo,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::sessionCmds_2_MoRC */msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmds_2_MoRC)
{
  if ((*p42_establishOrTerminateSessionCmd_in).valid) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      sessionCmds_2_MoRC,
      p42_establishOrTerminateSessionCmd_in);
  }
  else if ((*p45_radioNetworkRegistrationOrder_in).valid) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      sessionCmds_2_MoRC,
      p45_radioNetworkRegistrationOrder_in);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      sessionCmds_2_MoRC,
      additionalSessionCmdsFromTrack_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-09T11:52:26
*************************************************************$ */
