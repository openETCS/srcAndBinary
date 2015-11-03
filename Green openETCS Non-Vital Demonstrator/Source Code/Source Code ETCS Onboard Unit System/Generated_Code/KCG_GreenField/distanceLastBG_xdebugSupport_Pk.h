/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */
#ifndef _distanceLastBG_xdebugSupport_P
#define _distanceLastBG_xdebugSupport_P

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* xdebugSupport_Pkg::distanceLastBG::distance */ distance;
  NID_BG /* xdebugSupport_Pkg::distanceLastBG::lastBG */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_ /* xdebugSupport_Pkg::distanceLastBG::BGLocation */ BGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_distanceLastBG_xdebugSuppo;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastBG */
extern void distanceLastBG_xdebugSupport_Pk(
  /* xdebugSupport_Pkg::distanceLastBG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBG::msg */ ReceivedMessage_T_Common_Types_ *msg,
  outC_distanceLastBG_xdebugSuppo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void distanceLastBG_reset_xdebugSupp(
  outC_distanceLastBG_xdebugSuppo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void distanceLastBG_init_xdebugSuppo(
  outC_distanceLastBG_xdebugSuppo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _distanceLastBG_xdebugSupport_P */
/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastBG_xdebugSupport_Pk.h
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

