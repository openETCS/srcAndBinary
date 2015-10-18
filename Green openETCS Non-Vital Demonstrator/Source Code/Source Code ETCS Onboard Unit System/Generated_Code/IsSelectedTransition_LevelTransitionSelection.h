/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _IsSelectedTransition_LevelTransitionSelection_H_
#define _IsSelectedTransition_LevelTransitionSelection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelTransitionSelection::IsSelectedTransition */
extern void IsSelectedTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::IsSelectedTransition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::IsSelectedTransition::available_transition_not_selected */ kcg_bool *available_transition_not_selected,
  /* LevelTransitionSelection::IsSelectedTransition::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition);

#endif /* _IsSelectedTransition_LevelTransitionSelection_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** IsSelectedTransition_LevelTransitionSelection.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */

