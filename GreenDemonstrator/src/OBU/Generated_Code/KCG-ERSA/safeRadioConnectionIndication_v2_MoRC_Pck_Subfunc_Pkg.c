/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void safeRadioConnectionIndication_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->connectionStatus_SM_state_nxt = SSM_st_NoConnection_connectionStatus_SM;
  outC->indication.valid = kcg_true;
  outC->indication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  /* 4 */ RisingEdge_init_digital(&outC->Context_4);
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
  /* 3 */ RisingEdge_init_digital(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
  /* 3 */ RisingEdge_reset_digital(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2 */
void safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionCmd */ mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */ SSM_ST_connectionStatus_SM connectionStatus_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */ SSM_ST_connectionStatus_SM connectionStatus_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */ kcg_bool requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::safeRadioConnection_Lost */ kcg_bool safeRadioConnection_Lost;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L61 */ kcg_bool _L61;
  
  outC->indication.valid = kcg_true;
  /* init_connectionStatus_SM */ if (outC->init) {
    outC->init = kcg_false;
    connectionStatus_SM_state_sel = SSM_st_NoConnection_connectionStatus_SM;
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
  requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason =
    (*connectionStatus).valid &
    (*connectionStatus).settingUpConnectionHasFailed;
  _L61 = (*connectionStatus).valid & ((*connectionStatus).status ==
      mcs_connected_RCM_Types_Pkg);
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    (kcg_bool)
      ((*connectionCmd).valid & (((*connectionCmd).action ==
            mca_unexpectRadioHole_RCM_Types_Pkg) | ((*connectionCmd).action ==
            mca_connect_RCM_Types_Pkg))),
    (kcg_bool)
      (_L61 | ((*connectionCmd).valid & ((*connectionCmd).action ==
            mca_disconnect_RCM_Types_Pkg)) |
        (*eventsAndPhases).trainFrontInsideInAnAnnouncedRadioHole),
    currentTime,
    kcg_false,
    connectionStatusTimerInterval,
    &outC->Context_1);
  /* 4 */ RisingEdge_digital(_L61, &outC->Context_4);
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_NoConnection_connectionStatus_SM :
      if (outC->Context_4.RE_Output) {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else if (((*eventsAndPhases).startOfMissionProcedureIsGoingOn &
          requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason) |
        outC->Context_1.expired) {
        connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionStatus_SM;
      }
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      if ((!(*eventsAndPhases).startOfMissionProcedureIsGoingOn &
          requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason) |
        reset) {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionStatus_SM;
      }
      else if (outC->Context_4.RE_Output) {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      if (outC->Context_3.RE_Output | (safeRadioConnection_Lost &
          requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason) |
        (safeRadioConnection_Lost &
          (*eventsAndPhases).trainFrontInsideInAnAnnouncedRadioHole) | reset) {
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
      outC->indication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      outC->indication.indicator =
        srci_connectionLost_setupFailed_RCM_Session_Types_Pkg;
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        SSM_st_ConnectionUp_connectionStatus_SM;
      outC->indication.indicator = srci_connectionUp_RCM_Session_Types_Pkg;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

