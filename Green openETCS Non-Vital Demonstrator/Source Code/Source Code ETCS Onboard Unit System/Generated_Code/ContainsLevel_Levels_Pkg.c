/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContainsLevel_Levels_Pkg.h"

/* Levels_Pkg::ContainsLevel */
kcg_bool ContainsLevel_Levels_Pkg(
  /* Levels_Pkg::ContainsLevel::conditional_transition_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition_table,
  /* Levels_Pkg::ContainsLevel::current_level */M_LEVEL current_level)
{
  static kcg_int i;
  /* Levels_Pkg::ContainsLevel::is_compatible */
  static kcg_bool is_compatible;
  
  is_compatible = kcg_false;
  for (i = 0; i < 5; i++) {
    is_compatible = is_compatible | /* 1 */
      LevelEquivalenceSetTransition_Levels_Pkg(
        &(*conditional_transition_table)[i],
        current_level);
  }
  return is_compatible;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ContainsLevel_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

