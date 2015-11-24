/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSessionFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->send_m155_initiationOfACommunicationSession = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->send_m154_noCompatibleVersionSupported = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->terminateCommunicationSession = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->established = kcg_true;
  outC->init = kcg_true;
  outC->sessionEstablishCmd_mem.valid = kcg_true;
  outC->sessionEstablishCmd_mem.initiatedByOBU = kcg_true;
  outC->sessionEstablishCmd_mem.initiatedByRBC = kcg_true;
  outC->sessionEstablishCmd_mem.q_rbc = Q_RBC_Terminate_communication_session;
  outC->sessionEstablishCmd_mem.nid_c = 0;
  outC->sessionEstablishCmd_mem.nid_rbc = 0;
  outC->sessionEstablishCmd_mem.nid_radio = 0;
  outC->sessionEstablishCmd_mem.origin.valid = kcg_true;
  outC->sessionEstablishCmd_mem.origin.nid_c = 0;
  outC->sessionEstablishCmd_mem.origin.rbc_id = 0;
  outC->sessionEstablishCmd_mem.origin.device_id = 0;
  outC->sessionEstablishCmd_mem.m38.valid = kcg_true;
  outC->sessionEstablishCmd_mem.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->sessionEstablishCmd_mem.m38.origin.valid = kcg_true;
  outC->sessionEstablishCmd_mem.m38.origin.nid_c = 0;
  outC->sessionEstablishCmd_mem.m38.origin.rbc_id = 0;
  outC->sessionEstablishCmd_mem.m38.origin.device_id = 0;
  outC->sessionEstablishCmd_mem.p42.valid = kcg_true;
  outC->sessionEstablishCmd_mem.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->sessionEstablishCmd_mem.p42.q_dir = Q_DIR_Reverse;
  outC->sessionEstablishCmd_mem.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->sessionEstablishCmd_mem.p42.nid_c = 0;
  outC->sessionEstablishCmd_mem.p42.nid_RBC = 0;
  outC->sessionEstablishCmd_mem.p42.nid_radio = 0;
  outC->sessionEstablishCmd_mem.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->sessionEstablishCmd_mem.p42.origin.valid = kcg_true;
  outC->sessionEstablishCmd_mem.p42.origin.nid_c = 0;
  outC->sessionEstablishCmd_mem.p42.origin.rbc_id = 0;
  outC->sessionEstablishCmd_mem.p42.origin.device_id = 0;
  outC->SM1_state_nxt = _18_SSM_st_idle_SM1;
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
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSessionFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
void establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::reset */ kcg_bool reset,
  outC_establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::idle */ kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSafeRadioConnectionSetUp */ kcg_bool br_1_guard_SM1_waitForSafeRadioConnectionSetUp;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */ kcg_bool br_1_guard_SM1_waitForSystemVersion;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */ _19_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */ _19_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionSupported */ kcg_bool systemVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionNotSupported */ kcg_bool systemVersionNotSupported;
  
  outC->sessionStatus.valid = kcg_true;
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = _18_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  systemVersionSupported = (*m32_SystemVersion).valid &
    (*m32_SystemVersion).versionSupported;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _17_SSM_st_sessionEstablished_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      br_1_guard_SM1_waitForSystemVersion = reset;
      /* guard_waitForSystemVersion */ if (br_1_guard_SM1_waitForSystemVersion) {
        outC->send_m159_sessionEstablishedReport = kcg_false;
      }
      else {
        br_1_guard_SM1_waitForSafeRadioConnectionSetUp = systemVersionSupported;
        /* cb_anon_sm */ if (br_1_guard_SM1_waitForSafeRadioConnectionSetUp) {
          outC->send_m159_sessionEstablishedReport = kcg_true;
        }
        else {
          outC->send_m159_sessionEstablishedReport = kcg_false;
        }
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      break;
    case _18_SSM_st_idle_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      break;
    
  }
  outC->established = outC->send_m159_sessionEstablishedReport;
  systemVersionNotSupported = (*m32_SystemVersion).valid &
    !(*m32_SystemVersion).versionSupported;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _17_SSM_st_sessionEstablished_SM1 :
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      /* guard_waitForSystemVersion */ if (br_1_guard_SM1_waitForSystemVersion) {
        outC->send_m154_noCompatibleVersionSupported = kcg_false;
      }
      else /* cb_anon_sm */ if (br_1_guard_SM1_waitForSafeRadioConnectionSetUp) {
        outC->send_m154_noCompatibleVersionSupported = kcg_false;
      }
      else /* cb_anon_sm */ if (systemVersionNotSupported) {
        outC->send_m154_noCompatibleVersionSupported = kcg_true;
      }
      else {
        outC->send_m154_noCompatibleVersionSupported = kcg_false;
      }
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case _18_SSM_st_idle_SM1 :
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      br_1_guard_SM1_idle = (*sessionEstablishCmd_in).valid &
        (*sessionEstablishCmd_in).initiatedByOBU;
      /* guard_idle */ if (br_1_guard_SM1_idle) {
        outC->requestSafeRadioConnectionSetup = kcg_true;
      }
      else {
        outC->requestSafeRadioConnectionSetup = kcg_false;
      }
      break;
    
  }
  outC->infomDriverNoCompatibleVersionSupported =
    outC->send_m154_noCompatibleVersionSupported;
  outC->terminateCommunicationSession =
    outC->send_m154_noCompatibleVersionSupported;
  /* 1 */ if (outC->send_m154_noCompatibleVersionSupported | reset) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  else /* 4 */ if ((*sessionEstablishCmd_in).valid) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      sessionEstablishCmd_in);
  }
  else /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->sessionEstablishCmd_mem.nid_c;
  outC->sessionStatus.nid_rbc = outC->sessionEstablishCmd_mem.nid_rbc;
  outC->sessionStatus.nid_radio = outC->sessionEstablishCmd_mem.nid_radio;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _18_SSM_st_idle_SM1 :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      if (br_1_guard_SM1_idle) {
        SM1_state_act = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      }
      else {
        SM1_state_act = _18_SSM_st_idle_SM1;
      }
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      br_1_guard_SM1_waitForSafeRadioConnectionSetUp =
        (*connectionStatus).valid & ((*connectionStatus).status ==
          mcs_connected_RCM_Types_Pkg) & ((*connectionStatus).nid_radio ==
          outC->sessionEstablishCmd_mem.nid_radio) &
        outC->sessionEstablishCmd_mem.valid;
      if (br_1_guard_SM1_waitForSafeRadioConnectionSetUp) {
        outC->send_m155_initiationOfACommunicationSession = kcg_true;
        SM1_state_act = SSM_st_waitForSystemVersion_SM1;
      }
      else {
        outC->send_m155_initiationOfACommunicationSession = kcg_false;
        if (reset) {
          SM1_state_act = _18_SSM_st_idle_SM1;
        }
        else {
          SM1_state_act = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
        }
      }
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      if (br_1_guard_SM1_waitForSystemVersion) {
        SM1_state_act = _18_SSM_st_idle_SM1;
      }
      else if (systemVersionSupported) {
        SM1_state_act = _17_SSM_st_sessionEstablished_SM1;
      }
      else if (systemVersionNotSupported) {
        SM1_state_act = _18_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_waitForSystemVersion_SM1;
      }
      break;
    case _17_SSM_st_sessionEstablished_SM1 :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      if (reset) {
        SM1_state_act = _18_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = _17_SSM_st_sessionEstablished_SM1;
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case _18_SSM_st_idle_SM1 :
      outC->SM1_state_nxt = _18_SSM_st_idle_SM1;
      outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
      break;
    case SSM_st_waitForSafeRadioConnectionSetUp_SM1 :
      outC->SM1_state_nxt = SSM_st_waitForSafeRadioConnectionSetUp_SM1;
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->SM1_state_nxt = SSM_st_waitForSystemVersion_SM1;
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      break;
    case _17_SSM_st_sessionEstablished_SM1 :
      outC->SM1_state_nxt = _17_SSM_st_sessionEstablished_SM1;
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      break;
    
  }
  /* ck_requestSafeRadioConnectionSetup */ if (outC->requestSafeRadioConnectionSetup) {
    /* 1 */
    sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg(
      &outC->sessionEstablishCmd_mem,
      &br_1_guard_SM1_waitForSafeRadioConnectionSetUp,
      &outC->p42_establishSessionCmd);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->p42_establishSessionCmd,
      (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
        &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromOBU_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

