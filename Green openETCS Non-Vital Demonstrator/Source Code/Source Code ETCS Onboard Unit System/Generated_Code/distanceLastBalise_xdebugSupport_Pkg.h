/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _distanceLastBalise_xdebugSupport_Pkg_H_
#define _distanceLastBalise_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* xdebugSupport_Pkg::distanceLastBalise::distance */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* xdebugSupport_Pkg::distanceLastBalise::BGLocation */ BGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_distanceLastBalise_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastBalise */
extern void distanceLastBalise_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastBalise::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBalise::msg */ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBalise_xdebugSupport_Pkg *outC);

extern void distanceLastBalise_reset_xdebugSupport_Pkg(
  outC_distanceLastBalise_xdebugSupport_Pkg *outC);

#endif /* _distanceLastBalise_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** distanceLastBalise_xdebugSupport_Pkg.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

