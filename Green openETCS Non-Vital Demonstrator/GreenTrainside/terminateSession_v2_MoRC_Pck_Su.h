/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _terminateSession_v2_MoRC_Pck_S
#define _terminateSession_v2_MoRC_Pck_S

#include "kcg_types.h"
#include "waitAndRepeatTimer_MoRC_Pck_Uti.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::send_m156_TerminationOfCommunicationSession */ send_m156_TerminationOfCommunic;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::requestReleaseOfSafeRadioConnection */ requestReleaseOfSafeRadioConnec;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::terminated */ terminated;
  sessionStatus_T_RCM_Session_Typ /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::sessionStatus */ sessionStatus;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::notReady */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _144_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */ SM1_state_nxt;
  sessionStatus_T_RCM_Session_Typ /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L92 */ _L92;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pc /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_terminateSession_v2_MoRC_P;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
extern void terminateSession_v2_MoRC_Pck_Su(
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::initiateTermination */ kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::m39_AckOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunic *_2_m39_AckOfTerminationOfACommu,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::prevSessionStatus */ sessionStatus_T_RCM_Session_Typ *prevSessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::noOfRetriesOfSendingTerminationMessage */ kcg_int noOfRetriesOfSendingTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::maxWaitingTimeForAckMessageReceived */ T_internal_Type_Obu_BasicTypes_ maxWaitingTimeForAckMessageRece,
  outC_terminateSession_v2_MoRC_P *outC);

extern void terminateSession_v2_reset_MoRC_(
  outC_terminateSession_v2_MoRC_P *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void terminateSession_v2_init_MoRC_P(
  outC_terminateSession_v2_MoRC_P *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _terminateSession_v2_MoRC_Pck_S */
/* $**************** KCG Version 6.4 (build i21) ****************
** terminateSession_v2_MoRC_Pck_Su.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

