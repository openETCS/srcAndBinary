/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void safeRadioConnectionIndication_init_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->connectionStatus_SM_state_nxt = SSM_st_NoConnection_connectionStatus_SM;
  outC->connectionStatus.valid = kcg_true;
  outC->connectionStatus.status = srcs_NoConnection_MoRC_Pck;
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void safeRadioConnectionIndication_reset_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication */
void safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::startOfMissionProcedureIsGoingOn */ kcg_bool startOfMissionProcedureIsGoingOn,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::finalAttemptToSetupTheSafeRadioConnectionFailed */ kcg_bool finalAttemptToSetupTheSafeRadioConnectionFailed,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */ kcg_bool requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped */ kcg_bool requestsToSetupASafeRadioConnectionAreStopped,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::safeRadioConnection_Setup */ kcg_bool safeRadioConnection_Setup,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::safeRadioConnection_Released */ kcg_bool safeRadioConnection_Released,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::safeRadioConnection_Lost */ kcg_bool safeRadioConnection_Lost,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::trainfrontIsInsideAnAnnouncedRadioHole */ kcg_bool trainfrontIsInsideAnAnnouncedRadioHole,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromEstablishing */ kcg_bool firstRequestToSetupASafeRadioConnection_fromEstablishing,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromMaintaining */ kcg_bool firstRequestToSetupASafeRadioConnection_fromMaintaining,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_act;
  
  outC->connectionStatus.valid = kcg_true;
  /* init_connectionStatus_SM */ if (outC->init) {
    outC->init = kcg_false;
    connectionStatus_SM_state_sel = SSM_st_NoConnection_connectionStatus_SM;
  }
  else {
    connectionStatus_SM_state_sel = outC->connectionStatus_SM_state_nxt;
  }
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    (kcg_bool)
      (firstRequestToSetupASafeRadioConnection_fromEstablishing |
        firstRequestToSetupASafeRadioConnection_fromMaintaining),
    requestsToSetupASafeRadioConnectionAreStopped,
    actualTime,
    kcg_false,
    connectionStatusTimerInterval,
    &outC->Context_1);
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_NoConnection_connectionStatus_SM :
      if (safeRadioConnection_Setup) {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else if ((startOfMissionProcedureIsGoingOn &
          finalAttemptToSetupTheSafeRadioConnectionFailed) |
        outC->Context_1.expired) {
        connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionStatus_SM;
      }
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      if (safeRadioConnection_Setup) {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else if (!startOfMissionProcedureIsGoingOn &
        requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason) {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      if (safeRadioConnection_Released | (safeRadioConnection_Lost &
          requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason) |
        (safeRadioConnection_Lost & trainfrontIsInsideAnAnnouncedRadioHole)) {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionStatus_SM;
      }
      else if (outC->Context_1.expired) {
        connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionStatus_SM;
      }
      break;
    
  }
  /* act_connectionStatus_SM */ switch (connectionStatus_SM_state_act) {
    case SSM_st_NoConnection_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        SSM_st_NoConnection_connectionStatus_SM;
      outC->connectionStatus.status = srcs_NoConnection_MoRC_Pck;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      outC->connectionStatus.status = srcs_ConnectionLost_SetupFailed_MoRC_Pck;
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        SSM_st_ConnectionUp_connectionStatus_SM;
      outC->connectionStatus.status = srcs_ConnectionUp_MoRC_Pck;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

