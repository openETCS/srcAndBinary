/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */
#ifndef _LowerOrHold_TargetLimits_Pkg_H_
#define _LowerOrHold_TargetLimits_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* TargetLimits_Pkg::LowerOrHold::vo */ vo;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* TargetLimits_Pkg::LowerOrHold::vi */ rem_vi;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LowerOrHold_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::LowerOrHold */
extern void LowerOrHold_TargetLimits_Pkg(
  /* TargetLimits_Pkg::LowerOrHold::vi */ V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* TargetLimits_Pkg::LowerOrHold::enable */ kcg_bool enable,
  outC_LowerOrHold_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LowerOrHold_reset_TargetLimits_Pkg(
  outC_LowerOrHold_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LowerOrHold_init_TargetLimits_Pkg(
  outC_LowerOrHold_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _LowerOrHold_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LowerOrHold_TargetLimits_Pkg.h
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */

