/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectConditionnalTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectConditionnalTransition */
void SelectConditionnalTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectConditionnalTransition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectConditionnalTransition::conditional_transition */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_available_for_use */ kcg_bool last_available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition)
{
  kcg_int i;
  /* LevelTransitionSelection::SelectConditionnalTransition::Loc_contain_current_level */ kcg_bool Loc_contain_current_level;
  
  Loc_contain_current_level = kcg_false;
  /* 2 */ for (i = 0; i < 7; i++) {
    Loc_contain_current_level = /* 1 */
      IsInPriorityTable_LevelTransitionSelection(
        Loc_contain_current_level,
        current_level,
        &(*conditional_transition)[i]);
  }
  /* ck_Loc_contain_current_level */ if (Loc_contain_current_level) {
    *Available_for_use = last_available_for_use;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      output_level_transition,
      last_level_transition);
  }
  else {
    /* 1 */
    SelectNormalTransition_LevelTransitionSelection(
      last_level_transition,
      ERTMS_capabilities,
      conditional_transition,
      Available_for_use,
      output_level_transition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectConditionnalTransition_LevelTransitionSelection.c
** Generation date: 2015-12-07T14:47:41
*************************************************************$ */

