/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevels_Levels_Pkg.h"

void ManageLevels_reset_Levels_Pkg(outC_ManageLevels_Levels_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ computeLeveLTransitions_reset_Levels_Pkg(&outC->Context_1);
}

/* Levels_Pkg::ManageLevels */
void ManageLevels_Levels_Pkg(
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
  outC_ManageLevels_Levels_Pkg *outC)
{
  static T_LevelTransition_Level_And_Mode_Types_Pkg tmp1;
  static M_LEVEL tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->next_level;
  }
  /* 1 */
  manage_priorities_Levels_Pkg(
    tmp,
    conditional_transition,
    level_transition_priority_table,
    train_standstill,
    driver_level_transition,
    ERTMS_capabilities,
    &tmp1);
  /* 1 */
  computeLeveLTransitions_Levels_Pkg(
    getAck,
    currentDistance,
    ackDistance,
    immediateAck,
    &tmp1,
    received_L2_L3_MA,
    received_L1_MA,
    received_target_speed,
    startOfMissionEnded,
    &outC->Context_1);
  outC->next_level = outC->Context_1.next_level;
  outC->TripTrain = outC->Context_1.TripTrain;
  outC->previous_level = outC->Context_1.previous_level;
  outC->needsAckFromDriver = outC->Context_1.needsAckFromDriver;
  outC->requestedLevel = outC->Context_1.requestedLevel;
  outC->announce_driver_selection = outC->Context_1.announce_driver_selection;
  outC->service_brake = outC->Context_1.service_brake;
  outC->transitionPositionPassed = outC->Context_1.transitionPositionPassed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevels_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

