/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectHighestPriorityTransition_Levels_Pkg.h"

/* Levels_Pkg::SelectHighestPriorityTransition */
void SelectHighestPriorityTransition_Levels_Pkg(
  /* Levels_Pkg::SelectHighestPriorityTransition::PriorityTable */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *PriorityTable,
  /* Levels_Pkg::SelectHighestPriorityTransition::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Levels_Pkg::SelectHighestPriorityTransition::levelTransition */T_LevelTransition_Level_And_Mode_Types_Pkg *levelTransition)
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
    compareTransitions_Levels_Pkg(
      &tmp,
      &(*PriorityTable)[i],
      ERTMS_capabilities,
      levelTransition);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectHighestPriorityTransition_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

