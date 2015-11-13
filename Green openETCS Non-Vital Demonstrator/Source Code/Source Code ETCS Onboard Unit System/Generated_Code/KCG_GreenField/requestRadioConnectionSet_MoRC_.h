/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _requestRadioConnectionSet_MoRC
#define _requestRadioConnectionSet_MoRC

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionCmd_T_RCM_Types /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */ connectionCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_repeat_SM /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */ repeat_SM_state_nxt;
  p42_sessionManagement_T_RCM_Msg /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::p42_sessionManagement_mem */ p42_sessionManagement_mem;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 1 */ _1_Context_1;
  outC_countDownTimer_MoRC_Pck_Ut /* 1 */ Context_1;
  outC_RisingEdge_digital /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_requestRadioConnectionSet_;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2 */
extern void requestRadioConnectionSet_MoRC_(
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::eventsPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsPhases,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::p42_sessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_sessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::sessionStatus */ sessionStatus_T_RCM_Session_Typ *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::registrationStatus */ mobileRegistrationContext_T_RCM *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connect */ kcg_bool connect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::disconnect */ kcg_bool disconnect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::currentTime */ T_internal_Type_Obu_BasicTypes_ currentTime,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::maxTimeToMaintainCommSession */ T_internal_Type_Obu_BasicTypes_ maxTimeToMaintainCommSession,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::noOfRetriesToEstablishASafeRadioConnection */ kcg_int noOfRetriesToEstablishASafeRadi,
  outC_requestRadioConnectionSet_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void requestRadioConnectionSet_reset(
  outC_requestRadioConnectionSet_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void requestRadioConnectionSet_init_(
  outC_requestRadioConnectionSet_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _requestRadioConnectionSet_MoRC */
/* $**************** KCG Version 6.4 (build i21) ****************
** requestRadioConnectionSet_MoRC_.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

