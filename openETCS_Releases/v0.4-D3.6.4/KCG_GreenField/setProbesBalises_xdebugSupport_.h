/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _setProbesBalises_xdebugSupport
#define _setProbesBalises_xdebugSupport

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  probesBalises_T_xdebugSupport_P /* xdebugSupport_Pkg::setProbesBalises::baliseInformation */ baliseInformation;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* xdebugSupport_Pkg::setProbesBalises::bgID */ bgID;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_setProbesBalises_xdebugSup;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbesBalises */
extern void setProbesBalises_xdebugSupport_(
  /* xdebugSupport_Pkg::setProbesBalises::inMsg */ ReceivedMessage_T_Common_Types_ *inMsg,
  /* xdebugSupport_Pkg::setProbesBalises::inErrors */ MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSup *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setProbesBalises_reset_xdebugSu(
  outC_setProbesBalises_xdebugSup *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setProbesBalises_init_xdebugSup(
  outC_setProbesBalises_xdebugSup *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _setProbesBalises_xdebugSupport */
/* $**************** KCG Version 6.4 (build i21) ****************
** setProbesBalises_xdebugSupport_.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

