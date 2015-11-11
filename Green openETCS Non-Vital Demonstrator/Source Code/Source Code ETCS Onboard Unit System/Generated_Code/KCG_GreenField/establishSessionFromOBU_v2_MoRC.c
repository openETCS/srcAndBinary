/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromOBU_v2_MoRC.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSessionFromOBU_v2_init(outC_establishSessionFromOBU_v2 *outC)
{
  outC->send_m155_initiationOfACommunic = kcg_true;
  outC->send_m159_sessionEstablishedRep = kcg_true;
  outC->send_m154_noCompatibleVersionSu = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->terminateCommunicationSession = kcg_true;
  outC->infomDriverNoCompatibleVersionS = kcg_true;
  outC->established = kcg_true;
  outC->init = kcg_true;
  outC->sessionEstablishCmd_mem.valid = kcg_true;
  outC->sessionEstablishCmd_mem.initiatedByOBU = kcg_true;
  outC->sessionEstablishCmd_mem.initiatedByRBC = kcg_true;
  outC->sessionEstablishCmd_mem.q_rbc = Q_RBC_Terminate_communication_s;
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
  outC->sessionEstablishCmd_mem.p42.q_rbc = Q_RBC_Terminate_communication_s;
  outC->sessionEstablishCmd_mem.p42.nid_c = 0;
  outC->sessionEstablishCmd_mem.p42.nid_RBC = 0;
  outC->sessionEstablishCmd_mem.p42.nid_radio = 0;
  outC->sessionEstablishCmd_mem.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_e;
  outC->sessionEstablishCmd_mem.p42.origin.valid = kcg_true;
  outC->sessionEstablishCmd_mem.p42.origin.nid_c = 0;
  outC->sessionEstablishCmd_mem.p42.origin.rbc_id = 0;
  outC->sessionEstablishCmd_mem.p42.origin.device_id = 0;
  outC->SM1_state_nxt = _162_SSM_st_idle_SM1;
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
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSessionFromOBU_v2_rese(outC_establishSessionFromOBU_v2 *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2 */
void establishSessionFromOBU_v2_MoRC(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_ *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::reset */ kcg_bool reset,
  outC_establishSessionFromOBU_v2 *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::idle */
  static kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSafeRadioConnectionSetUp */
  static kcg_bool br_1_guard_SM1_waitForSafeRadio;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1::waitForSystemVersion */
  static kcg_bool br_1_guard_SM1_waitForSystemVer;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _163_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
  static _163_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionSupported */
  static kcg_bool systemVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::systemVersionNotSupported */
  static kcg_bool systemVersionNotSupported;
  
  outC->sessionStatus.valid = kcg_true;
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = _162_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  systemVersionSupported = (*m32_SystemVersion).valid &
    (*m32_SystemVersion).versionSupported;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _161_SSM_st_sessionEstablished_ :
      outC->send_m159_sessionEstablishedRep = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      br_1_guard_SM1_waitForSystemVer = reset;
      /* guard_waitForSystemVersion */ if (br_1_guard_SM1_waitForSystemVer) {
        outC->send_m159_sessionEstablishedRep = kcg_false;
      }
      else {
        br_1_guard_SM1_waitForSafeRadio = systemVersionSupported;
        /* cb_anon_sm */ if (br_1_guard_SM1_waitForSafeRadio) {
          outC->send_m159_sessionEstablishedRep = kcg_true;
        }
        else {
          outC->send_m159_sessionEstablishedRep = kcg_false;
        }
      }
      break;
    case SSM_st_waitForSafeRadioConnecti :
      outC->send_m159_sessionEstablishedRep = kcg_false;
      break;
    case _162_SSM_st_idle_SM1 :
      outC->send_m159_sessionEstablishedRep = kcg_false;
      break;
    
  }
  outC->established = outC->send_m159_sessionEstablishedRep;
  systemVersionNotSupported = (*m32_SystemVersion).valid &
    !(*m32_SystemVersion).versionSupported;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _161_SSM_st_sessionEstablished_ :
      outC->send_m154_noCompatibleVersionSu = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      /* guard_waitForSystemVersion */ if (br_1_guard_SM1_waitForSystemVer) {
        outC->send_m154_noCompatibleVersionSu = kcg_false;
      }
      else /* cb_anon_sm */ if (br_1_guard_SM1_waitForSafeRadio) {
        outC->send_m154_noCompatibleVersionSu = kcg_false;
      }
      else /* cb_anon_sm */ if (systemVersionNotSupported) {
        outC->send_m154_noCompatibleVersionSu = kcg_true;
      }
      else {
        outC->send_m154_noCompatibleVersionSu = kcg_false;
      }
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case SSM_st_waitForSafeRadioConnecti :
      outC->send_m154_noCompatibleVersionSu = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      break;
    case _162_SSM_st_idle_SM1 :
      outC->send_m154_noCompatibleVersionSu = kcg_false;
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
  outC->infomDriverNoCompatibleVersionS = outC->send_m154_noCompatibleVersionSu;
  outC->terminateCommunicationSession = outC->send_m154_noCompatibleVersionSu;
  /* 1 */ if (outC->send_m154_noCompatibleVersionSu | reset) {
    kcg_copy_sessionCmd_T_RCM_Sessi(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_ *) &cNoSessionCmd_RCM_Session_Types);
  }
  else /* 4 */ if ((*sessionEstablishCmd_in).valid) {
    kcg_copy_sessionCmd_T_RCM_Sessi(
      &outC->sessionEstablishCmd_mem,
      sessionEstablishCmd_in);
  }
  else /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Sessi(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_ *) &cNoSessionCmd_RCM_Session_Types);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->sessionEstablishCmd_mem.nid_c;
  outC->sessionStatus.nid_rbc = outC->sessionEstablishCmd_mem.nid_rbc;
  outC->sessionStatus.nid_radio = outC->sessionEstablishCmd_mem.nid_radio;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _162_SSM_st_idle_SM1 :
      outC->send_m155_initiationOfACommunic = kcg_false;
      if (br_1_guard_SM1_idle) {
        SM1_state_act = SSM_st_waitForSafeRadioConnecti;
      }
      else {
        SM1_state_act = _162_SSM_st_idle_SM1;
      }
      break;
    case SSM_st_waitForSafeRadioConnecti :
      br_1_guard_SM1_waitForSafeRadio = (*connectionStatus).valid &
        ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg) &
        ((*connectionStatus).nid_radio ==
          outC->sessionEstablishCmd_mem.nid_radio) &
        outC->sessionEstablishCmd_mem.valid;
      if (br_1_guard_SM1_waitForSafeRadio) {
        outC->send_m155_initiationOfACommunic = kcg_true;
        SM1_state_act = SSM_st_waitForSystemVersion_SM1;
      }
      else {
        outC->send_m155_initiationOfACommunic = kcg_false;
        if (reset) {
          SM1_state_act = _162_SSM_st_idle_SM1;
        }
        else {
          SM1_state_act = SSM_st_waitForSafeRadioConnecti;
        }
      }
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->send_m155_initiationOfACommunic = kcg_false;
      if (br_1_guard_SM1_waitForSystemVer) {
        SM1_state_act = _162_SSM_st_idle_SM1;
      }
      else if (systemVersionSupported) {
        SM1_state_act = _161_SSM_st_sessionEstablished_;
      }
      else if (systemVersionNotSupported) {
        SM1_state_act = _162_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_waitForSystemVersion_SM1;
      }
      break;
    case _161_SSM_st_sessionEstablished_ :
      outC->send_m155_initiationOfACommunic = kcg_false;
      if (reset) {
        SM1_state_act = _162_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = _161_SSM_st_sessionEstablished_;
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case _162_SSM_st_idle_SM1 :
      outC->SM1_state_nxt = _162_SSM_st_idle_SM1;
      outC->sessionStatus.phase = sp_terminated_RCM_Session_Types;
      break;
    case SSM_st_waitForSafeRadioConnecti :
      outC->SM1_state_nxt = SSM_st_waitForSafeRadioConnecti;
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Typ;
      break;
    case SSM_st_waitForSystemVersion_SM1 :
      outC->SM1_state_nxt = SSM_st_waitForSystemVersion_SM1;
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Typ;
      break;
    case _161_SSM_st_sessionEstablished_ :
      outC->SM1_state_nxt = _161_SSM_st_sessionEstablished_;
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Typ;
      break;
    
  }
  /* ck_requestSafeRadioConnectionSetup */ if (outC->requestSafeRadioConnectionSetup) {
    /* 1 */
    sessionCmd_2_p42_v2_MoRC_Pck_Su(
      &outC->sessionEstablishCmd_mem,
      &br_1_guard_SM1_waitForSafeRadio,
      &outC->p42_establishSessionCmd);
  }
  else {
    kcg_copy_p42_sessionManagement_(
      &outC->p42_establishSessionCmd,
      (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromOBU_v2_MoRC.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

