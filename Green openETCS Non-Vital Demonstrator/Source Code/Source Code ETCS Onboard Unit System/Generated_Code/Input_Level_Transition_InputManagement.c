/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Level_Transition_InputManagement.h"

/* InputManagement::Input_Level_Transition */
void Input_Level_Transition_InputManagement(
  /* InputManagement::Input_Level_Transition::P_41 */P41_LevelTransistionOrders_T_Packet_Types_Pkg *P_41,
  /* InputManagement::Input_Level_Transition::P_46 */P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *P_46,
  /* InputManagement::Input_Level_Transition::LRBG */NID_LRBG LRBG,
  /* InputManagement::Input_Level_Transition::referenceLocation */L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::Input_Level_Transition::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* InputManagement::Input_Level_Transition::ackDistance */kcg_int *ackDistance,
  /* InputManagement::Input_Level_Transition::immediateAck */kcg_bool *immediateAck)
{
  static T_TransitionType_Level_And_Mode_Types_Pkg tmp;
  static kcg_int i;
  /* InputManagement::Input_Level_Transition::_L26 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L26;
  
  _L26.is_set = (*P_46)[0].valid;
  _L26.LRBG = LRBG;
  _L26.referenceLocation = referenceLocation;
  *immediateAck = (cImmediateAck_Distance_InputManagement ==
      (*P_41)[0].d_leveltr) & (*P_41)[0].valid;
  *ackDistance = /* 2 */
    scaledDistance_2_distance_InputManagement(
      (*P_41)[0].q_scale,
      (*P_41)[0].l_ackleveltr);
  _L26.transition.level = /* 2 */
    LevelTR2Level_InputManagement((*P_46)[0].m_leveltr);
  _L26.transition.position = 0;
  _L26.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  for (i = 0; i < 5; i++) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &(*conditional_transition)[i],
      &_L26);
  }
  _L26.is_set = (*P_41)[0].valid;
  _L26.LRBG = LRBG;
  _L26.referenceLocation = referenceLocation;
  if (*immediateAck) {
    tmp = M_TransitionType_Immediate_Level_And_Mode_Types_Pkg;
  }
  else {
    tmp = M_TransitionType_Normal_Level_And_Mode_Types_Pkg;
  }
  _L26.transition.level = /* 1 */
    LevelTR2Level_InputManagement((*P_41)[0].m_leveltr);
  _L26.transition.position = /* 1 */
    scaledDistance_2_distance_InputManagement(
      (*P_41)[0].q_scale,
      (*P_41)[0].d_leveltr);
  _L26.transition.transitionType = tmp;
  for (i = 0; i < 5; i++) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &(*level_transition_priority_table)[i],
      &_L26);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_Level_Transition_InputManagement.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

