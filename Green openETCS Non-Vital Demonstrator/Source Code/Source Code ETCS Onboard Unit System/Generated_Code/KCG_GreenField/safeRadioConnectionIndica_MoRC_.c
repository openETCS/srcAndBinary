/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "safeRadioConnectionIndica_MoRC_.h"

#ifndef KCG_USER_DEFINED_INIT
void safeRadioConnectionIndica_init_(outC_safeRadioConnectionIndica_ *outC)
{
  outC->init = kcg_true;
  outC->connectionStatus_SM_state_nxt = SSM_st_NoConnection_connectionS;
  outC->indication.valid = kcg_true;
  outC->indication.indicator = srci_noConnection_RCM_Session_T;
  /* 4 */ RisingEdge_init_digital(&outC->Context_4);
  /* 1 */ countDownTimer_init_MoRC_Pck_Ut(&outC->Context_1);
  /* 3 */ RisingEdge_init_digital(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void safeRadioConnectionIndica_reset(outC_safeRadioConnectionIndica_ *outC)
{
  outC->init = kcg_true;
  /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
  /* 1 */ countDownTimer_reset_MoRC_Pck_U(&outC->Context_1);
  /* 3 */ RisingEdge_reset_digital(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2 */
void safeRadioConnectionIndica_MoRC_(
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionCmd */ mobileConnectionCmd_T_RCM_Types *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::currentTime */ T_internal_Type_Obu_BasicTypes_ currentTime,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndica_ *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */
  static kcg_bool requestsToSetupASafeRadioConnec;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::safeRadioConnection_Lost */
  static kcg_bool safeRadioConnection_Lost;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L61 */
  static kcg_bool _L61;
  
  outC->indication.valid = kcg_true;
  /* init_connectionStatus_SM */ if (outC->init) {
    outC->init = kcg_false;
    connectionStatus_SM_state_sel = SSM_st_NoConnection_connectionS;
  }
  else {
    connectionStatus_SM_state_sel = outC->connectionStatus_SM_state_nxt;
  }
  /* 3 */
  RisingEdge_digital(
    (kcg_bool)
      ((*connectionStatus).valid & ((*connectionStatus).status ==
          mcs_disconnected_RCM_Types_Pkg)),
    &outC->Context_3);
  safeRadioConnection_Lost = (*connectionStatus).valid &
    (*connectionStatus).connectionLost;
  requestsToSetupASafeRadioConnec = (*connectionStatus).valid &
    (*connectionStatus).settingUpConnectionHasFailed;
  _L61 = (*connectionStatus).valid & ((*connectionStatus).status ==
      mcs_connected_RCM_Types_Pkg);
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    (kcg_bool)
      ((*connectionCmd).valid & (((*connectionCmd).action ==
            mca_unexpectRadioHole_RCM_Types) | ((*connectionCmd).action ==
            mca_connect_RCM_Types_Pkg))),
    (kcg_bool)
      (_L61 | ((*connectionCmd).valid & ((*connectionCmd).action ==
            mca_disconnect_RCM_Types_Pkg)) |
        (*eventsAndPhases).trainFrontInsideInAnAnnouncedRa),
    currentTime,
    kcg_false,
    connectionStatusTimerInterval,
    &outC->Context_1);
  /* 4 */ RisingEdge_digital(_L61, &outC->Context_4);
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_NoConnection_connectionS :
      if (outC->Context_4.RE_Output) {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionS;
      }
      else if (((*eventsAndPhases).startOfMissionProcedureIsGoingO &
          requestsToSetupASafeRadioConnec) | outC->Context_1.expired) {
        connectionStatus_SM_state_act = SSM_st_ConnectionLost_SetupFail;
      }
      else {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionS;
      }
      break;
    case SSM_st_ConnectionLost_SetupFail :
      if ((!(*eventsAndPhases).startOfMissionProcedureIsGoingO &
          requestsToSetupASafeRadioConnec) | reset) {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionS;
      }
      else if (outC->Context_4.RE_Output) {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionS;
      }
      else {
        connectionStatus_SM_state_act = SSM_st_ConnectionLost_SetupFail;
      }
      break;
    case SSM_st_ConnectionUp_connectionS :
      if (outC->Context_3.RE_Output | (safeRadioConnection_Lost &
          requestsToSetupASafeRadioConnec) | (safeRadioConnection_Lost &
          (*eventsAndPhases).trainFrontInsideInAnAnnouncedRa) | reset) {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionS;
      }
      else if (outC->Context_1.expired) {
        connectionStatus_SM_state_act = SSM_st_ConnectionLost_SetupFail;
      }
      else {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionS;
      }
      break;
    
  }
  /* act_connectionStatus_SM */ switch (connectionStatus_SM_state_act) {
    case SSM_st_NoConnection_connectionS :
      outC->connectionStatus_SM_state_nxt = SSM_st_NoConnection_connectionS;
      outC->indication.indicator = srci_noConnection_RCM_Session_T;
      break;
    case SSM_st_ConnectionLost_SetupFail :
      outC->connectionStatus_SM_state_nxt = SSM_st_ConnectionLost_SetupFail;
      outC->indication.indicator = srci_connectionLost_setupFailed;
      break;
    case SSM_st_ConnectionUp_connectionS :
      outC->connectionStatus_SM_state_nxt = SSM_st_ConnectionUp_connectionS;
      outC->indication.indicator = srci_connectionUp_RCM_Session_T;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** safeRadioConnectionIndica_MoRC_.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

