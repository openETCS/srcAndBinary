/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectNormalTransition */
void SelectNormalTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectNormalTransition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectNormalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectNormalTransition::level_transition_table */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_table,
  /* LevelTransitionSelection::SelectNormalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectNormalTransition::output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition)
{
  /* LevelTransitionSelection::SelectNormalTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg acc;
  /* LevelTransitionSelection::SelectNormalTransition */ kcg_bool cond_iterw;
  kcg_int i;
  /* LevelTransitionSelection::SelectNormalTransition::Loc_index */ kcg_int Loc_index;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    output_level_transition,
    last_level_transition);
  /* 1 */ for (i = 0; i < 7; i++) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &acc,
      output_level_transition);
    /* 1 */
    IsSelectedTransition_LevelTransitionSelection(
      &acc,
      &(*level_transition_table)[i],
      ERTMS_capabilities,
      &cond_iterw,
      output_level_transition);
    Loc_index = i + 1;
    /* 1 */ if (!cond_iterw) {
      break;
    }
  }
  /* 1 */ if (Loc_index <
    M_Max_TransitionInPriorityTable_Level_And_Mode_Types_Pkg) {
    *Available_for_use = kcg_true;
  }
  else {
    *Available_for_use = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectNormalTransition_LevelTransitionSelection.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

