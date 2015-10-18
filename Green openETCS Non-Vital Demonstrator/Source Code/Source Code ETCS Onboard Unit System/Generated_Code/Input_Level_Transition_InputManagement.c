/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Level_Transition_InputManagement.h"

/* InputManagement::Input_Level_Transition */
void Input_Level_Transition_InputManagement(
  /* InputManagement::Input_Level_Transition::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::Input_Level_Transition::conditional_transition */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 7; i++) {
    /* ConditionnalTransition */
    ConditionnalTransition_InputManagement(
      (*Data_From_Track_Packets).LRBG,
      (*Data_From_Track_Packets).referenceLocation,
      &(*Data_From_Track_Packets).P_46[i],
      &(*conditional_transition)[i]);
    /* NormalTransition */
    NormalTransition_InputManagement(
      (*Data_From_Track_Packets).LRBG,
      (*Data_From_Track_Packets).referenceLocation,
      &(*Data_From_Track_Packets).P_41[i],
      &(*level_transition_priority_table)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Level_Transition_InputManagement.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

