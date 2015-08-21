/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _LevelTransitionEffective_InformationFilter_Pkg_H_
#define _LevelTransitionEffective_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::LevelTransitionEffective::outLevelTransition */ outLevelTransition;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* InformationFilter_Pkg::LevelTransitionEffective::inLevel */ rem_inLevel;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LevelTransitionEffective_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::LevelTransitionEffective */
extern void LevelTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::LevelTransitionEffective::inLevel */M_LEVEL inLevel,
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC);

extern void LevelTransitionEffective_reset_InformationFilter_Pkg(
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC);

#endif /* _LevelTransitionEffective_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelTransitionEffective_InformationFilter_Pkg.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

