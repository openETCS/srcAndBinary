/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectConditionnalTransition_Le.h"

/* LevelTransitionSelection::SelectConditionnalTransition */
void SelectConditionnalTransition_Le(
  /* LevelTransitionSelection::SelectConditionnalTransition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectConditionnalTransition::conditional_transition */ T_LevelTransition_PriorityTable *conditional_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_level_transition */ T_LevelTransition_Level_And_Mod *last_level_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_available_for_use */ kcg_bool last_available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::output_level_transition */ T_LevelTransition_Level_And_Mod *output_level_transition)
{
  static kcg_int i;
  /* LevelTransitionSelection::SelectConditionnalTransition::Loc_contain_current_level */
  static kcg_bool Loc_contain_current_level;
  
  Loc_contain_current_level = kcg_false;
  /* 2 */ for (i = 0; i < 7; i++) {
    Loc_contain_current_level = /* 1 */
      IsInPriorityTable_LevelTransiti(
        Loc_contain_current_level,
        current_level,
        &(*conditional_transition)[i]);
  }
  /* ck_Loc_contain_current_level */ if (Loc_contain_current_level) {
    *Available_for_use = last_available_for_use;
    kcg_copy_T_LevelTransition_Leve(
      output_level_transition,
      last_level_transition);
  }
  else {
    /* 1 */
    SelectNormalTransition_LevelTra(
      last_level_transition,
      ERTMS_capabilities,
      conditional_transition,
      Available_for_use,
      output_level_transition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectConditionnalTransition_Le.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

