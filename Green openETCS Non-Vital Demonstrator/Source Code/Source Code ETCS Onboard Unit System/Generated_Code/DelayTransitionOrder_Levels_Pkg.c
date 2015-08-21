/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-19T12:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DelayTransitionOrder_Levels_Pkg.h"

void DelayTransitionOrder_reset_Levels_Pkg(
  outC_DelayTransitionOrder_Levels_Pkg *outC)
{
  outC->init = kcg_true;
}

/* Levels_Pkg::DelayTransitionOrder */
void DelayTransitionOrder_Levels_Pkg(
  /* Levels_Pkg::DelayTransitionOrder::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* Levels_Pkg::DelayTransitionOrder::transitionReset */kcg_bool transitionReset,
  outC_DelayTransitionOrder_Levels_Pkg *outC)
{
  static T_LevelTransition_Level_And_Mode_Types_Pkg tmp;
  /* Levels_Pkg::DelayTransitionOrder::TransitionIsSet */
  static kcg_bool TransitionIsSet;
  
  if ((*level_transition).is_set) {
    if (outC->init) {
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &tmp,
        (T_LevelTransition_Level_And_Mode_Types_Pkg *)
          &M_Default_Transition_Level_And_Mode_Types_Pkg);
    }
    else {
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &tmp,
        &outC->rem_level_transition);
    }
    TransitionIsSet = !kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
        level_transition,
        &tmp);
  }
  else {
    TransitionIsSet = kcg_false;
  }
  outC->out_transitionKnown = !TransitionIsSet;
  if (TransitionIsSet) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->out_transition,
      level_transition);
  }
  else if (outC->init) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->out_transition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
  }
  outC->init = kcg_false;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->rem_level_transition,
    level_transition);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DelayTransitionOrder_Levels_Pkg.c
** Generation date: 2015-08-19T12:47:26
*************************************************************$ */

