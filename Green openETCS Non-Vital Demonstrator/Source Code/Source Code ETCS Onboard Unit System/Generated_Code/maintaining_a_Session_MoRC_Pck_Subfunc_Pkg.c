/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintaining_a_Session_MoRC_Pck_Subfunc_Pkg.h"

void maintaining_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session */
void maintaining_a_Session_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::communicationSessionEstablished */kcg_bool communicationSessionEstablished,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::safeRadioConnectionReestablished */kcg_bool safeRadioConnectionReestablished,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::lossOfTheSafeRadioConnection */kcg_bool lossOfTheSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::disconnectionHasNotBeenOrdered */kcg_bool disconnectionHasNotBeenOrdered,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::trainFrontInsideInAnAnnouncedRadioHole */kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::actualTime */time_Type_MoRC_Pck actualTime,
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  static SSM_TR_Maintaining_SM tmp1;
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
  static SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
  static SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished;
  /* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished */
  static kcg_bool CommunicationSessionEstablished_weakb_clock_Maintaining_SM;
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
  
  if (outC->init) {
    outC->init = kcg_false;
    Maintaining_SM_state_sel =
      SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
  }
  else {
    Maintaining_SM_state_sel = outC->Maintaining_SM_state_nxt;
  }
  switch (Maintaining_SM_state_sel) {
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      Maintaining_SM_state_act =
        SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      Maintaining_SM_reset_act = kcg_false;
      break;
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      if (communicationSessionEstablished) {
        Maintaining_SM_state_act =
          SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      }
      else {
        Maintaining_SM_state_act =
          SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      }
      Maintaining_SM_reset_act = communicationSessionEstablished;
      break;
    
  }
  switch (Maintaining_SM_state_act) {
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      switch (Maintaining_SM_state_sel) {
        case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
          if (communicationSessionEstablished) {
            tmp1 = SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM;
          }
          else {
            tmp1 = SSM_TR_no_trans_Maintaining_SM;
          }
          break;
        case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
          tmp1 = SSM_TR_no_trans_Maintaining_SM;
          break;
        
      }
      CommunicationSessionEstablished_weakb_clock_Maintaining_SM = tmp1 !=
        SSM_TR_no_trans_Maintaining_SM;
      if (Maintaining_SM_reset_act) {
        outC->init1 = kcg_true;
        /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      if (outC->init1) {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
      }
      else {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished;
      }
      switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            trainFrontInsideInAnAnnouncedRadioHole &
            lossOfTheSafeRadioConnection;
          br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            lossOfTheSafeRadioConnection & disconnectionHasNotBeenOrdered;
          if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          }
          else if (br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
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
          tmp = !trainFrontInsideInAnAnnouncedRadioHole;
          if (tmp) {
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
      switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (tmp) {
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
          if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
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
      switch (RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished) {
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
      if (CommunicationSessionEstablished_weakb_clock_Maintaining_SM) {
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
      outC->init1 = kcg_false;
      break;
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
      tmp = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->tryToSetupANewSafeRadioConnection = kcg_false;
      outC->Maintaining_SM_state_nxt =
        SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      break;
    
  }
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed =
    outC->informTheDriverThatNoConnectionWasSetup;
  outC->requestsToSetupTheSafeRadioConnectionStopped =
    outC->finalAttemptToSetupTheSafeRadioConnectionFailed | tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** maintaining_a_Session_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

