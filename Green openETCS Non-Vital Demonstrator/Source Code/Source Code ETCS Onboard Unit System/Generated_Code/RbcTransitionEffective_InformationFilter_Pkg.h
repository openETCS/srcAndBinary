/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _RbcTransitionEffective_InformationFilter_Pkg_H_
#define _RbcTransitionEffective_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::RbcTransitionEffective::outRbcTransition */ outRbcTransition;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */ rem_inSupervisingDevice;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RbcTransitionEffective_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::RbcTransitionEffective */
extern void RbcTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */ kcg_int inSupervisingDevice,
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RbcTransitionEffective_reset_InformationFilter_Pkg(
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RbcTransitionEffective_init_InformationFilter_Pkg(
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RbcTransitionEffective_InformationFilter_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RbcTransitionEffective_InformationFilter_Pkg.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

