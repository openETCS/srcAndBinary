/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _setProbes_xdebugSupport_Pkg_H_
#define _setProbes_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPackets_xdebugSupport_Pkg.h"

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
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::lastRadioMSG */ lastRadioMSG;
  NID_BG /* xdebugSupport_Pkg::setProbes::lastBG_ID */ lastBG_ID;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* xdebugSupport_Pkg::setProbes::BG_ID */ rem_BG_ID;
  NID_MESSAGE /* xdebugSupport_Pkg::setProbes::radioMSG */ rem_radioMSG;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_setProbes_xdebugSupport_Pk;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::setProbes */
extern void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */ API_TrackSideInput_T_API_Msg_Pk *inMsg,
  /* xdebugSupport_Pkg::setProbes::show24 */ kcg_bool show24,
  outC_setProbes_xdebugSupport_Pk *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setProbes_reset_xdebugSupport_P(
  outC_setProbes_xdebugSupport_Pk *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setProbes_init_xdebugSupport_Pk(
  outC_setProbes_xdebugSupport_Pk *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _setProbes_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** setProbes_xdebugSupport_Pkg.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

