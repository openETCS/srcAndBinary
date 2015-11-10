/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"

/* no_bus */
const M_TrainTrackMessageBus_t_TM_TrainTrack_Bus no_bus = { { { kcg_false, 0, 0,
      0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0 } }, { { kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }, { {
      kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }, { { kcg_false, 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0 } }, { { kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } } };

/* p00 */
const P000_TM_TrainToTrack p00 = { kcg_true, 998, 22, Q_SCALE_1_m_scale,
  42600352, 2525, Q_DIRLRBG_Nominal, Q_DLRBG_Reverse, 2, 3,
  Q_LENGTH_No_train_integrity_information_available, 0, 31, Q_DIRTRAIN_Nominal,
  M_MODE_Full_Supervision, M_LEVEL_Level_2, 0 };

/* p01 */
const P001_TM_TrainToTrack p01 = { kcg_false, 0, 0, Q_SCALE_10_cm_scale, 0, 0,
  0, Q_DIRLRBG_Reverse, Q_DLRBG_Reverse, 0, 0,
  Q_LENGTH_No_train_integrity_information_available, 0, 0, Q_DIRTRAIN_Reverse,
  M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 };

/* p04 */
const P004_TM_TrainToTrack p04 = { kcg_false, 0, 0,
  M_ERROR_Balise_group_linking_consistency_error };

/* p05 */
const P005_TM_TrainToTrack p05 = { kcg_true, 5, 22, 1 };

/* p44 */
const P044_TM_TrainToTrack p44 = { kcg_false, 0, 0, 0, { 0 } };

/* m157 */
const M_157_T_TM_radio_messages m157 = { kcg_true, 157, 73, 2555, 272827,
  Q_STATUS_Valid };

/* TM_radio_messages::DEFAULT_M003 */
const M_003_T_TM_radio_messages DEFAULT_M003_TM_radio_messages = { kcg_false, 0,
  0, 0, M_ACK_No_acknowledgement_required, 0 };

/* TM_lib_internal::DEFAULT_M_TrainTrackMessage_buffer */
const M_TrainTrackMessage_buffer_t_TM_lib_internal DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal = {
  { { kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }, { { kcg_false, 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0 } }, { { kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }, { { kcg_false,
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0 } }, { { kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0 } } };

/* TM_lib_internal::EMPTY_TrainTrackMessage */
const M_TrainTrack_Message_T_TM_radio_messages EMPTY_TrainTrackMessage_TM_lib_internal = {
  { kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

/* TM_TrainToTrack::DEFAULT_P044_int */
const P044_TrainTrack_int_TM_TrainToTrack DEFAULT_P044_int_TM_TrainToTrack = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* TM_radio_messages::DEFAULT_TrainToTrackMessage */
const M_TrainTrack_Message_T_TM_radio_messages DEFAULT_TrainToTrackMessage_TM_radio_messages = {
  { kcg_false, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

/* TM_RBC_conversions_legacy::default_header */
const Radio_TrackTrain_Header_T_Radio_Types_Pkg default_header_TM_RBC_conversions_legacy = {
  0, 0, 0, 0, M_ACK_No_acknowledgement_required, 0, 0, 0, Q_SCALE_10_cm_scale,
  0, 0, 0, Q_DIR_Reverse, 0,
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS };

/* TM::DEFAULT_P015_OBU_section */
const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM = { kcg_false, 0,
  Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 };

/* TM::DEFAULT_P021_OBU_section */
const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM = { kcg_false, 0,
  Q_GDIR_downhill, 0 };

/* TM_lib_internal::DEFAULT_P041_OBU_section */
const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib_internal = {
  kcg_false, M_LEVELTR_Level_0, 0, 0 };

/* TM_lib_internal::DEFAULT_P005_OBU_section */
const P005_section_enum_T_TM DEFAULT_P005_OBU_section_TM_lib_internal = {
  kcg_false, 0,
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows, 0, 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
  Q_LINKREACTION_Train_trip, 0 };

/* TM_baseline2::DEFAULT_P027V1_section_enum */
const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027V1_section_enum_TM_baseline2 = {
  kcg_false, 0, 0,
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, 0, { {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 } } };

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff */
const P027V1_section_enum_qdiff_T_TM_baseline2 DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2 = {
  kcg_false, 0, 0 };

/* TM::DEFAULT_CompressedPackets */
const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_PHeader */
const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM = { 0,
  Q_DIR_Reverse, kcg_false, 0, 0 };

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2 = {
  kcg_false, 0 };

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

