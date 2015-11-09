/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _SelectDriverCondition_LevelTransitionSelection_H_
#define _SelectDriverCondition_LevelTransitionSelection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* LevelTransitionSelection::SelectDriverCondition */
extern void SelectDriverCondition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectDriverCondition::current_level */M_LEVEL current_level,
  /* LevelTransitionSelection::SelectDriverCondition::train_standstill */kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectDriverCondition::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::last_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::driver_output_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_output_level_transition);

#endif /* _SelectDriverCondition_LevelTransitionSelection_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectDriverCondition_LevelTransitionSelection.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */

