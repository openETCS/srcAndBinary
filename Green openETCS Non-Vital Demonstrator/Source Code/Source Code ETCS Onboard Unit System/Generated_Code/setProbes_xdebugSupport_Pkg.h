/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */
#ifndef _setProbes_xdebugSupport_Pkg_H_
#define _setProbes_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* xdebugSupport_Pkg::setProbes::isChanged */ isChanged;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::radioMSG */ radioMSG;
  NID_BG /* xdebugSupport_Pkg::setProbes::BG_ID */ BG_ID;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::packet_id1 */ packet_id1;
  NID_PACKET /* xdebugSupport_Pkg::setProbes::packet_id2 */ packet_id2;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* xdebugSupport_Pkg::setProbes::BG_ID */ rem_BG_ID;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::radioMSG */ rem_radioMSG;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_setProbes_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbes */
extern void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */ API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  outC_setProbes_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setProbes_reset_xdebugSupport_Pkg(
  outC_setProbes_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setProbes_init_xdebugSupport_Pkg(
  outC_setProbes_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _setProbes_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** setProbes_xdebugSupport_Pkg.h
** Generation date: 2015-10-16T18:56:06
*************************************************************$ */

