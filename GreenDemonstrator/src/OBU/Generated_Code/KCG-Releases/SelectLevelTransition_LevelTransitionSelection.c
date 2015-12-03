/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectLevelTransition_LevelTransitionSelection.h"

#ifndef KCG_USER_DEFINED_INIT
void SelectLevelTransition_init_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  outC->IsAvailableForUse = kcg_true;
  outC->init = kcg_true;
  outC->selected_level_transition.is_set = kcg_true;
  outC->selected_level_transition.transition.level = M_LEVEL_Level_0;
  outC->selected_level_transition.transition.position = 0;
  outC->selected_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->selected_level_transition.transition.immediateAck = kcg_true;
  outC->selected_level_transition.transition.AckLength = 0;
  outC->selected_level_transition.LRBG = 0;
  outC->selected_level_transition.referenceLocation = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SelectLevelTransition_reset_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* LevelTransitionSelection::SelectLevelTransition */
void SelectLevelTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectLevelTransition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectLevelTransition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectLevelTransition::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectLevelTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectLevelTransition::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  /* LevelTransitionSelection::SelectLevelTransition::Loc_conditionnal */
  static T_LevelTransition_Level_And_Mode_Types_Pkg Loc_conditionnal;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_driver */
  static T_LevelTransition_Level_And_Mode_Types_Pkg Loc_driver;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_Normal */
  static T_LevelTransition_Level_And_Mode_Types_Pkg Loc_Normal;
  /* LevelTransitionSelection::SelectLevelTransition::last_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg last_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_Normal_Available */
  static kcg_bool Loc_Normal_Available;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_Conditionnal_Available */
  static kcg_bool Loc_Conditionnal_Available;
  /* LevelTransitionSelection::SelectLevelTransition::_L24 */
  static kcg_bool _L24;
  
  /* last_init_ck_IsAvailableForUse */ if (outC->init) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &last_level_transition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
    outC->init = kcg_false;
    _L24 = kcg_false;
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &last_level_transition,
      &outC->selected_level_transition);
    _L24 = outC->IsAvailableForUse;
  }
  last_level_transition.is_set = kcg_false;
  /* 1 */
  SelectConditionnalTransition_LevelTransitionSelection(
    current_level,
    &(*Data_From_Track_to_Level).conditionnalTransition,
    ERTMS_capabilities,
    &last_level_transition,
    _L24,
    &Loc_Conditionnal_Available,
    &Loc_conditionnal);
  /* 1 */
  SelectDriverCondition_LevelTransitionSelection(
    current_level,
    train_standstill,
    driver_level_transition,
    &last_level_transition,
    &Loc_driver);
  /* 1 */
  SelectNormalTransition_LevelTransitionSelection(
    &last_level_transition,
    ERTMS_capabilities,
    &(*Data_From_Track_to_Level).level_transition_priority_table,
    &Loc_Normal_Available,
    &Loc_Normal);
  /* ck_Loc_conditionnal_set */ if (Loc_conditionnal.is_set) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &Loc_conditionnal);
    outC->IsAvailableForUse = Loc_Conditionnal_Available;
  }
  else /* ck_anon_activ */ if (Loc_Normal.is_set) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &Loc_Normal);
    outC->IsAvailableForUse = Loc_Normal_Available;
  }
  else /* ck_anon_activ */ if (Loc_driver.is_set) {
    outC->IsAvailableForUse = kcg_true;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &Loc_driver);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &last_level_transition);
    outC->IsAvailableForUse = _L24;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectLevelTransition_LevelTransitionSelection.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

