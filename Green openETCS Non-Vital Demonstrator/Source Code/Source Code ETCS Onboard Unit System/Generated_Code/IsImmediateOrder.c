/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsImmediateOrder.h"

/* IsImmediateOrder */
kcg_bool IsImmediateOrder(
  /* IsImmediateOrder::transition_order */T_LevelTransition_Level_And_Mode_Types_Pkg *transition_order)
{
  /* IsImmediateOrder::is_immediate */
  static kcg_bool is_immediate;
  
  is_immediate = ((*transition_order).is_set &
      (C_Immediate_transition_order_position_Level_And_Mode_Types_Pkg ==
        (*transition_order).transition.position)) |
    ((*transition_order).transition.transitionType ==
      M_TransitionType_Immediate_Level_And_Mode_Types_Pkg);
  return is_immediate;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsImmediateOrder.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

