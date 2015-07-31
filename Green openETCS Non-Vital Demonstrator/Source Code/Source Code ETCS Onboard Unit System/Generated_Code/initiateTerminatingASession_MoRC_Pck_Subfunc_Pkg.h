/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg_H_
#define _initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::initiateTermination */ initiateTermination;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::sendAPositionReport */ sendAPositionReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_TrainExitedFromRBCArea_SM /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */ TrainExitedFromRBCArea_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession */
extern void initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::orderReceivedFromTrackside */p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderReceivedFromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::errorConditionRequiringTerminationDetected */kcg_bool errorConditionRequiringTerminationDetected,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::trainIsRejectedByRBC_duringStartOfMission */kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::driverClosesTheDeskduringStartOfMission */kcg_bool driverClosesTheDeskduringStartOfMission,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::trainExitedFromAnRBCArea */kcg_bool trainExitedFromAnRBCArea,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::receivedOrderToTerminateTheSession */p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *receivedOrderToTerminateTheSession,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::actualTime */time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::isInCommunicationSessionWithAnRIU */kcg_bool isInCommunicationSessionWithAnRIU,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::level_1_isLeft */kcg_bool level_1_isLeft,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::endOfMissionIsExecuted */kcg_bool endOfMissionIsExecuted,
  outC_initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg *outC);

extern void initiateTerminatingASession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

