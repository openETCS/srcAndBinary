/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSession_v2_MoRC_Pck_Su.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSession_v2_init_MoRC_P(outC_establishSession_v2_MoRC_P *outC)
{
  outC->send_m155_initiationOfACommunic = kcg_true;
  outC->send_m159_sessionEstablishedRep = kcg_true;
  outC->send_m154_noCompatibleVersionSu = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->terminateCommunicationSession = kcg_true;
  outC->infomDriverNoCompatibleVersionS = kcg_true;
  outC->established = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = _148_SSM_st_idle_SM1;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->p42_establishSessionCmd.valid = kcg_true;
  outC->p42_establishSessionCmd.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_establishSessionCmd.q_dir = Q_DIR_Reverse;
  outC->p42_establishSessionCmd.q_rbc = Q_RBC_Terminate_communication_s;
  outC->p42_establishSessionCmd.nid_c = 0;
  outC->p42_establishSessionCmd.nid_RBC = 0;
  outC->p42_establishSessionCmd.nid_radio = 0;
  outC->p42_establishSessionCmd.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_e;
  outC->p42_establishSessionCmd.origin.valid = kcg_true;
  outC->p42_establishSessionCmd.origin.nid_c = 0;
  outC->p42_establishSessionCmd.origin.rbc_id = 0;
  outC->p42_establishSessionCmd.origin.device_id = 0;
  /* 1 */ establishSessionFromRBC_v2_init(&outC->_1_Context_1);
  /* 1 */ establishSessionFromOBU_v2_init(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSession_v2_reset_MoRC_(outC_establishSession_v2_MoRC_P *outC)
{
  outC->init = kcg_true;
  /* 1 */ establishSessionFromRBC_v2_rese(&outC->_1_Context_1);
  /* 1 */ establishSessionFromOBU_v2_rese(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::establishSession_v2 */
void establishSession_v2_MoRC_Pck_Su(
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_ *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::reset */ kcg_bool reset,
  outC_establishSession_v2_MoRC_P *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _149_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static _149_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
  static kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByOBU */
  static kcg_bool initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establishSession_v2::initiatedByRBC */
  static kcg_bool initiatedByRBC;
  
  initiatedByOBU = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByOBU;
  /* init_SM1 */ if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = _148_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  initiatedByRBC = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByRBC &
    (*sessionEstablishCmd_in).m38.valid & ((*connectionStatus).valid &
      ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg));
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _148_SSM_st_idle_SM1 :
      if (initiatedByOBU) {
        SM1_reset_act = kcg_true;
        SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      else {
        if (initiatedByRBC) {
          SM1_state_act = SSM_st_establishingByRBC_SM1;
        }
        else {
          SM1_state_act = _148_SSM_st_idle_SM1;
        }
        SM1_reset_act = initiatedByRBC;
      }
      break;
    case SSM_st_establishingByOBU_SM1 :
      if (reset) {
        SM1_state_act = _148_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_establishingByOBU_SM1;
      }
      SM1_reset_act = reset;
      break;
    case SSM_st_establishingByRBC_SM1 :
      if (reset) {
        SM1_state_act = _148_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_establishingByRBC_SM1;
      }
      SM1_reset_act = reset;
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case _148_SSM_st_idle_SM1 :
      outC->established = kcg_false;
      outC->infomDriverNoCompatibleVersionS = kcg_false;
      outC->terminateCommunicationSession = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSu = kcg_false;
      outC->send_m159_sessionEstablishedRep = kcg_false;
      outC->send_m155_initiationOfACommunic = kcg_false;
      kcg_copy_p42_sessionManagement_(
        &outC->p42_establishSessionCmd,
        (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus,
        (sessionStatus_T_RCM_Session_Typ *) &cNoSessionStatus_RCM_Session_Ty);
      outC->sessionStatus.valid = kcg_true;
      outC->SM1_state_nxt = _148_SSM_st_idle_SM1;
      break;
    case SSM_st_establishingByOBU_SM1 :
      if (SM1_reset_act) {
        /* 1 */ establishSessionFromOBU_v2_rese(&outC->Context_1);
      }
      /* 1 */
      establishSessionFromOBU_v2_MoRC(
        sessionEstablishCmd_in,
        m32_SystemVersion,
        connectionStatus,
        reset,
        &outC->Context_1);
      kcg_copy_p42_sessionManagement_(
        &outC->p42_establishSessionCmd,
        &outC->Context_1.p42_establishSessionCmd);
      outC->send_m155_initiationOfACommunic =
        outC->Context_1.send_m155_initiationOfACommunic;
      outC->send_m159_sessionEstablishedRep =
        outC->Context_1.send_m159_sessionEstablishedRep;
      outC->send_m154_noCompatibleVersionSu =
        outC->Context_1.send_m154_noCompatibleVersionSu;
      outC->requestSafeRadioConnectionSetup =
        outC->Context_1.requestSafeRadioConnectionSetup;
      outC->terminateCommunicationSession =
        outC->Context_1.terminateCommunicationSession;
      outC->infomDriverNoCompatibleVersionS =
        outC->Context_1.infomDriverNoCompatibleVersionS;
      outC->established = outC->Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus,
        &outC->Context_1.sessionStatus);
      outC->SM1_state_nxt = SSM_st_establishingByOBU_SM1;
      break;
    case SSM_st_establishingByRBC_SM1 :
      outC->infomDriverNoCompatibleVersionS = kcg_false;
      outC->terminateCommunicationSession = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSu = kcg_false;
      outC->send_m155_initiationOfACommunic = kcg_false;
      kcg_copy_p42_sessionManagement_(
        &outC->p42_establishSessionCmd,
        (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
      if (SM1_reset_act) {
        /* 1 */ establishSessionFromRBC_v2_rese(&outC->_1_Context_1);
      }
      /* 1 */
      establishSessionFromRBC_v2_MoRC(
        sessionEstablishCmd_in,
        connectionStatus,
        reset,
        &outC->_1_Context_1);
      outC->send_m159_sessionEstablishedRep =
        outC->_1_Context_1.send_m159_sessionEstablishedRep;
      outC->established = outC->_1_Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus,
        &outC->_1_Context_1.sessionStatus);
      outC->SM1_state_nxt = SSM_st_establishingByRBC_SM1;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSession_v2_MoRC_Pck_Su.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

