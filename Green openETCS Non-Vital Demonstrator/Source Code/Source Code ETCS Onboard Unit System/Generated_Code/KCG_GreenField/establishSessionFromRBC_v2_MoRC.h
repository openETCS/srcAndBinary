/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _establishSessionFromRBC_v2_MoR
#define _establishSessionFromRBC_v2_MoR

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::send_m159_sessionEstablishedReport */ send_m159_sessionEstablishedRep;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::established */ established;
  sessionStatus_T_RCM_Session_Typ /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionStatus */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _157_SSM_ST_SM1 /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */ SM1_state_nxt;
  sessionCmd_T_RCM_Session_Types_ /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_mem */ sessionEstablishCmd_mem;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_establishSessionFromRBC_v2;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2 */
extern void establishSessionFromRBC_v2_MoRC(
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::sessionEstablishCmd_in */ sessionCmd_T_RCM_Session_Types_ *sessionEstablishCmd_in,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::reset */ kcg_bool reset,
  outC_establishSessionFromRBC_v2 *outC);

extern void establishSessionFromRBC_v2_rese(
  outC_establishSessionFromRBC_v2 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void establishSessionFromRBC_v2_init(
  outC_establishSessionFromRBC_v2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _establishSessionFromRBC_v2_MoR */
/* $**************** KCG Version 6.4 (build i21) ****************
** establishSessionFromRBC_v2_MoRC.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

