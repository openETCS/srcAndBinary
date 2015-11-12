/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */
#ifndef _LowerOrHold_SDM_Commands_Pkg_H
#define _LowerOrHold_SDM_Commands_Pkg_H

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_odometry_Type_Obu_BasicTypes_ /* SDM_Commands_Pkg::LowerOrHold::vo */ vo;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Target_T_TargetManagement_types /* SDM_Commands_Pkg::LowerOrHold::mrdt */ rem_mrdt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LowerOrHold_SDM_Commands_P;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::LowerOrHold */
extern void LowerOrHold_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::LowerOrHold::vi */ V_odometry_Type_Obu_BasicTypes_ vi,
  /* SDM_Commands_Pkg::LowerOrHold::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_LowerOrHold_SDM_Commands_P *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LowerOrHold_reset_SDM_Commands_(
  outC_LowerOrHold_SDM_Commands_P *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LowerOrHold_init_SDM_Commands_P(
  outC_LowerOrHold_SDM_Commands_P *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _LowerOrHold_SDM_Commands_Pkg_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** LowerOrHold_SDM_Commands_Pkg.h
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */

