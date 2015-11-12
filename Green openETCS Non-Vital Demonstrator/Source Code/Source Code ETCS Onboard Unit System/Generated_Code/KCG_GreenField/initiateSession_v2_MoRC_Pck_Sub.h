/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _initiateSession_v2_MoRC_Pck_Su
#define _initiateSession_v2_MoRC_Pck_Su

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
extern void initiateSession_v2_MoRC_Pck_Sub(
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::prevSessionTerminatedDueToLossOfSafeRadioConnection */ kcg_bool prevSessionTerminatedDueToLossO,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::m38_initiationOfACommunicationSessionMsg */ m38_initiationOfACommunicationS *_5_m38_initiationOfACommunicati,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::registrationStatus */ mobileRegistrationContext_T_RCM *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Typ *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::lastKnownRBC */ sessionStatus_T_RCM_Session_Typ *lastKnownRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio_shortNumberStoredOnboard */ NID_RADIO nid_radio_shortNumberStoredOnbo,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionEstablishCmd */ sessionCmd_T_RCM_Session_Types_ *sessionEstablishCmd);

#endif /* _initiateSession_v2_MoRC_Pck_Su */
/* $**************** KCG Version 6.4 (build i21) ****************
** initiateSession_v2_MoRC_Pck_Sub.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

