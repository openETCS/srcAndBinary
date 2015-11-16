/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-ERSA/merged_example\kcg_s2c_config.txt
** Generation date: 2015-11-16T11:33:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergeRadioPackets_TM_old_versions.h"

void SEND_MergeRadioPackets_reset_TM_old_versions(
  outC_SEND_MergeRadioPackets_TM_old_versions *outC)
{
}

/* TM_old_versions::SEND_MergeRadioPackets */
void SEND_MergeRadioPackets_TM_old_versions(
  inC_SEND_MergeRadioPackets_TM_old_versions *inC,
  outC_SEND_MergeRadioPackets_TM_old_versions *outC)
{
  kcg_int tmp20;
  Q_DIR tmp19;
  kcg_int tmp18;
  kcg_bool tmp17;
  array__11231 tmp16;
  P005_sections_array_flat_T_TM tmp15;
  kcg_bool tmp14;
  Metadata_T_Common_Types_Pkg tmp13;
  MetadataElement_T_Common_Types_Pkg tmp12;
  P015_sections_array_flat_T_TM tmp11;
  array__11149 tmp10;
  kcg_int tmp9;
  array__11329 tmp8;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L448 */ array_int_432 _L448_2_1_1;
  array__11108 tmp7;
  P041_sections_array_flat_T_TM tmp6;
  kcg_int tmp5;
  kcg_bool tmp4;
  kcg_bool tmp3;
  MetadataElement_T_Common_Types_Pkg tmp2;
  kcg_int tmp1;
  P058_sections_array_flat_T_TM tmp;
  kcg_int i;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L209 */ array_int_444 _35__L209_1_1;
  /* TM_lib_internal::C_P005_flatten_sections::_L74 */ array_int_7_33 _34__L74_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _33_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1_1_1;
  /* TM_conversions::C_P005_tracksim_compr::_L209 */ array_int_264 _32__L209_1_1;
  /* TM_conversions::C_P005_tracksim_compr::_L383 */ array_int_500 _31__L383_1_1;
  kcg_int _30_noname_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */ array_int_500 _29__L406_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */ kcg_int _28__L407_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */ kcg_int _27__L408_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */ kcg_int _26__L7_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */ kcg_int _25__L3_1_1;
  /* TM_lib_internal::C_P015_flatten_sections::_L74 */ array_int_4_32 _24__L74_1_1_1;
  /* TM_conversions::C_P015_tracksim_compr::_L209 */ array_int_350 _23__L209_1_1;
  /* TM_conversions::C_P015_tracksim_compr::_L403 */ array_int_1 _L403_1_1;
  /* TM_conversions::C_P021_tracksim_compr::_L209 */ array_int_396 _22__L209_1_1;
  /* TM_conversions::C_P057_tracksim_compr::_L209 */ array_int_494 _21__L209_1_1;
  /* TM_conversions::C_P057_tracksim_compr::_L383 */ array_int_500 _L383_1_1;
  kcg_int noname_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */ array_int_500 _L406_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */ kcg_int _L407_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */ kcg_int _L408_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */ kcg_int _L7_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */ kcg_int _L3_1_1;
  /* TM_lib_internal::C_P041_flatten_sections::_L74 */ array_int_3_33 _L74_1_1_4;
  /* TM_conversions::C_P041_tracksim_compr::_L209 */ array_int_395 _L209_1_4;
  /* TM_lib_internal::C_P058_flatten_sections::_L74 */ array_int_2_32 _L74_1_1_1;
  /* TM_conversions::C_P058_tracksim_compr::_L209 */ array_int_428 _L209_1_1;
  /* TM_old_versions::SEND_MergeRadioPackets::_L24 */ CompressedPackets_T_Common_Types_Pkg _L24;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->MessageOUT.Header, &inC->Header);
  if (inC->M03.valid) {
    (&(&_31__L383_1_1[0])[0])[0] = inC->M03.NID_PACKET;
    (&(&_31__L383_1_1[0])[0])[1] = inC->M03.Q_DIR;
    (&(&_31__L383_1_1[0])[0])[2] = inC->M03.L_PACKET;
    (&(&_31__L383_1_1[0])[0])[3] = inC->M03.Q_SCALE;
    (&(&_31__L383_1_1[0])[0])[4] = inC->M03.D_VALIDNV;
    (&(&_31__L383_1_1[0])[0])[5] = inC->M03.N_ITER;
    (&(&_31__L383_1_1[0])[0])[6] = inC->M03.V_NVSHUNT;
    (&(&_31__L383_1_1[0])[0])[7] = inC->M03.V_NVSTFF;
    (&(&_31__L383_1_1[0])[0])[8] = inC->M03.V_NVONSIGHT;
    (&(&_31__L383_1_1[0])[0])[9] = inC->M03.V_NVUNFIT;
    (&(&_31__L383_1_1[0])[0])[10] = inC->M03.V_NVREL;
    (&(&_31__L383_1_1[0])[0])[11] = inC->M03.D_NVROLL;
    (&(&_31__L383_1_1[0])[0])[12] = inC->M03.Q_NVSRBKTRG;
    (&(&_31__L383_1_1[0])[0])[13] = inC->M03.Q_NVEMRRLS;
    (&(&_31__L383_1_1[0])[0])[14] = inC->M03.V_NVALLOWOVTRP;
    (&(&_31__L383_1_1[0])[0])[15] = inC->M03.V_NVSUPOVTRP;
    (&(&_31__L383_1_1[0])[0])[16] = inC->M03.D_NVOVTRP;
    (&(&_31__L383_1_1[0])[0])[17] = inC->M03.T_NVOVTRP;
    (&(&_31__L383_1_1[0])[0])[18] = inC->M03.D_NVPOTRP;
    (&(&_31__L383_1_1[0])[0])[19] = inC->M03.M_NVCONTACT;
    (&(&_31__L383_1_1[0])[0])[20] = inC->M03.T_NVCONTACT;
    (&(&_31__L383_1_1[0])[0])[21] = inC->M03.M_NVDERUN;
    (&(&_31__L383_1_1[0])[0])[22] = inC->M03.D_NVSTFF;
    (&(&_31__L383_1_1[0])[0])[23] = inC->M03.Q_NVDRIVER_ADHES;
    tmp12.valid = inC->M03.valid;
    tmp12.startAddress = 0;
    tmp12.endAddress = 6 + 17 + inC->M03.N_ITER * 1 - 1;
    IfBlock1_clock_1_1_1 = inC->M03.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_1) {
    }
    else {
      _33_else_clock_1_1_1_IfBlock1 = inC->M03.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_33_else_clock_1_1_1_IfBlock1) {
      }
      else {
        else_clock_1_1_1_IfBlock1 = inC->M03.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->M03.NID_PACKET == 3) {
      tmp20 = 3 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M03.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp20 = ERROR_nid_packet_TM;
    }
    tmp12.nid_packet = tmp20;
    if (IfBlock1_clock_1_1_1) {
      tmp19 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_33_else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp12.q_dir = tmp19;
    _26__L7_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp18 = _26__L7_1_1;
      tmp17 = DEFAULT_Packets_TM.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp17) {
        _26__L7_1_1 = DEFAULT_Packets_TM.PacketHeaders[i].endAddress;
      }
      else {
        _26__L7_1_1 = tmp18;
      }
      _25__L3_1_1 = i + 1;
      if (!tmp17) {
        break;
      }
    }
    if (_26__L7_1_1 == 0) {
      _28__L407_1_1 = 0;
    }
    else {
      _28__L407_1_1 = _26__L7_1_1 + 1;
    }
    _27__L408_1_1 = _28__L407_1_1 + (tmp12.endAddress - tmp12.startAddress);
    for (i = 0; i < 444; i++) {
      _35__L209_1_1[i] = 0;
    }
    kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
      &_31__L383_1_1[24],
      &inC->M03.SECTIONS);
    kcg_copy_array_int_444(&_31__L383_1_1[56], &_35__L209_1_1);
    for (i = 0; i < 500; i++) {
      tmp14 = _27__L408_1_1 >= i;
      if (tmp14 & (i >= _28__L407_1_1)) {
        if ((0 <= i - _28__L407_1_1) & (i - _28__L407_1_1 < 500)) {
          _29__L406_1_1[i] = _31__L383_1_1[i - _28__L407_1_1];
        }
        else {
          _29__L406_1_1[i] = 0;
        }
      }
      else {
        _29__L406_1_1[i] = DEFAULT_Packets_TM.PacketData[i];
      }
      _30_noname_1_1 = i + 1;
      if (!tmp14) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _30_noname_1_1; i < 500; i++) {
      _29__L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketData,
      &_29__L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &tmp13,
      (Metadata_T_Common_Types_Pkg *) &DEFAULT_Packets_TM.PacketHeaders);
    tmp12.startAddress = _28__L407_1_1;
    tmp12.endAddress = _27__L408_1_1;
    if ((0 <= _25__L3_1_1 - 1) & (_25__L3_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp13[_25__L3_1_1 - 1],
        &tmp12);
    }
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketHeaders,
      &tmp13);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  }
  if (inC->M05.valid) {
    (&(&(&_31__L383_1_1[0])[0])[0])[0] = inC->M05.NID_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[1] = inC->M05.Q_DIR;
    (&(&(&_31__L383_1_1[0])[0])[0])[2] = inC->M05.L_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[3] = inC->M05.Q_SCALE;
    (&tmp16[0])[0].D_LINK = inC->M05.D_LINK;
    (&tmp16[0])[0].Q_NEWCOUNTRY = inC->M05.Q_NEWCOUNTRY;
    (&tmp16[0])[0].NID_C = inC->M05.NID_C;
    (&tmp16[0])[0].NID_BG = inC->M05.NID_BG;
    (&tmp16[0])[0].Q_LINKORIENTATION = inC->M05.Q_LINKORIENTATION;
    (&tmp16[0])[0].Q_LINKREACTION = inC->M05.Q_LINKREACTION;
    (&tmp16[0])[0].Q_LOCACC = inC->M05.Q_LOCACC;
    tmp12.valid = inC->M05.valid;
    tmp12.startAddress = 0;
    tmp12.endAddress = 4 + 1 + 7 + inC->M05.N_ITER * 7 - 1;
    IfBlock1_clock_1_1_1 = inC->M05.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_1) {
    }
    else {
      _33_else_clock_1_1_1_IfBlock1 = inC->M05.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_33_else_clock_1_1_1_IfBlock1) {
      }
      else {
        else_clock_1_1_1_IfBlock1 = inC->M05.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->M05.NID_PACKET == 5) {
      tmp20 = 5 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M05.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp20 = ERROR_nid_packet_TM;
    }
    tmp12.nid_packet = tmp20;
    if (IfBlock1_clock_1_1_1) {
      tmp19 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_33_else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp12.q_dir = tmp19;
    _26__L7_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp18 = _26__L7_1_1;
      tmp17 = outC->MessageOUT.Messages.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp17) {
        _26__L7_1_1 = outC->MessageOUT.Messages.PacketHeaders[i].endAddress;
      }
      else {
        _26__L7_1_1 = tmp18;
      }
      _25__L3_1_1 = i + 1;
      if (!tmp17) {
        break;
      }
    }
    if (_26__L7_1_1 == 0) {
      _28__L407_1_1 = 0;
    }
    else {
      _28__L407_1_1 = _26__L7_1_1 + 1;
    }
    _27__L408_1_1 = _28__L407_1_1 + (tmp12.endAddress - tmp12.startAddress);
    _L403_1_1[0] = inC->M05.N_ITER;
    kcg_copy_P005_trackide_sectionlist_T_TM(&tmp16[1], &inC->M05.SECTIONS);
    for (i = 0; i < 33; i++) {
      _34__L74_1_1_1[i][0] = tmp16[i].D_LINK;
      _34__L74_1_1_1[i][1] = tmp16[i].Q_NEWCOUNTRY;
      _34__L74_1_1_1[i][2] = tmp16[i].NID_C;
      _34__L74_1_1_1[i][3] = tmp16[i].NID_BG;
      _34__L74_1_1_1[i][4] = tmp16[i].Q_LINKORIENTATION;
      _34__L74_1_1_1[i][5] = tmp16[i].Q_LINKREACTION;
      _34__L74_1_1_1[i][6] = tmp16[i].Q_LOCACC;
    }
    for (i = 0; i < 264; i++) {
      _32__L209_1_1[i] = 0;
    }
    kcg_copy_array_int_1(&_31__L383_1_1[4], &_L403_1_1);
    kcg_copy_P005_sections_array_flat_T_TM(
      &tmp15,
      (P005_sections_array_flat_T_TM *) &DEFAULT_P005_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 7) & (i / 7 < 33) & ((0 <= i % 7) & (i % 7 < 7))) {
        tmp15[i] = _34__L74_1_1_1[i / 7][i % 7];
      }
      else {
        tmp15[i] = 0;
      }
    }
    kcg_copy_P005_sections_array_flat_T_TM(&_31__L383_1_1[5], &tmp15);
    kcg_copy_array_int_264(&_31__L383_1_1[236], &_32__L209_1_1);
    for (i = 0; i < 500; i++) {
      tmp14 = _27__L408_1_1 >= i;
      if (tmp14 & (i >= _28__L407_1_1)) {
        if ((0 <= i - _28__L407_1_1) & (i - _28__L407_1_1 < 500)) {
          _29__L406_1_1[i] = _31__L383_1_1[i - _28__L407_1_1];
        }
        else {
          _29__L406_1_1[i] = 0;
        }
      }
      else {
        _29__L406_1_1[i] = outC->MessageOUT.Messages.PacketData[i];
      }
      _30_noname_1_1 = i + 1;
      if (!tmp14) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _30_noname_1_1; i < 500; i++) {
      _29__L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_29__L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &outC->MessageOUT.Messages.PacketHeaders);
    tmp12.startAddress = _28__L407_1_1;
    tmp12.endAddress = _27__L408_1_1;
    if ((0 <= _25__L3_1_1 - 1) & (_25__L3_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_25__L3_1_1 - 1],
        &tmp12);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &outC->MessageOUT.Messages);
  }
  if (inC->M15.valid) {
    (&(&(&_31__L383_1_1[0])[0])[0])[0] = inC->M15.NID_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[1] = inC->M15.Q_DIR;
    (&(&(&_31__L383_1_1[0])[0])[0])[2] = inC->M15.L_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[3] = inC->M15.Q_SCALE;
    (&(&(&_31__L383_1_1[0])[0])[0])[4] = inC->M15.V_LOA;
    (&(&(&_31__L383_1_1[0])[0])[0])[5] = inC->M15.T_LOA;
    (&(&(&_31__L383_1_1[0])[0])[0])[6] = inC->M15.L_ENDSECTION;
    (&(&(&_31__L383_1_1[0])[0])[0])[7] = inC->M15.Q_SECTIONTIMER;
    (&(&(&_31__L383_1_1[0])[0])[0])[8] = inC->M15.T_SECTIONTIMER;
    (&(&(&_31__L383_1_1[0])[0])[0])[9] = inC->M15.D_SECTIONTIMERSTOPLOC;
    (&(&(&_31__L383_1_1[0])[0])[0])[10] = inC->M15.Q_ENDTIMER;
    (&(&(&_31__L383_1_1[0])[0])[0])[11] = inC->M15.T_ENDTIMER;
    (&(&(&_31__L383_1_1[0])[0])[0])[12] = inC->M15.D_ENDTIMERSTARTLOC;
    (&(&(&_31__L383_1_1[0])[0])[0])[13] = inC->M15.Q_DANGERPOINT;
    (&(&(&_31__L383_1_1[0])[0])[0])[14] = inC->M15.D_DP;
    (&(&(&_31__L383_1_1[0])[0])[0])[15] = inC->M15.V_RELEASEDP;
    (&(&(&_31__L383_1_1[0])[0])[0])[16] = inC->M15.Q_OVERLAP;
    (&(&(&_31__L383_1_1[0])[0])[0])[17] = inC->M15.D_STARTOL;
    (&(&(&_31__L383_1_1[0])[0])[0])[18] = inC->M15.T_OL;
    (&(&(&_31__L383_1_1[0])[0])[0])[19] = inC->M15.D_OL;
    (&(&(&_31__L383_1_1[0])[0])[0])[20] = inC->M15.V_RELEASEOL;
    tmp12.valid = inC->M15.valid;
    tmp12.startAddress = 0;
    tmp12.endAddress = 6 + 1 + 15 + inC->M15.N_ITER * 4 - 1;
    IfBlock1_clock_1_1_1 = inC->M15.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_1) {
    }
    else {
      _33_else_clock_1_1_1_IfBlock1 = inC->M15.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_33_else_clock_1_1_1_IfBlock1) {
      }
      else {
        else_clock_1_1_1_IfBlock1 = inC->M15.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->M15.NID_PACKET == 15) {
      tmp20 = 15 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M15.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp20 = ERROR_nid_packet_TM;
    }
    tmp12.nid_packet = tmp20;
    if (IfBlock1_clock_1_1_1) {
      tmp19 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_33_else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp12.q_dir = tmp19;
    _26__L7_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp18 = _26__L7_1_1;
      tmp17 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp17) {
        _26__L7_1_1 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _26__L7_1_1 = tmp18;
      }
      _25__L3_1_1 = i + 1;
      if (!tmp17) {
        break;
      }
    }
    if (_26__L7_1_1 == 0) {
      _28__L407_1_1 = 0;
    }
    else {
      _28__L407_1_1 = _26__L7_1_1 + 1;
    }
    _27__L408_1_1 = _28__L407_1_1 + (tmp12.endAddress - tmp12.startAddress);
    _L403_1_1[0] = inC->M15.N_ITER;
    for (i = 0; i < 32; i++) {
      _24__L74_1_1_1[i][0] = inC->M15.SECTIONS[i].L_SECTION;
      _24__L74_1_1_1[i][1] = inC->M15.SECTIONS[i].Q_SECTIONTIMER;
      _24__L74_1_1_1[i][2] = inC->M15.SECTIONS[i].T_SECTIONTIMER;
      _24__L74_1_1_1[i][3] = inC->M15.SECTIONS[i].D_SECTIONTIMERSTOPLOC;
    }
    for (i = 0; i < 350; i++) {
      _23__L209_1_1[i] = 0;
    }
    kcg_copy_array_int_1(&_31__L383_1_1[21], &_L403_1_1);
    kcg_copy_P015_sections_array_flat_T_TM(
      &tmp11,
      (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
    for (i = 0; i < 128; i++) {
      if ((0 <= i / 4) & (i / 4 < 32) & ((0 <= i % 4) & (i % 4 < 4))) {
        tmp11[i] = _24__L74_1_1_1[i / 4][i % 4];
      }
      else {
        tmp11[i] = 0;
      }
    }
    kcg_copy_P015_sections_array_flat_T_TM(&_31__L383_1_1[22], &tmp11);
    kcg_copy_array_int_350(&_31__L383_1_1[150], &_23__L209_1_1);
    for (i = 0; i < 500; i++) {
      tmp14 = _27__L408_1_1 >= i;
      if (tmp14 & (i >= _28__L407_1_1)) {
        if ((0 <= i - _28__L407_1_1) & (i - _28__L407_1_1 < 500)) {
          _29__L406_1_1[i] = _31__L383_1_1[i - _28__L407_1_1];
        }
        else {
          _29__L406_1_1[i] = 0;
        }
      }
      else {
        _29__L406_1_1[i] = _L24.PacketData[i];
      }
      _30_noname_1_1 = i + 1;
      if (!tmp14) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _30_noname_1_1; i < 500; i++) {
      _29__L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketData,
      &_29__L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketHeaders,
      &_L24.PacketHeaders);
    tmp12.startAddress = _28__L407_1_1;
    tmp12.endAddress = _27__L408_1_1;
    if ((0 <= _25__L3_1_1 - 1) & (_25__L3_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->MessageOUT.Messages.PacketHeaders[_25__L3_1_1 - 1],
        &tmp12);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages,
      &_L24);
  }
  if (inC->M21.valid) {
    (&(&(&_31__L383_1_1[0])[0])[0])[0] = inC->M21.NID_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[1] = inC->M21.Q_DIR;
    (&(&(&_31__L383_1_1[0])[0])[0])[2] = inC->M21.L_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[3] = inC->M21.Q_SCALE;
    (&tmp10[0])[0].D_GRADIENT = inC->M21.D_GRADIENT;
    (&tmp10[0])[0].Q_GDIR = inC->M21.Q_GDIR;
    (&tmp10[0])[0].G_A = inC->M21.G_A;
    tmp12.valid = inC->M21.valid;
    tmp12.startAddress = 0;
    tmp12.endAddress = 4 + 1 + 3 + inC->M21.N_ITER * 3 - 1;
    IfBlock1_clock_1_1_1 = inC->M21.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_1) {
    }
    else {
      _33_else_clock_1_1_1_IfBlock1 = inC->M21.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_33_else_clock_1_1_1_IfBlock1) {
      }
      else {
        else_clock_1_1_1_IfBlock1 = inC->M21.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->M21.NID_PACKET == 21) {
      _25__L3_1_1 = 21 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M21.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _25__L3_1_1 = ERROR_nid_packet_TM;
    }
    tmp12.nid_packet = _25__L3_1_1;
    if (IfBlock1_clock_1_1_1) {
      tmp19 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_33_else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp19 = ENUM_Q_DIR_both_TM_conversions;
    }
    tmp12.q_dir = tmp19;
    _27__L408_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp20 = _27__L408_1_1;
      tmp17 = outC->MessageOUT.Messages.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp17) {
        _27__L408_1_1 = outC->MessageOUT.Messages.PacketHeaders[i].endAddress;
      }
      else {
        _27__L408_1_1 = tmp20;
      }
      _26__L7_1_1 = i + 1;
      if (!tmp17) {
        break;
      }
    }
    if (_27__L408_1_1 == 0) {
      _30_noname_1_1 = 0;
    }
    else {
      _30_noname_1_1 = _27__L408_1_1 + 1;
    }
    _28__L407_1_1 = _30_noname_1_1 + (tmp12.endAddress - tmp12.startAddress);
    _L403_1_1[0] = inC->M21.N_ITER;
    kcg_copy_P021_trackide_sectionlist_T_TM(&tmp10[1], &inC->M21.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_4[i][0] = tmp10[i].D_GRADIENT;
      _L74_1_1_4[i][1] = tmp10[i].Q_GDIR;
      _L74_1_1_4[i][2] = tmp10[i].G_A;
    }
    for (i = 0; i < 396; i++) {
      _22__L209_1_1[i] = 0;
    }
    kcg_copy_array_int_1(&_31__L383_1_1[4], &_L403_1_1);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp6,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P021_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp18 = _L74_1_1_4[i / 3][i % 3];
      }
      else {
        tmp18 = 0;
      }
      if ((0 <= i) & (i < 99)) {
        tmp6[i] = tmp18;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_31__L383_1_1[5], &tmp6);
    kcg_copy_array_int_396(&_31__L383_1_1[104], &_22__L209_1_1);
    for (i = 0; i < 500; i++) {
      tmp14 = _28__L407_1_1 >= i;
      if (tmp14 & (i >= _30_noname_1_1)) {
        if ((0 <= i - _30_noname_1_1) & (i - _30_noname_1_1 < 500)) {
          _29__L406_1_1[i] = _31__L383_1_1[i - _30_noname_1_1];
        }
        else {
          _29__L406_1_1[i] = 0;
        }
      }
      else {
        _29__L406_1_1[i] = outC->MessageOUT.Messages.PacketData[i];
      }
      tmp9 = i + 1;
      if (!tmp14) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp9; i < 500; i++) {
      _29__L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_29__L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &outC->MessageOUT.Messages.PacketHeaders);
    tmp12.startAddress = _30_noname_1_1;
    tmp12.endAddress = _28__L407_1_1;
    if ((0 <= _26__L7_1_1 - 1) & (_26__L7_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_26__L7_1_1 - 1],
        &tmp12);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &outC->MessageOUT.Messages);
  }
  if (inC->M27.valid) {
    (&tmp8[0])[0].D_STATIC = inC->M27.D_STATIC;
    (&tmp8[0])[0].V_STATIC = inC->M27.V_STATIC;
    (&tmp8[0])[0].Q_FRONT = inC->M27.Q_FRONT;
    (&tmp8[0])[0].N_ITER = inC->M27.N_ITER_n;
    kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
      &(&tmp8[0])[0].SECTIONS_q_diff,
      &inC->M27.SECTIONS_q_diff);
    (&_L383_1_1[0])[0] = inC->M27.NID_PACKET;
    (&_L383_1_1[0])[1] = inC->M27.Q_DIR;
    (&_L383_1_1[0])[2] = inC->M27.L_PACKET;
    (&_L383_1_1[0])[3] = inC->M27.Q_SCALE;
    (&_L383_1_1[0])[4] = inC->M27.N_ITER_k;
    tmp2.valid = inC->M27.valid;
    tmp2.startAddress = 0;
    tmp2.endAddress = 6 - 1;
    _33_else_clock_1_1_1_IfBlock1 = inC->M27.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_33_else_clock_1_1_1_IfBlock1) {
      tmp19 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      tmp4 = inC->M27.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (tmp4) {
        tmp19 = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        tmp3 = inC->M27.Q_DIR == INT_Q_DIR_both_TM_conversions;
        if (tmp3) {
          tmp19 = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp19 = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp2.q_dir = tmp19;
    if (inC->M27.NID_PACKET == 27) {
      _L3_1_1 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M27.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _L3_1_1 = ERROR_nid_packet_TM;
    }
    tmp2.nid_packet = _L3_1_1;
    _L408_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp5 = _L408_1_1;
      else_clock_1_1_1_IfBlock1 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (else_clock_1_1_1_IfBlock1) {
        _L408_1_1 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _L408_1_1 = tmp5;
      }
      _L7_1_1 = i + 1;
      if (!else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
    if (_L408_1_1 == 0) {
      noname_1_1 = 0;
    }
    else {
      noname_1_1 = _L408_1_1 + 1;
    }
    _L407_1_1 = noname_1_1 + (tmp2.endAddress - tmp2.startAddress);
    if (inC->M27.NID_PACKET == 27) {
      tmp9 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M27.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 100 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp9 = ERROR_nid_packet_TM;
    }
    (&_L383_1_1[0])[5] = tmp9;
    for (i = 0; i < 494; i++) {
      _21__L209_1_1[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_1[6], &_21__L209_1_1);
    for (i = 0; i < 500; i++) {
      IfBlock1_clock_1_1_1 = _L407_1_1 >= i;
      if (IfBlock1_clock_1_1_1 & (i >= noname_1_1)) {
        if ((0 <= i - noname_1_1) & (i - noname_1_1 < 500)) {
          _L406_1_1[i] = _L383_1_1[i - noname_1_1];
        }
        else {
          _L406_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1[i] = _L24.PacketData[i];
      }
      tmp1 = i + 1;
      if (!IfBlock1_clock_1_1_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp1; i < 500; i++) {
      _L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketData,
      &_L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketHeaders,
      &_L24.PacketHeaders);
    tmp2.startAddress = noname_1_1;
    tmp2.endAddress = _L407_1_1;
    if ((0 <= _L7_1_1 - 1) & (_L7_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->MessageOUT.Messages.PacketHeaders[_L7_1_1 - 1],
        &tmp2);
    }
    kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
      &tmp8[1],
      &inC->M27.SECTIONS_SSP);
    for (i = 0; i < 33; i++) {
      (&(&_29__L406_1_1[0])[0])[0] = tmp8[i].D_STATIC;
      (&(&_29__L406_1_1[0])[0])[1] = tmp8[i].V_STATIC;
      (&(&_29__L406_1_1[0])[0])[2] = tmp8[i].Q_FRONT;
      (&(&_29__L406_1_1[0])[0])[3] = tmp8[i].N_ITER;
      tmp12.nid_packet = i + tmp9;
      tmp12.q_dir = tmp19;
      tmp12.valid = kcg_true;
      tmp12.startAddress = 0;
      tmp12.endAddress = 4 + tmp8[i].N_ITER * 2 - 1;
      _25__L3_1_1 = 0;
      for (tmp20 = 0; tmp20 < 30; tmp20++) {
        tmp18 = _25__L3_1_1;
        tmp14 = outC->MessageOUT.Messages.PacketHeaders[tmp20].nid_packet !=
          DEFAULT_Headers_TM[tmp20].nid_packet;
        if (tmp14) {
          _25__L3_1_1 =
            outC->MessageOUT.Messages.PacketHeaders[tmp20].endAddress;
        }
        else {
          _25__L3_1_1 = tmp18;
        }
        _26__L7_1_1 = tmp20 + 1;
        if (!tmp14) {
          break;
        }
      }
      if (_25__L3_1_1 == 0) {
        _28__L407_1_1 = 0;
      }
      else {
        _28__L407_1_1 = _25__L3_1_1 + 1;
      }
      _30_noname_1_1 = _28__L407_1_1 + (tmp12.endAddress - tmp12.startAddress);
      for (tmp20 = 0; tmp20 < 32; tmp20++) {
        _L74_1_1_1[tmp20][0] = tmp8[i].SECTIONS_q_diff[tmp20].NC_DIFF;
        _L74_1_1_1[tmp20][1] = tmp8[i].SECTIONS_q_diff[tmp20].V_DIFF;
      }
      for (tmp20 = 0; tmp20 < 432; tmp20++) {
        _L448_2_1_1[tmp20] = 0;
      }
      kcg_copy_P058_sections_array_flat_T_TM(
        &tmp,
        (P058_sections_array_flat_T_TM *)
          &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
      for (tmp20 = 0; tmp20 < 32; tmp20++) {
        if ((0 <= tmp20 / 2) & (tmp20 / 2 < 32) & ((0 <= tmp20 % 2) & (tmp20 %
              2 < 2))) {
          tmp[tmp20] = _L74_1_1_1[tmp20 / 2][tmp20 % 2];
        }
        else {
          tmp[tmp20] = 0;
        }
      }
      kcg_copy_P058_sections_array_flat_T_TM(&_29__L406_1_1[4], &tmp);
      kcg_copy_array_int_432(&_29__L406_1_1[68], &_L448_2_1_1);
      for (tmp20 = 0; tmp20 < 500; tmp20++) {
        tmp17 = _30_noname_1_1 >= tmp20;
        if (tmp17 & (tmp20 >= _28__L407_1_1)) {
          if ((0 <= tmp20 - _28__L407_1_1) & (tmp20 - _28__L407_1_1 < 500)) {
            _31__L383_1_1[tmp20] = _29__L406_1_1[tmp20 - _28__L407_1_1];
          }
          else {
            _31__L383_1_1[tmp20] = 0;
          }
        }
        else {
          _31__L383_1_1[tmp20] = outC->MessageOUT.Messages.PacketData[tmp20];
        }
        _27__L408_1_1 = tmp20 + 1;
        if (!tmp17) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (tmp20 = _27__L408_1_1; tmp20 < 500; tmp20++) {
        _31__L383_1_1[tmp20] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp13,
        &outC->MessageOUT.Messages.PacketHeaders);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &outC->MessageOUT.Messages.PacketData,
        &_31__L383_1_1);
      tmp12.startAddress = _28__L407_1_1;
      tmp12.endAddress = _30_noname_1_1;
      if ((0 <= _26__L7_1_1 - 1) & (_26__L7_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp13[_26__L7_1_1 - 1],
          &tmp12);
      }
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &outC->MessageOUT.Messages.PacketHeaders,
        &tmp13);
      if (!(inC->M27.N_ITER_k > i)) {
        break;
      }
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages,
      &_L24);
  }
  if (inC->M41.valid) {
    (&(&(&_31__L383_1_1[0])[0])[0])[0] = inC->M41.NID_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[1] = inC->M41.Q_DIR;
    (&(&(&_31__L383_1_1[0])[0])[0])[2] = inC->M41.L_PACKET;
    (&(&(&_31__L383_1_1[0])[0])[0])[3] = inC->M41.Q_SCALE;
    (&(&(&_31__L383_1_1[0])[0])[0])[4] = inC->M41.D_LEVELTR;
    (&tmp7[0])[0].M_LEVELTR = inC->M41.M_LEVELTR;
    (&tmp7[0])[0].NID_NTC = inC->M41.NID_NTC;
    (&tmp7[0])[0].L_ACKLEVELTR = inC->M41.L_ACKLEVELTR;
    tmp12.valid = inC->M41.valid;
    tmp12.startAddress = 0;
    tmp12.endAddress = 5 + 1 + 3 + inC->M41.N_ITER * 3 - 1;
    IfBlock1_clock_1_1_1 = inC->M41.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (IfBlock1_clock_1_1_1) {
    }
    else {
      _33_else_clock_1_1_1_IfBlock1 = inC->M41.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_33_else_clock_1_1_1_IfBlock1) {
      }
      else {
        else_clock_1_1_1_IfBlock1 = inC->M41.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->M41.NID_PACKET == 41) {
      tmp20 = 41 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M41.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp20 = ERROR_nid_packet_TM;
    }
    tmp12.nid_packet = tmp20;
    if (IfBlock1_clock_1_1_1) {
      tmp12.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (_33_else_clock_1_1_1_IfBlock1) {
      tmp12.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (else_clock_1_1_1_IfBlock1) {
      tmp12.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp12.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _26__L7_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp18 = _26__L7_1_1;
      tmp17 = outC->MessageOUT.Messages.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp17) {
        _26__L7_1_1 = outC->MessageOUT.Messages.PacketHeaders[i].endAddress;
      }
      else {
        _26__L7_1_1 = tmp18;
      }
      _25__L3_1_1 = i + 1;
      if (!tmp17) {
        break;
      }
    }
    if (_26__L7_1_1 == 0) {
      _28__L407_1_1 = 0;
    }
    else {
      _28__L407_1_1 = _26__L7_1_1 + 1;
    }
    _27__L408_1_1 = _28__L407_1_1 + (tmp12.endAddress - tmp12.startAddress);
    _L403_1_1[0] = inC->M41.N_ITER;
    kcg_copy_P041_trackide_sectionlist_T_TM(&tmp7[1], &inC->M41.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_4[i][0] = tmp7[i].M_LEVELTR;
      _L74_1_1_4[i][1] = tmp7[i].NID_NTC;
      _L74_1_1_4[i][2] = tmp7[i].L_ACKLEVELTR;
    }
    for (i = 0; i < 395; i++) {
      _L209_1_4[i] = 0;
    }
    kcg_copy_array_int_1(&_31__L383_1_1[5], &_L403_1_1);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp6,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp6[i] = _L74_1_1_4[i / 3][i % 3];
      }
      else {
        tmp6[i] = 0;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_31__L383_1_1[6], &tmp6);
    kcg_copy_array_int_395(&_31__L383_1_1[105], &_L209_1_4);
    for (i = 0; i < 500; i++) {
      tmp14 = _27__L408_1_1 >= i;
      if (tmp14 & (i >= _28__L407_1_1)) {
        if ((0 <= i - _28__L407_1_1) & (i - _28__L407_1_1 < 500)) {
          _29__L406_1_1[i] = _31__L383_1_1[i - _28__L407_1_1];
        }
        else {
          _29__L406_1_1[i] = 0;
        }
      }
      else {
        _29__L406_1_1[i] = outC->MessageOUT.Messages.PacketData[i];
      }
      _30_noname_1_1 = i + 1;
      if (!tmp14) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _30_noname_1_1; i < 500; i++) {
      _29__L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L24.PacketData,
      &_29__L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L24.PacketHeaders,
      &outC->MessageOUT.Messages.PacketHeaders);
    tmp12.startAddress = _28__L407_1_1;
    tmp12.endAddress = _27__L408_1_1;
    if ((0 <= _25__L3_1_1 - 1) & (_25__L3_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L24.PacketHeaders[_25__L3_1_1 - 1],
        &tmp12);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L24,
      &outC->MessageOUT.Messages);
  }
  if (inC->M57.valid) {
    (&_L383_1_1[0])[0] = inC->M57.NID_PACKET;
    (&_L383_1_1[0])[1] = inC->M57.Q_DIR;
    (&_L383_1_1[0])[2] = inC->M57.L_PACKET;
    (&_L383_1_1[0])[3] = inC->M57.T_MAR;
    (&_L383_1_1[0])[4] = inC->M57.T_TIMEOUTRQST;
    (&_L383_1_1[0])[5] = inC->M57.T_CYCRQST;
    tmp2.valid = inC->M57.valid;
    tmp2.startAddress = 0;
    tmp2.endAddress = DIM_MaxElementsPacket057_TM - 1;
    tmp14 = inC->M57.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp14) {
    }
    else {
      IfBlock1_clock_1_1_1 = inC->M57.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_1) {
      }
      else {
        tmp17 = inC->M57.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->M57.NID_PACKET == 57) {
      tmp2.nid_packet = 57 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M57.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp2.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp14) {
      tmp2.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_1) {
      tmp2.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp17) {
      tmp2.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp2.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _L7_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp9 = _L7_1_1;
      tmp4 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp4) {
        _L7_1_1 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _L7_1_1 = tmp9;
      }
      _L3_1_1 = i + 1;
      if (!tmp4) {
        break;
      }
    }
    if (_L7_1_1 == 0) {
      _L407_1_1 = 0;
    }
    else {
      _L407_1_1 = _L7_1_1 + 1;
    }
    _L408_1_1 = _L407_1_1 + (tmp2.endAddress - tmp2.startAddress);
    for (i = 0; i < 494; i++) {
      _21__L209_1_1[i] = 0;
    }
    kcg_copy_array_int_494(&_L383_1_1[6], &_21__L209_1_1);
    for (i = 0; i < 500; i++) {
      tmp3 = _L408_1_1 >= i;
      if (tmp3 & (i >= _L407_1_1)) {
        if ((0 <= i - _L407_1_1) & (i - _L407_1_1 < 500)) {
          _L406_1_1[i] = _L383_1_1[i - _L407_1_1];
        }
        else {
          _L406_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1[i] = _L24.PacketData[i];
      }
      noname_1_1 = i + 1;
      if (!tmp3) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_1; i < 500; i++) {
      _L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketData,
      &_L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketHeaders,
      &_L24.PacketHeaders);
    tmp2.startAddress = _L407_1_1;
    tmp2.endAddress = _L408_1_1;
    if ((0 <= _L3_1_1 - 1) & (_L3_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->MessageOUT.Messages.PacketHeaders[_L3_1_1 - 1],
        &tmp2);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages,
      &_L24);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L24,
    &outC->MessageOUT.Messages);
  if (inC->M58.valid) {
    (&(&_31__L383_1_1[0])[0])[0] = inC->M58.NID_PACKET;
    (&(&_31__L383_1_1[0])[0])[1] = inC->M58.Q_DIR;
    (&(&_31__L383_1_1[0])[0])[2] = inC->M58.L_PACKET;
    (&(&_31__L383_1_1[0])[0])[3] = inC->M58.Q_SCALE;
    (&(&_31__L383_1_1[0])[0])[4] = inC->M58.T_CYCLOC;
    (&(&_31__L383_1_1[0])[0])[5] = inC->M58.D_CYCLOC;
    (&(&_31__L383_1_1[0])[0])[6] = inC->M58.M_LOC;
    (&(&_31__L383_1_1[0])[0])[7] = inC->M58.N_ITER;
    tmp12.valid = inC->M58.valid;
    tmp12.startAddress = 0;
    tmp12.endAddress = 8 + inC->M58.N_ITER * 2 - 1;
    tmp14 = inC->M58.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (tmp14) {
    }
    else {
      IfBlock1_clock_1_1_1 = inC->M58.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_1) {
      }
      else {
        tmp17 = inC->M58.Q_DIR == INT_Q_DIR_both_TM_conversions;
      }
    }
    if (inC->M58.NID_PACKET == 58) {
      tmp12.nid_packet = 58 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->M58.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp12.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp14) {
      tmp12.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else if (IfBlock1_clock_1_1_1) {
      tmp12.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else if (tmp17) {
      tmp12.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    else {
      tmp12.q_dir = ENUM_Q_DIR_both_TM_conversions;
    }
    _25__L3_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp1 = _25__L3_1_1;
      _33_else_clock_1_1_1_IfBlock1 = _L24.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_33_else_clock_1_1_1_IfBlock1) {
        _25__L3_1_1 = _L24.PacketHeaders[i].endAddress;
      }
      else {
        _25__L3_1_1 = tmp1;
      }
      tmp20 = i + 1;
      if (!_33_else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
    if (_25__L3_1_1 == 0) {
      _27__L408_1_1 = 0;
    }
    else {
      _27__L408_1_1 = _25__L3_1_1 + 1;
    }
    _26__L7_1_1 = _27__L408_1_1 + (tmp12.endAddress - tmp12.startAddress);
    for (i = 0; i < 32; i++) {
      _L74_1_1_1[i][0] = inC->M58.SECTIONS[i].D_LOC;
      _L74_1_1_1[i][1] = inC->M58.SECTIONS[i].Q_LGTLOC;
    }
    for (i = 0; i < 428; i++) {
      _L209_1_1[i] = 0;
    }
    kcg_copy_P058_sections_array_flat_T_TM(
      &tmp,
      (P058_sections_array_flat_T_TM *) &DEFAULT_P058_sections_array_flat_TM);
    for (i = 0; i < 64; i++) {
      if ((0 <= i / 2) & (i / 2 < 32) & ((0 <= i % 2) & (i % 2 < 2))) {
        tmp[i] = _L74_1_1_1[i / 2][i % 2];
      }
      else {
        tmp[i] = 0;
      }
    }
    kcg_copy_P058_sections_array_flat_T_TM(&_31__L383_1_1[8], &tmp);
    kcg_copy_array_int_428(&_31__L383_1_1[72], &_L209_1_1);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_1_IfBlock1 = _26__L7_1_1 >= i;
      if (else_clock_1_1_1_IfBlock1 & (i >= _27__L408_1_1)) {
        if ((0 <= i - _27__L408_1_1) & (i - _27__L408_1_1 < 500)) {
          _29__L406_1_1[i] = _31__L383_1_1[i - _27__L408_1_1];
        }
        else {
          _29__L406_1_1[i] = 0;
        }
      }
      else {
        _29__L406_1_1[i] = _L24.PacketData[i];
      }
      _28__L407_1_1 = i + 1;
      if (!else_clock_1_1_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _28__L407_1_1; i < 500; i++) {
      _29__L406_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketData,
      &_29__L406_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages.PacketHeaders,
      &_L24.PacketHeaders);
    tmp12.startAddress = _27__L408_1_1;
    tmp12.endAddress = _26__L7_1_1;
    if ((0 <= tmp20 - 1) & (tmp20 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->MessageOUT.Messages.PacketHeaders[tmp20 - 1],
        &tmp12);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->MessageOUT.Messages,
      &_L24);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_MergeRadioPackets_TM_old_versions.c
** Generation date: 2015-11-16T11:33:59
*************************************************************$ */

