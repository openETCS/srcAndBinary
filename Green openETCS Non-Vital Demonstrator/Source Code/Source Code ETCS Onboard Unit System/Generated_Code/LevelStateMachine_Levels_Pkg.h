/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _LevelStateMachine_Levels_Pkg_H_
#define _LevelStateMachine_Levels_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* Levels_Pkg::LevelStateMachine::OutLevel */ OutLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_MainLevelOutput /* Levels_Pkg::LevelStateMachine::MainLevelOutput */ MainLevelOutput_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LevelStateMachine_Levels_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Levels_Pkg::LevelStateMachine */
extern void LevelStateMachine_Levels_Pkg(
  /* Levels_Pkg::LevelStateMachine::input_conditions */T_TransitionConditions_Level_And_Mode_Types_Pkg *input_conditions,
  outC_LevelStateMachine_Levels_Pkg *outC);

extern void LevelStateMachine_reset_Levels_Pkg(
  outC_LevelStateMachine_Levels_Pkg *outC);

#endif /* _LevelStateMachine_Levels_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelStateMachine_Levels_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

