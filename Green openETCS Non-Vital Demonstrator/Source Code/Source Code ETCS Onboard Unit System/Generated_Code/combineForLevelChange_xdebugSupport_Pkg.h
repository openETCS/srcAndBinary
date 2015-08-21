/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _combineForLevelChange_xdebugSupport_Pkg_H_
#define _combineForLevelChange_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "dataForLevelTransition_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg /* xdebugSupport_Pkg::combineForLevelChange::forLevelManagement */ forLevelManagement;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */ LRBGpositionNeeded;
  M_LEVEL /* xdebugSupport_Pkg::combineForLevelChange::level */ rem_level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_combineForLevelChange_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::combineForLevelChange */
extern void combineForLevelChange_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);

extern void combineForLevelChange_reset_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC);

#endif /* _combineForLevelChange_xdebugSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** combineForLevelChange_xdebugSupport_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

