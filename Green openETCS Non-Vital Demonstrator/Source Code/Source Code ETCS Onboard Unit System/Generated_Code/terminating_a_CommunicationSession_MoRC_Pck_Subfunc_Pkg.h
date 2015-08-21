/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg_H_
#define _terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::sendATerminationOfCommunicationMessage */ sendATerminationOfCommunicationMessage;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::requestReleaseOfSafeRadioConnectionWithTrackside */ requestReleaseOfSafeRadioConnectionWithTrackside;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::abortEstablishingACommunicationSession */ abortEstablishingACommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::communicationSessionTerminated */ communicationSessionTerminated;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_TerminateTheCommunicationSession_SM /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ TerminateTheCommunicationSession_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession */
extern void terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::initiateTermination */kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::aSessionIsEstablished */kcg_bool aSessionIsEstablished,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::acknowledgementOfTerminationOfCommunicationSessionReceived */kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::aSessionIsCurrentlyBeingEstablished */kcg_bool aSessionIsCurrentlyBeingEstablished,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::actualTime */time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::establishingACommunicationSessionAborted */kcg_bool establishingACommunicationSessionAborted,
  outC_terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg *outC);

extern void terminating_a_CommunicationSession_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

