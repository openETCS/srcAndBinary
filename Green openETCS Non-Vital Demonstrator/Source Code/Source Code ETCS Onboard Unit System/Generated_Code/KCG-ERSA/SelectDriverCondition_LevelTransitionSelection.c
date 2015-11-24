/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectDriverCondition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectDriverCondition */
void SelectDriverCondition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectDriverCondition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectDriverCondition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectDriverCondition::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::driver_output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_output_level_transition)
{
  /* 1 */ if (train_standstill & (*driver_level_transition).is_set &
    !((*driver_level_transition).transition.level == current_level)) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      driver_output_level_transition,
      driver_level_transition);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      driver_output_level_transition,
      last_level_transition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectDriverCondition_LevelTransitionSelection.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

