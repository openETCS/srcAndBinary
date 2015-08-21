/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _ManageLevels_Levels_Pkg_H_
#define _ManageLevels_Levels_Pkg_H_

#include "kcg_types.h"
#include "manage_priorities_Levels_Pkg.h"
#include "computeLeveLTransitions_Levels_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* Levels_Pkg::ManageLevels::next_level */ next_level;
  kcg_bool /* Levels_Pkg::ManageLevels::TripTrain */ TripTrain;
  M_LEVEL /* Levels_Pkg::ManageLevels::previous_level */ previous_level;
  kcg_bool /* Levels_Pkg::ManageLevels::needsAckFromDriver */ needsAckFromDriver;
  M_LEVEL /* Levels_Pkg::ManageLevels::requestedLevel */ requestedLevel;
  kcg_bool /* Levels_Pkg::ManageLevels::announce_driver_selection */ announce_driver_selection;
  kcg_bool /* Levels_Pkg::ManageLevels::service_brake */ service_brake;
  kcg_bool /* Levels_Pkg::ManageLevels::transitionPositionPassed */ transitionPositionPassed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_computeLeveLTransitions_Levels_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageLevels_Levels_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Levels_Pkg::ManageLevels */
extern void ManageLevels_Levels_Pkg(
  /* Levels_Pkg::ManageLevels::train_standstill */kcg_bool train_standstill,
  /* Levels_Pkg::ManageLevels::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* Levels_Pkg::ManageLevels::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* Levels_Pkg::ManageLevels::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* Levels_Pkg::ManageLevels::getAck */kcg_bool getAck,
  /* Levels_Pkg::ManageLevels::currentDistance */kcg_int currentDistance,
  /* Levels_Pkg::ManageLevels::ackDistance */kcg_int ackDistance,
  /* Levels_Pkg::ManageLevels::immediateAck */kcg_bool immediateAck,
  /* Levels_Pkg::ManageLevels::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Levels_Pkg::ManageLevels::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* Levels_Pkg::ManageLevels::received_L1_MA */kcg_bool received_L1_MA,
  /* Levels_Pkg::ManageLevels::received_target_speed */kcg_bool received_target_speed,
  /* Levels_Pkg::ManageLevels::startOfMissionEnded */kcg_bool startOfMissionEnded,
  outC_ManageLevels_Levels_Pkg *outC);

extern void ManageLevels_reset_Levels_Pkg(outC_ManageLevels_Levels_Pkg *outC);

#endif /* _ManageLevels_Levels_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevels_Levels_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

