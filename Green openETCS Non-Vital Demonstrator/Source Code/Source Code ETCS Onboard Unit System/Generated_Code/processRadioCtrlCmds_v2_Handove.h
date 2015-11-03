/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _processRadioCtrlCmds_v2_Handov
#define _processRadioCtrlCmds_v2_Handov

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2 */
extern void processRadioCtrlCmds_v2_Handove(
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrd,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::p42_establishOrTerminateSessionCmd_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishOrTerminateSession,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::additionalSessionCmdsFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::morcStatus */ morcStatus_T_RCM_Session_Types_ *morcStatus,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2::sessionCmds_2_MoRC */ msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmds_2_MoRC);

#endif /* _processRadioCtrlCmds_v2_Handov */
/* $**************** KCG Version 6.4 (build i21) ****************
** processRadioCtrlCmds_v2_Handove.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

