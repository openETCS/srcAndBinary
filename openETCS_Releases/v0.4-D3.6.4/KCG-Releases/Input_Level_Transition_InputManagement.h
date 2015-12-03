/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */
#ifndef _Input_Level_Transition_InputManagement_H_
#define _Input_Level_Transition_InputManagement_H_

#include "kcg_types.h"
#include "ConditionnalTransition_InputManagement.h"
#include "NormalTransition_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InputManagement::Input_Level_Transition */
extern void Input_Level_Transition_InputManagement(
  /* InputManagement::Input_Level_Transition::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::Input_Level_Transition::conditional_transition */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table);

#endif /* _Input_Level_Transition_InputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Level_Transition_InputManagement.h
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */

