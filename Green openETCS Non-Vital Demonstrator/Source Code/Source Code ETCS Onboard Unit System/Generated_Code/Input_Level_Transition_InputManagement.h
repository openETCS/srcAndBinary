/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _Input_Level_Transition_InputManagement_H_
#define _Input_Level_Transition_InputManagement_H_

#include "kcg_types.h"
#include "LevelTR2Level_InputManagement.h"

/* =====================  no input structure  ====================== */


/* InputManagement::Input_Level_Transition */
extern void Input_Level_Transition_InputManagement(
  /* InputManagement::Input_Level_Transition::P_41 */P41_LevelTransistionOrders_T_Packet_Types_Pkg *P_41,
  /* InputManagement::Input_Level_Transition::P_46 */P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *P_46,
  /* InputManagement::Input_Level_Transition::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* InputManagement::Input_Level_Transition::ackDistance */kcg_int *ackDistance,
  /* InputManagement::Input_Level_Transition::immediateAck */kcg_bool *immediateAck);

#endif /* _Input_Level_Transition_InputManagement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_Level_Transition_InputManagement.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

