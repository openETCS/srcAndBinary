/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _ManageLevels_H_
#define _ManageLevels_H_

#include "kcg_types.h"
#include "manage_priorities.h"
#include "computeLeveLTransitions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* ManageLevels::next_level */ next_level;
  kcg_bool /* ManageLevels::TripTrain */ TripTrain;
  M_LEVEL /* ManageLevels::previous_level */ previous_level;
  kcg_bool /* ManageLevels::needsAckFromDriver */ needsAckFromDriver;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* ManageLevels::announced_level */ announced_level;
  kcg_bool /* ManageLevels::announce_driver_selection */ announce_driver_selection;
  kcg_bool /* ManageLevels::service_brake */ service_brake;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_computeLeveLTransitions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageLevels;

/* ===========  node initialization and cycle functions  =========== */
/* ManageLevels */
extern void ManageLevels(
  /* ManageLevels::train_standstill */kcg_bool train_standstill,
  /* ManageLevels::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* ManageLevels::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* ManageLevels::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* ManageLevels::getAck */kcg_bool getAck,
  /* ManageLevels::currentDistance */kcg_int currentDistance,
  /* ManageLevels::ackDistance */kcg_int ackDistance,
  /* ManageLevels::immediateAck */kcg_bool immediateAck,
  /* ManageLevels::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* ManageLevels::received_L2_L3_MA */kcg_bool received_L2_L3_MA,
  /* ManageLevels::received_L1_MA */kcg_bool received_L1_MA,
  /* ManageLevels::received_target_speed */kcg_bool received_target_speed,
  outC_ManageLevels *outC);

extern void ManageLevels_reset(outC_ManageLevels *outC);

#endif /* _ManageLevels_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevels.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

