/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSession_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->send_m155_initiationOfACommunicationSession = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->send_m154_noCompatibleVersionSupported = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->terminateCommunicationSession = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->established = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = _7_SSM_st_idle_SM1;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->p42_establishSessionCmd.valid = kcg_true;
  outC->p42_establishSessionCmd.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_establishSessionCmd.q_dir = Q_DIR_Reverse;
  outC->p42_establishSessionCmd.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_establishSessionCmd.nid_c = 0;
  outC->p42_establishSessionCmd.nid_RBC = 0;
  outC->p42_establishSessionCmd.nid_radio = 0;
  outC->p42_establishSessionCmd.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_establishSessionCmd.origin.valid = kcg_true;
  outC->p42_establishSessionCmd.origin.nid_c = 0;
  outC->p42_establishSessionCmd.origin.rbc_id = 0;
  outC->p42_establishSessionCmd.origin.device_id = 0;
  /* 1 */
  establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::establishSession_v2 */
void establishSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::reset */ kcg_bool reset,
  outC_establishSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */ _8_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */ _8_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */ kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByOBU */ kcg_bool initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByRBC */ kcg_bool initiatedByRBC;
  
  initiatedByOBU = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByOBU;
  /* init_SM1 */ if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = _7_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  initiatedByRBC = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByRBC &
    (*sessionEstablishCmd_in).m38.valid & ((*connectionStatus).valid &
      ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg));
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _7_SSM_st_idle_SM1 :
      if (initiatedByOBU) {
        SM1_reset_act = kcg_true;
        SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      else {
        if (initiatedByRBC) {
          SM1_state_act = SSM_st_establishingByRBC_SM1;
        }
        else {
          SM1_state_act = _7_SSM_st_idle_SM1;
        }
        SM1_reset_act = initiatedByRBC;
      }
      break;
    case SSM_st_establishingByOBU_SM1 :
      if (reset) {
        SM1_state_act = _7_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      SM1_reset_act = reset;
      break;
    case SSM_st_establishingByRBC_SM1 :
      if (reset) {
        SM1_state_act = _7_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_establishingByRBC_SM1;
      }
      SM1_reset_act = reset;
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case _7_SSM_st_idle_SM1 :
      outC->established = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->terminateCommunicationSession = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        (sessionStatus_T_RCM_Session_Types_Pkg *)
          &cNoSessionStatus_RCM_Session_Types_Pkg);
      outC->sessionStatus.valid = kcg_true;
      outC->SM1_state_nxt = _7_SSM_st_idle_SM1;
      break;
    case SSM_st_establishingByOBU_SM1 :
      if (SM1_reset_act) {
        /* 1 */
        establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
      }
      /* 1 */
      establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
        sessionEstablishCmd_in,
        m32_SystemVersion,
        connectionStatus,
        reset,
        &outC->Context_1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        &outC->Context_1.p42_establishSessionCmd);
      outC->send_m155_initiationOfACommunicationSession =
        outC->Context_1.send_m155_initiationOfACommunicationSession;
      outC->send_m159_sessionEstablishedReport =
        outC->Context_1.send_m159_sessionEstablishedReport;
      outC->send_m154_noCompatibleVersionSupported =
        outC->Context_1.send_m154_noCompatibleVersionSupported;
      outC->requestSafeRadioConnectionSetup =
        outC->Context_1.requestSafeRadioConnectionSetup;
      outC->terminateCommunicationSession =
        outC->Context_1.terminateCommunicationSession;
      outC->infomDriverNoCompatibleVersionSupported =
        outC->Context_1.infomDriverNoCompatibleVersionSupported;
      outC->established = outC->Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->Context_1.sessionStatus);
      outC->SM1_state_nxt = SSM_st_establishingByOBU_SM1;
      break;
    case SSM_st_establishingByRBC_SM1 :
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->terminateCommunicationSession = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_establishSessionCmd,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (SM1_reset_act) {
        /* 1 */
        establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->_1_Context_1);
      }
      /* 1 */
      establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
        sessionEstablishCmd_in,
        connectionStatus,
        reset,
        &outC->_1_Context_1);
      outC->send_m159_sessionEstablishedReport =
        outC->_1_Context_1.send_m159_sessionEstablishedReport;
      outC->established = outC->_1_Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->_1_Context_1.sessionStatus);
      outC->SM1_state_nxt = SSM_st_establishingByRBC_SM1;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

