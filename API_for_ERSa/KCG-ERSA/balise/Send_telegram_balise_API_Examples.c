/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG-ERSA/balise\kcg_s2c_config.txt
** Generation date: 2015-11-16T14:56:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_telegram_balise_API_Examples.h"

void Send_telegram_balise_reset_API_Examples(
  outC_Send_telegram_balise_API_Examples *outC)
{
}

/* API_Examples::Send_telegram_balise */
void Send_telegram_balise_API_Examples(
  inC_Send_telegram_balise_API_Examples *inC,
  outC_Send_telegram_balise_API_Examples *outC)
{
  static kcg_int tmp7;
  static kcg_int tmp6;
  static kcg_bool tmp5;
  static kcg_int tmp_1_1_1_1_1_1;
  static kcg_bool tmp4;
  static MetadataElement_T_Common_Types_Pkg tmp3;
  static array__8506 tmp2;
  static P046_sections_array_flat_T_TM tmp1;
  static kcg_int i;
  static MetadataElement_T_Common_Types_Pkg tmp;
  /* MessageLibBaseline2::Send_P255::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _9__L3_1_1;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L209 */
  static array_int_444 _L209_1_1_1_1;
  /* MessageLibBaseline2::Send_P003V1::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3_1_1;
  /* TM_lib_internal::C_P046_flatten_sections::_L74 */
  static array_int_2_33 _L74_1_1_1_2_1;
  /* TM_conversions::C_P046_tracksim_compr::_L209 */
  static array_int_430 _L209_1_1_2_1;
  /* TM_conversions::C_P046_tracksim_compr::_L376 */
  static array_int_1 _L376_1_1_2_1;
  static kcg_int noname_1_1_2_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _8_else_clock_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1_1_1_1;
  /* TM_conversions::C_P046_tracksim_compr::_L383 */
  static array_int_500 _L383_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _L406_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _L407_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _L408_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3_1_1_1_1;
  /* API_Examples::Send_telegram_balise::_L1 */
  static B_data_internal_T_InfraLib _L1;
  
  if (inC->P042_in.valid) {
    (&_L383_1_1_1_1[0])[0] = inC->P042_in.NID_PACKET;
    (&_L383_1_1_1_1[0])[1] = inC->P042_in.Q_DIR;
    (&_L383_1_1_1_1[0])[2] = inC->P042_in.L_PACKET;
    (&_L383_1_1_1_1[0])[3] = inC->P042_in.Q_RBC;
    (&_L383_1_1_1_1[0])[4] = inC->P042_in.NID_C;
    (&_L383_1_1_1_1[0])[5] = inC->P042_in.NID_RBC;
    (&_L383_1_1_1_1[0])[6] = inC->P042_in.NID_RADIO;
    (&_L383_1_1_1_1[0])[7] = inC->P042_in.Q_SLEEPSESSION;
    tmp3.valid = inC->P042_in.valid;
    tmp3.startAddress = 0;
    tmp3.endAddress = DIM_MaxElementsPacket042_TM - 1;
    IfBlock1_clock_1_1_1_1_1 = inC->P042_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P042_in.NID_PACKET == 42) {
      tmp6 = 42 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P042_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp6 = ERROR_nid_packet_TM;
    }
    tmp3.nid_packet = tmp6;
    if (IfBlock1_clock_1_1_1_1_1) {
      tmp3.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _8_else_clock_1_1_1_1_1_IfBlock1 = inC->P042_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_8_else_clock_1_1_1_1_1_IfBlock1) {
        tmp3.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_IfBlock1 = inC->P042_in.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_IfBlock1) {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    _L3_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp_1_1_1_1_1_1 = _L3_1_1_1_1;
      tmp5 = INIT_B_data_API_Examples.packets.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp5) {
        _L3_1_1_1_1 =
          INIT_B_data_API_Examples.packets.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_1_1_1 = tmp_1_1_1_1_1_1;
      }
      tmp7 = i + 1;
      if (!tmp5) {
        break;
      }
    }
    if (_L3_1_1_1_1 == 0) {
      _L408_1_1_1_1 = 0;
    }
    else {
      _L408_1_1_1_1 = _L3_1_1_1_1 + 1;
    }
    _L7_1_1_1_1 = _L408_1_1_1_1 + (tmp3.endAddress - tmp3.startAddress);
    for (i = 0; i < 492; i++) {
      (&_L383_1_1_1_1[8])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      tmp4 = _L7_1_1_1_1 >= i;
      if (tmp4 & (i >= _L408_1_1_1_1)) {
        if ((0 <= i - _L408_1_1_1_1) & (i - _L408_1_1_1_1 < 500)) {
          _L406_1_1_1_1[i] = _L383_1_1_1_1[i - _L408_1_1_1_1];
        }
        else {
          _L406_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1[i] = INIT_B_data_API_Examples.packets.PacketData[i];
      }
      _L407_1_1_1_1 = i + 1;
      if (!tmp4) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_1_1_1; i < 500; i++) {
      _L406_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L3_1_1.PacketData,
      &_L406_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L3_1_1.PacketHeaders,
      (Metadata_T_Common_Types_Pkg *)
        &INIT_B_data_API_Examples.packets.PacketHeaders);
    tmp3.startAddress = _L408_1_1_1_1;
    tmp3.endAddress = _L7_1_1_1_1;
    if ((0 <= tmp7 - 1) & (tmp7 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L3_1_1.PacketHeaders[tmp7 - 1],
        &tmp3);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L3_1_1,
      (CompressedPackets_T_Common_Types_Pkg *)
        &INIT_B_data_API_Examples.packets);
  }
  if (inC->P046_1_in.valid) {
    (&(&(&_L383_1_1_1_1[0])[0])[0])[0] = inC->P046_1_in.NID_PACKET;
    (&(&(&_L383_1_1_1_1[0])[0])[0])[1] = inC->P046_1_in.Q_DIR;
    (&(&(&_L383_1_1_1_1[0])[0])[0])[2] = inC->P046_1_in.L_PACKET;
    (&tmp2[0])[0].M_LEVELTR = inC->P046_1_in.M_LEVELTR;
    (&tmp2[0])[0].NID_NTC = inC->P046_1_in.NID_NTC;
    tmp3.valid = inC->P046_1_in.valid;
    tmp3.startAddress = 0;
    tmp3.endAddress = 3 + 1 + 2 + inC->P046_1_in.N_ITER * 2 - 1;
    IfBlock1_clock_1_1_1_1_1 = inC->P046_1_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P046_1_in.NID_PACKET == 46) {
      tmp7 = 46 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P046_1_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp7 = ERROR_nid_packet_TM;
    }
    tmp3.nid_packet = tmp7;
    if (IfBlock1_clock_1_1_1_1_1) {
      tmp3.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _8_else_clock_1_1_1_1_1_IfBlock1 = inC->P046_1_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_8_else_clock_1_1_1_1_1_IfBlock1) {
        tmp3.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_IfBlock1 = inC->P046_1_in.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_IfBlock1) {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    _L7_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp6 = _L7_1_1_1_1;
      tmp5 = _L3_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp5) {
        _L7_1_1_1_1 = _L3_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _L7_1_1_1_1 = tmp6;
      }
      _L3_1_1_1_1 = i + 1;
      if (!tmp5) {
        break;
      }
    }
    if (_L7_1_1_1_1 == 0) {
      _L407_1_1_1_1 = 0;
    }
    else {
      _L407_1_1_1_1 = _L7_1_1_1_1 + 1;
    }
    _L408_1_1_1_1 = _L407_1_1_1_1 + (tmp3.endAddress - tmp3.startAddress);
    _L376_1_1_2_1[0] = inC->P046_1_in.N_ITER;
    kcg_copy_P046_trackide_sectionlist_T_TM(&tmp2[1], &inC->P046_1_in.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_1_2_1[i][0] = tmp2[i].M_LEVELTR;
      _L74_1_1_1_2_1[i][1] = tmp2[i].NID_NTC;
    }
    for (i = 0; i < 430; i++) {
      _L209_1_1_2_1[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_1_1_1[3], &_L376_1_1_2_1);
    kcg_copy_P046_sections_array_flat_T_TM(
      &tmp1,
      (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 2) & (i / 2 < 33) & ((0 <= i % 2) & (i % 2 < 2))) {
        tmp_1_1_1_1_1_1 = _L74_1_1_1_2_1[i / 2][i % 2];
      }
      else {
        tmp_1_1_1_1_1_1 = 0;
      }
      if ((0 <= i) & (i < 66)) {
        tmp1[i] = tmp_1_1_1_1_1_1;
      }
    }
    kcg_copy_P046_sections_array_flat_T_TM(&_L383_1_1_1_1[4], &tmp1);
    kcg_copy_array_int_430(&_L383_1_1_1_1[70], &_L209_1_1_2_1);
    for (i = 0; i < 500; i++) {
      tmp4 = _L408_1_1_1_1 >= i;
      if (tmp4 & (i >= _L407_1_1_1_1)) {
        if ((0 <= i - _L407_1_1_1_1) & (i - _L407_1_1_1_1 < 500)) {
          _L406_1_1_1_1[i] = _L383_1_1_1_1[i - _L407_1_1_1_1];
        }
        else {
          _L406_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1[i] = _L3_1_1.PacketData[i];
      }
      noname_1_1_2_1 = i + 1;
      if (!tmp4) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_1_2_1; i < 500; i++) {
      _L406_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_9__L3_1_1.PacketData,
      &_L406_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_9__L3_1_1.PacketHeaders,
      &_L3_1_1.PacketHeaders);
    tmp3.startAddress = _L407_1_1_1_1;
    tmp3.endAddress = _L408_1_1_1_1;
    if ((0 <= _L3_1_1_1_1 - 1) & (_L3_1_1_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_9__L3_1_1.PacketHeaders[_L3_1_1_1_1 - 1],
        &tmp3);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_9__L3_1_1, &_L3_1_1);
  }
  if (inC->P046_2_in.valid) {
    (&(&(&_L383_1_1_1_1[0])[0])[0])[0] = inC->P046_2_in.NID_PACKET;
    (&(&(&_L383_1_1_1_1[0])[0])[0])[1] = inC->P046_2_in.Q_DIR;
    (&(&(&_L383_1_1_1_1[0])[0])[0])[2] = inC->P046_2_in.L_PACKET;
    (&tmp2[0])[0].M_LEVELTR = inC->P046_2_in.M_LEVELTR;
    (&tmp2[0])[0].NID_NTC = inC->P046_2_in.NID_NTC;
    tmp3.valid = inC->P046_2_in.valid;
    tmp3.startAddress = 0;
    tmp3.endAddress = 3 + 1 + 2 + inC->P046_2_in.N_ITER * 2 - 1;
    IfBlock1_clock_1_1_1_1_1 = inC->P046_2_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P046_2_in.NID_PACKET == 46) {
      tmp7 = 46 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P046_2_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp7 = ERROR_nid_packet_TM;
    }
    tmp3.nid_packet = tmp7;
    if (IfBlock1_clock_1_1_1_1_1) {
      tmp3.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _8_else_clock_1_1_1_1_1_IfBlock1 = inC->P046_2_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_8_else_clock_1_1_1_1_1_IfBlock1) {
        tmp3.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_IfBlock1 = inC->P046_2_in.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_IfBlock1) {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    _L7_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp6 = _L7_1_1_1_1;
      tmp5 = _9__L3_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp5) {
        _L7_1_1_1_1 = _9__L3_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _L7_1_1_1_1 = tmp6;
      }
      _L3_1_1_1_1 = i + 1;
      if (!tmp5) {
        break;
      }
    }
    if (_L7_1_1_1_1 == 0) {
      _L407_1_1_1_1 = 0;
    }
    else {
      _L407_1_1_1_1 = _L7_1_1_1_1 + 1;
    }
    _L408_1_1_1_1 = _L407_1_1_1_1 + (tmp3.endAddress - tmp3.startAddress);
    _L376_1_1_2_1[0] = inC->P046_2_in.N_ITER;
    kcg_copy_P046_trackide_sectionlist_T_TM(&tmp2[1], &inC->P046_2_in.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_1_2_1[i][0] = tmp2[i].M_LEVELTR;
      _L74_1_1_1_2_1[i][1] = tmp2[i].NID_NTC;
    }
    for (i = 0; i < 430; i++) {
      _L209_1_1_2_1[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_1_1_1[3], &_L376_1_1_2_1);
    kcg_copy_P046_sections_array_flat_T_TM(
      &tmp1,
      (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 2) & (i / 2 < 33) & ((0 <= i % 2) & (i % 2 < 2))) {
        tmp_1_1_1_1_1_1 = _L74_1_1_1_2_1[i / 2][i % 2];
      }
      else {
        tmp_1_1_1_1_1_1 = 0;
      }
      if ((0 <= i) & (i < 66)) {
        tmp1[i] = tmp_1_1_1_1_1_1;
      }
    }
    kcg_copy_P046_sections_array_flat_T_TM(&_L383_1_1_1_1[4], &tmp1);
    kcg_copy_array_int_430(&_L383_1_1_1_1[70], &_L209_1_1_2_1);
    for (i = 0; i < 500; i++) {
      tmp4 = _L408_1_1_1_1 >= i;
      if (tmp4 & (i >= _L407_1_1_1_1)) {
        if ((0 <= i - _L407_1_1_1_1) & (i - _L407_1_1_1_1 < 500)) {
          _L406_1_1_1_1[i] = _L383_1_1_1_1[i - _L407_1_1_1_1];
        }
        else {
          _L406_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1[i] = _9__L3_1_1.PacketData[i];
      }
      noname_1_1_2_1 = i + 1;
      if (!tmp4) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_1_2_1; i < 500; i++) {
      _L406_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L3_1_1.PacketData,
      &_L406_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L3_1_1.PacketHeaders,
      &_9__L3_1_1.PacketHeaders);
    tmp3.startAddress = _L407_1_1_1_1;
    tmp3.endAddress = _L408_1_1_1_1;
    if ((0 <= _L3_1_1_1_1 - 1) & (_L3_1_1_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L3_1_1.PacketHeaders[_L3_1_1_1_1 - 1],
        &tmp3);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3_1_1, &_9__L3_1_1);
  }
  if (inC->P003_in.valid) {
    (&(&_L383_1_1_1_1[0])[0])[0] = inC->P003_in.NID_PACKET;
    (&(&_L383_1_1_1_1[0])[0])[1] = inC->P003_in.Q_DIR;
    (&(&_L383_1_1_1_1[0])[0])[2] = inC->P003_in.L_PACKET;
    (&(&_L383_1_1_1_1[0])[0])[3] = inC->P003_in.Q_SCALE;
    (&(&_L383_1_1_1_1[0])[0])[4] = inC->P003_in.D_VALIDNV;
    (&(&_L383_1_1_1_1[0])[0])[5] = inC->P003_in.N_ITER;
    (&(&_L383_1_1_1_1[0])[0])[6] = inC->P003_in.V_NVSHUNT;
    (&(&_L383_1_1_1_1[0])[0])[7] = inC->P003_in.V_NVSTFF;
    (&(&_L383_1_1_1_1[0])[0])[8] = inC->P003_in.V_NVONSIGHT;
    (&(&_L383_1_1_1_1[0])[0])[9] = inC->P003_in.V_NVUNFIT;
    (&(&_L383_1_1_1_1[0])[0])[10] = inC->P003_in.V_NVREL;
    (&(&_L383_1_1_1_1[0])[0])[11] = inC->P003_in.D_NVROLL;
    (&(&_L383_1_1_1_1[0])[0])[12] = inC->P003_in.Q_NVSRBKTRG;
    (&(&_L383_1_1_1_1[0])[0])[13] = inC->P003_in.Q_NVEMRRLS;
    (&(&_L383_1_1_1_1[0])[0])[14] = inC->P003_in.V_NVALLOWOVTRP;
    (&(&_L383_1_1_1_1[0])[0])[15] = inC->P003_in.V_NVSUPOVTRP;
    (&(&_L383_1_1_1_1[0])[0])[16] = inC->P003_in.D_NVOVTRP;
    (&(&_L383_1_1_1_1[0])[0])[17] = inC->P003_in.T_NVOVTRP;
    (&(&_L383_1_1_1_1[0])[0])[18] = inC->P003_in.D_NVPOTRP;
    (&(&_L383_1_1_1_1[0])[0])[19] = inC->P003_in.M_NVCONTACT;
    (&(&_L383_1_1_1_1[0])[0])[20] = inC->P003_in.T_NVCONTACT;
    (&(&_L383_1_1_1_1[0])[0])[21] = inC->P003_in.M_NVDERUN;
    (&(&_L383_1_1_1_1[0])[0])[22] = inC->P003_in.D_NVSTFF;
    (&(&_L383_1_1_1_1[0])[0])[23] = inC->P003_in.Q_NVDRIVER_ADHES;
    tmp3.valid = inC->P003_in.valid;
    tmp3.startAddress = 0;
    tmp3.endAddress = 6 + 17 + inC->P003_in.N_ITER * 1 - 1;
    IfBlock1_clock_1_1_1_1_1 = inC->P003_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P003_in.NID_PACKET == 3) {
      tmp6 = 3 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P003_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp6 = ERROR_nid_packet_TM;
    }
    tmp3.nid_packet = tmp6;
    if (IfBlock1_clock_1_1_1_1_1) {
      tmp3.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _8_else_clock_1_1_1_1_1_IfBlock1 = inC->P003_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_8_else_clock_1_1_1_1_1_IfBlock1) {
        tmp3.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_IfBlock1 = inC->P003_in.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_IfBlock1) {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    _L3_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp_1_1_1_1_1_1 = _L3_1_1_1_1;
      tmp5 = _L3_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp5) {
        _L3_1_1_1_1 = _L3_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_1_1_1 = tmp_1_1_1_1_1_1;
      }
      tmp7 = i + 1;
      if (!tmp5) {
        break;
      }
    }
    if (_L3_1_1_1_1 == 0) {
      _L408_1_1_1_1 = 0;
    }
    else {
      _L408_1_1_1_1 = _L3_1_1_1_1 + 1;
    }
    _L7_1_1_1_1 = _L408_1_1_1_1 + (tmp3.endAddress - tmp3.startAddress);
    for (i = 0; i < 444; i++) {
      _L209_1_1_1_1[i] = 0;
    }
    kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
      &_L383_1_1_1_1[24],
      &inC->P003_in.SECTIONS);
    kcg_copy_array_int_444(&_L383_1_1_1_1[56], &_L209_1_1_1_1);
    for (i = 0; i < 500; i++) {
      tmp4 = _L7_1_1_1_1 >= i;
      if (tmp4 & (i >= _L408_1_1_1_1)) {
        if ((0 <= i - _L408_1_1_1_1) & (i - _L408_1_1_1_1 < 500)) {
          _L406_1_1_1_1[i] = _L383_1_1_1_1[i - _L408_1_1_1_1];
        }
        else {
          _L406_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1[i] = _L3_1_1.PacketData[i];
      }
      _L407_1_1_1_1 = i + 1;
      if (!tmp4) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_1_1_1; i < 500; i++) {
      _L406_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_9__L3_1_1.PacketData,
      &_L406_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_9__L3_1_1.PacketHeaders,
      &_L3_1_1.PacketHeaders);
    tmp3.startAddress = _L408_1_1_1_1;
    tmp3.endAddress = _L7_1_1_1_1;
    if ((0 <= tmp7 - 1) & (tmp7 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_9__L3_1_1.PacketHeaders[tmp7 - 1],
        &tmp3);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_9__L3_1_1, &_L3_1_1);
  }
  kcg_copy_B_data_internal_T_InfraLib(
    &_L1,
    (B_data_internal_T_InfraLib *) &INIT_B_data_API_Examples);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L1.header, &inC->Header);
  if (BGXXX_P255_Packets426.valid) {
    (&_L383_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
    tmp3.valid = BGXXX_P255_Packets426.valid;
    tmp3.startAddress = 0;
    tmp3.endAddress = DIM_MaxElementsPacket255_TM - 1;
    IfBlock1_clock_1_1_1_1_1 = INT_Q_DIR_both_TM ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (BGXXX_P255_Packets426.NID_PACKET == 255) {
      tmp3.nid_packet = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp3.nid_packet = ERROR_nid_packet_TM;
    }
    if (IfBlock1_clock_1_1_1_1_1) {
      tmp3.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _8_else_clock_1_1_1_1_1_IfBlock1 = INT_Q_DIR_both_TM ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_8_else_clock_1_1_1_1_1_IfBlock1) {
        tmp3.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_IfBlock1 = INT_Q_DIR_both_TM ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_IfBlock1) {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp3.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp7 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_1_2_1 = tmp7;
      tmp5 = _9__L3_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp5) {
        tmp7 = _9__L3_1_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp7 = noname_1_1_2_1;
      }
      tmp6 = i + 1;
      if (!tmp5) {
        break;
      }
    }
    if (tmp7 == 0) {
      _L7_1_1_1_1 = 0;
    }
    else {
      _L7_1_1_1_1 = tmp7 + 1;
    }
    _L3_1_1_1_1 = _L7_1_1_1_1 + (tmp3.endAddress - tmp3.startAddress);
    for (i = 0; i < 499; i++) {
      (&_L383_1_1_1_1[1])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      tmp4 = _L3_1_1_1_1 >= i;
      if (tmp4 & (i >= _L7_1_1_1_1)) {
        if ((0 <= i - _L7_1_1_1_1) & (i - _L7_1_1_1_1 < 500)) {
          _L406_1_1_1_1[i] = _L383_1_1_1_1[i - _L7_1_1_1_1];
        }
        else {
          _L406_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1[i] = _9__L3_1_1.PacketData[i];
      }
      _L408_1_1_1_1 = i + 1;
      if (!tmp4) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_1_1_1; i < 500; i++) {
      _L406_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L1.packets.PacketData,
      &_L406_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L1.packets.PacketHeaders,
      &_9__L3_1_1.PacketHeaders);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, &tmp3);
    tmp.startAddress = _L7_1_1_1_1;
    tmp.endAddress = _L3_1_1_1_1;
    if ((0 <= tmp6 - 1) & (tmp6 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L1.packets.PacketHeaders[tmp6 - 1],
        &tmp);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1.packets, &_9__L3_1_1);
  }
  _L1.balise_passed = kcg_true;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->telegram_out.Header,
    &_L1.header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->telegram_out.Messages,
    &_L1.packets);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_telegram_balise_API_Examples.c
** Generation date: 2015-11-16T14:56:40
*************************************************************$ */

