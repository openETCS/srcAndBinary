/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* no_message */
extern const M_TrackTrain_Radio_T_TM_radio_messages no_message;

/* no_packets */
extern const CompressedPackets_T_Common_Types_Pkg no_packets;

/* Packets426::LRBG354_P021_1 */
extern const P021_trackside_int_T_TM LRBG354_P021_1_Packets426;

/* Packets426::LRBG354_P027_1 */
extern const P027V1_trackside_int_T_TM_baseline2 LRBG354_P027_1_Packets426;

/* Packets426::LRBG354_P003_1 */
extern const P003V1_trackside_int_T_TM_baseline2 LRBG354_P003_1_Packets426;

/* Packets426::LRBG354_P005_1 */
extern const P005_trackside_int_T_TM LRBG354_P005_1_Packets426;

/* Packets426::LRBG354_P041_1 */
extern const P041_trackside_int_T_TM LRBG354_P041_1_Packets426;

/* Packets426::LRBG354_P065_1 */
extern const P065_trackside_int_T_TM LRBG354_P065_1_Packets426;

/* Packets426::LRBG354_P015_1 */
extern const P015_trackside_int_T_TM LRBG354_P015_1_Packets426;

/* TM::DIM_MaxElementsPacket021 */
#define DIM_MaxElementsPacket021_TM ((DIM_N_ITER_TM + 1) * 3 + 4 + 1)

/* TM::DEFAULT_P021_sections_array_flat */
extern const P021_sections_array_flat_T_TM DEFAULT_P021_sections_array_flat_TM;

/* TM::DIM_MaxElementsPacket027v1_body */
#define DIM_MaxElementsPacket027v1_body_TM 6

/* TM::DIM_MaxElementsPacket027v1_section */
#define DIM_MaxElementsPacket027v1_section_TM (DIM_N_ITER_TM * 2 + 4)

/* TM::ENUM_Q_DIR_both_QDIR */
#define ENUM_Q_DIR_both_QDIR_TM Q_DIR_Reverse

/* TM_baseline2::DEFAULT_P027V1_sections_array_qdiff_flat */
extern const P027V1_sections_array_flat_qdiff_T_TM_baseline2 DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2;

/* TM::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM 16

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_baseline2 (DIM_N_ITER_TM * 1 + 6 + 18)

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

/* TM::DEFAULT_P005_sections_array_flat */
extern const P005_sections_array_flat_T_TM DEFAULT_P005_sections_array_flat_TM;

/* TM::DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041_TM ((DIM_N_ITER_TM + 1) * 3 + 6)

/* TM::DEFAULT_P041_sections_array_flat */
extern const P041_sections_array_flat_T_TM DEFAULT_P041_sections_array_flat_TM;

/* TM::DIM_MaxElementsPacket065 */
#define DIM_MaxElementsPacket065_TM 9

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 6)

/* TM::DEFAULT_P015_sections_array_flat */
extern const P015_sections_array_flat_T_TM DEFAULT_P015_sections_array_flat_TM;

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* Messages_426::LRBG_354_D_00275_3_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_354_D_00275_3_M003_Messages_426;

/* Packets426::BGXXX_P255 */
extern const P255_trackside_int_T_TM BGXXX_P255_Packets426;

/* Packets426::BG352_P045 */
extern const P045_trackside_int_T_TM BG352_P045_Packets426;

/* TM::DIM_MaxElementsPacket255 */
#define DIM_MaxElementsPacket255_TM 1

/* TM::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM 2

/* TM_conversions::INT_Q_DIR_nomiinal */
#define INT_Q_DIR_nomiinal_TM_conversions 1

/* TM_conversions::INT_Q_DIR_reverse */
#define INT_Q_DIR_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM_conversions 2

/* TM_conversions::ENUM_Q_DIR_both */
#define ENUM_Q_DIR_both_TM_conversions Q_DIR_Both_directions

/* TM_conversions::ENUM_Q_DIR_reverse */
#define ENUM_Q_DIR_reverse_TM_conversions Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_nominal */
#define ENUM_Q_DIR_nominal_TM_conversions Q_DIR_Nominal

/* TM::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM 32

/* TM::DIM_MaxElementsPacket045 */
#define DIM_MaxElementsPacket045_TM 4

/* TM::ERROR_nid_packet */
#define ERROR_nid_packet_TM (- 1)

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_internal 1

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM::DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DIM_scale_eng_location */
#define DIM_scale_eng_location_TM 1.0

/* InfraLib::Half_Distance_Balises_in_BG */
#define Half_Distance_Balises_in_BG_InfraLib (Distance_Balises_in_BG_InfraLib / 2.0)

/* InfraLib::ReleaseDelta */
#define ReleaseDelta_InfraLib 1.5

/* InfraLib::Distance_Balises_in_BG */
#define Distance_Balises_in_BG_InfraLib 3.0

/* TM::DEFAULT_TM_BaliseHeaderInt */
extern const BaliseTelegramHeader_int_T_TM DEFAULT_TM_BaliseHeaderInt_TM;

/* TM::DEFAULT_Packets */
extern const CompressedPackets_T_Common_Types_Pkg DEFAULT_Packets_TM;

/* Balises426::BG352_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG352_header_B1_Balises426;

/* Balises426::BG352_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG352_header_B0_Balises426;

/* Balises426::BG352 */
extern const BaliseGroupData_Basics BG352_Balises426;

/* TM::DEFAULT_BTMMessage */
extern const CompressedBaliseMessage_TM DEFAULT_BTMMessage_TM;

/* TM_radio_messages_trackside::DEFAULT_P000 */
extern const P000_TM_TrainToTrack DEFAULT_P000_TM_radio_messages_trackside;

/* TM_radio_messages_trackside::DEFAULT_P001 */
extern const P001_TM_TrainToTrack DEFAULT_P001_TM_radio_messages_trackside;

/* TM_radio_messages::nid_meta_p000 */
#define nid_meta_p000_TM_radio_messages 998

/* TM_radio_messages::nid_meta_p001 */
#define nid_meta_p001_TM_radio_messages 1

/* TM_conversions::INT_Q_STATUS_valid */
#define INT_Q_STATUS_valid_TM_conversions 1

/* TM_conversions::INT_Q_STATUS_invalid */
#define INT_Q_STATUS_invalid_TM_conversions 0

/* TM_conversions::INT_Q_STATUS_unknown */
#define INT_Q_STATUS_unknown_TM_conversions 2

/* TM_conversions::ENUM_Q_STATUS_invalid */
#define ENUM_Q_STATUS_invalid_TM_conversions Q_STATUS_Invalid

/* TM_conversions::ENUM_Q_STATUS_unknown */
#define ENUM_Q_STATUS_unknown_TM_conversions Q_STATUS_Unknown

/* TM_conversions::ENUM_Q_STATUS_valid */
#define ENUM_Q_STATUS_valid_TM_conversions Q_STATUS_Valid

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_conversions M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_TrainToTrack::DIM_max_elements_P001 */
#define DIM_max_elements_P001_TM_TrainToTrack 17

/* TM_conversions::INT_Q_SCALE_10cm */
#define INT_Q_SCALE_10cm_TM_conversions 0

/* TM_conversions::INT_Q_SCALE_1m */
#define INT_Q_SCALE_1m_TM_conversions 1

/* TM_conversions::INT_Q_SCALE_10m */
#define INT_Q_SCALE_10m_TM_conversions 2

/* TM_conversions::ENUM_Q_SCALE_10cm */
#define ENUM_Q_SCALE_10cm_TM_conversions Q_SCALE_10_cm_scale

/* TM_conversions::ENUM_Q_SCALE_10m */
#define ENUM_Q_SCALE_10m_TM_conversions Q_SCALE_10_m_scale

/* TM_conversions::ENUM_Q_SCALE_1m */
#define ENUM_Q_SCALE_1m_TM_conversions Q_SCALE_1_m_scale

/* TM_conversions::INT_Q_DIRLRBG_nominal */
#define INT_Q_DIRLRBG_nominal_TM_conversions 1

/* TM_conversions::INT_Q_DIRLRBG_reverse */
#define INT_Q_DIRLRBG_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIRLRBG_unknown */
#define INT_Q_DIRLRBG_unknown_TM_conversions 2

/* TM_conversions::ENUM_Q_DIRLRBG_unknown */
#define ENUM_Q_DIRLRBG_unknown_TM_conversions Q_DIRLRBG_Unknown

/* TM_conversions::ENUM_Q_DIRLRBG_reverse */
#define ENUM_Q_DIRLRBG_reverse_TM_conversions Q_DIRLRBG_Reverse

/* TM_conversions::ENUM_Q_DIRLRBG_nominal */
#define ENUM_Q_DIRLRBG_nominal_TM_conversions Q_DIRLRBG_Nominal

/* TM_conversions::INT_Q_DLRBG_nominal */
#define INT_Q_DLRBG_nominal_TM_conversions 1

/* TM_conversions::INT_Q_DLRBG_reverse */
#define INT_Q_DLRBG_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DLRBG_unknown */
#define INT_Q_DLRBG_unknown_TM_conversions 2

/* TM_conversions::ENUM_Q_DLRBG_unknown */
#define ENUM_Q_DLRBG_unknown_TM_conversions Q_DLRBG_Unknown

/* TM_conversions::ENUM_Q_DLRBG_reverse */
#define ENUM_Q_DLRBG_reverse_TM_conversions Q_DLRBG_Reverse

/* TM_conversions::ENUM_Q_DLRBG_nominal */
#define ENUM_Q_DLRBG_nominal_TM_conversions Q_DLRBG_Nominal

/* TM_conversions::DIM_L_max */
#define DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define DIM_L_min_TM_conversions 0

/* TM_conversions::INT_Q_LENGTH_no_info_available */
#define INT_Q_LENGTH_no_info_available_TM_conversions 0

/* TM_conversions::INT_Q_LENGTH_confimed_by_device */
#define INT_Q_LENGTH_confimed_by_device_TM_conversions 1

/* TM_conversions::INT_Q_LENGTH_confimed_by_driver */
#define INT_Q_LENGTH_confimed_by_driver_TM_conversions 2

/* TM_conversions::INT_Q_LENGTH_integrity_lost */
#define INT_Q_LENGTH_integrity_lost_TM_conversions 3

/* TM_conversions::ENUM_Q_LENGTH_integrity_lost */
#define ENUM_Q_LENGTH_integrity_lost_TM_conversions Q_LENGTH_Train_integrity_lost

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_driver */
#define ENUM_Q_LENGTH_confimed_by_driver_TM_conversions Q_LENGTH_Train_integrity_confirmed_by_driver

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_device */
#define ENUM_Q_LENGTH_confimed_by_device_TM_conversions Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device

/* TM_conversions::ENUM_Q_LENGTH_no_info_available */
#define ENUM_Q_LENGTH_no_info_available_TM_conversions Q_LENGTH_No_train_integrity_information_available

/* TM_conversions::DIM_L_TRAININT_min */
#define DIM_L_TRAININT_min_TM_conversions 0

/* TM_conversions::DIM_L_TRAININT_max */
#define DIM_L_TRAININT_max_TM_conversions 32767

/* TM_conversions::INT_Q_DIRTRAIN_nominal */
#define INT_Q_DIRTRAIN_nominal_TM_conversions 1

/* TM_conversions::INT_Q_DIRTRAIN_reverse */
#define INT_Q_DIRTRAIN_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIRTRAIN_unknown */
#define INT_Q_DIRTRAIN_unknown_TM_conversions 2

/* TM_conversions::ENUM_Q_DIRTRAIN_unknown */
#define ENUM_Q_DIRTRAIN_unknown_TM_conversions Q_DIRTRAIN_Unknown

/* TM_conversions::ENUM_Q_DIRTRAIN_reverse */
#define ENUM_Q_DIRTRAIN_reverse_TM_conversions Q_DIRTRAIN_Reverse

/* TM_conversions::ENUM_Q_DIRTRAIN_nominal */
#define ENUM_Q_DIRTRAIN_nominal_TM_conversions Q_DIRTRAIN_Nominal

/* TM_conversions::INT_M_MODE_Full_Supervision */
#define INT_M_MODE_Full_Supervision_TM_conversions 0

/* TM_conversions::INT_M_MODE_Isolation */
#define INT_M_MODE_Isolation_TM_conversions 10

/* TM_conversions::INT_M_MODE_Limited_Supervision */
#define INT_M_MODE_Limited_Supervision_TM_conversions 12

/* TM_conversions::INT_M_MODE_National_System */
#define INT_M_MODE_National_System_TM_conversions 13

/* TM_conversions::INT_M_MODE_Non_Leading */
#define INT_M_MODE_Non_Leading_TM_conversions 11

/* TM_conversions::INT_M_MODE_On_Sight */
#define INT_M_MODE_On_Sight_TM_conversions 1

/* TM_conversions::INT_M_MODE_Passive_Shunting */
#define INT_M_MODE_Passive_Shunting_TM_conversions 15

/* TM_conversions::INT_M_MODE_Post_Trip */
#define INT_M_MODE_Post_Trip_TM_conversions 8

/* TM_conversions::INT_M_MODE_Reversing */
#define INT_M_MODE_Reversing_TM_conversions 14

/* TM_conversions::INT_M_MODE_Shunting */
#define INT_M_MODE_Shunting_TM_conversions 3

/* TM_conversions::INT_M_MODE_Sleeping */
#define INT_M_MODE_Sleeping_TM_conversions 5

/* TM_conversions::INT_M_MODE_Staff_Responsible */
#define INT_M_MODE_Staff_Responsible_TM_conversions 2

/* TM_conversions::INT_M_MODE_Stand_By */
#define INT_M_MODE_Stand_By_TM_conversions 6

/* TM_conversions::INT_M_MODE_System_Failure */
#define INT_M_MODE_System_Failure_TM_conversions 9

/* TM_conversions::INT_M_MODE_Trip */
#define INT_M_MODE_Trip_TM_conversions 7

/* TM_conversions::INT_M_MODE_Unfitted */
#define INT_M_MODE_Unfitted_TM_conversions 4

/* TM_conversions::ENUM_M_MODE_System_Failure */
#define ENUM_M_MODE_System_Failure_TM_conversions M_MODE_System_Failure

/* TM_conversions::ENUM_M_MODE_Unfitted */
#define ENUM_M_MODE_Unfitted_TM_conversions M_MODE_Unfitted

/* TM_conversions::ENUM_M_MODE_Trip */
#define ENUM_M_MODE_Trip_TM_conversions M_MODE_Trip

/* TM_conversions::ENUM_M_MODE_Stand_By */
#define ENUM_M_MODE_Stand_By_TM_conversions M_MODE_Stand_By

/* TM_conversions::ENUM_M_MODE_Staff_Responsible */
#define ENUM_M_MODE_Staff_Responsible_TM_conversions M_MODE_Staff_Responsible

/* TM_conversions::ENUM_M_MODE_Sleeping */
#define ENUM_M_MODE_Sleeping_TM_conversions M_MODE_Sleeping

/* TM_conversions::ENUM_M_MODE_Shunting */
#define ENUM_M_MODE_Shunting_TM_conversions M_MODE_Shunting

/* TM_conversions::ENUM_M_MODE_Reversing */
#define ENUM_M_MODE_Reversing_TM_conversions M_MODE_Reversing

/* TM_conversions::ENUM_M_MODE_Post_Trip */
#define ENUM_M_MODE_Post_Trip_TM_conversions M_MODE_Post_Trip

/* TM_conversions::ENUM_M_MODE_Passive_Shunting */
#define ENUM_M_MODE_Passive_Shunting_TM_conversions M_MODE_No_Power

/* TM_conversions::ENUM_M_MODE_On_Sight */
#define ENUM_M_MODE_On_Sight_TM_conversions M_MODE_On_Sight

/* TM_conversions::ENUM_M_MODE_Non_Leading */
#define ENUM_M_MODE_Non_Leading_TM_conversions M_MODE_Non_Leading

/* TM_conversions::ENUM_M_MODE_National_System */
#define ENUM_M_MODE_National_System_TM_conversions M_MODE_National_System

/* TM_conversions::ENUM_M_MODE_Limited_Supervision */
#define ENUM_M_MODE_Limited_Supervision_TM_conversions M_MODE_Limited_Supervision

/* TM_conversions::ENUM_M_MODE_Isolation */
#define ENUM_M_MODE_Isolation_TM_conversions M_MODE_Isolation

/* TM_conversions::ENUM_M_MODE_Full_Supervision */
#define ENUM_M_MODE_Full_Supervision_TM_conversions M_MODE_Full_Supervision

/* TM_conversions::INT_M_LEVEL_Level_0 */
#define INT_M_LEVEL_Level_0_TM_conversions 0

/* TM_conversions::INT_M_LEVEL_Level_1 */
#define INT_M_LEVEL_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVEL_Level_2 */
#define INT_M_LEVEL_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVEL_Level_3 */
#define INT_M_LEVEL_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVEL_Level_NTC */
#define INT_M_LEVEL_Level_NTC_TM_conversions 1

/* TM_conversions::ENUM_M_LEVEL_Level_NTC */
#define ENUM_M_LEVEL_Level_NTC_TM_conversions M_LEVEL_Level_NTC_specified_by_NID_NTC

/* TM_conversions::ENUM_M_LEVEL_Level_3 */
#define ENUM_M_LEVEL_Level_3_TM_conversions M_LEVEL_Level_3

/* TM_conversions::ENUM_M_LEVEL_Level_2 */
#define ENUM_M_LEVEL_Level_2_TM_conversions M_LEVEL_Level_2

/* TM_conversions::ENUM_M_LEVEL_Level_1 */
#define ENUM_M_LEVEL_Level_1_TM_conversions M_LEVEL_Level_1

/* TM_conversions::ENUM_M_LEVEL_Level_0 */
#define ENUM_M_LEVEL_Level_0_TM_conversions M_LEVEL_Level_0

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_TrainToTrack::DIM_max_elements_P000 */
#define DIM_max_elements_P000_TM_TrainToTrack 17

/* TM_conversions::INT_M_ERROR_balise_group_linking_conistency */
#define INT_M_ERROR_balise_group_linking_conistency_TM_conversions 0

/* TM_conversions::INT_M_ERROR_Double_linking_error */
#define INT_M_ERROR_Double_linking_error_TM_conversions 7

/* TM_conversions::INT_M_ERROR_Double_repositioning_error */
#define INT_M_ERROR_Double_repositioning_error_TM_conversions 8

/* TM_conversions::INT_M_ERROR_Linked_balise_group_message_consistency_error */
#define INT_M_ERROR_Linked_balise_group_message_consistency_error_TM_conversions 1

/* TM_conversions::INT_M_ERROR_Radio_message_consistency_error */
#define INT_M_ERROR_Radio_message_consistency_error_TM_conversions 3

/* TM_conversions::INT_M_ERROR_Radio_safe_radio_connection_error */
#define INT_M_ERROR_Radio_safe_radio_connection_error_TM_conversions 5

/* TM_conversions::INT_M_ERROR_Radio_sequence_error */
#define INT_M_ERROR_Radio_sequence_error_TM_conversions 4

/* TM_conversions::INT_M_ERROR_Safety_critical_failure */
#define INT_M_ERROR_Safety_critical_failure_TM_conversions 6

/* TM_conversions::INT_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define INT_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions 2

/* TM_conversions::ENUM_M_ERROR_Safety_critical_failure */
#define ENUM_M_ERROR_Safety_critical_failure_TM_conversions M_ERROR_Safety_critical_failure

/* TM_conversions::ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions M_ERROR_Unlinked_balise_group_message_consistency_error

/* TM_conversions::ENUM_M_ERROR_Radio_sequence_error */
#define ENUM_M_ERROR_Radio_sequence_error_TM_conversions M_ERROR_Radio_sequence_error

/* TM_conversions::ENUM_M_ERROR_Radio_safe_radio_connection_error */
#define ENUM_M_ERROR_Radio_safe_radio_connection_error_TM_conversions M_ERROR_Radio_safe_radio_connection_error

/* TM_conversions::ENUM_M_ERROR_Radio_message_consistency_error */
#define ENUM_M_ERROR_Radio_message_consistency_error_TM_conversions M_ERROR_Radio_message_consistency_error

/* TM_conversions::ENUM_M_ERROR_Linked_balise_group_message_consistency_erro */
#define ENUM_M_ERROR_Linked_balise_group_message_consistency_erro_TM_conversions M_ERROR_Linked_balise_group_message_consistency_erro

/* TM_conversions::ENUM_M_ERROR_Double_repositioning_error */
#define ENUM_M_ERROR_Double_repositioning_error_TM_conversions M_ERROR_Double_repositioning_error

/* TM_conversions::ENUM_M_ERROR_Double_linking_error */
#define ENUM_M_ERROR_Double_linking_error_TM_conversions M_ERROR_Double_linking_error

/* TM_conversions::ENUM_M_ERROR_balise_group_linking_conistency */
#define ENUM_M_ERROR_balise_group_linking_conistency_TM_conversions M_ERROR_Balise_group_linking_consistency_error

/* TM_TrainToTrack::DIM_max_elements_P004 */
#define DIM_max_elements_P004_TM_TrainToTrack 3

/* TM_TrainToTrack::DIM_max_elements_P005 */
#define DIM_max_elements_P005_TM_TrainToTrack 3

/* TM_TrainToTrack::INVALID_VARIABLE */
#define INVALID_VARIABLE_TM_TrainToTrack 0

/* TM_TrainToTrack::DEFAULT_P044 */
extern const P044_TM_TrainToTrack DEFAULT_P044_TM_TrainToTrack;

/* TM_TrainToTrack::DIM_max_elements_P044 */
#define DIM_max_elements_P044_TM_TrainToTrack (11 + DIM_voltage_list_TM_TrainToTrack * 2 + 1 + DIM_nid_ntc_list_TM_TrainToTrack)

/* TM_TrainToTrack::DIM_voltage_list */
#define DIM_voltage_list_TM_TrainToTrack 4

/* TM_TrainToTrack::DIM_nid_ntc_list */
#define DIM_nid_ntc_list_TM_TrainToTrack 5

/* TM_radio_messages::DIM_max_payload */
#define DIM_max_payload_TM_radio_messages 50

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

