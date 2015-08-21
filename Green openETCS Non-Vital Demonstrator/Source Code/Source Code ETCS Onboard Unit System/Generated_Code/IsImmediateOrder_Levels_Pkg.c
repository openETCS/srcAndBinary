/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsImmediateOrder_Levels_Pkg.h"

/* Levels_Pkg::IsImmediateOrder */
kcg_bool IsImmediateOrder_Levels_Pkg(
  /* Levels_Pkg::IsImmediateOrder::transition_order */T_LevelTransition_Level_And_Mode_Types_Pkg *transition_order)
{
  /* Levels_Pkg::IsImmediateOrder::is_immediate */
  static kcg_bool is_immediate;
  
  is_immediate = (*transition_order).is_set &
    ((C_Immediate_transition_order_position_Level_And_Mode_Types_Pkg ==
        (*transition_order).transition.position) |
      ((*transition_order).transition.transitionType ==
        M_TransitionType_Immediate_Level_And_Mode_Types_Pkg));
  return is_immediate;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsImmediateOrder_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

