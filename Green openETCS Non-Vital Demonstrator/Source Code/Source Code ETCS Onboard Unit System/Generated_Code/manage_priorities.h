/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _manage_priorities_H_
#define _manage_priorities_H_

#include "kcg_types.h"
#include "SelectHighestPriorityTransition.h"
#include "ContainsLevel.h"

/* =====================  no input structure  ====================== */


/* manage_priorities */
extern void manage_priorities(
  /* manage_priorities::current_level */M_LEVEL current_level,
  /* manage_priorities::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* manage_priorities::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* manage_priorities::train_standstill */kcg_bool train_standstill,
  /* manage_priorities::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* manage_priorities::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* manage_priorities::output_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition);

#endif /* _manage_priorities_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** manage_priorities.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

