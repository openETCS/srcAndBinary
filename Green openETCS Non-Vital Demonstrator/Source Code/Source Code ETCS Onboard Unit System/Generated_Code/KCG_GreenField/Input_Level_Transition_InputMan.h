/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _Input_Level_Transition_InputMa
#define _Input_Level_Transition_InputMa

#include "kcg_types.h"
#include "ConditionnalTransition_InputMan.h"
#include "NormalTransition_InputManagemen.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InputManagement::Input_Level_Transition */
extern void Input_Level_Transition_InputMan(
  /* InputManagement::Input_Level_Transition::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_ *Data_From_Track_Packets,
  /* InputManagement::Input_Level_Transition::conditional_transition */ T_LevelTransition_PriorityTable *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */ T_LevelTransition_PriorityTable *level_transition_priority_table);

#endif /* _Input_Level_Transition_InputMa */
/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Level_Transition_InputMan.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */

