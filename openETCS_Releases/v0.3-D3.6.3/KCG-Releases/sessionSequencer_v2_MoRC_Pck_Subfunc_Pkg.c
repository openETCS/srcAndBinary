/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->send_m155_initiationOfACommunicationSession = kcg_true;
  outC->send_m156_TerminationOfCommunicationSession = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->send_m154_noCompatibleVersionSupported = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->requestReleaseOfSafeRadioConnection = kcg_true;
  outC->notReady = kcg_true;
  outC->Session_SM_reset_nxt = kcg_true;
  outC->init = kcg_true;
  outC->rem_sessionEstablishCmd.valid = kcg_true;
  outC->rem_sessionEstablishCmd.initiatedByOBU = kcg_true;
  outC->rem_sessionEstablishCmd.initiatedByRBC = kcg_true;
  outC->rem_sessionEstablishCmd.q_rbc = Q_RBC_Terminate_communication_session;
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
  outC->rem_sessionEstablishCmd.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->rem_sessionEstablishCmd.p42.nid_c = 0;
  outC->rem_sessionEstablishCmd.p42.nid_RBC = 0;
  outC->rem_sessionEstablishCmd.p42.nid_radio = 0;
  outC->rem_sessionEstablishCmd.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->rem_sessionEstablishCmd.p42.origin.valid = kcg_true;
  outC->rem_sessionEstablishCmd.p42.origin.nid_c = 0;
  outC->rem_sessionEstablishCmd.p42.origin.rbc_id = 0;
  outC->rem_sessionEstablishCmd.p42.origin.device_id = 0;
  outC->sessionStatus_l.valid = kcg_true;
  outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus_l.nid_c = 0;
  outC->sessionStatus_l.nid_rbc = 0;
  outC->sessionStatus_l.nid_radio = 0;
  outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->p42_SessionManagement_out.valid = kcg_true;
  outC->p42_SessionManagement_out.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_SessionManagement_out.q_dir = Q_DIR_Reverse;
  outC->p42_SessionManagement_out.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_SessionManagement_out.nid_c = 0;
  outC->p42_SessionManagement_out.nid_RBC = 0;
  outC->p42_SessionManagement_out.nid_radio = 0;
  outC->p42_SessionManagement_out.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_SessionManagement_out.origin.valid = kcg_true;
  outC->p42_SessionManagement_out.origin.nid_c = 0;
  outC->p42_SessionManagement_out.origin.rbc_id = 0;
  outC->p42_SessionManagement_out.origin.device_id = 0;
  /* 1 */ maintainingSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
  /* 1 */ terminateSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */ establishSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
  /* 1 */ terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */ establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
void sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionEstablishCmd */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_in */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement_in,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m39_AckOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initiateTermination */ kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::noOfRetriesOfSendingTerminationMessage */ kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::maxWaitingTimeForAckMessageReceived */ T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
  static sessionCmd_T_RCM_Session_Types_Pkg tmp1;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L29 */
  static kcg_bool _L29_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L17 */
  static kcg_bool _L17_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L16 */
  static kcg_bool _L16_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L1 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L1_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L2 */
  static kcg_bool _L2_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L3 */
  static kcg_bool _L3_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L4 */
  static kcg_bool _L4_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L5 */
  static kcg_bool _L5_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L7 */
  static kcg_bool _L7_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L8 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L8_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession */
  static kcg_bool br_2_clock_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::maintainingSession::_L3 */
  static kcg_bool _L3_Session_SM_maintainingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg last_sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM Session_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool Session_SM_reset_sel;
  
  /* init_Session_SM */ if (outC->init) {
    Session_SM_state_act = SSM_st_sessionTerminated_Session_SM;
    Session_SM_reset_sel = kcg_false;
  }
  else {
    Session_SM_state_act = outC->Session_SM_state_nxt;
    Session_SM_reset_sel = outC->Session_SM_reset_nxt;
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_maintainingSession_Session_SM :
      _L3_Session_SM_maintainingSession = initiateTermination;
      break;
    case SSM_st_establishingSession_Session_SM :
      if (Session_SM_reset_sel) {
        /* 1 */
        establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
      }
      /* last_init_ck_sessionEstablishCmd */ if (outC->init) {
        kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
          &tmp1,
          (sessionCmd_T_RCM_Session_Types_Pkg *)
            &cNoSessionCmd_RCM_Session_Types_Pkg);
      }
      else {
        kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
          &tmp1,
          &outC->rem_sessionEstablishCmd);
      }
      /* 1 */
      establishSession_v2_MoRC_Pck_Subfunc_Pkg(
        &tmp1,
        m32_SystemVersion,
        connectionStatus,
        reset,
        &outC->Context_1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_L1_Session_SM_establishingSession,
        &outC->Context_1.p42_establishSessionCmd);
      _L2_Session_SM_establishingSession =
        outC->Context_1.send_m155_initiationOfACommunicationSession;
      _L3_Session_SM_establishingSession =
        outC->Context_1.send_m159_sessionEstablishedReport;
      _L4_Session_SM_establishingSession =
        outC->Context_1.send_m154_noCompatibleVersionSupported;
      _L5_Session_SM_establishingSession =
        outC->Context_1.requestSafeRadioConnectionSetup;
      _L7_Session_SM_establishingSession =
        outC->Context_1.infomDriverNoCompatibleVersionSupported;
      _L16_Session_SM_establishingSession = outC->Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L8_Session_SM_establishingSession,
        &outC->Context_1.sessionStatus);
      _L17_Session_SM_establishingSession =
        outC->Context_1.terminateCommunicationSession | initiateTermination;
      /* ck__L17 */ if (_L17_Session_SM_establishingSession) {
      }
      else {
        br_2_clock_Session_SM_establishingSession =
          _L16_Session_SM_establishingSession;
      }
      break;
    case SSM_st_sessionTerminated_Session_SM :
      _L29_Session_SM_sessionTerminated = (*sessionEstablishCmd).valid;
      break;
    
  }
  /* last_init_ck_sessionStatus_l */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      (sessionStatus_T_RCM_Session_Types_Pkg *)
        &cInitialSessionStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      &outC->sessionStatus_l);
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_sessionTerminated_Session_SM :
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (_L29_Session_SM_sessionTerminated) {
        outC->notReady = kcg_true;
        outC->sessionStatus_l.valid = _L29_Session_SM_sessionTerminated;
        outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types_Pkg;
        outC->sessionStatus_l.nid_c = (*sessionEstablishCmd).nid_c;
        outC->sessionStatus_l.nid_rbc = (*sessionEstablishCmd).nid_rbc;
        outC->sessionStatus_l.nid_radio = (*sessionEstablishCmd).nid_radio;
        outC->Session_SM_state_nxt = SSM_st_establishingSession_Session_SM;
      }
      else {
        outC->notReady = kcg_false;
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->sessionStatus_l,
          &last_sessionStatus_l);
        outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types_Pkg;
        outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
      }
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->sessionStatus_l);
      outC->Session_SM_reset_nxt = _L29_Session_SM_sessionTerminated;
      break;
    case SSM_st_establishingSession_Session_SM :
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession = kcg_false;
      /* 2 */ if (_L1_Session_SM_establishingSession.valid) {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &outC->p42_SessionManagement_out,
          &_L1_Session_SM_establishingSession);
      }
      else {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &outC->p42_SessionManagement_out,
          p42_SessionManagement_in);
      }
      outC->send_m155_initiationOfACommunicationSession =
        _L2_Session_SM_establishingSession;
      outC->send_m159_sessionEstablishedReport =
        _L3_Session_SM_establishingSession;
      outC->send_m154_noCompatibleVersionSupported =
        _L4_Session_SM_establishingSession;
      outC->requestSafeRadioConnectionSetup =
        _L5_Session_SM_establishingSession;
      outC->infomDriverNoCompatibleVersionSupported =
        _L7_Session_SM_establishingSession;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_L8_Session_SM_establishingSession);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &last_sessionStatus_l);
      if (_L17_Session_SM_establishingSession) {
        outC->notReady = kcg_true;
        outC->Session_SM_reset_nxt = kcg_true;
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
      }
      else {
        /* cb_anon_sm */ if (br_2_clock_Session_SM_establishingSession) {
          outC->notReady = kcg_true;
        }
        else {
          outC->notReady = kcg_false;
        }
        if (_L16_Session_SM_establishingSession) {
          outC->Session_SM_state_nxt = SSM_st_maintainingSession_Session_SM;
        }
        else {
          outC->Session_SM_state_nxt = SSM_st_establishingSession_Session_SM;
        }
        outC->Session_SM_reset_nxt = _L16_Session_SM_establishingSession;
      }
      break;
    case SSM_st_maintainingSession_Session_SM :
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (Session_SM_reset_sel) {
        /* 1 */
        maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
      }
      /* 1 */
      maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
        &last_sessionStatus_l,
        &outC->_2_Context_1);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->_2_Context_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &outC->_2_Context_1.sessionStatus);
      if (_L3_Session_SM_maintainingSession) {
        outC->notReady = kcg_true;
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
      }
      else {
        outC->notReady = kcg_false;
        outC->Session_SM_state_nxt = SSM_st_maintainingSession_Session_SM;
      }
      outC->Session_SM_reset_nxt = _L3_Session_SM_maintainingSession;
      break;
    case SSM_st_terminatingSession_Session_SM :
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      if (Session_SM_reset_sel) {
        /* 1 */
        terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
      }
      /* 1 */
      terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
        kcg_true,
        m39_AckOfTerminationOfACommunicationSession,
        currentTime,
        &last_sessionStatus_l,
        reset,
        noOfRetriesOfSendingTerminationMessage,
        maxWaitingTimeForAckMessageReceived,
        &outC->_1_Context_1);
      if (outC->_1_Context_1.terminated) {
        tmp = kcg_true;
        outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
      }
      else {
        tmp = kcg_false;
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
      }
      outC->notReady = outC->_1_Context_1.notReady | tmp;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      outC->send_m156_TerminationOfCommunicationSession =
        outC->_1_Context_1.send_m156_TerminationOfCommunicationSession;
      outC->requestReleaseOfSafeRadioConnection =
        outC->_1_Context_1.requestReleaseOfSafeRadioConnection;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->_1_Context_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &outC->_1_Context_1.sessionStatus);
      outC->Session_SM_reset_nxt = outC->_1_Context_1.terminated;
      break;
    
  }
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->rem_sessionEstablishCmd,
    sessionEstablishCmd);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

