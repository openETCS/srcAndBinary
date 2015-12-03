/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RequestAck_Acknowledgement.h"

#ifndef KCG_USER_DEFINED_INIT
void RequestAck_init_Acknowledgement(outC_RequestAck_Acknowledgement *outC)
{
  outC->needsAckFromDriver = kcg_true;
  outC->service_brake = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RequestAck_reset_Acknowledgemen(outC_RequestAck_Acknowledgement *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Acknowledgement::RequestAck */
void RequestAck_Acknowledgement(
  /* Acknowledgement::RequestAck::isAckNeeded */ kcg_bool isAckNeeded,
  /* Acknowledgement::RequestAck::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* Acknowledgement::RequestAck::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* Acknowledgement::RequestAck::levelAck */ kcg_bool levelAck,
  /* Acknowledgement::RequestAck::IsNewLevel */ kcg_bool IsNewLevel,
  outC_RequestAck_Acknowledgement *outC)
{
  /* Acknowledgement::RequestAck::SM1 */
  static _174_SSM_ST_SM1 SM1_state_sel;
  /* Acknowledgement::RequestAck::SM1 */
  static _174_SSM_ST_SM1 SM1_state_act;
  /* Acknowledgement::RequestAck::Loc_PositionInAckArea */
  static kcg_bool Loc_PositionInAckArea;
  
  /* init_SM1 */ if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_Waiting_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  Loc_PositionInAckArea = /* 1 */
    Position_In_Ack_Area_Acknowledg(
      (*trainPosition).maxSafeFrontEndPostion,
      (*selected_level_transition).transition.position,
      (*selected_level_transition).transition.AckLength);
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Waiting_SM1 :
      if (isAckNeeded & (*selected_level_transition).is_set) {
        SM1_state_act = SSM_st_LaunchRequest_SM1;
      }
      else {
        SM1_state_act = SSM_st_Waiting_SM1;
      }
      break;
    case SSM_st_LaunchRequest_SM1 :
      if ((levelAck & !Loc_PositionInAckArea) | !isAckNeeded) {
        SM1_state_act = SSM_st_Waiting_SM1;
      }
      else if (levelAck & Loc_PositionInAckArea) {
        SM1_state_act = SSM_st_AckReceived_SM1;
      }
      else {
        SM1_state_act = SSM_st_LaunchRequest_SM1;
      }
      break;
    case SSM_st_AckReceived_SM1 :
      if (!Loc_PositionInAckArea | !isAckNeeded) {
        SM1_state_act = SSM_st_Waiting_SM1;
      }
      else {
        SM1_state_act = SSM_st_AckReceived_SM1;
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_Waiting_SM1 :
      outC->service_brake = kcg_false;
      outC->needsAckFromDriver = kcg_false;
      outC->SM1_state_nxt = SSM_st_Waiting_SM1;
      break;
    case SSM_st_LaunchRequest_SM1 :
      outC->needsAckFromDriver =
        (*selected_level_transition).transition.immediateAck |
        Loc_PositionInAckArea;
      outC->service_brake = IsNewLevel;
      outC->SM1_state_nxt = SSM_st_LaunchRequest_SM1;
      break;
    case SSM_st_AckReceived_SM1 :
      outC->service_brake = kcg_false;
      outC->needsAckFromDriver = kcg_false;
      outC->SM1_state_nxt = SSM_st_AckReceived_SM1;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RequestAck_Acknowledgement.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

