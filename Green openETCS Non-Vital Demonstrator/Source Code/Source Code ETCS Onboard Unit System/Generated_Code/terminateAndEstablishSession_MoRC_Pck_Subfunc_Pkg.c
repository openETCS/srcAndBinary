/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.h"

void terminateAndEstablishSession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession */
void terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::newOrderToEstablishASession_in */p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *newOrderToEstablishASession_in,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::sessionStatus */sessionStatus_Type_Radio_Types_Pkg sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::OBU_hasToEstablishANewSession */kcg_bool OBU_hasToEstablishANewSession,
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
  static _1_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
  static _1_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::_L26 */
  static kcg_bool _L26;
  
  if (outC->init) {
    SM1_state_sel = SSM_st_NoTerminationInProgress_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  _L26 = sessionStatus != morc_st_inactive_Radio_Types_Pkg;
  outC->initiateTermination = (*newOrderToEstablishASession_in).terminate &
    OBU_hasToEstablishANewSession & _L26;
  switch (SM1_state_sel) {
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
  if ((*newOrderToEstablishASession_in).establish |
    (*newOrderToEstablishASession_in).terminate) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &outC->storedOrder,
      newOrderToEstablishASession_in);
  }
  else if (outC->init) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &outC->storedOrder,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
  }
  outC->init = kcg_false;
  switch (SM1_state_act) {
    case SSM_st_EstablishNewSession_SM1 :
      outC->SM1_state_nxt = SSM_st_EstablishNewSession_SM1;
      outC->initiateEstablishingNewSession = kcg_true;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        &outC->storedOrder);
      break;
    case SSM_st_TerminationInProgress_SM1 :
      outC->SM1_state_nxt = SSM_st_TerminationInProgress_SM1;
      outC->initiateEstablishingNewSession = kcg_false;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
          &cInvalidOrder_MoRC_Pck_Coder_Pkg);
      break;
    case SSM_st_NoTerminationInProgress_SM1 :
      outC->SM1_state_nxt = SSM_st_NoTerminationInProgress_SM1;
      outC->initiateEstablishingNewSession = kcg_false;
      kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
        &outC->newOrderToEstablishASession_out,
        newOrderToEstablishASession_in);
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

