/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:07
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* Q_ORIENTATION */
typedef enum {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
/* TM::OrBG */
typedef enum { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum { N_TM, Z_TM } OrLine_TM;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* N_PIG */
typedef enum {
  N_PIG_I_am_the_1st = 0,
  N_PIG_I_am_the_2nd = 1,
  N_PIG_I_am_the_3rd = 2,
  N_PIG_I_am_the_4th = 3,
  N_PIG_I_am_the_5th = 4,
  N_PIG_I_am_the_6th = 5,
  N_PIG_I_am_the_7th = 6,
  N_PIG_I_am_the_8th = 7
} N_PIG;
/* N_TOTAL */
typedef enum {
  N_TOTAL_1_balise_in_the_group = 0,
  N_TOTAL_2_balises_in_the_group = 1,
  N_TOTAL_3_balises_in_the_group = 2,
  N_TOTAL_4_balises_in_the_group = 3,
  N_TOTAL_5_balises_in_the_group = 4,
  N_TOTAL_6_balises_in_the_group = 5,
  N_TOTAL_7_balises_in_the_group = 6,
  N_TOTAL_8_balises_in_the_group = 7
} N_TOTAL;
/* M_DUP */
typedef enum {
  M_DUP_No_duplicates = 0,
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* M_ERROR */
typedef enum {
  M_ERROR_Balise_group_linking_consistency_error = 0,
  M_ERROR_Linked_balise_group_message_consistency_erro = 1,
  M_ERROR_Unlinked_balise_group_message_consistency_error = 2,
  M_ERROR_Radio_message_consistency_error = 3,
  M_ERROR_Radio_sequence_error = 4,
  M_ERROR_Radio_safe_radio_connection_error = 5,
  M_ERROR_Safety_critical_failure = 6,
  M_ERROR_Double_linking_error = 7,
  M_ERROR_Double_repositioning_error = 8
} M_ERROR;
/* Q_MARQSTREASON */
typedef enum {
  Q_MARQSTREASON_Start_selected_by_driver = 1,
  Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached = 2,
  Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached = 4,
  Q_MARQSTREASON_Track_description_deleted = 8,
  Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location = 16
} Q_MARQSTREASON;
/* Q_EMERGENCYSTOP */
typedef enum {
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* M_LOC */
typedef enum {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_balise_group = 1,
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2
} M_LOC;
/* Q_LGTLOC */
typedef enum {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* NC_CDTRAIN */
typedef enum {
  NC_CDTRAIN_Cant_Deficiency_80_mm = 0,
  NC_CDTRAIN_Cant_Deficiency_100_mm = 1,
  NC_CDTRAIN_Cant_Deficiency_130_mm = 2,
  NC_CDTRAIN_Cant_Deficiency_150_mm = 3,
  NC_CDTRAIN_Cant_Deficiency_165_mm = 4,
  NC_CDTRAIN_Cant_Deficiency_180_mm = 5,
  NC_CDTRAIN_Cant_Deficiency_210_mm = 6,
  NC_CDTRAIN_Cant_Deficiency_225_mm = 7,
  NC_CDTRAIN_Cant_Deficiency_245_mm = 8,
  NC_CDTRAIN_Cant_Deficiency_275_mm = 9,
  NC_CDTRAIN_Cant_Deficiency_300_mm = 10
} NC_CDTRAIN;
/* NC_TRAIN */
typedef enum {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_LOADINGGAUGE */
typedef enum {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
/* M_AXLELOADCAT */
typedef enum {
  M_AXLELOADCAT_A = 0,
  M_AXLELOADCAT_HS17 = 1,
  M_AXLELOADCAT_B1 = 2,
  M_AXLELOADCAT_B2 = 3,
  M_AXLELOADCAT_C2 = 4,
  M_AXLELOADCAT_C3 = 5,
  M_AXLELOADCAT_C4 = 6,
  M_AXLELOADCAT_D2 = 7,
  M_AXLELOADCAT_D3 = 8,
  M_AXLELOADCAT_D4 = 9,
  M_AXLELOADCAT_D4XL = 10,
  M_AXLELOADCAT_E4 = 11,
  M_AXLELOADCAT_E5 = 12
} M_AXLELOADCAT;
/* M_AIRTIGHT */
typedef enum { M_AIRTIGHT_Not_fitted = 0, M_AIRTIGHT_Fitted = 1 } M_AIRTIGHT;
/* M_VOLTAGE */
typedef enum {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_DIRLRBG */
typedef enum {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DLRBG */
typedef enum {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LENGTH */
typedef enum {
  Q_LENGTH_No_train_integrity_information_available = 0,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
/* Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* M_MODE */
typedef enum {
  M_MODE_Full_Supervision = 0,
  M_MODE_On_Sight = 1,
  M_MODE_Staff_Responsible = 2,
  M_MODE_Shunting = 3,
  M_MODE_Unfitted = 4,
  M_MODE_Sleeping = 5,
  M_MODE_Stand_By = 6,
  M_MODE_Trip = 7,
  M_MODE_Post_Trip = 8,
  M_MODE_System_Failure = 9,
  M_MODE_Isolation = 10,
  M_MODE_Non_Leading = 11,
  M_MODE_Limited_Supervision = 12,
  M_MODE_National_System = 13,
  M_MODE_Reversing = 14,
  M_MODE_Passive_Shunting = 15,
  M_MODE_No_Power = 16
} M_MODE;
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* RBC_Diagnostic_Pkg::DiagMsgType_E */
typedef enum {
  DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_information_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_warning_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_error_RBC_Diagnostic_Pkg
} DiagMsgType_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgSrc_E */
typedef enum {
  DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_SRC_Process_Unconditional_Emergency_Message_RBC_Diagnostic_Pkg
} DiagMsgSrc_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgText_E */
typedef enum {
  DIAG_MSG_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_Failure_during_session_establishment_RBC_Diagnostic_Pkg
} DiagMsgText_E_RBC_Diagnostic_Pkg;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum {
  SSM_TR_no_trans_POSITION_REPORT_SM,
  SSM_TR_IDLE_1_POSITION_REPORT_SM,
  SSM_TR_PROCESS_POSITION_REPORT_1_POSITION_REPORT_SM,
  SSM_TR_PROCESS_POSITION_REPORT_2_POSITION_REPORT_SM
} SSM_TR_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum {
  SSM_st_IDLE_POSITION_REPORT_SM,
  SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM
} SSM_ST_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
typedef enum {
  SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM,
  SSM_TR_IDLE_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_IDLE_2_MOVEMENT_AUTHORITY_SM,
  SSM_TR_SEND_MA_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_SEND_MA_2_MOVEMENT_AUTHORITY_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_5_MOVEMENT_AUTHORITY_SM,
  SSM_TR_AWAIT_MA_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_UPDATE_POSITION_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_UPDATE_POSITION_2_MOVEMENT_AUTHORITY_SM
} SSM_TR_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
typedef enum {
  SSM_st_IDLE_MOVEMENT_AUTHORITY_SM,
  SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM
} SSM_ST_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
typedef enum {
  SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_IDLE_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_2_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_CONDITIONAL_EMERGENCY_STOP_SM
} SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
typedef enum {
  SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
typedef enum {
  SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_IDLE_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_2_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_UNCONDITIONAL_EMERGENCY_STOP_SM
} SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
typedef enum {
  SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
typedef enum {
  SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_IDLE_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM
} SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
typedef enum {
  SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM
} SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
typedef enum {
  SSM_TR_no_trans_GENERAL_MESSAGE_SM,
  SSM_TR_IDLE_1_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_1_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_2_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_3_GENERAL_MESSAGE_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_GENERAL_MESSAGE_SM
} SSM_TR_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
typedef enum {
  SSM_st_IDLE_GENERAL_MESSAGE_SM,
  SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM
} SSM_ST_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
typedef enum {
  SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM,
  SSM_TR_IDLE_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_MODE_TRIP_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_MODE_POST_TRIP_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_TRIP_AND_POST_TRIP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRIP_AND_POST_TRIP_SM,
  SSM_TR_SEND_MSG_06_1_TRIP_AND_POST_TRIP_SM
} SSM_TR_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
typedef enum {
  SSM_st_IDLE_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
  SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM
} SSM_ST_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
typedef enum {
  SSM_TR_no_trans_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATED_1_CONTROLLER_SM,
  SSM_TR_SEND_RBC_VERSION_1_CONTROLLER_SM,
  SSM_TR_SEND_RBC_VERSION_2_CONTROLLER_SM,
  SSM_TR_AWAIT_SESSION_ESTABLISHED_REPORT_1_CONTROLLER_SM,
  SSM_TR_SESSION_ESTABLISHED_1_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATION_REQUEST_1_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATION_REQUEST_2_CONTROLLER_SM
} SSM_TR_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
typedef enum {
  SSM_st_SESSION_TERMINATED_CONTROLLER_SM,
  SSM_st_SEND_RBC_VERSION_CONTROLLER_SM,
  SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM,
  SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM
} SSM_ST_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
typedef enum {
  SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_2_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_RECEIVE_AND_TRIGGER_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_START_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_START_2_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_AWAIT_VALIDATED_TRAIN_DATA_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_RBC_REQUEST_SESSION_TERMINATION_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED
} SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
typedef enum {
  SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM
} SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum {
  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA,
  SSM_TR_START_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA
} SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM,
  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_VALIDATED_TRAIN_DATA_SM
} SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum {
  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
  SSM_TR_START_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
  SSM_TR_AWAIT_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS
} SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM,
  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM,
  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_POS_REP_PARAMS_SM
} SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
/* NID_C */
typedef kcg_int NID_C;

/* V_NVSHUNT */
typedef kcg_int V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int V_NVSTFF;

/* V_NVONSIGHT */
typedef kcg_int V_NVONSIGHT;

/* V_NVUNFIT */
typedef kcg_int V_NVUNFIT;

/* V_NVREL */
typedef kcg_int V_NVREL;

/* T_NVCONTACT */
typedef kcg_int T_NVCONTACT;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* N_ITER */
typedef kcg_int N_ITER;

/* D_LOC */
typedef kcg_int D_LOC;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_BG */
typedef kcg_int NID_BG;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* L_TRAIN */
typedef kcg_int L_TRAIN;

/* V_MAXTRAIN */
typedef kcg_int V_MAXTRAIN;

/* N_AXLE */
typedef kcg_int N_AXLE;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* D_LRBG */
typedef kcg_int D_LRBG;

/* L_DOUBTOVER */
typedef kcg_int L_DOUBTOVER;

/* L_DOUBTUNDER */
typedef kcg_int L_DOUBTUNDER;

/* L_TRAININT */
typedef kcg_int L_TRAININT;

/* V_TRAIN */
typedef kcg_int V_TRAIN;

/* NID_PRVLRBG */
typedef kcg_int NID_PRVLRBG;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__47096;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__47096 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__47104[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__47104 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__47107;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__47107 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_reference;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_sr;
  kcg_int t_sh_rqst;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
  kcg_int m_version;
} struct__47112;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__47112 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__47130;

/* TM::CompressedRadioMessage */
typedef struct__47130 CompressedRadioMessage_TM;

typedef struct {
  kcg_bool m_IsValid;
  CompressedRadioMessage_TM m_Entry;
} struct__47135;

/* RadioTrackTrainMessageQueueEntry_T */
typedef struct__47135 RadioTrackTrainMessageQueueEntry_T;

typedef RadioTrackTrainMessageQueueEntry_T array__47140[8];

/* RadioTrackTrainMessageQueueEntries_T */
typedef array__47140 RadioTrackTrainMessageQueueEntries_T;

typedef struct {
  RadioTrackTrainMessageQueueEntries_T m_Entries;
} struct__47143;

/* RadioTrackTrainMessageQueue_T */
typedef struct__47143 RadioTrackTrainMessageQueue_T;

typedef struct {
  kcg_bool valid;
  kcg_int count;
  T_TRAIN timestamp;
  DiagMsgType_E_RBC_Diagnostic_Pkg diagType;
  DiagMsgSrc_E_RBC_Diagnostic_Pkg diagSrc;
  DiagMsgText_E_RBC_Diagnostic_Pkg diagText;
} struct__47147;

/* RBC_Diagnostic_Pkg::DiagMsg_T */
typedef struct__47147 DiagMsg_T_RBC_Diagnostic_Pkg;

typedef struct { T_TRAIN m_Value; } struct__47156;

/* Clock_T */
typedef struct__47156 Clock_T;

typedef struct {
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
  NID_PRVLRBG nid_prvlrbg;
} struct__47160;

/* PosData_T */
typedef struct__47160 PosData_T;

typedef kcg_int array_int_5[5];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_5 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_ntc_list */
typedef array_int_5 P011_ntc_list_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list_array_T */
typedef array_int_5 P011_ntc_list_array_T_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_t */
typedef array_int_5 P003_nid_radio_list_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_int_t */
typedef array_int_5 P003_nid_radio_list_int_t_TM_TrainToTrack;

typedef struct { M_VOLTAGE m_voltage; kcg_int nid_ctraction; } struct__47181;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__47181 sTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage */
typedef struct__47181 P011_voltage_TM_TrainToTrack;

typedef struct__47181 array__47186[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__47186 aTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage_list */
typedef array__47186 P011_voltage_list_TM_TrainToTrack;

typedef BCD_T_Obu_BasicTypes_Pkg array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__47192;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__47192 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__47197[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__47197 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  NID_ENGINE nid_engine;
  kcg_int m_NumberOfOnboardPhoneNumbers;
  aNID_RADIO_T_Packet_TrainTypes_Pkg m_OnboardPhoneNumbers;
  T_TRAIN t_train_ref;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_TRAIN l_train;
  V_MAXTRAIN v_maxtrain;
  M_LOADINGGAUGE m_loadinggauge;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  aTractionIdentity_T_Packet_TrainTypes_Pkg m_TractionIdentities;
  aNID_NTC_T_Packet_TrainTypes_Pkg m_NationalSystemIdentities;
  NID_OPERATIONAL nid_operational;
} struct__47200;

/* TrainData_T */
typedef struct__47200 TrainData_T;

typedef struct { TrainData_T m_TrainData; PosData_T m_PosData; } struct__47218;

/* SessionManagement_T */
typedef struct__47218 SessionManagement_T;

typedef struct { D_LOC d_loc; Q_LGTLOC q_lgtloc; } struct__47223;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct__47223 IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__47228[32];

typedef struct {
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER m_NumberOfIncrementalDistancesAndQualifiers;
  array__47228 m_IncrementalDistancesAndQualifiers;
} struct__47231;

/* PosRepParams_T */
typedef struct__47231 PosRepParams_T;

typedef struct {
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__47241;

/* MAReqParams_T */
typedef struct__47241 MAReqParams_T;

typedef struct {
  NID_C nid_c;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  T_NVCONTACT t_nvcontact;
} struct__47248;

/* NationalParams_T */
typedef struct__47248 NationalParams_T;

typedef struct {
  M_VERSION m_version;
  NationalParams_T m_NationalParams;
  MAReqParams_T m_MAReqParams;
  PosRepParams_T m_PosRepParams;
} struct__47258;

/* DynamicConfig_T */
typedef struct__47258 DynamicConfig_T;

typedef DiagMsg_T_RBC_Diagnostic_Pkg array__47265[16];

typedef struct {
  SessionManagement_T session;
  DynamicConfig_T config;
  array__47265 diagnostic;
  RadioTrackTrainMessageQueue_T messageQueue;
  Clock_T clockk;
  CompressedRadioMessage_TM lastSentTrackTrainMessage;
} struct__47268;

/* RBC_DataBus_Pkg::RBC_Data_T */
typedef struct__47268 RBC_Data_T_RBC_DataBus_Pkg;

typedef struct {
  kcg_bool present;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  T_TRAIN xT_TRAIN;
  NID_EM xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  NID_TEXTMESSAGE xNID_TEXTMESSAGE;
} struct__47277;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__47277 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxtrain;
  M_LOADINGGAUGE m_loadinggoage;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  kcg_int nIter_tractionIdentity;
  aTractionIdentity_T_Packet_TrainTypes_Pkg tractionIdentity;
  kcg_int nIter_ntc;
  aNID_NTC_T_Packet_TrainTypes_Pkg nid_ntc;
} struct__47289;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__47289 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} struct__47305;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__47305 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__47310;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__47310 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR m_error; } struct__47315;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__47315 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__47320;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__47320 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  Q_SCALE qscale;
  kcg_int NID_LRBG;
  kcg_int NID_PRVLRBG;
  kcg_int D_LRBG;
  Q_DIRLRBG dirlrbg;
  Q_DLRBG dlrbg;
  kcg_int L_DOUBTOVER;
  kcg_int L_DOUBTUNDER;
  Q_LENGTH length;
  kcg_int L_TRAININT;
  kcg_int V_TRAIN;
  Q_DIRTRAIN dirtrain;
  M_MODE mode;
  M_LEVEL level;
  kcg_int NID_NTC;
} struct__47326;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__47326 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__47346;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__47346 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  Q_SCALE qscale;
  kcg_int NID_LRBG;
  kcg_int D_LRBG;
  Q_DIRLRBG dirlrbg;
  Q_DLRBG dlrbg;
  kcg_int L_DOUBTOVER;
  kcg_int L_DOUBTUNDER;
  Q_LENGTH length;
  kcg_int L_TRAININT;
  kcg_int V_TRAIN;
  Q_DIRTRAIN dirtrain;
  M_MODE mode;
  M_LEVEL level;
  kcg_int NID_NTC;
} struct__47351;

/* TrainToTrack::Position_Report */
typedef struct__47351 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__47370;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__47370 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__47375;

/* Common_Types_Pkg::outPackets_T */
typedef struct__47375 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__47385;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__47385 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef kcg_int array_int_8[8];

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t */
typedef array_int_8 P011_voltage_sections_array_flat_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_TrainTrack_int */
typedef array_int_8 P003_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM_TrainToTrack::P009_TrainTrack_int */
typedef array_int_3 P009_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::Array03 */
typedef array_int_3 Array03_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainToTrack nid_radio;
} struct__47397;

/* TM_TrainToTrack::P003 */
typedef struct__47397 P003_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} struct__47405;

/* TM_TrainToTrack::P005 */
typedef struct__47405 P005_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} struct__47412;

/* TM_TrainToTrack::P004 */
typedef struct__47412 P004_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} struct__47419;

/* TM_TrainToTrack::P009 */
typedef struct__47419 P009_TM_TrainToTrack;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P011_TrainTrack_int */
typedef array_int_25 P011_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_11[11];

/* TM_TrainToTrack::Array11 */
typedef array_int_11 Array11_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_TRAIN l_train;
  V_MAXTRAIN v_maxtrain;
  M_LOADINGGAUGE m_loadinggauge;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  N_ITER n_iter_voltage;
  P011_voltage_list_TM_TrainToTrack voltage_list;
  N_ITER n_iter_nid_ntc;
  P011_ntc_list_TM_TrainToTrack nid_ntc_list;
} struct__47432;

/* TM_TrainToTrack::P011 */
typedef struct__47432 P011_TM_TrainToTrack;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} struct__47453;

/* TM_TrainToTrack::P000 */
typedef struct__47453 P000_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  NID_PRVLRBG nid_prvlrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} struct__47473;

/* TM_TrainToTrack::P001 */
typedef struct__47473 P001_TM_TrainToTrack;

typedef kcg_int array_int_50[50];

/* TM_radio_messages::M_TrainTrack_compressed_packets_T */
typedef array_int_50 M_TrainTrack_compressed_packets_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
} struct__47497;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct__47497 M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} struct__47508;

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct__47508 M_TrainTrack_Message_T_TM_radio_messages;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef array_int_32 P003V1_trackide_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int N_ITER;
  P003V1_trackide_sectionlist_T_TM_baseline2 SECTIONS;
  kcg_int V_NVSHUNT;
  kcg_int V_NVSTFF;
  kcg_int V_NVONSIGHT;
  kcg_int V_NVUNFIT;
  kcg_int V_NVREL;
  kcg_int D_NVROLL;
  kcg_int Q_NVSRBKTRG;
  kcg_int Q_NVEMRRLS;
  kcg_int V_NVALLOWOVTRP;
  kcg_int V_NVSUPOVTRP;
  kcg_int D_NVOVTRP;
  kcg_int T_NVOVTRP;
  kcg_int D_NVPOTRP;
  kcg_int M_NVCONTACT;
  kcg_int T_NVCONTACT;
  kcg_int M_NVDERUN;
  kcg_int D_NVSTFF;
  kcg_int Q_NVDRIVER_ADHES;
} struct__47516;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__47516 P003V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__47548;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__47548 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__47553[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__47553 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__47553 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__47556;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__47556 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__47570[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__47570 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__47573[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__47573 P027V1_trackside_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} struct__47576;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__47576 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} struct__47591;

/* TM::P042_trackside_int_T */
typedef struct__47591 P042_trackside_int_T_TM;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__47606;

/* TM::P015_section_int_T */
typedef struct__47606 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__47619[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__47619 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__47619 P015_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  P015_trackide_sectionlist_T_TM SECTIONS;
  kcg_int L_ENDSECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
  kcg_int Q_ENDTIMER;
  kcg_int T_ENDTIMER;
  kcg_int D_ENDTIMERSTARTLOC;
  kcg_int Q_DANGERPOINT;
  kcg_int D_DP;
  kcg_int V_RELEASEDP;
  kcg_int Q_OVERLAP;
  kcg_int D_STARTOL;
  kcg_int T_OL;
  kcg_int D_OL;
  kcg_int V_RELEASEOL;
} struct__47622;

/* TM::P015_trackside_int_T */
typedef struct__47622 P015_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__47652;

/* TM::P005_section_int_T */
typedef struct__47652 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__47668[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__47668 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__47671[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__47671 P005_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
  kcg_int N_ITER;
  P005_trackide_sectionlist_T_TM SECTIONS;
} struct__47674;

/* TM::P005_trackside_int_T */
typedef struct__47674 P005_trackside_int_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__47691;

/* TM::P021_section_int_T */
typedef struct__47691 P021_section_int_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P021_section_int_T_TM array__47703[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__47703 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__47706[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__47706 P021_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  kcg_int N_ITER;
  P021_trackide_sectionlist_T_TM SECTIONS;
} struct__47709;

/* TM::P021_trackside_int_T */
typedef struct__47709 P021_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__47722;

/* TM::P057_trackside_int_T */
typedef struct__47722 P057_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__47732;

/* TM::P058_section_int_T */
typedef struct__47732 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__47737[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__47737 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__47737 P058_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int T_CYCLOC;
  kcg_int D_CYCLOC;
  kcg_int M_LOC;
  kcg_int N_ITER;
  P058_trackide_sectionlist_T_TM SECTIONS;
} struct__47740;

/* TM::P058_trackside_int_T */
typedef struct__47740 P058_trackside_int_T_TM;

typedef struct {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
} struct__47753;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__47753 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  kcg_int radioDevice;
  T_internal_Type_Obu_BasicTypes_Pkg receivedSystemTime;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_reference;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_SR d_sr;
  T_TRAIN t_sh_rqst;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
  M_VERSION m_version;
} struct__47766;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__47766 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrackTrain_Header_T */
typedef struct__47766 Radio_TrackTrain_Header_T_TM_transitional;

typedef struct {
  kcg_int q_updown;
  kcg_int m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} struct__47784;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__47784 BaliseTelegramHeader_int_T_TM;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__47797;

/* InfraLib::TrainPosRaw_T */
typedef struct__47797 TrainPosRaw_T_InfraLib;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__47803;

/* TM::CompressedBaliseMessage */
typedef struct__47803 CompressedBaliseMessage_TM;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__47808;

/* InfraLib::TrackSectionData_T */
typedef struct__47808 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__47813;

/* TM::BaliseGroupData */
typedef struct__47813 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__47813 BaliseGroupData_Basics;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__47821;

/* InfraLib::B_data_internal_T */
typedef struct__47821 B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__47830;

/* TM::P255_trackside_int_T */
typedef struct__47830 P255_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__47835;

/* TM::P041_section_int_T */
typedef struct__47835 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__47841[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__47841 P041_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  kcg_int N_ITER;
  P041_trackide_sectionlist_T_TM SECTIONS;
} struct__47844;

/* TM::P041_trackside_int_T */
typedef struct__47844 P041_trackside_int_T_TM;

typedef P041_section_int_T_TM array__47858[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__47858 P041_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__47861;

/* TM::P137_trackside_int_T */
typedef struct__47861 P137_trackside_int_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__47869;

/* TM::P046_section_int_T */
typedef struct__47869 P046_section_int_T_TM;

typedef P046_section_int_T_TM array__47874[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__47874 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__47877;

/* TM::P046_trackside_int_T */
typedef struct__47877 P046_trackside_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__47894[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__47894 P046_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__47897;

/* TM::P045_trackside_int_T */
typedef struct__47897 P045_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__47905;

/* TM_radio_messages::M_027_T */
typedef struct__47905 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__47905 M_028_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__47915;

/* TM_radio_messages::M_032_T */
typedef struct__47915 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__47925;

/* TM_radio_messages::M_033_T */
typedef struct__47925 M_033_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_TAFDISPLAY d_tafdisplay;
  L_TAFDISPLAY l_tafdisplay;
} struct__47936;

/* TM_radio_messages::M_034_T */
typedef struct__47936 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__47950;

/* TM_radio_messages::M_024_T */
typedef struct__47950 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__47950 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__47950 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__47950 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__47950 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__47950 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__47950 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__47950 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__47950 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__47959;

/* TM_radio_messages::M_045_T */
typedef struct__47959 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__47969;

/* TM_radio_messages::M_002_T */
typedef struct__47969 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__47980;

/* TM_radio_messages::M_008_T */
typedef struct__47980 M_008_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
} struct__47990;

/* TM_radio_messages::M_015_T */
typedef struct__47990 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__48004;

/* TM_radio_messages::M_018_T */
typedef struct__48004 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__48004 M_016_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
  kcg_int field4;
  kcg_int field5;
  kcg_int field6;
  kcg_int field7;
  kcg_int field8;
} struct__48014;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__48014 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__48029;

/* InfraLib::R_data_internal_T */
typedef struct__48029 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
} struct__48036;

/* TM_radio_messages::M_015_int_T */
typedef struct__48036 M_015_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__48050;

/* TM_radio_messages::M_024_int_T */
typedef struct__48050 M_024_int_T_TM_radio_messages;

/* TM_radio_messages::M_003_int_T */
typedef struct__48050 M_003_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} struct__48059;

/* TM::P065_trackside_int_T */
typedef struct__48059 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} struct__48072;

/* TM_radio_messages::M_008_int_T */
typedef struct__48072 M_008_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} struct__48082;

/* TM_radio_messages::M_032_int_T */
typedef struct__48082 M_032_int_T_TM_radio_messages;

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_430[430];

typedef RadioTrackTrainMessageQueueEntry_T array__51418[7];

#ifndef kcg_copy_struct__47096
#define kcg_copy_struct__47096(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47096)))
#endif /* kcg_copy_struct__47096 */

#ifndef kcg_copy_struct__47107
#define kcg_copy_struct__47107(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47107)))
#endif /* kcg_copy_struct__47107 */

#ifndef kcg_copy_struct__47112
#define kcg_copy_struct__47112(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47112)))
#endif /* kcg_copy_struct__47112 */

#ifndef kcg_copy_struct__47130
#define kcg_copy_struct__47130(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47130)))
#endif /* kcg_copy_struct__47130 */

#ifndef kcg_copy_struct__47135
#define kcg_copy_struct__47135(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47135)))
#endif /* kcg_copy_struct__47135 */

#ifndef kcg_copy_struct__47143
#define kcg_copy_struct__47143(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47143)))
#endif /* kcg_copy_struct__47143 */

#ifndef kcg_copy_struct__47147
#define kcg_copy_struct__47147(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47147)))
#endif /* kcg_copy_struct__47147 */

#ifndef kcg_copy_struct__47156
#define kcg_copy_struct__47156(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47156)))
#endif /* kcg_copy_struct__47156 */

#ifndef kcg_copy_struct__47160
#define kcg_copy_struct__47160(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47160)))
#endif /* kcg_copy_struct__47160 */

#ifndef kcg_copy_struct__47181
#define kcg_copy_struct__47181(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47181)))
#endif /* kcg_copy_struct__47181 */

#ifndef kcg_copy_struct__47192
#define kcg_copy_struct__47192(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47192)))
#endif /* kcg_copy_struct__47192 */

#ifndef kcg_copy_struct__47200
#define kcg_copy_struct__47200(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47200)))
#endif /* kcg_copy_struct__47200 */

#ifndef kcg_copy_struct__47218
#define kcg_copy_struct__47218(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47218)))
#endif /* kcg_copy_struct__47218 */

#ifndef kcg_copy_struct__47223
#define kcg_copy_struct__47223(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47223)))
#endif /* kcg_copy_struct__47223 */

#ifndef kcg_copy_struct__47231
#define kcg_copy_struct__47231(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47231)))
#endif /* kcg_copy_struct__47231 */

#ifndef kcg_copy_struct__47241
#define kcg_copy_struct__47241(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47241)))
#endif /* kcg_copy_struct__47241 */

#ifndef kcg_copy_struct__47248
#define kcg_copy_struct__47248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47248)))
#endif /* kcg_copy_struct__47248 */

#ifndef kcg_copy_struct__47258
#define kcg_copy_struct__47258(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47258)))
#endif /* kcg_copy_struct__47258 */

#ifndef kcg_copy_struct__47268
#define kcg_copy_struct__47268(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47268)))
#endif /* kcg_copy_struct__47268 */

#ifndef kcg_copy_struct__47277
#define kcg_copy_struct__47277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47277)))
#endif /* kcg_copy_struct__47277 */

#ifndef kcg_copy_struct__47289
#define kcg_copy_struct__47289(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47289)))
#endif /* kcg_copy_struct__47289 */

#ifndef kcg_copy_struct__47305
#define kcg_copy_struct__47305(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47305)))
#endif /* kcg_copy_struct__47305 */

#ifndef kcg_copy_struct__47310
#define kcg_copy_struct__47310(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47310)))
#endif /* kcg_copy_struct__47310 */

#ifndef kcg_copy_struct__47315
#define kcg_copy_struct__47315(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47315)))
#endif /* kcg_copy_struct__47315 */

#ifndef kcg_copy_struct__47320
#define kcg_copy_struct__47320(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47320)))
#endif /* kcg_copy_struct__47320 */

#ifndef kcg_copy_struct__47326
#define kcg_copy_struct__47326(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47326)))
#endif /* kcg_copy_struct__47326 */

#ifndef kcg_copy_struct__47346
#define kcg_copy_struct__47346(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47346)))
#endif /* kcg_copy_struct__47346 */

#ifndef kcg_copy_struct__47351
#define kcg_copy_struct__47351(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47351)))
#endif /* kcg_copy_struct__47351 */

#ifndef kcg_copy_struct__47370
#define kcg_copy_struct__47370(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47370)))
#endif /* kcg_copy_struct__47370 */

#ifndef kcg_copy_struct__47375
#define kcg_copy_struct__47375(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47375)))
#endif /* kcg_copy_struct__47375 */

#ifndef kcg_copy_struct__47385
#define kcg_copy_struct__47385(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47385)))
#endif /* kcg_copy_struct__47385 */

#ifndef kcg_copy_struct__47397
#define kcg_copy_struct__47397(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47397)))
#endif /* kcg_copy_struct__47397 */

#ifndef kcg_copy_struct__47405
#define kcg_copy_struct__47405(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47405)))
#endif /* kcg_copy_struct__47405 */

#ifndef kcg_copy_struct__47412
#define kcg_copy_struct__47412(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47412)))
#endif /* kcg_copy_struct__47412 */

#ifndef kcg_copy_struct__47419
#define kcg_copy_struct__47419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47419)))
#endif /* kcg_copy_struct__47419 */

#ifndef kcg_copy_struct__47432
#define kcg_copy_struct__47432(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47432)))
#endif /* kcg_copy_struct__47432 */

#ifndef kcg_copy_struct__47453
#define kcg_copy_struct__47453(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47453)))
#endif /* kcg_copy_struct__47453 */

#ifndef kcg_copy_struct__47473
#define kcg_copy_struct__47473(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47473)))
#endif /* kcg_copy_struct__47473 */

#ifndef kcg_copy_struct__47497
#define kcg_copy_struct__47497(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47497)))
#endif /* kcg_copy_struct__47497 */

#ifndef kcg_copy_struct__47508
#define kcg_copy_struct__47508(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47508)))
#endif /* kcg_copy_struct__47508 */

#ifndef kcg_copy_struct__47516
#define kcg_copy_struct__47516(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47516)))
#endif /* kcg_copy_struct__47516 */

#ifndef kcg_copy_struct__47548
#define kcg_copy_struct__47548(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47548)))
#endif /* kcg_copy_struct__47548 */

#ifndef kcg_copy_struct__47556
#define kcg_copy_struct__47556(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47556)))
#endif /* kcg_copy_struct__47556 */

#ifndef kcg_copy_struct__47576
#define kcg_copy_struct__47576(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47576)))
#endif /* kcg_copy_struct__47576 */

#ifndef kcg_copy_struct__47591
#define kcg_copy_struct__47591(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47591)))
#endif /* kcg_copy_struct__47591 */

#ifndef kcg_copy_struct__47606
#define kcg_copy_struct__47606(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47606)))
#endif /* kcg_copy_struct__47606 */

#ifndef kcg_copy_struct__47622
#define kcg_copy_struct__47622(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47622)))
#endif /* kcg_copy_struct__47622 */

#ifndef kcg_copy_struct__47652
#define kcg_copy_struct__47652(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47652)))
#endif /* kcg_copy_struct__47652 */

#ifndef kcg_copy_struct__47674
#define kcg_copy_struct__47674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47674)))
#endif /* kcg_copy_struct__47674 */

#ifndef kcg_copy_struct__47691
#define kcg_copy_struct__47691(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47691)))
#endif /* kcg_copy_struct__47691 */

#ifndef kcg_copy_struct__47709
#define kcg_copy_struct__47709(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47709)))
#endif /* kcg_copy_struct__47709 */

#ifndef kcg_copy_struct__47722
#define kcg_copy_struct__47722(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47722)))
#endif /* kcg_copy_struct__47722 */

#ifndef kcg_copy_struct__47732
#define kcg_copy_struct__47732(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47732)))
#endif /* kcg_copy_struct__47732 */

#ifndef kcg_copy_struct__47740
#define kcg_copy_struct__47740(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47740)))
#endif /* kcg_copy_struct__47740 */

#ifndef kcg_copy_struct__47753
#define kcg_copy_struct__47753(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47753)))
#endif /* kcg_copy_struct__47753 */

#ifndef kcg_copy_struct__47766
#define kcg_copy_struct__47766(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47766)))
#endif /* kcg_copy_struct__47766 */

#ifndef kcg_copy_struct__47784
#define kcg_copy_struct__47784(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47784)))
#endif /* kcg_copy_struct__47784 */

#ifndef kcg_copy_struct__47797
#define kcg_copy_struct__47797(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47797)))
#endif /* kcg_copy_struct__47797 */

#ifndef kcg_copy_struct__47803
#define kcg_copy_struct__47803(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47803)))
#endif /* kcg_copy_struct__47803 */

#ifndef kcg_copy_struct__47808
#define kcg_copy_struct__47808(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47808)))
#endif /* kcg_copy_struct__47808 */

#ifndef kcg_copy_struct__47813
#define kcg_copy_struct__47813(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47813)))
#endif /* kcg_copy_struct__47813 */

#ifndef kcg_copy_struct__47821
#define kcg_copy_struct__47821(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47821)))
#endif /* kcg_copy_struct__47821 */

#ifndef kcg_copy_struct__47830
#define kcg_copy_struct__47830(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47830)))
#endif /* kcg_copy_struct__47830 */

#ifndef kcg_copy_struct__47835
#define kcg_copy_struct__47835(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47835)))
#endif /* kcg_copy_struct__47835 */

#ifndef kcg_copy_struct__47844
#define kcg_copy_struct__47844(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47844)))
#endif /* kcg_copy_struct__47844 */

#ifndef kcg_copy_struct__47861
#define kcg_copy_struct__47861(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47861)))
#endif /* kcg_copy_struct__47861 */

#ifndef kcg_copy_struct__47869
#define kcg_copy_struct__47869(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47869)))
#endif /* kcg_copy_struct__47869 */

#ifndef kcg_copy_struct__47877
#define kcg_copy_struct__47877(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47877)))
#endif /* kcg_copy_struct__47877 */

#ifndef kcg_copy_struct__47897
#define kcg_copy_struct__47897(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47897)))
#endif /* kcg_copy_struct__47897 */

#ifndef kcg_copy_struct__47905
#define kcg_copy_struct__47905(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47905)))
#endif /* kcg_copy_struct__47905 */

#ifndef kcg_copy_struct__47915
#define kcg_copy_struct__47915(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47915)))
#endif /* kcg_copy_struct__47915 */

#ifndef kcg_copy_struct__47925
#define kcg_copy_struct__47925(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47925)))
#endif /* kcg_copy_struct__47925 */

#ifndef kcg_copy_struct__47936
#define kcg_copy_struct__47936(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47936)))
#endif /* kcg_copy_struct__47936 */

#ifndef kcg_copy_struct__47950
#define kcg_copy_struct__47950(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47950)))
#endif /* kcg_copy_struct__47950 */

#ifndef kcg_copy_struct__47959
#define kcg_copy_struct__47959(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47959)))
#endif /* kcg_copy_struct__47959 */

#ifndef kcg_copy_struct__47969
#define kcg_copy_struct__47969(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47969)))
#endif /* kcg_copy_struct__47969 */

#ifndef kcg_copy_struct__47980
#define kcg_copy_struct__47980(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47980)))
#endif /* kcg_copy_struct__47980 */

#ifndef kcg_copy_struct__47990
#define kcg_copy_struct__47990(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__47990)))
#endif /* kcg_copy_struct__47990 */

#ifndef kcg_copy_struct__48004
#define kcg_copy_struct__48004(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48004)))
#endif /* kcg_copy_struct__48004 */

#ifndef kcg_copy_struct__48014
#define kcg_copy_struct__48014(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48014)))
#endif /* kcg_copy_struct__48014 */

#ifndef kcg_copy_struct__48029
#define kcg_copy_struct__48029(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48029)))
#endif /* kcg_copy_struct__48029 */

#ifndef kcg_copy_struct__48036
#define kcg_copy_struct__48036(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48036)))
#endif /* kcg_copy_struct__48036 */

#ifndef kcg_copy_struct__48050
#define kcg_copy_struct__48050(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48050)))
#endif /* kcg_copy_struct__48050 */

#ifndef kcg_copy_struct__48059
#define kcg_copy_struct__48059(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48059)))
#endif /* kcg_copy_struct__48059 */

#ifndef kcg_copy_struct__48072
#define kcg_copy_struct__48072(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48072)))
#endif /* kcg_copy_struct__48072 */

#ifndef kcg_copy_struct__48082
#define kcg_copy_struct__48082(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__48082)))
#endif /* kcg_copy_struct__48082 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__47104
#define kcg_copy_array__47104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47104)))
#endif /* kcg_copy_array__47104 */

#ifndef kcg_copy_array__47140
#define kcg_copy_array__47140(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47140)))
#endif /* kcg_copy_array__47140 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__47186
#define kcg_copy_array__47186(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47186)))
#endif /* kcg_copy_array__47186 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__47197
#define kcg_copy_array__47197(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47197)))
#endif /* kcg_copy_array__47197 */

#ifndef kcg_copy_array__47228
#define kcg_copy_array__47228(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47228)))
#endif /* kcg_copy_array__47228 */

#ifndef kcg_copy_array__47265
#define kcg_copy_array__47265(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47265)))
#endif /* kcg_copy_array__47265 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__47553
#define kcg_copy_array__47553(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47553)))
#endif /* kcg_copy_array__47553 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__47570
#define kcg_copy_array__47570(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47570)))
#endif /* kcg_copy_array__47570 */

#ifndef kcg_copy_array__47573
#define kcg_copy_array__47573(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47573)))
#endif /* kcg_copy_array__47573 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__47619
#define kcg_copy_array__47619(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47619)))
#endif /* kcg_copy_array__47619 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__47668
#define kcg_copy_array__47668(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47668)))
#endif /* kcg_copy_array__47668 */

#ifndef kcg_copy_array__47671
#define kcg_copy_array__47671(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47671)))
#endif /* kcg_copy_array__47671 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__47703
#define kcg_copy_array__47703(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47703)))
#endif /* kcg_copy_array__47703 */

#ifndef kcg_copy_array__47706
#define kcg_copy_array__47706(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47706)))
#endif /* kcg_copy_array__47706 */

#ifndef kcg_copy_array__47737
#define kcg_copy_array__47737(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47737)))
#endif /* kcg_copy_array__47737 */

#ifndef kcg_copy_array__47841
#define kcg_copy_array__47841(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47841)))
#endif /* kcg_copy_array__47841 */

#ifndef kcg_copy_array__47858
#define kcg_copy_array__47858(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47858)))
#endif /* kcg_copy_array__47858 */

#ifndef kcg_copy_array__47874
#define kcg_copy_array__47874(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47874)))
#endif /* kcg_copy_array__47874 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__47894
#define kcg_copy_array__47894(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__47894)))
#endif /* kcg_copy_array__47894 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array__51418
#define kcg_copy_array__51418(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__51418)))
#endif /* kcg_copy_array__51418 */

#ifndef kcg_comp_struct__47096
extern kcg_bool kcg_comp_struct__47096(
  struct__47096 *kcg_c1,
  struct__47096 *kcg_c2);
#endif /* kcg_comp_struct__47096 */

#ifndef kcg_comp_struct__47107
extern kcg_bool kcg_comp_struct__47107(
  struct__47107 *kcg_c1,
  struct__47107 *kcg_c2);
#endif /* kcg_comp_struct__47107 */

#ifndef kcg_comp_struct__47112
extern kcg_bool kcg_comp_struct__47112(
  struct__47112 *kcg_c1,
  struct__47112 *kcg_c2);
#endif /* kcg_comp_struct__47112 */

#ifndef kcg_comp_struct__47130
extern kcg_bool kcg_comp_struct__47130(
  struct__47130 *kcg_c1,
  struct__47130 *kcg_c2);
#endif /* kcg_comp_struct__47130 */

#ifndef kcg_comp_struct__47135
extern kcg_bool kcg_comp_struct__47135(
  struct__47135 *kcg_c1,
  struct__47135 *kcg_c2);
#endif /* kcg_comp_struct__47135 */

#ifndef kcg_comp_struct__47143
extern kcg_bool kcg_comp_struct__47143(
  struct__47143 *kcg_c1,
  struct__47143 *kcg_c2);
#endif /* kcg_comp_struct__47143 */

#ifndef kcg_comp_struct__47147
extern kcg_bool kcg_comp_struct__47147(
  struct__47147 *kcg_c1,
  struct__47147 *kcg_c2);
#endif /* kcg_comp_struct__47147 */

#ifndef kcg_comp_struct__47156
extern kcg_bool kcg_comp_struct__47156(
  struct__47156 *kcg_c1,
  struct__47156 *kcg_c2);
#endif /* kcg_comp_struct__47156 */

#ifndef kcg_comp_struct__47160
extern kcg_bool kcg_comp_struct__47160(
  struct__47160 *kcg_c1,
  struct__47160 *kcg_c2);
#endif /* kcg_comp_struct__47160 */

#ifndef kcg_comp_struct__47181
extern kcg_bool kcg_comp_struct__47181(
  struct__47181 *kcg_c1,
  struct__47181 *kcg_c2);
#endif /* kcg_comp_struct__47181 */

#ifndef kcg_comp_struct__47192
extern kcg_bool kcg_comp_struct__47192(
  struct__47192 *kcg_c1,
  struct__47192 *kcg_c2);
#endif /* kcg_comp_struct__47192 */

#ifndef kcg_comp_struct__47200
extern kcg_bool kcg_comp_struct__47200(
  struct__47200 *kcg_c1,
  struct__47200 *kcg_c2);
#endif /* kcg_comp_struct__47200 */

#ifndef kcg_comp_struct__47218
extern kcg_bool kcg_comp_struct__47218(
  struct__47218 *kcg_c1,
  struct__47218 *kcg_c2);
#endif /* kcg_comp_struct__47218 */

#ifndef kcg_comp_struct__47223
extern kcg_bool kcg_comp_struct__47223(
  struct__47223 *kcg_c1,
  struct__47223 *kcg_c2);
#endif /* kcg_comp_struct__47223 */

#ifndef kcg_comp_struct__47231
extern kcg_bool kcg_comp_struct__47231(
  struct__47231 *kcg_c1,
  struct__47231 *kcg_c2);
#endif /* kcg_comp_struct__47231 */

#ifndef kcg_comp_struct__47241
extern kcg_bool kcg_comp_struct__47241(
  struct__47241 *kcg_c1,
  struct__47241 *kcg_c2);
#endif /* kcg_comp_struct__47241 */

#ifndef kcg_comp_struct__47248
extern kcg_bool kcg_comp_struct__47248(
  struct__47248 *kcg_c1,
  struct__47248 *kcg_c2);
#endif /* kcg_comp_struct__47248 */

#ifndef kcg_comp_struct__47258
extern kcg_bool kcg_comp_struct__47258(
  struct__47258 *kcg_c1,
  struct__47258 *kcg_c2);
#endif /* kcg_comp_struct__47258 */

#ifndef kcg_comp_struct__47268
extern kcg_bool kcg_comp_struct__47268(
  struct__47268 *kcg_c1,
  struct__47268 *kcg_c2);
#endif /* kcg_comp_struct__47268 */

#ifndef kcg_comp_struct__47277
extern kcg_bool kcg_comp_struct__47277(
  struct__47277 *kcg_c1,
  struct__47277 *kcg_c2);
#endif /* kcg_comp_struct__47277 */

#ifndef kcg_comp_struct__47289
extern kcg_bool kcg_comp_struct__47289(
  struct__47289 *kcg_c1,
  struct__47289 *kcg_c2);
#endif /* kcg_comp_struct__47289 */

#ifndef kcg_comp_struct__47305
extern kcg_bool kcg_comp_struct__47305(
  struct__47305 *kcg_c1,
  struct__47305 *kcg_c2);
#endif /* kcg_comp_struct__47305 */

#ifndef kcg_comp_struct__47310
extern kcg_bool kcg_comp_struct__47310(
  struct__47310 *kcg_c1,
  struct__47310 *kcg_c2);
#endif /* kcg_comp_struct__47310 */

#ifndef kcg_comp_struct__47315
extern kcg_bool kcg_comp_struct__47315(
  struct__47315 *kcg_c1,
  struct__47315 *kcg_c2);
#endif /* kcg_comp_struct__47315 */

#ifndef kcg_comp_struct__47320
extern kcg_bool kcg_comp_struct__47320(
  struct__47320 *kcg_c1,
  struct__47320 *kcg_c2);
#endif /* kcg_comp_struct__47320 */

#ifndef kcg_comp_struct__47326
extern kcg_bool kcg_comp_struct__47326(
  struct__47326 *kcg_c1,
  struct__47326 *kcg_c2);
#endif /* kcg_comp_struct__47326 */

#ifndef kcg_comp_struct__47346
extern kcg_bool kcg_comp_struct__47346(
  struct__47346 *kcg_c1,
  struct__47346 *kcg_c2);
#endif /* kcg_comp_struct__47346 */

#ifndef kcg_comp_struct__47351
extern kcg_bool kcg_comp_struct__47351(
  struct__47351 *kcg_c1,
  struct__47351 *kcg_c2);
#endif /* kcg_comp_struct__47351 */

#ifndef kcg_comp_struct__47370
extern kcg_bool kcg_comp_struct__47370(
  struct__47370 *kcg_c1,
  struct__47370 *kcg_c2);
#endif /* kcg_comp_struct__47370 */

#ifndef kcg_comp_struct__47375
extern kcg_bool kcg_comp_struct__47375(
  struct__47375 *kcg_c1,
  struct__47375 *kcg_c2);
#endif /* kcg_comp_struct__47375 */

#ifndef kcg_comp_struct__47385
extern kcg_bool kcg_comp_struct__47385(
  struct__47385 *kcg_c1,
  struct__47385 *kcg_c2);
#endif /* kcg_comp_struct__47385 */

#ifndef kcg_comp_struct__47397
extern kcg_bool kcg_comp_struct__47397(
  struct__47397 *kcg_c1,
  struct__47397 *kcg_c2);
#endif /* kcg_comp_struct__47397 */

#ifndef kcg_comp_struct__47405
extern kcg_bool kcg_comp_struct__47405(
  struct__47405 *kcg_c1,
  struct__47405 *kcg_c2);
#endif /* kcg_comp_struct__47405 */

#ifndef kcg_comp_struct__47412
extern kcg_bool kcg_comp_struct__47412(
  struct__47412 *kcg_c1,
  struct__47412 *kcg_c2);
#endif /* kcg_comp_struct__47412 */

#ifndef kcg_comp_struct__47419
extern kcg_bool kcg_comp_struct__47419(
  struct__47419 *kcg_c1,
  struct__47419 *kcg_c2);
#endif /* kcg_comp_struct__47419 */

#ifndef kcg_comp_struct__47432
extern kcg_bool kcg_comp_struct__47432(
  struct__47432 *kcg_c1,
  struct__47432 *kcg_c2);
#endif /* kcg_comp_struct__47432 */

#ifndef kcg_comp_struct__47453
extern kcg_bool kcg_comp_struct__47453(
  struct__47453 *kcg_c1,
  struct__47453 *kcg_c2);
#endif /* kcg_comp_struct__47453 */

#ifndef kcg_comp_struct__47473
extern kcg_bool kcg_comp_struct__47473(
  struct__47473 *kcg_c1,
  struct__47473 *kcg_c2);
#endif /* kcg_comp_struct__47473 */

#ifndef kcg_comp_struct__47497
extern kcg_bool kcg_comp_struct__47497(
  struct__47497 *kcg_c1,
  struct__47497 *kcg_c2);
#endif /* kcg_comp_struct__47497 */

#ifndef kcg_comp_struct__47508
extern kcg_bool kcg_comp_struct__47508(
  struct__47508 *kcg_c1,
  struct__47508 *kcg_c2);
#endif /* kcg_comp_struct__47508 */

#ifndef kcg_comp_struct__47516
extern kcg_bool kcg_comp_struct__47516(
  struct__47516 *kcg_c1,
  struct__47516 *kcg_c2);
#endif /* kcg_comp_struct__47516 */

#ifndef kcg_comp_struct__47548
extern kcg_bool kcg_comp_struct__47548(
  struct__47548 *kcg_c1,
  struct__47548 *kcg_c2);
#endif /* kcg_comp_struct__47548 */

#ifndef kcg_comp_struct__47556
extern kcg_bool kcg_comp_struct__47556(
  struct__47556 *kcg_c1,
  struct__47556 *kcg_c2);
#endif /* kcg_comp_struct__47556 */

#ifndef kcg_comp_struct__47576
extern kcg_bool kcg_comp_struct__47576(
  struct__47576 *kcg_c1,
  struct__47576 *kcg_c2);
#endif /* kcg_comp_struct__47576 */

#ifndef kcg_comp_struct__47591
extern kcg_bool kcg_comp_struct__47591(
  struct__47591 *kcg_c1,
  struct__47591 *kcg_c2);
#endif /* kcg_comp_struct__47591 */

#ifndef kcg_comp_struct__47606
extern kcg_bool kcg_comp_struct__47606(
  struct__47606 *kcg_c1,
  struct__47606 *kcg_c2);
#endif /* kcg_comp_struct__47606 */

#ifndef kcg_comp_struct__47622
extern kcg_bool kcg_comp_struct__47622(
  struct__47622 *kcg_c1,
  struct__47622 *kcg_c2);
#endif /* kcg_comp_struct__47622 */

#ifndef kcg_comp_struct__47652
extern kcg_bool kcg_comp_struct__47652(
  struct__47652 *kcg_c1,
  struct__47652 *kcg_c2);
#endif /* kcg_comp_struct__47652 */

#ifndef kcg_comp_struct__47674
extern kcg_bool kcg_comp_struct__47674(
  struct__47674 *kcg_c1,
  struct__47674 *kcg_c2);
#endif /* kcg_comp_struct__47674 */

#ifndef kcg_comp_struct__47691
extern kcg_bool kcg_comp_struct__47691(
  struct__47691 *kcg_c1,
  struct__47691 *kcg_c2);
#endif /* kcg_comp_struct__47691 */

#ifndef kcg_comp_struct__47709
extern kcg_bool kcg_comp_struct__47709(
  struct__47709 *kcg_c1,
  struct__47709 *kcg_c2);
#endif /* kcg_comp_struct__47709 */

#ifndef kcg_comp_struct__47722
extern kcg_bool kcg_comp_struct__47722(
  struct__47722 *kcg_c1,
  struct__47722 *kcg_c2);
#endif /* kcg_comp_struct__47722 */

#ifndef kcg_comp_struct__47732
extern kcg_bool kcg_comp_struct__47732(
  struct__47732 *kcg_c1,
  struct__47732 *kcg_c2);
#endif /* kcg_comp_struct__47732 */

#ifndef kcg_comp_struct__47740
extern kcg_bool kcg_comp_struct__47740(
  struct__47740 *kcg_c1,
  struct__47740 *kcg_c2);
#endif /* kcg_comp_struct__47740 */

#ifndef kcg_comp_struct__47753
extern kcg_bool kcg_comp_struct__47753(
  struct__47753 *kcg_c1,
  struct__47753 *kcg_c2);
#endif /* kcg_comp_struct__47753 */

#ifndef kcg_comp_struct__47766
extern kcg_bool kcg_comp_struct__47766(
  struct__47766 *kcg_c1,
  struct__47766 *kcg_c2);
#endif /* kcg_comp_struct__47766 */

#ifndef kcg_comp_struct__47784
extern kcg_bool kcg_comp_struct__47784(
  struct__47784 *kcg_c1,
  struct__47784 *kcg_c2);
#endif /* kcg_comp_struct__47784 */

#ifndef kcg_comp_struct__47797
extern kcg_bool kcg_comp_struct__47797(
  struct__47797 *kcg_c1,
  struct__47797 *kcg_c2);
#endif /* kcg_comp_struct__47797 */

#ifndef kcg_comp_struct__47803
extern kcg_bool kcg_comp_struct__47803(
  struct__47803 *kcg_c1,
  struct__47803 *kcg_c2);
#endif /* kcg_comp_struct__47803 */

#ifndef kcg_comp_struct__47808
extern kcg_bool kcg_comp_struct__47808(
  struct__47808 *kcg_c1,
  struct__47808 *kcg_c2);
#endif /* kcg_comp_struct__47808 */

#ifndef kcg_comp_struct__47813
extern kcg_bool kcg_comp_struct__47813(
  struct__47813 *kcg_c1,
  struct__47813 *kcg_c2);
#endif /* kcg_comp_struct__47813 */

#ifndef kcg_comp_struct__47821
extern kcg_bool kcg_comp_struct__47821(
  struct__47821 *kcg_c1,
  struct__47821 *kcg_c2);
#endif /* kcg_comp_struct__47821 */

#ifndef kcg_comp_struct__47830
extern kcg_bool kcg_comp_struct__47830(
  struct__47830 *kcg_c1,
  struct__47830 *kcg_c2);
#endif /* kcg_comp_struct__47830 */

#ifndef kcg_comp_struct__47835
extern kcg_bool kcg_comp_struct__47835(
  struct__47835 *kcg_c1,
  struct__47835 *kcg_c2);
#endif /* kcg_comp_struct__47835 */

#ifndef kcg_comp_struct__47844
extern kcg_bool kcg_comp_struct__47844(
  struct__47844 *kcg_c1,
  struct__47844 *kcg_c2);
#endif /* kcg_comp_struct__47844 */

#ifndef kcg_comp_struct__47861
extern kcg_bool kcg_comp_struct__47861(
  struct__47861 *kcg_c1,
  struct__47861 *kcg_c2);
#endif /* kcg_comp_struct__47861 */

#ifndef kcg_comp_struct__47869
extern kcg_bool kcg_comp_struct__47869(
  struct__47869 *kcg_c1,
  struct__47869 *kcg_c2);
#endif /* kcg_comp_struct__47869 */

#ifndef kcg_comp_struct__47877
extern kcg_bool kcg_comp_struct__47877(
  struct__47877 *kcg_c1,
  struct__47877 *kcg_c2);
#endif /* kcg_comp_struct__47877 */

#ifndef kcg_comp_struct__47897
extern kcg_bool kcg_comp_struct__47897(
  struct__47897 *kcg_c1,
  struct__47897 *kcg_c2);
#endif /* kcg_comp_struct__47897 */

#ifndef kcg_comp_struct__47905
extern kcg_bool kcg_comp_struct__47905(
  struct__47905 *kcg_c1,
  struct__47905 *kcg_c2);
#endif /* kcg_comp_struct__47905 */

#ifndef kcg_comp_struct__47915
extern kcg_bool kcg_comp_struct__47915(
  struct__47915 *kcg_c1,
  struct__47915 *kcg_c2);
#endif /* kcg_comp_struct__47915 */

#ifndef kcg_comp_struct__47925
extern kcg_bool kcg_comp_struct__47925(
  struct__47925 *kcg_c1,
  struct__47925 *kcg_c2);
#endif /* kcg_comp_struct__47925 */

#ifndef kcg_comp_struct__47936
extern kcg_bool kcg_comp_struct__47936(
  struct__47936 *kcg_c1,
  struct__47936 *kcg_c2);
#endif /* kcg_comp_struct__47936 */

#ifndef kcg_comp_struct__47950
extern kcg_bool kcg_comp_struct__47950(
  struct__47950 *kcg_c1,
  struct__47950 *kcg_c2);
#endif /* kcg_comp_struct__47950 */

#ifndef kcg_comp_struct__47959
extern kcg_bool kcg_comp_struct__47959(
  struct__47959 *kcg_c1,
  struct__47959 *kcg_c2);
#endif /* kcg_comp_struct__47959 */

#ifndef kcg_comp_struct__47969
extern kcg_bool kcg_comp_struct__47969(
  struct__47969 *kcg_c1,
  struct__47969 *kcg_c2);
#endif /* kcg_comp_struct__47969 */

#ifndef kcg_comp_struct__47980
extern kcg_bool kcg_comp_struct__47980(
  struct__47980 *kcg_c1,
  struct__47980 *kcg_c2);
#endif /* kcg_comp_struct__47980 */

#ifndef kcg_comp_struct__47990
extern kcg_bool kcg_comp_struct__47990(
  struct__47990 *kcg_c1,
  struct__47990 *kcg_c2);
#endif /* kcg_comp_struct__47990 */

#ifndef kcg_comp_struct__48004
extern kcg_bool kcg_comp_struct__48004(
  struct__48004 *kcg_c1,
  struct__48004 *kcg_c2);
#endif /* kcg_comp_struct__48004 */

#ifndef kcg_comp_struct__48014
extern kcg_bool kcg_comp_struct__48014(
  struct__48014 *kcg_c1,
  struct__48014 *kcg_c2);
#endif /* kcg_comp_struct__48014 */

#ifndef kcg_comp_struct__48029
extern kcg_bool kcg_comp_struct__48029(
  struct__48029 *kcg_c1,
  struct__48029 *kcg_c2);
#endif /* kcg_comp_struct__48029 */

#ifndef kcg_comp_struct__48036
extern kcg_bool kcg_comp_struct__48036(
  struct__48036 *kcg_c1,
  struct__48036 *kcg_c2);
#endif /* kcg_comp_struct__48036 */

#ifndef kcg_comp_struct__48050
extern kcg_bool kcg_comp_struct__48050(
  struct__48050 *kcg_c1,
  struct__48050 *kcg_c2);
#endif /* kcg_comp_struct__48050 */

#ifndef kcg_comp_struct__48059
extern kcg_bool kcg_comp_struct__48059(
  struct__48059 *kcg_c1,
  struct__48059 *kcg_c2);
#endif /* kcg_comp_struct__48059 */

#ifndef kcg_comp_struct__48072
extern kcg_bool kcg_comp_struct__48072(
  struct__48072 *kcg_c1,
  struct__48072 *kcg_c2);
#endif /* kcg_comp_struct__48072 */

#ifndef kcg_comp_struct__48082
extern kcg_bool kcg_comp_struct__48082(
  struct__48082 *kcg_c1,
  struct__48082 *kcg_c2);
#endif /* kcg_comp_struct__48082 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__47104
extern kcg_bool kcg_comp_array__47104(
  array__47104 *kcg_c1,
  array__47104 *kcg_c2);
#endif /* kcg_comp_array__47104 */

#ifndef kcg_comp_array__47140
extern kcg_bool kcg_comp_array__47140(
  array__47140 *kcg_c1,
  array__47140 *kcg_c2);
#endif /* kcg_comp_array__47140 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__47186
extern kcg_bool kcg_comp_array__47186(
  array__47186 *kcg_c1,
  array__47186 *kcg_c2);
#endif /* kcg_comp_array__47186 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__47197
extern kcg_bool kcg_comp_array__47197(
  array__47197 *kcg_c1,
  array__47197 *kcg_c2);
#endif /* kcg_comp_array__47197 */

#ifndef kcg_comp_array__47228
extern kcg_bool kcg_comp_array__47228(
  array__47228 *kcg_c1,
  array__47228 *kcg_c2);
#endif /* kcg_comp_array__47228 */

#ifndef kcg_comp_array__47265
extern kcg_bool kcg_comp_array__47265(
  array__47265 *kcg_c1,
  array__47265 *kcg_c2);
#endif /* kcg_comp_array__47265 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__47553
extern kcg_bool kcg_comp_array__47553(
  array__47553 *kcg_c1,
  array__47553 *kcg_c2);
#endif /* kcg_comp_array__47553 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__47570
extern kcg_bool kcg_comp_array__47570(
  array__47570 *kcg_c1,
  array__47570 *kcg_c2);
#endif /* kcg_comp_array__47570 */

#ifndef kcg_comp_array__47573
extern kcg_bool kcg_comp_array__47573(
  array__47573 *kcg_c1,
  array__47573 *kcg_c2);
#endif /* kcg_comp_array__47573 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_4_32
extern kcg_bool kcg_comp_array_int_4_32(
  array_int_4_32 *kcg_c1,
  array_int_4_32 *kcg_c2);
#endif /* kcg_comp_array_int_4_32 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__47619
extern kcg_bool kcg_comp_array__47619(
  array__47619 *kcg_c1,
  array__47619 *kcg_c2);
#endif /* kcg_comp_array__47619 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__47668
extern kcg_bool kcg_comp_array__47668(
  array__47668 *kcg_c1,
  array__47668 *kcg_c2);
#endif /* kcg_comp_array__47668 */

#ifndef kcg_comp_array__47671
extern kcg_bool kcg_comp_array__47671(
  array__47671 *kcg_c1,
  array__47671 *kcg_c2);
#endif /* kcg_comp_array__47671 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__47703
extern kcg_bool kcg_comp_array__47703(
  array__47703 *kcg_c1,
  array__47703 *kcg_c2);
#endif /* kcg_comp_array__47703 */

#ifndef kcg_comp_array__47706
extern kcg_bool kcg_comp_array__47706(
  array__47706 *kcg_c1,
  array__47706 *kcg_c2);
#endif /* kcg_comp_array__47706 */

#ifndef kcg_comp_array__47737
extern kcg_bool kcg_comp_array__47737(
  array__47737 *kcg_c1,
  array__47737 *kcg_c2);
#endif /* kcg_comp_array__47737 */

#ifndef kcg_comp_array__47841
extern kcg_bool kcg_comp_array__47841(
  array__47841 *kcg_c1,
  array__47841 *kcg_c2);
#endif /* kcg_comp_array__47841 */

#ifndef kcg_comp_array__47858
extern kcg_bool kcg_comp_array__47858(
  array__47858 *kcg_c1,
  array__47858 *kcg_c2);
#endif /* kcg_comp_array__47858 */

#ifndef kcg_comp_array__47874
extern kcg_bool kcg_comp_array__47874(
  array__47874 *kcg_c1,
  array__47874 *kcg_c2);
#endif /* kcg_comp_array__47874 */

#ifndef kcg_comp_array_int_2_33
extern kcg_bool kcg_comp_array_int_2_33(
  array_int_2_33 *kcg_c1,
  array_int_2_33 *kcg_c2);
#endif /* kcg_comp_array_int_2_33 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__47894
extern kcg_bool kcg_comp_array__47894(
  array__47894 *kcg_c1,
  array__47894 *kcg_c2);
#endif /* kcg_comp_array__47894 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */

#ifndef kcg_comp_array__51418
extern kcg_bool kcg_comp_array__51418(
  array__51418 *kcg_c1,
  array__51418 *kcg_c2);
#endif /* kcg_comp_array__51418 */

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__47326

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__47326

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__47351

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__47351

#define kcg_comp_PosRepParams_T kcg_comp_struct__47231

#define kcg_copy_PosRepParams_T kcg_copy_struct__47231

#define kcg_comp_MAReqParams_T kcg_comp_struct__47241

#define kcg_copy_MAReqParams_T kcg_copy_struct__47241

#define kcg_comp_NationalParams_T kcg_comp_struct__47248

#define kcg_copy_NationalParams_T kcg_copy_struct__47248

#define kcg_comp_DynamicConfig_T kcg_comp_struct__47258

#define kcg_copy_DynamicConfig_T kcg_copy_struct__47258

#define kcg_comp_IterPacket58_T_Packet_Types_Pkg kcg_comp_struct__47223

#define kcg_copy_IterPacket58_T_Packet_Types_Pkg kcg_copy_struct__47223

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__47861

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__47861

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__47894

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__47894

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__47869

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__47869

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__47874

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__47874

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__47877

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__47877

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__47591

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__47591

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__47797

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__47797

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__47803

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__47803

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__47808

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__47808

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__47821

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__47821

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__47813

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__47813

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__47897

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__47897

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__48029

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__48029

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__47830

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__47830

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__47784

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__47784

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__47130

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__47130

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__47112

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__47112

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__47619

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__47619

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__47606

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__47606

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__47619

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__47619

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__47622

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__47622

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__48059

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__48059

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__47858

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__47858

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__47835

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__47835

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__47841

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__47841

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__47844

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__47844

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__47668

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__47668

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__47652

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__47652

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__47671

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__47671

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__47674

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__47674

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__47703

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__47703

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__47691

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__47691

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__47706

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__47706

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__47709

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__47709

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__47722

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__47722

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__47737

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__47737

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__47732

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__47732

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__47737

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__47737

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__47740

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__47740

#define kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_comp_array_int_50

#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_copy_array_int_50

#define kcg_comp_M_TrainTrack_Message_T_TM_radio_messages kcg_comp_struct__47508

#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages kcg_copy_struct__47508

#define kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_comp_struct__47497

#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_copy_struct__47497

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__47905

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__47905

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__47915

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__47915

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__47925

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__47925

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__47936

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__47936

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__47959

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__47959

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__47969

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__47969

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__47980

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__47980

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__47990

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__47990

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__48004

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__48004

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__48004

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__48004

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__47950

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__47950

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__47905

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__47905

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__48036

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__48036

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__48050

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__48050

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct__48050

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct__48050

#define kcg_comp_M_008_int_T_TM_radio_messages kcg_comp_struct__48072

#define kcg_copy_M_008_int_T_TM_radio_messages kcg_copy_struct__48072

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__48014

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__48014

#define kcg_comp_M_032_int_T_TM_radio_messages kcg_comp_struct__48082

#define kcg_copy_M_032_int_T_TM_radio_messages kcg_copy_struct__48082

#define kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg kcg_comp_struct__47147

#define kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg kcg_copy_struct__47147

#define kcg_comp_RBC_Data_T_RBC_DataBus_Pkg kcg_comp_struct__47268

#define kcg_copy_RBC_Data_T_RBC_DataBus_Pkg kcg_copy_struct__47268

#define kcg_comp_RadioTrackTrainMessageQueueEntry_T kcg_comp_struct__47135

#define kcg_copy_RadioTrackTrainMessageQueueEntry_T kcg_copy_struct__47135

#define kcg_comp_RadioTrackTrainMessageQueueEntries_T kcg_comp_array__47140

#define kcg_copy_RadioTrackTrainMessageQueueEntries_T kcg_copy_array__47140

#define kcg_comp_RadioTrackTrainMessageQueue_T kcg_comp_struct__47143

#define kcg_copy_RadioTrackTrainMessageQueue_T kcg_copy_struct__47143

#define kcg_comp_Clock_T kcg_comp_struct__47156

#define kcg_copy_Clock_T kcg_copy_struct__47156

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__47289

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__47289

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__47375

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__47375

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__47305

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__47305

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__47310

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__47310

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__47096

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__47096

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__47315

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__47315

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__47104

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__47104

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__47320

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__47320

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__47107

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__47107

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__47346

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__47346

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__47370

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__47370

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_5

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__47181

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__47181

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__47186

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__47186

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_Radio_TrackTrain_Header_T_TM_transitional kcg_comp_struct__47766

#define kcg_copy_Radio_TrackTrain_Header_T_TM_transitional kcg_copy_struct__47766

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__47192

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__47192

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__47197

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__47197

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__47385

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__47385

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__47277

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__47277

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__47766

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__47766

#define kcg_comp_PosData_T kcg_comp_struct__47160

#define kcg_copy_PosData_T kcg_copy_struct__47160

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__47516

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__47516

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__47553

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__47553

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__47570

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__47570

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__47556

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__47556

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__47573

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__47573

#define kcg_comp_P003_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P003_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__47548

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__47548

#define kcg_comp_Array03_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_Array03_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__47553

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__47553

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__47576

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__47576

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_TM_TrainToTrack kcg_comp_struct__47397

#define kcg_copy_P003_TM_TrainToTrack kcg_copy_struct__47397

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__47753

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__47753

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P005_TM_TrainToTrack kcg_comp_struct__47405

#define kcg_copy_P005_TM_TrainToTrack kcg_copy_struct__47405

#define kcg_comp_TrainData_T kcg_comp_struct__47200

#define kcg_copy_TrainData_T kcg_copy_struct__47200

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_SessionManagement_T kcg_comp_struct__47218

#define kcg_copy_SessionManagement_T kcg_copy_struct__47218

#define kcg_comp_P004_TM_TrainToTrack kcg_comp_struct__47412

#define kcg_copy_P004_TM_TrainToTrack kcg_copy_struct__47412

#define kcg_comp_P009_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P009_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__47813

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__47813

#define kcg_comp_P009_TM_TrainToTrack kcg_comp_struct__47419

#define kcg_copy_P009_TM_TrainToTrack kcg_copy_struct__47419

#define kcg_comp_P011_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P011_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_Array11_TM_TrainToTrack kcg_comp_array_int_11

#define kcg_copy_Array11_TM_TrainToTrack kcg_copy_array_int_11

#define kcg_comp_P011_ntc_list_array_T_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P011_ntc_list_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P011_voltage_TM_TrainToTrack kcg_comp_struct__47181

#define kcg_copy_P011_voltage_TM_TrainToTrack kcg_copy_struct__47181

#define kcg_comp_P011_voltage_list_TM_TrainToTrack kcg_comp_array__47186

#define kcg_copy_P011_voltage_list_TM_TrainToTrack kcg_copy_array__47186

#define kcg_comp_P011_TM_TrainToTrack kcg_comp_struct__47432

#define kcg_copy_P011_TM_TrainToTrack kcg_copy_struct__47432

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P000_TM_TrainToTrack kcg_comp_struct__47453

#define kcg_copy_P000_TM_TrainToTrack kcg_copy_struct__47453

#define kcg_comp_P001_TM_TrainToTrack kcg_comp_struct__47473

#define kcg_copy_P001_TM_TrainToTrack kcg_copy_struct__47473

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-10T18:22:07
*************************************************************$ */

