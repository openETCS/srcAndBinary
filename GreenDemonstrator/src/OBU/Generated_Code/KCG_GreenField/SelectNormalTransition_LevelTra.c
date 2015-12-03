/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectNormalTransition_LevelTra.h"

/* LevelTransitionSelection::SelectNormalTransition */
void SelectNormalTransition_LevelTra(
  /* LevelTransitionSelection::SelectNormalTransition::last_level_transition */ T_LevelTransition_Level_And_Mod *last_level_transition,
  /* LevelTransitionSelection::SelectNormalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectNormalTransition::level_transition_table */ T_LevelTransition_PriorityTable *level_transition_table,
  /* LevelTransitionSelection::SelectNormalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectNormalTransition::output_level_transition */ T_LevelTransition_Level_And_Mod *output_level_transition)
{
  /* LevelTransitionSelection::SelectNormalTransition */
  static T_LevelTransition_Level_And_Mod acc;
  /* LevelTransitionSelection::SelectNormalTransition */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* LevelTransitionSelection::SelectNormalTransition::Loc_index */
  static kcg_int Loc_index;
  
  kcg_copy_T_LevelTransition_Leve(
    output_level_transition,
    last_level_transition);
  /* 1 */ for (i = 0; i < 7; i++) {
    kcg_copy_T_LevelTransition_Leve(&acc, output_level_transition);
    /* 1 */
    IsSelectedTransition_LevelTrans(
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
  /* 1 */ if (Loc_index < M_Max_TransitionInPriorityTable) {
    *Available_for_use = kcg_true;
  }
  else {
    *Available_for_use = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectNormalTransition_LevelTra.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

