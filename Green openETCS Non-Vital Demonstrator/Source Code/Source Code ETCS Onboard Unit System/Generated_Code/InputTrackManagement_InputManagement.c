/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTrackManagement_InputManagement.h"

/* InputManagement::InputTrackManagement */
void InputTrackManagement_InputManagement(
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
  /* InputManagement::InputTrackManagement::immediateAck */kcg_bool *immediateAck)
{
  /* InputManagement::InputTrackManagement::Loc_List_BG_Related_To_SR_Empty */
  static kcg_bool Loc_List_BG_Related_To_SR_Empty;
  /* InputManagement::InputTrackManagement::Loc_Stop_If_In_Shunting */
  static kcg_bool Loc_Stop_If_In_Shunting;
  /* InputManagement::InputTrackManagement::Loc_Stop_If_In_SR */
  static kcg_bool Loc_Stop_If_In_SR;
  /* InputManagement::InputTrackManagement::Loc_Reversing_Data */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg Loc_Reversing_Data;
  /* InputManagement::InputTrackManagement::_L101 */
  static T_Mode_Profile_Table_Level_And_Mode_Types_Pkg _L101;
  
  (*Data_From_Track_To_Mode).Shunting_granted_By_RBC =
    (*Data_From_Track_Messages).Mess_27 | (*Data_From_Track_Messages).Mess_28;
  (*Data_From_Track_To_Mode).Trip_Order_Given_By_Balise =
    Trip_Order_Given_By_Balise;
  (*Data_From_Track_To_Mode).Error_BG_System_Version = Error_BG_System_Version;
  (*Data_From_Track_To_Mode).Linking_Reaction_To_Trip =
    Linking_Reaction_To_Trip;
  (*Data_From_Track_To_Mode).RBC_Ack_TR_EB_Revocked =
    (*Data_From_Track_Messages).Mess_6;
  (*Data_From_Track_To_Mode).RBC_Authorized_SR =
    (*Data_From_Track_Messages).Mess_2;
  (*Data_From_Track_To_Mode).T_NVCONTACT_Overpass =
    (*Data_From_Track_Messages).T_NVCONTACT_Overpass;
  (*Data_From_Track_To_Mode).Emergency_Stop_Message_Received =
    (*Data_From_Track_Messages).Mess_15 | (*Data_From_Track_Messages).Mess_16;
  /* 1 */
  Input_Modes_InputManagement(
    &(*Data_From_Track_Packets).P_80,
    (*Data_From_Track_Packets).P_135,
    &(*Data_From_Track_Packets).P_137,
    &(*Data_From_Track_Packets).P_138,
    &(*Data_From_Track_Packets).P_139,
    (*Data_From_Track_Packets).P_63,
    &Loc_Stop_If_In_Shunting,
    &Loc_Stop_If_In_SR,
    &Loc_Reversing_Data,
    &_L101,
    &Loc_List_BG_Related_To_SR_Empty);
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &(*Data_From_Track_To_Mode).Mode_Profile_On_Board,
    &_L101[1]);
  (*Data_From_Track_To_Mode).List_Bg_Related_To_SR_Empty =
    Loc_List_BG_Related_To_SR_Empty;
  (*Data_From_Track_To_Mode).Stop_If_In_shunting = Loc_Stop_If_In_Shunting;
  (*Data_From_Track_To_Mode).Stop_If_In_SR = Loc_Stop_If_In_SR;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &(*Data_From_Track_To_Mode).Reversing_Data,
    &Loc_Reversing_Data);
  /* 1 */
  Input_Level_Transition_InputManagement(
    &(*forLevelTransition).P41,
    &(*forLevelTransition).P46,
    (*forLevelTransition).LRBG,
    (*forLevelTransition).referenceLocation,
    conditional_transition,
    level_transition_priority_table,
    ackDistance,
    immediateAck);
  /* 1 */
  Input_MA_SSP_Gradient_InputManagement(
    (*forLevelTransition).P12_received,
    (*forLevelTransition).P15_received,
    (*forLevelTransition).P21_received,
    (*forLevelTransition).P27_received,
    received_L2_L3_MA,
    received_L1_MA,
    &(*Data_From_Track_To_Mode).MA_SSP_Gradient_Available,
    received_target_speed);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputTrackManagement_InputManagement.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

