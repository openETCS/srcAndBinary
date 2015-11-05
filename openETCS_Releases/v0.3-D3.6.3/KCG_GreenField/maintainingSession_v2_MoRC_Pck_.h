/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _maintainingSession_v2_MoRC_Pck
#define _maintainingSession_v2_MoRC_Pck

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  sessionStatus_T_RCM_Session_Typ /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::sessionStatus */ sessionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  sessionStatus_T_RCM_Session_Typ /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::_L133 */ _L133;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_maintainingSession_v2_MoRC;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2 */
extern void maintainingSession_v2_MoRC_Pck_(
  /* MoRC_Pck::Subfunc_Pkg::maintainingSession_v2::prevSessionStatus */ sessionStatus_T_RCM_Session_Typ *prevSessionStatus,
  outC_maintainingSession_v2_MoRC *outC);

extern void maintainingSession_v2_reset_MoR(
  outC_maintainingSession_v2_MoRC *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void maintainingSession_v2_init_MoRC(
  outC_maintainingSession_v2_MoRC *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _maintainingSession_v2_MoRC_Pck */
/* $**************** KCG Version 6.4 (build i21) ****************
** maintainingSession_v2_MoRC_Pck_.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

