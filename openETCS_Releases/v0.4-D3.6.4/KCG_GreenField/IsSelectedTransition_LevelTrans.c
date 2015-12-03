/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsSelectedTransition_LevelTrans.h"

/* LevelTransitionSelection::IsSelectedTransition */
void IsSelectedTransition_LevelTrans(
  /* LevelTransitionSelection::IsSelectedTransition::last_level_transition */ T_LevelTransition_Level_And_Mod *last_level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::level_transition */ T_LevelTransition_Level_And_Mod *level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities,
  /* LevelTransitionSelection::IsSelectedTransition::available_transition_not_selected */ kcg_bool *available_transition_not_select,
  /* LevelTransitionSelection::IsSelectedTransition::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition)
{
  /* LevelTransitionSelection::IsSelectedTransition */
  static kcg_bool tmp;
  
  /* ck_Loc_is_valid */ if ((*level_transition).is_set) {
    kcg_copy_T_LevelTransition_Leve(
      selected_level_transition,
      level_transition);
  }
  else {
    kcg_copy_T_LevelTransition_Leve(
      selected_level_transition,
      last_level_transition);
  }
  switch ((*level_transition).transition.level) {
    case M_LEVEL_Level_3 :
      tmp = (*ERTMS_capabilities).L3;
      break;
    case M_LEVEL_Level_2 :
      tmp = (*ERTMS_capabilities).L2;
      break;
    case M_LEVEL_Level_1 :
      tmp = (*ERTMS_capabilities).L1;
      break;
    case M_LEVEL_Level_0 :
      tmp = (*ERTMS_capabilities).L0;
      break;
    case M_LEVEL_Level_NTC_specified_by_ :
      tmp = (*ERTMS_capabilities).NTC;
      break;
    
  }
  *available_transition_not_select = !((*level_transition).is_set & tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsSelectedTransition_LevelTrans.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

