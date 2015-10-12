/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void initiateTerminatingASession_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->initiateTermination = kcg_true;
  outC->sendAPositionReport = kcg_true;
  outC->init = kcg_true;
  outC->TrainExitedFromRBCArea_SM_state_nxt =
    SSM_st_Idle_TrainExitedFromRBCArea_SM;
  /* 1 */ waitAndRepeatTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void initiateTerminatingASession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession */
void initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::orderReceivedFromTrackside */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderReceivedFromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::errorConditionRequiringTerminationDetected */ kcg_bool errorConditionRequiringTerminationDetected,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::trainIsRejectedByRBC_duringStartOfMission */ kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::driverClosesTheDeskduringStartOfMission */ kcg_bool driverClosesTheDeskduringStartOfMission,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::trainExitedFromAnRBCArea */ kcg_bool trainExitedFromAnRBCArea,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::receivedOrderToTerminateTheSession */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *receivedOrderToTerminateTheSession,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::isInCommunicationSessionWithAnRIU */ kcg_bool isInCommunicationSessionWithAnRIU,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::level_1_isLeft */ kcg_bool level_1_isLeft,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::endOfMissionIsExecuted */ kcg_bool endOfMissionIsExecuted,
  outC_initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_fired_strong;
  
  /* init_TrainExitedFromRBCArea_SM */ if (outC->init) {
    outC->init = kcg_false;
    TrainExitedFromRBCArea_SM_state_sel = SSM_st_Idle_TrainExitedFromRBCArea_SM;
  }
  else {
    TrainExitedFromRBCArea_SM_state_sel =
      outC->TrainExitedFromRBCArea_SM_state_nxt;
  }
  /* sel_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      TrainExitedFromRBCArea_SM_reset_act =
        (*receivedOrderToTerminateTheSession).terminate;
      if ((*receivedOrderToTerminateTheSession).terminate) {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
        TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      }
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      TrainExitedFromRBCArea_SM_reset_act = trainExitedFromAnRBCArea;
      if (trainExitedFromAnRBCArea) {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_Idle_1_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
        TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      }
      break;
    
  }
  /* act_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      if (TrainExitedFromRBCArea_SM_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        actualTime,
        kcg_false,
        kcg_false,
        cPositionReportRepetitionInterval_MoRC_Pck,
        cPositionReoport_MaxNoOfRepetitions_MoRC_Pck,
        &outC->Context_1);
      outC->sendAPositionReport = outC->Context_1.triggerAction;
      WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM =
        TrainExitedFromRBCArea_SM_fired_strong !=
        SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      /* strong_fired_WaitForOrderToTerminateTheSession */ if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        tmp = kcg_false;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else if (outC->Context_1.elapsed) {
        tmp = kcg_true;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        tmp = kcg_false;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      outC->sendAPositionReport = kcg_false;
      tmp = kcg_false;
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        SSM_st_Idle_TrainExitedFromRBCArea_SM;
      break;
    
  }
  outC->initiateTermination = (*orderReceivedFromTrackside).terminate |
    errorConditionRequiringTerminationDetected |
    trainIsRejectedByRBC_duringStartOfMission |
    driverClosesTheDeskduringStartOfMission | tmp | ((level_1_isLeft &
        isInCommunicationSessionWithAnRIU) |
      (isInCommunicationSessionWithAnRIU & endOfMissionIsExecuted));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

