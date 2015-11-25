/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd */
void checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_in,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::currentMoRCStatus */ morcStatus_T_RCM_Session_Types_Pkg *currentMoRCStatus,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_out */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_out)
{
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L43 */ kcg_bool _L43;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L44 */ P42_SessionManagement_T_Packet_Types_Pkg _L44;
  
  /* 1 */ Read_P042_TM(&(*p42_sessionCmd_in).packets, &_L43, &_L44);
  /* 1 */ if (((((*currentMoRCStatus).registration.status ==
          mrs_registered_RCM_Types_Pkg) & (_L44.q_rbc ==
          Q_RBC_Establish_communication_session)) | ((_L44.q_rbc ==
          Q_RBC_Terminate_communication_session) &
        (((*currentMoRCStatus).connection.status ==
            mcs_connected_RCM_Types_Pkg) |
          ((*currentMoRCStatus).session.phase ==
            sp_maintaining_RCM_Session_Types_Pkg)) &
        ((*currentMoRCStatus).connection.nid_radio == _L44.nid_radio) &
        ((*currentMoRCStatus).session.nid_c == _L44.nid_c) &
        ((*currentMoRCStatus).session.nid_rbc == _L44.nid_rbc))) & _L43 &
    (*p42_sessionCmd_in).valid & _L44.valid) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p42_sessionCmd_out,
      p42_sessionCmd_in);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p42_sessionCmd_out,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

