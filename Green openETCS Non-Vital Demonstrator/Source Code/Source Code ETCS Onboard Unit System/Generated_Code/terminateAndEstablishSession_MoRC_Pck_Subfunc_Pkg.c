/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void terminateAndEstablishSession_init_MoRC_Pck_Subfunc_Pkg(
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->initiateTermination = kcg_true;
  outC->initiateEstablishingNewSession = kcg_true;
  outC->init = kcg_true;
  outC->storedOrder.establish = kcg_true;
  outC->storedOrder.terminate = kcg_true;
  outC->storedOrder.contactLastKnownRBC = kcg_true;
  outC->storedOrder.useTheShortNumberStoredOnboard = kcg_true;
  outC->storedOrder.establishOrderDoesNotRequestToContactAnAcceptingRBC =
    kcg_true;
  outC->storedOrder.source = msrc_undefined_Common_Types_Pkg;
  outC->storedOrder.q_dir = Q_DIR_Reverse;
  outC->storedOrder.q_rbc = Q_RBC_Terminate_communication_session;
  outC->storedOrder.nid_c = 0;
  outC->storedOrder.nid_rbc = 0;
  outC->storedOrder.nid_radio = 0;
  outC->SM1_state_nxt = SSM_st_NoTerminationInProgress_SM1;
  outC->newOrderToEstablishASession_out.establish = kcg_true;
  outC->newOrderToEstablishASession_out.terminate = kcg_true;
  outC->newOrderToEstablishASession_out.contactLastKnownRBC = kcg_true;
  outC->newOrderToEstablishASession_out.useTheShortNumberStoredOnboard =
    kcg_true;
  outC->newOrderToEstablishASession_out.establishOrderDoesNotRequestToContactAnAcceptingRBC =
    kcg_true;
  outC->newOrderToEstablishASession_out.source =
    msrc_undefined_Common_Types_Pkg;
  outC->newOrderToEstablishASession_out.q_dir = Q_DIR_Reverse;
  outC->newOrderToEstablishASession_out.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->newOrderToEstablishASession_out.nid_c = 0;
  outC->newOrderToEstablishASession_out.nid_rbc = 0;
  outC->newOrderToEstablishASession_out.nid_radio = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void terminateAndEstablishSession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession */
void terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::newOrderToEstablishASession_in */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *newOrderToEstablishASession_in,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::sessionStatus */ sessionStatus_Type_Radio_Types_Pkg sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::OBU_hasToEstablishANewSession */ kcg_bool OBU_hasToEstablishANewSession,
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
  static _8_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
  static _8_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::_L26 */
  static kcg_bool _L26;
  
  _L26 = sessionStatus != morc_st_inactive_Radio_Types_Pkg;
  outC->initiateTermination = (*newOrderToEstablishASession_in).terminate &
    OBU_hasToEstablishANewSession & _L26;
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_NoTerminationInProgress_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_NoTerminationInProgress_SM1 :
      if (outC->initiateTermination) {
        SM1_state_act = SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = SSM_st_NoTerminationInProgress_SM1;
      }
      break;
    case SSM_st_TerminationInProgress_SM1 :
      if (_L26) {
        SM1_state_act = SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = SSM_st_EstablishNewSession_SM1;
      }
      break;
    case SSM_st_EstablishNewSession_SM1 :
      SM1_state_act = SSM_st_NoTerminationInProgress_SM1;
      break;
    
  }
  /* 1 */ if ((*newOrderToEstablishASession_in).establish |
    (*newOrderToEstablishASession_in).terminate) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &outC->storedOrder,
      newOrderToEstablishASession_in);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &outC->storedOrder,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
  }
  outC->init = kcg_false;
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_EstablishNewSession_SM1 :
      outC->initiateEstablishingNewSession = kcg_true;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        &outC->storedOrder);
      outC->SM1_state_nxt = SSM_st_EstablishNewSession_SM1;
      break;
    case SSM_st_TerminationInProgress_SM1 :
      outC->initiateEstablishingNewSession = kcg_false;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
          &cInvalidOrder_MoRC_Pck_Coder_Pkg);
      outC->SM1_state_nxt = SSM_st_TerminationInProgress_SM1;
      break;
    case SSM_st_NoTerminationInProgress_SM1 :
      outC->initiateEstablishingNewSession = kcg_false;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        newOrderToEstablishASession_in);
      outC->SM1_state_nxt = SSM_st_NoTerminationInProgress_SM1;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

