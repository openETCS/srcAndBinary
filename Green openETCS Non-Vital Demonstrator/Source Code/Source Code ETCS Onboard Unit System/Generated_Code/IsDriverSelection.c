/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsDriverSelection.h"

/* IsDriverSelection */
kcg_bool IsDriverSelection(
  /* IsDriverSelection::transition_order */T_LevelTransition_Level_And_Mode_Types_Pkg *transition_order)
{
  /* IsDriverSelection::is_driver_selection */
  static kcg_bool is_driver_selection;
  
  is_driver_selection = (*transition_order).transition.transitionType ==
    M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg;
  return is_driver_selection;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsDriverSelection.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

