/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/additional_packets\kcg_s2c_config.txt
** Generation date: 2015-11-16T17:06:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergePackets_TM_API.h"

void SEND_MergePackets_reset_TM_API(outC_SEND_MergePackets_TM_API *outC)
{
}

/* TM_API::SEND_MergePackets */
void SEND_MergePackets_TM_API(
  inC_SEND_MergePackets_TM_API *inC,
  outC_SEND_MergePackets_TM_API *outC)
{
  kcg_int tmp24;
  Q_DIR tmp23;
  kcg_int tmp22;
  kcg_bool tmp21;
  kcg_bool tmp20;
  Metadata_T_Common_Types_Pkg tmp19;
  MetadataElement_T_Common_Types_Pkg tmp18;
  array__38573 tmp17;
  P005_sections_array_flat_T_TM tmp16;
  P015_sections_array_flat_T_TM tmp15;
  array__38558 tmp14;
  kcg_int tmp13;
  array__38083 tmp12;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L448 */ array_int_432 _L448_2_3_1;
  kcg_int tmp11;
  kcg_bool tmp10;
  kcg_bool tmp9;
  MetadataElement_T_Common_Types_Pkg tmp8;
  kcg_int tmp7;
  array__38549 tmp6;
  P041_sections_array_flat_T_TM tmp5;
  array__38540 tmp4;
  P046_sections_array_flat_T_TM tmp3;
  P058_sections_array_flat_T_TM tmp2;
  array__38528 tmp1;
  P080_sections_array_flat_T_TM tmp;
  kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _38_else_clock_1_1_11_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_1_11_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1_1_11;
  /* TM_conversions::C_P002_tracksim_compr::_L383 */ array_int_500 _37__L383_1_11;
  kcg_int _36_noname_1_11;
  /* TM_lib_internal::SEND_MessageData::_L406 */ array_int_500 _35__L406_1_11;
  /* TM_lib_internal::SEND_MessageData::_L407 */ kcg_int _34__L407_1_11;
  /* TM_lib_internal::SEND_MessageData::_L408 */ kcg_int _33__L408_1_11;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */ kcg_int _32__L7_1_11;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */ kcg_int _31__L3_1_11;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L209 */ array_int_444 _L209_1_11;
  /* TM_lib_internal::C_P005_flatten_sections::_L74 */ array_int_7_33 _L74_1_1_13;
  /* TM_conversions::C_P005_tracksim_compr::_L209 */ array_int_264 _30__L209_1_13;
  /* TM_conversions::C_P012_tracksim_compr::_L209 */ array_int_349 _29__L209_1_13;
  /* TM_conversions::C_P012_tracksim_compr::_L403 */ array_int_1 _L403_1_13;
  /* TM_lib_internal::C_P015_flatten_sections::_L74 */ array_int_4_32 _L74_1_1_14;
  /* TM_conversions::C_P015_tracksim_compr::_L209 */ array_int_350 _L209_1_14;
  /* TM_conversions::C_P021_tracksim_compr::_L209 */ array_int_396 _L209_1_13;
  /* TM_lib_internal::C_P041_flatten_sections::_L74 */ array_int_3_33 _L74_1_1_12;
  /* TM_conversions::C_P041_tracksim_compr::_L209 */ array_int_395 _L209_1_12;
  /* TM_conversions::C_P040_tracksim_compr::_L383 */ array_int_500 _L383_1_11;
  kcg_int noname_1_11;
  /* TM_lib_internal::SEND_MessageData::_L406 */ array_int_500 _L406_1_11;
  /* TM_lib_internal::SEND_MessageData::_L407 */ kcg_int _L407_1_11;
  /* TM_lib_internal::SEND_MessageData::_L408 */ kcg_int _L408_1_11;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */ kcg_int _L7_1_11;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */ kcg_int _L3_1_11;
  /* TM_lib_internal::C_P046_flatten_sections::_L74 */ array_int_2_33 _28__L74_1_1_9;
  /* TM_conversions::C_P046_tracksim_compr::_L209 */ array_int_430 _27__L209_1_9;
  /* TM_conversions::C_P045_tracksim_compr::_L209 */ array_int_496 _26__L209_1_9;
  /* TM_lib_internal::C_P058_flatten_sections::_L74 */ array_int_2_32 _L74_1_1_9;
  /* TM_conversions::C_P058_tracksim_compr::_L209 */ array_int_428 _L209_1_9;
  /* TM_conversions_baseline2::C_P072V1_tracksim_compr::_L209 */ array_int_228 _25__L209_1_7;
  /* TM_conversions::C_P131_tracksim_compr::_L395 */ array_int_491 _L395_1_6;
  /* TM_lib_internal::C_P080_flatten_sections::_L74 */ array_int_6_33 _L74_2_1_7;
  /* TM_conversions::C_P080_tracksim_compr::_L209 */ array_int_297 _L209_1_7;
  /* TM_conversions::C_P135_tracksim_compr::_L209 */ array_int_497 _L209_1_5;
  /* TM_conversions::C_P141_tracksim_compr::_L209 */ array_int_495 _L209_1_2;
  /* TM_conversions::C_P143_tracksim_compr::_L209 */ array_int_493 _L209_1_1;
  /* TM_conversions_baseline2::C_P039V1_tracksim_compr::_L427 */ array_int_494 _L427_1_12;
  /* TM_API::SEND_MergePackets::RadioMessagePackets_01_02 */ CompressedPackets_T_Common_Types_Pkg RadioMessagePackets_01_02;
  /* TM_API::SEND_MergePackets::_L24 */ CompressedPackets_T_Common_Types_Pkg _L24;
  
  if (inC->P001.valid) {
    (&_37__L383_1_11[0])[0] = inC->P001.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P001.NID_VBCMK;
    tmp18.valid = inC->P001.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket001_TM - 1;
    IfBlock1_clock_1_1_11 = INT_Q_DIR_both_TM_conversions ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = INT_Q_DIR_both_TM_conversions ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = kcg_true;
      }
    }
    if (inC->P001.NID_PACKET == 1) {
      tmp24 = 1 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        INT_Q_DIR_both_TM_conversions *
        DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = inC->packets_IN.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = inC->packets_IN.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 498; i++) {
      (&_37__L383_1_11[2])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = inC->packets_IN.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &inC->packets_IN.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  }
  if (inC->P002.valid) {
    (&_37__L383_1_11[0])[0] = inC->P002.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P002.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P002.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P002.M_VERSION;
    tmp18.valid = inC->P002.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket002_TM - 1;
    IfBlock1_clock_1_1_11 = inC->P002.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P002.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P002.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P002.NID_PACKET == 2) {
      tmp24 = 2 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P002.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 496; i++) {
      _26__L209_1_9[i] = 0;
    }
    kcg_copy_array_int_496(&_37__L383_1_11[4], &_26__L209_1_9);
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P003_baseline2.valid) {
    (&(&_37__L383_1_11[0])[0])[0] = inC->P003_baseline2.NID_PACKET;
    (&(&_37__L383_1_11[0])[0])[1] = inC->P003_baseline2.Q_DIR;
    (&(&_37__L383_1_11[0])[0])[2] = inC->P003_baseline2.L_PACKET;
    (&(&_37__L383_1_11[0])[0])[3] = inC->P003_baseline2.Q_SCALE;
    (&(&_37__L383_1_11[0])[0])[4] = inC->P003_baseline2.D_VALIDNV;
    (&(&_37__L383_1_11[0])[0])[5] = inC->P003_baseline2.N_ITER;
    (&(&_37__L383_1_11[0])[0])[6] = inC->P003_baseline2.V_NVSHUNT;
    (&(&_37__L383_1_11[0])[0])[7] = inC->P003_baseline2.V_NVSTFF;
    (&(&_37__L383_1_11[0])[0])[8] = inC->P003_baseline2.V_NVONSIGHT;
    (&(&_37__L383_1_11[0])[0])[9] = inC->P003_baseline2.V_NVUNFIT;
    (&(&_37__L383_1_11[0])[0])[10] = inC->P003_baseline2.V_NVREL;
    (&(&_37__L383_1_11[0])[0])[11] = inC->P003_baseline2.D_NVROLL;
    (&(&_37__L383_1_11[0])[0])[12] = inC->P003_baseline2.Q_NVSRBKTRG;
    (&(&_37__L383_1_11[0])[0])[13] = inC->P003_baseline2.Q_NVEMRRLS;
    (&(&_37__L383_1_11[0])[0])[14] = inC->P003_baseline2.V_NVALLOWOVTRP;
    (&(&_37__L383_1_11[0])[0])[15] = inC->P003_baseline2.V_NVSUPOVTRP;
    (&(&_37__L383_1_11[0])[0])[16] = inC->P003_baseline2.D_NVOVTRP;
    (&(&_37__L383_1_11[0])[0])[17] = inC->P003_baseline2.T_NVOVTRP;
    (&(&_37__L383_1_11[0])[0])[18] = inC->P003_baseline2.D_NVPOTRP;
    (&(&_37__L383_1_11[0])[0])[19] = inC->P003_baseline2.M_NVCONTACT;
    (&(&_37__L383_1_11[0])[0])[20] = inC->P003_baseline2.T_NVCONTACT;
    (&(&_37__L383_1_11[0])[0])[21] = inC->P003_baseline2.M_NVDERUN;
    (&(&_37__L383_1_11[0])[0])[22] = inC->P003_baseline2.D_NVSTFF;
    (&(&_37__L383_1_11[0])[0])[23] = inC->P003_baseline2.Q_NVDRIVER_ADHES;
    tmp18.valid = inC->P003_baseline2.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = 6 + 17 + inC->P003_baseline2.N_ITER * 1 - 1;
    IfBlock1_clock_1_1_11 = inC->P003_baseline2.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P003_baseline2.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P003_baseline2.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P003_baseline2.NID_PACKET == 3) {
      tmp24 = 3 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P003_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        0 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 444; i++) {
      _L209_1_11[i] = 0;
    }
    kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
      &_37__L383_1_11[24],
      &inC->P003_baseline2.SECTIONS);
    kcg_copy_array_int_444(&_37__L383_1_11[56], &_L209_1_11);
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = _L24.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P005.valid) {
    (&(&(&_37__L383_1_11[0])[0])[0])[0] = inC->P005.NID_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[1] = inC->P005.Q_DIR;
    (&(&(&_37__L383_1_11[0])[0])[0])[2] = inC->P005.L_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[3] = inC->P005.Q_SCALE;
    (&tmp17[0])[0].D_LINK = inC->P005.D_LINK;
    (&tmp17[0])[0].Q_NEWCOUNTRY = inC->P005.Q_NEWCOUNTRY;
    (&tmp17[0])[0].NID_C = inC->P005.NID_C;
    (&tmp17[0])[0].NID_BG = inC->P005.NID_BG;
    (&tmp17[0])[0].Q_LINKORIENTATION = inC->P005.Q_LINKORIENTATION;
    (&tmp17[0])[0].Q_LINKREACTION = inC->P005.Q_LINKREACTION;
    (&tmp17[0])[0].Q_LOCACC = inC->P005.Q_LOCACC;
    tmp18.valid = inC->P005.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = 4 + 1 + 7 + inC->P005.N_ITER * 7 - 1;
    IfBlock1_clock_1_1_11 = inC->P005.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P005.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P005.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P005.NID_PACKET == 5) {
      tmp24 = 5 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P005.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    _L403_1_13[0] = inC->P005.N_ITER;
    kcg_copy_P005_trackide_sectionlist_T_TM(&tmp17[1], &inC->P005.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_13[i][0] = tmp17[i].D_LINK;
      _L74_1_1_13[i][1] = tmp17[i].Q_NEWCOUNTRY;
      _L74_1_1_13[i][2] = tmp17[i].NID_C;
      _L74_1_1_13[i][3] = tmp17[i].NID_BG;
      _L74_1_1_13[i][4] = tmp17[i].Q_LINKORIENTATION;
      _L74_1_1_13[i][5] = tmp17[i].Q_LINKREACTION;
      _L74_1_1_13[i][6] = tmp17[i].Q_LOCACC;
    }
    for (i = 0; i < 264; i++) {
      _30__L209_1_13[i] = 0;
    }
    kcg_copy_array_int_1(&_37__L383_1_11[4], &_L403_1_13);
    kcg_copy_P005_sections_array_flat_T_TM(
      &tmp16,
      (P005_sections_array_flat_T_TM *) &DEFAULT_P005_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 7) & (i / 7 < 33) & ((0 <= i % 7) & (i % 7 < 7))) {
        tmp16[i] = _L74_1_1_13[i / 7][i % 7];
      }
      else {
        tmp16[i] = 0;
      }
    }
    kcg_copy_P005_sections_array_flat_T_TM(&_37__L383_1_11[5], &tmp16);
    kcg_copy_array_int_264(&_37__L383_1_11[236], &_30__L209_1_13);
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P012.valid) {
    (&(&(&_37__L383_1_11[0])[0])[0])[0] = inC->P012.NID_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[1] = inC->P012.Q_DIR;
    (&(&(&_37__L383_1_11[0])[0])[0])[2] = inC->P012.L_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[3] = inC->P012.Q_SCALE;
    (&(&(&_37__L383_1_11[0])[0])[0])[4] = inC->P012.V_MAIN;
    (&(&(&_37__L383_1_11[0])[0])[0])[5] = inC->P012.V_LOA;
    (&(&(&_37__L383_1_11[0])[0])[0])[6] = inC->P012.T_LOA;
    (&(&(&_37__L383_1_11[0])[0])[0])[7] = inC->P012.L_ENDSECTION;
    (&(&(&_37__L383_1_11[0])[0])[0])[8] = inC->P012.Q_SECTIONTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[9] = inC->P012.T_SECTIONTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[10] = inC->P012.D_SECTIONTIMERSTOPLOC;
    (&(&(&_37__L383_1_11[0])[0])[0])[11] = inC->P012.Q_ENDTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[12] = inC->P012.T_ENDTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[13] = inC->P012.D_ENDTIMERSTARTLOC;
    (&(&(&_37__L383_1_11[0])[0])[0])[14] = inC->P012.Q_DANGERPOINT;
    (&(&(&_37__L383_1_11[0])[0])[0])[15] = inC->P012.D_DP;
    (&(&(&_37__L383_1_11[0])[0])[0])[16] = inC->P012.V_RELEASEDP;
    (&(&(&_37__L383_1_11[0])[0])[0])[17] = inC->P012.Q_OVERLAP;
    (&(&(&_37__L383_1_11[0])[0])[0])[18] = inC->P012.D_STARTOL;
    (&(&(&_37__L383_1_11[0])[0])[0])[19] = inC->P012.T_OL;
    (&(&(&_37__L383_1_11[0])[0])[0])[20] = inC->P012.D_OL;
    (&(&(&_37__L383_1_11[0])[0])[0])[21] = inC->P012.V_RELEASEOL;
    tmp18.valid = inC->P012.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = 7 + 1 + 15 + inC->P012.N_ITER * 4 - 1;
    IfBlock1_clock_1_1_11 = inC->P012.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P012.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P012.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P012.NID_PACKET == 12) {
      tmp24 = 12 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P012.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    _L403_1_13[0] = inC->P012.N_ITER;
    for (i = 0; i < 32; i++) {
      _L74_1_1_14[i][0] = inC->P012.SECTIONS[i].L_SECTION;
      _L74_1_1_14[i][1] = inC->P012.SECTIONS[i].Q_SECTIONTIMER;
      _L74_1_1_14[i][2] = inC->P012.SECTIONS[i].T_SECTIONTIMER;
      _L74_1_1_14[i][3] = inC->P012.SECTIONS[i].D_SECTIONTIMERSTOPLOC;
    }
    for (i = 0; i < 349; i++) {
      _29__L209_1_13[i] = 0;
    }
    kcg_copy_array_int_1(&_37__L383_1_11[22], &_L403_1_13);
    kcg_copy_P015_sections_array_flat_T_TM(
      &tmp15,
      (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
    for (i = 0; i < 128; i++) {
      if ((0 <= i / 4) & (i / 4 < 32) & ((0 <= i % 4) & (i % 4 < 4))) {
        tmp15[i] = _L74_1_1_14[i / 4][i % 4];
      }
      else {
        tmp15[i] = 0;
      }
    }
    kcg_copy_P015_sections_array_flat_T_TM(&_37__L383_1_11[23], &tmp15);
    kcg_copy_array_int_349(&_37__L383_1_11[151], &_29__L209_1_13);
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = _L24.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P015.valid) {
    (&(&(&_37__L383_1_11[0])[0])[0])[0] = inC->P015.NID_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[1] = inC->P015.Q_DIR;
    (&(&(&_37__L383_1_11[0])[0])[0])[2] = inC->P015.L_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[3] = inC->P015.Q_SCALE;
    (&(&(&_37__L383_1_11[0])[0])[0])[4] = inC->P015.V_LOA;
    (&(&(&_37__L383_1_11[0])[0])[0])[5] = inC->P015.T_LOA;
    (&(&(&_37__L383_1_11[0])[0])[0])[6] = inC->P015.L_ENDSECTION;
    (&(&(&_37__L383_1_11[0])[0])[0])[7] = inC->P015.Q_SECTIONTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[8] = inC->P015.T_SECTIONTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[9] = inC->P015.D_SECTIONTIMERSTOPLOC;
    (&(&(&_37__L383_1_11[0])[0])[0])[10] = inC->P015.Q_ENDTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[11] = inC->P015.T_ENDTIMER;
    (&(&(&_37__L383_1_11[0])[0])[0])[12] = inC->P015.D_ENDTIMERSTARTLOC;
    (&(&(&_37__L383_1_11[0])[0])[0])[13] = inC->P015.Q_DANGERPOINT;
    (&(&(&_37__L383_1_11[0])[0])[0])[14] = inC->P015.D_DP;
    (&(&(&_37__L383_1_11[0])[0])[0])[15] = inC->P015.V_RELEASEDP;
    (&(&(&_37__L383_1_11[0])[0])[0])[16] = inC->P015.Q_OVERLAP;
    (&(&(&_37__L383_1_11[0])[0])[0])[17] = inC->P015.D_STARTOL;
    (&(&(&_37__L383_1_11[0])[0])[0])[18] = inC->P015.T_OL;
    (&(&(&_37__L383_1_11[0])[0])[0])[19] = inC->P015.D_OL;
    (&(&(&_37__L383_1_11[0])[0])[0])[20] = inC->P015.V_RELEASEOL;
    tmp18.valid = inC->P015.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = 6 + 1 + 15 + inC->P015.N_ITER * 4 - 1;
    IfBlock1_clock_1_1_11 = inC->P015.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P015.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P015.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P015.NID_PACKET == 15) {
      tmp24 = 15 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P015.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    _L403_1_13[0] = inC->P015.N_ITER;
    for (i = 0; i < 32; i++) {
      _L74_1_1_14[i][0] = inC->P015.SECTIONS[i].L_SECTION;
      _L74_1_1_14[i][1] = inC->P015.SECTIONS[i].Q_SECTIONTIMER;
      _L74_1_1_14[i][2] = inC->P015.SECTIONS[i].T_SECTIONTIMER;
      _L74_1_1_14[i][3] = inC->P015.SECTIONS[i].D_SECTIONTIMERSTOPLOC;
    }
    for (i = 0; i < 350; i++) {
      _L209_1_14[i] = 0;
    }
    kcg_copy_array_int_1(&_37__L383_1_11[21], &_L403_1_13);
    kcg_copy_P015_sections_array_flat_T_TM(
      &tmp15,
      (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
    for (i = 0; i < 128; i++) {
      if ((0 <= i / 4) & (i / 4 < 32) & ((0 <= i % 4) & (i % 4 < 4))) {
        tmp15[i] = _L74_1_1_14[i / 4][i % 4];
      }
      else {
        tmp15[i] = 0;
      }
    }
    kcg_copy_P015_sections_array_flat_T_TM(&_37__L383_1_11[22], &tmp15);
    kcg_copy_array_int_350(&_37__L383_1_11[150], &_L209_1_14);
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P016.valid) {
    (&_37__L383_1_11[0])[0] = inC->P016.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P016.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P016.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P016.Q_SCALE;
    (&_37__L383_1_11[0])[4] = inC->P016.L_SECTION;
    tmp18.valid = inC->P016.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket016_TM - 1;
    IfBlock1_clock_1_1_11 = inC->P016.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P016.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P016.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P016.NID_PACKET == 16) {
      tmp24 = 16 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P016.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 495; i++) {
      _L209_1_2[i] = 0;
    }
    kcg_copy_array_int_495(&_37__L383_1_11[5], &_L209_1_2);
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = _L24.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P021.valid) {
    (&(&(&_37__L383_1_11[0])[0])[0])[0] = inC->P021.NID_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[1] = inC->P021.Q_DIR;
    (&(&(&_37__L383_1_11[0])[0])[0])[2] = inC->P021.L_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[3] = inC->P021.Q_SCALE;
    (&tmp14[0])[0].D_GRADIENT = inC->P021.D_GRADIENT;
    (&tmp14[0])[0].Q_GDIR = inC->P021.Q_GDIR;
    (&tmp14[0])[0].G_A = inC->P021.G_A;
    tmp18.valid = inC->P021.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = 4 + 1 + 3 + inC->P021.N_ITER * 3 - 1;
    IfBlock1_clock_1_1_11 = inC->P021.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P021.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P021.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P021.NID_PACKET == 21) {
      _31__L3_1_11 = 21 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P021.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _31__L3_1_11 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = _31__L3_1_11;
    if (IfBlock1_clock_1_1_11) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp23 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp18.q_dir = tmp23;
    _33__L408_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp24 = _33__L408_1_11;
      tmp21 = RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _33__L408_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _33__L408_1_11 = tmp24;
      }
      _32__L7_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_33__L408_1_11 == 0) {
      _36_noname_1_11 = 0;
    }
    else {
      _36_noname_1_11 = _33__L408_1_11 + 1;
    }
    _34__L407_1_11 = _36_noname_1_11 + (tmp18.endAddress - tmp18.startAddress);
    _L403_1_13[0] = inC->P021.N_ITER;
    kcg_copy_P021_trackide_sectionlist_T_TM(&tmp14[1], &inC->P021.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_12[i][0] = tmp14[i].D_GRADIENT;
      _L74_1_1_12[i][1] = tmp14[i].Q_GDIR;
      _L74_1_1_12[i][2] = tmp14[i].G_A;
    }
    for (i = 0; i < 396; i++) {
      _L209_1_13[i] = 0;
    }
    kcg_copy_array_int_1(&_37__L383_1_11[4], &_L403_1_13);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp5,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P021_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp22 = _L74_1_1_12[i / 3][i % 3];
      }
      else {
        tmp22 = 0;
      }
      if ((0 <= i) & (i < 99)) {
        tmp5[i] = tmp22;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_37__L383_1_11[5], &tmp5);
    kcg_copy_array_int_396(&_37__L383_1_11[104], &_L209_1_13);
    for (i = 0; i < 500; i++) {
      tmp20 = _34__L407_1_11 >= i;
      if (tmp20 & (i >= _36_noname_1_11)) {
        if ((0 <= i - _36_noname_1_11) & (i - _36_noname_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _36_noname_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      tmp13 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp13; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _36_noname_1_11;
    tmp18.endAddress = _34__L407_1_11;
    if ((0 <= _32__L7_1_11 - 1) & (_32__L7_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_32__L7_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P027_baseline2.valid) {
    (&tmp12[0])[0].D_STATIC = inC->P027_baseline2.D_STATIC;
    (&tmp12[0])[0].V_STATIC = inC->P027_baseline2.V_STATIC;
    (&tmp12[0])[0].Q_FRONT = inC->P027_baseline2.Q_FRONT;
    (&tmp12[0])[0].N_ITER = inC->P027_baseline2.N_ITER_n;
    kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
      &(&tmp12[0])[0].SECTIONS_q_diff,
      &inC->P027_baseline2.SECTIONS_q_diff);
    (&_L383_1_11[0])[0] = inC->P027_baseline2.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P027_baseline2.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P027_baseline2.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P027_baseline2.Q_SCALE;
    (&_L383_1_11[0])[4] = inC->P027_baseline2.N_ITER_k;
    tmp8.valid = inC->P027_baseline2.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 6 - 1;
    _38_else_clock_1_1_11_IfBlock1 = inC->P027_baseline2.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_38_else_clock_1_1_11_IfBlock1) {
      tmp23 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      tmp10 = inC->P027_baseline2.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (tmp10) {
        tmp23 = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        tmp9 = inC->P027_baseline2.Q_DIR == INT_Q_DIR_both_TM_conversions;
        if (tmp9) {
          tmp23 = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp23 = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp8.q_dir = tmp23;
    if (inC->P027_baseline2.NID_PACKET == 27) {
      _L3_1_11 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P027_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        0 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _L3_1_11 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _L3_1_11;
    _L408_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp11 = _L408_1_11;
      else_clock_1_1_11_IfBlock1 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (else_clock_1_1_11_IfBlock1) {
        _L408_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _L408_1_11 = tmp11;
      }
      _L7_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_L408_1_11 == 0) {
      noname_1_11 = 0;
    }
    else {
      noname_1_11 = _L408_1_11 + 1;
    }
    _L407_1_11 = noname_1_11 + (tmp8.endAddress - tmp8.startAddress);
    if (inC->P027_baseline2.NID_PACKET == 27) {
      tmp13 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P027_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        100 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp13 = ERROR_nid_packet_TM;
    }
    (&_L383_1_11[0])[5] = tmp13;
    for (i = 0; i < 494; i++) {
      _L427_1_12[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11[6], &_L427_1_12);
    for (i = 0; i < 500; i++) {
      IfBlock1_clock_1_1_11 = _L407_1_11 >= i;
      if (IfBlock1_clock_1_1_11 & (i >= noname_1_11)) {
        if ((0 <= i - noname_1_11) & (i - noname_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - noname_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      tmp7 = i + 1;
      if (!IfBlock1_clock_1_1_11) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp7; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = noname_1_11;
    tmp8.endAddress = _L407_1_11;
    if ((0 <= _L7_1_11 - 1) & (_L7_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_L7_1_11 - 1],
        &tmp8);
    }
    kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
      &tmp12[1],
      &inC->P027_baseline2.SECTIONS_SSP);
    for (i = 0; i < 33; i++) {
      (&(&_35__L406_1_11[0])[0])[0] = tmp12[i].D_STATIC;
      (&(&_35__L406_1_11[0])[0])[1] = tmp12[i].V_STATIC;
      (&(&_35__L406_1_11[0])[0])[2] = tmp12[i].Q_FRONT;
      (&(&_35__L406_1_11[0])[0])[3] = tmp12[i].N_ITER;
      tmp18.nid_packet = i + tmp13;
      tmp18.q_dir = tmp23;
      tmp18.valid = kcg_true;
      tmp18.startAddress = 0;
      tmp18.endAddress = 4 + tmp12[i].N_ITER * 2 - 1;
      _31__L3_1_11 = 0;
      for (tmp24 = 0; tmp24 < 30; tmp24++) {
        tmp22 = _31__L3_1_11;
        tmp20 = RadioMessagePackets_01_02.PacketHeaders[tmp24].nid_packet !=
          DEFAULT_Headers_TM[tmp24].nid_packet;
        if (tmp20) {
          _31__L3_1_11 =
            RadioMessagePackets_01_02.PacketHeaders[tmp24].endAddress;
        }
        else {
          _31__L3_1_11 = tmp22;
        }
        _32__L7_1_11 = tmp24 + 1;
        if (!tmp20) {
          break;
        }
      }
      if (_31__L3_1_11 == 0) {
        _34__L407_1_11 = 0;
      }
      else {
        _34__L407_1_11 = _31__L3_1_11 + 1;
      }
      _36_noname_1_11 = _34__L407_1_11 + (tmp18.endAddress -
          tmp18.startAddress);
      for (tmp24 = 0; tmp24 < 32; tmp24++) {
        _L74_1_1_9[tmp24][0] = tmp12[i].SECTIONS_q_diff[tmp24].NC_DIFF;
        _L74_1_1_9[tmp24][1] = tmp12[i].SECTIONS_q_diff[tmp24].V_DIFF;
      }
      for (tmp24 = 0; tmp24 < 432; tmp24++) {
        _L448_2_3_1[tmp24] = 0;
      }
      kcg_copy_P058_sections_array_flat_T_TM(
        &tmp2,
        (P058_sections_array_flat_T_TM *)
          &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
      for (tmp24 = 0; tmp24 < 32; tmp24++) {
        if ((0 <= tmp24 / 2) & (tmp24 / 2 < 32) & ((0 <= tmp24 % 2) & (tmp24 %
              2 < 2))) {
          tmp2[tmp24] = _L74_1_1_9[tmp24 / 2][tmp24 % 2];
        }
        else {
          tmp2[tmp24] = 0;
        }
      }
      kcg_copy_P058_sections_array_flat_T_TM(&_35__L406_1_11[4], &tmp2);
      kcg_copy_array_int_432(&_35__L406_1_11[68], &_L448_2_3_1);
      for (tmp24 = 0; tmp24 < 500; tmp24++) {
        tmp21 = _36_noname_1_11 >= tmp24;
        if (tmp21 & (tmp24 >= _34__L407_1_11)) {
          if ((0 <= tmp24 - _34__L407_1_11) & (tmp24 - _34__L407_1_11 < 500)) {
            _37__L383_1_11[tmp24] = _35__L406_1_11[tmp24 - _34__L407_1_11];
          }
          else {
            _37__L383_1_11[tmp24] = 0;
          }
        }
        else {
          _37__L383_1_11[tmp24] = RadioMessagePackets_01_02.PacketData[tmp24];
        }
        _33__L408_1_11 = tmp24 + 1;
        if (!tmp21) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (tmp24 = _33__L408_1_11; tmp24 < 500; tmp24++) {
        _37__L383_1_11[tmp24] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp19,
        &RadioMessagePackets_01_02.PacketHeaders);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketData,
        &_37__L383_1_11);
      tmp18.startAddress = _34__L407_1_11;
      tmp18.endAddress = _36_noname_1_11;
      if ((0 <= _32__L7_1_11 - 1) & (_32__L7_1_11 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp19[_32__L7_1_11 - 1],
          &tmp18);
      }
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders,
        &tmp19);
      if (!(inC->P027_baseline2.N_ITER_k > i)) {
        break;
      }
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P039_baseline2.valid) {
    (&_37__L383_1_11[0])[0] = inC->P039_baseline2.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P039_baseline2.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P039_baseline2.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P039_baseline2.Q_SCALE;
    (&_37__L383_1_11[0])[4] = inC->P039_baseline2.D_TRACTION;
    (&_37__L383_1_11[0])[5] = inC->P039_baseline2.M_TRACTION;
    tmp18.valid = inC->P039_baseline2.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket039V1_TM - 1;
    IfBlock1_clock_1_1_11 = inC->P039_baseline2.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_11) {
    }
    else {
      _38_else_clock_1_1_11_IfBlock1 = inC->P039_baseline2.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_38_else_clock_1_1_11_IfBlock1) {
      }
      else {
        else_clock_1_1_11_IfBlock1 = inC->P039_baseline2.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P039_baseline2.NID_PACKET == 39) {
      tmp24 = 39 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P039_baseline2.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        0 * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_38_else_clock_1_1_11_IfBlock1) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_11_IfBlock1) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      tmp21 = RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp21) {
        _32__L7_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!tmp21) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12[i] = 0;
    }
    kcg_copy_array_int_494(&_37__L383_1_11[6], &_L427_1_12);
    for (i = 0; i < 500; i++) {
      tmp20 = _33__L408_1_11 >= i;
      if (tmp20 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _36_noname_1_11 = i + 1;
      if (!tmp20) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _36_noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P040.valid) {
    (&_L383_1_11[0])[0] = inC->P040.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P040.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P040.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P040.Q_SCALE;
    (&_L383_1_11[0])[4] = inC->P040.D_CURRENT;
    (&_L383_1_11[0])[5] = inC->P040.M_CURRENT;
    tmp8.valid = inC->P040.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket040_TM - 1;
    tmp20 = inC->P040.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P040.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P040.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P040.NID_PACKET == 40) {
      tmp11 = 40 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P040.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp11 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = tmp11;
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp13 = _L7_1_11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        _L7_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _L7_1_11 = tmp13;
      }
      _L3_1_11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (_L7_1_11 == 0) {
      _L407_1_11 = 0;
    }
    else {
      _L407_1_11 = _L7_1_11 + 1;
    }
    _L408_1_11 = _L407_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11[6], &_L427_1_12);
    for (i = 0; i < 500; i++) {
      tmp9 = _L408_1_11 >= i;
      if (tmp9 & (i >= _L407_1_11)) {
        if ((0 <= i - _L407_1_11) & (i - _L407_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L407_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      noname_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L407_1_11;
    tmp8.endAddress = _L408_1_11;
    if ((0 <= _L3_1_11 - 1) & (_L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_L3_1_11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P041.valid) {
    (&(&(&_37__L383_1_11[0])[0])[0])[0] = inC->P041.NID_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[1] = inC->P041.Q_DIR;
    (&(&(&_37__L383_1_11[0])[0])[0])[2] = inC->P041.L_PACKET;
    (&(&(&_37__L383_1_11[0])[0])[0])[3] = inC->P041.Q_SCALE;
    (&(&(&_37__L383_1_11[0])[0])[0])[4] = inC->P041.D_LEVELTR;
    (&tmp6[0])[0].M_LEVELTR = inC->P041.M_LEVELTR;
    (&tmp6[0])[0].NID_NTC = inC->P041.NID_NTC;
    (&tmp6[0])[0].L_ACKLEVELTR = inC->P041.L_ACKLEVELTR;
    tmp18.valid = inC->P041.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = 5 + 1 + 3 + inC->P041.N_ITER * 3 - 1;
    tmp20 = inC->P041.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P041.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P041.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P041.NID_PACKET == 41) {
      tmp22 = 41 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P041.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp22 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp22;
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = tmp7;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    _L403_1_13[0] = inC->P041.N_ITER;
    kcg_copy_P041_trackide_sectionlist_T_TM(&tmp6[1], &inC->P041.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_12[i][0] = tmp6[i].M_LEVELTR;
      _L74_1_1_12[i][1] = tmp6[i].NID_NTC;
      _L74_1_1_12[i][2] = tmp6[i].L_ACKLEVELTR;
    }
    for (i = 0; i < 395; i++) {
      _L209_1_12[i] = 0;
    }
    kcg_copy_array_int_1(&_37__L383_1_11[5], &_L403_1_13);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp5,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp5[i] = _L74_1_1_12[i / 3][i % 3];
      }
      else {
        tmp5[i] = 0;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_37__L383_1_11[6], &tmp5);
    kcg_copy_array_int_395(&_37__L383_1_11[105], &_L209_1_12);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _34__L407_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _34__L407_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P042.valid) {
    (&_L383_1_11[0])[0] = inC->P042.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P042.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P042.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P042.Q_RBC;
    (&_L383_1_11[0])[4] = inC->P042.NID_C;
    (&_L383_1_11[0])[5] = inC->P042.NID_RBC;
    (&_L383_1_11[0])[6] = inC->P042.NID_RADIO;
    (&_L383_1_11[0])[7] = inC->P042.Q_SLEEPSESSION;
    tmp8.valid = inC->P042.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket042_TM - 1;
    tmp20 = inC->P042.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P042.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P042.Q_DIR == INT_Q_DIR_both_TM_conversions;
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
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      _36_noname_1_11 = _L3_1_11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        _L3_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_11 = _36_noname_1_11;
      }
      tmp11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (_L3_1_11 == 0) {
      _L408_1_11 = 0;
    }
    else {
      _L408_1_11 = _L3_1_11 + 1;
    }
    _L7_1_11 = _L408_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 492; i++) {
      (&_L383_1_11[8])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      tmp9 = _L7_1_11 >= i;
      if (tmp9 & (i >= _L408_1_11)) {
        if ((0 <= i - _L408_1_11) & (i - _L408_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L408_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L407_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L408_1_11;
    tmp8.endAddress = _L7_1_11;
    if ((0 <= tmp11 - 1) & (tmp11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[tmp11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P045.valid) {
    (&_37__L383_1_11[0])[0] = inC->P045.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P045.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P045.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P045.NID_MN;
    tmp18.valid = inC->P045.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket045_TM - 1;
    tmp20 = inC->P045.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P045.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P045.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P045.NID_PACKET == 45) {
      tmp22 = 45 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P045.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp22 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp22;
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = noname_1_11;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 496; i++) {
      _26__L209_1_9[i] = 0;
    }
    kcg_copy_array_int_496(&_37__L383_1_11[4], &_26__L209_1_9);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _34__L407_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _34__L407_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P046.valid) {
    (&(&(&_L383_1_11[0])[0])[0])[0] = inC->P046.NID_PACKET;
    (&(&(&_L383_1_11[0])[0])[0])[1] = inC->P046.Q_DIR;
    (&(&(&_L383_1_11[0])[0])[0])[2] = inC->P046.L_PACKET;
    (&tmp4[0])[0].M_LEVELTR = inC->P046.M_LEVELTR;
    (&tmp4[0])[0].NID_NTC = inC->P046.NID_NTC;
    tmp8.valid = inC->P046.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 3 + 1 + 2 + inC->P046.N_ITER * 2 - 1;
    tmp20 = inC->P046.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P046.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P046.Q_DIR == INT_Q_DIR_both_TM_conversions;
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
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      _36_noname_1_11 = _L3_1_11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        _L3_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_11 = _36_noname_1_11;
      }
      tmp11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (_L3_1_11 == 0) {
      _L408_1_11 = 0;
    }
    else {
      _L408_1_11 = _L3_1_11 + 1;
    }
    _L7_1_11 = _L408_1_11 + (tmp8.endAddress - tmp8.startAddress);
    _L403_1_13[0] = inC->P046.N_ITER;
    kcg_copy_P046_trackide_sectionlist_T_TM(&tmp4[1], &inC->P046.SECTIONS);
    for (i = 0; i < 33; i++) {
      _28__L74_1_1_9[i][0] = tmp4[i].M_LEVELTR;
      _28__L74_1_1_9[i][1] = tmp4[i].NID_NTC;
    }
    for (i = 0; i < 430; i++) {
      _27__L209_1_9[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_11[3], &_L403_1_13);
    kcg_copy_P046_sections_array_flat_T_TM(
      &tmp3,
      (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 2) & (i / 2 < 33) & ((0 <= i % 2) & (i % 2 < 2))) {
        tmp7 = _28__L74_1_1_9[i / 2][i % 2];
      }
      else {
        tmp7 = 0;
      }
      if ((0 <= i) & (i < 66)) {
        tmp3[i] = tmp7;
      }
    }
    kcg_copy_P046_sections_array_flat_T_TM(&_L383_1_11[4], &tmp3);
    kcg_copy_array_int_430(&_L383_1_11[70], &_27__L209_1_9);
    for (i = 0; i < 500; i++) {
      tmp9 = _L7_1_11 >= i;
      if (tmp9 & (i >= _L408_1_11)) {
        if ((0 <= i - _L408_1_11) & (i - _L408_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L408_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L407_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L408_1_11;
    tmp8.endAddress = _L7_1_11;
    if ((0 <= tmp11 - 1) & (tmp11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[tmp11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P057.valid) {
    (&_37__L383_1_11[0])[0] = inC->P057.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P057.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P057.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P057.T_MAR;
    (&_37__L383_1_11[0])[4] = inC->P057.T_TIMEOUTRQST;
    (&_37__L383_1_11[0])[5] = inC->P057.T_CYCRQST;
    tmp18.valid = inC->P057.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket057_TM - 1;
    tmp20 = inC->P057.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P057.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P057.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P057.NID_PACKET == 57) {
      tmp24 = 57 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P057.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp24 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp24;
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _32__L7_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp22 = _32__L7_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _32__L7_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _32__L7_1_11 = tmp22;
      }
      _31__L3_1_11 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_32__L7_1_11 == 0) {
      _34__L407_1_11 = 0;
    }
    else {
      _34__L407_1_11 = _32__L7_1_11 + 1;
    }
    _33__L408_1_11 = _34__L407_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12[i] = 0;
    }
    kcg_copy_array_int_494(&_37__L383_1_11[6], &_L427_1_12);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _33__L408_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _34__L407_1_11)) {
        if ((0 <= i - _34__L407_1_11) & (i - _34__L407_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _34__L407_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      noname_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _34__L407_1_11;
    tmp18.endAddress = _33__L408_1_11;
    if ((0 <= _31__L3_1_11 - 1) & (_31__L3_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_31__L3_1_11 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P058.valid) {
    (&(&_L383_1_11[0])[0])[0] = inC->P058.NID_PACKET;
    (&(&_L383_1_11[0])[0])[1] = inC->P058.Q_DIR;
    (&(&_L383_1_11[0])[0])[2] = inC->P058.L_PACKET;
    (&(&_L383_1_11[0])[0])[3] = inC->P058.Q_SCALE;
    (&(&_L383_1_11[0])[0])[4] = inC->P058.T_CYCLOC;
    (&(&_L383_1_11[0])[0])[5] = inC->P058.D_CYCLOC;
    (&(&_L383_1_11[0])[0])[6] = inC->P058.M_LOC;
    (&(&_L383_1_11[0])[0])[7] = inC->P058.N_ITER;
    tmp8.valid = inC->P058.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 8 + inC->P058.N_ITER * 2 - 1;
    tmp20 = inC->P058.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P058.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P058.Q_DIR == INT_Q_DIR_both_TM_conversions;
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
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      _36_noname_1_11 = _L3_1_11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        _L3_1_11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_11 = _36_noname_1_11;
      }
      tmp11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (_L3_1_11 == 0) {
      _L408_1_11 = 0;
    }
    else {
      _L408_1_11 = _L3_1_11 + 1;
    }
    _L7_1_11 = _L408_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 32; i++) {
      _L74_1_1_9[i][0] = inC->P058.SECTIONS[i].D_LOC;
      _L74_1_1_9[i][1] = inC->P058.SECTIONS[i].Q_LGTLOC;
    }
    for (i = 0; i < 428; i++) {
      _L209_1_9[i] = 0;
    }
    kcg_copy_P058_sections_array_flat_T_TM(
      &tmp2,
      (P058_sections_array_flat_T_TM *) &DEFAULT_P058_sections_array_flat_TM);
    for (i = 0; i < 64; i++) {
      if ((0 <= i / 2) & (i / 2 < 32) & ((0 <= i % 2) & (i % 2 < 2))) {
        tmp2[i] = _L74_1_1_9[i / 2][i % 2];
      }
      else {
        tmp2[i] = 0;
      }
    }
    kcg_copy_P058_sections_array_flat_T_TM(&_L383_1_11[8], &tmp2);
    kcg_copy_array_int_428(&_L383_1_11[72], &_L209_1_9);
    for (i = 0; i < 500; i++) {
      tmp9 = _L7_1_11 >= i;
      if (tmp9 & (i >= _L408_1_11)) {
        if ((0 <= i - _L408_1_11) & (i - _L408_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L408_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L407_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L408_1_11;
    tmp8.endAddress = _L7_1_11;
    if ((0 <= tmp11 - 1) & (tmp11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[tmp11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P064.valid) {
    (&_37__L383_1_11[0])[0] = inC->P064.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P064.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P064.L_PACKET;
    tmp18.valid = inC->P064.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket064_TM - 1;
    tmp20 = inC->P064.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P064.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P064.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P064.NID_PACKET == 64) {
      tmp22 = 64 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P064.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp22 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp22;
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = tmp7;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5[i] = 0;
    }
    kcg_copy_array_int_497(&_37__L383_1_11[3], &_L209_1_5);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _34__L407_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _34__L407_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P065.valid) {
    (&_L383_1_11[0])[0] = inC->P065.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P065.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P065.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P065.Q_SCALE;
    (&_L383_1_11[0])[4] = inC->P065.NID_TSR;
    (&_L383_1_11[0])[5] = inC->P065.D_TSR;
    (&_L383_1_11[0])[6] = inC->P065.L_TSR;
    (&_L383_1_11[0])[7] = inC->P065.Q_FRONT;
    (&_L383_1_11[0])[8] = inC->P065.V_TSR;
    tmp8.valid = inC->P065.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket065_TM - 1;
    tmp20 = inC->P065.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P065.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P065.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P065.NID_PACKET == 65) {
      _36_noname_1_11 = 65 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P065.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        inC->P065.NID_TSR * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _36_noname_1_11 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _36_noname_1_11;
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp11 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11 = tmp11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp11 = noname_1_11;
      }
      tmp13 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp11 == 0) {
      _L7_1_11 = 0;
    }
    else {
      _L7_1_11 = tmp11 + 1;
    }
    _L3_1_11 = _L7_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 491; i++) {
      _L395_1_6[i] = 0;
    }
    kcg_copy_array_int_491(&_L383_1_11[9], &_L395_1_6);
    for (i = 0; i < 500; i++) {
      tmp9 = _L3_1_11 >= i;
      if (tmp9 & (i >= _L7_1_11)) {
        if ((0 <= i - _L7_1_11) & (i - _L7_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L7_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L7_1_11;
    tmp8.endAddress = _L3_1_11;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P066.valid) {
    (&_37__L383_1_11[0])[0] = inC->P066.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P066.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P066.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P066.NID_TSR;
    tmp18.valid = inC->P066.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket066_TM - 1;
    tmp20 = inC->P066.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P066.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P066.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P066.NID_PACKET == 66) {
      tmp22 = 66 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P066.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp22 = ERROR_nid_packet_TM;
    }
    tmp18.nid_packet = tmp22;
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = _L407_1_11;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 496; i++) {
      _26__L209_1_9[i] = 0;
    }
    kcg_copy_array_int_496(&_37__L383_1_11[4], &_26__L209_1_9);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _34__L407_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _34__L407_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P071.valid) {
    (&_L383_1_11[0])[0] = inC->P071.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P071.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P071.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P071.Q_SCALE;
    (&_L383_1_11[0])[4] = inC->P071.D_ADHESION;
    (&_L383_1_11[0])[5] = inC->P071.L_ADHESION;
    (&_L383_1_11[0])[6] = inC->P071.M_ADHESION;
    tmp8.valid = inC->P071.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket071_TM - 1;
    tmp20 = inC->P071.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P071.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P071.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P071.NID_PACKET == 71) {
      _36_noname_1_11 = 71 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P071.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _36_noname_1_11 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _36_noname_1_11;
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp11 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = tmp11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp11 = tmp7;
      }
      tmp13 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp11 == 0) {
      _L7_1_11 = 0;
    }
    else {
      _L7_1_11 = tmp11 + 1;
    }
    _L3_1_11 = _L7_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 493; i++) {
      _L209_1_1[i] = 0;
    }
    kcg_copy_array_int_493(&_L383_1_11[7], &_L209_1_1);
    for (i = 0; i < 500; i++) {
      tmp9 = _L3_1_11 >= i;
      if (tmp9 & (i >= _L7_1_11)) {
        if ((0 <= i - _L7_1_11) & (i - _L7_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L7_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L7_1_11;
    tmp8.endAddress = _L3_1_11;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P072_baseline2.valid) {
    (&(&_37__L383_1_11[0])[0])[0] = inC->P072_baseline2.NID_PACKET;
    (&(&_37__L383_1_11[0])[0])[1] = inC->P072_baseline2.Q_DIR;
    (&(&_37__L383_1_11[0])[0])[2] = inC->P072_baseline2.L_PACKET;
    (&(&_37__L383_1_11[0])[0])[3] = inC->P072_baseline2.Q_SCALE;
    (&(&_37__L383_1_11[0])[0])[4] = inC->P072_baseline2.Q_TEXTCLASS;
    (&(&_37__L383_1_11[0])[0])[5] = inC->P072_baseline2.Q_TEXTDISPLAY;
    (&(&_37__L383_1_11[0])[0])[6] = inC->P072_baseline2.D_TEXTDISPLAY_start;
    (&(&_37__L383_1_11[0])[0])[7] = inC->P072_baseline2.M_MODETEXTDISPLAY_start;
    (&(&_37__L383_1_11[0])[0])[8] =
      inC->P072_baseline2.M_LEVELTEXTDISPLAY_start;
    (&(&_37__L383_1_11[0])[0])[9] = inC->P072_baseline2.NID_NTC_start;
    (&(&_37__L383_1_11[0])[0])[10] = inC->P072_baseline2.L_TEXTDISPLAY_end;
    (&(&_37__L383_1_11[0])[0])[11] = inC->P072_baseline2.T_TEXTDISPLAY_end;
    (&(&_37__L383_1_11[0])[0])[12] = inC->P072_baseline2.M_MODETEXTDISPLAY_end;
    (&(&_37__L383_1_11[0])[0])[13] = inC->P072_baseline2.M_LEVELTEXTDISPLAY_end;
    (&(&_37__L383_1_11[0])[0])[14] = inC->P072_baseline2.NID_NTC_end;
    (&(&_37__L383_1_11[0])[0])[15] = inC->P072_baseline2.Q_TEXTCONFIRM;
    (&(&_37__L383_1_11[0])[0])[16] = inC->P072_baseline2.L_TEXT;
    tmp18.nid_packet = inC->P072_baseline2.NID_PACKET;
    tmp18.valid = inC->P072_baseline2.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = 16 + 1 + inC->P072_baseline2.L_TEXT * 1 - 1;
    tmp20 = inC->P072_baseline2.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P072_baseline2.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
        tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        tmp21 = inC->P072_baseline2.Q_DIR == INT_Q_DIR_both_TM_conversions;
        if (tmp21) {
          tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp24 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11 = tmp24;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        tmp24 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        tmp24 = noname_1_11;
      }
      tmp22 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (tmp24 == 0) {
      _32__L7_1_11 = 0;
    }
    else {
      _32__L7_1_11 = tmp24 + 1;
    }
    _31__L3_1_11 = _32__L7_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 228; i++) {
      _25__L209_1_7[i] = 0;
    }
    kcg_copy_X_TEXT_trackside_T_TM(
      &_37__L383_1_11[17],
      &inC->P072_baseline2.X_TEXT);
    kcg_copy_array_int_228(&_37__L383_1_11[272], &_25__L209_1_7);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _31__L3_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _32__L7_1_11)) {
        if ((0 <= i - _32__L7_1_11) & (i - _32__L7_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _32__L7_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _33__L408_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _33__L408_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _32__L7_1_11;
    tmp18.endAddress = _31__L3_1_11;
    if ((0 <= tmp22 - 1) & (tmp22 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp22 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P080.valid) {
    (&(&(&_L383_1_11[0])[0])[0])[0] = inC->P080.NID_PACKET;
    (&(&(&_L383_1_11[0])[0])[0])[1] = inC->P080.Q_DIR;
    (&(&(&_L383_1_11[0])[0])[0])[2] = inC->P080.L_PACKET;
    (&(&(&_L383_1_11[0])[0])[0])[3] = inC->P080.Q_SCALE;
    (&tmp1[0])[0].D_MAMODE = inC->P080.D_MAMODE;
    (&tmp1[0])[0].M_MAMODE = inC->P080.M_MAMODE;
    (&tmp1[0])[0].V_MAMODE = inC->P080.V_MAMODE;
    (&tmp1[0])[0].L_MAMODE = inC->P080.L_MAMODE;
    (&tmp1[0])[0].L_ACKMAMODE = inC->P080.L_ACKMAMODE;
    (&tmp1[0])[0].Q_MAMODE = inC->P080.Q_MAMODE;
    tmp8.valid = inC->P080.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = 4 + 1 + 6 + inC->P080.N_ITER * 6 - 1;
    tmp20 = inC->P080.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P080.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P080.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P080.NID_PACKET == 80) {
      _36_noname_1_11 = 80 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P080.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _36_noname_1_11 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _36_noname_1_11;
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp11 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11 = tmp11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp11 = _L407_1_11;
      }
      tmp13 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp11 == 0) {
      _L7_1_11 = 0;
    }
    else {
      _L7_1_11 = tmp11 + 1;
    }
    _L3_1_11 = _L7_1_11 + (tmp8.endAddress - tmp8.startAddress);
    _L403_1_13[0] = inC->P080.N_ITER;
    kcg_copy_P080_trackide_sectionlist_T_TM(&tmp1[1], &inC->P080.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_2_1_7[i][0] = tmp1[i].D_MAMODE;
      _L74_2_1_7[i][1] = tmp1[i].M_MAMODE;
      _L74_2_1_7[i][2] = tmp1[i].V_MAMODE;
      _L74_2_1_7[i][3] = tmp1[i].L_MAMODE;
      _L74_2_1_7[i][4] = tmp1[i].L_ACKMAMODE;
      _L74_2_1_7[i][5] = tmp1[i].Q_MAMODE;
    }
    for (i = 0; i < 297; i++) {
      _L209_1_7[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_11[4], &_L403_1_13);
    kcg_copy_P080_sections_array_flat_T_TM(
      &tmp,
      (P080_sections_array_flat_T_TM *) &DEFAULT_P080_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 6) & (i / 6 < 33) & ((0 <= i % 6) & (i % 6 < 6))) {
        _34__L407_1_11 = _L74_2_1_7[i / 6][i % 6];
      }
      else {
        _34__L407_1_11 = 0;
      }
      if ((0 <= i) & (i < 198)) {
        tmp[i] = _34__L407_1_11;
      }
    }
    kcg_copy_P080_sections_array_flat_T_TM(&_L383_1_11[5], &tmp);
    kcg_copy_array_int_297(&_L383_1_11[203], &_L209_1_7);
    for (i = 0; i < 500; i++) {
      tmp9 = _L3_1_11 >= i;
      if (tmp9 & (i >= _L7_1_11)) {
        if ((0 <= i - _L7_1_11) & (i - _L7_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L7_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L7_1_11;
    tmp8.endAddress = _L3_1_11;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P131.valid) {
    (&_37__L383_1_11[0])[0] = inC->P131.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P131.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P131.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P131.Q_SCALE;
    (&_37__L383_1_11[0])[4] = inC->P131.D_RBCTR;
    (&_37__L383_1_11[0])[5] = inC->P131.NID_C;
    (&_37__L383_1_11[0])[6] = inC->P131.NID_RBC;
    (&_37__L383_1_11[0])[7] = inC->P131.NID_RADIO;
    (&_37__L383_1_11[0])[8] = inC->P131.Q_SLEEPSESSION;
    tmp18.valid = inC->P131.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket131_TM - 1;
    tmp20 = inC->P131.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P131.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P131.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P131.NID_PACKET == 131) {
      tmp18.nid_packet = 131 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P131.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = tmp7;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 491; i++) {
      _L395_1_6[i] = 0;
    }
    kcg_copy_array_int_491(&_37__L383_1_11[9], &_L395_1_6);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      noname_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P132.valid) {
    (&_L383_1_11[0])[0] = inC->P132.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P132.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P132.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P132.Q_ASPECT;
    tmp8.valid = inC->P132.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket132_TM - 1;
    tmp20 = inC->P132.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P132.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P132.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P132.NID_PACKET == 132) {
      _36_noname_1_11 = 132 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P132.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _36_noname_1_11 = ERROR_nid_packet_TM;
    }
    tmp8.nid_packet = _36_noname_1_11;
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp11 = 0;
    for (i = 0; i < 30; i++) {
      _34__L407_1_11 = tmp11;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp11 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp11 = _34__L407_1_11;
      }
      tmp13 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp11 == 0) {
      _L7_1_11 = 0;
    }
    else {
      _L7_1_11 = tmp11 + 1;
    }
    _L3_1_11 = _L7_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 496; i++) {
      _26__L209_1_9[i] = 0;
    }
    kcg_copy_array_int_496(&_L383_1_11[4], &_26__L209_1_9);
    for (i = 0; i < 500; i++) {
      tmp9 = _L3_1_11 >= i;
      if (tmp9 & (i >= _L7_1_11)) {
        if ((0 <= i - _L7_1_11) & (i - _L7_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L7_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L7_1_11;
    tmp8.endAddress = _L3_1_11;
    if ((0 <= tmp13 - 1) & (tmp13 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[tmp13 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P133.valid) {
    (&_37__L383_1_11[0])[0] = inC->P133.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P133.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P133.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P133.Q_SCALE;
    (&_37__L383_1_11[0])[4] = inC->P133.Q_RIU;
    (&_37__L383_1_11[0])[5] = inC->P133.NID_C;
    (&_37__L383_1_11[0])[6] = inC->P133.NID_RIU;
    (&_37__L383_1_11[0])[7] = inC->P133.NID_RADIO;
    (&_37__L383_1_11[0])[8] = inC->P133.D_INFILL;
    (&_37__L383_1_11[0])[9] = inC->P133.NID_C_next;
    (&_37__L383_1_11[0])[10] = inC->P133.NID_BG_next;
    tmp18.valid = inC->P133.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket133_TM - 1;
    tmp20 = inC->P133.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P133.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P133.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P133.NID_PACKET == 133) {
      tmp18.nid_packet = 133 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P133.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = _L407_1_11;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 489; i++) {
      (&_37__L383_1_11[11])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      noname_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P134.valid) {
    (&_L383_1_11[0])[0] = inC->P134.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P134.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P134.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P134.Q_SCALE;
    (&_L383_1_11[0])[4] = inC->P134.NID_LOOP;
    (&_L383_1_11[0])[5] = inC->P134.D_LOOP;
    (&_L383_1_11[0])[6] = inC->P134.L_LOOP;
    (&_L383_1_11[0])[7] = inC->P134.Q_LOOPDIR;
    (&_L383_1_11[0])[8] = inC->P134.Q_SSCODE;
    tmp8.valid = inC->P134.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket134_TM - 1;
    tmp20 = inC->P134.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P134.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P134.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P134.NID_PACKET == 134) {
      tmp8.nid_packet = 134 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P134.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp8.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = tmp13;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp13 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = tmp7;
      }
      _36_noname_1_11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11 = 0;
    }
    else {
      _L3_1_11 = tmp13 + 1;
    }
    tmp11 = _L3_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 491; i++) {
      _L395_1_6[i] = 0;
    }
    kcg_copy_array_int_491(&_L383_1_11[9], &_L395_1_6);
    for (i = 0; i < 500; i++) {
      tmp9 = tmp11 >= i;
      if (tmp9 & (i >= _L3_1_11)) {
        if ((0 <= i - _L3_1_11) & (i - _L3_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L3_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L7_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L3_1_11;
    tmp8.endAddress = tmp11;
    if ((0 <= _36_noname_1_11 - 1) & (_36_noname_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_36_noname_1_11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P135.valid) {
    (&_37__L383_1_11[0])[0] = inC->P135.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P135.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P135.L_PACKET;
    tmp18.valid = inC->P135.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket135_TM - 1;
    tmp20 = inC->P135.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P135.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P135.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P135.NID_PACKET == 135) {
      tmp18.nid_packet = 135 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P135.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      _L408_1_11 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = _L408_1_11;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5[i] = 0;
    }
    kcg_copy_array_int_497(&_37__L383_1_11[3], &_L209_1_5);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _L407_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P136.valid) {
    (&_L383_1_11[0])[0] = inC->P136.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P136.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P136.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P136.Q_NEWCOUNTRY;
    (&_L383_1_11[0])[4] = inC->P136.NID_C;
    (&_L383_1_11[0])[5] = inC->P136.NID_BG;
    tmp8.valid = inC->P136.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket136_TM - 1;
    tmp20 = inC->P136.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P136.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P136.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P136.NID_PACKET == 136) {
      tmp8.nid_packet = 136 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P136.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp8.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11 = tmp13;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp13 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = noname_1_11;
      }
      _36_noname_1_11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11 = 0;
    }
    else {
      _L3_1_11 = tmp13 + 1;
    }
    tmp11 = _L3_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11[6], &_L427_1_12);
    for (i = 0; i < 500; i++) {
      tmp9 = tmp11 >= i;
      if (tmp9 & (i >= _L3_1_11)) {
        if ((0 <= i - _L3_1_11) & (i - _L3_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L3_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L7_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L3_1_11;
    tmp8.endAddress = tmp11;
    if ((0 <= _36_noname_1_11 - 1) & (_36_noname_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_36_noname_1_11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P137.valid) {
    (&_37__L383_1_11[0])[0] = inC->P137.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P137.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P137.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P137.Q_SRSTOP;
    tmp18.valid = inC->P137.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket137_TM - 1;
    tmp20 = inC->P137.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P137.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P137.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P137.NID_PACKET == 137) {
      tmp18.nid_packet = 137 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P137.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = tmp7;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 496; i++) {
      _26__L209_1_9[i] = 0;
    }
    kcg_copy_array_int_496(&_37__L383_1_11[4], &_26__L209_1_9);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P138.valid) {
    (&_L383_1_11[0])[0] = inC->P138.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P138.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P138.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P138.Q_SCALE;
    (&_L383_1_11[0])[4] = inC->P138.D_STARTREVERSE;
    (&_L383_1_11[0])[5] = inC->P138.L_REVERSEAREA;
    tmp8.valid = inC->P138.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket138_TM - 1;
    tmp20 = inC->P138.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P138.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P138.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P138.NID_PACKET == 138) {
      tmp8.nid_packet = 138 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P138.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp8.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11 = tmp13;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp13 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = _L407_1_11;
      }
      _36_noname_1_11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11 = 0;
    }
    else {
      _L3_1_11 = tmp13 + 1;
    }
    tmp11 = _L3_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_11[6], &_L427_1_12);
    for (i = 0; i < 500; i++) {
      tmp9 = tmp11 >= i;
      if (tmp9 & (i >= _L3_1_11)) {
        if ((0 <= i - _L3_1_11) & (i - _L3_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L3_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L7_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L3_1_11;
    tmp8.endAddress = tmp11;
    if ((0 <= _36_noname_1_11 - 1) & (_36_noname_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_36_noname_1_11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P139.valid) {
    (&_37__L383_1_11[0])[0] = inC->P139.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P139.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P139.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P139.Q_SCALE;
    (&_37__L383_1_11[0])[4] = inC->P139.D_REVERSE;
    (&_37__L383_1_11[0])[5] = inC->P139.V_REVERSE;
    tmp18.valid = inC->P139.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket139_TM - 1;
    tmp20 = inC->P139.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P139.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P139.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P139.NID_PACKET == 139) {
      tmp18.nid_packet = 139 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P139.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = noname_1_11;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 494; i++) {
      _L427_1_12[i] = 0;
    }
    kcg_copy_array_int_494(&_37__L383_1_11[6], &_L427_1_12);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P140.valid) {
    (&_L383_1_11[0])[0] = inC->P140.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P140.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P140.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P140.NID_OPERATIONAL;
    tmp8.valid = inC->P140.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket140_TM - 1;
    tmp20 = inC->P140.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P140.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P140.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P140.NID_PACKET == 140) {
      tmp8.nid_packet = 140 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P140.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp8.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = tmp13;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp13 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = tmp7;
      }
      _36_noname_1_11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11 = 0;
    }
    else {
      _L3_1_11 = tmp13 + 1;
    }
    tmp11 = _L3_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 496; i++) {
      _26__L209_1_9[i] = 0;
    }
    kcg_copy_array_int_496(&_L383_1_11[4], &_26__L209_1_9);
    for (i = 0; i < 500; i++) {
      tmp9 = tmp11 >= i;
      if (tmp9 & (i >= _L3_1_11)) {
        if ((0 <= i - _L3_1_11) & (i - _L3_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L3_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L7_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L3_1_11;
    tmp8.endAddress = tmp11;
    if ((0 <= _36_noname_1_11 - 1) & (_36_noname_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_36_noname_1_11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P141.valid) {
    (&_37__L383_1_11[0])[0] = inC->P141.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P141.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P141.L_PACKET;
    (&_37__L383_1_11[0])[3] = inC->P141.Q_GDIR;
    (&_37__L383_1_11[0])[4] = inC->P141.G_TSR;
    tmp18.valid = inC->P141.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket141_TM - 1;
    tmp20 = inC->P141.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P141.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P141.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P141.NID_PACKET == 141) {
      tmp18.nid_packet = 141 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P141.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = _L407_1_11;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 495; i++) {
      _L209_1_2[i] = 0;
    }
    kcg_copy_array_int_495(&_37__L383_1_11[5], &_L209_1_2);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P143.valid) {
    (&_L383_1_11[0])[0] = inC->P143.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P143.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P143.L_PACKET;
    (&_L383_1_11[0])[3] = inC->P143.Q_RIU;
    (&_L383_1_11[0])[4] = inC->P143.NID_C;
    (&_L383_1_11[0])[5] = inC->P143.NID_RIU;
    (&_L383_1_11[0])[6] = inC->P143.NID_RADIO;
    tmp8.valid = inC->P143.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket143_TM - 1;
    tmp20 = inC->P143.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P143.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P143.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P143.NID_PACKET == 143) {
      tmp8.nid_packet = 143 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P143.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp8.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11 = tmp13;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp13 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = noname_1_11;
      }
      _36_noname_1_11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11 = 0;
    }
    else {
      _L3_1_11 = tmp13 + 1;
    }
    tmp11 = _L3_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 493; i++) {
      _L209_1_1[i] = 0;
    }
    kcg_copy_array_int_493(&_L383_1_11[7], &_L209_1_1);
    for (i = 0; i < 500; i++) {
      tmp9 = tmp11 >= i;
      if (tmp9 & (i >= _L3_1_11)) {
        if ((0 <= i - _L3_1_11) & (i - _L3_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L3_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L7_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L3_1_11;
    tmp8.endAddress = tmp11;
    if ((0 <= _36_noname_1_11 - 1) & (_36_noname_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_36_noname_1_11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P145.valid) {
    (&_37__L383_1_11[0])[0] = inC->P145.NID_PACKET;
    (&_37__L383_1_11[0])[1] = inC->P145.Q_DIR;
    (&_37__L383_1_11[0])[2] = inC->P145.L_PACKET;
    tmp18.valid = inC->P145.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket145_TM - 1;
    tmp20 = inC->P145.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P145.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P145.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P145.NID_PACKET == 145) {
      tmp18.nid_packet = 145 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P145.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      tmp7 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = tmp7;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5[i] = 0;
    }
    kcg_copy_array_int_497(&_37__L383_1_11[3], &_L209_1_5);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &RadioMessagePackets_01_02);
  }
  if (inC->P254.valid) {
    (&_L383_1_11[0])[0] = inC->P254.NID_PACKET;
    (&_L383_1_11[0])[1] = inC->P254.Q_DIR;
    (&_L383_1_11[0])[2] = inC->P254.L_PACKET;
    tmp8.valid = inC->P254.valid;
    tmp8.startAddress = 0;
    tmp8.endAddress = DIM_MaxElementsPacket254_TM - 1;
    tmp20 = inC->P254.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = inC->P254.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = inC->P254.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P254.NID_PACKET == 254) {
      tmp8.nid_packet = 254 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P254.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp8.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp8.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp8.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp8.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp13 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_11 = tmp13;
      tmp10 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp10) {
        tmp13 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        tmp13 = _L407_1_11;
      }
      _36_noname_1_11 = i + 1;
      if (!tmp10) {
        break;
      }
    }
    if (tmp13 == 0) {
      _L3_1_11 = 0;
    }
    else {
      _L3_1_11 = tmp13 + 1;
    }
    tmp11 = _L3_1_11 + (tmp8.endAddress - tmp8.startAddress);
    for (i = 0; i < 497; i++) {
      _L209_1_5[i] = 0;
    }
    kcg_copy_array_int_497(&_L383_1_11[3], &_L209_1_5);
    for (i = 0; i < 500; i++) {
      tmp9 = tmp11 >= i;
      if (tmp9 & (i >= _L3_1_11)) {
        if ((0 <= i - _L3_1_11) & (i - _L3_1_11 < 500)) {
          _L406_1_11[i] = _L383_1_11[i - _L3_1_11];
        }
        else {
          _L406_1_11[i] = 0;
        }
      }
      else {
        _L406_1_11[i] = _L24.PacketData[i];
      }
      _L7_1_11 = i + 1;
      if (!tmp9) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L7_1_11; i < 500; i++) {
      _L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketData,
      &_L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02.PacketHeaders,
      &_L24.PacketHeaders);
    tmp8.startAddress = _L3_1_11;
    tmp8.endAddress = tmp11;
    if ((0 <= _36_noname_1_11 - 1) & (_36_noname_1_11 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &RadioMessagePackets_01_02.PacketHeaders[_36_noname_1_11 - 1],
        &tmp8);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &RadioMessagePackets_01_02,
      &_L24);
  }
  if (inC->P255.valid) {
    (&_37__L383_1_11[0])[0] = inC->P255.NID_PACKET;
    tmp18.valid = inC->P255.valid;
    tmp18.startAddress = 0;
    tmp18.endAddress = DIM_MaxElementsPacket255_TM - 1;
    tmp20 = INT_Q_DIR_both_TM == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp20) {
    }
    else {
      IfBlock1_clock_1_1_11 = INT_Q_DIR_both_TM ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_11) {
      }
      else {
        tmp21 = INT_Q_DIR_both_TM == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->P255.NID_PACKET == 255) {
      tmp18.nid_packet = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp20) {
      tmp18.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_11) {
      tmp18.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp21) {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp18.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _31__L3_1_11 = 0;
    for (i = 0; i < 30; i++) {
      noname_1_11 = _31__L3_1_11;
      _38_else_clock_1_1_11_IfBlock1 =
        RadioMessagePackets_01_02.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_38_else_clock_1_1_11_IfBlock1) {
        _31__L3_1_11 = RadioMessagePackets_01_02.PacketHeaders[i].endAddress;
      }
      else {
        _31__L3_1_11 = noname_1_11;
      }
      tmp24 = i + 1;
      if (!_38_else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
    if (_31__L3_1_11 == 0) {
      _33__L408_1_11 = 0;
    }
    else {
      _33__L408_1_11 = _31__L3_1_11 + 1;
    }
    _32__L7_1_11 = _33__L408_1_11 + (tmp18.endAddress - tmp18.startAddress);
    for (i = 0; i < 499; i++) {
      (&_37__L383_1_11[1])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      else_clock_1_1_11_IfBlock1 = _32__L7_1_11 >= i;
      if (else_clock_1_1_11_IfBlock1 & (i >= _33__L408_1_11)) {
        if ((0 <= i - _33__L408_1_11) & (i - _33__L408_1_11 < 500)) {
          _35__L406_1_11[i] = _37__L383_1_11[i - _33__L408_1_11];
        }
        else {
          _35__L406_1_11[i] = 0;
        }
      }
      else {
        _35__L406_1_11[i] = RadioMessagePackets_01_02.PacketData[i];
      }
      _L408_1_11 = i + 1;
      if (!else_clock_1_1_11_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_11; i < 500; i++) {
      _35__L406_1_11[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->packetsOUT.PacketData,
      &_35__L406_1_11);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->packetsOUT.PacketHeaders,
      &RadioMessagePackets_01_02.PacketHeaders);
    tmp18.startAddress = _33__L408_1_11;
    tmp18.endAddress = _32__L7_1_11;
    if ((0 <= tmp24 - 1) & (tmp24 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->packetsOUT.PacketHeaders[tmp24 - 1],
        &tmp18);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->packetsOUT,
      &RadioMessagePackets_01_02);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_MergePackets_TM_API.c
** Generation date: 2015-11-16T17:06:43
*************************************************************$ */

