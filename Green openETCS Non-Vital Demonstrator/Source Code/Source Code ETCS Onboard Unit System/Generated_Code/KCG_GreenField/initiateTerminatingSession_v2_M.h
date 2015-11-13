/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _initiateTerminatingSession_v2_
#define _initiateTerminatingSession_v2_

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC.h"
#include "waitAndRepeatTimer_MoRC_Pck_Uti.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::initiateTermination */ initiateTermination;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sendAPositionReport */ sendAPositionReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_TrainExitedFromRBCArea_S /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */ TrainExitedFromRBCArea_SM_state;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pc /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_initiateTerminatingSession;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
extern void initiateTerminatingSession_v2_M(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Typ *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::maxWaitingTimeUntilTerminationOrderReceived */ T_internal_Type_Obu_BasicTypes_ maxWaitingTimeUntilTerminationO,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::noOfRetriesUntilTerminationOrderIsReceived */ kcg_int noOfRetriesUntilTerminationOrde,
  outC_initiateTerminatingSession *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void initiateTerminatingSession_v2_r(
  outC_initiateTerminatingSession *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void initiateTerminatingSession_v2_i(
  outC_initiateTerminatingSession *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _initiateTerminatingSession_v2_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** initiateTerminatingSession_v2_M.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

