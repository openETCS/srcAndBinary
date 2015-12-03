/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateTerminatingSession_v2_M.h"

#ifndef KCG_USER_DEFINED_INIT
void initiateTerminatingSession_v2_i(outC_initiateTerminatingSession *outC)
{
  outC->initiateTermination = kcg_true;
  outC->sendAPositionReport = kcg_true;
  outC->init = kcg_true;
  outC->TrainExitedFromRBCArea_SM_state = SSM_st_Idle_TrainExitedFromRBCA;
  /* 1 */ waitAndRepeatTimer_init_MoRC_Pc(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void initiateTerminatingSession_v2_r(outC_initiateTerminatingSession *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_P(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
void initiateTerminatingSession_v2_M(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Typ *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::maxWaitingTimeUntilTerminationOrderReceived */ T_internal_Type_Obu_BasicTypes_ maxWaitingTimeUntilTerminationO,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::noOfRetriesUntilTerminationOrderIsReceived */ kcg_int noOfRetriesUntilTerminationOrde,
  outC_initiateTerminatingSession *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool WaitForOrderToTerminateTheSessi;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_S TrainExitedFromRBCArea_SM_state;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_S _1_TrainExitedFromRBCArea_SM_st;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_S TrainExitedFromRBCArea_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::orderToTerminateTheSessionIsReceived */
  static kcg_bool orderToTerminateTheSessionIsRec;
  
  /* init_TrainExitedFromRBCArea_SM */ if (outC->init) {
    outC->init = kcg_false;
    TrainExitedFromRBCArea_SM_state = SSM_st_Idle_TrainExitedFromRBCA;
  }
  else {
    TrainExitedFromRBCArea_SM_state = outC->TrainExitedFromRBCArea_SM_state;
  }
  orderToTerminateTheSessionIsRec = (*p42_SessionManagement).valid & /* 2 */
    validate_q_sleepsession_v2_MoRC(p42_SessionManagement, mode) &
    (((*p42_SessionManagement).q_rbc == Q_RBC_Terminate_communication_s) |
      (((*p42_SessionManagement).q_rbc == Q_RBC_Establish_communication_s) &
        !(((*p42_SessionManagement).nid_c == (*sessionStatus).nid_c) &
          ((*p42_SessionManagement).nid_RBC == (*sessionStatus).nid_rbc) &
          ((*p42_SessionManagement).nid_radio == (*sessionStatus).nid_radio) &
          (*sessionStatus).valid & ((*sessionStatus).phase !=
            sp_terminated_RCM_Session_Types))));
  /* sel_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state) {
    case SSM_st_WaitForOrderToTerminateT :
      tmp = orderToTerminateTheSessionIsRec | reset;
      TrainExitedFromRBCArea_SM_reset = tmp;
      if (tmp) {
        _1_TrainExitedFromRBCArea_SM_st = SSM_st_Idle_TrainExitedFromRBCA;
        TrainExitedFromRBCArea_SM_fired = _143_SSM_TR_WaitForOrderToTermi;
      }
      else {
        _1_TrainExitedFromRBCArea_SM_st = SSM_st_WaitForOrderToTerminateT;
        TrainExitedFromRBCArea_SM_fired = SSM_TR_no_trans_TrainExitedFrom;
      }
      break;
    case SSM_st_Idle_TrainExitedFromRBCA :
      if (reset) {
        TrainExitedFromRBCArea_SM_reset = kcg_true;
        _1_TrainExitedFromRBCArea_SM_st = SSM_st_Idle_TrainExitedFromRBCA;
        TrainExitedFromRBCArea_SM_fired = SSM_TR_Idle_1_TrainExitedFromRB;
      }
      else {
        TrainExitedFromRBCArea_SM_reset =
          (*eventsAndPhases).trainExitedFromAnRBCArea;
        if ((*eventsAndPhases).trainExitedFromAnRBCArea) {
          _1_TrainExitedFromRBCArea_SM_st = SSM_st_WaitForOrderToTerminateT;
          TrainExitedFromRBCArea_SM_fired = SSM_TR_Idle_2_TrainExitedFromRB;
        }
        else {
          _1_TrainExitedFromRBCArea_SM_st = SSM_st_Idle_TrainExitedFromRBCA;
          TrainExitedFromRBCArea_SM_fired = SSM_TR_no_trans_TrainExitedFrom;
        }
      }
      break;
    
  }
  /* act_TrainExitedFromRBCArea_SM */ switch (_1_TrainExitedFromRBCArea_SM_st) {
    case SSM_st_WaitForOrderToTerminateT :
      if (TrainExitedFromRBCArea_SM_reset) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_P(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Uti(
        currentTime,
        kcg_false,
        kcg_false,
        maxWaitingTimeUntilTerminationO,
        noOfRetriesUntilTerminationOrde,
        &outC->Context_1);
      outC->sendAPositionReport = outC->Context_1.triggerAction;
      WaitForOrderToTerminateTheSessi = TrainExitedFromRBCArea_SM_fired !=
        SSM_TR_no_trans_TrainExitedFrom;
      /* strong_fired_WaitForOrderToTerminateTheSession */ if (WaitForOrderToTerminateTheSessi) {
        tmp = kcg_false;
        outC->TrainExitedFromRBCArea_SM_state = SSM_st_WaitForOrderToTerminateT;
      }
      else if (outC->Context_1.elapsed) {
        tmp = kcg_true;
        outC->TrainExitedFromRBCArea_SM_state = SSM_st_Idle_TrainExitedFromRBCA;
      }
      else {
        tmp = kcg_false;
        outC->TrainExitedFromRBCArea_SM_state = SSM_st_WaitForOrderToTerminateT;
      }
      break;
    case SSM_st_Idle_TrainExitedFromRBCA :
      outC->sendAPositionReport = kcg_false;
      tmp = kcg_false;
      outC->TrainExitedFromRBCArea_SM_state = SSM_st_Idle_TrainExitedFromRBCA;
      break;
    
  }
  outC->initiateTermination = orderToTerminateTheSessionIsRec | tmp |
    (*eventsAndPhases).errorConditionRequiringTerminat |
    (*eventsAndPhases).trainIsRejectedByRBC_duringStar |
    (*eventsAndPhases).driverClosesTheDeskduringStartO |
    (((*eventsAndPhases).level_1_isLeft &
        (*eventsAndPhases).isInCommunicationSessionWithAnR) |
      ((*eventsAndPhases).isInCommunicationSessionWithAnR &
        (*eventsAndPhases).endOfMissionIsExecuted));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initiateTerminatingSession_v2_M.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

