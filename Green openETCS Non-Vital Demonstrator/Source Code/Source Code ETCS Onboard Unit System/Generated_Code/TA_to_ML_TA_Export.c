/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TA_to_ML_TA_Export.h"

/* TA_Export::TA_to_ML */
void TA_to_ML_TA_Export(
  /* TA_Export::TA_to_ML::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Export::TA_to_ML::t_nvcontact_overpass */kcg_bool t_nvcontact_overpass,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Packets_at_ML */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_to_From_Track_Packets_at_ML,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Messages_at_ML */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_to_From_Track_Messages_at_ML,
  /* TA_Export::TA_to_ML::P_12_to_Input_MA_SSP_Gradient_at_ML */kcg_bool *P_12_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_15_to_Input_MA_SSP_Gradient_at_ML */P15_Level23MovementAuthorities_T_Packet_Types_Pkg *P_15_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_21_to_Input_MA_SSP_Gradient_at_ML */P21_GradientProfiles_T_Packet_Types_Pkg *P_21_to_Input_MA_SSP_Gradient_at_ML,
  /* TA_Export::TA_to_ML::P_27_to_Input_MA_SSP_Gradient_at_ML */P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *P_27_to_Input_MA_SSP_Gradient_at_ML)
{
  /* TA_Export::TA_to_ML::_L20 */
  static kcg_int _L20;
  /* TA_Export::TA_to_ML::_L68 */
  static P135_OBU_T_TM _L68;
  /* TA_Export::TA_to_ML::_L108 */
  static P012_OBU_T_TM _L108;
  
  *P_12_to_Input_MA_SSP_Gradient_at_ML = kcg_false;
  (*Data_to_From_Track_Packets_at_ML).P_63 = kcg_false;
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &(*Data_to_From_Track_Packets_at_ML).P_80,
    (P80_ModeProfiles_T_Packet_Types_Pkg *) &Default_P80_legacy_TA_Export);
  (*Data_to_From_Track_Messages_at_ML).T_NVCONTACT_Overpass =
    t_nvcontact_overpass;
  /* 1 */
  Read_P012_TM(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_ML).P_12,
    &_L108);
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_specific(
    &(*MessageIn).packets,
    P_27_to_Input_MA_SSP_Gradient_at_ML);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &(*Data_to_From_Track_Packets_at_ML).P_27,
    P_27_to_Input_MA_SSP_Gradient_at_ML);
  /* 1 */
  Read_P021_Legacy_TM_specific(
    &(*MessageIn).packets,
    P_21_to_Input_MA_SSP_Gradient_at_ML);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &(*Data_to_From_Track_Packets_at_ML).P_21,
    P_21_to_Input_MA_SSP_Gradient_at_ML);
  /* 1 */
  Read_P015_Legacy_TM_specific(
    &(*MessageIn).packets,
    P_15_to_Input_MA_SSP_Gradient_at_ML);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &(*Data_to_From_Track_Packets_at_ML).P_15,
    P_15_to_Input_MA_SSP_Gradient_at_ML);
  /* 1 */
  Read_P135_TM(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_ML).P_135,
    &_L68);
  _L20 = /* 2 */
    CAST_NID_MESSAGE_to_int_TM_conversions(
      (*MessageIn).Radio_Common_Header.nid_message);
  (*Data_to_From_Track_Messages_at_ML).Mess_15 = _L20 ==
    nid_message_TrackTrain_015_TM_radio_messages;
  (*Data_to_From_Track_Messages_at_ML).Mess_16 = _L20 ==
    nid_message_TrackTrain_016_TM_radio_messages;
  (*Data_to_From_Track_Messages_at_ML).Mess_2 = _L20 ==
    nid_message_TrackTrain_002_TM_radio_messages;
  (*Data_to_From_Track_Messages_at_ML).Mess_27 = _L20 ==
    nid_message_TrackTrain_027_TM_radio_messages;
  (*Data_to_From_Track_Messages_at_ML).Mess_28 = _L20 ==
    nid_message_TrackTrain_028_TM_radio_messages;
  (*Data_to_From_Track_Messages_at_ML).Mess_6 = _L20 ==
    nid_message_TrackTrain_006_TM_radio_messages;
  /* 1 */
  Read_P137_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_ML).P_137);
  /* 1 */
  Read_P138_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_ML).P_138);
  /* 1 */
  Read_P139_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_ML).P_139);
  /* 1 */
  Read_P041_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_ML).P_41);
  /* 1 */
  Read_P046_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_ML).P_46);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TA_to_ML_TA_Export.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

