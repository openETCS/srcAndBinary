/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */
#ifndef _distanceLastMSG_xdebugSupport_Pkg_H_
#define _distanceLastMSG_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* xdebugSupport_Pkg::distanceLastMSG::distance */ distance;
  NID_BG /* xdebugSupport_Pkg::distanceLastMSG::lastMSG */ lastMSG;
  NID_LRBG /* xdebugSupport_Pkg::distanceLastMSG::lastLRBG */ lastLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */ MSGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_distanceLastMSG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastMSG */
extern void distanceLastMSG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastMSG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastMSG::msg */ ReceivedMessage_T_Common_Types_Pkg *msg,
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */ kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void distanceLastMSG_init_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _distanceLastMSG_xdebugSupport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastMSG_xdebugSupport_Pkg.h
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

