/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSessionCmd_Handover_Pkg_ha.h"

/* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd */
void checkSessionCmd_Handover_Pkg_ha(
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_in,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::currentMoRCStatus */ morcStatus_T_RCM_Session_Types_ *currentMoRCStatus,
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::p42_sessionCmd_out */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_out)
{
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L43 */
  static kcg_bool _L43;
  /* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd::_L44 */
  static P42_SessionManagement_T_Packet_ _L44;
  
  /* 1 */ Read_P042_TM(&(*p42_sessionCmd_in).packets, &_L43, &_L44);
  /* 1 */ if (((((*currentMoRCStatus).registration.status ==
          mrs_registered_RCM_Types_Pkg) & (_L44.q_rbc ==
          Q_RBC_Establish_communication_s)) | ((_L44.q_rbc ==
          Q_RBC_Terminate_communication_s) &
        (((*currentMoRCStatus).connection.status ==
            mcs_connected_RCM_Types_Pkg) |
          ((*currentMoRCStatus).session.phase ==
            sp_maintaining_RCM_Session_Type)) &
        ((*currentMoRCStatus).connection.nid_radio == _L44.nid_radio) &
        ((*currentMoRCStatus).session.nid_c == _L44.nid_c) &
        ((*currentMoRCStatus).session.nid_rbc == _L44.nid_rbc))) & _L43 &
    (*p42_sessionCmd_in).valid & _L44.valid) {
    kcg_copy_msgFromTrack_T_RCM_Msg(p42_sessionCmd_out, p42_sessionCmd_in);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p42_sessionCmd_out,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkSessionCmd_Handover_Pkg_ha.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

