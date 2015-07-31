/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelEquivalenceSetTransition.h"

/* LevelEquivalenceSetTransition */
kcg_bool LevelEquivalenceSetTransition(
  /* LevelEquivalenceSetTransition::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* LevelEquivalenceSetTransition::level */M_LEVEL level)
{
  /* LevelEquivalenceSetTransition::same_level_and_set */
  static kcg_bool same_level_and_set;
  
  same_level_and_set = (*level_transition).is_set & (level ==
      (*level_transition).transition.level);
  return same_level_and_set;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelEquivalenceSetTransition.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

