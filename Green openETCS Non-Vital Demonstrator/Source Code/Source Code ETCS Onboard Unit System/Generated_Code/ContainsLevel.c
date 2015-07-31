/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContainsLevel.h"

/* ContainsLevel */
kcg_bool ContainsLevel(
  /* ContainsLevel::conditional_transition_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition_table,
  /* ContainsLevel::current_level */M_LEVEL current_level)
{
  static kcg_int i;
  /* ContainsLevel::is_compatible */
  static kcg_bool is_compatible;
  
  is_compatible = kcg_false;
  for (i = 0; i < 5; i++) {
    is_compatible = is_compatible | /* 1 */
      LevelEquivalenceSetTransition(
        &(*conditional_transition_table)[i],
        current_level);
  }
  return is_compatible;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ContainsLevel.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

