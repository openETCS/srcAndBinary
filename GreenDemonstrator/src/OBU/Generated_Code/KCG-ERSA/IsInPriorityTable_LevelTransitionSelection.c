/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsInPriorityTable_LevelTransitionSelection.h"

/* LevelTransitionSelection::IsInPriorityTable */
kcg_bool IsInPriorityTable_LevelTransitionSelection(
  /* LevelTransitionSelection::IsInPriorityTable::In_same_level_and_set */ kcg_bool In_same_level_and_set,
  /* LevelTransitionSelection::IsInPriorityTable::level */ M_LEVEL level,
  /* LevelTransitionSelection::IsInPriorityTable::level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition)
{
  /* LevelTransitionSelection::IsInPriorityTable::same_level_and_set */ kcg_bool same_level_and_set;
  
  same_level_and_set = In_same_level_and_set | ((*level_transition).is_set &
      (level == (*level_transition).transition.level));
  return same_level_and_set;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsInPriorityTable_LevelTransitionSelection.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

