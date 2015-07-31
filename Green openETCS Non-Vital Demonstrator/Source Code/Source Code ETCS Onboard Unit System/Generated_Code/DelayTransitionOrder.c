/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DelayTransitionOrder.h"

void DelayTransitionOrder_reset(outC_DelayTransitionOrder *outC)
{
  outC->init = kcg_true;
}

/* DelayTransitionOrder */
void DelayTransitionOrder(
  /* DelayTransitionOrder::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  outC_DelayTransitionOrder *outC)
{
  if (kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
      level_transition,
      (struct__78452 *) &M_Default_Transition_Level_And_Mode_Types_Pkg)) {
    if ((*level_transition).is_set) {
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
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->out_transition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DelayTransitionOrder.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

