/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _LevelTransitionEffective_Infor
#define _LevelTransitionEffective_Infor

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
} outC_LevelTransitionEffective_I;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::LevelTransitionEffective */
extern void LevelTransitionEffective_Inform(
  /* InformationFilter_Pkg::LevelTransitionEffective::inLevel */ M_LEVEL inLevel,
  outC_LevelTransitionEffective_I *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelTransitionEffective_reset_(
  outC_LevelTransitionEffective_I *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelTransitionEffective_init_I(
  outC_LevelTransitionEffective_I *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _LevelTransitionEffective_Infor */
/* $**************** KCG Version 6.4 (build i21) ****************
** LevelTransitionEffective_Inform.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

