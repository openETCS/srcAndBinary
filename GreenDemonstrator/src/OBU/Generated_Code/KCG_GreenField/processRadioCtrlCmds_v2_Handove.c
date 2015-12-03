/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processRadioCtrlCmds_v2_Handove.h"

/* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2 */
void processRadioCtrlCmds_v2_Handove(
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrd,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p42_establishOrTerminateSessionCmd_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishOrTerminateSession,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::additionalSessionCmdsFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::morcStatus */ morcStatus_T_RCM_Session_Types_ *morcStatus,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::sessionCmds_2_MoRC */ msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmds_2_MoRC)
{
  /* 28 */ if ((*p42_establishOrTerminateSession).valid) {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      sessionCmds_2_MoRC,
      p42_establishOrTerminateSession);
  }
  else /* 27 */ if ((*p45_radioNetworkRegistrationOrd).valid) {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      sessionCmds_2_MoRC,
      p45_radioNetworkRegistrationOrd);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      sessionCmds_2_MoRC,
      additionalSessionCmdsFromTrack_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** processRadioCtrlCmds_v2_Handove.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

