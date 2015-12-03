/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
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
void initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
void initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::maxWaitingTimeUntilTerminationOrderReceived */ T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::noOfRetriesUntilTerminationOrderIsReceived */ kcg_int noOfRetriesUntilTerminationOrderIsReceived,
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::orderToTerminateTheSessionIsReceived */
  static kcg_bool orderToTerminateTheSessionIsReceived;
  
  /* init_TrainExitedFromRBCArea_SM */ if (outC->init) {
    outC->init = kcg_false;
    TrainExitedFromRBCArea_SM_state_sel = SSM_st_Idle_TrainExitedFromRBCArea_SM;
  }
  else {
    TrainExitedFromRBCArea_SM_state_sel =
      outC->TrainExitedFromRBCArea_SM_state_nxt;
  }
  orderToTerminateTheSessionIsReceived = (*p42_SessionManagement).valid &
    /* 2 */
    validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
      p42_SessionManagement,
      mode) & (((*p42_SessionManagement).q_rbc ==
        Q_RBC_Terminate_communication_session) |
      (((*p42_SessionManagement).q_rbc ==
          Q_RBC_Establish_communication_session) &
        !(((*p42_SessionManagement).nid_c == (*sessionStatus).nid_c) &
          ((*p42_SessionManagement).nid_RBC == (*sessionStatus).nid_rbc) &
          ((*p42_SessionManagement).nid_radio == (*sessionStatus).nid_radio) &
          (*sessionStatus).valid)));
  /* sel_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      tmp = orderToTerminateTheSessionIsReceived | reset;
      TrainExitedFromRBCArea_SM_reset_act = tmp;
      if (tmp) {
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
      if (reset) {
        TrainExitedFromRBCArea_SM_reset_act = kcg_true;
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
        TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_Idle_1_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_reset_act =
          (*eventsAndPhases).trainExitedFromAnRBCArea;
        if ((*eventsAndPhases).trainExitedFromAnRBCArea) {
          TrainExitedFromRBCArea_SM_state_act =
            SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
          TrainExitedFromRBCArea_SM_fired_strong =
            SSM_TR_Idle_2_TrainExitedFromRBCArea_SM;
        }
        else {
          TrainExitedFromRBCArea_SM_state_act =
            SSM_st_Idle_TrainExitedFromRBCArea_SM;
          TrainExitedFromRBCArea_SM_fired_strong =
            SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
        }
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
        currentTime,
        kcg_false,
        kcg_false,
        maxWaitingTimeUntilTerminationOrderReceived,
        noOfRetriesUntilTerminationOrderIsReceived,
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
  outC->initiateTermination = orderToTerminateTheSessionIsReceived | tmp |
    (*eventsAndPhases).errorConditionRequiringTerminationDetected |
    (*eventsAndPhases).trainIsRejectedByRBC_duringStartOfMission |
    (*eventsAndPhases).driverClosesTheDeskduringStartOfMission |
    (((*eventsAndPhases).level_1_isLeft &
        (*eventsAndPhases).isInCommunicationSessionWithAnRIU) |
      ((*eventsAndPhases).isInCommunicationSessionWithAnRIU &
        (*eventsAndPhases).endOfMissionIsExecuted));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

