/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-19T12:47:26
*************************************************************$ */
#ifndef _DelayTransitionOrder_Levels_Pkg_H_
#define _DelayTransitionOrder_Levels_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* Levels_Pkg::DelayTransitionOrder::out_transition */ out_transition;
  kcg_bool /* Levels_Pkg::DelayTransitionOrder::out_transitionKnown */ out_transitionKnown;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* Levels_Pkg::DelayTransitionOrder::level_transition */ rem_level_transition;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_DelayTransitionOrder_Levels_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Levels_Pkg::DelayTransitionOrder */
extern void DelayTransitionOrder_Levels_Pkg(
  /* Levels_Pkg::DelayTransitionOrder::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* Levels_Pkg::DelayTransitionOrder::transitionReset */kcg_bool transitionReset,
  outC_DelayTransitionOrder_Levels_Pkg *outC);

extern void DelayTransitionOrder_reset_Levels_Pkg(
  outC_DelayTransitionOrder_Levels_Pkg *outC);

#endif /* _DelayTransitionOrder_Levels_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DelayTransitionOrder_Levels_Pkg.h
** Generation date: 2015-08-19T12:47:26
*************************************************************$ */

