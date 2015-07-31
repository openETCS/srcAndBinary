/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _LevelStateMachine_H_
#define _LevelStateMachine_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* LevelStateMachine::OutLevel */ OutLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_MainLevelOutput /* LevelStateMachine::MainLevelOutput */ MainLevelOutput_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LevelStateMachine;

/* ===========  node initialization and cycle functions  =========== */
/* LevelStateMachine */
extern void LevelStateMachine(
  /* LevelStateMachine::input_conditions */T_TransitionConditions_Level_And_Mode_Types_Pkg *input_conditions,
  outC_LevelStateMachine *outC);

extern void LevelStateMachine_reset(outC_LevelStateMachine *outC);

#endif /* _LevelStateMachine_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelStateMachine.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

