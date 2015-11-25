/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void establishSessionFromRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->send_m159_sessionEstablishedReport = kcg_true;
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
  outC->SM1_state_nxt = _12_SSM_st_idle_SM1;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void establishSessionFromRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2 */
void establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::reset */ kcg_bool reset,
  outC_establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */ _13_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */ _13_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::initiatedByRBC */ kcg_bool initiatedByRBC;
  
  outC->sessionStatus.valid = kcg_true;
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = _12_SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  initiatedByRBC = (*sessionEstablishCmd_in).valid &
    (*sessionEstablishCmd_in).initiatedByRBC &
    (*sessionEstablishCmd_in).m38.valid & ((*connectionStatus).valid &
      ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg));
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_sessionEstablished_SM1 :
      outC->send_m159_sessionEstablishedReport = kcg_false;
      if (reset) {
        SM1_state_act = _12_SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_sessionEstablished_SM1;
      }
      break;
    case _12_SSM_st_idle_SM1 :
      if (initiatedByRBC) {
        outC->send_m159_sessionEstablishedReport = kcg_true;
        SM1_state_act = SSM_st_sessionEstablished_SM1;
      }
      else {
        outC->send_m159_sessionEstablishedReport = kcg_false;
        SM1_state_act = _12_SSM_st_idle_SM1;
      }
      break;
    
  }
  outC->established = outC->send_m159_sessionEstablishedReport;
  /* 1 */ if (reset) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  else /* 4 */ if (initiatedByRBC) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      sessionEstablishCmd_in);
  }
  else /* 2_fby_1_init_7 */ if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &outC->sessionEstablishCmd_mem,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->sessionEstablishCmd_mem.nid_c;
  outC->sessionStatus.nid_rbc = outC->sessionEstablishCmd_mem.nid_rbc;
  outC->sessionStatus.nid_radio = outC->sessionEstablishCmd_mem.nid_radio;
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_sessionEstablished_SM1 :
      outC->SM1_state_nxt = SSM_st_sessionEstablished_SM1;
      outC->sessionStatus.phase = sp_establishing_RCM_Session_Types_Pkg;
      break;
    case _12_SSM_st_idle_SM1 :
      outC->SM1_state_nxt = _12_SSM_st_idle_SM1;
      outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromRBC_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

