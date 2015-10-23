/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintaining_a_Session_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void maintaining_a_Session_init_MoRC_Pck_Subfunc_Pkg(
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->tryToSetupANewSafeRadioConnection = kcg_true;
  outC->informTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->firstRequestToSetupASafeRadioConnection = kcg_true;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_true;
  outC->requestsToSetupTheSafeRadioConnectionStopped = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->Maintaining_SM_state_nxt =
    SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
  outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
    SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void maintaining_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session */
void maintaining_a_Session_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::communicationSessionEstablished */ kcg_bool communicationSessionEstablished,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::safeRadioConnectionReestablished */ kcg_bool safeRadioConnectionReestablished,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::lossOfTheSafeRadioConnection */ kcg_bool lossOfTheSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::disconnectionHasNotBeenOrdered */ kcg_bool disconnectionHasNotBeenOrdered,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::trainFrontInsideInAnAnnouncedRadioHole */ kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::actualTime */ time_Type_MoRC_Pck actualTime,
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
  static SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
  static SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished */
  static kcg_bool CommunicationSessionEstablished_weakb_clock_Maintaining_SM;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM::ConnecctionLostInAnnouncedRadioHole */
  static kcg_bool br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_ConnecctionLostInAnnouncedRadioHole;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM::SafeRadio_connected */
  static kcg_bool br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM::SafeRadio_connected */
  static kcg_bool br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished */
  static kcg_bool br_1_guard_Maintaining_SM_CommunicationSessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
  static SSM_ST_Maintaining_SM Maintaining_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
  static SSM_ST_Maintaining_SM Maintaining_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
  static kcg_bool Maintaining_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
  static SSM_TR_Maintaining_SM Maintaining_SM_fired_strong;
  
  /* init_Maintaining_SM */ if (outC->init1) {
    outC->init1 = kcg_false;
    Maintaining_SM_state_sel =
      SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
  }
  else {
    Maintaining_SM_state_sel = outC->Maintaining_SM_state_nxt;
  }
  /* sel_Maintaining_SM */ switch (Maintaining_SM_state_sel) {
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      Maintaining_SM_state_act =
        SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      Maintaining_SM_fired_strong = SSM_TR_no_trans_Maintaining_SM;
      Maintaining_SM_reset_act = kcg_false;
      break;
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      if (communicationSessionEstablished) {
        Maintaining_SM_state_act =
          SSM_st_CommunicationSessionEstablished_Maintaining_SM;
        Maintaining_SM_fired_strong =
          SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM;
      }
      else {
        Maintaining_SM_state_act =
          SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
        Maintaining_SM_fired_strong = SSM_TR_no_trans_Maintaining_SM;
      }
      Maintaining_SM_reset_act = communicationSessionEstablished;
      break;
    
  }
  /* act_Maintaining_SM */ switch (Maintaining_SM_state_act) {
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      CommunicationSessionEstablished_weakb_clock_Maintaining_SM =
        Maintaining_SM_fired_strong != SSM_TR_no_trans_Maintaining_SM;
      if (Maintaining_SM_reset_act) {
        outC->init = kcg_true;
        /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      /* init_RadioConnection_SM */ if (outC->init) {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
      }
      else {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished;
      }
      /* sel_RadioConnection_SM */ switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            trainFrontInsideInAnAnnouncedRadioHole &
            lossOfTheSafeRadioConnection;
          br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            lossOfTheSafeRadioConnection & disconnectionHasNotBeenOrdered;
          /* guard_SafeRadio_connected */ if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          }
          else /* cb_anon_sm */ if (br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            outC->firstRequestToSetupASafeRadioConnection = kcg_true;
          }
          else {
            outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          }
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          break;
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_ConnecctionLostInAnnouncedRadioHole =
            !trainFrontInsideInAnAnnouncedRadioHole;
          /* guard_ConnecctionLostInAnnouncedRadioHole */ if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_ConnecctionLostInAnnouncedRadioHole) {
            outC->firstRequestToSetupASafeRadioConnection = kcg_true;
          }
          else {
            outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          }
          break;
        
      }
      /* 1 */
      countDownTimer_MoRC_Pck_Utils(
        outC->firstRequestToSetupASafeRadioConnection,
        kcg_false,
        actualTime,
        kcg_false,
        cRadioConnectionReestablishingTimeout_MoRC_Pck,
        &outC->Context_1);
      /* sel_RadioConnection_SM */ switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_ConnecctionLostInAnnouncedRadioHole) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          tmp = kcg_false;
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          tmp = kcg_false;
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (safeRadioConnectionReestablished) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else if (outC->Context_1.expired) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          tmp = kcg_false;
          break;
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          /* guard_SafeRadio_connected */ if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
            tmp = kcg_true;
          }
          else {
            if (br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
              RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
                SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
            }
            else {
              RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
                SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
            }
            tmp = kcg_false;
          }
          break;
        
      }
      /* act_RadioConnection_SM */ switch (RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_true;
          break;
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        
      }
      /* strong_fired_CommunicationSessionEstablished */ if (CommunicationSessionEstablished_weakb_clock_Maintaining_SM) {
        outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
        outC->Maintaining_SM_state_nxt =
          SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      }
      else {
        br_1_guard_Maintaining_SM_CommunicationSessionEstablished =
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished ==
          SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
        if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished) {
          outC->informTheDriverThatNoConnectionWasSetup = kcg_true;
          outC->Maintaining_SM_state_nxt =
            SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
        }
        else {
          outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
          outC->Maintaining_SM_state_nxt =
            SSM_st_CommunicationSessionEstablished_Maintaining_SM;
        }
      }
      outC->init = kcg_false;
      break;
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
      tmp = kcg_false;
      outC->tryToSetupANewSafeRadioConnection = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->Maintaining_SM_state_nxt =
        SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      break;
    
  }
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed =
    outC->informTheDriverThatNoConnectionWasSetup;
  outC->requestsToSetupTheSafeRadioConnectionStopped =
    outC->informTheDriverThatNoConnectionWasSetup | tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintaining_a_Session_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

