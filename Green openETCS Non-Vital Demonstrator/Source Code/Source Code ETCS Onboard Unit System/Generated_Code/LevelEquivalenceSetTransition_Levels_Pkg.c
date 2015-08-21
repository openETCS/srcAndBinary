/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelEquivalenceSetTransition_Levels_Pkg.h"

/* Levels_Pkg::LevelEquivalenceSetTransition */
kcg_bool LevelEquivalenceSetTransition_Levels_Pkg(
  /* Levels_Pkg::LevelEquivalenceSetTransition::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* Levels_Pkg::LevelEquivalenceSetTransition::level */M_LEVEL level)
{
  /* Levels_Pkg::LevelEquivalenceSetTransition::same_level_and_set */
  static kcg_bool same_level_and_set;
  
  same_level_and_set = (*level_transition).is_set & (level ==
      (*level_transition).transition.level);
  return same_level_and_set;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelEquivalenceSetTransition_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

