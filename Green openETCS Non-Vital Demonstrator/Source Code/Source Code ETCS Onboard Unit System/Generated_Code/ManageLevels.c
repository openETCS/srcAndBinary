/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevels.h"

void ManageLevels_reset(outC_ManageLevels *outC)
{
  outC->init = kcg_true;
  /* 1 */ computeLeveLTransitions_reset(&outC->Context_1);
}

/* ManageLevels */
void ManageLevels(
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
  outC_ManageLevels *outC)
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
  manage_priorities(
    tmp,
    conditional_transition,
    level_transition_priority_table,
    train_standstill,
    driver_level_transition,
    ERTMS_capabilities,
    &tmp1);
  /* 1 */
  computeLeveLTransitions(
    getAck,
    currentDistance,
    ackDistance,
    immediateAck,
    &tmp1,
    received_L2_L3_MA,
    received_L1_MA,
    received_target_speed,
    &outC->Context_1);
  outC->next_level = outC->Context_1.next_level;
  outC->TripTrain = outC->Context_1.TripTrain;
  outC->previous_level = outC->Context_1.previous_level;
  outC->needsAckFromDriver = outC->Context_1.needsAckFromDriver;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->announced_level,
    &outC->Context_1.announced_level);
  outC->announce_driver_selection = outC->Context_1.announce_driver_selection;
  outC->service_brake = outC->Context_1.service_brake;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevels.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

