/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* no_bus */
extern const M_TrainTrackMessageBus_t_TM_TrainTrack_Bus no_bus;

/* m_version */
#define m_version M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* p00 */
extern const P000_TM_TrainToTrack p00;

/* p01 */
extern const P001_TM_TrainToTrack p01;

/* p04 */
extern const P004_TM_TrainToTrack p04;

/* p05 */
extern const P005_TM_TrainToTrack p05;

/* p44 */
extern const P044_TM_TrainToTrack p44;

/* m157 */
extern const M_157_T_TM_radio_messages m157;

/* TM_radio_messages::DEFAULT_M003 */
extern const M_003_T_TM_radio_messages DEFAULT_M003_TM_radio_messages;

/* TM_radio_messages::nid_message_TrackTrain_003 */
#define nid_message_TrackTrain_003_TM_radio_messages 3

/* TM_lib_internal::DEFAULT_M_TrainTrackMessage_buffer */
extern const M_TrainTrackMessage_buffer_t_TM_lib_internal DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal;

/* TM_lib_internal::DIM_FIFO_demo */
#define DIM_FIFO_demo_TM_lib_internal 5

/* TM_lib_internal::EMPTY_TrainTrackMessage */
extern const M_TrainTrack_Message_T_TM_radio_messages EMPTY_TrainTrackMessage_TM_lib_internal;

/* TM_lib_internal::DIM_FIFO_TrainTrackMessage */
#define DIM_FIFO_TrainTrackMessage_TM_lib_internal 5

/* TM_TrainToTrack::DIM_max_elements_P009 */
#define DIM_max_elements_P009_TM_TrainToTrack 3

/* TM_conversions::ENUM_M_ERROR_balise_group_linking_conistency */
#define ENUM_M_ERROR_balise_group_linking_conistency_TM_conversions M_ERROR_Balise_group_linking_consistency_error

/* TM_conversions::ENUM_M_ERROR_Double_linking_error */
#define ENUM_M_ERROR_Double_linking_error_TM_conversions M_ERROR_Double_linking_error

/* TM_conversions::ENUM_M_ERROR_Double_repositioning_error */
#define ENUM_M_ERROR_Double_repositioning_error_TM_conversions M_ERROR_Double_repositioning_error

/* TM_conversions::ENUM_M_ERROR_Linked_balise_group_message_consistency_erro */
#define ENUM_M_ERROR_Linked_balise_group_message_consistency_erro_TM_conversions M_ERROR_Linked_balise_group_message_consistency_erro

/* TM_conversions::ENUM_M_ERROR_Radio_message_consistency_error */
#define ENUM_M_ERROR_Radio_message_consistency_error_TM_conversions M_ERROR_Radio_message_consistency_error

/* TM_conversions::ENUM_M_ERROR_Radio_safe_radio_connection_error */
#define ENUM_M_ERROR_Radio_safe_radio_connection_error_TM_conversions M_ERROR_Radio_safe_radio_connection_error

/* TM_conversions::ENUM_M_ERROR_Radio_sequence_error */
#define ENUM_M_ERROR_Radio_sequence_error_TM_conversions M_ERROR_Radio_sequence_error

/* TM_conversions::ENUM_M_ERROR_Safety_critical_failure */
#define ENUM_M_ERROR_Safety_critical_failure_TM_conversions M_ERROR_Safety_critical_failure

/* TM_conversions::ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions M_ERROR_Unlinked_balise_group_message_consistency_error

/* TM_conversions::INT_M_ERROR_Safety_critical_failure */
#define INT_M_ERROR_Safety_critical_failure_TM_conversions 6

/* TM_conversions::INT_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define INT_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions 2

/* TM_conversions::INT_M_ERROR_Radio_sequence_error */
#define INT_M_ERROR_Radio_sequence_error_TM_conversions 4

/* TM_conversions::INT_M_ERROR_Radio_safe_radio_connection_error */
#define INT_M_ERROR_Radio_safe_radio_connection_error_TM_conversions 5

/* TM_conversions::INT_M_ERROR_Radio_message_consistency_error */
#define INT_M_ERROR_Radio_message_consistency_error_TM_conversions 3

/* TM_conversions::INT_M_ERROR_Linked_balise_group_message_consistency_error */
#define INT_M_ERROR_Linked_balise_group_message_consistency_error_TM_conversions 1

/* TM_conversions::INT_M_ERROR_Double_repositioning_error */
#define INT_M_ERROR_Double_repositioning_error_TM_conversions 8

/* TM_conversions::INT_M_ERROR_Double_linking_error */
#define INT_M_ERROR_Double_linking_error_TM_conversions 7

/* TM_conversions::INT_M_ERROR_balise_group_linking_conistency */
#define INT_M_ERROR_balise_group_linking_conistency_TM_conversions 0

/* TM_TrainToTrack::DIM_max_elements_P004 */
#define DIM_max_elements_P004_TM_TrainToTrack 3

/* TM_TrainToTrack::DIM_max_elements_P005 */
#define DIM_max_elements_P005_TM_TrainToTrack 3

/* TM_TrainToTrack::DEFAULT_P044_int */
extern const P044_TrainTrack_int_TM_TrainToTrack DEFAULT_P044_int_TM_TrainToTrack;

/* TM_TrainToTrack::DIM_max_elements_P044 */
#define DIM_max_elements_P044_TM_TrainToTrack (11 + DIM_voltage_list_TM_TrainToTrack * 2 + 1 + DIM_nid_ntc_list_TM_TrainToTrack)

/* TM_TrainToTrack::DIM_voltage_list */
#define DIM_voltage_list_TM_TrainToTrack 4

/* TM_TrainToTrack::DIM_nid_ntc_list */
#define DIM_nid_ntc_list_TM_TrainToTrack 5

/* TM_TrainToTrack::DIM_max_elements_P000 */
#define DIM_max_elements_P000_TM_TrainToTrack 17

/* TM_conversions::ENUM_Q_DIRLRBG_nominal */
#define ENUM_Q_DIRLRBG_nominal_TM_conversions Q_DIRLRBG_Nominal

/* TM_conversions::ENUM_Q_DIRLRBG_reverse */
#define ENUM_Q_DIRLRBG_reverse_TM_conversions Q_DIRLRBG_Reverse

/* TM_conversions::ENUM_Q_DIRLRBG_unknown */
#define ENUM_Q_DIRLRBG_unknown_TM_conversions Q_DIRLRBG_Unknown

/* TM_conversions::INT_Q_DIRLRBG_unknown */
#define INT_Q_DIRLRBG_unknown_TM_conversions 2

/* TM_conversions::INT_Q_DIRLRBG_reverse */
#define INT_Q_DIRLRBG_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIRLRBG_nominal */
#define INT_Q_DIRLRBG_nominal_TM_conversions 1

/* TM_conversions::ENUM_Q_DLRBG_nominal */
#define ENUM_Q_DLRBG_nominal_TM_conversions Q_DLRBG_Nominal

/* TM_conversions::ENUM_Q_DLRBG_reverse */
#define ENUM_Q_DLRBG_reverse_TM_conversions Q_DLRBG_Reverse

/* TM_conversions::ENUM_Q_DLRBG_unknown */
#define ENUM_Q_DLRBG_unknown_TM_conversions Q_DLRBG_Unknown

/* TM_conversions::INT_Q_DLRBG_unknown */
#define INT_Q_DLRBG_unknown_TM_conversions 2

/* TM_conversions::INT_Q_DLRBG_reverse */
#define INT_Q_DLRBG_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DLRBG_nominal */
#define INT_Q_DLRBG_nominal_TM_conversions 1

/* TM_conversions::ENUM_Q_LENGTH_no_info_available */
#define ENUM_Q_LENGTH_no_info_available_TM_conversions Q_LENGTH_No_train_integrity_information_available

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_device */
#define ENUM_Q_LENGTH_confimed_by_device_TM_conversions Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_driver */
#define ENUM_Q_LENGTH_confimed_by_driver_TM_conversions Q_LENGTH_Train_integrity_confirmed_by_driver

/* TM_conversions::ENUM_Q_LENGTH_integrity_lost */
#define ENUM_Q_LENGTH_integrity_lost_TM_conversions Q_LENGTH_Train_integrity_lost

/* TM_conversions::INT_Q_LENGTH_integrity_lost */
#define INT_Q_LENGTH_integrity_lost_TM_conversions 3

/* TM_conversions::INT_Q_LENGTH_confimed_by_driver */
#define INT_Q_LENGTH_confimed_by_driver_TM_conversions 2

/* TM_conversions::INT_Q_LENGTH_confimed_by_device */
#define INT_Q_LENGTH_confimed_by_device_TM_conversions 1

/* TM_conversions::INT_Q_LENGTH_no_info_available */
#define INT_Q_LENGTH_no_info_available_TM_conversions 0

/* TM_conversions::DIM_L_TRAININT_min */
#define DIM_L_TRAININT_min_TM_conversions 0

/* TM_conversions::DIM_L_TRAININT_max */
#define DIM_L_TRAININT_max_TM_conversions 32767

/* TM_conversions::ENUM_Q_DIRTRAIN_nominal */
#define ENUM_Q_DIRTRAIN_nominal_TM_conversions Q_DIRTRAIN_Nominal

/* TM_conversions::ENUM_Q_DIRTRAIN_reverse */
#define ENUM_Q_DIRTRAIN_reverse_TM_conversions Q_DIRTRAIN_Reverse

/* TM_conversions::ENUM_Q_DIRTRAIN_unknown */
#define ENUM_Q_DIRTRAIN_unknown_TM_conversions Q_DIRTRAIN_Unknown

/* TM_conversions::INT_Q_DIRTRAIN_unknown */
#define INT_Q_DIRTRAIN_unknown_TM_conversions 2

/* TM_conversions::INT_Q_DIRTRAIN_reverse */
#define INT_Q_DIRTRAIN_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIRTRAIN_nominal */
#define INT_Q_DIRTRAIN_nominal_TM_conversions 1

/* TM_conversions::ENUM_M_MODE_Full_Supervision */
#define ENUM_M_MODE_Full_Supervision_TM_conversions M_MODE_Full_Supervision

/* TM_conversions::ENUM_M_MODE_Isolation */
#define ENUM_M_MODE_Isolation_TM_conversions M_MODE_Isolation

/* TM_conversions::ENUM_M_MODE_Limited_Supervision */
#define ENUM_M_MODE_Limited_Supervision_TM_conversions M_MODE_Limited_Supervision

/* TM_conversions::ENUM_M_MODE_National_System */
#define ENUM_M_MODE_National_System_TM_conversions M_MODE_National_System

/* TM_conversions::ENUM_M_MODE_Non_Leading */
#define ENUM_M_MODE_Non_Leading_TM_conversions M_MODE_Non_Leading

/* TM_conversions::ENUM_M_MODE_On_Sight */
#define ENUM_M_MODE_On_Sight_TM_conversions M_MODE_On_Sight

/* TM_conversions::ENUM_M_MODE_Passive_Shunting */
#define ENUM_M_MODE_Passive_Shunting_TM_conversions M_MODE_No_Power

/* TM_conversions::ENUM_M_MODE_Post_Trip */
#define ENUM_M_MODE_Post_Trip_TM_conversions M_MODE_Post_Trip

/* TM_conversions::ENUM_M_MODE_Reversing */
#define ENUM_M_MODE_Reversing_TM_conversions M_MODE_Reversing

/* TM_conversions::ENUM_M_MODE_Shunting */
#define ENUM_M_MODE_Shunting_TM_conversions M_MODE_Shunting

/* TM_conversions::ENUM_M_MODE_Sleeping */
#define ENUM_M_MODE_Sleeping_TM_conversions M_MODE_Sleeping

/* TM_conversions::ENUM_M_MODE_Staff_Responsible */
#define ENUM_M_MODE_Staff_Responsible_TM_conversions M_MODE_Staff_Responsible

/* TM_conversions::ENUM_M_MODE_Stand_By */
#define ENUM_M_MODE_Stand_By_TM_conversions M_MODE_Stand_By

/* TM_conversions::ENUM_M_MODE_System_Failure */
#define ENUM_M_MODE_System_Failure_TM_conversions M_MODE_System_Failure

/* TM_conversions::ENUM_M_MODE_Trip */
#define ENUM_M_MODE_Trip_TM_conversions M_MODE_Trip

/* TM_conversions::ENUM_M_MODE_Unfitted */
#define ENUM_M_MODE_Unfitted_TM_conversions M_MODE_Unfitted

/* TM_conversions::INT_M_MODE_System_Failure */
#define INT_M_MODE_System_Failure_TM_conversions 9

/* TM_conversions::INT_M_MODE_Unfitted */
#define INT_M_MODE_Unfitted_TM_conversions 4

/* TM_conversions::INT_M_MODE_Trip */
#define INT_M_MODE_Trip_TM_conversions 7

/* TM_conversions::INT_M_MODE_Stand_By */
#define INT_M_MODE_Stand_By_TM_conversions 6

/* TM_conversions::INT_M_MODE_Staff_Responsible */
#define INT_M_MODE_Staff_Responsible_TM_conversions 2

/* TM_conversions::INT_M_MODE_Sleeping */
#define INT_M_MODE_Sleeping_TM_conversions 5

/* TM_conversions::INT_M_MODE_Shunting */
#define INT_M_MODE_Shunting_TM_conversions 3

/* TM_conversions::INT_M_MODE_Reversing */
#define INT_M_MODE_Reversing_TM_conversions 14

/* TM_conversions::INT_M_MODE_Post_Trip */
#define INT_M_MODE_Post_Trip_TM_conversions 8

/* TM_conversions::INT_M_MODE_Passive_Shunting */
#define INT_M_MODE_Passive_Shunting_TM_conversions 15

/* TM_conversions::INT_M_MODE_On_Sight */
#define INT_M_MODE_On_Sight_TM_conversions 1

/* TM_conversions::INT_M_MODE_Non_Leading */
#define INT_M_MODE_Non_Leading_TM_conversions 11

/* TM_conversions::INT_M_MODE_National_System */
#define INT_M_MODE_National_System_TM_conversions 13

/* TM_conversions::INT_M_MODE_Limited_Supervision */
#define INT_M_MODE_Limited_Supervision_TM_conversions 12

/* TM_conversions::INT_M_MODE_Isolation */
#define INT_M_MODE_Isolation_TM_conversions 10

/* TM_conversions::INT_M_MODE_Full_Supervision */
#define INT_M_MODE_Full_Supervision_TM_conversions 0

/* TM_conversions::ENUM_M_LEVEL_Level_0 */
#define ENUM_M_LEVEL_Level_0_TM_conversions M_LEVEL_Level_0

/* TM_conversions::ENUM_M_LEVEL_Level_1 */
#define ENUM_M_LEVEL_Level_1_TM_conversions M_LEVEL_Level_1

/* TM_conversions::ENUM_M_LEVEL_Level_2 */
#define ENUM_M_LEVEL_Level_2_TM_conversions M_LEVEL_Level_2

/* TM_conversions::ENUM_M_LEVEL_Level_3 */
#define ENUM_M_LEVEL_Level_3_TM_conversions M_LEVEL_Level_3

/* TM_conversions::ENUM_M_LEVEL_Level_NTC */
#define ENUM_M_LEVEL_Level_NTC_TM_conversions M_LEVEL_Level_NTC_specified_by_NID_NTC

/* TM_conversions::INT_M_LEVEL_Level_NTC */
#define INT_M_LEVEL_Level_NTC_TM_conversions 1

/* TM_conversions::INT_M_LEVEL_Level_3 */
#define INT_M_LEVEL_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVEL_Level_2 */
#define INT_M_LEVEL_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVEL_Level_1 */
#define INT_M_LEVEL_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVEL_Level_0 */
#define INT_M_LEVEL_Level_0_TM_conversions 0

/* TM_TrainToTrack::DIM_max_elements_P001 */
#define DIM_max_elements_P001_TM_TrainToTrack 17

/* TM_radio_messages::nid_meta_p000 */
#define nid_meta_p000_TM_radio_messages 998

/* TM_TrainToTrack::INVALID_NID_PACKET */
#define INVALID_NID_PACKET_TM_TrainToTrack 999

/* TM_conversions::ENUM_Q_STATUS_valid */
#define ENUM_Q_STATUS_valid_TM_conversions Q_STATUS_Valid

/* TM_conversions::ENUM_Q_STATUS_invalid */
#define ENUM_Q_STATUS_invalid_TM_conversions Q_STATUS_Invalid

/* TM_conversions::ENUM_Q_STATUS_unknown */
#define ENUM_Q_STATUS_unknown_TM_conversions Q_STATUS_Unknown

/* TM_conversions::INT_Q_STATUS_invalid */
#define INT_Q_STATUS_invalid_TM_conversions 0

/* TM_conversions::INT_Q_STATUS_unknown */
#define INT_Q_STATUS_unknown_TM_conversions 2

/* TM_conversions::INT_Q_STATUS_valid */
#define INT_Q_STATUS_valid_TM_conversions 1

/* TM_radio_messages::DEFAULT_TrainToTrackMessage */
extern const M_TrainTrack_Message_T_TM_radio_messages DEFAULT_TrainToTrackMessage_TM_radio_messages;

/* TM_RBC_conversions_legacy::default_header */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg default_header_TM_RBC_conversions_legacy;

/* TM_RBC_conversions_legacy::default_t_sh_rqst */
#define default_t_sh_rqst_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_t_train_reference */
#define default_t_train_reference_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_nid_em */
#define default_nid_em_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_q_scale */
#define default_q_scale_TM_RBC_conversions_legacy Q_SCALE_1_m_scale

/* TM_RBC_conversions_legacy::default_d_sr */
#define default_d_sr_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_d_ref */
#define default_d_ref_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_q_dir */
#define default_q_dir_TM_RBC_conversions_legacy Q_DIR_Reverse

/* TM_RBC_conversions_legacy::default_d_emergencystop */
#define default_d_emergencystop_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_m_version */
#define default_m_version_TM_RBC_conversions_legacy M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_RBC_conversions_legacy::default_radioDevice */
#define default_radioDevice_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_receivedSystemTime */
#define default_receivedSystemTime_TM_RBC_conversions_legacy 0

/* TM_conversions::INT_Q_ORIENTATION_reverse */
#define INT_Q_ORIENTATION_reverse_TM_conversions 0

/* TM_conversions::INT_Q_ORIENTATION_nominal */
#define INT_Q_ORIENTATION_nominal_TM_conversions 1

/* TM_conversions::ENUM_Q_ORIENTATION_reverse */
#define ENUM_Q_ORIENTATION_reverse_TM_conversions Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction

/* TM_conversions::ENUM_Q_ORIENTATION_nominal */
#define ENUM_Q_ORIENTATION_nominal_TM_conversions Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction

/* TM_conversions::DIM_D_max_neg */
#define DIM_D_max_neg_TM_conversions (- 32768)

/* TM_conversions::INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M_TM_conversions 15

/* TM_conversions::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM_conversions 16

/* TM_conversions::INT_M_VERSION_1_1 */
#define INT_M_VERSION_1_1_TM_conversions 17

/* TM_conversions::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM_conversions 32

/* TM_conversions::ENUM_M_VERSION_Previous_versions */
#define ENUM_M_VERSION_Previous_versions_TM_conversions M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_conversions::ENUM_M_VERSION_Version_2_0 */
#define ENUM_M_VERSION_Version_2_0_TM_conversions M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_conversions M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_0 */
#define ENUM_M_VERSION_Version_1_0_TM_conversions M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* TM_conversions::INT_M_ACK_acknowledgement */
#define INT_M_ACK_acknowledgement_TM_conversions 1

/* TM_conversions::INT_M_ACK_no_acknowledgement */
#define INT_M_ACK_no_acknowledgement_TM_conversions 0

/* TM_conversions::ENUM_M_ACK_acknowledgement */
#define ENUM_M_ACK_acknowledgement_TM_conversions M_ACK_Acknowledgement_required

/* TM_conversions::ENUM_M_ACK_no_acknowledgement */
#define ENUM_M_ACK_no_acknowledgement_TM_conversions M_ACK_No_acknowledgement_required

/* TM_conversions::INT_Q_OVERLAP_overlap_info */
#define INT_Q_OVERLAP_overlap_info_TM_conversions 1

/* TM_conversions::INT_Q_OVERLAP_no_overlap_info */
#define INT_Q_OVERLAP_no_overlap_info_TM_conversions 0

/* TM_conversions::ENUM_Q_OVERLAP_overlap_info */
#define ENUM_Q_OVERLAP_overlap_info_TM_conversions Q_OVERLAP_Overlap_information_to_follow

/* TM_conversions::ENUM_Q_OVERLAP_no_overlap_info */
#define ENUM_Q_OVERLAP_no_overlap_info_TM_conversions Q_OVERLAP_No_overlap_information

/* TM_conversions::INT_Q_DANGERPOINT_no_dangerpoint_info */
#define INT_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions 0

/* TM_conversions::INT_Q_DANGERPOINT_dangerpoint_info */
#define INT_Q_DANGERPOINT_dangerpoint_info_TM_conversions 1

/* TM_conversions::ENUM_Q_DANGERPOINT_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions Q_DANGERPOINT_Danger_point_information_to_follow

/* TM_conversions::ENUM_Q_DANGERPOINT_no_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions Q_DANGERPOINT_No_danger_point_information

/* TM_conversions::INT_Q_ENDTIMER_no_endsection_timer_info */
#define INT_Q_ENDTIMER_no_endsection_timer_info_TM_conversions 0

/* TM_conversions::INT_Q_ENDTIMER_endsection_timer_info_follows */
#define INT_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions 1

/* TM_conversions::ENUM_Q_ENDTIMER_endsection_timer_info_follows */
#define ENUM_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions Q_ENDTIMER_End_section_timer_information_to_follow

/* TM_conversions::ENUM_Q_ENDTIMER_no_endsection_timer_info */
#define ENUM_Q_ENDTIMER_no_endsection_timer_info_TM_conversions Q_ENDTIMER_No_End_section_timer_information

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 6)

/* TM::DEFAULT_P015_OBU_section */
extern const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM;

/* TM_conversions::INT_Q_SECTIONTIMER_sectiontimer */
#define INT_Q_SECTIONTIMER_sectiontimer_TM_conversions 1

/* TM_conversions::INT_Q_SECTIONTIMER_no_sectiontimer */
#define INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions 0

/* TM_conversions::ENUM_Q_SECTIONTIMER_sectiontimer */
#define ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions Q_SECTIONTIMER_Section_Timer_information_to_follow

/* TM_conversions::ENUM_Q_SECTIONTIMER_no_sectiontimer */
#define ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions Q_SECTIONTIMER_No_Section_Timer_information

/* TM_lib_internal::DIM_P015_n_sections */
#define DIM_P015_n_sections_TM_lib_internal 4

/* TM::DIM_MaxElementsPacket021 */
#define DIM_MaxElementsPacket021_TM ((DIM_N_ITER_TM + 1) * 3 + 4 + 1)

/* TM::DEFAULT_P021_OBU_section */
extern const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM;

/* TM_conversions::DIM_G_max */
#define DIM_G_max_TM_conversions 255

/* TM_conversions::DIM_G_min */
#define DIM_G_min_TM_conversions 0

/* TM_conversions::INT_Q_GDIR_downhill */
#define INT_Q_GDIR_downhill_TM_conversions 0

/* TM_conversions::INT_Q_GDIR_uphill */
#define INT_Q_GDIR_uphill_TM_conversions 1

/* TM_conversions::ENUM_Q_GDIR_downhill */
#define ENUM_Q_GDIR_downhill_TM_conversions Q_GDIR_downhill

/* TM_conversions::ENUM_Q_GDIR_uphill */
#define ENUM_Q_GDIR_uphill_TM_conversions Q_GDIR_uphill

/* TM_lib_internal::DIM_P021_n_sections */
#define DIM_P021_n_sections_TM_lib_internal 3

/* TM::DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041_TM ((DIM_N_ITER_TM + 1) * 3 + 6)

/* TM_lib_internal::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib_internal;

/* TM_conversions::INT_M_LEVELTR_Level_0 */
#define INT_M_LEVELTR_Level_0_TM_conversions 0

/* TM_conversions::INT_M_LEVELTR_Level_1 */
#define INT_M_LEVELTR_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVELTR_Level_2 */
#define INT_M_LEVELTR_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVELTR_Level_3 */
#define INT_M_LEVELTR_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVELTR_Level_NTC */
#define INT_M_LEVELTR_Level_NTC_TM_conversions 1

/* TM_conversions::ENUM_M_LEVELTR_Level_NTC */
#define ENUM_M_LEVELTR_Level_NTC_TM_conversions M_LEVELTR_Level_NTC_specified_by_NID_NTC

/* TM_conversions::ENUM_M_LEVELTR_Level_3 */
#define ENUM_M_LEVELTR_Level_3_TM_conversions M_LEVELTR_Level_3

/* TM_conversions::ENUM_M_LEVELTR_Level_2 */
#define ENUM_M_LEVELTR_Level_2_TM_conversions M_LEVELTR_Level_2

/* TM_conversions::ENUM_M_LEVELTR_Level_1 */
#define ENUM_M_LEVELTR_Level_1_TM_conversions M_LEVELTR_Level_1

/* TM_conversions::ENUM_M_LEVELTR_Level_0 */
#define ENUM_M_LEVELTR_Level_0_TM_conversions M_LEVELTR_Level_0

/* TM_conversions::DIM_L_max */
#define DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define DIM_L_min_TM_conversions 0

/* TM_lib_internal::DIM_P041_n_sections */
#define DIM_P041_n_sections_TM_lib_internal 3

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

/* TM_lib_internal::DEFAULT_P005_OBU_section */
extern const P005_section_enum_T_TM DEFAULT_P005_OBU_section_TM_lib_internal;

/* TM_conversions::INT_Q_NEWCOUNTRY_same */
#define INT_Q_NEWCOUNTRY_same_TM_conversions 0

/* TM_conversions::INT_Q_NEWCOUNTRY_not_same */
#define INT_Q_NEWCOUNTRY_not_same_TM_conversions 1

/* TM_conversions::ENUM_Q_NEWCOUNTRY_not_same */
#define ENUM_Q_NEWCOUNTRY_not_same_TM_conversions Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows

/* TM_conversions::ENUM_Q_NEWCOUNTRY_same */
#define ENUM_Q_NEWCOUNTRY_same_TM_conversions Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows

/* TM_conversions::INT_Q_LINKREACTION_Train_trip */
#define INT_Q_LINKREACTION_Train_trip_TM_conversions 0

/* TM_conversions::INT_Q_LINKREACTION_Apply_servicebrake */
#define INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions 1

/* TM_conversions::INT_Q_LINKREACTION_No_Reaction */
#define INT_Q_LINKREACTION_No_Reaction_TM_conversions 2

/* TM_conversions::ENUM_Q_LINKREACTION_Train_trip */
#define ENUM_Q_LINKREACTION_Train_trip_TM_conversions Q_LINKREACTION_Train_trip

/* TM_conversions::ENUM_Q_LINKREACTION_No_Reaction */
#define ENUM_Q_LINKREACTION_No_Reaction_TM_conversions Q_LINKREACTION_No_Reaction

/* TM_conversions::ENUM_Q_LINKREACTION_Apply_servicebrake */
#define ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions Q_LINKREACTION_Apply_service_brake

/* TM_conversions::INT_Q_LINKORIENTATION_nominal */
#define INT_Q_LINKORIENTATION_nominal_TM_conversions 1

/* TM_conversions::INT_Q_LINKORIENTATION_reverse */
#define INT_Q_LINKORIENTATION_reverse_TM_conversions 0

/* TM_conversions::ENUM_Q_LINKORIENTATION_reverse */
#define ENUM_Q_LINKORIENTATION_reverse_TM_conversions Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction

/* TM_conversions::ENUM_Q_LINKORIENTATION_nominal */
#define ENUM_Q_LINKORIENTATION_nominal_TM_conversions Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction

/* TM_lib_internal::DIM_P005_n_sections */
#define DIM_P005_n_sections_TM_lib_internal 7

/* TM_baseline2::NID_META_P027V1_body */
#define NID_META_P027V1_body_TM_baseline2 27016000

/* TM_baseline2::DEFAULT_P027V1_section_enum */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027V1_section_enum_TM_baseline2;

/* TM_conversions::INT_Q_FRONT_train_length_delay */
#define INT_Q_FRONT_train_length_delay_TM_conversions 0

/* TM_conversions::INT_Q_FRONT_no_train_length_delay */
#define INT_Q_FRONT_no_train_length_delay_TM_conversions 1

/* TM_conversions::ENUM_Q_FRONT_train_length_delay */
#define ENUM_Q_FRONT_train_length_delay_TM_conversions Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element

/* TM_conversions::ENUM_Q_FRONT_no_train_length_delay */
#define ENUM_Q_FRONT_no_train_length_delay_TM_conversions Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element

/* TM::DIM_MaxElementsPacket027v1_section */
#define DIM_MaxElementsPacket027v1_section_TM (DIM_N_ITER_TM * 2 + 4)

/* TM_lib_internal::DIM_P027V1_n_sections_qdiff */
#define DIM_P027V1_n_sections_qdiff_TM_lib_internal 7

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff */
extern const P027V1_section_enum_qdiff_T_TM_baseline2 DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2;

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_internal 1

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

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

/* TM_conversions::INT_Q_NVSBTSMPERM_Yes */
#define INT_Q_NVSBTSMPERM_Yes_TM_conversions 1

/* TM_conversions::INT_Q_NVSBTSMPERM_No */
#define INT_Q_NVSBTSMPERM_No_TM_conversions 0

/* TM_conversions::ENUM_Q_NVSBTSMPERM_No */
#define ENUM_Q_NVSBTSMPERM_No_TM_conversions Q_NVSBTSMPERM_No

/* TM_conversions::ENUM_Q_NVSBTSMPERM_Yes */
#define ENUM_Q_NVSBTSMPERM_Yes_TM_conversions Q_NVSBTSMPERM_Yes

/* TM_conversions::INT_Q_NVEMRRLS_revoke_at_standstill */
#define INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions 0

/* TM_conversions::INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions 1

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_at_standstill */
#define ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded

/* TM_conversions::INT_M_NVCONTACT_Apply_service_brake */
#define INT_M_NVCONTACT_Apply_service_brake_TM_conversions 1

/* TM_conversions::INT_M_NVCONTACT_No_Reaction */
#define INT_M_NVCONTACT_No_Reaction_TM_conversions 2

/* TM_conversions::INT_M_NVCONTACT_Train_trip */
#define INT_M_NVCONTACT_Train_trip_TM_conversions 0

/* TM_conversions::ENUM_M_NVCONTACT_Train_trip */
#define ENUM_M_NVCONTACT_Train_trip_TM_conversions M_NVCONTACT_Train_trip

/* TM_conversions::ENUM_M_NVCONTACT_No_Reaction */
#define ENUM_M_NVCONTACT_No_Reaction_TM_conversions M_NVCONTACT_No_Reaction

/* TM_conversions::ENUM_M_NVCONTACT_Apply_service_brake */
#define ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions M_NVCONTACT_Apply_service_brake

/* TM_conversions::INT_M_NVDERUN_no */
#define INT_M_NVDERUN_no_TM_conversions 0

/* TM_conversions::INT_M_NVDERUN_yes */
#define INT_M_NVDERUN_yes_TM_conversions 1

/* TM_conversions::ENUM_M_NVDERUN_yes */
#define ENUM_M_NVDERUN_yes_TM_conversions M_NVDERUN_Yes

/* TM_conversions::ENUM_M_NVDERUN_no */
#define ENUM_M_NVDERUN_no_TM_conversions M_NVDERUN_No

/* TM_conversions::INT_Q_NVDRIVER_ADHES_Allowed */
#define INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions 1

/* TM_conversions::INT_Q_NVDRIVER_ADHES_NotAllowed */
#define INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions 0

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_NotAllowed */
#define ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions Q_NVDRIVER_ADHES_Not_allowed

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_Allowed */
#define ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions Q_NVDRIVER_ADHES_Allowed

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
extern const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2;

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_baseline2 (DIM_N_ITER_TM * 1 + 6 + 18)

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* TM_radio_messages::DIM_max_payload */
#define DIM_max_payload_TM_radio_messages 50

/* TM_TrainTrack_Bus::BusWidth */
#define BusWidth_TM_TrainTrack_Bus (CycleTime_TM_TrainTrack_Bus / Time_10ms_TM_TrainTrack_Bus)

/* TM_TrainTrack_Bus::Time_10ms */
#define Time_10ms_TM_TrainTrack_Bus 10

/* TM_TrainTrack_Bus::CycleTime */
#define CycleTime_TM_TrainTrack_Bus 50

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

