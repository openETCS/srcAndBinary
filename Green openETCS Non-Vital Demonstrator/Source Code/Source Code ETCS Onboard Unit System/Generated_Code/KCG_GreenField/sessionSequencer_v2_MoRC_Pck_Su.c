/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionSequencer_v2_MoRC_Pck_Su.h"

#ifndef KCG_USER_DEFINED_INIT
void sessionSequencer_v2_init_MoRC_P(outC_sessionSequencer_v2_MoRC_P *outC)
{
  outC->send_m155_initiationOfACommunic = kcg_true;
  outC->send_m156_TerminationOfCommunic = kcg_true;
  outC->send_m159_sessionEstablishedRep = kcg_true;
  outC->send_m154_noCompatibleVersionSu = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->infomDriverNoCompatibleVersionS = kcg_true;
  outC->requestReleaseOfSafeRadioConnec = kcg_true;
  outC->notReady = kcg_true;
  outC->Session_SM_reset_nxt = kcg_true;
  outC->init = kcg_true;
  outC->rem_sessionEstablishCmd.valid = kcg_true;
  outC->rem_sessionEstablishCmd.initiatedByOBU = kcg_true;
  outC->rem_sessionEstablishCmd.initiatedByRBC = kcg_true;
  outC->rem_sessionEstablishCmd.q_rbc = Q_RBC_Terminate_communication_s;
  outC->rem_sessionEstablishCmd.nid_c = 0;
  outC->rem_sessionEstablishCmd.nid_rbc = 0;
  outC->rem_sessionEstablishCmd.nid_radio = 0;
  outC->rem_sessionEstablishCmd.origin.valid = kcg_true;
  outC->rem_sessionEstablishCmd.origin.nid_c = 0;
  outC->rem_sessionEstablishCmd.origin.rbc_id = 0;
  outC->rem_sessionEstablishCmd.origin.device_id = 0;
  outC->rem_sessionEstablishCmd.m38.valid = kcg_true;
  outC->rem_sessionEstablishCmd.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->rem_sessionEstablishCmd.m38.origin.valid = kcg_true;
  outC->rem_sessionEstablishCmd.m38.origin.nid_c = 0;
  outC->rem_sessionEstablishCmd.m38.origin.rbc_id = 0;
  outC->rem_sessionEstablishCmd.m38.origin.device_id = 0;
  outC->rem_sessionEstablishCmd.p42.valid = kcg_true;
  outC->rem_sessionEstablishCmd.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->rem_sessionEstablishCmd.p42.q_dir = Q_DIR_Reverse;
  outC->rem_sessionEstablishCmd.p42.q_rbc = Q_RBC_Terminate_communication_s;
  outC->rem_sessionEstablishCmd.p42.nid_c = 0;
  outC->rem_sessionEstablishCmd.p42.nid_RBC = 0;
  outC->rem_sessionEstablishCmd.p42.nid_radio = 0;
  outC->rem_sessionEstablishCmd.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_e;
  outC->rem_sessionEstablishCmd.p42.origin.valid = kcg_true;
  outC->rem_sessionEstablishCmd.p42.origin.nid_c = 0;
  outC->rem_sessionEstablishCmd.p42.origin.rbc_id = 0;
  outC->rem_sessionEstablishCmd.p42.origin.device_id = 0;
  outC->sessionStatus_l.valid = kcg_true;
  outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types;
  outC->sessionStatus_l.nid_c = 0;
  outC->sessionStatus_l.nid_rbc = 0;
  outC->sessionStatus_l.nid_radio = 0;
  outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Sessio;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->p42_SessionManagement_out.valid = kcg_true;
  outC->p42_SessionManagement_out.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_SessionManagement_out.q_dir = Q_DIR_Reverse;
  outC->p42_SessionManagement_out.q_rbc = Q_RBC_Terminate_communication_s;
  outC->p42_SessionManagement_out.nid_c = 0;
  outC->p42_SessionManagement_out.nid_RBC = 0;
  outC->p42_SessionManagement_out.nid_radio = 0;
  outC->p42_SessionManagement_out.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_e;
  outC->p42_SessionManagement_out.origin.valid = kcg_true;
  outC->p42_SessionManagement_out.origin.nid_c = 0;
  outC->p42_SessionManagement_out.origin.rbc_id = 0;
  outC->p42_SessionManagement_out.origin.device_id = 0;
  /* 1 */ maintainingSession_v2_init_MoRC(&outC->_2_Context_1);
  /* 1 */ terminateSession_v2_init_MoRC_P(&outC->_1_Context_1);
  /* 1 */ establishSession_v2_init_MoRC_P(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sessionSequencer_v2_reset_MoRC_(outC_sessionSequencer_v2_MoRC_P *outC)
{
  outC->init = kcg_true;
  /* 1 */ maintainingSession_v2_reset_MoR(&outC->_2_Context_1);
  /* 1 */ terminateSession_v2_reset_MoRC_(&outC->_1_Context_1);
  /* 1 */ establishSession_v2_reset_MoRC_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
void sessionSequencer_v2_MoRC_Pck_Su(
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionEstablishCmd */ sessionCmd_T_RCM_Session_Types_ *sessionEstablishCmd,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_in */ p42_sessionManagement_T_RCM_Msg *p42_SessionManagement_in,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m39_AckOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunic *_2_m39_AckOfTerminationOfACommu,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initiateTermination */ kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::currentTime */ T_internal_Type_Obu_BasicTypes_ currentTime,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::noOfRetriesOfSendingTerminationMessage */ kcg_int noOfRetriesOfSendingTermination,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::maxWaitingTimeForAckMessageReceived */ T_internal_Type_Obu_BasicTypes_ maxWaitingTimeForAckMessageRece,
  outC_sessionSequencer_v2_MoRC_P *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
  static sessionCmd_T_RCM_Session_Types_ tmp1;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L29 */
  static kcg_bool _L29_Session_SM_sessionTerminat;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L17 */
  static kcg_bool _L17_Session_SM_establishingSes;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L16 */
  static kcg_bool _L16_Session_SM_establishingSes;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L1 */
  static p42_sessionManagement_T_RCM_Msg _L1_Session_SM_establishingSess;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L2 */
  static kcg_bool _L2_Session_SM_establishingSess;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L3 */
  static kcg_bool _L3_Session_SM_establishingSess;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L4 */
  static kcg_bool _L4_Session_SM_establishingSess;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L5 */
  static kcg_bool _L5_Session_SM_establishingSess;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L7 */
  static kcg_bool _L7_Session_SM_establishingSess;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L8 */
  static sessionStatus_T_RCM_Session_Typ _L8_Session_SM_establishingSess;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession */
  static kcg_bool br_2_clock_Session_SM_establish;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::maintainingSession::_L3 */
  static kcg_bool _L3_Session_SM_maintainingSessi;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Typ last_sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM Session_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool Session_SM_reset_sel;
  
  /* init_Session_SM */ if (outC->init) {
    Session_SM_state_act = SSM_st_sessionTerminated_Sessio;
    Session_SM_reset_sel = kcg_false;
  }
  else {
    Session_SM_state_act = outC->Session_SM_state_nxt;
    Session_SM_reset_sel = outC->Session_SM_reset_nxt;
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_maintainingSession_Sessi :
      _L3_Session_SM_maintainingSessi = initiateTermination;
      break;
    case SSM_st_establishingSession_Sess :
      if (Session_SM_reset_sel) {
        /* 1 */ establishSession_v2_reset_MoRC_(&outC->Context_1);
      }
      /* last_init_ck_sessionEstablishCmd */ if (outC->init) {
        kcg_copy_sessionCmd_T_RCM_Sessi(
          &tmp1,
          (sessionCmd_T_RCM_Session_Types_ *) &cNoSessionCmd_RCM_Session_Types);
      }
      else {
        kcg_copy_sessionCmd_T_RCM_Sessi(&tmp1, &outC->rem_sessionEstablishCmd);
      }
      /* 1 */
      establishSession_v2_MoRC_Pck_Su(
        &tmp1,
        m32_SystemVersion,
        connectionStatus,
        reset,
        &outC->Context_1);
      kcg_copy_p42_sessionManagement_(
        &_L1_Session_SM_establishingSess,
        &outC->Context_1.p42_establishSessionCmd);
      _L2_Session_SM_establishingSess =
        outC->Context_1.send_m155_initiationOfACommunic;
      _L3_Session_SM_establishingSess =
        outC->Context_1.send_m159_sessionEstablishedRep;
      _L4_Session_SM_establishingSess =
        outC->Context_1.send_m154_noCompatibleVersionSu;
      _L5_Session_SM_establishingSess =
        outC->Context_1.requestSafeRadioConnectionSetup;
      _L7_Session_SM_establishingSess =
        outC->Context_1.infomDriverNoCompatibleVersionS;
      _L16_Session_SM_establishingSes = outC->Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Se(
        &_L8_Session_SM_establishingSess,
        &outC->Context_1.sessionStatus);
      _L17_Session_SM_establishingSes =
        outC->Context_1.terminateCommunicationSession | initiateTermination;
      /* ck__L17 */ if (_L17_Session_SM_establishingSes) {
      }
      else {
        br_2_clock_Session_SM_establish = _L16_Session_SM_establishingSes;
      }
      break;
    case SSM_st_sessionTerminated_Sessio :
      _L29_Session_SM_sessionTerminat = (*sessionEstablishCmd).valid;
      break;
    
  }
  /* last_init_ck_sessionStatus_l */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_sessionStatus_T_RCM_Se(
      &last_sessionStatus_l,
      (sessionStatus_T_RCM_Session_Typ *) &cInitialSessionStatus_RCM_Sessi);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Se(
      &last_sessionStatus_l,
      &outC->sessionStatus_l);
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_sessionTerminated_Sessio :
      outC->requestReleaseOfSafeRadioConnec = kcg_false;
      outC->infomDriverNoCompatibleVersionS = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSu = kcg_false;
      outC->send_m159_sessionEstablishedRep = kcg_false;
      outC->send_m156_TerminationOfCommunic = kcg_false;
      outC->send_m155_initiationOfACommunic = kcg_false;
      kcg_copy_p42_sessionManagement_(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
      if (_L29_Session_SM_sessionTerminat) {
        outC->notReady = kcg_true;
        outC->sessionStatus_l.valid = _L29_Session_SM_sessionTerminat;
        outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types;
        outC->sessionStatus_l.nid_c = (*sessionEstablishCmd).nid_c;
        outC->sessionStatus_l.nid_rbc = (*sessionEstablishCmd).nid_rbc;
        outC->sessionStatus_l.nid_radio = (*sessionEstablishCmd).nid_radio;
        outC->Session_SM_state_nxt = SSM_st_establishingSession_Sess;
      }
      else {
        outC->notReady = kcg_false;
        kcg_copy_sessionStatus_T_RCM_Se(
          &outC->sessionStatus_l,
          &last_sessionStatus_l);
        outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types;
        outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Sessio;
      }
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus,
        &outC->sessionStatus_l);
      outC->Session_SM_reset_nxt = _L29_Session_SM_sessionTerminat;
      break;
    case SSM_st_establishingSession_Sess :
      outC->requestReleaseOfSafeRadioConnec = kcg_false;
      outC->send_m156_TerminationOfCommunic = kcg_false;
      /* 2 */ if (_L1_Session_SM_establishingSess.valid) {
        kcg_copy_p42_sessionManagement_(
          &outC->p42_SessionManagement_out,
          &_L1_Session_SM_establishingSess);
      }
      else {
        kcg_copy_p42_sessionManagement_(
          &outC->p42_SessionManagement_out,
          p42_SessionManagement_in);
      }
      outC->send_m155_initiationOfACommunic = _L2_Session_SM_establishingSess;
      outC->send_m159_sessionEstablishedRep = _L3_Session_SM_establishingSess;
      outC->send_m154_noCompatibleVersionSu = _L4_Session_SM_establishingSess;
      outC->requestSafeRadioConnectionSetup = _L5_Session_SM_establishingSess;
      outC->infomDriverNoCompatibleVersionS = _L7_Session_SM_establishingSess;
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus,
        &_L8_Session_SM_establishingSess);
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus_l,
        &last_sessionStatus_l);
      if (_L17_Session_SM_establishingSes) {
        outC->notReady = kcg_true;
        outC->Session_SM_reset_nxt = kcg_true;
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Sessi;
      }
      else {
        /* cb_anon_sm */ if (br_2_clock_Session_SM_establish) {
          outC->notReady = kcg_true;
        }
        else {
          outC->notReady = kcg_false;
        }
        if (_L16_Session_SM_establishingSes) {
          outC->Session_SM_state_nxt = SSM_st_maintainingSession_Sessi;
        }
        else {
          outC->Session_SM_state_nxt = SSM_st_establishingSession_Sess;
        }
        outC->Session_SM_reset_nxt = _L16_Session_SM_establishingSes;
      }
      break;
    case SSM_st_maintainingSession_Sessi :
      outC->requestReleaseOfSafeRadioConnec = kcg_false;
      outC->infomDriverNoCompatibleVersionS = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSu = kcg_false;
      outC->send_m159_sessionEstablishedRep = kcg_false;
      outC->send_m156_TerminationOfCommunic = kcg_false;
      outC->send_m155_initiationOfACommunic = kcg_false;
      kcg_copy_p42_sessionManagement_(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
      if (Session_SM_reset_sel) {
        /* 1 */ maintainingSession_v2_reset_MoR(&outC->_2_Context_1);
      }
      /* 1 */
      maintainingSession_v2_MoRC_Pck_(
        &last_sessionStatus_l,
        &outC->_2_Context_1);
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus,
        &outC->_2_Context_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus_l,
        &outC->_2_Context_1.sessionStatus);
      if (_L3_Session_SM_maintainingSessi) {
        outC->notReady = kcg_true;
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Sessi;
      }
      else {
        outC->notReady = kcg_false;
        outC->Session_SM_state_nxt = SSM_st_maintainingSession_Sessi;
      }
      outC->Session_SM_reset_nxt = _L3_Session_SM_maintainingSessi;
      break;
    case SSM_st_terminatingSession_Sessi :
      outC->infomDriverNoCompatibleVersionS = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSu = kcg_false;
      outC->send_m159_sessionEstablishedRep = kcg_false;
      outC->send_m155_initiationOfACommunic = kcg_false;
      if (Session_SM_reset_sel) {
        /* 1 */ terminateSession_v2_reset_MoRC_(&outC->_1_Context_1);
      }
      /* 1 */
      terminateSession_v2_MoRC_Pck_Su(
        kcg_true,
        _2_m39_AckOfTerminationOfACommu,
        currentTime,
        &last_sessionStatus_l,
        reset,
        noOfRetriesOfSendingTermination,
        maxWaitingTimeForAckMessageRece,
        &outC->_1_Context_1);
      if (outC->_1_Context_1.terminated) {
        tmp = kcg_true;
        outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Sessio;
      }
      else {
        tmp = kcg_false;
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Sessi;
      }
      outC->notReady = outC->_1_Context_1.notReady | tmp;
      kcg_copy_p42_sessionManagement_(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_Msg *) &cNo_p42_SessionManagement_RCM_M);
      outC->send_m156_TerminationOfCommunic =
        outC->_1_Context_1.send_m156_TerminationOfCommunic;
      outC->requestReleaseOfSafeRadioConnec =
        outC->_1_Context_1.requestReleaseOfSafeRadioConnec;
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus,
        &outC->_1_Context_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Se(
        &outC->sessionStatus_l,
        &outC->_1_Context_1.sessionStatus);
      outC->Session_SM_reset_nxt = outC->_1_Context_1.terminated;
      break;
    
  }
  kcg_copy_sessionCmd_T_RCM_Sessi(
    &outC->rem_sessionEstablishCmd,
    sessionEstablishCmd);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sessionSequencer_v2_MoRC_Pck_Su.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

