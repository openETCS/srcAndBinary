/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectDriverCondition_LevelTran.h"

/* LevelTransitionSelection::SelectDriverCondition */
void SelectDriverCondition_LevelTran(
  /* LevelTransitionSelection::SelectDriverCondition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectDriverCondition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectDriverCondition::driver_level_transition */ T_LevelTransition_Level_And_Mod *driver_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::last_level_transition */ T_LevelTransition_Level_And_Mod *last_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::driver_output_level_transition */ T_LevelTransition_Level_And_Mod *driver_output_level_transition)
{
  /* 1 */ if (train_standstill & (*driver_level_transition).is_set &
    !((*driver_level_transition).transition.level == current_level)) {
    kcg_copy_T_LevelTransition_Leve(
      driver_output_level_transition,
      driver_level_transition);
  }
  else {
    kcg_copy_T_LevelTransition_Leve(
      driver_output_level_transition,
      last_level_transition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectDriverCondition_LevelTran.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

