/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */
#ifndef _distanceLastMSG_xdebugSupport_
#define _distanceLastMSG_xdebugSupport_

#include "kcg_types.h"
#include "countPacketsMsg_xdebugSupport_P.h"

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
  L_internal_Type_Obu_BasicTypes_ /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */ MSGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_distanceLastMSG_xdebugSupp;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastMSG */
extern void distanceLastMSG_xdebugSupport_P(
  /* xdebugSupport_Pkg::distanceLastMSG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastMSG::msg */ ReceivedMessage_T_Common_Types_ *msg,
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */ kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupp *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void distanceLastMSG_reset_xdebugSup(
  outC_distanceLastMSG_xdebugSupp *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void distanceLastMSG_init_xdebugSupp(
  outC_distanceLastMSG_xdebugSupp *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _distanceLastMSG_xdebugSupport_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastMSG_xdebugSupport_P.h
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

