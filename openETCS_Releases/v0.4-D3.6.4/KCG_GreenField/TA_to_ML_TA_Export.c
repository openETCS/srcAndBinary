/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TA_to_ML_TA_Export.h"

/* TA_Export::TA_to_ML */
void TA_to_ML_TA_Export(
  /* TA_Export::TA_to_ML::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TA_Export::TA_to_ML::t_nvcontact_overpass */ kcg_bool t_nvcontact_overpass,
  /* TA_Export::TA_to_ML::valid_GP */ kcg_bool valid_GP,
  /* TA_Export::TA_to_ML::valid_MA */ kcg_bool valid_MA,
  /* TA_Export::TA_to_ML::valid_SSP */ kcg_bool valid_SSP,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Packets_at_ML */ T_Data_From_Track_Packet_Level_ *Data_to_From_Track_Packets_at_M,
  /* TA_Export::TA_to_ML::Data_to_From_Track_Messages_at_ML */ T_Data_From_Track_Mess_Level_An *Data_to_From_Track_Messages_at_,
  /* TA_Export::TA_to_ML::P_12_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_12_to_Input_MA_SSP_Gradient_a,
  /* TA_Export::TA_to_ML::P_15_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_15_to_Input_MA_SSP_Gradient_a,
  /* TA_Export::TA_to_ML::P_21_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_21_to_Input_MA_SSP_Gradient_a,
  /* TA_Export::TA_to_ML::P_27_to_Input_MA_SSP_Gradient_at_ML */ kcg_bool *P_27_to_Input_MA_SSP_Gradient_a)
{
  /* TA_Export::TA_to_ML::_L20 */
  static kcg_int _L20;
  
  *P_12_to_Input_MA_SSP_Gradient_a = kcg_false;
  kcg_copy__7_P12_Level1MovementA(
    &(*Data_to_From_Track_Packets_at_M).P_12,
    (_7_P12_Level1MovementAuthoritie *) &Default_P12_legacy_TA_Export);
  kcg_copy_P135_StopShuntingOnDes(
    &(*Data_to_From_Track_Packets_at_M).P_135,
    (P135_StopShuntingOnDeskOpening_ *) &Default_P135_legacy_TA_Export);
  kcg_copy_P63_ListofBalisesinSRA(
    &(*Data_to_From_Track_Packets_at_M).P_63,
    (P63_ListofBalisesinSRAuthority_ *) &Default_P63_legacy_TA_Export);
  kcg_copy_P80_ModeProfiles_T_Pac(
    &(*Data_to_From_Track_Packets_at_M).P_80,
    (P80_ModeProfiles_T_Packet_Types *) &Default_P80_legacy_TA_Export);
  (*Data_to_From_Track_Packets_at_M).LRBG = DEFAULT_LRBG_TrackAtlasTypes;
  (*Data_to_From_Track_Packets_at_M).referenceLocation =
    DEFAULT_Location_T_TrackAtlasTy;
  *P_27_to_Input_MA_SSP_Gradient_a = valid_SSP;
  *P_21_to_Input_MA_SSP_Gradient_a = valid_GP;
  *P_15_to_Input_MA_SSP_Gradient_a = valid_MA;
  /* 1 */
  Read_P137_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_137);
  /* 1 */
  Read_P138_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_138);
  /* 1 */
  Read_P139_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_139);
  /* 1 */
  Read_P015_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_15);
  /* 1 */
  Read_P021_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_21);
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_sp(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_27);
  /* 1 */
  Read_P041_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_41);
  /* 1 */
  Read_P046_Legacy_TM_specific(
    &(*MessageIn).packets,
    &(*Data_to_From_Track_Packets_at_M).P_46);
  _L20 = /* 2 */
    CAST_NID_MESSAGE_to_int_TM_conv(
      (*MessageIn).Radio_Common_Header.nid_message);
  (*Data_to_From_Track_Messages_at_).Mess_15 = _L20 ==
    nid_message_TrackTrain_015_TM_r;
  (*Data_to_From_Track_Messages_at_).Mess_16 = _L20 ==
    nid_message_TrackTrain_016_TM_r;
  (*Data_to_From_Track_Messages_at_).Mess_2 = _L20 ==
    nid_message_TrackTrain_002_TM_r;
  (*Data_to_From_Track_Messages_at_).Mess_27 = _L20 ==
    nid_message_TrackTrain_027_TM_r;
  (*Data_to_From_Track_Messages_at_).Mess_28 = _L20 ==
    nid_message_TrackTrain_028_TM_r;
  (*Data_to_From_Track_Messages_at_).Mess_6 = _L20 ==
    nid_message_TrackTrain_006_TM_r;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TA_to_ML_TA_Export.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

