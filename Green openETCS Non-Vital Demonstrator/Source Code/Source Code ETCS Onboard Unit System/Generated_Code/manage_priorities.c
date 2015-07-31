/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manage_priorities.h"

/* manage_priorities */
void manage_priorities(
  /* manage_priorities::current_level */M_LEVEL current_level,
  /* manage_priorities::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* manage_priorities::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* manage_priorities::train_standstill */kcg_bool train_standstill,
  /* manage_priorities::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* manage_priorities::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* manage_priorities::output_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition)
{
  /* manage_priorities::decide_transition_priority::else */
  static kcg_bool _2_else_clock_decide_transition_priority;
  /* manage_priorities::decide_transition_priority::else::else::else */
  static kcg_bool else_clock_decide_transition_priority;
  /* manage_priorities::decide_transition_priority::else::else */
  static kcg_bool _1_else_clock_decide_transition_priority;
  /* manage_priorities::conditional_trans */
  static T_LevelTransition_Level_And_Mode_Types_Pkg conditional_trans;
  /* manage_priorities::level_trans */
  static T_LevelTransition_Level_And_Mode_Types_Pkg level_trans;
  /* manage_priorities::conditional_compatible */
  static kcg_bool conditional_compatible;
  
  /* 5 */
  SelectHighestPriorityTransition(
    conditional_transition,
    ERTMS_capabilities,
    &conditional_trans);
  conditional_compatible = /* 1 */
    ContainsLevel(conditional_transition, current_level);
  /* 1 */
  SelectHighestPriorityTransition(
    level_transition_priority_table,
    ERTMS_capabilities,
    &level_trans);
  if (level_trans.is_set) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      output_level_transition,
      &level_trans);
  }
  else {
    _2_else_clock_decide_transition_priority = !level_trans.is_set &
      conditional_trans.is_set & conditional_compatible;
    if (_2_else_clock_decide_transition_priority) {
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        output_level_transition,
        (T_LevelTransition_Level_And_Mode_Types_Pkg *)
          &M_Default_Transition_Level_And_Mode_Types_Pkg);
    }
    else {
      _1_else_clock_decide_transition_priority = !level_trans.is_set &
        conditional_trans.is_set & !conditional_compatible;
      if (_1_else_clock_decide_transition_priority) {
        kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
          output_level_transition,
          &conditional_trans);
      }
      else {
        else_clock_decide_transition_priority = !(level_trans.is_set |
            conditional_trans.is_set) & ((*driver_level_transition).is_set &
            train_standstill);
        if (else_clock_decide_transition_priority) {
          kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
            output_level_transition,
            driver_level_transition);
        }
        else {
          kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
            output_level_transition,
            (T_LevelTransition_Level_And_Mode_Types_Pkg *)
              &M_Default_Transition_Level_And_Mode_Types_Pkg);
        }
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manage_priorities.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

