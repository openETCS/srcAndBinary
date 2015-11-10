/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Level_Transition_InputMan.h"

/* InputManagement::Input_Level_Transition */
void Input_Level_Transition_InputMan(
  /* InputManagement::Input_Level_Transition::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_ *Data_From_Track_Packets,
  /* InputManagement::Input_Level_Transition::conditional_transition */ T_LevelTransition_PriorityTable *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */ T_LevelTransition_PriorityTable *level_transition_priority_table)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 7; i++) {
    /* ConditionnalTransition */
    ConditionnalTransition_InputMan(
      (*Data_From_Track_Packets).LRBG,
      (*Data_From_Track_Packets).referenceLocation,
      &(*Data_From_Track_Packets).P_46[i],
      &(*conditional_transition)[i]);
    /* NormalTransition */
    NormalTransition_InputManagemen(
      (*Data_From_Track_Packets).LRBG,
      (*Data_From_Track_Packets).referenceLocation,
      &(*Data_From_Track_Packets).P_41[i],
      &(*level_transition_priority_table)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Level_Transition_InputMan.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

