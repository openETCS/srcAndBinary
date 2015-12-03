/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _SelectNormalTransition_LevelTr
#define _SelectNormalTransition_LevelTr

#include "kcg_types.h"
#include "IsSelectedTransition_LevelTrans.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelTransitionSelection::SelectNormalTransition */
extern void SelectNormalTransition_LevelTra(
  /* LevelTransitionSelection::SelectNormalTransition::last_level_transition */ T_LevelTransition_Level_And_Mod *last_level_transition,
  /* LevelTransitionSelection::SelectNormalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectNormalTransition::level_transition_table */ T_LevelTransition_PriorityTable *level_transition_table,
  /* LevelTransitionSelection::SelectNormalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectNormalTransition::output_level_transition */ T_LevelTransition_Level_And_Mod *output_level_transition);

#endif /* _SelectNormalTransition_LevelTr */
/* $**************** KCG Version 6.4 (build i21) ****************
** SelectNormalTransition_LevelTra.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */

