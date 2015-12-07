/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsInPriorityTable_LevelTransiti.h"

/* LevelTransitionSelection::IsInPriorityTable */
kcg_bool IsInPriorityTable_LevelTransiti(
  /* LevelTransitionSelection::IsInPriorityTable::In_same_level_and_set */ kcg_bool In_same_level_and_set,
  /* LevelTransitionSelection::IsInPriorityTable::level */ M_LEVEL level,
  /* LevelTransitionSelection::IsInPriorityTable::level_transition */ T_LevelTransition_Level_And_Mod *level_transition)
{
  /* LevelTransitionSelection::IsInPriorityTable::same_level_and_set */
  static kcg_bool same_level_and_set;
  
  same_level_and_set = In_same_level_and_set | ((*level_transition).is_set &
      (level == (*level_transition).transition.level));
  return same_level_and_set;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsInPriorityTable_LevelTransiti.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

