/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsInPriorityTable_LevelTransitionSelection.h"

/* LevelTransitionSelection::IsInPriorityTable */
kcg_bool IsInPriorityTable_LevelTransitionSelection(
  /* LevelTransitionSelection::IsInPriorityTable::In_same_level_and_set */kcg_bool In_same_level_and_set,
  /* LevelTransitionSelection::IsInPriorityTable::level */M_LEVEL level,
  /* LevelTransitionSelection::IsInPriorityTable::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition)
{
  /* LevelTransitionSelection::IsInPriorityTable::same_level_and_set */
  static kcg_bool same_level_and_set;
  
  same_level_and_set = In_same_level_and_set | ((*level_transition).is_set &
      (level == (*level_transition).transition.level));
  return same_level_and_set;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsInPriorityTable_LevelTransitionSelection.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

