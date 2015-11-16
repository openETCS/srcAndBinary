/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG-ERSA/M003\kcg_s2c_config.txt
** Generation date: 2015-11-16T11:28:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_message_003_API_Examples.h"

void Send_message_003_reset_API_Examples(
  outC_Send_message_003_API_Examples *outC)
{
}

/* API_Examples::Send_message_003 */
void Send_message_003_API_Examples(
  inC_Send_message_003_API_Examples *inC,
  outC_Send_message_003_API_Examples *outC)
{
  static P015_sections_array_flat_T_TM tmp19;
  static kcg_int tmp18;
  static Q_DIR tmp17;
  static kcg_int tmp16;
  static kcg_bool tmp15;
  static array__38818 tmp14;
  static kcg_int tmp_1_1_1_1_1_1_1;
  static kcg_bool tmp13;
  static Metadata_T_Common_Types_Pkg tmp12;
  static kcg_int tmp11;
  static array__38806 tmp10;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L448 */
  static array_int_432 _L448_2_1_1_1_1_1;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L74 */
  static array_int_2_32 _L74_2_2_1_1_1_1_1;
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 tmp_1_1_1_1_1;
  static kcg_int tmp9;
  static kcg_bool tmp8;
  static array__38797 tmp7;
  static P005_sections_array_flat_T_TM tmp6;
  static kcg_bool tmp5;
  static MetadataElement_T_Common_Types_Pkg tmp4;
  static kcg_int tmp3;
  static array__38785 tmp2;
  static P041_sections_array_flat_T_TM tmp1;
  static kcg_int i;
  static MetadataElement_T_Common_Types_Pkg tmp;
  /* TM_RBC_conversions_legacy::M028_to_Radio_Track_Train_H::_L1 */
  static M_028_T_TM_radio_messages _93__L1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _92_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _91_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions_legacy::M032_to_Radio_Track_Train_H::_L1 */
  static M_032_T_TM_radio_messages _90__L1_2_1;
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1::else */
  static kcg_bool _89_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1::else::else::else */
  static kcg_bool _88_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1::else::else */
  static kcg_bool _87_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VERSION::IfBlock1 */
  static kcg_bool _86_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _85_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _84_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _83_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _82_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _81_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _80_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _79_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M033::_L26 */
  static M_033_T_TM_radio_messages _78__L26_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _77_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _76_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool _75_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _74_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _73_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _72_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _71_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _70_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M034::_L26 */
  static M_034_T_TM_radio_messages _69__L26_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _68_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _67_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M038::_L26 */
  static M_038_T_TM_radio_messages _66__L26_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _65_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _64_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M039::_L26 */
  static M_039_T_TM_radio_messages _63__L26_1_1;
  /* TM_RBC_conversions_legacy::M040_to_Radio_Track_Train_H::_L1 */
  static M_040_T_TM_radio_messages _62__L1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _61_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _60_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions_legacy::M041_to_Radio_Track_Train_H::_L1 */
  static M_041_T_TM_radio_messages _59__L1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _58_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _57_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool _56_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool _55_IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M043::_L26 */
  static M_043_T_TM_radio_messages _54__L26_1_1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else */
  static kcg_bool _53_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1 */
  static kcg_bool _52_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1_1;
  /* TM_RBC_conversions::C_header_to_M045::_L26 */
  static M_045_T_TM_radio_messages _51__L26_1_1;
  /* TM_RBC_conversions_legacy::M002_to_Radio_Track_Train_H::_L1 */
  static M_002_T_TM_radio_messages _L1_1_1;
  /* TM_RBC_conversions::C_header_to_M003::_L26 */
  static M_003_T_TM_radio_messages _50__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M006::_L26 */
  static M_006_T_TM_radio_messages _49__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M008::_L26 */
  static M_008_T_TM_radio_messages _48__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M009::_L26 */
  static M_009_T_TM_radio_messages _47__L26_1_1;
  /* TM_RBC_conversions_legacy::M015_to_Radio_Track_Train_H::_L1 */
  static M_015_T_TM_radio_messages _46__L1_2_1;
  /* TM_RBC_conversions_legacy::M016_to_Radio_Track_Train_H::_L1 */
  static M_016_T_TM_radio_messages _L1_2_1;
  /* TM_RBC_conversions::C_header_to_M018::_L26 */
  static M_018_T_TM_radio_messages _45__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M024::_L26 */
  static M_024_T_TM_radio_messages _44__L26_1_1;
  /* TM_RBC_conversions::C_header_to_M027::_L26 */
  static M_027_T_TM_radio_messages _L26_1_1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else */
  static kcg_bool _43_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else */
  static kcg_bool _42_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else */
  static kcg_bool _41_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else */
  static kcg_bool _40_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else::else */
  static kcg_bool _39_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else::else::else */
  static kcg_bool _38_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else::else::else */
  static kcg_bool _37_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else::else::else */
  static kcg_bool _36_else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2::else::else */
  static kcg_bool else_clock_1_IfBlock2;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else */
  static kcg_bool _35_else_clock_1_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else */
  static kcg_bool _34_else_clock_1_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock1::else::else::else::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H::IfBlock2 */
  static kcg_bool IfBlock2_clock_1;
  /* TM_lib_internal::C_P015_flatten_sections::_L74 */
  static array_int_4_32 _33__L74_1_1_1_1_1_1;
  /* TM_conversions::C_P015_tracksim_compr::_L209 */
  static array_int_350 _32__L209_1_1_1_1_1;
  /* TM_lib_internal::C_P041_flatten_sections::_L74 */
  static array_int_3_33 _31__L74_1_1_1_1_1_1;
  /* TM_conversions::C_P041_tracksim_compr::_L209 */
  static array_int_395 _30__L209_1_1_1_1_1;
  /* TM_lib_internal::C_P005_flatten_sections::_L74 */
  static array_int_7_33 _L74_1_1_1_1_1_1;
  /* TM_conversions::C_P005_tracksim_compr::_L209 */
  static array_int_264 _29__L209_1_1_1_1_1;
  /* TM_conversions::C_P005_tracksim_compr::_L383 */
  static array_int_500 _28__L383_1_1_1_1_1;
  static kcg_int noname_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _27__L406_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _26__L407_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _25__L408_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _24__L7_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _23__L3_1_1_1_1_1;
  /* MessageLibBaseline2::Send_P005::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _22__L3_1_1_1;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L209 */
  static array_int_444 _21__L209_1_1_1_1_1;
  /* MessageLibBaseline2::Send_P003V1::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _20_else_clock_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1_1_1_1_1;
  /* TM_conversions::C_P021_tracksim_compr::_L209 */
  static array_int_396 _L209_1_1_1_1_1;
  /* TM_conversions::C_P021_tracksim_compr::_L376 */
  static array_int_1 _L376_1_1_1_1_1;
  /* TM_conversions::C_P021_tracksim_compr::_L383 */
  static array_int_500 _L383_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _L406_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _L407_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _L408_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3_1_1_1_1_1;
  /* API_Examples::Send_message_003::_L1 */
  static R_data_internal_T_InfraLib _L1;
  
  if (inC->P015_in.valid) {
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[0] = inC->P015_in.NID_PACKET;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[1] = inC->P015_in.Q_DIR;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[2] = inC->P015_in.L_PACKET;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[3] = inC->P015_in.Q_SCALE;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[4] = inC->P015_in.V_LOA;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[5] = inC->P015_in.T_LOA;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[6] = inC->P015_in.L_ENDSECTION;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[7] = inC->P015_in.Q_SECTIONTIMER;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[8] = inC->P015_in.T_SECTIONTIMER;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[9] = inC->P015_in.D_SECTIONTIMERSTOPLOC;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[10] = inC->P015_in.Q_ENDTIMER;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[11] = inC->P015_in.T_ENDTIMER;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[12] = inC->P015_in.D_ENDTIMERSTARTLOC;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[13] = inC->P015_in.Q_DANGERPOINT;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[14] = inC->P015_in.D_DP;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[15] = inC->P015_in.V_RELEASEDP;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[16] = inC->P015_in.Q_OVERLAP;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[17] = inC->P015_in.D_STARTOL;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[18] = inC->P015_in.T_OL;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[19] = inC->P015_in.D_OL;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[20] = inC->P015_in.V_RELEASEOL;
    tmp.valid = inC->P015_in.valid;
    tmp.startAddress = 0;
    tmp.endAddress = 6 + 1 + 15 + inC->P015_in.N_ITER * 4 - 1;
    IfBlock1_clock_1_1_1_1_1_1 = inC->P015_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P015_in.NID_PACKET == 15) {
      tmp16 = 15 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P015_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp16 = ERROR_nid_packet_TM;
    }
    tmp.nid_packet = tmp16;
    if (IfBlock1_clock_1_1_1_1_1_1) {
      tmp17 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _20_else_clock_1_1_1_1_1_1_IfBlock1 = inC->P015_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_20_else_clock_1_1_1_1_1_1_IfBlock1) {
        tmp17 = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_1_IfBlock1 = inC->P015_in.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_1_IfBlock1) {
          tmp17 = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp17 = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp.q_dir = tmp17;
    _L3_1_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp_1_1_1_1_1_1_1 = _L3_1_1_1_1_1;
      tmp15 = INIT_R_data_API_Examples.packets.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp15) {
        _L3_1_1_1_1_1 =
          INIT_R_data_API_Examples.packets.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_1_1_1_1 = tmp_1_1_1_1_1_1_1;
      }
      tmp18 = i + 1;
      if (!tmp15) {
        break;
      }
    }
    if (_L3_1_1_1_1_1 == 0) {
      _L408_1_1_1_1_1 = 0;
    }
    else {
      _L408_1_1_1_1_1 = _L3_1_1_1_1_1 + 1;
    }
    _L7_1_1_1_1_1 = _L408_1_1_1_1_1 + (tmp.endAddress - tmp.startAddress);
    _L376_1_1_1_1_1[0] = inC->P015_in.N_ITER;
    for (i = 0; i < 32; i++) {
      _33__L74_1_1_1_1_1_1[i][0] = inC->P015_in.SECTIONS[i].L_SECTION;
      _33__L74_1_1_1_1_1_1[i][1] = inC->P015_in.SECTIONS[i].Q_SECTIONTIMER;
      _33__L74_1_1_1_1_1_1[i][2] = inC->P015_in.SECTIONS[i].T_SECTIONTIMER;
      _33__L74_1_1_1_1_1_1[i][3] =
        inC->P015_in.SECTIONS[i].D_SECTIONTIMERSTOPLOC;
    }
    for (i = 0; i < 350; i++) {
      _32__L209_1_1_1_1_1[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_1_1_1_1[21], &_L376_1_1_1_1_1);
    kcg_copy_P015_sections_array_flat_T_TM(
      &tmp19,
      (P015_sections_array_flat_T_TM *) &DEFAULT_P015_sections_array_flat_TM);
    for (i = 0; i < 128; i++) {
      if ((0 <= i / 4) & (i / 4 < 32) & ((0 <= i % 4) & (i % 4 < 4))) {
        tmp19[i] = _33__L74_1_1_1_1_1_1[i / 4][i % 4];
      }
      else {
        tmp19[i] = 0;
      }
    }
    kcg_copy_P015_sections_array_flat_T_TM(&_L383_1_1_1_1_1[22], &tmp19);
    kcg_copy_array_int_350(&_L383_1_1_1_1_1[150], &_32__L209_1_1_1_1_1);
    for (i = 0; i < 500; i++) {
      tmp13 = _L7_1_1_1_1_1 >= i;
      if (tmp13 & (i >= _L408_1_1_1_1_1)) {
        if ((0 <= i - _L408_1_1_1_1_1) & (i - _L408_1_1_1_1_1 < 500)) {
          _L406_1_1_1_1_1[i] = _L383_1_1_1_1_1[i - _L408_1_1_1_1_1];
        }
        else {
          _L406_1_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1_1[i] = INIT_R_data_API_Examples.packets.PacketData[i];
      }
      _L407_1_1_1_1_1 = i + 1;
      if (!tmp13) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_1_1_1_1; i < 500; i++) {
      _L406_1_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L3_1_1_1.PacketData,
      &_L406_1_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L3_1_1_1.PacketHeaders,
      (Metadata_T_Common_Types_Pkg *)
        &INIT_R_data_API_Examples.packets.PacketHeaders);
    tmp.startAddress = _L408_1_1_1_1_1;
    tmp.endAddress = _L7_1_1_1_1_1;
    if ((0 <= tmp18 - 1) & (tmp18 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L3_1_1_1.PacketHeaders[tmp18 - 1],
        &tmp);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L3_1_1_1,
      (CompressedPackets_T_Common_Types_Pkg *)
        &INIT_R_data_API_Examples.packets);
  }
  if (inC->P021_in.valid) {
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[0] = inC->P021_in.NID_PACKET;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[1] = inC->P021_in.Q_DIR;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[2] = inC->P021_in.L_PACKET;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[3] = inC->P021_in.Q_SCALE;
    (&tmp14[0])[0].D_GRADIENT = inC->P021_in.D_GRADIENT;
    (&tmp14[0])[0].Q_GDIR = inC->P021_in.Q_GDIR;
    (&tmp14[0])[0].G_A = inC->P021_in.G_A;
    tmp.valid = inC->P021_in.valid;
    tmp.startAddress = 0;
    tmp.endAddress = 4 + 1 + 3 + inC->P021_in.N_ITER * 3 - 1;
    IfBlock1_clock_1_1_1_1_1_1 = inC->P021_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P021_in.NID_PACKET == 21) {
      tmp18 = 21 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P021_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp18 = ERROR_nid_packet_TM;
    }
    tmp.nid_packet = tmp18;
    if (IfBlock1_clock_1_1_1_1_1_1) {
      tmp17 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _20_else_clock_1_1_1_1_1_1_IfBlock1 = inC->P021_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_20_else_clock_1_1_1_1_1_1_IfBlock1) {
        tmp17 = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_1_IfBlock1 = inC->P021_in.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_1_IfBlock1) {
          tmp17 = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp17 = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp.q_dir = tmp17;
    _L7_1_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp16 = _L7_1_1_1_1_1;
      tmp15 = _L3_1_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp15) {
        _L7_1_1_1_1_1 = _L3_1_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _L7_1_1_1_1_1 = tmp16;
      }
      _L3_1_1_1_1_1 = i + 1;
      if (!tmp15) {
        break;
      }
    }
    if (_L7_1_1_1_1_1 == 0) {
      _L407_1_1_1_1_1 = 0;
    }
    else {
      _L407_1_1_1_1_1 = _L7_1_1_1_1_1 + 1;
    }
    _L408_1_1_1_1_1 = _L407_1_1_1_1_1 + (tmp.endAddress - tmp.startAddress);
    _L376_1_1_1_1_1[0] = inC->P021_in.N_ITER;
    kcg_copy_P021_trackide_sectionlist_T_TM(&tmp14[1], &inC->P021_in.SECTIONS);
    for (i = 0; i < 33; i++) {
      _31__L74_1_1_1_1_1_1[i][0] = tmp14[i].D_GRADIENT;
      _31__L74_1_1_1_1_1_1[i][1] = tmp14[i].Q_GDIR;
      _31__L74_1_1_1_1_1_1[i][2] = tmp14[i].G_A;
    }
    for (i = 0; i < 396; i++) {
      _L209_1_1_1_1_1[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_1_1_1_1[4], &_L376_1_1_1_1_1);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp1,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P021_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp_1_1_1_1_1_1_1 = _31__L74_1_1_1_1_1_1[i / 3][i % 3];
      }
      else {
        tmp_1_1_1_1_1_1_1 = 0;
      }
      if ((0 <= i) & (i < 99)) {
        tmp1[i] = tmp_1_1_1_1_1_1_1;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_L383_1_1_1_1_1[5], &tmp1);
    kcg_copy_array_int_396(&_L383_1_1_1_1_1[104], &_L209_1_1_1_1_1);
    for (i = 0; i < 500; i++) {
      tmp13 = _L408_1_1_1_1_1 >= i;
      if (tmp13 & (i >= _L407_1_1_1_1_1)) {
        if ((0 <= i - _L407_1_1_1_1_1) & (i - _L407_1_1_1_1_1 < 500)) {
          _L406_1_1_1_1_1[i] = _L383_1_1_1_1_1[i - _L407_1_1_1_1_1];
        }
        else {
          _L406_1_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1_1[i] = _L3_1_1_1.PacketData[i];
      }
      tmp11 = i + 1;
      if (!tmp13) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp11; i < 500; i++) {
      _L406_1_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_22__L3_1_1_1.PacketData,
      &_L406_1_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_22__L3_1_1_1.PacketHeaders,
      &_L3_1_1_1.PacketHeaders);
    tmp.startAddress = _L407_1_1_1_1_1;
    tmp.endAddress = _L408_1_1_1_1_1;
    if ((0 <= _L3_1_1_1_1_1 - 1) & (_L3_1_1_1_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_22__L3_1_1_1.PacketHeaders[_L3_1_1_1_1_1 - 1],
        &tmp);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_22__L3_1_1_1, &_L3_1_1_1);
  }
  if (inC->P027_in.valid) {
    (&tmp10[0])[0].D_STATIC = inC->P027_in.D_STATIC;
    (&tmp10[0])[0].V_STATIC = inC->P027_in.V_STATIC;
    (&tmp10[0])[0].Q_FRONT = inC->P027_in.Q_FRONT;
    (&tmp10[0])[0].N_ITER = inC->P027_in.N_ITER_n;
    kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
      &(&tmp10[0])[0].SECTIONS_q_diff,
      &inC->P027_in.SECTIONS_q_diff);
    (&_28__L383_1_1_1_1_1[0])[0] = inC->P027_in.NID_PACKET;
    (&_28__L383_1_1_1_1_1[0])[1] = inC->P027_in.Q_DIR;
    (&_28__L383_1_1_1_1_1[0])[2] = inC->P027_in.L_PACKET;
    (&_28__L383_1_1_1_1_1[0])[3] = inC->P027_in.Q_SCALE;
    (&_28__L383_1_1_1_1_1[0])[4] = inC->P027_in.N_ITER_k;
    tmp4.valid = inC->P027_in.valid;
    tmp4.startAddress = 0;
    tmp4.endAddress = 6 - 1;
    _20_else_clock_1_1_1_1_1_1_IfBlock1 = inC->P027_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (_20_else_clock_1_1_1_1_1_1_IfBlock1) {
      tmp17 = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      tmp8 = inC->P027_in.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
      if (tmp8) {
        tmp17 = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        tmp5 = inC->P027_in.Q_DIR == INT_Q_DIR_both_TM_conversions;
        if (tmp5) {
          tmp17 = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp17 = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp4.q_dir = tmp17;
    if (inC->P027_in.NID_PACKET == 27) {
      _23__L3_1_1_1_1_1 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P027_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
      tmp11 = 27 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P027_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 100 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      _23__L3_1_1_1_1_1 = ERROR_nid_packet_TM;
      tmp11 = ERROR_nid_packet_TM;
    }
    tmp4.nid_packet = _23__L3_1_1_1_1_1;
    _25__L408_1_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp9 = _25__L408_1_1_1_1_1;
      else_clock_1_1_1_1_1_1_IfBlock1 =
        _22__L3_1_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (else_clock_1_1_1_1_1_1_IfBlock1) {
        _25__L408_1_1_1_1_1 = _22__L3_1_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _25__L408_1_1_1_1_1 = tmp9;
      }
      _24__L7_1_1_1_1_1 = i + 1;
      if (!else_clock_1_1_1_1_1_1_IfBlock1) {
        break;
      }
    }
    if (_25__L408_1_1_1_1_1 == 0) {
      noname_1_1_1_1_1 = 0;
    }
    else {
      noname_1_1_1_1_1 = _25__L408_1_1_1_1_1 + 1;
    }
    _26__L407_1_1_1_1_1 = noname_1_1_1_1_1 + (tmp4.endAddress -
        tmp4.startAddress);
    (&_28__L383_1_1_1_1_1[0])[5] = tmp11;
    for (i = 0; i < 494; i++) {
      (&_28__L383_1_1_1_1_1[6])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      IfBlock1_clock_1_1_1_1_1_1 = _26__L407_1_1_1_1_1 >= i;
      if (IfBlock1_clock_1_1_1_1_1_1 & (i >= noname_1_1_1_1_1)) {
        if ((0 <= i - noname_1_1_1_1_1) & (i - noname_1_1_1_1_1 < 500)) {
          _27__L406_1_1_1_1_1[i] = _28__L383_1_1_1_1_1[i - noname_1_1_1_1_1];
        }
        else {
          _27__L406_1_1_1_1_1[i] = 0;
        }
      }
      else {
        _27__L406_1_1_1_1_1[i] = _22__L3_1_1_1.PacketData[i];
      }
      tmp3 = i + 1;
      if (!IfBlock1_clock_1_1_1_1_1_1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = tmp3; i < 500; i++) {
      _27__L406_1_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L3_1_1_1.PacketData,
      &_27__L406_1_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L3_1_1_1.PacketHeaders,
      &_22__L3_1_1_1.PacketHeaders);
    tmp4.startAddress = noname_1_1_1_1_1;
    tmp4.endAddress = _26__L407_1_1_1_1_1;
    if ((0 <= _24__L7_1_1_1_1_1 - 1) & (_24__L7_1_1_1_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L3_1_1_1.PacketHeaders[_24__L7_1_1_1_1_1 - 1],
        &tmp4);
    }
    kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
      &tmp10[1],
      &inC->P027_in.SECTIONS_SSP);
    for (i = 0; i < 33; i++) {
      (&(&_L406_1_1_1_1_1[0])[0])[0] = tmp10[i].D_STATIC;
      (&(&_L406_1_1_1_1_1[0])[0])[1] = tmp10[i].V_STATIC;
      (&(&_L406_1_1_1_1_1[0])[0])[2] = tmp10[i].Q_FRONT;
      (&(&_L406_1_1_1_1_1[0])[0])[3] = tmp10[i].N_ITER;
      tmp.nid_packet = i + tmp11;
      tmp.q_dir = tmp17;
      tmp.valid = kcg_true;
      tmp.startAddress = 0;
      tmp.endAddress = 4 + tmp10[i].N_ITER * 2 - 1;
      tmp18 = 0;
      for (tmp16 = 0; tmp16 < 30; tmp16++) {
        tmp_1_1_1_1_1_1_1 = tmp18;
        tmp13 = _L3_1_1_1.PacketHeaders[tmp16].nid_packet !=
          DEFAULT_Headers_TM[tmp16].nid_packet;
        if (tmp13) {
          tmp18 = _L3_1_1_1.PacketHeaders[tmp16].endAddress;
        }
        else {
          tmp18 = tmp_1_1_1_1_1_1_1;
        }
        _L3_1_1_1_1_1 = tmp16 + 1;
        if (!tmp13) {
          break;
        }
      }
      if (tmp18 == 0) {
        _L408_1_1_1_1_1 = 0;
      }
      else {
        _L408_1_1_1_1_1 = tmp18 + 1;
      }
      _L407_1_1_1_1_1 = _L408_1_1_1_1_1 + (tmp.endAddress - tmp.startAddress);
      for (tmp16 = 0; tmp16 < 32; tmp16++) {
        _L74_2_2_1_1_1_1_1[tmp16][0] = tmp10[i].SECTIONS_q_diff[tmp16].NC_DIFF;
        _L74_2_2_1_1_1_1_1[tmp16][1] = tmp10[i].SECTIONS_q_diff[tmp16].V_DIFF;
      }
      for (tmp16 = 0; tmp16 < 432; tmp16++) {
        _L448_2_1_1_1_1_1[tmp16] = 0;
      }
      kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
        &tmp_1_1_1_1_1,
        (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
          &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
      for (tmp16 = 0; tmp16 < 32; tmp16++) {
        if ((0 <= tmp16 / 2) & (tmp16 / 2 < 32) & ((0 <= tmp16 % 2) & (tmp16 %
              2 < 2))) {
          tmp_1_1_1_1_1[tmp16] = _L74_2_2_1_1_1_1_1[tmp16 / 2][tmp16 % 2];
        }
        else {
          tmp_1_1_1_1_1[tmp16] = 0;
        }
      }
      kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
        &_L406_1_1_1_1_1[4],
        &tmp_1_1_1_1_1);
      kcg_copy_array_int_432(&_L406_1_1_1_1_1[68], &_L448_2_1_1_1_1_1);
      for (tmp16 = 0; tmp16 < 500; tmp16++) {
        tmp15 = _L407_1_1_1_1_1 >= tmp16;
        if (tmp15 & (tmp16 >= _L408_1_1_1_1_1)) {
          if ((0 <= tmp16 - _L408_1_1_1_1_1) & (tmp16 - _L408_1_1_1_1_1 <
              500)) {
            _L383_1_1_1_1_1[tmp16] = _L406_1_1_1_1_1[tmp16 - _L408_1_1_1_1_1];
          }
          else {
            _L383_1_1_1_1_1[tmp16] = 0;
          }
        }
        else {
          _L383_1_1_1_1_1[tmp16] = _L3_1_1_1.PacketData[tmp16];
        }
        _L7_1_1_1_1_1 = tmp16 + 1;
        if (!tmp15) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (tmp16 = _L7_1_1_1_1_1; tmp16 < 500; tmp16++) {
        _L383_1_1_1_1_1[tmp16] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_Metadata_T_Common_Types_Pkg(&tmp12, &_L3_1_1_1.PacketHeaders);
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_1_1_1.PacketData,
        &_L383_1_1_1_1_1);
      tmp.startAddress = _L408_1_1_1_1_1;
      tmp.endAddress = _L407_1_1_1_1_1;
      if ((0 <= _L3_1_1_1_1_1 - 1) & (_L3_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp12[_L3_1_1_1_1_1 - 1],
          &tmp);
      }
      kcg_copy_Metadata_T_Common_Types_Pkg(&_L3_1_1_1.PacketHeaders, &tmp12);
      if (!(inC->P027_in.N_ITER_k > i)) {
        break;
      }
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3_1_1_1, &_22__L3_1_1_1);
  }
  if (inC->P003_in.valid) {
    (&(&_L383_1_1_1_1_1[0])[0])[0] = inC->P003_in.NID_PACKET;
    (&(&_L383_1_1_1_1_1[0])[0])[1] = inC->P003_in.Q_DIR;
    (&(&_L383_1_1_1_1_1[0])[0])[2] = inC->P003_in.L_PACKET;
    (&(&_L383_1_1_1_1_1[0])[0])[3] = inC->P003_in.Q_SCALE;
    (&(&_L383_1_1_1_1_1[0])[0])[4] = inC->P003_in.D_VALIDNV;
    (&(&_L383_1_1_1_1_1[0])[0])[5] = inC->P003_in.N_ITER;
    (&(&_L383_1_1_1_1_1[0])[0])[6] = inC->P003_in.V_NVSHUNT;
    (&(&_L383_1_1_1_1_1[0])[0])[7] = inC->P003_in.V_NVSTFF;
    (&(&_L383_1_1_1_1_1[0])[0])[8] = inC->P003_in.V_NVONSIGHT;
    (&(&_L383_1_1_1_1_1[0])[0])[9] = inC->P003_in.V_NVUNFIT;
    (&(&_L383_1_1_1_1_1[0])[0])[10] = inC->P003_in.V_NVREL;
    (&(&_L383_1_1_1_1_1[0])[0])[11] = inC->P003_in.D_NVROLL;
    (&(&_L383_1_1_1_1_1[0])[0])[12] = inC->P003_in.Q_NVSRBKTRG;
    (&(&_L383_1_1_1_1_1[0])[0])[13] = inC->P003_in.Q_NVEMRRLS;
    (&(&_L383_1_1_1_1_1[0])[0])[14] = inC->P003_in.V_NVALLOWOVTRP;
    (&(&_L383_1_1_1_1_1[0])[0])[15] = inC->P003_in.V_NVSUPOVTRP;
    (&(&_L383_1_1_1_1_1[0])[0])[16] = inC->P003_in.D_NVOVTRP;
    (&(&_L383_1_1_1_1_1[0])[0])[17] = inC->P003_in.T_NVOVTRP;
    (&(&_L383_1_1_1_1_1[0])[0])[18] = inC->P003_in.D_NVPOTRP;
    (&(&_L383_1_1_1_1_1[0])[0])[19] = inC->P003_in.M_NVCONTACT;
    (&(&_L383_1_1_1_1_1[0])[0])[20] = inC->P003_in.T_NVCONTACT;
    (&(&_L383_1_1_1_1_1[0])[0])[21] = inC->P003_in.M_NVDERUN;
    (&(&_L383_1_1_1_1_1[0])[0])[22] = inC->P003_in.D_NVSTFF;
    (&(&_L383_1_1_1_1_1[0])[0])[23] = inC->P003_in.Q_NVDRIVER_ADHES;
    tmp.valid = inC->P003_in.valid;
    tmp.startAddress = 0;
    tmp.endAddress = 6 + 17 + inC->P003_in.N_ITER * 1 - 1;
    IfBlock1_clock_1_1_1_1_1_1 = inC->P003_in.Q_DIR ==
      INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P003_in.NID_PACKET == 3) {
      tmp16 = 3 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P003_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp16 = ERROR_nid_packet_TM;
    }
    tmp.nid_packet = tmp16;
    if (IfBlock1_clock_1_1_1_1_1_1) {
      tmp.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      _20_else_clock_1_1_1_1_1_1_IfBlock1 = inC->P003_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (_20_else_clock_1_1_1_1_1_1_IfBlock1) {
        tmp.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_1_IfBlock1 = inC->P003_in.Q_DIR ==
          INT_Q_DIR_both_TM_conversions;
        if (else_clock_1_1_1_1_1_1_IfBlock1) {
          tmp.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    _L3_1_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp_1_1_1_1_1_1_1 = _L3_1_1_1_1_1;
      tmp15 = _L3_1_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp15) {
        _L3_1_1_1_1_1 = _L3_1_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _L3_1_1_1_1_1 = tmp_1_1_1_1_1_1_1;
      }
      tmp18 = i + 1;
      if (!tmp15) {
        break;
      }
    }
    if (_L3_1_1_1_1_1 == 0) {
      _L408_1_1_1_1_1 = 0;
    }
    else {
      _L408_1_1_1_1_1 = _L3_1_1_1_1_1 + 1;
    }
    _L7_1_1_1_1_1 = _L408_1_1_1_1_1 + (tmp.endAddress - tmp.startAddress);
    for (i = 0; i < 444; i++) {
      _21__L209_1_1_1_1_1[i] = 0;
    }
    kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
      &_L383_1_1_1_1_1[24],
      &inC->P003_in.SECTIONS);
    kcg_copy_array_int_444(&_L383_1_1_1_1_1[56], &_21__L209_1_1_1_1_1);
    for (i = 0; i < 500; i++) {
      tmp13 = _L7_1_1_1_1_1 >= i;
      if (tmp13 & (i >= _L408_1_1_1_1_1)) {
        if ((0 <= i - _L408_1_1_1_1_1) & (i - _L408_1_1_1_1_1 < 500)) {
          _L406_1_1_1_1_1[i] = _L383_1_1_1_1_1[i - _L408_1_1_1_1_1];
        }
        else {
          _L406_1_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1_1[i] = _L3_1_1_1.PacketData[i];
      }
      _L407_1_1_1_1_1 = i + 1;
      if (!tmp13) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L407_1_1_1_1_1; i < 500; i++) {
      _L406_1_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_22__L3_1_1_1.PacketData,
      &_L406_1_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_22__L3_1_1_1.PacketHeaders,
      &_L3_1_1_1.PacketHeaders);
    tmp.startAddress = _L408_1_1_1_1_1;
    tmp.endAddress = _L7_1_1_1_1_1;
    if ((0 <= tmp18 - 1) & (tmp18 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_22__L3_1_1_1.PacketHeaders[tmp18 - 1],
        &tmp);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_22__L3_1_1_1, &_L3_1_1_1);
  }
  if (inC->P005_in.valid) {
    (&(&(&_28__L383_1_1_1_1_1[0])[0])[0])[0] = inC->P005_in.NID_PACKET;
    (&(&(&_28__L383_1_1_1_1_1[0])[0])[0])[1] = inC->P005_in.Q_DIR;
    (&(&(&_28__L383_1_1_1_1_1[0])[0])[0])[2] = inC->P005_in.L_PACKET;
    (&(&(&_28__L383_1_1_1_1_1[0])[0])[0])[3] = inC->P005_in.Q_SCALE;
    (&tmp7[0])[0].D_LINK = inC->P005_in.D_LINK;
    (&tmp7[0])[0].Q_NEWCOUNTRY = inC->P005_in.Q_NEWCOUNTRY;
    (&tmp7[0])[0].NID_C = inC->P005_in.NID_C;
    (&tmp7[0])[0].NID_BG = inC->P005_in.NID_BG;
    (&tmp7[0])[0].Q_LINKORIENTATION = inC->P005_in.Q_LINKORIENTATION;
    (&tmp7[0])[0].Q_LINKREACTION = inC->P005_in.Q_LINKREACTION;
    (&tmp7[0])[0].Q_LOCACC = inC->P005_in.Q_LOCACC;
    tmp4.valid = inC->P005_in.valid;
    tmp4.startAddress = 0;
    tmp4.endAddress = 4 + 1 + 7 + inC->P005_in.N_ITER * 7 - 1;
    tmp13 = inC->P005_in.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P005_in.NID_PACKET == 5) {
      tmp9 = 5 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P005_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp9 = ERROR_nid_packet_TM;
    }
    tmp4.nid_packet = tmp9;
    if (tmp13) {
      tmp4.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      IfBlock1_clock_1_1_1_1_1_1 = inC->P005_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_1_1_1_1) {
        tmp4.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        tmp15 = inC->P005_in.Q_DIR == INT_Q_DIR_both_TM_conversions;
        if (tmp15) {
          tmp4.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp4.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    _24__L7_1_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      tmp11 = _24__L7_1_1_1_1_1;
      tmp8 = _22__L3_1_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp8) {
        _24__L7_1_1_1_1_1 = _22__L3_1_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _24__L7_1_1_1_1_1 = tmp11;
      }
      _23__L3_1_1_1_1_1 = i + 1;
      if (!tmp8) {
        break;
      }
    }
    if (_24__L7_1_1_1_1_1 == 0) {
      _26__L407_1_1_1_1_1 = 0;
    }
    else {
      _26__L407_1_1_1_1_1 = _24__L7_1_1_1_1_1 + 1;
    }
    _25__L408_1_1_1_1_1 = _26__L407_1_1_1_1_1 + (tmp4.endAddress -
        tmp4.startAddress);
    _L376_1_1_1_1_1[0] = inC->P005_in.N_ITER;
    kcg_copy_P005_trackide_sectionlist_T_TM(&tmp7[1], &inC->P005_in.SECTIONS);
    for (i = 0; i < 33; i++) {
      _L74_1_1_1_1_1_1[i][0] = tmp7[i].D_LINK;
      _L74_1_1_1_1_1_1[i][1] = tmp7[i].Q_NEWCOUNTRY;
      _L74_1_1_1_1_1_1[i][2] = tmp7[i].NID_C;
      _L74_1_1_1_1_1_1[i][3] = tmp7[i].NID_BG;
      _L74_1_1_1_1_1_1[i][4] = tmp7[i].Q_LINKORIENTATION;
      _L74_1_1_1_1_1_1[i][5] = tmp7[i].Q_LINKREACTION;
      _L74_1_1_1_1_1_1[i][6] = tmp7[i].Q_LOCACC;
    }
    for (i = 0; i < 264; i++) {
      _29__L209_1_1_1_1_1[i] = 0;
    }
    kcg_copy_array_int_1(&_28__L383_1_1_1_1_1[4], &_L376_1_1_1_1_1);
    kcg_copy_P005_sections_array_flat_T_TM(
      &tmp6,
      (P005_sections_array_flat_T_TM *) &DEFAULT_P005_sections_array_flat_TM);
    for (i = 0; i < 231; i++) {
      if ((0 <= i / 7) & (i / 7 < 33) & ((0 <= i % 7) & (i % 7 < 7))) {
        tmp6[i] = _L74_1_1_1_1_1_1[i / 7][i % 7];
      }
      else {
        tmp6[i] = 0;
      }
    }
    kcg_copy_P005_sections_array_flat_T_TM(&_28__L383_1_1_1_1_1[5], &tmp6);
    kcg_copy_array_int_264(&_28__L383_1_1_1_1_1[236], &_29__L209_1_1_1_1_1);
    for (i = 0; i < 500; i++) {
      tmp5 = _25__L408_1_1_1_1_1 >= i;
      if (tmp5 & (i >= _26__L407_1_1_1_1_1)) {
        if ((0 <= i - _26__L407_1_1_1_1_1) & (i - _26__L407_1_1_1_1_1 < 500)) {
          _27__L406_1_1_1_1_1[i] = _28__L383_1_1_1_1_1[i - _26__L407_1_1_1_1_1];
        }
        else {
          _27__L406_1_1_1_1_1[i] = 0;
        }
      }
      else {
        _27__L406_1_1_1_1_1[i] = _22__L3_1_1_1.PacketData[i];
      }
      noname_1_1_1_1_1 = i + 1;
      if (!tmp5) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_1_1_1_1; i < 500; i++) {
      _27__L406_1_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L3_1_1_1.PacketData,
      &_27__L406_1_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L3_1_1_1.PacketHeaders,
      &_22__L3_1_1_1.PacketHeaders);
    tmp4.startAddress = _26__L407_1_1_1_1_1;
    tmp4.endAddress = _25__L408_1_1_1_1_1;
    if ((0 <= _23__L3_1_1_1_1_1 - 1) & (_23__L3_1_1_1_1_1 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L3_1_1_1.PacketHeaders[_23__L3_1_1_1_1_1 - 1],
        &tmp4);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3_1_1_1, &_22__L3_1_1_1);
  }
  if (inC->P041_in.valid) {
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[0] = inC->P041_in.NID_PACKET;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[1] = inC->P041_in.Q_DIR;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[2] = inC->P041_in.L_PACKET;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[3] = inC->P041_in.Q_SCALE;
    (&(&(&_L383_1_1_1_1_1[0])[0])[0])[4] = inC->P041_in.D_LEVELTR;
    (&tmp2[0])[0].M_LEVELTR = inC->P041_in.M_LEVELTR;
    (&tmp2[0])[0].NID_NTC = inC->P041_in.NID_NTC;
    (&tmp2[0])[0].L_ACKLEVELTR = inC->P041_in.L_ACKLEVELTR;
    tmp.valid = inC->P041_in.valid;
    tmp.startAddress = 0;
    tmp.endAddress = 5 + 1 + 3 + inC->P041_in.N_ITER * 3 - 1;
    tmp13 = inC->P041_in.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P041_in.NID_PACKET == 41) {
      tmp_1_1_1_1_1_1_1 = 41 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P041_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
        DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
    }
    tmp.nid_packet = tmp_1_1_1_1_1_1_1;
    if (tmp13) {
      tmp.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      IfBlock1_clock_1_1_1_1_1_1 = inC->P041_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_1_1_1_1) {
        tmp.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        tmp15 = inC->P041_in.Q_DIR == INT_Q_DIR_both_TM_conversions;
        if (tmp15) {
          tmp.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    tmp18 = 0;
    for (i = 0; i < 30; i++) {
      tmp3 = tmp18;
      _20_else_clock_1_1_1_1_1_1_IfBlock1 =
        _L3_1_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (_20_else_clock_1_1_1_1_1_1_IfBlock1) {
        tmp18 = _L3_1_1_1.PacketHeaders[i].endAddress;
      }
      else {
        tmp18 = tmp3;
      }
      tmp16 = i + 1;
      if (!_20_else_clock_1_1_1_1_1_1_IfBlock1) {
        break;
      }
    }
    if (tmp18 == 0) {
      _L7_1_1_1_1_1 = 0;
    }
    else {
      _L7_1_1_1_1_1 = tmp18 + 1;
    }
    _L3_1_1_1_1_1 = _L7_1_1_1_1_1 + (tmp.endAddress - tmp.startAddress);
    _L376_1_1_1_1_1[0] = inC->P041_in.N_ITER;
    kcg_copy_P041_trackide_sectionlist_T_TM(&tmp2[1], &inC->P041_in.SECTIONS);
    for (i = 0; i < 33; i++) {
      _31__L74_1_1_1_1_1_1[i][0] = tmp2[i].M_LEVELTR;
      _31__L74_1_1_1_1_1_1[i][1] = tmp2[i].NID_NTC;
      _31__L74_1_1_1_1_1_1[i][2] = tmp2[i].L_ACKLEVELTR;
    }
    for (i = 0; i < 395; i++) {
      _30__L209_1_1_1_1_1[i] = 0;
    }
    kcg_copy_array_int_1(&_L383_1_1_1_1_1[5], &_L376_1_1_1_1_1);
    kcg_copy_P041_sections_array_flat_T_TM(
      &tmp1,
      (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
    for (i = 0; i < 99; i++) {
      if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
        tmp1[i] = _31__L74_1_1_1_1_1_1[i / 3][i % 3];
      }
      else {
        tmp1[i] = 0;
      }
    }
    kcg_copy_P041_sections_array_flat_T_TM(&_L383_1_1_1_1_1[6], &tmp1);
    kcg_copy_array_int_395(&_L383_1_1_1_1_1[105], &_30__L209_1_1_1_1_1);
    for (i = 0; i < 500; i++) {
      else_clock_1_1_1_1_1_1_IfBlock1 = _L3_1_1_1_1_1 >= i;
      if (else_clock_1_1_1_1_1_1_IfBlock1 & (i >= _L7_1_1_1_1_1)) {
        if ((0 <= i - _L7_1_1_1_1_1) & (i - _L7_1_1_1_1_1 < 500)) {
          _L406_1_1_1_1_1[i] = _L383_1_1_1_1_1[i - _L7_1_1_1_1_1];
        }
        else {
          _L406_1_1_1_1_1[i] = 0;
        }
      }
      else {
        _L406_1_1_1_1_1[i] = _L3_1_1_1.PacketData[i];
      }
      _L408_1_1_1_1_1 = i + 1;
      if (!else_clock_1_1_1_1_1_1_IfBlock1) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _L408_1_1_1_1_1; i < 500; i++) {
      _L406_1_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_22__L3_1_1_1.PacketData,
      &_L406_1_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_22__L3_1_1_1.PacketHeaders,
      &_L3_1_1_1.PacketHeaders);
    tmp.startAddress = _L7_1_1_1_1_1;
    tmp.endAddress = _L3_1_1_1_1_1;
    if ((0 <= tmp16 - 1) & (tmp16 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_22__L3_1_1_1.PacketHeaders[tmp16 - 1],
        &tmp);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_22__L3_1_1_1, &_L3_1_1_1);
  }
  kcg_copy_R_data_internal_T_InfraLib(
    &_L1,
    (R_data_internal_T_InfraLib *) &INIT_R_data_API_Examples);
  if (inC->P065_in.valid) {
    (&_28__L383_1_1_1_1_1[0])[0] = inC->P065_in.NID_PACKET;
    (&_28__L383_1_1_1_1_1[0])[1] = inC->P065_in.Q_DIR;
    (&_28__L383_1_1_1_1_1[0])[2] = inC->P065_in.L_PACKET;
    (&_28__L383_1_1_1_1_1[0])[3] = inC->P065_in.Q_SCALE;
    (&_28__L383_1_1_1_1_1[0])[4] = inC->P065_in.NID_TSR;
    (&_28__L383_1_1_1_1_1[0])[5] = inC->P065_in.D_TSR;
    (&_28__L383_1_1_1_1_1[0])[6] = inC->P065_in.L_TSR;
    (&_28__L383_1_1_1_1_1[0])[7] = inC->P065_in.Q_FRONT;
    (&_28__L383_1_1_1_1_1[0])[8] = inC->P065_in.V_TSR;
    tmp4.valid = inC->P065_in.valid;
    tmp4.startAddress = 0;
    tmp4.endAddress = DIM_MaxElementsPacket065_TM - 1;
    tmp13 = inC->P065_in.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
    if (inC->P065_in.NID_PACKET == 65) {
      tmp4.nid_packet = 65 * DIM_offset_metadata_nid_packet_TM_lib_internal +
        INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
        inC->P065_in.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal +
        inC->P065_in.NID_TSR * DIM_offset_metadata_id_TM_lib_internal;
    }
    else {
      tmp4.nid_packet = ERROR_nid_packet_TM;
    }
    if (tmp13) {
      tmp4.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
    }
    else {
      IfBlock1_clock_1_1_1_1_1_1 = inC->P065_in.Q_DIR ==
        INT_Q_DIR_reverse_TM_conversions;
      if (IfBlock1_clock_1_1_1_1_1_1) {
        tmp4.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
      }
      else {
        tmp15 = inC->P065_in.Q_DIR == INT_Q_DIR_both_TM_conversions;
        if (tmp15) {
          tmp4.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
        else {
          tmp4.q_dir = ENUM_Q_DIR_both_TM_conversions;
        }
      }
    }
    _23__L3_1_1_1_1_1 = 0;
    for (i = 0; i < 30; i++) {
      _L407_1_1_1_1_1 = _23__L3_1_1_1_1_1;
      tmp8 = _22__L3_1_1_1.PacketHeaders[i].nid_packet !=
        DEFAULT_Headers_TM[i].nid_packet;
      if (tmp8) {
        _23__L3_1_1_1_1_1 = _22__L3_1_1_1.PacketHeaders[i].endAddress;
      }
      else {
        _23__L3_1_1_1_1_1 = _L407_1_1_1_1_1;
      }
      tmp9 = i + 1;
      if (!tmp8) {
        break;
      }
    }
    if (_23__L3_1_1_1_1_1 == 0) {
      _25__L408_1_1_1_1_1 = 0;
    }
    else {
      _25__L408_1_1_1_1_1 = _23__L3_1_1_1_1_1 + 1;
    }
    _24__L7_1_1_1_1_1 = _25__L408_1_1_1_1_1 + (tmp4.endAddress -
        tmp4.startAddress);
    for (i = 0; i < 491; i++) {
      (&_28__L383_1_1_1_1_1[9])[i] = 0;
    }
    for (i = 0; i < 500; i++) {
      tmp5 = _24__L7_1_1_1_1_1 >= i;
      if (tmp5 & (i >= _25__L408_1_1_1_1_1)) {
        if ((0 <= i - _25__L408_1_1_1_1_1) & (i - _25__L408_1_1_1_1_1 < 500)) {
          _27__L406_1_1_1_1_1[i] = _28__L383_1_1_1_1_1[i - _25__L408_1_1_1_1_1];
        }
        else {
          _27__L406_1_1_1_1_1[i] = 0;
        }
      }
      else {
        _27__L406_1_1_1_1_1[i] = _22__L3_1_1_1.PacketData[i];
      }
      _26__L407_1_1_1_1_1 = i + 1;
      if (!tmp5) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _26__L407_1_1_1_1_1; i < 500; i++) {
      _27__L406_1_1_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L1.packets.PacketData,
      &_27__L406_1_1_1_1_1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_L1.packets.PacketHeaders,
      &_22__L3_1_1_1.PacketHeaders);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, &tmp4);
    tmp.startAddress = _25__L408_1_1_1_1_1;
    tmp.endAddress = _24__L7_1_1_1_1_1;
    if ((0 <= tmp9 - 1) & (tmp9 - 1 < 30)) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L1.packets.PacketHeaders[tmp9 - 1],
        &tmp);
    }
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1.packets, &_22__L3_1_1_1);
  }
  _L1.message.valid = inC->M003_in.valid;
  _L1.message.nid_message = inC->M003_in.nid_message;
  _L1.message.l_message = inC->M003_in.l_message;
  _L1.message.t_train = inC->M003_in.t_train;
  _L1.message.field1 = inC->M003_in.m_ack;
  _L1.message.field2 = inC->M003_in.nid_lrbg;
  _L1.message.field3 = 0;
  _L1.message.field4 = 0;
  _L1.message.field5 = 0;
  _L1.message.field6 = 0;
  _L1.message.field7 = 0;
  _L1.message.field8 = 0;
  _L1.message_sent = kcg_true;
  else_clock_1_1_1_1_1_1_IfBlock1 = _L1.message.nid_message == 2;
  if (else_clock_1_1_1_1_1_1_IfBlock1) {
    _L1_1_1.valid = _L1.message.valid;
    _L1_1_1.nid_message = _L1.message.nid_message;
    _L1_1_1.l_message = _L1.message.l_message;
    _L1_1_1.t_train = _L1.message.t_train;
    _L1_1_1.nid_lrbg = _L1.message.field2;
    _L1_1_1.d_sr = _L1.message.field4;
    _70_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
      INT_M_ACK_acknowledgement_TM_conversions;
    _72_IfBlock1_clock_1_1_1 = _L1.message.field3 ==
      INT_Q_SCALE_10cm_TM_conversions;
    if (_70_IfBlock1_clock_1_1_1) {
      _L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
    }
    else {
      _71_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
        INT_M_ACK_no_acknowledgement_TM_conversions;
      if (_71_else_clock_1_1_1_IfBlock1) {
        _L1_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
      }
      else {
        _L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
    }
    if (_72_IfBlock1_clock_1_1_1) {
      _L1_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
    }
    else {
      _74_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
        INT_Q_SCALE_1m_TM_conversions;
      if (_74_else_clock_1_1_1_IfBlock1) {
        _L1_1_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
      }
      else {
        _73_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
          INT_Q_SCALE_10m_TM_conversions;
        if (_73_else_clock_1_1_1_IfBlock1) {
          _L1_1_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
        }
        else {
          _L1_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
        }
      }
    }
  }
  else {
    _35_else_clock_1_IfBlock1 = _L1.message.nid_message == 3;
    if (_35_else_clock_1_IfBlock1) {
      _50__L26_1_1.valid = _L1.message.valid;
      _50__L26_1_1.nid_message = _L1.message.nid_message;
      _50__L26_1_1.l_message = _L1.message.l_message;
      _50__L26_1_1.t_train = _L1.message.t_train;
      _50__L26_1_1.nid_lrbg = _L1.message.field2;
      _67_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
        INT_M_ACK_acknowledgement_TM_conversions;
      if (_67_IfBlock1_clock_1_1_1) {
        _50__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
      else {
        _68_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
          INT_M_ACK_no_acknowledgement_TM_conversions;
        if (_68_else_clock_1_1_1_IfBlock1) {
          _50__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
        }
        else {
          _50__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
      }
    }
    else {
      _20_else_clock_1_1_1_1_1_1_IfBlock1 = _L1.message.nid_message == 6;
      if (_20_else_clock_1_1_1_1_1_1_IfBlock1) {
        _49__L26_1_1.valid = _L1.message.valid;
        _49__L26_1_1.nid_message = _L1.message.nid_message;
        _49__L26_1_1.l_message = _L1.message.l_message;
        _49__L26_1_1.t_train = _L1.message.t_train;
        _49__L26_1_1.nid_lrbg = _L1.message.field2;
        _64_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
          INT_M_ACK_acknowledgement_TM_conversions;
        if (_64_IfBlock1_clock_1_1_1) {
          _49__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
        else {
          _65_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
            INT_M_ACK_no_acknowledgement_TM_conversions;
          if (_65_else_clock_1_1_1_IfBlock1) {
            _49__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
          }
          else {
            _49__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
        }
      }
      else {
        _34_else_clock_1_IfBlock1 = _L1.message.nid_message == 8;
        if (_34_else_clock_1_IfBlock1) {
          _48__L26_1_1.valid = _L1.message.valid;
          _48__L26_1_1.nid_message = _L1.message.nid_message;
          _48__L26_1_1.l_message = _L1.message.l_message;
          _48__L26_1_1.t_train = _L1.message.t_train;
          _48__L26_1_1.nid_lrbg = _L1.message.field2;
          _48__L26_1_1.t_train_received = _L1.message.field3;
          _60_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
            INT_M_ACK_acknowledgement_TM_conversions;
          if (_60_IfBlock1_clock_1_1_1) {
            _48__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
          else {
            _61_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
              INT_M_ACK_no_acknowledgement_TM_conversions;
            if (_61_else_clock_1_1_1_IfBlock1) {
              _48__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
            }
            else {
              _48__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
            }
          }
        }
        else {
          tmp13 = _L1.message.nid_message == 9;
          if (tmp13) {
            _47__L26_1_1.valid = _L1.message.valid;
            _47__L26_1_1.nid_message = _L1.message.nid_message;
            _47__L26_1_1.l_message = _L1.message.l_message;
            _47__L26_1_1.t_train = _L1.message.t_train;
            _47__L26_1_1.nid_lrbg = _L1.message.field2;
            _57_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
              INT_M_ACK_acknowledgement_TM_conversions;
            if (_57_IfBlock1_clock_1_1_1) {
              _47__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
            }
            else {
              _58_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
                INT_M_ACK_no_acknowledgement_TM_conversions;
              if (_58_else_clock_1_1_1_IfBlock1) {
                _47__L26_1_1.m_ack =
                  ENUM_M_ACK_no_acknowledgement_TM_conversions;
              }
              else {
                _47__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
            }
          }
          else {
            else_clock_1_IfBlock1 = _L1.message.nid_message == 15;
            if (else_clock_1_IfBlock1) {
              _46__L1_2_1.valid = _L1.message.valid;
              _46__L1_2_1.nid_message = _L1.message.nid_message;
              _46__L1_2_1.l_message = _L1.message.l_message;
              _46__L1_2_1.t_train = _L1.message.t_train;
              _46__L1_2_1.nid_lrbg = _L1.message.field2;
              _46__L1_2_1.nid_em = _L1.message.field3;
              _46__L1_2_1.d_ref = _L1.message.field5;
              _46__L1_2_1.d_emergencystop = _L1.message.field7;
              _42_else_clock_1_IfBlock2 = _L1.message.field1 ==
                INT_M_ACK_acknowledgement_TM_conversions;
              IfBlock1_clock_1_1_1 = _L1.message.field4 ==
                INT_Q_SCALE_10cm_TM_conversions;
              _53_else_clock_1_1_1_IfBlock1 = _L1.message.field6 ==
                INT_Q_DIR_nomiinal_TM_conversions;
              if (_42_else_clock_1_IfBlock2) {
                _46__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
              else {
                _43_else_clock_1_IfBlock2 = _L1.message.field1 ==
                  INT_M_ACK_no_acknowledgement_TM_conversions;
                if (_43_else_clock_1_IfBlock2) {
                  _46__L1_2_1.m_ack =
                    ENUM_M_ACK_no_acknowledgement_TM_conversions;
                }
                else {
                  _46__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
                }
              }
              if (IfBlock1_clock_1_1_1) {
                _46__L1_2_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
              }
              else {
                _52_IfBlock1_clock_1_1_1 = _L1.message.field4 ==
                  INT_Q_SCALE_1m_TM_conversions;
                if (_52_IfBlock1_clock_1_1_1) {
                  _46__L1_2_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
                }
                else {
                  else_clock_1_1_1_IfBlock1 = _L1.message.field4 ==
                    INT_Q_SCALE_10m_TM_conversions;
                  if (else_clock_1_1_1_IfBlock1) {
                    _46__L1_2_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
                  }
                  else {
                    _46__L1_2_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
                  }
                }
              }
              if (_53_else_clock_1_1_1_IfBlock1) {
                _46__L1_2_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
              }
              else {
                _56_else_clock_1_1_1_IfBlock1 = _L1.message.field6 ==
                  INT_Q_DIR_reverse_TM_conversions;
                if (_56_else_clock_1_1_1_IfBlock1) {
                  _46__L1_2_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
                }
                else {
                  _55_IfBlock1_clock_1_1_1 = _L1.message.field6 ==
                    INT_Q_DIR_both_TM_conversions;
                  if (_55_IfBlock1_clock_1_1_1) {
                    _46__L1_2_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
                  }
                  else {
                    _46__L1_2_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
                  }
                }
              }
            }
            else {
              tmp15 = _L1.message.nid_message == 16;
              if (tmp15) {
                _L1_2_1.valid = _L1.message.valid;
                _L1_2_1.nid_message = _L1.message.nid_message;
                _L1_2_1.l_message = _L1.message.l_message;
                _L1_2_1.t_train = _L1.message.t_train;
                _L1_2_1.nid_lrbg = _L1.message.field2;
                _L1_2_1.nid_em = _L1.message.field3;
                _40_else_clock_1_IfBlock2 = _L1.message.field1 ==
                  INT_M_ACK_acknowledgement_TM_conversions;
                if (_40_else_clock_1_IfBlock2) {
                  _L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
                }
                else {
                  _41_else_clock_1_IfBlock2 = _L1.message.field1 ==
                    INT_M_ACK_no_acknowledgement_TM_conversions;
                  if (_41_else_clock_1_IfBlock2) {
                    _L1_2_1.m_ack =
                      ENUM_M_ACK_no_acknowledgement_TM_conversions;
                  }
                  else {
                    _L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                }
              }
              else {
                tmp8 = _L1.message.nid_message == 18;
                if (tmp8) {
                  _45__L26_1_1.valid = _L1.message.valid;
                  _45__L26_1_1.nid_message = _L1.message.nid_message;
                  _45__L26_1_1.l_message = _L1.message.l_message;
                  _45__L26_1_1.t_train = _L1.message.t_train;
                  _45__L26_1_1.nid_lrbg = _L1.message.field2;
                  _45__L26_1_1.nid_em = _L1.message.field3;
                  _38_else_clock_1_IfBlock2 = _L1.message.field1 ==
                    INT_M_ACK_acknowledgement_TM_conversions;
                  if (_38_else_clock_1_IfBlock2) {
                    _45__L26_1_1.m_ack =
                      ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                  else {
                    _39_else_clock_1_IfBlock2 = _L1.message.field1 ==
                      INT_M_ACK_no_acknowledgement_TM_conversions;
                    if (_39_else_clock_1_IfBlock2) {
                      _45__L26_1_1.m_ack =
                        ENUM_M_ACK_no_acknowledgement_TM_conversions;
                    }
                    else {
                      _45__L26_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                  }
                }
                else {
                  IfBlock1_clock_1_1_1_1_1_1 = _L1.message.nid_message == 24;
                  if (IfBlock1_clock_1_1_1_1_1_1) {
                    _44__L26_1_1.valid = _L1.message.valid;
                    _44__L26_1_1.nid_message = _L1.message.nid_message;
                    _44__L26_1_1.l_message = _L1.message.l_message;
                    _44__L26_1_1.t_train = _L1.message.t_train;
                    _44__L26_1_1.nid_lrbg = _L1.message.field2;
                    _36_else_clock_1_IfBlock2 = _L1.message.field1 ==
                      INT_M_ACK_acknowledgement_TM_conversions;
                    if (_36_else_clock_1_IfBlock2) {
                      _44__L26_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                    else {
                      _37_else_clock_1_IfBlock2 = _L1.message.field1 ==
                        INT_M_ACK_no_acknowledgement_TM_conversions;
                      if (_37_else_clock_1_IfBlock2) {
                        _44__L26_1_1.m_ack =
                          ENUM_M_ACK_no_acknowledgement_TM_conversions;
                      }
                      else {
                        _44__L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                    }
                  }
                  else {
                    tmp5 = _L1.message.nid_message == 27;
                    if (tmp5) {
                      _L26_1_1.valid = _L1.message.valid;
                      _L26_1_1.nid_message = _L1.message.nid_message;
                      _L26_1_1.l_message = _L1.message.l_message;
                      _L26_1_1.t_train = _L1.message.t_train;
                      _L26_1_1.nid_lrbg = _L1.message.field2;
                      _L26_1_1.t_train_SH_request = _L1.message.field3;
                      IfBlock2_clock_1 = _L1.message.field1 ==
                        INT_M_ACK_acknowledgement_TM_conversions;
                      if (IfBlock2_clock_1) {
                        _L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                      else {
                        else_clock_1_IfBlock2 = _L1.message.field1 ==
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
  IfBlock2_clock_1 = _L1.message.nid_message == 28;
  if (IfBlock2_clock_1) {
    _93__L1_1_1.valid = _L1.message.valid;
    _93__L1_1_1.nid_message = _L1.message.nid_message;
    _93__L1_1_1.l_message = _L1.message.l_message;
    _93__L1_1_1.t_train = _L1.message.t_train;
    _93__L1_1_1.nid_lrbg = _L1.message.field2;
    _93__L1_1_1.t_train_SH_request = _L1.message.field3;
    _91_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
      INT_M_ACK_acknowledgement_TM_conversions;
    if (_91_IfBlock1_clock_1_1_1) {
      _93__L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
    }
    else {
      _92_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
        INT_M_ACK_no_acknowledgement_TM_conversions;
      if (_92_else_clock_1_1_1_IfBlock1) {
        _93__L1_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
      }
      else {
        _93__L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
    }
  }
  else {
    _43_else_clock_1_IfBlock2 = _L1.message.nid_message == 32;
    if (_43_else_clock_1_IfBlock2) {
      _90__L1_2_1.valid = _L1.message.valid;
      _90__L1_2_1.nid_message = _L1.message.nid_message;
      _90__L1_2_1.l_message = _L1.message.l_message;
      _90__L1_2_1.t_train = _L1.message.t_train;
      _90__L1_2_1.nid_lrbg = _L1.message.field2;
      _84_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
        INT_M_ACK_acknowledgement_TM_conversions;
      _86_IfBlock1_clock_1_1_1 = _L1.message.field3 <=
        INT_M_VERSION_previous_M_TM_conversions;
      if (_84_IfBlock1_clock_1_1_1) {
        _90__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
      }
      else {
        _85_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
          INT_M_ACK_no_acknowledgement_TM_conversions;
        if (_85_else_clock_1_1_1_IfBlock1) {
          _90__L1_2_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
        }
        else {
          _90__L1_2_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
      }
      if (_86_IfBlock1_clock_1_1_1) {
        _90__L1_2_1.m_version = ENUM_M_VERSION_Previous_versions_TM_conversions;
      }
      else {
        _89_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
          INT_M_VERSION_1_0_TM_conversions;
        if (_89_else_clock_1_1_1_IfBlock1) {
          _90__L1_2_1.m_version = ENUM_M_VERSION_Version_1_0_TM_conversions;
        }
        else {
          _87_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
            INT_M_VERSION_1_1_TM_conversions;
          if (_87_else_clock_1_1_1_IfBlock1) {
            _90__L1_2_1.m_version = ENUM_M_VERSION_Version_1_1_TM_conversions;
          }
          else {
            _88_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
              INT_M_VERSION_2_0_TM_conversions;
            if (_88_else_clock_1_1_1_IfBlock1) {
              _90__L1_2_1.m_version = ENUM_M_VERSION_Version_2_0_TM_conversions;
            }
            else {
              _90__L1_2_1.m_version =
                ENUM_M_VERSION_Previous_versions_TM_conversions;
            }
          }
        }
      }
    }
    else {
      else_clock_1_IfBlock2 = _L1.message.nid_message == 33;
      if (else_clock_1_IfBlock2) {
        _78__L26_1_1.valid = _L1.message.valid;
        _78__L26_1_1.nid_message = _L1.message.nid_message;
        _78__L26_1_1.l_message = _L1.message.l_message;
        _78__L26_1_1.t_train = _L1.message.t_train;
        _78__L26_1_1.nid_lrbg = _L1.message.field2;
        _78__L26_1_1.d_ref = _L1.message.field4;
        _79_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
          INT_M_ACK_acknowledgement_TM_conversions;
        _81_IfBlock1_clock_1_1_1 = _L1.message.field3 ==
          INT_Q_SCALE_10cm_TM_conversions;
        if (_79_IfBlock1_clock_1_1_1) {
          _78__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
        }
        else {
          _80_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
            INT_M_ACK_no_acknowledgement_TM_conversions;
          if (_80_else_clock_1_1_1_IfBlock1) {
            _78__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
          }
          else {
            _78__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
        }
        if (_81_IfBlock1_clock_1_1_1) {
          _78__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
        }
        else {
          _83_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
            INT_Q_SCALE_1m_TM_conversions;
          if (_83_else_clock_1_1_1_IfBlock1) {
            _78__L26_1_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
          }
          else {
            _82_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
              INT_Q_SCALE_10m_TM_conversions;
            if (_82_else_clock_1_1_1_IfBlock1) {
              _78__L26_1_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
            }
            else {
              _78__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
            }
          }
        }
      }
      else {
        _42_else_clock_1_IfBlock2 = _L1.message.nid_message == 34;
        if (_42_else_clock_1_IfBlock2) {
          _69__L26_1_1.valid = _L1.message.valid;
          _69__L26_1_1.nid_message = _L1.message.nid_message;
          _69__L26_1_1.l_message = _L1.message.l_message;
          _69__L26_1_1.t_train = _L1.message.t_train;
          _69__L26_1_1.nid_lrbg = _L1.message.field2;
          _69__L26_1_1.d_ref = _L1.message.field4;
          _69__L26_1_1.d_tafdisplay = _L1.message.field6;
          _69__L26_1_1.l_tafdisplay = _L1.message.field7;
          _70_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
            INT_M_ACK_acknowledgement_TM_conversions;
          _72_IfBlock1_clock_1_1_1 = _L1.message.field3 ==
            INT_Q_SCALE_10cm_TM_conversions;
          _75_IfBlock1_clock_1_1_1 = _L1.message.field5 ==
            INT_Q_DIR_nomiinal_TM_conversions;
          if (_70_IfBlock1_clock_1_1_1) {
            _69__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
          }
          else {
            _71_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
              INT_M_ACK_no_acknowledgement_TM_conversions;
            if (_71_else_clock_1_1_1_IfBlock1) {
              _69__L26_1_1.m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
            }
            else {
              _69__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
            }
          }
          if (_72_IfBlock1_clock_1_1_1) {
            _69__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
          }
          else {
            _74_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
              INT_Q_SCALE_1m_TM_conversions;
            if (_74_else_clock_1_1_1_IfBlock1) {
              _69__L26_1_1.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
            }
            else {
              _73_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
                INT_Q_SCALE_10m_TM_conversions;
              if (_73_else_clock_1_1_1_IfBlock1) {
                _69__L26_1_1.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
              }
              else {
                _69__L26_1_1.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
              }
            }
          }
          if (_75_IfBlock1_clock_1_1_1) {
            _69__L26_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
          }
          else {
            _77_else_clock_1_1_1_IfBlock1 = _L1.message.field5 ==
              INT_Q_DIR_reverse_TM_conversions;
            if (_77_else_clock_1_1_1_IfBlock1) {
              _69__L26_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
            }
            else {
              _76_else_clock_1_1_1_IfBlock1 = _L1.message.field5 ==
                INT_Q_DIR_both_TM_conversions;
              if (_76_else_clock_1_1_1_IfBlock1) {
                _69__L26_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
              }
              else {
                _69__L26_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
              }
            }
          }
        }
        else {
          _36_else_clock_1_IfBlock2 = _L1.message.nid_message == 38;
          if (_36_else_clock_1_IfBlock2) {
            _66__L26_1_1.valid = _L1.message.valid;
            _66__L26_1_1.nid_message = _L1.message.nid_message;
            _66__L26_1_1.l_message = _L1.message.l_message;
            _66__L26_1_1.t_train = _L1.message.t_train;
            _66__L26_1_1.nid_lrbg = _L1.message.field2;
            _67_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
              INT_M_ACK_acknowledgement_TM_conversions;
            if (_67_IfBlock1_clock_1_1_1) {
              _66__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
            }
            else {
              _68_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
                INT_M_ACK_no_acknowledgement_TM_conversions;
              if (_68_else_clock_1_1_1_IfBlock1) {
                _66__L26_1_1.m_ack =
                  ENUM_M_ACK_no_acknowledgement_TM_conversions;
              }
              else {
                _66__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
            }
          }
          else {
            _41_else_clock_1_IfBlock2 = _L1.message.nid_message == 39;
            if (_41_else_clock_1_IfBlock2) {
              _63__L26_1_1.valid = _L1.message.valid;
              _63__L26_1_1.nid_message = _L1.message.nid_message;
              _63__L26_1_1.l_message = _L1.message.l_message;
              _63__L26_1_1.t_train = _L1.message.t_train;
              _63__L26_1_1.nid_lrbg = _L1.message.field2;
              _64_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
                INT_M_ACK_acknowledgement_TM_conversions;
              if (_64_IfBlock1_clock_1_1_1) {
                _63__L26_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
              }
              else {
                _65_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
                  INT_M_ACK_no_acknowledgement_TM_conversions;
                if (_65_else_clock_1_1_1_IfBlock1) {
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
              _37_else_clock_1_IfBlock2 = _L1.message.nid_message == 40;
              if (_37_else_clock_1_IfBlock2) {
                _62__L1_1_1.valid = _L1.message.valid;
                _62__L1_1_1.nid_message = _L1.message.nid_message;
                _62__L1_1_1.l_message = _L1.message.l_message;
                _62__L1_1_1.t_train = _L1.message.t_train;
                _62__L1_1_1.nid_lrbg = _L1.message.field2;
                _60_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
                  INT_M_ACK_acknowledgement_TM_conversions;
                if (_60_IfBlock1_clock_1_1_1) {
                  _62__L1_1_1.m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
                }
                else {
                  _61_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
                    INT_M_ACK_no_acknowledgement_TM_conversions;
                  if (_61_else_clock_1_1_1_IfBlock1) {
                    _62__L1_1_1.m_ack =
                      ENUM_M_ACK_no_acknowledgement_TM_conversions;
                  }
                  else {
                    _62__L1_1_1.m_ack =
                      ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                }
              }
              else {
                _40_else_clock_1_IfBlock2 = _L1.message.nid_message == 41;
                if (_40_else_clock_1_IfBlock2) {
                  _59__L1_1_1.valid = _L1.message.valid;
                  _59__L1_1_1.nid_message = _L1.message.nid_message;
                  _59__L1_1_1.l_message = _L1.message.l_message;
                  _59__L1_1_1.t_train = _L1.message.t_train;
                  _59__L1_1_1.nid_lrbg = _L1.message.field2;
                  _57_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
                    INT_M_ACK_acknowledgement_TM_conversions;
                  if (_57_IfBlock1_clock_1_1_1) {
                    _59__L1_1_1.m_ack =
                      ENUM_M_ACK_acknowledgement_TM_conversions;
                  }
                  else {
                    _58_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
                      INT_M_ACK_no_acknowledgement_TM_conversions;
                    if (_58_else_clock_1_1_1_IfBlock1) {
                      _59__L1_1_1.m_ack =
                        ENUM_M_ACK_no_acknowledgement_TM_conversions;
                    }
                    else {
                      _59__L1_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                  }
                }
                else {
                  _38_else_clock_1_IfBlock2 = _L1.message.nid_message == 43;
                  if (_38_else_clock_1_IfBlock2) {
                    _54__L26_1_1.valid = _L1.message.valid;
                    _54__L26_1_1.nid_message = _L1.message.nid_message;
                    _54__L26_1_1.l_message = _L1.message.l_message;
                    _54__L26_1_1.t_train = _L1.message.t_train;
                    _54__L26_1_1.nid_lrbg = _L1.message.field2;
                    _55_IfBlock1_clock_1_1_1 = _L1.message.field1 ==
                      INT_M_ACK_acknowledgement_TM_conversions;
                    if (_55_IfBlock1_clock_1_1_1) {
                      _54__L26_1_1.m_ack =
                        ENUM_M_ACK_acknowledgement_TM_conversions;
                    }
                    else {
                      _56_else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
                        INT_M_ACK_no_acknowledgement_TM_conversions;
                      if (_56_else_clock_1_1_1_IfBlock1) {
                        _54__L26_1_1.m_ack =
                          ENUM_M_ACK_no_acknowledgement_TM_conversions;
                      }
                      else {
                        _54__L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                    }
                  }
                  else {
                    _39_else_clock_1_IfBlock2 = _L1.message.nid_message == 45;
                    if (_39_else_clock_1_IfBlock2) {
                      _51__L26_1_1.valid = _L1.message.valid;
                      _51__L26_1_1.nid_message = _L1.message.nid_message;
                      _51__L26_1_1.l_message = _L1.message.l_message;
                      _51__L26_1_1.t_train = _L1.message.t_train;
                      _51__L26_1_1.nid_lrbg = _L1.message.field2;
                      IfBlock1_clock_1_1_1 = _L1.message.field1 ==
                        INT_M_ACK_acknowledgement_TM_conversions;
                      _52_IfBlock1_clock_1_1_1 = _L1.message.field3 ==
                        INT_Q_ORIENTATION_reverse_TM_conversions;
                      if (IfBlock1_clock_1_1_1) {
                        _51__L26_1_1.m_ack =
                          ENUM_M_ACK_acknowledgement_TM_conversions;
                      }
                      else {
                        else_clock_1_1_1_IfBlock1 = _L1.message.field1 ==
                          INT_M_ACK_no_acknowledgement_TM_conversions;
                        if (else_clock_1_1_1_IfBlock1) {
                          _51__L26_1_1.m_ack =
                            ENUM_M_ACK_no_acknowledgement_TM_conversions;
                        }
                        else {
                          _51__L26_1_1.m_ack =
                            ENUM_M_ACK_acknowledgement_TM_conversions;
                        }
                      }
                      if (_52_IfBlock1_clock_1_1_1) {
                        _51__L26_1_1.q_orientation =
                          ENUM_Q_ORIENTATION_reverse_TM_conversions;
                      }
                      else {
                        _53_else_clock_1_1_1_IfBlock1 = _L1.message.field3 ==
                          INT_Q_ORIENTATION_nominal_TM_conversions;
                        if (_53_else_clock_1_1_1_IfBlock1) {
                          _51__L26_1_1.q_orientation =
                            ENUM_Q_ORIENTATION_nominal_TM_conversions;
                        }
                        else {
                          _51__L26_1_1.q_orientation =
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
  }
  if (_L1.message.nid_message <= 27) {
    if (else_clock_1_1_1_1_1_1_IfBlock1) {
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
    else if (_35_else_clock_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _50__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _50__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _50__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _50__L26_1_1.nid_lrbg;
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
    else if (_20_else_clock_1_1_1_1_1_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _49__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _49__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _49__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _49__L26_1_1.nid_lrbg;
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
    else if (_34_else_clock_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _48__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _48__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _48__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _48__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        _48__L26_1_1.t_train_received;
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
    else if (tmp13) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _47__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _47__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _47__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _47__L26_1_1.nid_lrbg;
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
    else if (else_clock_1_IfBlock1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _46__L1_2_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _46__L1_2_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _46__L1_2_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _46__L1_2_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em = _46__L1_2_1.nid_em;
      outC->RadioTrackTrainHeader_out.q_scale = _46__L1_2_1.q_scale;
      outC->RadioTrackTrainHeader_out.d_sr =
        default_d_sr_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.t_sh_rqst =
        default_t_sh_rqst_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.d_ref = _46__L1_2_1.d_ref;
      outC->RadioTrackTrainHeader_out.q_dir = _46__L1_2_1.q_dir;
      outC->RadioTrackTrainHeader_out.d_emergencystop =
        _46__L1_2_1.d_emergencystop;
      outC->RadioTrackTrainHeader_out.m_version =
        default_m_version_TM_RBC_conversions_legacy;
    }
    else if (tmp15) {
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
    else if (tmp8) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _45__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _45__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _45__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _45__L26_1_1.nid_lrbg;
      outC->RadioTrackTrainHeader_out.t_train_reference =
        default_t_train_reference_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_em = _45__L26_1_1.nid_em;
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
    else if (IfBlock1_clock_1_1_1_1_1_1) {
      outC->RadioTrackTrainHeader_out.radioDevice =
        default_radioDevice_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.receivedSystemTime =
        default_receivedSystemTime_TM_RBC_conversions_legacy;
      outC->RadioTrackTrainHeader_out.nid_message = _44__L26_1_1.nid_message;
      outC->RadioTrackTrainHeader_out.t_train = _44__L26_1_1.t_train;
      outC->RadioTrackTrainHeader_out.m_ack = _44__L26_1_1.m_ack;
      outC->RadioTrackTrainHeader_out.nid_lrbg = _44__L26_1_1.nid_lrbg;
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
    else if (tmp5) {
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
    outC->RadioTrackTrainHeader_out.nid_message = _93__L1_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _93__L1_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _93__L1_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _93__L1_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale =
      default_q_scale_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst = _93__L1_1_1.t_train_SH_request;
    outC->RadioTrackTrainHeader_out.d_ref =
      default_d_ref_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_43_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _90__L1_2_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _90__L1_2_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _90__L1_2_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _90__L1_2_1.nid_lrbg;
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
    outC->RadioTrackTrainHeader_out.m_version = _90__L1_2_1.m_version;
  }
  else if (else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _78__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _78__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _78__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _78__L26_1_1.nid_lrbg;
    outC->RadioTrackTrainHeader_out.t_train_reference =
      default_t_train_reference_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_em =
      default_nid_em_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.q_scale = _78__L26_1_1.q_scale;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref = _78__L26_1_1.d_ref;
    outC->RadioTrackTrainHeader_out.q_dir =
      default_q_dir_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_42_else_clock_1_IfBlock2) {
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
    outC->RadioTrackTrainHeader_out.q_scale = _69__L26_1_1.q_scale;
    outC->RadioTrackTrainHeader_out.d_sr =
      default_d_sr_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.t_sh_rqst =
      default_t_sh_rqst_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.d_ref = _69__L26_1_1.d_ref;
    outC->RadioTrackTrainHeader_out.q_dir = _69__L26_1_1.q_dir;
    outC->RadioTrackTrainHeader_out.d_emergencystop =
      default_d_emergencystop_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.m_version =
      default_m_version_TM_RBC_conversions_legacy;
  }
  else if (_36_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _66__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _66__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _66__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _66__L26_1_1.nid_lrbg;
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
  else if (_41_else_clock_1_IfBlock2) {
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
  else if (_37_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _62__L1_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _62__L1_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _62__L1_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _62__L1_1_1.nid_lrbg;
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
  else if (_40_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _59__L1_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _59__L1_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _59__L1_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _59__L1_1_1.nid_lrbg;
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
  else if (_38_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _54__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _54__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _54__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _54__L26_1_1.nid_lrbg;
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
  else if (_39_else_clock_1_IfBlock2) {
    outC->RadioTrackTrainHeader_out.radioDevice =
      default_radioDevice_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.receivedSystemTime =
      default_receivedSystemTime_TM_RBC_conversions_legacy;
    outC->RadioTrackTrainHeader_out.nid_message = _51__L26_1_1.nid_message;
    outC->RadioTrackTrainHeader_out.t_train = _51__L26_1_1.t_train;
    outC->RadioTrackTrainHeader_out.m_ack = _51__L26_1_1.m_ack;
    outC->RadioTrackTrainHeader_out.nid_lrbg = _51__L26_1_1.nid_lrbg;
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
  _52_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.q_scale ==
    ENUM_Q_SCALE_10cm_TM_conversions;
  _56_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.q_dir ==
    ENUM_Q_DIR_nominal_TM_conversions;
  _60_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.m_version ==
    ENUM_M_VERSION_Previous_versions_TM_conversions;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &_L1.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Radio_Message_out.Messages,
    &outC->Compressed_Packets_out);
  if (IfBlock1_clock_1_1_1) {
    noname_1_1_1_1_1 = INT_M_ACK_acknowledgement_TM_conversions;
  }
  else {
    else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.m_ack ==
      ENUM_M_ACK_no_acknowledgement_TM_conversions;
    if (else_clock_1_1_1_IfBlock1) {
      noname_1_1_1_1_1 = INT_M_ACK_no_acknowledgement_TM_conversions;
    }
    else {
      noname_1_1_1_1_1 = INT_M_ACK_acknowledgement_TM_conversions;
    }
  }
  if (_52_IfBlock1_clock_1_1_1) {
    tmp_1_1_1_1_1_1_1 = INT_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _55_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.q_scale ==
      ENUM_Q_SCALE_1m_TM_conversions;
    if (_55_IfBlock1_clock_1_1_1) {
      tmp_1_1_1_1_1_1_1 = INT_Q_SCALE_1m_TM_conversions;
    }
    else {
      _53_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.q_scale ==
        ENUM_Q_SCALE_10m_TM_conversions;
      if (_53_else_clock_1_1_1_IfBlock1) {
        tmp_1_1_1_1_1_1_1 = INT_Q_SCALE_10m_TM_conversions;
      }
      else {
        tmp_1_1_1_1_1_1_1 = INT_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  if (_56_else_clock_1_1_1_IfBlock1) {
    tmp16 = INT_Q_DIR_nomiinal_TM_conversions;
  }
  else {
    _58_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.q_dir ==
      ENUM_Q_DIR_reverse_TM_conversions;
    if (_58_else_clock_1_1_1_IfBlock1) {
      tmp16 = INT_Q_DIR_reverse_TM_conversions;
    }
    else {
      _57_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.q_dir ==
        ENUM_Q_DIR_both_TM_conversions;
      if (_57_IfBlock1_clock_1_1_1) {
        tmp16 = INT_Q_DIR_both_TM_conversions;
      }
      else {
        tmp16 = INT_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (_60_IfBlock1_clock_1_1_1) {
    tmp18 = INT_M_VERSION_previous_M_TM_conversions;
  }
  else {
    _65_else_clock_1_1_1_IfBlock1 = outC->RadioTrackTrainHeader_out.m_version ==
      ENUM_M_VERSION_Version_1_0_TM_conversions;
    if (_65_else_clock_1_1_1_IfBlock1) {
      tmp18 = INT_M_VERSION_1_0_TM_conversions;
    }
    else {
      _61_else_clock_1_1_1_IfBlock1 =
        outC->RadioTrackTrainHeader_out.m_version ==
        ENUM_M_VERSION_Version_1_1_TM_conversions;
      if (_61_else_clock_1_1_1_IfBlock1) {
        tmp18 = INT_M_VERSION_1_1_TM_conversions;
      }
      else {
        _64_IfBlock1_clock_1_1_1 = outC->RadioTrackTrainHeader_out.m_version ==
          ENUM_M_VERSION_Version_2_0_TM_conversions;
        if (_64_IfBlock1_clock_1_1_1) {
          tmp18 = INT_M_VERSION_2_0_TM_conversions;
        }
        else {
          tmp18 = INT_M_VERSION_previous_M_TM_conversions;
        }
      }
    }
  }
  outC->Compressed_Radio_Message_out.Header.radioDevice =
    outC->RadioTrackTrainHeader_out.radioDevice;
  outC->Compressed_Radio_Message_out.Header.receivedSystemTime =
    outC->RadioTrackTrainHeader_out.receivedSystemTime;
  outC->Compressed_Radio_Message_out.Header.nid_message =
    outC->RadioTrackTrainHeader_out.nid_message;
  outC->Compressed_Radio_Message_out.Header.t_train =
    outC->RadioTrackTrainHeader_out.t_train;
  outC->Compressed_Radio_Message_out.Header.m_ack = noname_1_1_1_1_1;
  outC->Compressed_Radio_Message_out.Header.nid_lrbg =
    outC->RadioTrackTrainHeader_out.nid_lrbg;
  outC->Compressed_Radio_Message_out.Header.t_train_reference =
    outC->RadioTrackTrainHeader_out.t_train_reference;
  outC->Compressed_Radio_Message_out.Header.nid_em =
    outC->RadioTrackTrainHeader_out.nid_em;
  outC->Compressed_Radio_Message_out.Header.q_scale = tmp_1_1_1_1_1_1_1;
  outC->Compressed_Radio_Message_out.Header.d_sr =
    outC->RadioTrackTrainHeader_out.d_sr;
  outC->Compressed_Radio_Message_out.Header.t_sh_rqst =
    outC->RadioTrackTrainHeader_out.t_sh_rqst;
  outC->Compressed_Radio_Message_out.Header.d_ref =
    outC->RadioTrackTrainHeader_out.d_ref;
  outC->Compressed_Radio_Message_out.Header.q_dir = tmp16;
  outC->Compressed_Radio_Message_out.Header.d_emergencystop =
    outC->RadioTrackTrainHeader_out.d_emergencystop;
  outC->Compressed_Radio_Message_out.Header.m_version = tmp18;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_message_003_API_Examples.c
** Generation date: 2015-11-16T11:28:18
*************************************************************$ */

