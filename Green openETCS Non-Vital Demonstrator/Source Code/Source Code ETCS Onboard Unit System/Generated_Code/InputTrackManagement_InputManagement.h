/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _InputTrackManagement_InputManagement_H_
#define _InputTrackManagement_InputManagement_H_

#include "kcg_types.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"
#include "Input_Level_Transition_InputManagement.h"
#include "Input_Modes_InputManagement.h"

/* =====================  no input structure  ====================== */


/* InputManagement::InputTrackManagement */
extern void InputTrackManagement_InputManagement(
  /* InputManagement::InputTrackManagement::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::InputTrackManagement::Data_From_Track_Messages */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* InputManagement::InputTrackManagement::Trip_Order_Given_By_Balise */kcg_bool Trip_Order_Given_By_Balise,
  /* InputManagement::InputTrackManagement::Error_BG_System_Version */kcg_bool Error_BG_System_Version,
  /* InputManagement::InputTrackManagement::Linking_Reaction_To_Trip */kcg_bool Linking_Reaction_To_Trip,
  /* InputManagement::InputTrackManagement::forLevelTransition */T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg *forLevelTransition,
  /* InputManagement::InputTrackManagement::Data_From_Track_To_Mode */T_Data_From_Track_Level_And_Mode_Types_Pkg *Data_From_Track_To_Mode,
  /* InputManagement::InputTrackManagement::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* InputManagement::InputTrackManagement::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* InputManagement::InputTrackManagement::ackDistance */kcg_int *ackDistance,
  /* InputManagement::InputTrackManagement::received_L2_L3_MA */kcg_bool *received_L2_L3_MA,
  /* InputManagement::InputTrackManagement::received_L1_MA */kcg_bool *received_L1_MA,
  /* InputManagement::InputTrackManagement::received_target_speed */kcg_bool *received_target_speed,
  /* InputManagement::InputTrackManagement::immediateAck */kcg_bool *immediateAck);

#endif /* _InputTrackManagement_InputManagement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputTrackManagement_InputManagement.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

