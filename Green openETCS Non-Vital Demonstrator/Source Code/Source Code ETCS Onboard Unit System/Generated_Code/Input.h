/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _Input_H_
#define _Input_H_

#include "kcg_types.h"
#include "InputDMI_InputManagement.h"
#include "InputLocalisation_InputManagement.h"
#include "InputSpeedAndSupervision_InputManagement.h"
#include "InputTrackManagement_InputManagement.h"

/* =====================  no input structure  ====================== */


/* Input */
extern void Input(
  /* Input::Data_From_DMI */DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Input::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Input::Data_From_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Input::Data_From_Track_Messages */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Input::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Input::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Input::Cab_In */T_Cab_Level_And_Mode_Types_Pkg Cab_In,
  /* Input::Continue_Shunting_Function_Active_In */kcg_bool Continue_Shunting_Function_Active_In,
  /* Input::driver_level_transition_In */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* Input::Error_BG_System_Version */kcg_bool Error_BG_System_Version,
  /* Input::Failure_Occured_In */kcg_bool Failure_Occured_In,
  /* Input::Interface_To_National_System_In */kcg_bool Interface_To_National_System_In,
  /* Input::Linking_Reaction_To_Trip */kcg_bool Linking_Reaction_To_Trip,
  /* Input::National_Trip_Order_In */kcg_bool National_Trip_Order_In,
  /* Input::OnBoard_Powered_In */kcg_bool OnBoard_Powered_In,
  /* Input::Stop_Shunting_Stored_In */kcg_bool Stop_Shunting_Stored_In,
  /* Input::Trip_Order_Given_By_Balise */kcg_bool Trip_Order_Given_By_Balise,
  /* Input::Valid_Train_Data_Stored_In */kcg_bool Valid_Train_Data_Stored_In,
  /* Input::ERTMS_capabilities_In */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* Input::train_standstill */kcg_bool *train_standstill,
  /* Input::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* Input::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table,
  /* Input::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* Input::getAck */kcg_bool *getAck,
  /* Input::currentDistance */kcg_int *currentDistance,
  /* Input::ackDistance */kcg_int *ackDistance,
  /* Input::immediateAck */kcg_bool *immediateAck,
  /* Input::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Input::received_L2_L3_MA */kcg_bool *received_L2_L3_MA,
  /* Input::received_L1_MA */kcg_bool *received_L1_MA,
  /* Input::received_target_speed */kcg_bool *received_target_speed,
  /* Input::Cab */T_Cab_Level_And_Mode_Types_Pkg *Cab,
  /* Input::Continue_Shunting_Function_Active */kcg_bool *Continue_Shunting_Function_Active,
  /* Input::Data_From_DMI_To_Mode */T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI_To_Mode,
  /* Input::Data_From_Localisation_To_Mode */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation_To_Mode,
  /* Input::Data_From_Speed_and_Supervision_To_Mode */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision_To_Mode,
  /* Input::Data_From_TIU_To_Mode */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU_To_Mode,
  /* Input::Data_From_Track_To_Mode */T_Data_From_Track_Level_And_Mode_Types_Pkg *Data_From_Track_To_Mode,
  /* Input::Failure_Occured */kcg_bool *Failure_Occured,
  /* Input::Interface_To_National_System */kcg_bool *Interface_To_National_System,
  /* Input::National_Trip_Order */kcg_bool *National_Trip_Order,
  /* Input::OnBoard_Powered */kcg_bool *OnBoard_Powered,
  /* Input::Stop_Shunting_Stored */kcg_bool *Stop_Shunting_Stored,
  /* Input::Valid_Train_Data_Stored */kcg_bool *Valid_Train_Data_Stored);

#endif /* _Input_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

