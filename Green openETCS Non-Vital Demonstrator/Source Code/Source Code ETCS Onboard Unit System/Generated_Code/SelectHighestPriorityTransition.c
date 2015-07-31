/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectHighestPriorityTransition.h"

/* SelectHighestPriorityTransition */
void SelectHighestPriorityTransition(
  /* SelectHighestPriorityTransition::PriorityTable */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *PriorityTable,
  /* SelectHighestPriorityTransition::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* SelectHighestPriorityTransition::levelTransition */T_LevelTransition_Level_And_Mode_Types_Pkg *levelTransition)
{
  static T_LevelTransition_Level_And_Mode_Types_Pkg tmp;
  static kcg_int i;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    levelTransition,
    (T_LevelTransition_Level_And_Mode_Types_Pkg *)
      &M_Default_Transition_Level_And_Mode_Types_Pkg);
  for (i = 0; i < 5; i++) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&tmp, levelTransition);
    /* 1 */
    compareTransitions(
      &tmp,
      &(*PriorityTable)[i],
      ERTMS_capabilities,
      levelTransition);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectHighestPriorityTransition.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

