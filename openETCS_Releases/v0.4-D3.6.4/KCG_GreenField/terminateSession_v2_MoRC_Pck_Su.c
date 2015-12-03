/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateSession_v2_MoRC_Pck_Su.h"

#ifndef KCG_USER_DEFINED_INIT
void terminateSession_v2_init_MoRC_P(outC_terminateSession_v2_MoRC_P *outC)
{
  outC->send_m156_TerminationOfCommunic = kcg_true;
  outC->requestReleaseOfSafeRadioConnec = kcg_true;
  outC->terminated = kcg_true;
  outC->notReady = kcg_true;
  outC->init = kcg_true;
  outC->_L92.valid = kcg_true;
  outC->_L92.phase = sp_terminated_RCM_Session_Types;
  outC->_L92.nid_c = 0;
  outC->_L92.nid_rbc = 0;
  outC->_L92.nid_radio = 0;
  outC->SM1_state_nxt = SSM_st_idle_SM1;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  /* 1 */ waitAndRepeatTimer_init_MoRC_Pc(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void terminateSession_v2_reset_MoRC_(outC_terminateSession_v2_MoRC_P *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_P(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
void terminateSession_v2_MoRC_Pck_Su(
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::initiateTermination */ kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::m39_AckOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunic *_2_m39_AckOfTerminationOfACommu,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::prevSessionStatus */ sessionStatus_T_RCM_Session_Typ *prevSessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::noOfRetriesOfSendingTerminationMessage */ kcg_int noOfRetriesOfSendingTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::maxWaitingTimeForAckMessageReceived */ T_internal_Type_Obu_BasicTypes_ maxWaitingTimeForAckMessageRece,
  outC_terminateSession_v2_MoRC_P *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
  static kcg_bool tmp1;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived */
  static kcg_bool waitForAckTerminationOfCommunic;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived */
  static kcg_bool br_2_guard_SM1_waitForAckTermin;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _144_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _144_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _147_SSM_TR_SM1 SM1_fired_strong;
  
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminating_RCM_Session_Type;
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_terminated_SM1 :
      if (reset) {
        SM1_state_act = SSM_st_idle_SM1;
        SM1_fired_strong = SSM_TR_terminated_1_SM1;
      }
      else {
        SM1_state_act = SSM_st_terminated_SM1;
        SM1_fired_strong = _146_SSM_TR_no_trans_SM1;
      }
      SM1_reset_act = reset;
      tmp1 = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfC :
      if (reset) {
        SM1_state_act = SSM_st_idle_SM1;
        SM1_fired_strong = _145_SSM_TR_waitForAckTerminati;
      }
      else {
        SM1_state_act = SSM_st_waitForAckTerminationOfC;
        SM1_fired_strong = _146_SSM_TR_no_trans_SM1;
      }
      SM1_reset_act = reset;
      tmp1 = kcg_false;
      break;
    case SSM_st_idle_SM1 :
      SM1_reset_act = initiateTermination;
      /* guard_idle */ if (initiateTermination) {
        SM1_state_act = SSM_st_waitForAckTerminationOfC;
        SM1_fired_strong = SSM_TR_idle_1_SM1;
        tmp1 = kcg_true;
      }
      else {
        SM1_state_act = SSM_st_idle_SM1;
        SM1_fired_strong = _146_SSM_TR_no_trans_SM1;
        tmp1 = kcg_false;
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_terminated_SM1 :
      outC->requestReleaseOfSafeRadioConnec = kcg_false;
      tmp = kcg_false;
      outC->terminated = kcg_true;
      outC->SM1_state_nxt = SSM_st_terminated_SM1;
      break;
    case SSM_st_waitForAckTerminationOfC :
      waitForAckTerminationOfCommunic = SM1_fired_strong !=
        _146_SSM_TR_no_trans_SM1;
      if (SM1_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_P(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Uti(
        currentTime,
        kcg_false,
        kcg_false,
        maxWaitingTimeForAckMessageRece,
        noOfRetriesOfSendingTermination,
        &outC->Context_1);
      tmp = outC->Context_1.triggerAction;
      outC->terminated = kcg_false;
      /* strong_fired_waitForAckTerminationOfCommunicationSessionReceived */ if (waitForAckTerminationOfCommunic) {
        outC->requestReleaseOfSafeRadioConnec = kcg_false;
        outC->SM1_state_nxt = SSM_st_waitForAckTerminationOfC;
      }
      else {
        br_2_guard_SM1_waitForAckTermin =
          (*_2_m39_AckOfTerminationOfACommu).valid | outC->Context_1.elapsed;
        if (br_2_guard_SM1_waitForAckTermin) {
          outC->requestReleaseOfSafeRadioConnec = kcg_true;
          outC->SM1_state_nxt = SSM_st_terminated_SM1;
        }
        else {
          outC->requestReleaseOfSafeRadioConnec = kcg_false;
          outC->SM1_state_nxt = SSM_st_waitForAckTerminationOfC;
        }
      }
      break;
    case SSM_st_idle_SM1 :
      outC->requestReleaseOfSafeRadioConnec = kcg_false;
      tmp = kcg_false;
      outC->terminated = kcg_false;
      outC->SM1_state_nxt = SSM_st_idle_SM1;
      break;
    
  }
  outC->notReady = outC->requestReleaseOfSafeRadioConnec;
  outC->send_m156_TerminationOfCommunic = tmp1 | tmp;
  /* 1 */ if ((*prevSessionStatus).valid) {
    kcg_copy_sessionStatus_T_RCM_Se(&outC->_L92, prevSessionStatus);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Se(&outC->_L92, prevSessionStatus);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->_L92.nid_c;
  outC->sessionStatus.nid_rbc = outC->_L92.nid_rbc;
  outC->sessionStatus.nid_radio = outC->_L92.nid_radio;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** terminateSession_v2_MoRC_Pck_Su.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

