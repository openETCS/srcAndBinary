/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _computeLeveLTransitions_Levels_Pkg_H_
#define _computeLeveLTransitions_Levels_Pkg_H_

#include "kcg_types.h"
#include "ComputeTransitionConditions_Levels_Pkg.h"
#include "IsImmediateOrder_Levels_Pkg.h"
#include "IsDriverSelection_Levels_Pkg.h"
#include "LevelStateMachine_Levels_Pkg.h"
#include "DriverAck_Levels_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* Levels_Pkg::computeLeveLTransitions::next_level */ next_level;
  kcg_bool /* Levels_Pkg::computeLeveLTransitions::TripTrain */ TripTrain;
  M_LEVEL /* Levels_Pkg::computeLeveLTransitions::previous_level */ previous_level;
  kcg_bool /* Levels_Pkg::computeLeveLTransitions::needsAckFromDriver */ needsAckFromDriver;
  M_LEVEL /* Levels_Pkg::computeLeveLTransitions::requestedLevel */ requestedLevel;
  kcg_bool /* Levels_Pkg::computeLeveLTransitions::announce_driver_selection */ announce_driver_selection;
  kcg_bool /* Levels_Pkg::computeLeveLTransitions::service_brake */ service_brake;
  kcg_bool /* Levels_Pkg::computeLeveLTransitions::transitionPositionPassed */ transitionPositionPassed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Levels_Pkg::computeLeveLTransitions::LastLevel */ LastLevel;
  kcg_bool /* Levels_Pkg::computeLeveLTransitions::transitionPositionPassed */ rem_transitionPositionPassed;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* Levels_Pkg::computeLeveLTransitions::level_transition */ rem_level_transition;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DriverAck_Levels_Pkg /* 1 */ _1_Context_1;
  outC_LevelStateMachine_Levels_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_computeLeveLTransitions_Levels_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Levels_Pkg::computeLeveLTransitions */
extern void computeLeveLTransitions_Levels_Pkg(
  /* Levels_Pkg::computeLeveLTransitions::getAck */kcg_bool getAck,
  /* Levels_Pkg::computeLeveLTransitions::currentDistance */kcg_int currentDistance,
  /* Levels_Pkg::computeLeveLTransitions::ackDistance */kcg_int ackDistance,
  /* Levels_Pkg::computeLeveLTransitions::immediateAck */kcg_bool immediateAck,
  /* Levels_Pkg::computeLeveLTransitions::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* Levels_Pkg::computeLeveLTransitions::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* Levels_Pkg::computeLeveLTransitions::received_L1_MA */kcg_bool received_L1_MA,
  /* Levels_Pkg::computeLeveLTransitions::received_target_speed */kcg_bool received_target_speed,
  /* Levels_Pkg::computeLeveLTransitions::startOfMissionEnded */kcg_bool startOfMissionEnded,
  outC_computeLeveLTransitions_Levels_Pkg *outC);

extern void computeLeveLTransitions_reset_Levels_Pkg(
  outC_computeLeveLTransitions_Levels_Pkg *outC);

#endif /* _computeLeveLTransitions_Levels_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** computeLeveLTransitions_Levels_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

