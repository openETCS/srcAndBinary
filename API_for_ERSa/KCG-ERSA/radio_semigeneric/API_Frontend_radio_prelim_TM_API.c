/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/radio_semigeneric\kcg_s2c_config.txt
** Generation date: 2015-11-16T17:03:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "API_Frontend_radio_prelim_TM_API.h"

void API_Frontend_radio_prelim_reset_TM_API(
  outC_API_Frontend_radio_prelim_TM_API *outC)
{
}

/* TM_API::API_Frontend_radio_prelim */
void API_Frontend_radio_prelim_TM_API(
  inC_API_Frontend_radio_prelim_TM_API *inC,
  outC_API_Frontend_radio_prelim_TM_API *outC)
{
  Q_DIR tmp30;
  kcg_int tmp29;
  kcg_int tmp28;
  Metadata_T_Common_Types_Pkg tmp27;
  MetadataElement_T_Common_Types_Pkg tmp26;
  kcg_bool tmp25;
  kcg_bool tmp24;
  kcg_bool tmp23;
  array__71775 tmp22;
  P005_sections_array_flat_T_TM tmp21;
  kcg_bool tmp20;
  kcg_bool tmp19;
  kcg_bool tmp18;
  P015_sections_array_flat_T_TM tmp17;
  kcg_bool tmp16;
  array__71760 tmp15;
  kcg_bool tmp14;
  kcg_int tmp13;
  kcg_bool tmp12;
  array__71715 tmp11;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L448 */ array_int_432 _L448_2_1_3_1;
  kcg_bool _10_tmp_1_3_1;
  kcg_bool tmp_1_3_1;
  kcg_int tmp9;
  MetadataElement_T_Common_Types_Pkg tmp8;
  kcg_int tmp7;
  array__71751 tmp6;
  P041_sections_array_flat_T_TM tmp5;
  array__71742 tmp4;
  P046_sections_array_flat_T_TM tmp3;
  P058_sections_array_flat_T_TM tmp2;
  array__71730 tmp1;
  P080_sections_array_flat_T_TM tmp;
  kcg_int i;
  /* TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H::_L1 */ M_028_T_TM_radio_messages _95__L1_1_1;
  /* TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H::_L1 */ M_032_T_TM_radio_messages _94__L1_2_1;
  /* TM_RBC_conversions::C_header_to_M033::_L26 */ M_033_T_TM_radio_messages _93__L26_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ kcg_bool _92_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ kcg_bool _91_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ kcg_bool _90_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool _89_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool _88_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M034::_L26 */ M_034_T_TM_radio_messages _87__L26_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool _86_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool _85_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M038::_L26 */ M_038_T_TM_radio_messages _84__L26_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool _83_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool _82_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M039::_L26 */ M_039_T_TM_radio_messages _81__L26_1_1;
  /* TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H::_L1 */ M_040_T_TM_radio_messages _80__L1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool _79_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool _78_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H::_L1 */ M_041_T_TM_radio_messages _77__L1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool _76_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool _75_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool _74_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool _73_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M043::_L26 */ M_043_T_TM_radio_messages _72__L26_1_1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else */ kcg_bool _71_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1 */ kcg_bool _70_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */ kcg_bool else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */ kcg_bool IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M045::_L26 */ M_045_T_TM_radio_messages _69__L26_1_1;
  /* TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H::_L1 */ M_002_T_TM_radio_messages _L1_1_1;
  /* TM_RBC_conversions::C_header_to_M003::_L26 */ M_003_T_TM_radio_messages _68__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M006::_L26 */ M_006_T_TM_radio_messages _67__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M008::_L26 */ M_008_T_TM_radio_messages _66__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M009::_L26 */ M_009_T_TM_radio_messages _65__L26_1_1;
  /* TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H::_L1 */ M_015_T_TM_radio_messages _64__L1_2_1;
  /* TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H::_L1 */ M_016_T_TM_radio_messages _L1_2_1;
  /* TM_RBC_conversions::C_header_to_M018::_L26 */ M_018_T_TM_radio_messages _63__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M024::_L26 */ M_024_T_TM_radio_messages _62__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M027::_L26 */ M_027_T_TM_radio_messages _L26_1_1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else */ kcg_bool _61_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else */ kcg_bool _60_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else */ kcg_bool _59_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else */ kcg_bool _58_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else */ kcg_bool _57_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else */ kcg_bool _56_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else */ kcg_bool _55_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else */ kcg_bool _54_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else */ kcg_bool else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2 */ kcg_bool IfBlock2_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _53_else_clock_1_1_11_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool _52_else_clock_1_1_11_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool _51_IfBlock1_clock_1_1_11_1;
  /* TM_conversions::C_P002_tracksim_compr::_L383 */ array_int_500 _50__L383_1_11_1;
  kcg_int _49_noname_1_11_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */ array_int_500 _48__L406_1_11_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */ kcg_int _47__L407_1_11_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */ kcg_int _46__L408_1_11_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */ kcg_int _45__L7_1_11_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */ kcg_int _44__L3_1_11_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _43_else_clock_1_1_11_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_1_11_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1_1_11_1;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L209 */ array_int_444 _L209_1_11_1;
  /* TM_lib_internal::C_P005_flatten_sections::_L74 */ array_int_7_33 _L74_1_1_13_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _42_else_clock_1_1_13_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool _41_else_clock_1_1_13_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool _40_IfBlock1_clock_1_1_13_1;
  /* TM_conversions::C_P005_tracksim_compr::_L209 */ array_int_264 _39__L209_1_13_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool _38_IfBlock1_clock_1_1_13_1;
  /* TM_conversions::C_P012_tracksim_compr::_L209 */ array_int_349 _37__L209_1_13_1;
  /* TM_conversions::C_P012_tracksim_compr::_L403 */ array_int_1 _L403_1_13_1;
  /* TM_lib_internal::C_P015_flatten_sections::_L74 */ array_int_4_32 _L74_1_1_14_1;
  /* TM_conversions::C_P015_tracksim_compr::_L209 */ array_int_350 _L209_1_14_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _36_else_clock_1_1_13_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_1_13_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1_1_13_1;
  /* TM_conversions::C_P021_tracksim_compr::_L209 */ array_int_396 _L209_1_13_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _35_else_clock_1_1_14_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_1_14_1_IfBlock1;
  /* TM_lib_internal::C_P041_flatten_sections::_L74 */ array_int_3_33 _L74_1_1_12_1;
  /* TM_conversions::C_P041_tracksim_compr::_L209 */ array_int_395 _L209_1_12_1;
  /* TM_conversions::C_P040_tracksim_compr::_L383 */ array_int_500 _L383_1_11_1;
  kcg_int noname_1_11_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */ array_int_500 _L406_1_11_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */ kcg_int _L407_1_11_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */ kcg_int _L408_1_11_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */ kcg_int _L7_1_11_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */ kcg_int _L3_1_11_1;
  /* TM_lib_internal::C_P046_flatten_sections::_L74 */ array_int_2_33 _34__L74_1_1_9_1;
  /* TM_conversions::C_P046_tracksim_compr::_L209 */ array_int_430 _33__L209_1_9_1;
  /* TM_conversions::C_P045_tracksim_compr::_L209 */ array_int_496 _32__L209_1_9_1;
  /* TM_lib_internal::C_P058_flatten_sections::_L74 */ array_int_2_32 _L74_1_1_9_1;
  /* TM_conversions::C_P058_tracksim_compr::_L209 */ array_int_428 _L209_1_9_1;
  /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L209 */ array_int_228 _31__L209_1_7_1;
  /* TM_conversions::C_P131_tracksim_compr::_L395 */ array_int_491 _L395_1_6_1;
  /* TM_lib_internal::C_P080_flatten_sections::_L74 */ array_int_6_33 _L74_2_1_7_1;
  /* TM_conversions::C_P080_tracksim_compr::_L209 */ array_int_297 _L209_1_7_1;
  /* TM_conversions::C_P135_tracksim_compr::_L209 */ array_int_497 _L209_1_5_1;
  /* TM_conversions::C_P141_tracksim_compr::_L209 */ array_int_495 _L209_1_2_1;
  /* TM_conversions::C_P143_tracksim_compr::_L209 */ array_int_493 _L209_1_1_1;
  /* TM_conversions_baseline2::C_P039V1_tracksim_compr::_L427 */ array_int_494 _L427_1_12_1;
  /* TM_API::SEND_MergePackets::RadioMessagePackets_01_02 */ CompressedPackets_T_Common_Types_Pkg RadioMessagePackets_01_02_1;
  /* TM_API::SEND_MergePackets::_L24 */ CompressedPackets_T_Common_Types_Pkg _L24_1;
  
  else_clock_1_1_14_1_IfBlock1 = inC->message_header.nid_message == 2;
  if (else_clock_1_1_14_1_IfBlock1) {
    _L1_1_1.valid = inC->message_header.valid;
    _L1_1_1.nid_message = inC->message_header.nid_message;
    _L1_1_1.l_message = inC->message_header.l_message;
    _L1_1_1.t_train = inC->message_header.t_train;
    _L1_1_1.nid_lrbg = inC->message_header.field2;
    _L1_1_1.d_sr = inC->message_header.field4;
    _88_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
      INT_M_ACK_acknowledgement_TM_conversions;
    if (_88_IfBlock1_clock_1_1_1) {
    }
    else {
      _89_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
        INT_M_ACK_no_acknowledgement_TM_conversions;
    }
    _90_IfBlock1_clock_1_1_1 = inC->message_header.field3 ==
      INT_Q_SCALE_10cm_TM_conversions;
    if (_90_IfBlock1_clock_1_1_1) {
    }
    else {
      _92_else_clock_1_1_1_IfBlock1 = inC->message_header.field3 ==
        INT_Q_SCALE_1m_TM_conversions;
      if (_92_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _91_else_clock_1_1_1_IfBlock1 = inC->message_header.field3 ==
          INT_Q_SCALE_10m_TM_conversions;
      }
    }
    if (_88_IfBlock1_clock_1_1_1) {
      _L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
    }
    else if (_89_else_clock_1_1_1_IfBlock1) {
      _L1_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
    }
    else {
      _L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
    }
    if (_90_IfBlock1_clock_1_1_1) {
      _L1_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
    }
    else if (_92_else_clock_1_1_1_IfBlock1) {
      _L1_1_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else if (_91_else_clock_1_1_1_IfBlock1) {
      _L1_1_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
    }
    else {
      _L1_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
    }
  }
  else {
    tmp12 = inC->message_header.nid_message == 3;
    if (tmp12) {
      _68__L26_1_1.valid = inC->message_header.valid;
      _68__L26_1_1.nid_message = inC->message_header.nid_message;
      _68__L26_1_1.l_message = inC->message_header.l_message;
      _68__L26_1_1.t_train = inC->message_header.t_train;
      _68__L26_1_1.nid_lrbg = inC->message_header.field2;
      _85_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
        INT_M_ACK_acknowledgement_TM_conversions;
      if (_85_IfBlock1_clock_1_1_1) {
        _68__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
      else {
        _86_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
          INT_M_ACK_no_acknowledgement_TM_conversions;
        if (_86_else_clock_1_1_1_IfBlock1) {
          _68__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
        }
        else {
          _68__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
      }
    }
    else {
      _35_else_clock_1_1_14_1_IfBlock1 = inC->message_header.nid_message == 6;
      if (_35_else_clock_1_1_14_1_IfBlock1) {
        _67__L26_1_1.valid = inC->message_header.valid;
        _67__L26_1_1.nid_message = inC->message_header.nid_message;
        _67__L26_1_1.l_message = inC->message_header.l_message;
        _67__L26_1_1.t_train = inC->message_header.t_train;
        _67__L26_1_1.nid_lrbg = inC->message_header.field2;
        _82_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
          INT_M_ACK_acknowledgement_TM_conversions;
        if (_82_IfBlock1_clock_1_1_1) {
          _67__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
        else {
          _83_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
            INT_M_ACK_no_acknowledgement_TM_conversions;
          if (_83_else_clock_1_1_1_IfBlock1) {
            _67__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
          }
          else {
            _67__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
        }
      }
      else {
        _10_tmp_1_3_1 = inC->message_header.nid_message == 8;
        if (_10_tmp_1_3_1) {
          _66__L26_1_1.valid = inC->message_header.valid;
          _66__L26_1_1.nid_message = inC->message_header.nid_message;
          _66__L26_1_1.l_message = inC->message_header.l_message;
          _66__L26_1_1.t_train = inC->message_header.t_train;
          _66__L26_1_1.nid_lrbg = inC->message_header.field2;
          _66__L26_1_1.t_train_received = inC->message_header.field3;
          _78_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
            INT_M_ACK_acknowledgement_TM_conversions;
          if (_78_IfBlock1_clock_1_1_1) {
            _66__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
          else {
            _79_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
              INT_M_ACK_no_acknowledgement_TM_conversions;
            if (_79_else_clock_1_1_1_IfBlock1) {
              _66__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
            }
            else {
              _66__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
            }
          }
        }
        else {
          tmp14 = inC->message_header.nid_message == 9;
          if (tmp14) {
            _65__L26_1_1.valid = inC->message_header.valid;
            _65__L26_1_1.nid_message = inC->message_header.nid_message;
            _65__L26_1_1.l_message = inC->message_header.l_message;
            _65__L26_1_1.t_train = inC->message_header.t_train;
            _65__L26_1_1.nid_lrbg = inC->message_header.field2;
            _75_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
              INT_M_ACK_acknowledgement_TM_conversions;
            if (_75_IfBlock1_clock_1_1_1) {
              _65__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
            }
            else {
              _76_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
                INT_M_ACK_no_acknowledgement_TM_conversions;
              if (_76_else_clock_1_1_1_IfBlock1) {
                _65__L26_1_1.m_ack =
                  ENUM_M_ACK_no_acknowledgement_TM_conversions;
              }
              else {
                _65__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
            }
          }
          else {
            tmp_1_3_1 = inC->message_header.nid_message == 15;
            if (tmp_1_3_1) {
              _64__L1_2_1.valid = inC->message_header.valid;
              _64__L1_2_1.nid_message = inC->message_header.nid_message;
              _64__L1_2_1.l_message = inC->message_header.l_message;
              _64__L1_2_1.t_train = inC->message_header.t_train;
              _64__L1_2_1.nid_lrbg = inC->message_header.field2;
              _64__L1_2_1.nid_em = inC->message_header.field3;
              _64__L1_2_1.d_ref = inC->message_header.field5;
              _64__L1_2_1.d_emergencystop = inC->message_header.field7;
              _60_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                INT_M_ACK_acknowledgement_TM_conversions;
              if (_60_else_clock_1_IfBlock2) {
              }
              else {
                _61_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                  INT_M_ACK_no_acknowledgement_TM_conversions;
              }
              IfBlock1_clock_1_1_1 = inC->message_header.field4 ==
                INT_Q_SCALE_10cm_TM_conversions;
              if (IfBlock1_clock_1_1_1) {
              }
              else {
                _70_IfBlock1_clock_1_1_1 = inC->message_header.field4 ==
                  INT_Q_SCALE_1m_TM_conversions;
                if (_70_IfBlock1_clock_1_1_1) {
                }
                else {
                  else_clock_1_1_1_IfBlock1 = inC->message_header.field4 ==
                    INT_Q_SCALE_10m_TM_conversions;
                }
              }
              _71_else_clock_1_1_1_IfBlock1 = inC->message_header.field6 ==
                INT_Q_DIR_nomiinal_TM_conversions;
              if (_71_else_clock_1_1_1_IfBlock1) {
              }
              else {
                _74_else_clock_1_1_1_IfBlock1 = inC->message_header.field6 ==
                  INT_Q_DIR_reverse_TM_conversions;
                if (_74_else_clock_1_1_1_IfBlock1) {
                }
                else {
                  _73_IfBlock1_clock_1_1_1 = inC->message_header.field6 ==
                    INT_Q_DIR_both_TM_conversions;
                }
              }
              if (_60_else_clock_1_IfBlock2) {
                _64__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
              else if (_61_else_clock_1_IfBlock2) {
                _64__L1_2_1.m_ack =
                  ENUM_M_ACK_no_acknowledgement_TM_conversions;
              }
              else {
                _64__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
              if (IfBlock1_clock_1_1_1) {
                _64__L1_2_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
              }
              else if (_70_IfBlock1_clock_1_1_1) {
                _64__L1_2_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
              }
              else if (else_clock_1_1_1_IfBlock1) {
                _64__L1_2_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
              }
              else {
                _64__L1_2_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
              }
              if (_71_else_clock_1_1_1_IfBlock1) {
                tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
              }
              else if (_74_else_clock_1_1_1_IfBlock1) {
                tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
              }
              else if (_73_IfBlock1_clock_1_1_1) {
                tmp30 = ENUM_Q_DIR_both_TM_conversions;
              }
              else {
                tmp30 = ENUM_Q_DIR_both_TM_conversions;
              }
              _64__L1_2_1.q_dir = tmp30;
            }
            else {
              tmp16 = inC->message_header.nid_message == 16;
              if (tmp16) {
                _L1_2_1.valid = inC->message_header.valid;
                _L1_2_1.nid_message = inC->message_header.nid_message;
                _L1_2_1.l_message = inC->message_header.l_message;
                _L1_2_1.t_train = inC->message_header.t_train;
                _L1_2_1.nid_lrbg = inC->message_header.field2;
                _L1_2_1.nid_em = inC->message_header.field3;
                _58_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                  INT_M_ACK_acknowledgement_TM_conversions;
                if (_58_else_clock_1_IfBlock2) {
                  _L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
                }
                else {
                  _59_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                    INT_M_ACK_no_acknowledgement_TM_conversions;
                  if (_59_else_clock_1_IfBlock2) {
                    _L1_2_1.m_ack =
                      ENUM_M_ACK_no_acknowledgement_TM_conversions;
                  }
                  else {
                    _L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                }
              }
              else {
                _36_else_clock_1_1_13_1_IfBlock1 =
                  inC->message_header.nid_message == 18;
                if (_36_else_clock_1_1_13_1_IfBlock1) {
                  _63__L26_1_1.valid = inC->message_header.valid;
                  _63__L26_1_1.nid_message = inC->message_header.nid_message;
                  _63__L26_1_1.l_message = inC->message_header.l_message;
                  _63__L26_1_1.t_train = inC->message_header.t_train;
                  _63__L26_1_1.nid_lrbg = inC->message_header.field2;
                  _63__L26_1_1.nid_em = inC->message_header.field3;
                  _56_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                    INT_M_ACK_acknowledgement_TM_conversions;
                  if (_56_else_clock_1_IfBlock2) {
                    _63__L26_1_1.m_ack =
                      ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                  else {
                    _57_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                      INT_M_ACK_no_acknowledgement_TM_conversions;
                    if (_57_else_clock_1_IfBlock2) {
                      _63__L26_1_1.m_ack =
                        ENUM_M_ACK_no_acknowledgement_TM_conversions;
                    }
                    else {
                      _63__L26_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                  }
                }
                else {
                  IfBlock1_clock_1_1_13_1 = inC->message_header.nid_message ==
                    24;
                  if (IfBlock1_clock_1_1_13_1) {
                    _62__L26_1_1.valid = inC->message_header.valid;
                    _62__L26_1_1.nid_message = inC->message_header.nid_message;
                    _62__L26_1_1.l_message = inC->message_header.l_message;
                    _62__L26_1_1.t_train = inC->message_header.t_train;
                    _62__L26_1_1.nid_lrbg = inC->message_header.field2;
                    _54_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                      INT_M_ACK_acknowledgement_TM_conversions;
                    if (_54_else_clock_1_IfBlock2) {
                      _62__L26_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                    else {
                      _55_else_clock_1_IfBlock2 = inC->message_header.field1 ==
                        INT_M_ACK_no_acknowledgement_TM_conversions;
                      if (_55_else_clock_1_IfBlock2) {
                        _62__L26_1_1.m_ack =
                          ENUM_M_ACK_no_acknowledgement_TM_conversions;
                      }
                      else {
                        _62__L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                    }
                  }
                  else {
                    else_clock_1_1_13_1_IfBlock1 =
                      inC->message_header.nid_message == 27;
                    if (else_clock_1_1_13_1_IfBlock1) {
                      _L26_1_1.valid = inC->message_header.valid;
                      _L26_1_1.nid_message = inC->message_header.nid_message;
                      _L26_1_1.l_message = inC->message_header.l_message;
                      _L26_1_1.t_train = inC->message_header.t_train;
                      _L26_1_1.nid_lrbg = inC->message_header.field2;
                      _L26_1_1.t_train_SH_request = inC->message_header.field3;
                      IfBlock2_clock_1 = inC->message_header.field1 ==
                        INT_M_ACK_acknowledgement_TM_conversions;
                      if (IfBlock2_clock_1) {
                        _L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                      else {
                        else_clock_1_IfBlock2 = inC->message_header.field1 ==
                          INT_M_ACK_no_acknowledgement_TM_conversions;
                        if (else_clock_1_IfBlock2) {
                          _L26_1_1.m_ack =
                            ENUM_M_ACK_no_acknowledgement_TM_conversions;
                        }
                        else {
                          _L26_1_1.m_ack =
                            ENUM_M_ACK_acknowledgement_TM_conversions;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  IfBlock2_clock_1 = inC->message_header.nid_message == 28;
  if (IfBlock2_clock_1) {
    _95__L1_1_1.valid = inC->message_header.valid;
    _95__L1_1_1.nid_message = inC->message_header.nid_message;
    _95__L1_1_1.l_message = inC->message_header.l_message;
    _95__L1_1_1.t_train = inC->message_header.t_train;
    _95__L1_1_1.nid_lrbg = inC->message_header.field2;
    _95__L1_1_1.t_train_SH_request = inC->message_header.field3;
    tmp19 = inC->message_header.field1 ==
      INT_M_ACK_acknowledgement_TM_conversions;
    if (tmp19) {
      _95__L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
    }
    else {
      _38_IfBlock1_clock_1_1_13_1 = inC->message_header.field1 ==
        INT_M_ACK_no_acknowledgement_TM_conversions;
      if (_38_IfBlock1_clock_1_1_13_1) {
        _95__L1_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
      }
      else {
        _95__L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
    }
  }
  else {
    _61_else_clock_1_IfBlock2 = inC->message_header.nid_message == 32;
    if (_61_else_clock_1_IfBlock2) {
      _94__L1_2_1.valid = inC->message_header.valid;
      _94__L1_2_1.nid_message = inC->message_header.nid_message;
      _94__L1_2_1.l_message = inC->message_header.l_message;
      _94__L1_2_1.t_train = inC->message_header.t_train;
      _94__L1_2_1.nid_lrbg = inC->message_header.field2;
      tmp20 = inC->message_header.field1 ==
        INT_M_ACK_acknowledgement_TM_conversions;
      if (tmp20) {
      }
      else {
        tmp23 = inC->message_header.field1 ==
          INT_M_ACK_no_acknowledgement_TM_conversions;
      }
      _40_IfBlock1_clock_1_1_13_1 = inC->message_header.field3 <=
        INT_M_VERSION_previous_M_TM_conversions;
      if (_40_IfBlock1_clock_1_1_13_1) {
      }
      else {
        tmp18 = inC->message_header.field3 == INT_M_VERSION_1_0_TM_conversions;
        if (tmp18) {
        }
        else {
          _41_else_clock_1_1_13_1_IfBlock1 = inC->message_header.field3 ==
            INT_M_VERSION_1_1_TM_conversions;
          if (_41_else_clock_1_1_13_1_IfBlock1) {
          }
          else {
            _42_else_clock_1_1_13_1_IfBlock1 = inC->message_header.field3 ==
              INT_M_VERSION_2_0_TM_conversions;
          }
        }
      }
      if (tmp20) {
        _94__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
      else if (tmp23) {
        _94__L1_2_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
      }
      else {
        _94__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
      if (_40_IfBlock1_clock_1_1_13_1) {
        _94__L1_2_1.m_version = ENUM_M_VERSION_Previous_versions_TM_conversions;
      }
      else if (tmp18) {
        _94__L1_2_1.m_version = ENUM_M_VERSION_Version_1_0_TM_conversions;
      }
      else if (_41_else_clock_1_1_13_1_IfBlock1) {
        _94__L1_2_1.m_version = ENUM_M_VERSION_Version_1_1_TM_conversions;
      }
      else if (_42_else_clock_1_1_13_1_IfBlock1) {
        _94__L1_2_1.m_version = ENUM_M_VERSION_Version_2_0_TM_conversions;
      }
      else {
        _94__L1_2_1.m_version = ENUM_M_VERSION_Previous_versions_TM_conversions;
      }
    }
    else {
      else_clock_1_IfBlock2 = inC->message_header.nid_message == 33;
      if (else_clock_1_IfBlock2) {
        _93__L26_1_1.valid = inC->message_header.valid;
        _93__L26_1_1.nid_message = inC->message_header.nid_message;
        _93__L26_1_1.l_message = inC->message_header.l_message;
        _93__L26_1_1.t_train = inC->message_header.t_train;
        _93__L26_1_1.nid_lrbg = inC->message_header.field2;
        _93__L26_1_1.d_ref = inC->message_header.field4;
        tmp24 = inC->message_header.field1 ==
          INT_M_ACK_acknowledgement_TM_conversions;
        if (tmp24) {
        }
        else {
          tmp25 = inC->message_header.field1 ==
            INT_M_ACK_no_acknowledgement_TM_conversions;
        }
        IfBlock1_clock_1_1_11_1 = inC->message_header.field3 ==
          INT_Q_SCALE_10cm_TM_conversions;
        if (IfBlock1_clock_1_1_11_1) {
        }
        else {
          _43_else_clock_1_1_11_1_IfBlock1 = inC->message_header.field3 ==
            INT_Q_SCALE_1m_TM_conversions;
          if (_43_else_clock_1_1_11_1_IfBlock1) {
          }
          else {
            else_clock_1_1_11_1_IfBlock1 = inC->message_header.field3 ==
              INT_Q_SCALE_10m_TM_conversions;
          }
        }
        if (tmp24) {
          _93__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
        else if (tmp25) {
          _93__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
        }
        else {
          _93__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
        if (IfBlock1_clock_1_1_11_1) {
          _93__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
        }
        else if (_43_else_clock_1_1_11_1_IfBlock1) {
          _93__L26_1_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
        }
        else if (else_clock_1_1_11_1_IfBlock1) {
          _93__L26_1_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
        }
        else {
          _93__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
        }
      }
      else {
        _60_else_clock_1_IfBlock2 = inC->message_header.nid_message == 34;
        if (_60_else_clock_1_IfBlock2) {
          _87__L26_1_1.valid = inC->message_header.valid;
          _87__L26_1_1.nid_message = inC->message_header.nid_message;
          _87__L26_1_1.l_message = inC->message_header.l_message;
          _87__L26_1_1.t_train = inC->message_header.t_train;
          _87__L26_1_1.nid_lrbg = inC->message_header.field2;
          _87__L26_1_1.d_ref = inC->message_header.field4;
          _87__L26_1_1.d_tafdisplay = inC->message_header.field6;
          _87__L26_1_1.l_tafdisplay = inC->message_header.field7;
          _88_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
            INT_M_ACK_acknowledgement_TM_conversions;
          if (_88_IfBlock1_clock_1_1_1) {
          }
          else {
            _89_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
              INT_M_ACK_no_acknowledgement_TM_conversions;
          }
          _90_IfBlock1_clock_1_1_1 = inC->message_header.field3 ==
            INT_Q_SCALE_10cm_TM_conversions;
          if (_90_IfBlock1_clock_1_1_1) {
          }
          else {
            _92_else_clock_1_1_1_IfBlock1 = inC->message_header.field3 ==
              INT_Q_SCALE_1m_TM_conversions;
            if (_92_else_clock_1_1_1_IfBlock1) {
            }
            else {
              _91_else_clock_1_1_1_IfBlock1 = inC->message_header.field3 ==
                INT_Q_SCALE_10m_TM_conversions;
            }
          }
          _51_IfBlock1_clock_1_1_11_1 = inC->message_header.field5 ==
            INT_Q_DIR_nomiinal_TM_conversions;
          if (_51_IfBlock1_clock_1_1_11_1) {
          }
          else {
            _53_else_clock_1_1_11_1_IfBlock1 = inC->message_header.field5 ==
              INT_Q_DIR_reverse_TM_conversions;
            if (_53_else_clock_1_1_11_1_IfBlock1) {
            }
            else {
              _52_else_clock_1_1_11_1_IfBlock1 = inC->message_header.field5 ==
                INT_Q_DIR_both_TM_conversions;
            }
          }
          if (_88_IfBlock1_clock_1_1_1) {
            _87__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
          else if (_89_else_clock_1_1_1_IfBlock1) {
            _87__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
          }
          else {
            _87__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
          if (_90_IfBlock1_clock_1_1_1) {
            _87__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
          }
          else if (_92_else_clock_1_1_1_IfBlock1) {
            _87__L26_1_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
          }
          else if (_91_else_clock_1_1_1_IfBlock1) {
            _87__L26_1_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
          }
          else {
            _87__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
          }
          if (_51_IfBlock1_clock_1_1_11_1) {
            tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
          }
          else if (_53_else_clock_1_1_11_1_IfBlock1) {
            tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
          }
          else if (_52_else_clock_1_1_11_1_IfBlock1) {
            tmp30 = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp30 = ENUM_Q_DIR_both_TM_conversions;
          }
          _87__L26_1_1.q_dir = tmp30;
        }
        else {
          _54_else_clock_1_IfBlock2 = inC->message_header.nid_message == 38;
          if (_54_else_clock_1_IfBlock2) {
            _84__L26_1_1.valid = inC->message_header.valid;
            _84__L26_1_1.nid_message = inC->message_header.nid_message;
            _84__L26_1_1.l_message = inC->message_header.l_message;
            _84__L26_1_1.t_train = inC->message_header.t_train;
            _84__L26_1_1.nid_lrbg = inC->message_header.field2;
            _85_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
              INT_M_ACK_acknowledgement_TM_conversions;
            if (_85_IfBlock1_clock_1_1_1) {
              _84__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
            }
            else {
              _86_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
                INT_M_ACK_no_acknowledgement_TM_conversions;
              if (_86_else_clock_1_1_1_IfBlock1) {
                _84__L26_1_1.m_ack =
                  ENUM_M_ACK_no_acknowledgement_TM_conversions;
              }
              else {
                _84__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
            }
          }
          else {
            _59_else_clock_1_IfBlock2 = inC->message_header.nid_message == 39;
            if (_59_else_clock_1_IfBlock2) {
              _81__L26_1_1.valid = inC->message_header.valid;
              _81__L26_1_1.nid_message = inC->message_header.nid_message;
              _81__L26_1_1.l_message = inC->message_header.l_message;
              _81__L26_1_1.t_train = inC->message_header.t_train;
              _81__L26_1_1.nid_lrbg = inC->message_header.field2;
              _82_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
                INT_M_ACK_acknowledgement_TM_conversions;
              if (_82_IfBlock1_clock_1_1_1) {
                _81__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
              else {
                _83_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
                  INT_M_ACK_no_acknowledgement_TM_conversions;
                if (_83_else_clock_1_1_1_IfBlock1) {
                  _81__L26_1_1.m_ack =
                    ENUM_M_ACK_no_acknowledgement_TM_conversions;
                }
                else {
                  _81__L26_1_1.m_ack =
                    ENUM_M_ACK_acknowledgement_TM_conversions;
                }
              }
            }
            else {
              _55_else_clock_1_IfBlock2 = inC->message_header.nid_message == 40;
              if (_55_else_clock_1_IfBlock2) {
                _80__L1_1_1.valid = inC->message_header.valid;
                _80__L1_1_1.nid_message = inC->message_header.nid_message;
                _80__L1_1_1.l_message = inC->message_header.l_message;
                _80__L1_1_1.t_train = inC->message_header.t_train;
                _80__L1_1_1.nid_lrbg = inC->message_header.field2;
                _78_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
                  INT_M_ACK_acknowledgement_TM_conversions;
                if (_78_IfBlock1_clock_1_1_1) {
                  _80__L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
                }
                else {
                  _79_else_clock_1_1_1_IfBlock1 = inC->message_header.field1 ==
                    INT_M_ACK_no_acknowledgement_TM_conversions;
                  if (_79_else_clock_1_1_1_IfBlock1) {
                    _80__L1_1_1.m_ack =
                      ENUM_M_ACK_no_acknowledgement_TM_conversions;
                  }
                  else {
                    _80__L1_1_1.m_ack =
                      ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                }
              }
              else {
                _58_else_clock_1_IfBlock2 = inC->message_header.nid_message ==
                  41;
                if (_58_else_clock_1_IfBlock2) {
                  _77__L1_1_1.valid = inC->message_header.valid;
                  _77__L1_1_1.nid_message = inC->message_header.nid_message;
                  _77__L1_1_1.l_message = inC->message_header.l_message;
                  _77__L1_1_1.t_train = inC->message_header.t_train;
                  _77__L1_1_1.nid_lrbg = inC->message_header.field2;
                  _75_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
                    INT_M_ACK_acknowledgement_TM_conversions;
                  if (_75_IfBlock1_clock_1_1_1) {
                    _77__L1_1_1.m_ack =
                      ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                  else {
                    _76_else_clock_1_1_1_IfBlock1 =
                      inC->message_header.field1 ==
                      INT_M_ACK_no_acknowledgement_TM_conversions;
                    if (_76_else_clock_1_1_1_IfBlock1) {
                      _77__L1_1_1.m_ack =
                        ENUM_M_ACK_no_acknowledgement_TM_conversions;
                    }
                    else {
                      _77__L1_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                  }
                }
                else {
                  _56_else_clock_1_IfBlock2 = inC->message_header.nid_message ==
                    43;
                  if (_56_else_clock_1_IfBlock2) {
                    _72__L26_1_1.valid = inC->message_header.valid;
                    _72__L26_1_1.nid_message = inC->message_header.nid_message;
                    _72__L26_1_1.l_message = inC->message_header.l_message;
                    _72__L26_1_1.t_train = inC->message_header.t_train;
                    _72__L26_1_1.nid_lrbg = inC->message_header.field2;
                    _73_IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
                      INT_M_ACK_acknowledgement_TM_conversions;
                    if (_73_IfBlock1_clock_1_1_1) {
                      _72__L26_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                    else {
                      _74_else_clock_1_1_1_IfBlock1 =
                        inC->message_header.field1 ==
                        INT_M_ACK_no_acknowledgement_TM_conversions;
                      if (_74_else_clock_1_1_1_IfBlock1) {
                        _72__L26_1_1.m_ack =
                          ENUM_M_ACK_no_acknowledgement_TM_conversions;
                      }
                      else {
                        _72__L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                    }
                  }
                  else {
                    _57_else_clock_1_IfBlock2 =
                      inC->message_header.nid_message == 45;
                    if (_57_else_clock_1_IfBlock2) {
                      _69__L26_1_1.valid = inC->message_header.valid;
                      _69__L26_1_1.nid_message =
                        inC->message_header.nid_message;
                      _69__L26_1_1.l_message = inC->message_header.l_message;
                      _69__L26_1_1.t_train = inC->message_header.t_train;
                      _69__L26_1_1.nid_lrbg = inC->message_header.field2;
                      IfBlock1_clock_1_1_1 = inC->message_header.field1 ==
                        INT_M_ACK_acknowledgement_TM_conversions;
                      if (IfBlock1_clock_1_1_1) {
                      }
                      else {
                        else_clock_1_1_1_IfBlock1 =
                          inC->message_header.field1 ==
                          INT_M_ACK_no_acknowledgement_TM_conversions;
                      }
                      _70_IfBlock1_clock_1_1_1 = inC->message_header.field3 ==
                        INT_Q_ORIENTATION_reverse_TM_conversions;
                      if (_70_IfBlock1_clock_1_1_1) {
                      }
                      else {
                        _71_else_clock_1_1_1_IfBlock1 =
                          inC->message_header.field3 ==
                          INT_Q_ORIENTATION_nominal_TM_conversions;
                      }
                      if (IfBlock1_clock_1_1_1) {
                        _69__L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                      else if (else_clock_1_1_1_IfBlock1) {
                        _69__L26_1_1.m_ack =
                          ENUM_M_ACK_no_acknowledgement_TM_conversions;
                      }
                      else {
                        _69__L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                      if (_70_IfBlock1_clock_1_1_1) {
                        _69__L26_1_1.q_orientation =
                          ENUM_Q_ORIENTATION_reverse_TM_conversions;
                      }
                      else if (_71_else_clock_1_1_1_IfBlock1) {
                        _69__L26_1_1.q_orientation =
                          ENUM_Q_ORIENTATION_nominal_TM_conversions;
                      }
                      else {
                        _69__L26_1_1.q_orientation =
                          ENUM_Q_ORIENTATION_reverse_TM_conversions;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (inC->message_header.nid_message <= 27) {
    if (else_clock_1_1_14_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _L1_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _L1_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _L1_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _L1_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em =
        default_nid_em_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_scale = _L1_1_1.q_scale;
      outC->RadioTrackTrainHeader_out.d_sr = _L1_1_1.d_sr;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (tmp12) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _68__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _68__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _68__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _68__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em =
        default_nid_em_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (_35_else_clock_1_1_14_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _67__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _67__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _67__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _67__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em =
        default_nid_em_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (_10_tmp_1_3_1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _66__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _66__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _66__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _66__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        _66__L26_1_1.t_train_received;
      outC->RadioTrackTrainHeader_out.nid_em =
        default_nid_em_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (tmp14) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _65__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _65__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _65__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _65__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em =
        default_nid_em_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (tmp_1_3_1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _64__L1_2_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _64__L1_2_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _64__L1_2_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _64__L1_2_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em = _64__L1_2_1.nid_em;
      outC->RadioTrackTrainHeader_out.q_scale = _64__L1_2_1.q_scale;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref = _64__L1_2_1.d_ref;
      outC->RadioTrackTrainHeader_out.q_dir = _64__L1_2_1.q_dir;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        _64__L1_2_1.d_emergencystop;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (tmp16) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _L1_2_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _L1_2_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _L1_2_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _L1_2_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em = _L1_2_1.nid_em;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (_36_else_clock_1_1_13_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _63__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _63__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _63__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _63__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em = _63__L26_1_1.nid_em;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (IfBlock1_clock_1_1_13_1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _62__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _62__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _62__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _62__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em =
        default_nid_em_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (else_clock_1_1_13_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em =
        default_nid_em_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_scale =
        default_q_scale_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst = _L26_1_1.t_train_SH_request;
      outC->RadioTrackTrainHeader_out.d_ref =
        default_d_ref_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.q_dir =
        default_q_dir_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        default_d_emergencystop_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else {
      kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
        &outC->RadioTrackTrainHeader_out,
        (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
          &default_header_TM_RBC_conversions_legacy);
    }
  }
  else if (IfBlock2_clock_1) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _95__L1_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _95__L1_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _95__L1_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _95__L1_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst = _95__L1_1_1.t_train_SH_request;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_61_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _94__L1_2_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _94__L1_2_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _94__L1_2_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _94__L1_2_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version = _94__L1_2_1.m_version;
  }
  else if (else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _93__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _93__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _93__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _93__L26_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale = _93__L26_1_1.q_scale;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref = _93__L26_1_1.d_ref;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_60_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _87__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _87__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _87__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _87__L26_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale = _87__L26_1_1.q_scale;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref = _87__L26_1_1.d_ref;
    outC->RadioTrackTrainHeader_out.q_dir = _87__L26_1_1.q_dir;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_54_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _84__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _84__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _84__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _84__L26_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_59_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _81__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _81__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _81__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _81__L26_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_55_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _80__L1_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _80__L1_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _80__L1_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _80__L1_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_58_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _77__L1_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _77__L1_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _77__L1_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _77__L1_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_56_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _72__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _72__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _72__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _72__L26_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_57_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _69__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _69__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _69__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _69__L26_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else {
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->RadioTrackTrainHeader_out,
      (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
        &default_header_TM_RBC_conversions_legacy);
  }
  IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.m_ack ==
    ENUM_M_ACK_acknowledgement_TM_conversions;
  if (IfBlock1_clock_1_1_1) {
  }
  else {
    else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.m_ack ==
      ENUM_M_ACK_no_acknowledgement_TM_conversions;
  }
  _70_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.q_scale ==
    ENUM_Q_SCALE_10cm_TM_conversions;
  if (_70_IfBlock1_clock_1_1_1) {
  }
  else {
    _73_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.q_scale ==
      ENUM_Q_SCALE_1m_TM_conversions;
    if (_73_IfBlock1_clock_1_1_1) {
    }
    else {
      _71_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.q_scale ==
        ENUM_Q_SCALE_10m_TM_conversions;
    }
  }
  _74_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.q_dir ==
    ENUM_Q_DIR_nominal_TM_conversions;
  if (_74_else_clock_1_1_1_IfBlock1) {
  }
  else {
    _76_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.q_dir ==
      ENUM_Q_DIR_reverse_TM_conversions;
    if (_76_else_clock_1_1_1_IfBlock1) {
    }
    else {
      _75_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.q_dir ==
        ENUM_Q_DIR_both_TM_conversions;
    }
  }
  _78_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.m_version ==
    ENUM_M_VERSION_Previous_versions_TM_conversions;
  if (_78_IfBlock1_clock_1_1_1) {
  }
  else {
    _83_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.m_version ==
      ENUM_M_VERSION_Version_1_0_TM_conversions;
    if (_83_else_clock_1_1_1_IfBlock1) {
    }
    else {
      _79_else_clock_1_1_1_IfBlock1 =
        outC->RadioTrackTrainHeader_out.m_version ==
        ENUM_M_VERSION_Version_1_1_TM_conversions;
      if (_79_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _82_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.m_version ==
          ENUM_M_VERSION_Version_2_0_TM_conversions;
      }
    }
  }
  if (inC->P001.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P001.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P001.NID_VBCMK;
    tmp26.valid = inC->P001.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket001_TM - 1;
    _88_IfBlock1_clock_1_1_1 = INT_Q_DIR_both_TM_conversions ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_88_IfBlock1_clock_1_1_1) {
    }
    else {
      _90_IfBlock1_clock_1_1_1 = INT_Q_DIR_both_TM_conversions ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_90_IfBlock1_clock_1_1_1) {
      }
      else {
        _89_else_clock_1_1_1_IfBlock1 = kcg_true;
      }
    }
    if (inC->P001.NID_PACKET == 1) {
      tmp29 = 1 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        INT_Q_DIR_both_TM_conversions *
        DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (_88_IfBlock1_clock_1_1_1) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_90_IfBlock1_clock_1_1_1) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_89_else_clock_1_1_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      _86_else_clock_1_1_1_IfBlock1 =
        inC->packets_in.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_86_else_clock_1_1_1_IfBlock1) {
        _45__L7_1_11_1 = inC->packets_in.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!_86_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    for (i = 0; i < 498; i++) {
      (&_50__L383_1_11_1[2])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      _85_IfBlock1_clock_1_1_1 = _46__L408_1_11_1 >= i;
      if (_85_IfBlock1_clock_1_1_1 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = inC->packets_in.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!_85_IfBlock1_clock_1_1_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &inC->packets_in.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  }
  if (inC->P002.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P002.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P002.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P002.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P002.M_VERSION;
    tmp26.valid = inC->P002.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket002_TM - 1;
    _51_IfBlock1_clock_1_1_11_1 = inC->P002.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_51_IfBlock1_clock_1_1_11_1) {
    }
    else {
      _53_else_clock_1_1_11_1_IfBlock1 = inC->P002.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_53_else_clock_1_1_11_1_IfBlock1) {
      }
      else {
        _52_else_clock_1_1_11_1_IfBlock1 = inC->P002.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P002.NID_PACKET == 2) {
      tmp29 = 2 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P002.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (_51_IfBlock1_clock_1_1_11_1) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_53_else_clock_1_1_11_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_52_else_clock_1_1_11_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      _92_else_clock_1_1_1_IfBlock1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_92_else_clock_1_1_1_IfBlock1) {
        _45__L7_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!_92_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    for (i = 0; i < 496; i++) {
      _32__L209_1_9_1[i] = 0;
    }
    kcg_copy_array_int_496(&_50__L383_1_11_1[4], &_32__L209_1_9_1);
    for (i = 0; i < 500; i++) {
      _91_else_clock_1_1_1_IfBlock1 = _46__L408_1_11_1 >= i;
      if (_91_else_clock_1_1_1_IfBlock1 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!_91_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P003_baseline2.valid) {
    (&(&_50__L383_1_11_1[0])[0])[0] = inC->P003_baseline2.NID_PACKET;
    (&(&_50__L383_1_11_1[0])[0])[1] = inC->P003_baseline2.Q_DIR;
    (&(&_50__L383_1_11_1[0])[0])[2] = inC->P003_baseline2.L_PACKET;
    (&(&_50__L383_1_11_1[0])[0])[3] = inC->P003_baseline2.Q_SCALE;
    (&(&_50__L383_1_11_1[0])[0])[4] = inC->P003_baseline2.D_VALIDNV;
    (&(&_50__L383_1_11_1[0])[0])[5] = inC->P003_baseline2.N_ITER;
    (&(&_50__L383_1_11_1[0])[0])[6] = inC->P003_baseline2.V_NVSHUNT;
    (&(&_50__L383_1_11_1[0])[0])[7] = inC->P003_baseline2.V_NVSTFF;
    (&(&_50__L383_1_11_1[0])[0])[8] = inC->P003_baseline2.V_NVONSIGHT;
    (&(&_50__L383_1_11_1[0])[0])[9] = inC->P003_baseline2.V_NVUNFIT;
    (&(&_50__L383_1_11_1[0])[0])[10] = inC->P003_baseline2.V_NVREL;
    (&(&_50__L383_1_11_1[0])[0])[11] = inC->P003_baseline2.D_NVROLL;
    (&(&_50__L383_1_11_1[0])[0])[12] = inC->P003_baseline2.Q_NVSRBKTRG;
    (&(&_50__L383_1_11_1[0])[0])[13] = inC->P003_baseline2.Q_NVEMRRLS;
    (&(&_50__L383_1_11_1[0])[0])[14] = inC->P003_baseline2.V_NVALLOWOVTRP;
    (&(&_50__L383_1_11_1[0])[0])[15] = inC->P003_baseline2.V_NVSUPOVTRP;
    (&(&_50__L383_1_11_1[0])[0])[16] = inC->P003_baseline2.D_NVOVTRP;
    (&(&_50__L383_1_11_1[0])[0])[17] = inC->P003_baseline2.T_NVOVTRP;
    (&(&_50__L383_1_11_1[0])[0])[18] = inC->P003_baseline2.D_NVPOTRP;
    (&(&_50__L383_1_11_1[0])[0])[19] = inC->P003_baseline2.M_NVCONTACT;
    (&(&_50__L383_1_11_1[0])[0])[20] = inC->P003_baseline2.T_NVCONTACT;
    (&(&_50__L383_1_11_1[0])[0])[21] = inC->P003_baseline2.M_NVDERUN;
    (&(&_50__L383_1_11_1[0])[0])[22] = inC->P003_baseline2.D_NVSTFF;
    (&(&_50__L383_1_11_1[0])[0])[23] = inC->P003_baseline2.Q_NVDRIVER_ADHES;
    tmp26.valid = inC->P003_baseline2.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = 6 + 17 + inC->P003_baseline2.N_ITER * 1 - 1;
    IfBlock1_clock_1_1_11_1 = inC->P003_baseline2.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11_1) {
    }
    else {
      _43_else_clock_1_1_11_1_IfBlock1 = inC->P003_baseline2.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_43_else_clock_1_1_11_1_IfBlock1) {
      }
      else {
        else_clock_1_1_11_1_IfBlock1 = inC->P003_baseline2.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P003_baseline2.NID_PACKET == 3) {
      tmp29 = 3 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P003_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        0 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (IfBlock1_clock_1_1_11_1) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_43_else_clock_1_1_11_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      tmp25 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp25) {
        _45__L7_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!tmp25) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    for (i = 0; i < 444; i++) {
      _L209_1_11_1[i] = 0;
    }
    kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
      &_50__L383_1_11_1[24],
      &inC->P003_baseline2.SECTIONS);
    kcg_copy_array_int_444(&_50__L383_1_11_1[56], &_L209_1_11_1);
    for (i = 0; i < 500; i++) {
      tmp24 = _46__L408_1_11_1 >= i;
      if (tmp24 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!tmp24) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P005.valid) {
    (&(&(&_50__L383_1_11_1[0])[0])[0])[0] = inC->P005.NID_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[1] = inC->P005.Q_DIR;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[2] = inC->P005.L_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[3] = inC->P005.Q_SCALE;
    (&tmp22[0])[0].D_LINK = inC->P005.D_LINK;
    (&tmp22[0])[0].Q_NEWCOUNTRY = inC->P005.Q_NEWCOUNTRY;
    (&tmp22[0])[0].NID_C = inC->P005.NID_C;
    (&tmp22[0])[0].NID_BG = inC->P005.NID_BG;
    (&tmp22[0])[0].Q_LINKORIENTATION = inC->P005.Q_LINKORIENTATION;
    (&tmp22[0])[0].Q_LINKREACTION = inC->P005.Q_LINKREACTION;
    (&tmp22[0])[0].Q_LOCACC = inC->P005.Q_LOCACC;
    tmp26.valid = inC->P005.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = 4 + 1 + 7 + inC->P005.N_ITER * 7 - 1;
    _40_IfBlock1_clock_1_1_13_1 = inC->P005.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_40_IfBlock1_clock_1_1_13_1) {
    }
    else {
      _42_else_clock_1_1_13_1_IfBlock1 = inC->P005.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_42_else_clock_1_1_13_1_IfBlock1) {
      }
      else {
        _41_else_clock_1_1_13_1_IfBlock1 = inC->P005.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P005.NID_PACKET == 5) {
      tmp29 = 5 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P005.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (_40_IfBlock1_clock_1_1_13_1) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_42_else_clock_1_1_13_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_41_else_clock_1_1_13_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      tmp23 = RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp23) {
        _45__L7_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!tmp23) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    _L403_1_13_1[0] = inC->P005.N_ITER;
    kcg_copy_P005_trackide_sectionlist_T_TM(&tmp22[1], &inC->P005.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_13_1[i][0] = tmp22[i].D_LINK;
      _L74_1_1_13_1[i][1] = tmp22[i].Q_NEWCOUNTRY;
      _L74_1_1_13_1[i][2] = tmp22[i].NID_C;
      _L74_1_1_13_1[i][3] = tmp22[i].NID_BG;
      _L74_1_1_13_1[i][4] = tmp22[i].Q_LINKORIENTATION;
      _L74_1_1_13_1[i][5] = tmp22[i].Q_LINKREACTION;
      _L74_1_1_13_1[i][6] = tmp22[i].Q_LOCACC;
    }
    for (i = 0; i < 264; i++) {
      _39__L209_1_13_1[i] = 0;
    }
    kcg_copy_array_int_1(&_50__L383_1_11_1[4], &_L403_1_13_1);
    kcg_copy_P005_sections_array_flat_T_TM(
      &tmp21,
      (P005_sections_array_flat_T_TM *) &DEFAULT_P005_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 7) & (i / 7 < 33) & ((0 <= i % 7) & (i % 7 < 7))) {
        tmp21[i] = _L74_1_1_13_1[i / 7][i % 7];
      }
      else {
        tmp21[i] = 0;
      }
    }
    kcg_copy_P005_sections_array_flat_T_TM(&_50__L383_1_11_1[5], &tmp21);
    kcg_copy_array_int_264(&_50__L383_1_11_1[236], &_39__L209_1_13_1);
    for (i = 0; i < 500; i++) {
      tmp20 = _46__L408_1_11_1 >= i;
      if (tmp20 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P012.valid) {
    (&(&(&_50__L383_1_11_1[0])[0])[0])[0] = inC->P012.NID_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[1] = inC->P012.Q_DIR;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[2] = inC->P012.L_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[3] = inC->P012.Q_SCALE;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[4] = inC->P012.V_MAIN;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[5] = inC->P012.V_LOA;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[6] = inC->P012.T_LOA;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[7] = inC->P012.L_ENDSECTION;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[8] = inC->P012.Q_SECTIONTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[9] = inC->P012.T_SECTIONTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[10] = inC->P012.D_SECTIONTIMERSTOPLOC;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[11] = inC->P012.Q_ENDTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[12] = inC->P012.T_ENDTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[13] = inC->P012.D_ENDTIMERSTARTLOC;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[14] = inC->P012.Q_DANGERPOINT;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[15] = inC->P012.D_DP;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[16] = inC->P012.V_RELEASEDP;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[17] = inC->P012.Q_OVERLAP;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[18] = inC->P012.D_STARTOL;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[19] = inC->P012.T_OL;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[20] = inC->P012.D_OL;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[21] = inC->P012.V_RELEASEOL;
    tmp26.valid = inC->P012.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = 7 + 1 + 15 + inC->P012.N_ITER * 4 - 1;
    _38_IfBlock1_clock_1_1_13_1 = inC->P012.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_38_IfBlock1_clock_1_1_13_1) {
    }
    else {
      else_clock_1_IfBlock2 = inC->P012.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (else_clock_1_IfBlock2) {
      }
      else {
        IfBlock2_clock_1 = inC->P012.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P012.NID_PACKET == 12) {
      tmp29 = 12 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P012.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (_38_IfBlock1_clock_1_1_13_1) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (else_clock_1_IfBlock2) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (IfBlock2_clock_1) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      tmp19 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp19) {
        _45__L7_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!tmp19) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    _L403_1_13_1[0] = inC->P012.N_ITER;
    for (i = 0; i < 32; i++) {
      _L74_1_1_14_1[i][0] = inC->P012.SECTIONS[i].L_SECTION;
      _L74_1_1_14_1[i][1] = inC->P012.SECTIONS[i].Q_SECTIONTIMER;
      _L74_1_1_14_1[i][2] = inC->P012.SECTIONS[i].T_SECTIONTIMER;
      _L74_1_1_14_1[i][3] = inC->P012.SECTIONS[i].D_SECTIONTIMERSTOPLOC;
    }
    for (i = 0; i < 349; i++) {
      _37__L209_1_13_1[i] = 0;
    }
    kcg_copy_array_int_1(&_50__L383_1_11_1[22], &_L403_1_13_1);
    kcg_copy_P015_sections_array_flat_T_TM(
      &tmp17,
      (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
    for (i = 0; i < 128; i++) {
      if ((0 <= i / 4) & (i / 4 < 32) & ((0 <= i % 4) & (i % 4 < 4))) {
        tmp17[i] = _L74_1_1_14_1[i / 4][i % 4];
      }
      else {
        tmp17[i] = 0;
      }
    }
    kcg_copy_P015_sections_array_flat_T_TM(&_50__L383_1_11_1[23], &tmp17);
    kcg_copy_array_int_349(&_50__L383_1_11_1[151], &_37__L209_1_13_1);
    for (i = 0; i < 500; i++) {
      tmp18 = _46__L408_1_11_1 >= i;
      if (tmp18 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!tmp18) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P015.valid) {
    (&(&(&_50__L383_1_11_1[0])[0])[0])[0] = inC->P015.NID_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[1] = inC->P015.Q_DIR;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[2] = inC->P015.L_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[3] = inC->P015.Q_SCALE;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[4] = inC->P015.V_LOA;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[5] = inC->P015.T_LOA;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[6] = inC->P015.L_ENDSECTION;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[7] = inC->P015.Q_SECTIONTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[8] = inC->P015.T_SECTIONTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[9] = inC->P015.D_SECTIONTIMERSTOPLOC;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[10] = inC->P015.Q_ENDTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[11] = inC->P015.T_ENDTIMER;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[12] = inC->P015.D_ENDTIMERSTARTLOC;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[13] = inC->P015.Q_DANGERPOINT;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[14] = inC->P015.D_DP;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[15] = inC->P015.V_RELEASEDP;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[16] = inC->P015.Q_OVERLAP;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[17] = inC->P015.D_STARTOL;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[18] = inC->P015.T_OL;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[19] = inC->P015.D_OL;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[20] = inC->P015.V_RELEASEOL;
    tmp26.valid = inC->P015.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = 6 + 1 + 15 + inC->P015.N_ITER * 4 - 1;
    _56_else_clock_1_IfBlock2 = inC->P015.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_56_else_clock_1_IfBlock2) {
    }
    else {
      _58_else_clock_1_IfBlock2 = inC->P015.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_58_else_clock_1_IfBlock2) {
      }
      else {
        _57_else_clock_1_IfBlock2 = inC->P015.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P015.NID_PACKET == 15) {
      tmp29 = 15 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P015.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (_56_else_clock_1_IfBlock2) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_58_else_clock_1_IfBlock2) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_57_else_clock_1_IfBlock2) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      _55_else_clock_1_IfBlock2 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_55_else_clock_1_IfBlock2) {
        _45__L7_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!_55_else_clock_1_IfBlock2) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    _L403_1_13_1[0] = inC->P015.N_ITER;
    for (i = 0; i < 32; i++) {
      _L74_1_1_14_1[i][0] = inC->P015.SECTIONS[i].L_SECTION;
      _L74_1_1_14_1[i][1] = inC->P015.SECTIONS[i].Q_SECTIONTIMER;
      _L74_1_1_14_1[i][2] = inC->P015.SECTIONS[i].T_SECTIONTIMER;
      _L74_1_1_14_1[i][3] = inC->P015.SECTIONS[i].D_SECTIONTIMERSTOPLOC;
    }
    for (i = 0; i < 350; i++) {
      _L209_1_14_1[i] = 0;
    }
    kcg_copy_array_int_1(&_50__L383_1_11_1[21], &_L403_1_13_1);
    kcg_copy_P015_sections_array_flat_T_TM(
      &tmp17,
      (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
    for (i = 0; i < 128; i++) {
      if ((0 <= i / 4) & (i / 4 < 32) & ((0 <= i % 4) & (i % 4 < 4))) {
        tmp17[i] = _L74_1_1_14_1[i / 4][i % 4];
      }
      else {
        tmp17[i] = 0;
      }
    }
    kcg_copy_P015_sections_array_flat_T_TM(&_50__L383_1_11_1[22], &tmp17);
    kcg_copy_array_int_350(&_50__L383_1_11_1[150], &_L209_1_14_1);
    for (i = 0; i < 500; i++) {
      _54_else_clock_1_IfBlock2 = _46__L408_1_11_1 >= i;
      if (_54_else_clock_1_IfBlock2 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!_54_else_clock_1_IfBlock2) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P016.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P016.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P016.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P016.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P016.Q_SCALE;
    (&_50__L383_1_11_1[0])[4] = inC->P016.L_SECTION;
    tmp26.valid = inC->P016.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket016_TM - 1;
    _61_else_clock_1_IfBlock2 = inC->P016.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_61_else_clock_1_IfBlock2) {
    }
    else {
      _35_else_clock_1_1_14_1_IfBlock1 = inC->P016.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_35_else_clock_1_1_14_1_IfBlock1) {
      }
      else {
        else_clock_1_1_14_1_IfBlock1 = inC->P016.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P016.NID_PACKET == 16) {
      tmp29 = 16 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P016.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (_61_else_clock_1_IfBlock2) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_35_else_clock_1_1_14_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_14_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      _60_else_clock_1_IfBlock2 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_60_else_clock_1_IfBlock2) {
        _45__L7_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!_60_else_clock_1_IfBlock2) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    for (i = 0; i < 495; i++) {
      _L209_1_2_1[i] = 0;
    }
    kcg_copy_array_int_495(&_50__L383_1_11_1[5], &_L209_1_2_1);
    for (i = 0; i < 500; i++) {
      _59_else_clock_1_IfBlock2 = _46__L408_1_11_1 >= i;
      if (_59_else_clock_1_IfBlock2 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!_59_else_clock_1_IfBlock2) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P021.valid) {
    (&(&(&_50__L383_1_11_1[0])[0])[0])[0] = inC->P021.NID_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[1] = inC->P021.Q_DIR;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[2] = inC->P021.L_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[3] = inC->P021.Q_SCALE;
    (&tmp15[0])[0].D_GRADIENT = inC->P021.D_GRADIENT;
    (&tmp15[0])[0].Q_GDIR = inC->P021.Q_GDIR;
    (&tmp15[0])[0].G_A = inC->P021.G_A;
    tmp26.valid = inC->P021.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = 4 + 1 + 3 + inC->P021.N_ITER * 3 - 1;
    IfBlock1_clock_1_1_13_1 = inC->P021.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_13_1) {
    }
    else {
      _36_else_clock_1_1_13_1_IfBlock1 = inC->P021.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_36_else_clock_1_1_13_1_IfBlock1) {
      }
      else {
        else_clock_1_1_13_1_IfBlock1 = inC->P021.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P021.NID_PACKET == 21) {
      _44__L3_1_11_1 = 21 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P021.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _44__L3_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = _44__L3_1_11_1;
    if (IfBlock1_clock_1_1_13_1) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_36_else_clock_1_1_13_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_13_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp30 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp26.q_dir = tmp30;
    _46__L408_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp29 = _46__L408_1_11_1;
      tmp16 = RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp16) {
        _46__L408_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _46__L408_1_11_1 = tmp29;
      }
      _45__L7_1_11_1 = i + 1;
      if (!tmp16) {
        break;
      }
    }
    if (_46__L408_1_11_1 == 0) {
      _49_noname_1_11_1 = 0;
    }
    else {
      _49_noname_1_11_1 = _46__L408_1_11_1 + 1;
    }
    _47__L407_1_11_1 = _49_noname_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    _L403_1_13_1[0] = inC->P021.N_ITER;
    kcg_copy_P021_trackide_sectionlist_T_TM(&tmp15[1], &inC->P021.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_12_1[i][0] = tmp15[i].D_GRADIENT;
      _L74_1_1_12_1[i][1] = tmp15[i].Q_GDIR;
      _L74_1_1_12_1[i][2] = tmp15[i].G_A;
    }
    for (i = 0; i < 396; i++) {
      _L209_1_13_1[i] = 0;
    }
    kcg_copy_array_int_1(&_50__L383_1_11_1[4], &_L403_1_13_1);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp5,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P021_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp28 = _L74_1_1_12_1[i / 3][i % 3];
      }
      else {
        tmp28 = 0;
      }
      if ((0 <= i) & (i < 99)) {
        tmp5[i] = tmp28;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_50__L383_1_11_1[5], &tmp5);
    kcg_copy_array_int_396(&_50__L383_1_11_1[104], &_L209_1_13_1);
    for (i = 0; i < 500; i++) {
      tmp14 = _47__L407_1_11_1 >= i;
      if (tmp14 & (i >= _49_noname_1_11_1)) {
        if ((0 <= i - _49_noname_1_11_1) & (i - _49_noname_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _49_noname_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      tmp13 = i + 1;
      if (!tmp14) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp13; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _49_noname_1_11_1;
    tmp26.endAddress = _47__L407_1_11_1;
    if ((0 <= _45__L7_1_11_1 - 1) & (_45__L7_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[_45__L7_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P027_baseline2.valid) {
    (&tmp11[0])[0].D_STATIC = inC->P027_baseline2.D_STATIC;
    (&tmp11[0])[0].V_STATIC = inC->P027_baseline2.V_STATIC;
    (&tmp11[0])[0].Q_FRONT = inC->P027_baseline2.Q_FRONT;
    (&tmp11[0])[0].N_ITER = inC->P027_baseline2.N_ITER_n;
    kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
      &(&tmp11[0])[0].SECTIONS_q_diff,
      &inC->P027_baseline2.SECTIONS_q_diff);
    (&_L383_1_11_1[0])[0] = inC->P027_baseline2.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P027_baseline2.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P027_baseline2.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P027_baseline2.Q_SCALE;
    (&_L383_1_11_1[0])[4] = inC->P027_baseline2.N_ITER_k;
    tmp8.valid = inC->P027_baseline2.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 6 - 1;
    _86_else_clock_1_1_1_IfBlock1 = inC->P027_baseline2.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_86_else_clock_1_1_1_IfBlock1) {
      tmp30 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _89_else_clock_1_1_1_IfBlock1 = inC->P027_baseline2.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_89_else_clock_1_1_1_IfBlock1) {
        tmp30 = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        _88_IfBlock1_clock_1_1_1 = inC->P027_baseline2.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (_88_IfBlock1_clock_1_1_1) {
          tmp30 = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp30 = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp8.q_dir = tmp30;
    if (inC->P027_baseline2.NID_PACKET == 27) {
      _L3_1_11_1 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P027_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        0 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _L3_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _L3_1_11_1;
    _L408_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp9 = _L408_1_11_1;
      _85_IfBlock1_clock_1_1_1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_85_IfBlock1_clock_1_1_1) {
        _L408_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _L408_1_11_1 = tmp9;
      }
      _L7_1_11_1 = i + 1;
      if (!_85_IfBlock1_clock_1_1_1) {
        break;
      }
    }
    if (_L408_1_11_1 == 0) {
      noname_1_11_1 = 0;
    }
    else {
      noname_1_11_1 = _L408_1_11_1 + 1;
    }
    _L407_1_11_1 = noname_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    if (inC->P027_baseline2.NID_PACKET == 27) {
      tmp13 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P027_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        100 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp13 = ERROR_nid_packet_TM;
    }
    (&_L383_1_11_1[0])[5] = tmp13;
    for (i = 0; i < 494; i++) {
      _L427_1_12_1[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11_1[6], &_L427_1_12_1);
    for (i = 0; i < 500; i++) {
      tmp12 = _L407_1_11_1 >= i;
      if (tmp12 & (i >= noname_1_11_1)) {
        if ((0 <= i - noname_1_11_1) & (i - noname_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - noname_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      tmp7 = i + 1;
      if (!tmp12) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp7; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = noname_1_11_1;
    tmp8.endAddress = _L407_1_11_1;
    if ((0 <= _L7_1_11_1 - 1) & (_L7_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_L7_1_11_1 - 1],
        &tmp8);
    }
    kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
      &tmp11[1],
      &inC->P027_baseline2.SECTIONS_SSP);
    for (i = 0; i < 33; i++) {
      (&(&_48__L406_1_11_1[0])[0])[0] = tmp11[i].D_STATIC;
      (&(&_48__L406_1_11_1[0])[0])[1] = tmp11[i].V_STATIC;
      (&(&_48__L406_1_11_1[0])[0])[2] = tmp11[i].Q_FRONT;
      (&(&_48__L406_1_11_1[0])[0])[3] = tmp11[i].N_ITER;
      tmp26.nid_packet = i + tmp13;
      tmp26.q_dir = tmp30;
      tmp26.valid = kcg_true;
      tmp26.startAddress = 0;
      tmp26.endAddress = 4 + tmp11[i].N_ITER * 2 - 1;
      _44__L3_1_11_1 = 0;
      for (tmp29 = 0; tmp29 < 30; tmp29++) {
        tmp28 = _44__L3_1_11_1;
        tmp_1_3_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[tmp29].nid_packet !=
          DEFAULT_Headers_TM[tmp29].nid_packet;
        if (tmp_1_3_1) {
          _44__L3_1_11_1 =
            RadioMessagePackets_01_02_1.PacketHeaders[tmp29].endAddress;
        }
        else {
          _44__L3_1_11_1 = tmp28;
        }
        _45__L7_1_11_1 = tmp29 + 1;
        if (!tmp_1_3_1) {
          break;
        }
      }
      if (_44__L3_1_11_1 == 0) {
        _47__L407_1_11_1 = 0;
      }
      else {
        _47__L407_1_11_1 = _44__L3_1_11_1 + 1;
      }
      _49_noname_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
          tmp26.startAddress);
      for (tmp29 = 0; tmp29 < 32; tmp29++) {
        _L74_1_1_9_1[tmp29][0] = tmp11[i].SECTIONS_q_diff[tmp29].NC_DIFF;
        _L74_1_1_9_1[tmp29][1] = tmp11[i].SECTIONS_q_diff[tmp29].V_DIFF;
      }
      for (tmp29 = 0; tmp29 < 432; tmp29++) {
        _L448_2_1_3_1[tmp29] = 0;
      }
      kcg_copy_P058_sections_array_flat_T_TM(
        &tmp2,
        (P058_sections_array_flat_T_TM *)
          &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
      for (tmp29 = 0; tmp29 < 32; tmp29++) {
        if ((0 <= tmp29 / 2) & (tmp29 / 2 < 32) & ((0 <= tmp29 % 2) & (tmp29 %
              2 < 2))) {
          tmp2[tmp29] = _L74_1_1_9_1[tmp29 / 2][tmp29 % 2];
        }
        else {
          tmp2[tmp29] = 0;
        }
      }
      kcg_copy_P058_sections_array_flat_T_TM(&_48__L406_1_11_1[4], &tmp2);
      kcg_copy_array_int_432(&_48__L406_1_11_1[68], &_L448_2_1_3_1);
      for (tmp29 = 0; tmp29 < 500; tmp29++) {
        _10_tmp_1_3_1 = _49_noname_1_11_1 >= tmp29;
        if (_10_tmp_1_3_1 & (tmp29 >= _47__L407_1_11_1)) {
          if ((0 <= tmp29 - _47__L407_1_11_1) & (tmp29 - _47__L407_1_11_1 <
              500)) {
            _50__L383_1_11_1[tmp29] = _48__L406_1_11_1[tmp29 -
              _47__L407_1_11_1];
          }
          else {
            _50__L383_1_11_1[tmp29] = 0;
          }
        }
        else {
          _50__L383_1_11_1[tmp29] =
            RadioMessagePackets_01_02_1.PacketData[tmp29];
        }
        _46__L408_1_11_1 = tmp29 + 1;
        if (!_10_tmp_1_3_1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (tmp29 = _46__L408_1_11_1; tmp29 < 500; tmp29++) {
        _50__L383_1_11_1[tmp29] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27,
        &RadioMessagePackets_01_02_1.PacketHeaders);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketData,
        &_50__L383_1_11_1);
      tmp26.startAddress = _47__L407_1_11_1;
      tmp26.endAddress = _49_noname_1_11_1;
      if ((0 <= _45__L7_1_11_1 - 1) & (_45__L7_1_11_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27[_45__L7_1_11_1 - 1],
          &tmp26);
      }
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders,
        &tmp27);
      if (!(inC->P027_baseline2.N_ITER_k > i)) {
        break;
      }
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P039_baseline2.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P039_baseline2.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P039_baseline2.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P039_baseline2.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P039_baseline2.Q_SCALE;
    (&_50__L383_1_11_1[0])[4] = inC->P039_baseline2.D_TRACTION;
    (&_50__L383_1_11_1[0])[5] = inC->P039_baseline2.M_TRACTION;
    tmp26.valid = inC->P039_baseline2.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket039V1_TM - 1;
    _92_else_clock_1_1_1_IfBlock1 = inC->P039_baseline2.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_92_else_clock_1_1_1_IfBlock1) {
    }
    else {
      _52_else_clock_1_1_11_1_IfBlock1 = inC->P039_baseline2.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_52_else_clock_1_1_11_1_IfBlock1) {
      }
      else {
        _51_IfBlock1_clock_1_1_11_1 = inC->P039_baseline2.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P039_baseline2.NID_PACKET == 39) {
      tmp29 = 39 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P039_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        0 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (_92_else_clock_1_1_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_52_else_clock_1_1_11_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_51_IfBlock1_clock_1_1_11_1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      _91_else_clock_1_1_1_IfBlock1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_91_else_clock_1_1_1_IfBlock1) {
        _45__L7_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!_91_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12_1[i] = 0;
    }
    kcg_copy_array_int_494(&_50__L383_1_11_1[6], &_L427_1_12_1);
    for (i = 0; i < 500; i++) {
      _90_IfBlock1_clock_1_1_1 = _46__L408_1_11_1 >= i;
      if (_90_IfBlock1_clock_1_1_1 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _49_noname_1_11_1 = i + 1;
      if (!_90_IfBlock1_clock_1_1_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _49_noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P040.valid) {
    (&_L383_1_11_1[0])[0] = inC->P040.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P040.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P040.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P040.Q_SCALE;
    (&_L383_1_11_1[0])[4] = inC->P040.D_CURRENT;
    (&_L383_1_11_1[0])[5] = inC->P040.M_CURRENT;
    tmp8.valid = inC->P040.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket040_TM - 1;
    tmp25 = inC->P040.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp25) {
    }
    else {
      else_clock_1_1_11_1_IfBlock1 = inC->P040.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (else_clock_1_1_11_1_IfBlock1) {
      }
      else {
        IfBlock1_clock_1_1_11_1 = inC->P040.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P040.NID_PACKET == 40) {
      tmp9 = 40 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P040.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp9 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = tmp9;
    if (tmp25) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (else_clock_1_1_11_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11_1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp13 = _L7_1_11_1;
      tmp24 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp24) {
        _L7_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _L7_1_11_1 = tmp13;
      }
      _L3_1_11_1 = i + 1;
      if (!tmp24) {
        break;
      }
    }
    if (_L7_1_11_1 == 0) {
      _L407_1_11_1 = 0;
    }
    else {
      _L407_1_11_1 = _L7_1_11_1 + 1;
    }
    _L408_1_11_1 = _L407_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12_1[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11_1[6], &_L427_1_12_1);
    for (i = 0; i < 500; i++) {
      _53_else_clock_1_1_11_1_IfBlock1 = _L408_1_11_1 >= i;
      if (_53_else_clock_1_1_11_1_IfBlock1 & (i >= _L407_1_11_1)) {
        if ((0 <= i - _L407_1_11_1) & (i - _L407_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L407_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      noname_1_11_1 = i + 1;
      if (!_53_else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L407_1_11_1;
    tmp8.endAddress = _L408_1_11_1;
    if ((0 <= _L3_1_11_1 - 1) & (_L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_L3_1_11_1 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P041.valid) {
    (&(&(&_50__L383_1_11_1[0])[0])[0])[0] = inC->P041.NID_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[1] = inC->P041.Q_DIR;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[2] = inC->P041.L_PACKET;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[3] = inC->P041.Q_SCALE;
    (&(&(&_50__L383_1_11_1[0])[0])[0])[4] = inC->P041.D_LEVELTR;
    (&tmp6[0])[0].M_LEVELTR = inC->P041.M_LEVELTR;
    (&tmp6[0])[0].NID_NTC = inC->P041.NID_NTC;
    (&tmp6[0])[0].L_ACKLEVELTR = inC->P041.L_ACKLEVELTR;
    tmp26.valid = inC->P041.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = 5 + 1 + 3 + inC->P041.N_ITER * 3 - 1;
    tmp23 = inC->P041.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp23) {
    }
    else {
      _41_else_clock_1_1_13_1_IfBlock1 = inC->P041.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_41_else_clock_1_1_13_1_IfBlock1) {
      }
      else {
        _40_IfBlock1_clock_1_1_13_1 = inC->P041.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P041.NID_PACKET == 41) {
      tmp28 = 41 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P041.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp28 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp28;
    if (tmp23) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_41_else_clock_1_1_13_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_40_IfBlock1_clock_1_1_13_1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _44__L3_1_11_1;
      tmp20 = RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp20) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = tmp7;
      }
      tmp29 = i + 1;
      if (!tmp20) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    _L403_1_13_1[0] = inC->P041.N_ITER;
    kcg_copy_P041_trackide_sectionlist_T_TM(&tmp6[1], &inC->P041.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_12_1[i][0] = tmp6[i].M_LEVELTR;
      _L74_1_1_12_1[i][1] = tmp6[i].NID_NTC;
      _L74_1_1_12_1[i][2] = tmp6[i].L_ACKLEVELTR;
    }
    for (i = 0; i < 395; i++) {
      _L209_1_12_1[i] = 0;
    }
    kcg_copy_array_int_1(&_50__L383_1_11_1[5], &_L403_1_13_1);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp5,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp5[i] = _L74_1_1_12_1[i / 3][i % 3];
      }
      else {
        tmp5[i] = 0;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_50__L383_1_11_1[6], &tmp5);
    kcg_copy_array_int_395(&_50__L383_1_11_1[105], &_L209_1_12_1);
    for (i = 0; i < 500; i++) {
      _43_else_clock_1_1_11_1_IfBlock1 = _45__L7_1_11_1 >= i;
      if (_43_else_clock_1_1_11_1_IfBlock1 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _47__L407_1_11_1 = i + 1;
      if (!_43_else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _47__L407_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P042.valid) {
    (&_L383_1_11_1[0])[0] = inC->P042.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P042.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P042.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P042.Q_RBC;
    (&_L383_1_11_1[0])[4] = inC->P042.NID_C;
    (&_L383_1_11_1[0])[5] = inC->P042.NID_RBC;
    (&_L383_1_11_1[0])[6] = inC->P042.NID_RADIO;
    (&_L383_1_11_1[0])[7] = inC->P042.Q_SLEEPSESSION;
    tmp8.valid = inC->P042.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket042_TM - 1;
    else_clock_1_IfBlock2 = inC->P042.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (else_clock_1_IfBlock2) {
    }
    else {
      tmp19 = inC->P042.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (tmp19) {
      }
      else {
        tmp18 = inC->P042.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P042.NID_PACKET == 42) {
      tmp13 = 42 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P042.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp13 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = tmp13;
    if (else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (tmp19) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp18) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      _49_noname_1_11_1 = _L3_1_11_1;
      IfBlock2_clock_1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (IfBlock2_clock_1) {
        _L3_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_11_1 = _49_noname_1_11_1;
      }
      tmp9 = i + 1;
      if (!IfBlock2_clock_1) {
        break;
      }
    }
    if (_L3_1_11_1 == 0) {
      _L408_1_11_1 = 0;
    }
    else {
      _L408_1_11_1 = _L3_1_11_1 + 1;
    }
    _L7_1_11_1 = _L408_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 492; i++) {
      (&_L383_1_11_1[8])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      _42_else_clock_1_1_13_1_IfBlock1 = _L7_1_11_1 >= i;
      if (_42_else_clock_1_1_13_1_IfBlock1 & (i >= _L408_1_11_1)) {
        if ((0 <= i - _L408_1_11_1) & (i - _L408_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L408_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L407_1_11_1 = i + 1;
      if (!_42_else_clock_1_1_13_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L408_1_11_1;
    tmp8.endAddress = _L7_1_11_1;
    if ((0 <= tmp9 - 1) & (tmp9 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[tmp9 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P045.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P045.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P045.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P045.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P045.NID_MN;
    tmp26.valid = inC->P045.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket045_TM - 1;
    _55_else_clock_1_IfBlock2 = inC->P045.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_55_else_clock_1_IfBlock2) {
    }
    else {
      _57_else_clock_1_IfBlock2 = inC->P045.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_57_else_clock_1_IfBlock2) {
      }
      else {
        _56_else_clock_1_IfBlock2 = inC->P045.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P045.NID_PACKET == 45) {
      tmp28 = 45 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P045.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp28 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp28;
    if (_55_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_57_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_56_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11_1 = _44__L3_1_11_1;
      _54_else_clock_1_IfBlock2 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_54_else_clock_1_IfBlock2) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = noname_1_11_1;
      }
      tmp29 = i + 1;
      if (!_54_else_clock_1_IfBlock2) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 496; i++) {
      _32__L209_1_9_1[i] = 0;
    }
    kcg_copy_array_int_496(&_50__L383_1_11_1[4], &_32__L209_1_9_1);
    for (i = 0; i < 500; i++) {
      _38_IfBlock1_clock_1_1_13_1 = _45__L7_1_11_1 >= i;
      if (_38_IfBlock1_clock_1_1_13_1 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _47__L407_1_11_1 = i + 1;
      if (!_38_IfBlock1_clock_1_1_13_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _47__L407_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P046.valid) {
    (&(&(&_L383_1_11_1[0])[0])[0])[0] = inC->P046.NID_PACKET;
    (&(&(&_L383_1_11_1[0])[0])[0])[1] = inC->P046.Q_DIR;
    (&(&(&_L383_1_11_1[0])[0])[0])[2] = inC->P046.L_PACKET;
    (&tmp4[0])[0].M_LEVELTR = inC->P046.M_LEVELTR;
    (&tmp4[0])[0].NID_NTC = inC->P046.NID_NTC;
    tmp8.valid = inC->P046.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 3 + 1 + 2 + inC->P046.N_ITER * 2 - 1;
    _60_else_clock_1_IfBlock2 = inC->P046.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_60_else_clock_1_IfBlock2) {
    }
    else {
      else_clock_1_1_14_1_IfBlock1 = inC->P046.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (else_clock_1_1_14_1_IfBlock1) {
      }
      else {
        _61_else_clock_1_IfBlock2 = inC->P046.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P046.NID_PACKET == 46) {
      tmp13 = 46 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P046.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp13 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = tmp13;
    if (_60_else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (else_clock_1_1_14_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_61_else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      _49_noname_1_11_1 = _L3_1_11_1;
      _59_else_clock_1_IfBlock2 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_59_else_clock_1_IfBlock2) {
        _L3_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_11_1 = _49_noname_1_11_1;
      }
      tmp9 = i + 1;
      if (!_59_else_clock_1_IfBlock2) {
        break;
      }
    }
    if (_L3_1_11_1 == 0) {
      _L408_1_11_1 = 0;
    }
    else {
      _L408_1_11_1 = _L3_1_11_1 + 1;
    }
    _L7_1_11_1 = _L408_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    _L403_1_13_1[0] = inC->P046.N_ITER;
    kcg_copy_P046_trackide_sectionlist_T_TM(&tmp4[1], &inC->P046.SECTIONS);
    for (i = 0; i < 33; i++) {
      _34__L74_1_1_9_1[i][0] = tmp4[i].M_LEVELTR;
      _34__L74_1_1_9_1[i][1] = tmp4[i].NID_NTC;
    }
    for (i = 0; i < 430; i++) {
      _33__L209_1_9_1[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_11_1[3], &_L403_1_13_1);
    kcg_copy_P046_sections_array_flat_T_TM(
      &tmp3,
      (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 2) & (i / 2 < 33) & ((0 <= i % 2) & (i % 2 < 2))) {
        tmp7 = _34__L74_1_1_9_1[i / 2][i % 2];
      }
      else {
        tmp7 = 0;
      }
      if ((0 <= i) & (i < 66)) {
        tmp3[i] = tmp7;
      }
    }
    kcg_copy_P046_sections_array_flat_T_TM(&_L383_1_11_1[4], &tmp3);
    kcg_copy_array_int_430(&_L383_1_11_1[70], &_33__L209_1_9_1);
    for (i = 0; i < 500; i++) {
      _58_else_clock_1_IfBlock2 = _L7_1_11_1 >= i;
      if (_58_else_clock_1_IfBlock2 & (i >= _L408_1_11_1)) {
        if ((0 <= i - _L408_1_11_1) & (i - _L408_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L408_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L407_1_11_1 = i + 1;
      if (!_58_else_clock_1_IfBlock2) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L408_1_11_1;
    tmp8.endAddress = _L7_1_11_1;
    if ((0 <= tmp9 - 1) & (tmp9 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[tmp9 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P057.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P057.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P057.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P057.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P057.T_MAR;
    (&_50__L383_1_11_1[0])[4] = inC->P057.T_TIMEOUTRQST;
    (&_50__L383_1_11_1[0])[5] = inC->P057.T_CYCRQST;
    tmp26.valid = inC->P057.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket057_TM - 1;
    tmp16 = inC->P057.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp16) {
    }
    else {
      else_clock_1_1_13_1_IfBlock1 = inC->P057.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (else_clock_1_1_13_1_IfBlock1) {
      }
      else {
        IfBlock1_clock_1_1_13_1 = inC->P057.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P057.NID_PACKET == 57) {
      tmp29 = 57 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P057.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp29 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp29;
    if (tmp16) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (else_clock_1_1_13_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_13_1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _45__L7_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp28 = _45__L7_1_11_1;
      tmp14 = RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp14) {
        _45__L7_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _45__L7_1_11_1 = tmp28;
      }
      _44__L3_1_11_1 = i + 1;
      if (!tmp14) {
        break;
      }
    }
    if (_45__L7_1_11_1 == 0) {
      _47__L407_1_11_1 = 0;
    }
    else {
      _47__L407_1_11_1 = _45__L7_1_11_1 + 1;
    }
    _46__L408_1_11_1 = _47__L407_1_11_1 + (tmp26.endAddress -
        tmp26.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12_1[i] = 0;
    }
    kcg_copy_array_int_494(&_50__L383_1_11_1[6], &_L427_1_12_1);
    for (i = 0; i < 500; i++) {
      _35_else_clock_1_1_14_1_IfBlock1 = _46__L408_1_11_1 >= i;
      if (_35_else_clock_1_1_14_1_IfBlock1 & (i >= _47__L407_1_11_1)) {
        if ((0 <= i - _47__L407_1_11_1) & (i - _47__L407_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _47__L407_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      noname_1_11_1 = i + 1;
      if (!_35_else_clock_1_1_14_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _47__L407_1_11_1;
    tmp26.endAddress = _46__L408_1_11_1;
    if ((0 <= _44__L3_1_11_1 - 1) & (_44__L3_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[_44__L3_1_11_1 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P058.valid) {
    (&(&_L383_1_11_1[0])[0])[0] = inC->P058.NID_PACKET;
    (&(&_L383_1_11_1[0])[0])[1] = inC->P058.Q_DIR;
    (&(&_L383_1_11_1[0])[0])[2] = inC->P058.L_PACKET;
    (&(&_L383_1_11_1[0])[0])[3] = inC->P058.Q_SCALE;
    (&(&_L383_1_11_1[0])[0])[4] = inC->P058.T_CYCLOC;
    (&(&_L383_1_11_1[0])[0])[5] = inC->P058.D_CYCLOC;
    (&(&_L383_1_11_1[0])[0])[6] = inC->P058.M_LOC;
    (&(&_L383_1_11_1[0])[0])[7] = inC->P058.N_ITER;
    tmp8.valid = inC->P058.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 8 + inC->P058.N_ITER * 2 - 1;
    _86_else_clock_1_1_1_IfBlock1 = inC->P058.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_86_else_clock_1_1_1_IfBlock1) {
    }
    else {
      _89_else_clock_1_1_1_IfBlock1 = inC->P058.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_89_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _88_IfBlock1_clock_1_1_1 = inC->P058.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P058.NID_PACKET == 58) {
      tmp13 = 58 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P058.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp13 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = tmp13;
    if (_86_else_clock_1_1_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_89_else_clock_1_1_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_88_IfBlock1_clock_1_1_1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      _49_noname_1_11_1 = _L3_1_11_1;
      _85_IfBlock1_clock_1_1_1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_85_IfBlock1_clock_1_1_1) {
        _L3_1_11_1 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_11_1 = _49_noname_1_11_1;
      }
      tmp9 = i + 1;
      if (!_85_IfBlock1_clock_1_1_1) {
        break;
      }
    }
    if (_L3_1_11_1 == 0) {
      _L408_1_11_1 = 0;
    }
    else {
      _L408_1_11_1 = _L3_1_11_1 + 1;
    }
    _L7_1_11_1 = _L408_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 32; i++) {
      _L74_1_1_9_1[i][0] = inC->P058.SECTIONS[i].D_LOC;
      _L74_1_1_9_1[i][1] = inC->P058.SECTIONS[i].Q_LGTLOC;
    }
    for (i = 0; i < 428; i++) {
      _L209_1_9_1[i] = 0;
    }
    kcg_copy_P058_sections_array_flat_T_TM(
      &tmp2,
      (P058_sections_array_flat_T_TM *) &DEFAULT_P058_sections_array_flat_TM);
    for (i = 0; i < 64; i++) {
      if ((0 <= i / 2) & (i / 2 < 32) & ((0 <= i % 2) & (i % 2 < 2))) {
        tmp2[i] = _L74_1_1_9_1[i / 2][i % 2];
      }
      else {
        tmp2[i] = 0;
      }
    }
    kcg_copy_P058_sections_array_flat_T_TM(&_L383_1_11_1[8], &tmp2);
    kcg_copy_array_int_428(&_L383_1_11_1[72], &_L209_1_9_1);
    for (i = 0; i < 500; i++) {
      _36_else_clock_1_1_13_1_IfBlock1 = _L7_1_11_1 >= i;
      if (_36_else_clock_1_1_13_1_IfBlock1 & (i >= _L408_1_11_1)) {
        if ((0 <= i - _L408_1_11_1) & (i - _L408_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L408_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L407_1_11_1 = i + 1;
      if (!_36_else_clock_1_1_13_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L408_1_11_1;
    tmp8.endAddress = _L7_1_11_1;
    if ((0 <= tmp9 - 1) & (tmp9 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[tmp9 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P064.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P064.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P064.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P064.L_PACKET;
    tmp26.valid = inC->P064.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket064_TM - 1;
    tmp12 = inC->P064.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp12) {
    }
    else {
      _91_else_clock_1_1_1_IfBlock1 = inC->P064.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_91_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _90_IfBlock1_clock_1_1_1 = inC->P064.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P064.NID_PACKET == 64) {
      tmp28 = 64 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P064.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp28 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp28;
    if (tmp12) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_91_else_clock_1_1_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_90_IfBlock1_clock_1_1_1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _44__L3_1_11_1;
      _10_tmp_1_3_1 = RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_10_tmp_1_3_1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = tmp7;
      }
      tmp29 = i + 1;
      if (!_10_tmp_1_3_1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5_1[i] = 0;
    }
    kcg_copy_array_int_497(&_50__L383_1_11_1[3], &_L209_1_5_1);
    for (i = 0; i < 500; i++) {
      tmp_1_3_1 = _45__L7_1_11_1 >= i;
      if (tmp_1_3_1 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _47__L407_1_11_1 = i + 1;
      if (!tmp_1_3_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _47__L407_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P065.valid) {
    (&_L383_1_11_1[0])[0] = inC->P065.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P065.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P065.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P065.Q_SCALE;
    (&_L383_1_11_1[0])[4] = inC->P065.NID_TSR;
    (&_L383_1_11_1[0])[5] = inC->P065.D_TSR;
    (&_L383_1_11_1[0])[6] = inC->P065.L_TSR;
    (&_L383_1_11_1[0])[7] = inC->P065.Q_FRONT;
    (&_L383_1_11_1[0])[8] = inC->P065.V_TSR;
    tmp8.valid = inC->P065.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket065_TM - 1;
    _52_else_clock_1_1_11_1_IfBlock1 = inC->P065.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_52_else_clock_1_1_11_1_IfBlock1) {
    }
    else {
      tmp24 = inC->P065.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (tmp24) {
      }
      else {
        _53_else_clock_1_1_11_1_IfBlock1 = inC->P065.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P065.NID_PACKET == 65) {
      _49_noname_1_11_1 = 65 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P065.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        inC->P065.NID_TSR * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _49_noname_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _49_noname_1_11_1;
    if (_52_else_clock_1_1_11_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (tmp24) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_53_else_clock_1_1_11_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp9 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11_1 = tmp9;
      _51_IfBlock1_clock_1_1_11_1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_51_IfBlock1_clock_1_1_11_1) {
        tmp9 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp9 = noname_1_11_1;
      }
      tmp13 = i + 1;
      if (!_51_IfBlock1_clock_1_1_11_1) {
        break;
      }
    }
    if (tmp9 == 0) {
      _L7_1_11_1 = 0;
    }
    else {
      _L7_1_11_1 = tmp9 + 1;
    }
    _L3_1_11_1 = _L7_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 491; i++) {
      _L395_1_6_1[i] = 0;
    }
    kcg_copy_array_int_491(&_L383_1_11_1[9], &_L395_1_6_1);
    for (i = 0; i < 500; i++) {
      _92_else_clock_1_1_1_IfBlock1 = _L3_1_11_1 >= i;
      if (_92_else_clock_1_1_1_IfBlock1 & (i >= _L7_1_11_1)) {
        if ((0 <= i - _L7_1_11_1) & (i - _L7_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L7_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!_92_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L7_1_11_1;
    tmp8.endAddress = _L3_1_11_1;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P066.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P066.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P066.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P066.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P066.NID_TSR;
    tmp26.valid = inC->P066.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket066_TM - 1;
    else_clock_1_1_11_1_IfBlock1 = inC->P066.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (else_clock_1_1_11_1_IfBlock1) {
    }
    else {
      tmp20 = inC->P066.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (tmp20) {
      }
      else {
        _43_else_clock_1_1_11_1_IfBlock1 = inC->P066.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P066.NID_PACKET == 66) {
      tmp28 = 66 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P066.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp28 = ERROR_nid_packet_TM;
    }
    tmp26.nid_packet = tmp28;
    if (else_clock_1_1_11_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (tmp20) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_43_else_clock_1_1_11_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11_1 = _44__L3_1_11_1;
      IfBlock1_clock_1_1_11_1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (IfBlock1_clock_1_1_11_1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = _L407_1_11_1;
      }
      tmp29 = i + 1;
      if (!IfBlock1_clock_1_1_11_1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 496; i++) {
      _32__L209_1_9_1[i] = 0;
    }
    kcg_copy_array_int_496(&_50__L383_1_11_1[4], &_32__L209_1_9_1);
    for (i = 0; i < 500; i++) {
      tmp25 = _45__L7_1_11_1 >= i;
      if (tmp25 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _47__L407_1_11_1 = i + 1;
      if (!tmp25) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _47__L407_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P071.valid) {
    (&_L383_1_11_1[0])[0] = inC->P071.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P071.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P071.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P071.Q_SCALE;
    (&_L383_1_11_1[0])[4] = inC->P071.D_ADHESION;
    (&_L383_1_11_1[0])[5] = inC->P071.L_ADHESION;
    (&_L383_1_11_1[0])[6] = inC->P071.M_ADHESION;
    tmp8.valid = inC->P071.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket071_TM - 1;
    _41_else_clock_1_1_13_1_IfBlock1 = inC->P071.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_41_else_clock_1_1_13_1_IfBlock1) {
    }
    else {
      else_clock_1_IfBlock2 = inC->P071.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (else_clock_1_IfBlock2) {
      }
      else {
        IfBlock2_clock_1 = inC->P071.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P071.NID_PACKET == 71) {
      _49_noname_1_11_1 = 71 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P071.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _49_noname_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _49_noname_1_11_1;
    if (_41_else_clock_1_1_13_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (IfBlock2_clock_1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp9 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = tmp9;
      _40_IfBlock1_clock_1_1_13_1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_40_IfBlock1_clock_1_1_13_1) {
        tmp9 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp9 = tmp7;
      }
      tmp13 = i + 1;
      if (!_40_IfBlock1_clock_1_1_13_1) {
        break;
      }
    }
    if (tmp9 == 0) {
      _L7_1_11_1 = 0;
    }
    else {
      _L7_1_11_1 = tmp9 + 1;
    }
    _L3_1_11_1 = _L7_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 493; i++) {
      _L209_1_1_1[i] = 0;
    }
    kcg_copy_array_int_493(&_L383_1_11_1[7], &_L209_1_1_1);
    for (i = 0; i < 500; i++) {
      tmp23 = _L3_1_11_1 >= i;
      if (tmp23 & (i >= _L7_1_11_1)) {
        if ((0 <= i - _L7_1_11_1) & (i - _L7_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L7_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!tmp23) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L7_1_11_1;
    tmp8.endAddress = _L3_1_11_1;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P072_baseline2.valid) {
    (&(&_50__L383_1_11_1[0])[0])[0] = inC->P072_baseline2.NID_PACKET;
    (&(&_50__L383_1_11_1[0])[0])[1] = inC->P072_baseline2.Q_DIR;
    (&(&_50__L383_1_11_1[0])[0])[2] = inC->P072_baseline2.L_PACKET;
    (&(&_50__L383_1_11_1[0])[0])[3] = inC->P072_baseline2.Q_SCALE;
    (&(&_50__L383_1_11_1[0])[0])[4] = inC->P072_baseline2.Q_TEXTCLASS;
    (&(&_50__L383_1_11_1[0])[0])[5] = inC->P072_baseline2.Q_TEXTDISPLAY;
    (&(&_50__L383_1_11_1[0])[0])[6] = inC->P072_baseline2.D_TEXTDISPLAY_start;
    (&(&_50__L383_1_11_1[0])[0])[7] =
      inC->P072_baseline2.M_MODETEXTDISPLAY_start;
    (&(&_50__L383_1_11_1[0])[0])[8] =
      inC->P072_baseline2.M_LEVELTEXTDISPLAY_start;
    (&(&_50__L383_1_11_1[0])[0])[9] = inC->P072_baseline2.NID_NTC_start;
    (&(&_50__L383_1_11_1[0])[0])[10] = inC->P072_baseline2.L_TEXTDISPLAY_end;
    (&(&_50__L383_1_11_1[0])[0])[11] = inC->P072_baseline2.T_TEXTDISPLAY_end;
    (&(&_50__L383_1_11_1[0])[0])[12] =
      inC->P072_baseline2.M_MODETEXTDISPLAY_end;
    (&(&_50__L383_1_11_1[0])[0])[13] =
      inC->P072_baseline2.M_LEVELTEXTDISPLAY_end;
    (&(&_50__L383_1_11_1[0])[0])[14] = inC->P072_baseline2.NID_NTC_end;
    (&(&_50__L383_1_11_1[0])[0])[15] = inC->P072_baseline2.Q_TEXTCONFIRM;
    (&(&_50__L383_1_11_1[0])[0])[16] = inC->P072_baseline2.L_TEXT;
    tmp26.nid_packet = inC->P072_baseline2.NID_PACKET;
    tmp26.valid = inC->P072_baseline2.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = 16 + 1 + inC->P072_baseline2.L_TEXT * 1 - 1;
    tmp19 = inC->P072_baseline2.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp19) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _55_else_clock_1_IfBlock2 = inC->P072_baseline2.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_55_else_clock_1_IfBlock2) {
        tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        _54_else_clock_1_IfBlock2 = inC->P072_baseline2.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (_54_else_clock_1_IfBlock2) {
          tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp29 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11_1 = tmp29;
      tmp18 = RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp18) {
        tmp29 = RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp29 = noname_1_11_1;
      }
      tmp28 = i + 1;
      if (!tmp18) {
        break;
      }
    }
    if (tmp29 == 0) {
      _45__L7_1_11_1 = 0;
    }
    else {
      _45__L7_1_11_1 = tmp29 + 1;
    }
    _44__L3_1_11_1 = _45__L7_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 228; i++) {
      _31__L209_1_7_1[i] = 0;
    }
    kcg_copy_X_TEXT_trackside_T_TM(
      &_50__L383_1_11_1[17],
      &inC->P072_baseline2.X_TEXT);
    kcg_copy_array_int_228(&_50__L383_1_11_1[272], &_31__L209_1_7_1);
    for (i = 0; i < 500; i++) {
      _42_else_clock_1_1_13_1_IfBlock1 = _44__L3_1_11_1 >= i;
      if (_42_else_clock_1_1_13_1_IfBlock1 & (i >= _45__L7_1_11_1)) {
        if ((0 <= i - _45__L7_1_11_1) & (i - _45__L7_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _45__L7_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _46__L408_1_11_1 = i + 1;
      if (!_42_else_clock_1_1_13_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _46__L408_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _45__L7_1_11_1;
    tmp26.endAddress = _44__L3_1_11_1;
    if ((0 <= tmp28 - 1) & (tmp28 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp28 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P080.valid) {
    (&(&(&_L383_1_11_1[0])[0])[0])[0] = inC->P080.NID_PACKET;
    (&(&(&_L383_1_11_1[0])[0])[0])[1] = inC->P080.Q_DIR;
    (&(&(&_L383_1_11_1[0])[0])[0])[2] = inC->P080.L_PACKET;
    (&(&(&_L383_1_11_1[0])[0])[0])[3] = inC->P080.Q_SCALE;
    (&tmp1[0])[0].D_MAMODE = inC->P080.D_MAMODE;
    (&tmp1[0])[0].M_MAMODE = inC->P080.M_MAMODE;
    (&tmp1[0])[0].V_MAMODE = inC->P080.V_MAMODE;
    (&tmp1[0])[0].L_MAMODE = inC->P080.L_MAMODE;
    (&tmp1[0])[0].L_ACKMAMODE = inC->P080.L_ACKMAMODE;
    (&tmp1[0])[0].Q_MAMODE = inC->P080.Q_MAMODE;
    tmp8.valid = inC->P080.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 4 + 1 + 6 + inC->P080.N_ITER * 6 - 1;
    _38_IfBlock1_clock_1_1_13_1 = inC->P080.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_38_IfBlock1_clock_1_1_13_1) {
    }
    else {
      _59_else_clock_1_IfBlock2 = inC->P080.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_59_else_clock_1_IfBlock2) {
      }
      else {
        _58_else_clock_1_IfBlock2 = inC->P080.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P080.NID_PACKET == 80) {
      _49_noname_1_11_1 = 80 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P080.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _49_noname_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _49_noname_1_11_1;
    if (_38_IfBlock1_clock_1_1_13_1) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_59_else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_58_else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp9 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11_1 = tmp9;
      _57_else_clock_1_IfBlock2 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_57_else_clock_1_IfBlock2) {
        tmp9 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp9 = _L407_1_11_1;
      }
      tmp13 = i + 1;
      if (!_57_else_clock_1_IfBlock2) {
        break;
      }
    }
    if (tmp9 == 0) {
      _L7_1_11_1 = 0;
    }
    else {
      _L7_1_11_1 = tmp9 + 1;
    }
    _L3_1_11_1 = _L7_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    _L403_1_13_1[0] = inC->P080.N_ITER;
    kcg_copy_P080_trackide_sectionlist_T_TM(&tmp1[1], &inC->P080.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_2_1_7_1[i][0] = tmp1[i].D_MAMODE;
      _L74_2_1_7_1[i][1] = tmp1[i].M_MAMODE;
      _L74_2_1_7_1[i][2] = tmp1[i].V_MAMODE;
      _L74_2_1_7_1[i][3] = tmp1[i].L_MAMODE;
      _L74_2_1_7_1[i][4] = tmp1[i].L_ACKMAMODE;
      _L74_2_1_7_1[i][5] = tmp1[i].Q_MAMODE;
    }
    for (i = 0; i < 297; i++) {
      _L209_1_7_1[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_11_1[4], &_L403_1_13_1);
    kcg_copy_P080_sections_array_flat_T_TM(
      &tmp,
      (P080_sections_array_flat_T_TM *) &DEFAULT_P080_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 6) & (i / 6 < 33) & ((0 <= i % 6) & (i % 6 < 6))) {
        _47__L407_1_11_1 = _L74_2_1_7_1[i / 6][i % 6];
      }
      else {
        _47__L407_1_11_1 = 0;
      }
      if ((0 <= i) & (i < 198)) {
        tmp[i] = _47__L407_1_11_1;
      }
    }
    kcg_copy_P080_sections_array_flat_T_TM(&_L383_1_11_1[5], &tmp);
    kcg_copy_array_int_297(&_L383_1_11_1[203], &_L209_1_7_1);
    for (i = 0; i < 500; i++) {
      _56_else_clock_1_IfBlock2 = _L3_1_11_1 >= i;
      if (_56_else_clock_1_IfBlock2 & (i >= _L7_1_11_1)) {
        if ((0 <= i - _L7_1_11_1) & (i - _L7_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L7_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!_56_else_clock_1_IfBlock2) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L7_1_11_1;
    tmp8.endAddress = _L3_1_11_1;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P131.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P131.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P131.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P131.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P131.Q_SCALE;
    (&_50__L383_1_11_1[0])[4] = inC->P131.D_RBCTR;
    (&_50__L383_1_11_1[0])[5] = inC->P131.NID_C;
    (&_50__L383_1_11_1[0])[6] = inC->P131.NID_RBC;
    (&_50__L383_1_11_1[0])[7] = inC->P131.NID_RADIO;
    (&_50__L383_1_11_1[0])[8] = inC->P131.Q_SLEEPSESSION;
    tmp26.valid = inC->P131.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket131_TM - 1;
    else_clock_1_1_14_1_IfBlock1 = inC->P131.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (else_clock_1_1_14_1_IfBlock1) {
    }
    else {
      tmp14 = inC->P131.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (tmp14) {
      }
      else {
        _35_else_clock_1_1_14_1_IfBlock1 = inC->P131.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P131.NID_PACKET == 131) {
      tmp26.nid_packet = 131 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P131.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (else_clock_1_1_14_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (tmp14) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_35_else_clock_1_1_14_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _44__L3_1_11_1;
      _61_else_clock_1_IfBlock2 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_61_else_clock_1_IfBlock2) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = tmp7;
      }
      tmp29 = i + 1;
      if (!_61_else_clock_1_IfBlock2) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 491; i++) {
      _L395_1_6_1[i] = 0;
    }
    kcg_copy_array_int_491(&_50__L383_1_11_1[9], &_L395_1_6_1);
    for (i = 0; i < 500; i++) {
      _60_else_clock_1_IfBlock2 = _45__L7_1_11_1 >= i;
      if (_60_else_clock_1_IfBlock2 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      noname_1_11_1 = i + 1;
      if (!_60_else_clock_1_IfBlock2) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P132.valid) {
    (&_L383_1_11_1[0])[0] = inC->P132.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P132.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P132.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P132.Q_ASPECT;
    tmp8.valid = inC->P132.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket132_TM - 1;
    else_clock_1_1_13_1_IfBlock1 = inC->P132.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (else_clock_1_1_13_1_IfBlock1) {
    }
    else {
      _86_else_clock_1_1_1_IfBlock1 = inC->P132.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_86_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _85_IfBlock1_clock_1_1_1 = inC->P132.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P132.NID_PACKET == 132) {
      _49_noname_1_11_1 = 132 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P132.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _49_noname_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _49_noname_1_11_1;
    if (else_clock_1_1_13_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_86_else_clock_1_1_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_85_IfBlock1_clock_1_1_1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp9 = 0;
    for (i = 0; i < 30; i++) {
      _47__L407_1_11_1 = tmp9;
      IfBlock1_clock_1_1_13_1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (IfBlock1_clock_1_1_13_1) {
        tmp9 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp9 = _47__L407_1_11_1;
      }
      tmp13 = i + 1;
      if (!IfBlock1_clock_1_1_13_1) {
        break;
      }
    }
    if (tmp9 == 0) {
      _L7_1_11_1 = 0;
    }
    else {
      _L7_1_11_1 = tmp9 + 1;
    }
    _L3_1_11_1 = _L7_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 496; i++) {
      _32__L209_1_9_1[i] = 0;
    }
    kcg_copy_array_int_496(&_L383_1_11_1[4], &_32__L209_1_9_1);
    for (i = 0; i < 500; i++) {
      tmp16 = _L3_1_11_1 >= i;
      if (tmp16 & (i >= _L7_1_11_1)) {
        if ((0 <= i - _L7_1_11_1) & (i - _L7_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L7_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!tmp16) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L7_1_11_1;
    tmp8.endAddress = _L3_1_11_1;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P133.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P133.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P133.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P133.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P133.Q_SCALE;
    (&_50__L383_1_11_1[0])[4] = inC->P133.Q_RIU;
    (&_50__L383_1_11_1[0])[5] = inC->P133.NID_C;
    (&_50__L383_1_11_1[0])[6] = inC->P133.NID_RIU;
    (&_50__L383_1_11_1[0])[7] = inC->P133.NID_RADIO;
    (&_50__L383_1_11_1[0])[8] = inC->P133.D_INFILL;
    (&_50__L383_1_11_1[0])[9] = inC->P133.NID_C_next;
    (&_50__L383_1_11_1[0])[10] = inC->P133.NID_BG_next;
    tmp26.valid = inC->P133.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket133_TM - 1;
    _36_else_clock_1_1_13_1_IfBlock1 = inC->P133.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_36_else_clock_1_1_13_1_IfBlock1) {
    }
    else {
      _91_else_clock_1_1_1_IfBlock1 = inC->P133.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_91_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _90_IfBlock1_clock_1_1_1 = inC->P133.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P133.NID_PACKET == 133) {
      tmp26.nid_packet = 133 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P133.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (_36_else_clock_1_1_13_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_91_else_clock_1_1_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_90_IfBlock1_clock_1_1_1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11_1 = _44__L3_1_11_1;
      _89_else_clock_1_1_1_IfBlock1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_89_else_clock_1_1_1_IfBlock1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = _L407_1_11_1;
      }
      tmp29 = i + 1;
      if (!_89_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 489; i++) {
      (&_50__L383_1_11_1[11])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      _88_IfBlock1_clock_1_1_1 = _45__L7_1_11_1 >= i;
      if (_88_IfBlock1_clock_1_1_1 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      noname_1_11_1 = i + 1;
      if (!_88_IfBlock1_clock_1_1_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P134.valid) {
    (&_L383_1_11_1[0])[0] = inC->P134.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P134.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P134.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P134.Q_SCALE;
    (&_L383_1_11_1[0])[4] = inC->P134.NID_LOOP;
    (&_L383_1_11_1[0])[5] = inC->P134.D_LOOP;
    (&_L383_1_11_1[0])[6] = inC->P134.L_LOOP;
    (&_L383_1_11_1[0])[7] = inC->P134.Q_LOOPDIR;
    (&_L383_1_11_1[0])[8] = inC->P134.Q_SSCODE;
    tmp8.valid = inC->P134.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket134_TM - 1;
    tmp12 = inC->P134.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp12) {
    }
    else {
      _51_IfBlock1_clock_1_1_11_1 = inC->P134.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_51_IfBlock1_clock_1_1_11_1) {
      }
      else {
        _92_else_clock_1_1_1_IfBlock1 = inC->P134.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P134.NID_PACKET == 134) {
      _47__L407_1_11_1 = 134 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P134.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _47__L407_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _47__L407_1_11_1;
    if (tmp12) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_51_IfBlock1_clock_1_1_11_1) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_92_else_clock_1_1_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = tmp13;
      _10_tmp_1_3_1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_10_tmp_1_3_1) {
        tmp13 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = tmp7;
      }
      _49_noname_1_11_1 = i + 1;
      if (!_10_tmp_1_3_1) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11_1 = 0;
    }
    else {
      _L3_1_11_1 = tmp13 + 1;
    }
    tmp9 = _L3_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 491; i++) {
      _L395_1_6_1[i] = 0;
    }
    kcg_copy_array_int_491(&_L383_1_11_1[9], &_L395_1_6_1);
    for (i = 0; i < 500; i++) {
      tmp_1_3_1 = tmp9 >= i;
      if (tmp_1_3_1 & (i >= _L3_1_11_1)) {
        if ((0 <= i - _L3_1_11_1) & (i - _L3_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L3_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L7_1_11_1 = i + 1;
      if (!tmp_1_3_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L3_1_11_1;
    tmp8.endAddress = tmp9;
    if ((0 <= _49_noname_1_11_1 - 1) & (_49_noname_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_49_noname_1_11_1 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P135.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P135.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P135.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P135.L_PACKET;
    tmp26.valid = inC->P135.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket135_TM - 1;
    tmp24 = inC->P135.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp24) {
    }
    else {
      IfBlock1_clock_1_1_11_1 = inC->P135.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11_1) {
      }
      else {
        tmp25 = inC->P135.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P135.NID_PACKET == 135) {
      tmp26.nid_packet = 135 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P135.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp24) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11_1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp25) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      _L408_1_11_1 = _44__L3_1_11_1;
      _53_else_clock_1_1_11_1_IfBlock1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_53_else_clock_1_1_11_1_IfBlock1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = _L408_1_11_1;
      }
      tmp29 = i + 1;
      if (!_53_else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5_1[i] = 0;
    }
    kcg_copy_array_int_497(&_50__L383_1_11_1[3], &_L209_1_5_1);
    for (i = 0; i < 500; i++) {
      _52_else_clock_1_1_11_1_IfBlock1 = _45__L7_1_11_1 >= i;
      if (_52_else_clock_1_1_11_1_IfBlock1 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _L407_1_11_1 = i + 1;
      if (!_52_else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P136.valid) {
    (&_L383_1_11_1[0])[0] = inC->P136.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P136.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P136.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P136.Q_NEWCOUNTRY;
    (&_L383_1_11_1[0])[4] = inC->P136.NID_C;
    (&_L383_1_11_1[0])[5] = inC->P136.NID_BG;
    tmp8.valid = inC->P136.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket136_TM - 1;
    tmp20 = inC->P136.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      else_clock_1_IfBlock2 = inC->P136.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (else_clock_1_IfBlock2) {
      }
      else {
        IfBlock2_clock_1 = inC->P136.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P136.NID_PACKET == 136) {
      _47__L407_1_11_1 = 136 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P136.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _47__L407_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _47__L407_1_11_1;
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (IfBlock2_clock_1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11_1 = tmp13;
      _43_else_clock_1_1_11_1_IfBlock1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_43_else_clock_1_1_11_1_IfBlock1) {
        tmp13 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = noname_1_11_1;
      }
      _49_noname_1_11_1 = i + 1;
      if (!_43_else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11_1 = 0;
    }
    else {
      _L3_1_11_1 = tmp13 + 1;
    }
    tmp9 = _L3_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12_1[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11_1[6], &_L427_1_12_1);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_1_IfBlock1 = tmp9 >= i;
      if (else_clock_1_1_11_1_IfBlock1 & (i >= _L3_1_11_1)) {
        if ((0 <= i - _L3_1_11_1) & (i - _L3_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L3_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L7_1_11_1 = i + 1;
      if (!else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L3_1_11_1;
    tmp8.endAddress = tmp9;
    if ((0 <= _49_noname_1_11_1 - 1) & (_49_noname_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_49_noname_1_11_1 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P137.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P137.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P137.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P137.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P137.Q_SRSTOP;
    tmp26.valid = inC->P137.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket137_TM - 1;
    _41_else_clock_1_1_13_1_IfBlock1 = inC->P137.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_41_else_clock_1_1_13_1_IfBlock1) {
    }
    else {
      _55_else_clock_1_IfBlock2 = inC->P137.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_55_else_clock_1_IfBlock2) {
      }
      else {
        _54_else_clock_1_IfBlock2 = inC->P137.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P137.NID_PACKET == 137) {
      tmp26.nid_packet = 137 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P137.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (_41_else_clock_1_1_13_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_55_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_54_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _44__L3_1_11_1;
      _40_IfBlock1_clock_1_1_13_1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_40_IfBlock1_clock_1_1_13_1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = tmp7;
      }
      tmp29 = i + 1;
      if (!_40_IfBlock1_clock_1_1_13_1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 496; i++) {
      _32__L209_1_9_1[i] = 0;
    }
    kcg_copy_array_int_496(&_50__L383_1_11_1[4], &_32__L209_1_9_1);
    for (i = 0; i < 500; i++) {
      tmp23 = _45__L7_1_11_1 >= i;
      if (tmp23 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!tmp23) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P138.valid) {
    (&_L383_1_11_1[0])[0] = inC->P138.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P138.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P138.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P138.Q_SCALE;
    (&_L383_1_11_1[0])[4] = inC->P138.D_STARTREVERSE;
    (&_L383_1_11_1[0])[5] = inC->P138.L_REVERSEAREA;
    tmp8.valid = inC->P138.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket138_TM - 1;
    tmp19 = inC->P138.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp19) {
    }
    else {
      _57_else_clock_1_IfBlock2 = inC->P138.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_57_else_clock_1_IfBlock2) {
      }
      else {
        _56_else_clock_1_IfBlock2 = inC->P138.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P138.NID_PACKET == 138) {
      _47__L407_1_11_1 = 138 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P138.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _47__L407_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _47__L407_1_11_1;
    if (tmp19) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_57_else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_56_else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11_1 = tmp13;
      tmp18 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp18) {
        tmp13 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = _L407_1_11_1;
      }
      _49_noname_1_11_1 = i + 1;
      if (!tmp18) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11_1 = 0;
    }
    else {
      _L3_1_11_1 = tmp13 + 1;
    }
    tmp9 = _L3_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12_1[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11_1[6], &_L427_1_12_1);
    for (i = 0; i < 500; i++) {
      _42_else_clock_1_1_13_1_IfBlock1 = tmp9 >= i;
      if (_42_else_clock_1_1_13_1_IfBlock1 & (i >= _L3_1_11_1)) {
        if ((0 <= i - _L3_1_11_1) & (i - _L3_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L3_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L7_1_11_1 = i + 1;
      if (!_42_else_clock_1_1_13_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L3_1_11_1;
    tmp8.endAddress = tmp9;
    if ((0 <= _49_noname_1_11_1 - 1) & (_49_noname_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_49_noname_1_11_1 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P139.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P139.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P139.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P139.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P139.Q_SCALE;
    (&_50__L383_1_11_1[0])[4] = inC->P139.D_REVERSE;
    (&_50__L383_1_11_1[0])[5] = inC->P139.V_REVERSE;
    tmp26.valid = inC->P139.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket139_TM - 1;
    _38_IfBlock1_clock_1_1_13_1 = inC->P139.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_38_IfBlock1_clock_1_1_13_1) {
    }
    else {
      _61_else_clock_1_IfBlock2 = inC->P139.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_61_else_clock_1_IfBlock2) {
      }
      else {
        _60_else_clock_1_IfBlock2 = inC->P139.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P139.NID_PACKET == 139) {
      tmp26.nid_packet = 139 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P139.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (_38_IfBlock1_clock_1_1_13_1) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_61_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_60_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11_1 = _44__L3_1_11_1;
      _59_else_clock_1_IfBlock2 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_59_else_clock_1_IfBlock2) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = noname_1_11_1;
      }
      tmp29 = i + 1;
      if (!_59_else_clock_1_IfBlock2) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12_1[i] = 0;
    }
    kcg_copy_array_int_494(&_50__L383_1_11_1[6], &_L427_1_12_1);
    for (i = 0; i < 500; i++) {
      _58_else_clock_1_IfBlock2 = _45__L7_1_11_1 >= i;
      if (_58_else_clock_1_IfBlock2 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!_58_else_clock_1_IfBlock2) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P140.valid) {
    (&_L383_1_11_1[0])[0] = inC->P140.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P140.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P140.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P140.NID_OPERATIONAL;
    tmp8.valid = inC->P140.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket140_TM - 1;
    tmp14 = inC->P140.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp14) {
    }
    else {
      _86_else_clock_1_1_1_IfBlock1 = inC->P140.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_86_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _85_IfBlock1_clock_1_1_1 = inC->P140.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P140.NID_PACKET == 140) {
      _47__L407_1_11_1 = 140 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P140.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _47__L407_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _47__L407_1_11_1;
    if (tmp14) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_86_else_clock_1_1_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_85_IfBlock1_clock_1_1_1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = tmp13;
      _35_else_clock_1_1_14_1_IfBlock1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_35_else_clock_1_1_14_1_IfBlock1) {
        tmp13 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = tmp7;
      }
      _49_noname_1_11_1 = i + 1;
      if (!_35_else_clock_1_1_14_1_IfBlock1) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11_1 = 0;
    }
    else {
      _L3_1_11_1 = tmp13 + 1;
    }
    tmp9 = _L3_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 496; i++) {
      _32__L209_1_9_1[i] = 0;
    }
    kcg_copy_array_int_496(&_L383_1_11_1[4], &_32__L209_1_9_1);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_14_1_IfBlock1 = tmp9 >= i;
      if (else_clock_1_1_14_1_IfBlock1 & (i >= _L3_1_11_1)) {
        if ((0 <= i - _L3_1_11_1) & (i - _L3_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L3_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L7_1_11_1 = i + 1;
      if (!else_clock_1_1_14_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L3_1_11_1;
    tmp8.endAddress = tmp9;
    if ((0 <= _49_noname_1_11_1 - 1) & (_49_noname_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_49_noname_1_11_1 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P141.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P141.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P141.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P141.L_PACKET;
    (&_50__L383_1_11_1[0])[3] = inC->P141.Q_GDIR;
    (&_50__L383_1_11_1[0])[4] = inC->P141.G_TSR;
    tmp26.valid = inC->P141.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket141_TM - 1;
    else_clock_1_1_13_1_IfBlock1 = inC->P141.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (else_clock_1_1_13_1_IfBlock1) {
    }
    else {
      _89_else_clock_1_1_1_IfBlock1 = inC->P141.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_89_else_clock_1_1_1_IfBlock1) {
      }
      else {
        _88_IfBlock1_clock_1_1_1 = inC->P141.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P141.NID_PACKET == 141) {
      tmp26.nid_packet = 141 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P141.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (else_clock_1_1_13_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_89_else_clock_1_1_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_88_IfBlock1_clock_1_1_1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11_1 = _44__L3_1_11_1;
      IfBlock1_clock_1_1_13_1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (IfBlock1_clock_1_1_13_1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = _L407_1_11_1;
      }
      tmp29 = i + 1;
      if (!IfBlock1_clock_1_1_13_1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 495; i++) {
      _L209_1_2_1[i] = 0;
    }
    kcg_copy_array_int_495(&_50__L383_1_11_1[5], &_L209_1_2_1);
    for (i = 0; i < 500; i++) {
      tmp16 = _45__L7_1_11_1 >= i;
      if (tmp16 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!tmp16) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P143.valid) {
    (&_L383_1_11_1[0])[0] = inC->P143.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P143.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P143.L_PACKET;
    (&_L383_1_11_1[0])[3] = inC->P143.Q_RIU;
    (&_L383_1_11_1[0])[4] = inC->P143.NID_C;
    (&_L383_1_11_1[0])[5] = inC->P143.NID_RIU;
    (&_L383_1_11_1[0])[6] = inC->P143.NID_RADIO;
    tmp8.valid = inC->P143.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket143_TM - 1;
    _36_else_clock_1_1_13_1_IfBlock1 = inC->P143.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_36_else_clock_1_1_13_1_IfBlock1) {
    }
    else {
      _51_IfBlock1_clock_1_1_11_1 = inC->P143.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_51_IfBlock1_clock_1_1_11_1) {
      }
      else {
        _92_else_clock_1_1_1_IfBlock1 = inC->P143.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P143.NID_PACKET == 143) {
      _47__L407_1_11_1 = 143 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P143.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _47__L407_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _47__L407_1_11_1;
    if (_36_else_clock_1_1_13_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_51_IfBlock1_clock_1_1_11_1) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_92_else_clock_1_1_1_IfBlock1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11_1 = tmp13;
      _91_else_clock_1_1_1_IfBlock1 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_91_else_clock_1_1_1_IfBlock1) {
        tmp13 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = noname_1_11_1;
      }
      _49_noname_1_11_1 = i + 1;
      if (!_91_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11_1 = 0;
    }
    else {
      _L3_1_11_1 = tmp13 + 1;
    }
    tmp9 = _L3_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 493; i++) {
      _L209_1_1_1[i] = 0;
    }
    kcg_copy_array_int_493(&_L383_1_11_1[7], &_L209_1_1_1);
    for (i = 0; i < 500; i++) {
      _90_IfBlock1_clock_1_1_1 = tmp9 >= i;
      if (_90_IfBlock1_clock_1_1_1 & (i >= _L3_1_11_1)) {
        if ((0 <= i - _L3_1_11_1) & (i - _L3_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L3_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L7_1_11_1 = i + 1;
      if (!_90_IfBlock1_clock_1_1_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L3_1_11_1;
    tmp8.endAddress = tmp9;
    if ((0 <= _49_noname_1_11_1 - 1) & (_49_noname_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_49_noname_1_11_1 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P145.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P145.NID_PACKET;
    (&_50__L383_1_11_1[0])[1] = inC->P145.Q_DIR;
    (&_50__L383_1_11_1[0])[2] = inC->P145.L_PACKET;
    tmp26.valid = inC->P145.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket145_TM - 1;
    tmp12 = inC->P145.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp12) {
    }
    else {
      _53_else_clock_1_1_11_1_IfBlock1 = inC->P145.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_53_else_clock_1_1_11_1_IfBlock1) {
      }
      else {
        _52_else_clock_1_1_11_1_IfBlock1 = inC->P145.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P145.NID_PACKET == 145) {
      tmp26.nid_packet = 145 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P145.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp12) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_53_else_clock_1_1_11_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_52_else_clock_1_1_11_1_IfBlock1) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _44__L3_1_11_1;
      _10_tmp_1_3_1 = RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_10_tmp_1_3_1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = tmp7;
      }
      tmp29 = i + 1;
      if (!_10_tmp_1_3_1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5_1[i] = 0;
    }
    kcg_copy_array_int_497(&_50__L383_1_11_1[3], &_L209_1_5_1);
    for (i = 0; i < 500; i++) {
      tmp_1_3_1 = _45__L7_1_11_1 >= i;
      if (tmp_1_3_1 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!tmp_1_3_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24_1.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24_1.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24_1.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24_1,
      &RadioMessagePackets_01_02_1);
  }
  if (inC->P254.valid) {
    (&_L383_1_11_1[0])[0] = inC->P254.NID_PACKET;
    (&_L383_1_11_1[0])[1] = inC->P254.Q_DIR;
    (&_L383_1_11_1[0])[2] = inC->P254.L_PACKET;
    tmp8.valid = inC->P254.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket254_TM - 1;
    IfBlock1_clock_1_1_11_1 = inC->P254.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11_1) {
    }
    else {
      else_clock_1_IfBlock2 = inC->P254.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (else_clock_1_IfBlock2) {
      }
      else {
        IfBlock2_clock_1 = inC->P254.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P254.NID_PACKET == 254) {
      _47__L407_1_11_1 = 254 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P254.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _47__L407_1_11_1 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _47__L407_1_11_1;
    if (IfBlock1_clock_1_1_11_1) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (else_clock_1_IfBlock2) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (IfBlock2_clock_1) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11_1 = tmp13;
      tmp25 = _L24_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp25) {
        tmp13 = _L24_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = _L407_1_11_1;
      }
      _49_noname_1_11_1 = i + 1;
      if (!tmp25) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11_1 = 0;
    }
    else {
      _L3_1_11_1 = tmp13 + 1;
    }
    tmp9 = _L3_1_11_1 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5_1[i] = 0;
    }
    kcg_copy_array_int_497(&_L383_1_11_1[3], &_L209_1_5_1);
    for (i = 0; i < 500; i++) {
      tmp24 = tmp9 >= i;
      if (tmp24 & (i >= _L3_1_11_1)) {
        if ((0 <= i - _L3_1_11_1) & (i - _L3_1_11_1 < 500)) {
          _L406_1_11_1[i] = _L383_1_11_1[i - _L3_1_11_1];
        }
        else {
          _L406_1_11_1[i] = 0;
        }
      }
      else {
        _L406_1_11_1[i] = _L24_1.PacketData[i];
      }
      _L7_1_11_1 = i + 1;
      if (!tmp24) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11_1; i < 500; i++) {
      _L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketData,
      &_L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1.PacketHeaders,
      &_L24_1.PacketHeaders);
    tmp8.startAddress = _L3_1_11_1;
    tmp8.endAddress = tmp9;
    if ((0 <= _49_noname_1_11_1 - 1) & (_49_noname_1_11_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02_1.PacketHeaders[_49_noname_1_11_1 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02_1,
      &_L24_1);
  }
  if (inC->P255.valid) {
    (&_50__L383_1_11_1[0])[0] = inC->P255.NID_PACKET;
    tmp26.valid = inC->P255.valid;
    tmp26.startAddress = 0;
    tmp26.endAddress = DIM_MaxElementsPacket255_TM - 1;
    tmp20 = INT_Q_DIR_both_TM == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      _55_else_clock_1_IfBlock2 = INT_Q_DIR_both_TM ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_55_else_clock_1_IfBlock2) {
      }
      else {
        _54_else_clock_1_IfBlock2 = INT_Q_DIR_both_TM ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P255.NID_PACKET == 255) {
      tmp26.nid_packet = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp26.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_55_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (_54_else_clock_1_IfBlock2) {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _44__L3_1_11_1 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11_1 = _44__L3_1_11_1;
      _43_else_clock_1_1_11_1_IfBlock1 =
        RadioMessagePackets_01_02_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_43_else_clock_1_1_11_1_IfBlock1) {
        _44__L3_1_11_1 =
          RadioMessagePackets_01_02_1.PacketHeaders[i].endAddress;
      }
      else {
        _44__L3_1_11_1 = noname_1_11_1;
      }
      tmp29 = i + 1;
      if (!_43_else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
    if (_44__L3_1_11_1 == 0) {
      _46__L408_1_11_1 = 0;
    }
    else {
      _46__L408_1_11_1 = _44__L3_1_11_1 + 1;
    }
    _45__L7_1_11_1 = _46__L408_1_11_1 + (tmp26.endAddress - tmp26.startAddress);
    for (i = 0; i < 499; i++) {
      (&_50__L383_1_11_1[1])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_1_IfBlock1 = _45__L7_1_11_1 >= i;
      if (else_clock_1_1_11_1_IfBlock1 & (i >= _46__L408_1_11_1)) {
        if ((0 <= i - _46__L408_1_11_1) & (i - _46__L408_1_11_1 < 500)) {
          _48__L406_1_11_1[i] = _50__L383_1_11_1[i - _46__L408_1_11_1];
        }
        else {
          _48__L406_1_11_1[i] = 0;
        }
      }
      else {
        _48__L406_1_11_1[i] = RadioMessagePackets_01_02_1.PacketData[i];
      }
      _L408_1_11_1 = i + 1;
      if (!else_clock_1_1_11_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11_1; i < 500; i++) {
      _48__L406_1_11_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->Compressed_Packets_out.PacketData,
      &_48__L406_1_11_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->Compressed_Packets_out.PacketHeaders,
      &RadioMessagePackets_01_02_1.PacketHeaders);
    tmp26.startAddress = _46__L408_1_11_1;
    tmp26.endAddress = _45__L7_1_11_1;
    if ((0 <= tmp29 - 1) & (tmp29 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->Compressed_Packets_out.PacketHeaders[tmp29 - 1],
        &tmp26);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->Compressed_Packets_out,
      &RadioMessagePackets_01_02_1);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Radio_Message_out.Messages,
    &outC->Compressed_Packets_out);
  if (IfBlock1_clock_1_1_1) {
    tmp7 = INT_M_ACK_acknowledgement_TM_conversions;
  }
  else if (else_clock_1_1_1_IfBlock1) {
    tmp7 = INT_M_ACK_no_acknowledgement_TM_conversions;
  }
  else {
    tmp7 = INT_M_ACK_acknowledgement_TM_conversions;
  }
  if (_70_IfBlock1_clock_1_1_1) {
    _47__L407_1_11_1 = INT_Q_SCALE_10cm_TM_conversions;
  }
  else if (_73_IfBlock1_clock_1_1_1) {
    _47__L407_1_11_1 = INT_Q_SCALE_1m_TM_conversions;
  }
  else if (_71_else_clock_1_1_1_IfBlock1) {
    _47__L407_1_11_1 = INT_Q_SCALE_10m_TM_conversions;
  }
  else {
    _47__L407_1_11_1 = INT_Q_SCALE_10cm_TM_conversions;
  }
  if (_74_else_clock_1_1_1_IfBlock1) {
    _49_noname_1_11_1 = INT_Q_DIR_nomiinal_TM_conversions;
  }
  else if (_76_else_clock_1_1_1_IfBlock1) {
    _49_noname_1_11_1 = INT_Q_DIR_reverse_TM_conversions;
  }
  else if (_75_IfBlock1_clock_1_1_1) {
    _49_noname_1_11_1 = INT_Q_DIR_both_TM_conversions;
  }
  else {
    _49_noname_1_11_1 = INT_Q_DIR_both_TM_conversions;
  }
  if (_78_IfBlock1_clock_1_1_1) {
    tmp13 = INT_M_VERSION_previous_M_TM_conversions;
  }
  else if (_83_else_clock_1_1_1_IfBlock1) {
    tmp13 = INT_M_VERSION_1_0_TM_conversions;
  }
  else if (_79_else_clock_1_1_1_IfBlock1) {
    tmp13 = INT_M_VERSION_1_1_TM_conversions;
  }
  else if (_82_IfBlock1_clock_1_1_1) {
    tmp13 = INT_M_VERSION_2_0_TM_conversions;
  }
  else {
    tmp13 = INT_M_VERSION_previous_M_TM_conversions;
  }
  outC->Compressed_Radio_Message_out.Header.radioDevice =
    outC->RadioTrackTrainHeader_out.radioDevice;
  outC->Compressed_Radio_Message_out.Header.receivedSystemTime =
    outC->RadioTrackTrainHeader_out.receivedSystemTime;
  outC->Compressed_Radio_Message_out.Header.nid_message =
    outC->RadioTrackTrainHeader_out.nid_message;
  outC->Compressed_Radio_Message_out.Header.t_train =
    outC->RadioTrackTrainHeader_out.t_train;
  outC->Compressed_Radio_Message_out.Header.m_ack = tmp7;
  outC->Compressed_Radio_Message_out.Header.nid_lrbg =
    outC->RadioTrackTrainHeader_out.nid_lrbg;
  outC->Compressed_Radio_Message_out.Header.t_train_reference =
    outC->RadioTrackTrainHeader_out.t_train_reference;
  outC->Compressed_Radio_Message_out.Header.nid_em =
    outC->RadioTrackTrainHeader_out.nid_em;
  outC->Compressed_Radio_Message_out.Header.q_scale = _47__L407_1_11_1;
  outC->Compressed_Radio_Message_out.Header.d_sr =
    outC->RadioTrackTrainHeader_out.d_sr;
  outC->Compressed_Radio_Message_out.Header.t_sh_rqst =
    outC->RadioTrackTrainHeader_out.t_sh_rqst;
  outC->Compressed_Radio_Message_out.Header.d_ref =
    outC->RadioTrackTrainHeader_out.d_ref;
  outC->Compressed_Radio_Message_out.Header.q_dir = _49_noname_1_11_1;
  outC->Compressed_Radio_Message_out.Header.d_emergencystop =
    outC->RadioTrackTrainHeader_out.d_emergencystop;
  outC->Compressed_Radio_Message_out.Header.m_version = tmp13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** API_Frontend_radio_prelim_TM_API.c
** Generation date: 2015-11-16T17:03:44
*************************************************************$ */

