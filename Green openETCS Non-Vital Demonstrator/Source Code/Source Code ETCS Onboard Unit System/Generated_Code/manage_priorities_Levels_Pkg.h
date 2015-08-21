/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _manage_priorities_Levels_Pkg_H_
#define _manage_priorities_Levels_Pkg_H_

#include "kcg_types.h"
#include "SelectHighestPriorityTransition_Levels_Pkg.h"
#include "ContainsLevel_Levels_Pkg.h"

/* =====================  no input structure  ====================== */


/* Levels_Pkg::manage_priorities */
extern void manage_priorities_Levels_Pkg(
  /* Levels_Pkg::manage_priorities::current_level */M_LEVEL current_level,
  /* Levels_Pkg::manage_priorities::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* Levels_Pkg::manage_priorities::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* Levels_Pkg::manage_priorities::train_standstill */kcg_bool train_standstill,
  /* Levels_Pkg::manage_priorities::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* Levels_Pkg::manage_priorities::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Levels_Pkg::manage_priorities::output_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition);

#endif /* _manage_priorities_Levels_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** manage_priorities_Levels_Pkg.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

