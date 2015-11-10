/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
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
typedef char kcg_char;
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
typedef enum kcg_tag_Q_ORIENTATION {
  _13_Q_ORIENTATION_The_balise_gr = 0,
  Q_ORIENTATION_The_balise_group_ = 1
} Q_ORIENTATION;
/* TM::OrBG */
typedef enum kcg_tag_OrBG_TM { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum kcg_tag_OrLine_TM { N_TM, Z_TM } OrLine_TM;
/* Q_UPDOWN */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* N_PIG */
typedef enum kcg_tag_N_PIG {
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
typedef enum kcg_tag_N_TOTAL {
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
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates = 0,
  _12_M_DUP_This_balise_is_a_dupl = 1,
  M_DUP_This_balise_is_a_duplicat = 2
} M_DUP;
/* Q_LINK */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* M_ACK */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_requir = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* M_ERROR */
typedef enum kcg_tag_M_ERROR {
  M_ERROR_Balise_group_linking_co = 0,
  M_ERROR_Linked_balise_group_mes = 1,
  M_ERROR_Unlinked_balise_group_m = 2,
  M_ERROR_Radio_message_consisten = 3,
  M_ERROR_Radio_sequence_error = 4,
  M_ERROR_Radio_safe_radio_connec = 5,
  M_ERROR_Safety_critical_failure = 6,
  M_ERROR_Double_linking_error = 7,
  M_ERROR_Double_repositioning_er = 8
} M_ERROR;
/* Q_MARQSTREASON */
typedef enum kcg_tag_Q_MARQSTREASON {
  Q_MARQSTREASON_Start_selected_b = 1,
  Q_MARQSTREASON_Time_before_reac = 2,
  Q_MARQSTREASON_Time_before_a_se = 4,
  Q_MARQSTREASON_Track_descriptio = 8,
  Q_MARQSTREASON_TAF_up_to_level_ = 16
} Q_MARQSTREASON;
/* Q_EMERGENCYSTOP */
typedef enum kcg_tag_Q_EMERGENCYSTOP {
  _7_Q_EMERGENCYSTOP_Conditional_ = 0,
  Q_EMERGENCYSTOP_Conditional_Eme = 1,
  Q_EMERGENCYSTOP_Unconditional_E = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
/* M_VERSION */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_acc = 0,
  M_VERSION_Version_1_0_introduce = 16,
  M_VERSION_Version_1_1_introduce = 17,
  M_VERSION_Version_2_0_introduce = 32
} M_VERSION;
/* M_LOC */
typedef enum kcg_tag_M_LOC {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_bali = 1,
  M_LOC_Do_not_send_position_repo = 2
} M_LOC;
/* Q_LGTLOC */
typedef enum kcg_tag_Q_LGTLOC {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* NC_CDTRAIN */
typedef enum kcg_tag_NC_CDTRAIN {
  NC_CDTRAIN_Cant_Deficiency_80_m = 0,
  NC_CDTRAIN_Cant_Deficiency_100_ = 1,
  NC_CDTRAIN_Cant_Deficiency_130_ = 2,
  NC_CDTRAIN_Cant_Deficiency_150_ = 3,
  NC_CDTRAIN_Cant_Deficiency_165_ = 4,
  NC_CDTRAIN_Cant_Deficiency_180_ = 5,
  NC_CDTRAIN_Cant_Deficiency_210_ = 6,
  NC_CDTRAIN_Cant_Deficiency_225_ = 7,
  NC_CDTRAIN_Cant_Deficiency_245_ = 8,
  NC_CDTRAIN_Cant_Deficiency_275_ = 9,
  NC_CDTRAIN_Cant_Deficiency_300_ = 10
} NC_CDTRAIN;
/* NC_TRAIN */
typedef enum kcg_tag_NC_TRAIN {
  NC_TRAIN_Train_does_not_belong_ = 0,
  _11_NC_TRAIN_Freight_train_brak = 1,
  NC_TRAIN_Freight_train_braked_i = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_LOADINGGAUGE */
typedef enum kcg_tag_M_LOADINGGAUGE {
  M_LOADINGGAUGE_The_train_does_n = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
/* M_AXLELOADCAT */
typedef enum kcg_tag_M_AXLELOADCAT {
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
typedef enum kcg_tag_M_AIRTIGHT {
  M_AIRTIGHT_Not_fitted = 0,
  M_AIRTIGHT_Fitted = 1
} M_AIRTIGHT;
/* M_VOLTAGE */
typedef enum kcg_tag_M_VOLTAGE {
  M_VOLTAGE_Line_not_fitted_with_ = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
/* Q_SCALE */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_DIRLRBG */
typedef enum kcg_tag_Q_DIRLRBG {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DLRBG */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LENGTH */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_inf = 0,
  _10_Q_LENGTH_Train_integrity_co = 1,
  Q_LENGTH_Train_integrity_confir = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
/* Q_DIRTRAIN */
typedef enum kcg_tag_Q_DIRTRAIN {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* M_MODE */
typedef enum kcg_tag_M_MODE {
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
typedef enum kcg_tag_M_LEVEL {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_ = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* RBC_Diagnostic_Pkg::DiagMsgType_E */
typedef enum kcg_tag_DiagMsgType_E_RBC_Diagn {
  DIAG_MSG_TYPE_Empty_RBC_Diagnos,
  DIAG_MSG_TYPE_information_RBC_D,
  DIAG_MSG_TYPE_warning_RBC_Diagn,
  DIAG_MSG_TYPE_error_RBC_Diagnos
} DiagMsgType_E_RBC_Diagnostic_Pk;
/* RBC_Diagnostic_Pkg::DiagMsgSrc_E */
typedef enum kcg_tag_DiagMsgSrc_E_RBC_Diagno {
  DIAG_MSG_SRC_Empty_RBC_Diagnost,
  DIAG_MSG_SRC_Process_Unconditio
} DiagMsgSrc_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgText_E */
typedef enum kcg_tag_DiagMsgText_E_RBC_Diagn {
  DIAG_MSG_Empty_RBC_Diagnostic_P,
  DIAG_MSG_Failure_during_session
} DiagMsgText_E_RBC_Diagnostic_Pk;
/* Q_DIR */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum kcg_tag_SSM_TR_POSITION_REPORT_ {
  SSM_TR_no_trans_POSITION_REPORT,
  SSM_TR_IDLE_1_POSITION_REPORT_S,
  _69_SSM_TR_PROCESS_POSITION_REP,
  SSM_TR_PROCESS_POSITION_REPORT_
} SSM_TR_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum kcg_tag_SSM_ST_POSITION_REPORT_ {
  SSM_st_IDLE_POSITION_REPORT_SM,
  SSM_st_PROCESS_POSITION_REPORT_
} SSM_ST_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
typedef enum kcg_tag_SSM_TR_MOVEMENT_AUTHORI {
  SSM_TR_no_trans_MOVEMENT_AUTHOR,
  SSM_TR_IDLE_1_MOVEMENT_AUTHORIT,
  SSM_TR_IDLE_2_MOVEMENT_AUTHORIT,
  SSM_TR_SEND_MA_1_MOVEMENT_AUTHO,
  SSM_TR_SEND_MA_2_MOVEMENT_AUTHO,
  _68_SSM_TR_AWAIT_ACKNOWLEDGEMEN,
  _67_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _66_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _65_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _64_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _63_SSM_TR_TRY_PROCESS_ACKNOWLE,
  SSM_TR_AWAIT_MA_1_MOVEMENT_AUTH,
  SSM_TR_UPDATE_POSITION_1_MOVEME,
  SSM_TR_UPDATE_POSITION_2_MOVEME
} SSM_TR_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
typedef enum kcg_tag_SSM_ST_MOVEMENT_AUTHORI {
  SSM_st_IDLE_MOVEMENT_AUTHORITY_,
  SSM_st_SEND_MA_MOVEMENT_AUTHORI,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_MO,
  _62_SSM_st_TRY_PROCESS_ACKNOWLE,
  SSM_st_AWAIT_MA_MOVEMENT_AUTHOR,
  SSM_st_UPDATE_POSITION_MOVEMENT
} SSM_ST_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_TR_CONDITIONAL_EMER {
  SSM_TR_no_trans_CONDITIONAL_EME,
  SSM_TR_IDLE_1_CONDITIONAL_EMERG,
  _61_SSM_TR_SEND_CONDITIONAL_EME,
  SSM_TR_SEND_CONDITIONAL_EMERGEN,
  _60_SSM_TR_AWAIT_ACKNOWLEDGEMEN,
  _59_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _58_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _57_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _56_SSM_TR_TRY_PROCESS_ACKNOWLE
} SSM_TR_CONDITIONAL_EMERGENCY_ST;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_ST_CONDITIONAL_EMER {
  SSM_st_IDLE_CONDITIONAL_EMERGEN,
  SSM_st_SEND_CONDITIONAL_EMERGEN,
  _55_SSM_st_AWAIT_ACKNOWLEDGEMEN,
  _54_SSM_st_TRY_PROCESS_ACKNOWLE
} SSM_ST_CONDITIONAL_EMERGENCY_ST;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_TR_UNCONDITIONAL_EM {
  SSM_TR_no_trans_UNCONDITIONAL_E,
  SSM_TR_IDLE_1_UNCONDITIONAL_EME,
  _53_SSM_TR_SEND_UNCONDITIONAL_E,
  SSM_TR_SEND_UNCONDITIONAL_EMERG,
  _52_SSM_TR_AWAIT_ACKNOWLEDGEMEN,
  _51_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _50_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _49_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _48_SSM_TR_TRY_PROCESS_ACKNOWLE
} SSM_TR_UNCONDITIONAL_EMERGENCY_;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_ST_UNCONDITIONAL_EM {
  SSM_st_IDLE_UNCONDITIONAL_EMERG,
  SSM_st_SEND_UNCONDITIONAL_EMERG,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_UN,
  _47_SSM_st_TRY_PROCESS_ACKNOWLE
} SSM_ST_UNCONDITIONAL_EMERGENCY_;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
typedef enum kcg_tag_SSM_TR_REVOCATION_OF_EM {
  SSM_TR_no_trans_REVOCATION_OF_E,
  SSM_TR_IDLE_1_REVOCATION_OF_EME,
  _46_SSM_TR_SEND_REVOCATION_OF_E,
  _45_SSM_TR_SEND_REVOCATION_OF_E,
  SSM_TR_SEND_REVOCATION_OF_ES_ME,
  _44_SSM_TR_AWAIT_ACKNOWLEDGEMEN,
  _43_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _42_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _41_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _40_SSM_TR_TRY_PROCESS_ACKNOWLE
} SSM_TR_REVOCATION_OF_EMERGENCY_;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
typedef enum kcg_tag_SSM_ST_REVOCATION_OF_EM {
  SSM_st_IDLE_REVOCATION_OF_EMERG,
  SSM_st_SEND_REVOCATION_OF_ES_ME,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_RE,
  _39_SSM_st_TRY_PROCESS_ACKNOWLE
} SSM_ST_REVOCATION_OF_EMERGENCY_;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
typedef enum kcg_tag_SSM_TR_GENERAL_MESSAGE_ {
  SSM_TR_no_trans_GENERAL_MESSAGE,
  SSM_TR_IDLE_1_GENERAL_MESSAGE_S,
  SSM_TR_SEND_GENERAL_MESSAGE_1_G,
  SSM_TR_SEND_GENERAL_MESSAGE_2_G,
  SSM_TR_SEND_GENERAL_MESSAGE_3_G,
  _38_SSM_TR_AWAIT_ACKNOWLEDGEMEN,
  _37_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _36_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _35_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _34_SSM_TR_TRY_PROCESS_ACKNOWLE
} SSM_TR_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
typedef enum kcg_tag_SSM_ST_GENERAL_MESSAGE_ {
  SSM_st_IDLE_GENERAL_MESSAGE_SM,
  SSM_st_SEND_GENERAL_MESSAGE_GEN,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_GE,
  _33_SSM_st_TRY_PROCESS_ACKNOWLE
} SSM_ST_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
typedef enum kcg_tag_SSM_TR_TRIP_AND_POST_TR {
  SSM_TR_no_trans_TRIP_AND_POST_T,
  SSM_TR_IDLE_1_TRIP_AND_POST_TRI,
  SSM_TR_MODE_TRIP_1_TRIP_AND_POS,
  SSM_TR_MODE_POST_TRIP_1_TRIP_AN,
  _32_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _31_SSM_TR_TRY_PROCESS_ACKNOWLE,
  _30_SSM_TR_TRY_PROCESS_ACKNOWLE,
  SSM_TR_SEND_MSG_06_1_TRIP_AND_P
} SSM_TR_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
typedef enum kcg_tag_SSM_ST_TRIP_AND_POST_TR {
  SSM_st_IDLE_TRIP_AND_POST_TRIP_,
  SSM_st_MODE_TRIP_TRIP_AND_POST_,
  SSM_st_MODE_POST_TRIP_TRIP_AND_,
  _29_SSM_st_TRY_PROCESS_ACKNOWLE,
  SSM_st_SEND_MSG_06_TRIP_AND_POS
} SSM_ST_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
typedef enum kcg_tag_SSM_TR_CONTROLLER_SM {
  SSM_TR_no_trans_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATED_1_CON,
  SSM_TR_SEND_RBC_VERSION_1_CONTR,
  SSM_TR_SEND_RBC_VERSION_2_CONTR,
  SSM_TR_AWAIT_SESSION_ESTABLISHE,
  SSM_TR_SESSION_ESTABLISHED_1_CO,
  _28_SSM_TR_SESSION_TERMINATION_,
  SSM_TR_SESSION_TERMINATION_REQU
} SSM_TR_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
typedef enum kcg_tag_SSM_ST_CONTROLLER_SM {
  SSM_st_SESSION_TERMINATED_CONTR,
  SSM_st_SEND_RBC_VERSION_CONTROL,
  SSM_st_AWAIT_SESSION_ESTABLISHE,
  SSM_st_SESSION_ESTABLISHED_CONT,
  SSM_st_SESSION_TERMINATION_REQU
} SSM_ST_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
typedef enum kcg_tag_SSM_TR_SESSION_ESTABLIS {
  SSM_TR_no_trans_SESSION_ESTABLI,
  _27_SSM_TR_PROCESS_SESSION_ESTA,
  SSM_TR_PROCESS_SESSION_ESTABLIS,
  _26_SSM_TR_PROCESS_VALIDATED_TR,
  SSM_TR_RECEIVE_AND_TRIGGER_1_SE,
  SSM_TR_START_1_SESSION_ESTABLIS,
  SSM_TR_START_2_SESSION_ESTABLIS,
  SSM_TR_AWAIT_VALIDATED_TRAIN_DA,
  _25_SSM_TR_SEND_MA_AND_POS_REP_,
  SSM_TR_RBC_REQUEST_SESSION_TERM
} SSM_TR_SESSION_ESTABLISHED_SM_C;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
typedef enum kcg_tag_SSM_ST_SESSION_ESTABLIS {
  SSM_st_PROCESS_SESSION_ESTABLIS,
  _24_SSM_st_PROCESS_VALIDATED_TR,
  SSM_st_RECEIVE_AND_TRIGGER_CONT,
  _23_SSM_st_START_CONTROLLER_SM_,
  SSM_st_AWAIT_VALIDATED_TRAIN_DA,
  SSM_st_AWAIT_SESSION_TERMINATIO,
  _22_SSM_st_SEND_MA_AND_POS_REP_,
  SSM_st_RBC_REQUEST_SESSION_TERM
} SSM_ST_SESSION_ESTABLISHED_SM_C;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum kcg_tag__21_SSM_TR_PROCESS_VALI {
  SSM_TR_no_trans_PROCESS_VALIDAT,
  SSM_TR_START_1_PROCESS_VALIDATE,
  _20_SSM_TR_TRY_PROCESS_ACKNOWLE,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_,
  _19_SSM_TR_PROCESS_VALIDATED_TR,
  SSM_TR_PROCESS_VALIDATED_TRAIN_
} _21_SSM_TR_PROCESS_VALIDATED_TR;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum kcg_tag_SSM_ST_PROCESS_VALIDATE {
  _18_SSM_st_START_CONTROLLER_SM_,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CO,
  SSM_st_PROCESS_VALIDATED_TRAIN_
} SSM_ST_PROCESS_VALIDATED_TRAIN_;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum kcg_tag_SSM_TR_SEND_MA_AMD_POS_ {
  SSM_TR_no_trans_SEND_MA_AMD_POS,
  SSM_TR_START_1_SEND_MA_AMD_POS_,
  _17_SSM_TR_SEND_MA_AND_POS_REP_,
  SSM_TR_SEND_MA_AND_POS_REP_PARA,
  SSM_TR_AWAIT_ACKNOWLEDGMENT_1_S,
  _16_SSM_TR_TRY_PROCESS_ACKNOWLE,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGME
} SSM_TR_SEND_MA_AMD_POS_REP_PARA;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum kcg_tag_SSM_ST_SEND_MA_AMD_POS_ {
  SSM_st_START_CONTROLLER_SM_SESS,
  SSM_st_SEND_MA_AND_POS_REP_PARA,
  SSM_st_AWAIT_ACKNOWLEDGMENT_CON,
  SSM_st_TRY_PROCESS_ACKNOWLEDGME
} SSM_ST_SEND_MA_AMD_POS_REP_PARA;
/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct kcg_tag_PT4_ErrorReporting_T_Pa {
  kcg_bool valid;
  M_ERROR m_error;
} PT4_ErrorReporting_T_Packet_Tra;

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

/* NationalParams_T */
typedef struct kcg_tag_NationalParams_T {
  NID_C nid_c;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  T_NVCONTACT t_nvcontact;
} NationalParams_T;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* MAReqParams_T */
typedef struct kcg_tag_MAReqParams_T {
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} MAReqParams_T;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* N_ITER */
typedef kcg_int N_ITER;

/* D_LOC */
typedef kcg_int D_LOC;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct kcg_tag_IterPacket58_T_Packet_T {
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} IterPacket58_T_Packet_Types_Pkg;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* Clock_T */
typedef struct kcg_tag_Clock_T { T_TRAIN m_Value; } Clock_T;

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

/* TM_radio_messages::M_015_T */
typedef struct kcg_tag_M_015_T_TM_radio_messag {
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
} M_015_T_TM_radio_messages;

/* TM_radio_messages::M_008_T */
typedef struct kcg_tag_M_008_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} M_008_T_TM_radio_messages;

/* TM_radio_messages::M_002_T */
typedef struct kcg_tag_M_002_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} M_002_T_TM_radio_messages;

/* TM_radio_messages::M_045_T */
typedef struct kcg_tag_M_045_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} M_045_T_TM_radio_messages;

/* TM_radio_messages::M_033_T */
typedef struct kcg_tag_M_033_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} M_033_T_TM_radio_messages;

/* TM_radio_messages::M_032_T */
typedef struct kcg_tag_M_032_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} M_032_T_TM_radio_messages;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* TM_radio_messages::M_034_T */
typedef struct kcg_tag_M_034_T_TM_radio_messag {
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
} M_034_T_TM_radio_messages;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_BG */
typedef kcg_int NID_BG;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct kcg_tag_TelegramHeader_T_BG_Typ {
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
} TelegramHeader_T_BG_Types_Pkg;

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

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct kcg_tag_PT5_TrainRunningNumber_ {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} PT5_TrainRunningNumber_Packet_T;

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

/* PosData_T */
typedef struct kcg_tag_PosData_T {
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
} PosData_T;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct kcg_tag_Radio_TrainTrack_Header {
  kcg_bool present;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  T_TRAIN xT_TRAIN;
  NID_EM xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  NID_TEXTMESSAGE xNID_TEXTMESSAGE;
} Radio_TrainTrack_Header_T_Radio;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct kcg_tag_PT9_Level23_TransitionI {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} PT9_Level23_TransitionInformati;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* TM_TrainToTrack::P001 */
typedef struct kcg_tag_P001_TM_TrainToTrack {
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
} P001_TM_TrainToTrack;

/* TM_TrainToTrack::P000 */
typedef struct kcg_tag_P000_TM_TrainToTrack {
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
} P000_TM_TrainToTrack;

/* TM_TrainToTrack::P009 */
typedef struct kcg_tag_P009_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} P009_TM_TrainToTrack;

/* TM_TrainToTrack::P004 */
typedef struct kcg_tag_P004_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} P004_TM_TrainToTrack;

/* TM_TrainToTrack::P005 */
typedef struct kcg_tag_P005_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} P005_TM_TrainToTrack;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* TM::P058_section_int_T */
typedef struct kcg_tag_P058_section_int_T_TM {
  kcg_int D_LOC;
  kcg_int Q_LGTLOC;
} P058_section_int_T_TM;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* TM::P057_trackside_int_T */
typedef struct kcg_tag_P057_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} P057_trackside_int_T_TM;

/* TM::P021_section_int_T */
typedef struct kcg_tag_P021_section_int_T_TM {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} P021_section_int_T_TM;

/* TM::P021_trackide_sectionlist_T */
typedef P021_section_int_T_TM P021_trackide_sectionlist_T_TM[32];

/* TM::P021_trackside_int_T */
typedef struct kcg_tag_P021_trackside_int_T_TM {
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
} P021_trackside_int_T_TM;

/* TM::P021_OBU_sectionlist_int_T */
typedef P021_section_int_T_TM P021_OBU_sectionlist_int_T_TM[33];

/* TM::P005_section_int_T */
typedef struct kcg_tag_P005_section_int_T_TM {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} P005_section_int_T_TM;

/* TM::P005_trackide_sectionlist_T */
typedef P005_section_int_T_TM P005_trackide_sectionlist_T_TM[32];

/* TM::P005_trackside_int_T */
typedef struct kcg_tag_P005_trackside_int_T_TM {
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
} P005_trackside_int_T_TM;

/* TM::P005_OBU_sectionlist_int_T */
typedef P005_section_int_T_TM P005_OBU_sectionlist_int_T_TM[33];

/* TM::P005_sections_array_flat_T */
typedef kcg_int P005_sections_array_flat_T_TM[231];

/* TM::P005_section_array_T */
typedef kcg_int P005_section_array_T_TM[7];

/* TM::P005_OBU_sectionlist_array_T */
typedef P005_section_array_T_TM P005_OBU_sectionlist_array_T_TM[33];

/* TM::P041_section_int_T */
typedef struct kcg_tag_P041_section_int_T_TM {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} P041_section_int_T_TM;

/* TM::P041_trackide_sectionlist_T */
typedef P041_section_int_T_TM P041_trackide_sectionlist_T_TM[32];

/* TM::P041_trackside_int_T */
typedef struct kcg_tag_P041_trackside_int_T_TM {
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
} P041_trackside_int_T_TM;

/* TM::P041_OBU_sectionlist_int_T */
typedef P041_section_int_T_TM P041_OBU_sectionlist_int_T_TM[33];

/* TM::P065_trackside_int_T */
typedef struct kcg_tag_P065_trackside_int_T_TM {
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
} P065_trackside_int_T_TM;

/* TM::P015_section_int_T */
typedef struct kcg_tag_P015_section_int_T_TM {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} P015_section_int_T_TM;

/* TM::P015_sections_array_flat_T */
typedef kcg_int P015_sections_array_flat_T_TM[128];

/* TM::P015_section_array_T */
typedef kcg_int P015_section_array_T_TM[4];

/* TM::P015_OBU_sectionlist_array_T */
typedef P015_section_array_T_TM P015_OBU_sectionlist_array_T_TM[32];

/* TM::Radio_TrackTrain_Header_T */
typedef struct kcg_tag__6_Radio_TrackTrain_Hea {
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
} _6_Radio_TrackTrain_Header_T_TM;

/* TM::BaliseTelegramHeader_int_T */
typedef struct kcg_tag_BaliseTelegramHeader_in {
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
} BaliseTelegramHeader_int_T_TM;

/* TM::P255_trackside_int_T */
typedef struct kcg_tag_P255_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
} P255_trackside_int_T_TM;

/* TM::P045_trackside_int_T */
typedef struct kcg_tag_P045_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} P045_trackside_int_T_TM;

/* TM::P042_trackside_int_T */
typedef struct kcg_tag_P042_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} P042_trackside_int_T_TM;

/* TM::P046_section_int_T */
typedef struct kcg_tag_P046_section_int_T_TM {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
} P046_section_int_T_TM;

/* TM::P046_trackide_sectionlist_T */
typedef P046_section_int_T_TM P046_trackide_sectionlist_T_TM[32];

/* TM::P046_trackside_int_T */
typedef struct kcg_tag_P046_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} P046_trackside_int_T_TM;

/* TM::P046_OBU_sectionlist_int_T */
typedef P046_section_int_T_TM P046_OBU_sectionlist_int_T_TM[33];

/* TM::P046_sections_array_flat_T */
typedef kcg_int P046_sections_array_flat_T_TM[66];

/* TM::P137_trackside_int_T */
typedef struct kcg_tag_P137_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} P137_trackside_int_T_TM;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct kcg_tag_MetadataElement_T_Commo {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} MetadataElement_T_Common_Types_;

/* Common_Types_Pkg::Metadata_T */
typedef MetadataElement_T_Common_Types_ Metadata_T_Common_Types_Pkg[30];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef kcg_int CompressedPacketData_T_Common_T[500];

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct kcg_tag_CompressedPackets_T_Com {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_T PacketData;
} CompressedPackets_T_Common_Type;

/* TM::CompressedRadioMessage */
typedef struct kcg_tag_CompressedRadioMessage_ {
  _6_Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Type Messages;
} CompressedRadioMessage_TM;

/* RadioTrackTrainMessageQueueEntry_T */
typedef struct kcg_tag_RadioTrackTrainMessageQ {
  kcg_bool m_IsValid;
  CompressedRadioMessage_TM m_Entry;
} RadioTrackTrainMessageQueueEntr;

/* RadioTrackTrainMessageQueueEntries_T */
typedef RadioTrackTrainMessageQueueEntr _8_RadioTrackTrainMessageQueueE[8];

/* RadioTrackTrainMessageQueue_T */
typedef struct kcg_tag__9_RadioTrackTrainMessa {
  _8_RadioTrackTrainMessageQueueE m_Entries;
} _9_RadioTrackTrainMessageQueue_;

/* TM::CompressedBaliseMessage */
typedef struct kcg_tag_CompressedBaliseMessage {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Type Messages;
} CompressedBaliseMessage_TM;

/* TM_radio_messages::M_032_int_T */
typedef struct kcg_tag_M_032_int_T_TM_radio_me {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} M_032_int_T_TM_radio_messages;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct kcg_tag_M_TrackTrain_Radio_T_TM {
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
} M_TrackTrain_Radio_T_TM_radio_m;

/* TM_radio_messages::M_008_int_T */
typedef struct kcg_tag_M_008_int_T_TM_radio_me {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} M_008_int_T_TM_radio_messages;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct kcg_tag_M_TrainTrack_MessageHd_ {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
} M_TrainTrack_MessageHd_T_TM_rad;

/* TM_radio_messages::M_TrainTrack_compressed_packets_T */
typedef kcg_int M_TrainTrack_compressed_packets[50];

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct kcg_tag_M_TrainTrack_Message_T_ {
  M_TrainTrack_MessageHd_T_TM_rad Message;
  M_TrainTrack_compressed_packets OptionalPackets;
} M_TrainTrack_Message_T_TM_radio;

/* InfraLib::R_data_internal_T */
typedef struct kcg_tag_R_data_internal_T_Infra {
  M_TrackTrain_Radio_T_TM_radio_m message;
  CompressedPackets_T_Common_Type packets;
  kcg_int trigger;
  kcg_bool message_sent;
} R_data_internal_T_InfraLib;

/* InfraLib::B_data_internal_T */
typedef struct kcg_tag_B_data_internal_T_Infra {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Type packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} B_data_internal_T_InfraLib;

/* InfraLib::TrainPosRaw_T */
typedef struct kcg_tag_TrainPosRaw_T_InfraLib {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} TrainPosRaw_T_InfraLib;

/* InfraLib::TrackSectionData_T */
typedef struct kcg_tag_TrackSectionData_T_Infr {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} TrackSectionData_T_InfraLib;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct kcg_tag_P027V1_section_int_qdif {
  kcg_int NC_DIFF;
  kcg_int V_DIFF;
} P027V1_section_int_qdiff_T_TM_b;

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef kcg_int P003V1_trackide_sectionlist_T_T[32];

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct kcg_tag_P003V1_trackside_int_T_ {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int N_ITER;
  P003V1_trackide_sectionlist_T_T SECTIONS;
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
} P003V1_trackside_int_T_TM_basel;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_;

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef BCD_T_Obu_BasicTypes_Pkg telephoneNumber_T_Packet_TrainT[15];

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct kcg_tag_sNID_RADIO_T_Packet_Tra {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainT telephoneNumber;
} sNID_RADIO_T_Packet_TrainTypes_;

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef sNID_RADIO_T_Packet_TrainTypes_ aNID_RADIO_T_Packet_TrainTypes_[1];

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct kcg_tag_PT3_OnboardTelephoneNum {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_ aNID_RADIO;
} PT3_OnboardTelephoneNumbers_T_P;

/* RBC_Diagnostic_Pkg::DiagMsg_T */
typedef struct kcg_tag_DiagMsg_T_RBC_Diagnosti {
  kcg_bool valid;
  kcg_int count;
  T_TRAIN timestamp;
  DiagMsgType_E_RBC_Diagnostic_Pk diagType;
  DiagMsgSrc_E_RBC_Diagnostic_Pkg diagSrc;
  DiagMsgText_E_RBC_Diagnostic_Pk diagText;
} DiagMsg_T_RBC_Diagnostic_Pkg;

/* TrainToTrack::Position_Report */
typedef struct kcg_tag_Position_Report_TrainTo {
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
} Position_Report_TrainToTrack;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct kcg_tag_PT0_PositionReport_T_Pa {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} PT0_PositionReport_T_Packet_Tra;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct kcg_tag_Position_Report_based_o {
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
} Position_Report_based_on_two_ba;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct kcg_tag_PT1_PositionReport_2BG_ {
  kcg_bool valid;
  Position_Report_based_on_two_ba packet1;
} PT1_PositionReport_2BG_T_Packet;

/* TM_TrainToTrack::Array11 */
typedef kcg_int Array11_TM_TrainToTrack[11];

/* TM_TrainToTrack::P011_TrainTrack_int */
typedef kcg_int P011_TrainTrack_int_TM_TrainToT[25];

typedef kcg_int array_int_105[105];

typedef struct kcg_tag_struct_44135 {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_reference;
  kcg_int nid_em;
  Q_SCALE q_scale;
  kcg_int d_sr;
  kcg_int t_sh_rqst;
  kcg_int d_ref;
  Q_DIR q_dir;
  kcg_int d_emergencystop;
  M_VERSION m_version;
} struct_44135;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct_44135 _1_Radio_TrackTrain_Header_T_Ra;

/* TM_transitional::Radio_TrackTrain_Header_T */
typedef struct_44135 Radio_TrackTrain_Header_T_TM_tr;

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_499[499];

typedef kcg_int array_int_6[6];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_491[491];

typedef RadioTrackTrainMessageQueueEntr array_44501[7];

typedef RadioTrackTrainMessageQueueEntr array_44505[1];

typedef P041_section_int_T_TM array_44509[1];

typedef kcg_int array_int_104[104];

typedef kcg_int array_int_430[430];

typedef struct kcg_tag_struct_44555 {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct_44555;

/* TM::BaliseGroupData */
typedef struct_44555 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct_44555 BaliseGroupData_Basics;

typedef kcg_int array_int_5[5];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_5 aNID_NTC_T_Packet_TrainTypes_Pk;

/* TM_TrainToTrack::P011_ntc_list */
typedef array_int_5 P011_ntc_list_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list_array_T */
typedef array_int_5 P011_ntc_list_array_T_TM_TrainT;

/* TM_TrainToTrack::P003_nid_radio_list_t */
typedef array_int_5 P003_nid_radio_list_t_TM_TrainT;

/* TM_TrainToTrack::P003 */
typedef struct kcg_tag_P003_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainT nid_radio;
} P003_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_int_t */
typedef array_int_5 P003_nid_radio_list_int_t_TM_Tr;

typedef struct kcg_tag_struct_44600 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
  kcg_int nid_em;
} struct_44600;

/* TM_radio_messages::M_018_T */
typedef struct_44600 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct_44600 M_016_T_TM_radio_messages;

typedef struct kcg_tag_struct_44621 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_SH_request;
} struct_44621;

/* TM_radio_messages::M_027_T */
typedef struct_44621 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct_44621 M_028_T_TM_radio_messages;

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_72[72];

typedef P027V1_section_int_qdiff_T_TM_b array_44701[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array_44701 P027V1_trackside_qdifflist_T_TM;

/* TM_baseline2::P027V1_section_int_T */
typedef struct kcg_tag_P027V1_section_int_T_TM {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM SECTIONS_q_diff;
} P027V1_section_int_T_TM_baselin;

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef P027V1_section_int_T_TM_baselin P027V1_trackside_sectionlist_T_[32];

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct kcg_tag_P027V1_trackside_int_T_ {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_ SECTIONS_SSP;
} P027V1_trackside_int_T_TM_basel;

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef P027V1_section_int_T_TM_baselin _3_P027V1_OBU_sectionlist_int_T[33];

typedef P027V1_section_int_T_TM_baselin array_44567[1];

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array_44701 P027V1_OBU_sectionlist_int_qdif;

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdif;

typedef kcg_int array_int_496[496];

typedef IterPacket58_T_Packet_Types_Pkg array_44858[32];

/* PosRepParams_T */
typedef struct kcg_tag_PosRepParams_T {
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER m_NumberOfIncrementalDistancesA;
  array_44858 m_IncrementalDistancesAndQualif;
} PosRepParams_T;

/* DynamicConfig_T */
typedef struct kcg_tag_DynamicConfig_T {
  M_VERSION m_version;
  NationalParams_T m_NationalParams;
  MAReqParams_T m_MAReqParams;
  PosRepParams_T m_PosRepParams;
} DynamicConfig_T;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM_TrainToTrack::P009_TrainTrack_int */
typedef array_int_3 P009_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::Array03 */
typedef array_int_3 Array03_TM_TrainToTrack;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_56[56];

typedef P005_section_int_T_TM array_44900[1];

typedef kcg_int array_int_2[2];

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P046_OBU_sectionlist_array_T */
typedef P046_section_array_T_TM P046_OBU_sectionlist_array_T_TM[33];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM;

typedef P021_section_int_T_TM array_44930[1];

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToT;

typedef kcg_int array_int_70[70];

typedef kcg_int array_int_396[396];

typedef P015_section_int_T_TM array_44972[32];

/* TM::P015_trackide_sectionlist_T */
typedef array_44972 P015_trackide_sectionlist_T_TM;

/* TM::P015_trackside_int_T */
typedef struct kcg_tag_P015_trackside_int_T_TM {
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
} P015_trackside_int_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array_44972 P015_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_9[9];

typedef kcg_int array_int_24[24];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_1[1];

typedef DiagMsg_T_RBC_Diagnostic_Pkg array_45016[16];

typedef kcg_int array_int_236[236];

typedef struct kcg_tag_struct_45024 {
  M_VOLTAGE m_voltage;
  kcg_int nid_ctraction;
} struct_45024;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct_45024 sTractionIdentity_T_Packet_Trai;

/* TM_TrainToTrack::P011_voltage */
typedef struct_45024 P011_voltage_TM_TrainToTrack;

typedef struct_45024 array_44996[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array_44996 aTractionIdentity_T_Packet_Trai;

/* TrainData_T */
typedef struct kcg_tag_TrainData_T {
  NID_ENGINE nid_engine;
  kcg_int m_NumberOfOnboardPhoneNumbers;
  aNID_RADIO_T_Packet_TrainTypes_ m_OnboardPhoneNumbers;
  T_TRAIN t_train_ref;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_TRAIN l_train;
  V_MAXTRAIN v_maxtrain;
  M_LOADINGGAUGE m_loadinggauge;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  aTractionIdentity_T_Packet_Trai m_TractionIdentities;
  aNID_NTC_T_Packet_TrainTypes_Pk m_NationalSystemIdentities;
  NID_OPERATIONAL nid_operational;
} TrainData_T;

/* SessionManagement_T */
typedef struct kcg_tag_SessionManagement_T {
  TrainData_T m_TrainData;
  PosData_T m_PosData;
} SessionManagement_T;

/* RBC_DataBus_Pkg::RBC_Data_T */
typedef struct kcg_tag_RBC_Data_T_RBC_DataBus_ {
  SessionManagement_T session;
  DynamicConfig_T config;
  array_45016 diagnostic;
  _9_RadioTrackTrainMessageQueue_ messageQueue;
  Clock_T clockk;
  CompressedRadioMessage_TM lastSentTrackTrainMessage;
} RBC_Data_T_RBC_DataBus_Pkg;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct kcg_tag_PT11_ValidatedTrainData {
  kcg_bool valid;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_internal_Type_Obu_BasicTypes_ l_train;
  V_internal_Type_Obu_BasicTypes_ v_maxtrain;
  M_LOADINGGAUGE m_loadinggoage;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  kcg_int nIter_tractionIdentity;
  aTractionIdentity_T_Packet_Trai tractionIdentity;
  kcg_int nIter_ntc;
  aNID_NTC_T_Packet_TrainTypes_Pk nid_ntc;
} PT11_ValidatedTrainData_T_Packe;

/* Common_Types_Pkg::outPackets_T */
typedef struct kcg_tag_outPackets_T_Common_Typ {
  PT0_PositionReport_T_Packet_Tra p0;
  PT1_PositionReport_2BG_T_Packet p1;
  PT3_OnboardTelephoneNumbers_T_P p3;
  PT4_ErrorReporting_T_Packet_Tra p4;
  PT5_TrainRunningNumber_Packet_T p5;
  PT9_Level23_TransitionInformati p9;
  PT11_ValidatedTrainData_T_Packe p11;
} outPackets_T_Common_Types_Pkg;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct kcg_tag_Radio_TrainTrack_Messag {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio header;
  outPackets_T_Common_Types_Pkg packets;
} Radio_TrainTrack_Message_T_Radi;

/* TM_TrainToTrack::P011_voltage_list */
typedef array_44996 P011_voltage_list_TM_TrainToTra;

/* TM_TrainToTrack::P011 */
typedef struct kcg_tag_P011_TM_TrainToTrack {
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
  P011_voltage_list_TM_TrainToTra voltage_list;
  N_ITER n_iter_nid_ntc;
  P011_ntc_list_TM_TrainToTrack nid_ntc_list;
} P011_TM_TrainToTrack;

typedef P046_section_int_T_TM array_45033[1];

typedef kcg_int array_int_395[395];

typedef P058_section_int_T_TM array_45056[32];

/* TM::P058_trackide_sectionlist_T */
typedef array_45056 P058_trackide_sectionlist_T_TM;

/* TM::P058_trackside_int_T */
typedef struct kcg_tag_P058_trackside_int_T_TM {
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
} P058_trackside_int_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array_45056 P058_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef kcg_int array_int_8[8];

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t */
typedef array_int_8 P011_voltage_sections_array_fla;

/* TM_TrainToTrack::P003_TrainTrack_int */
typedef array_int_8 P003_TrainTrack_int_TM_TrainToT;

typedef struct kcg_tag_struct_45101 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct_45101;

/* TM_radio_messages::M_024_int_T */
typedef struct_45101 M_024_int_T_TM_radio_messages;

/* TM_radio_messages::M_003_int_T */
typedef struct_45101 M_003_int_T_TM_radio_messages;

typedef struct kcg_tag_struct_45111 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
} struct_45111;

/* TM_radio_messages::M_024_T */
typedef struct_45111 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct_45111 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct_45111 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct_45111 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct_45111 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct_45111 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct_45111 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct_45111 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct_45111 M_038_T_TM_radio_messages;

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _2_P027V1_OBU_sectionlist_array;

typedef kcg_int array_int_22[22];

typedef kcg_int array_int_492[492];

#ifndef kcg_copy_P065_trackside_int_T_T
#define kcg_copy_P065_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P065_trackside_int_T_TM)))
#endif /* kcg_copy_P065_trackside_int_T_T */

#ifndef kcg_copy_M_TrackTrain_Radio_T_T
#define kcg_copy_M_TrackTrain_Radio_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrackTrain_Radio_T_TM_radio_m)))
#endif /* kcg_copy_M_TrackTrain_Radio_T_T */

#ifndef kcg_copy_M_015_T_TM_radio_messa
#define kcg_copy_M_015_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_015_T_TM_radio_messages)))
#endif /* kcg_copy_M_015_T_TM_radio_messa */

#ifndef kcg_copy_M_034_T_TM_radio_messa
#define kcg_copy_M_034_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_034_T_TM_radio_messages)))
#endif /* kcg_copy_M_034_T_TM_radio_messa */

#ifndef kcg_copy_P041_trackside_int_T_T
#define kcg_copy_P041_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_trackside_int_T_TM)))
#endif /* kcg_copy_P041_trackside_int_T_T */

#ifndef kcg_copy_P041_section_int_T_TM
#define kcg_copy_P041_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_int_T_TM)))
#endif /* kcg_copy_P041_section_int_T_TM */

#ifndef kcg_copy_BaliseTelegramHeader_i
#define kcg_copy_BaliseTelegramHeader_i(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BaliseTelegramHeader_int_T_TM)))
#endif /* kcg_copy_BaliseTelegramHeader_i */

#ifndef kcg_copy_struct_44135
#define kcg_copy_struct_44135(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_44135)))
#endif /* kcg_copy_struct_44135 */

#ifndef kcg_copy_TelegramHeader_T_BG_Ty
#define kcg_copy_TelegramHeader_T_BG_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeader_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeader_T_BG_Ty */

#ifndef kcg_copy_P058_trackside_int_T_T
#define kcg_copy_P058_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_trackside_int_T_TM)))
#endif /* kcg_copy_P058_trackside_int_T_T */

#ifndef kcg_copy_P021_trackside_int_T_T
#define kcg_copy_P021_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_trackside_int_T_TM)))
#endif /* kcg_copy_P021_trackside_int_T_T */

#ifndef kcg_copy_P005_trackside_int_T_T
#define kcg_copy_P005_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_trackside_int_T_TM)))
#endif /* kcg_copy_P005_trackside_int_T_T */

#ifndef kcg_copy_P015_trackside_int_T_T
#define kcg_copy_P015_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_trackside_int_T_TM)))
#endif /* kcg_copy_P015_trackside_int_T_T */

#ifndef kcg_copy_P027V1_trackside_int_T
#define kcg_copy_P027V1_trackside_int_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_trackside_int_T_TM_basel)))
#endif /* kcg_copy_P027V1_trackside_int_T */

#ifndef kcg_copy_P003V1_trackside_int_T
#define kcg_copy_P003V1_trackside_int_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003V1_trackside_int_T_TM_basel)))
#endif /* kcg_copy_P003V1_trackside_int_T */

#ifndef kcg_copy_P001_TM_TrainToTrack
#define kcg_copy_P001_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P001_TM_TrainToTrack)))
#endif /* kcg_copy_P001_TM_TrainToTrack */

#ifndef kcg_copy_P000_TM_TrainToTrack
#define kcg_copy_P000_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P000_TM_TrainToTrack)))
#endif /* kcg_copy_P000_TM_TrainToTrack */

#ifndef kcg_copy_P011_TM_TrainToTrack
#define kcg_copy_P011_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P011_TM_TrainToTrack)))
#endif /* kcg_copy_P011_TM_TrainToTrack */

#ifndef kcg_copy_Position_Report_TrainT
#define kcg_copy_Position_Report_TrainT(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_TrainToTrack)))
#endif /* kcg_copy_Position_Report_TrainT */

#ifndef kcg_copy_Position_Report_based_
#define kcg_copy_Position_Report_based_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_based_on_two_ba)))
#endif /* kcg_copy_Position_Report_based_ */

#ifndef kcg_copy_PT11_ValidatedTrainDat
#define kcg_copy_PT11_ValidatedTrainDat(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT11_ValidatedTrainData_T_Packe)))
#endif /* kcg_copy_PT11_ValidatedTrainDat */

#ifndef kcg_copy_TrainData_T
#define kcg_copy_TrainData_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainData_T)))
#endif /* kcg_copy_TrainData_T */

#ifndef kcg_copy_PosData_T
#define kcg_copy_PosData_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PosData_T)))
#endif /* kcg_copy_PosData_T */

#ifndef kcg_copy__6_Radio_TrackTrain_He
#define kcg_copy__6_Radio_TrackTrain_He(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_6_Radio_TrackTrain_Header_T_TM)))
#endif /* kcg_copy__6_Radio_TrackTrain_He */

#ifndef kcg_copy_PT4_ErrorReporting_T_P
#define kcg_copy_PT4_ErrorReporting_T_P(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT4_ErrorReporting_T_Packet_Tra)))
#endif /* kcg_copy_PT4_ErrorReporting_T_P */

#ifndef kcg_copy_MetadataElement_T_Comm
#define kcg_copy_MetadataElement_T_Comm(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MetadataElement_T_Common_Types_)))
#endif /* kcg_copy_MetadataElement_T_Comm */

#ifndef kcg_copy_P027V1_section_int_T_T
#define kcg_copy_P027V1_section_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_int_T_TM_baselin)))
#endif /* kcg_copy_P027V1_section_int_T_T */

#ifndef kcg_copy_P005_TM_TrainToTrack
#define kcg_copy_P005_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_TM_TrainToTrack)))
#endif /* kcg_copy_P005_TM_TrainToTrack */

#ifndef kcg_copy_DynamicConfig_T
#define kcg_copy_DynamicConfig_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DynamicConfig_T)))
#endif /* kcg_copy_DynamicConfig_T */

#ifndef kcg_copy_B_data_internal_T_Infr
#define kcg_copy_B_data_internal_T_Infr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (B_data_internal_T_InfraLib)))
#endif /* kcg_copy_B_data_internal_T_Infr */

#ifndef kcg_copy_PT0_PositionReport_T_P
#define kcg_copy_PT0_PositionReport_T_P(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT0_PositionReport_T_Packet_Tra)))
#endif /* kcg_copy_PT0_PositionReport_T_P */

#ifndef kcg_copy_PT1_PositionReport_2BG
#define kcg_copy_PT1_PositionReport_2BG(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT1_PositionReport_2BG_T_Packet)))
#endif /* kcg_copy_PT1_PositionReport_2BG */

#ifndef kcg_copy_SessionManagement_T
#define kcg_copy_SessionManagement_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SessionManagement_T)))
#endif /* kcg_copy_SessionManagement_T */

#ifndef kcg_copy_struct_44555
#define kcg_copy_struct_44555(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_44555)))
#endif /* kcg_copy_struct_44555 */

#ifndef kcg_copy_IterPacket58_T_Packet_
#define kcg_copy_IterPacket58_T_Packet_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (IterPacket58_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58_T_Packet_ */

#ifndef kcg_copy_M_032_int_T_TM_radio_m
#define kcg_copy_M_032_int_T_TM_radio_m(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_032_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_032_int_T_TM_radio_m */

#ifndef kcg_copy_M_008_int_T_TM_radio_m
#define kcg_copy_M_008_int_T_TM_radio_m(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_008_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_008_int_T_TM_radio_m */

#ifndef kcg_copy_struct_44600
#define kcg_copy_struct_44600(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_44600)))
#endif /* kcg_copy_struct_44600 */

#ifndef kcg_copy_M_008_T_TM_radio_messa
#define kcg_copy_M_008_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_008_T_TM_radio_messages)))
#endif /* kcg_copy_M_008_T_TM_radio_messa */

#ifndef kcg_copy_struct_44621
#define kcg_copy_struct_44621(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_44621)))
#endif /* kcg_copy_struct_44621 */

#ifndef kcg_copy_P057_trackside_int_T_T
#define kcg_copy_P057_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P057_trackside_int_T_TM)))
#endif /* kcg_copy_P057_trackside_int_T_T */

#ifndef kcg_copy_P005_section_int_T_TM
#define kcg_copy_P005_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_section_int_T_TM)))
#endif /* kcg_copy_P005_section_int_T_TM */

#ifndef kcg_copy_NationalParams_T
#define kcg_copy_NationalParams_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NationalParams_T)))
#endif /* kcg_copy_NationalParams_T */

#ifndef kcg_copy_TrainPosRaw_T_InfraLib
#define kcg_copy_TrainPosRaw_T_InfraLib(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainPosRaw_T_InfraLib)))
#endif /* kcg_copy_TrainPosRaw_T_InfraLib */

#ifndef kcg_copy__9_RadioTrackTrainMess
#define kcg_copy__9_RadioTrackTrainMess(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_9_RadioTrackTrainMessageQueue_)))
#endif /* kcg_copy__9_RadioTrackTrainMess */

#ifndef kcg_copy_CompressedPackets_T_Co
#define kcg_copy_CompressedPackets_T_Co(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedPackets_T_Common_Type)))
#endif /* kcg_copy_CompressedPackets_T_Co */

#ifndef kcg_copy_P004_TM_TrainToTrack
#define kcg_copy_P004_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P004_TM_TrainToTrack)))
#endif /* kcg_copy_P004_TM_TrainToTrack */

#ifndef kcg_copy_PT9_Level23_Transition
#define kcg_copy_PT9_Level23_Transition(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT9_Level23_TransitionInformati)))
#endif /* kcg_copy_PT9_Level23_Transition */

#ifndef kcg_copy_M_002_T_TM_radio_messa
#define kcg_copy_M_002_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_002_T_TM_radio_messages)))
#endif /* kcg_copy_M_002_T_TM_radio_messa */

#ifndef kcg_copy_M_045_T_TM_radio_messa
#define kcg_copy_M_045_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_045_T_TM_radio_messages)))
#endif /* kcg_copy_M_045_T_TM_radio_messa */

#ifndef kcg_copy_M_033_T_TM_radio_messa
#define kcg_copy_M_033_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_033_T_TM_radio_messages)))
#endif /* kcg_copy_M_033_T_TM_radio_messa */

#ifndef kcg_copy_M_032_T_TM_radio_messa
#define kcg_copy_M_032_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_032_T_TM_radio_messages)))
#endif /* kcg_copy_M_032_T_TM_radio_messa */

#ifndef kcg_copy_P046_trackside_int_T_T
#define kcg_copy_P046_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_trackside_int_T_TM)))
#endif /* kcg_copy_P046_trackside_int_T_T */

#ifndef kcg_copy_P042_trackside_int_T_T
#define kcg_copy_P042_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P042_trackside_int_T_TM)))
#endif /* kcg_copy_P042_trackside_int_T_T */

#ifndef kcg_copy_M_TrainTrack_MessageHd
#define kcg_copy_M_TrainTrack_MessageHd(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_MessageHd_T_TM_rad)))
#endif /* kcg_copy_M_TrainTrack_MessageHd */

#ifndef kcg_copy_Radio_TrainTrack_Heade
#define kcg_copy_Radio_TrainTrack_Heade(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrainTrack_Header_T_Radio)))
#endif /* kcg_copy_Radio_TrainTrack_Heade */

#ifndef kcg_copy_P027V1_section_int_qdi
#define kcg_copy_P027V1_section_int_qdi(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_int_qdiff_T_TM_b)))
#endif /* kcg_copy_P027V1_section_int_qdi */

#ifndef kcg_copy_outPackets_T_Common_Ty
#define kcg_copy_outPackets_T_Common_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (outPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_outPackets_T_Common_Ty */

#ifndef kcg_copy_PosRepParams_T
#define kcg_copy_PosRepParams_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PosRepParams_T)))
#endif /* kcg_copy_PosRepParams_T */

#ifndef kcg_copy_M_TrainTrack_Message_T
#define kcg_copy_M_TrainTrack_Message_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_Message_T_TM_radio)))
#endif /* kcg_copy_M_TrainTrack_Message_T */

#ifndef kcg_copy_PT5_TrainRunningNumber
#define kcg_copy_PT5_TrainRunningNumber(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT5_TrainRunningNumber_Packet_T)))
#endif /* kcg_copy_PT5_TrainRunningNumber */

#ifndef kcg_copy_P058_section_int_T_TM
#define kcg_copy_P058_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_section_int_T_TM)))
#endif /* kcg_copy_P058_section_int_T_TM */

#ifndef kcg_copy_PT3_OnboardTelephoneNu
#define kcg_copy_PT3_OnboardTelephoneNu(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT3_OnboardTelephoneNumbers_T_P)))
#endif /* kcg_copy_PT3_OnboardTelephoneNu */

#ifndef kcg_copy_P015_section_int_T_TM
#define kcg_copy_P015_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_section_int_T_TM)))
#endif /* kcg_copy_P015_section_int_T_TM */

#ifndef kcg_copy_P021_section_int_T_TM
#define kcg_copy_P021_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_int_T_TM)))
#endif /* kcg_copy_P021_section_int_T_TM */

#ifndef kcg_copy_Radio_TrainTrack_Messa
#define kcg_copy_Radio_TrainTrack_Messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrainTrack_Message_T_Radi)))
#endif /* kcg_copy_Radio_TrainTrack_Messa */

#ifndef kcg_copy_Clock_T
#define kcg_copy_Clock_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Clock_T)))
#endif /* kcg_copy_Clock_T */

#ifndef kcg_copy_TrackSectionData_T_Inf
#define kcg_copy_TrackSectionData_T_Inf(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrackSectionData_T_InfraLib)))
#endif /* kcg_copy_TrackSectionData_T_Inf */

#ifndef kcg_copy_RadioTrackTrainMessage
#define kcg_copy_RadioTrackTrainMessage(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioTrackTrainMessageQueueEntr)))
#endif /* kcg_copy_RadioTrackTrainMessage */

#ifndef kcg_copy_CompressedBaliseMessag
#define kcg_copy_CompressedBaliseMessag(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedBaliseMessage_TM)))
#endif /* kcg_copy_CompressedBaliseMessag */

#ifndef kcg_copy_CompressedRadioMessage
#define kcg_copy_CompressedRadioMessage(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedRadioMessage_TM)))
#endif /* kcg_copy_CompressedRadioMessage */

#ifndef kcg_copy_P255_trackside_int_T_T
#define kcg_copy_P255_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P255_trackside_int_T_TM)))
#endif /* kcg_copy_P255_trackside_int_T_T */

#ifndef kcg_copy_P046_section_int_T_TM
#define kcg_copy_P046_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_section_int_T_TM)))
#endif /* kcg_copy_P046_section_int_T_TM */

#ifndef kcg_copy_struct_45024
#define kcg_copy_struct_45024(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_45024)))
#endif /* kcg_copy_struct_45024 */

#ifndef kcg_copy_P045_trackside_int_T_T
#define kcg_copy_P045_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P045_trackside_int_T_TM)))
#endif /* kcg_copy_P045_trackside_int_T_T */

#ifndef kcg_copy_MAReqParams_T
#define kcg_copy_MAReqParams_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MAReqParams_T)))
#endif /* kcg_copy_MAReqParams_T */

#ifndef kcg_copy_P003_TM_TrainToTrack
#define kcg_copy_P003_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_TM_TrainToTrack)))
#endif /* kcg_copy_P003_TM_TrainToTrack */

#ifndef kcg_copy_sNID_RADIO_T_Packet_Tr
#define kcg_copy_sNID_RADIO_T_Packet_Tr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sNID_RADIO_T_Packet_TrainTypes_)))
#endif /* kcg_copy_sNID_RADIO_T_Packet_Tr */

#ifndef kcg_copy_P137_trackside_int_T_T
#define kcg_copy_P137_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P137_trackside_int_T_TM)))
#endif /* kcg_copy_P137_trackside_int_T_T */

#ifndef kcg_copy_RBC_Data_T_RBC_DataBus
#define kcg_copy_RBC_Data_T_RBC_DataBus(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Data_T_RBC_DataBus_Pkg)))
#endif /* kcg_copy_RBC_Data_T_RBC_DataBus */

#ifndef kcg_copy_struct_45101
#define kcg_copy_struct_45101(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_45101)))
#endif /* kcg_copy_struct_45101 */

#ifndef kcg_copy_struct_45111
#define kcg_copy_struct_45111(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_45111)))
#endif /* kcg_copy_struct_45111 */

#ifndef kcg_copy_P009_TM_TrainToTrack
#define kcg_copy_P009_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P009_TM_TrainToTrack)))
#endif /* kcg_copy_P009_TM_TrainToTrack */

#ifndef kcg_copy_R_data_internal_T_Infr
#define kcg_copy_R_data_internal_T_Infr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (R_data_internal_T_InfraLib)))
#endif /* kcg_copy_R_data_internal_T_Infr */

#ifndef kcg_copy_DiagMsg_T_RBC_Diagnost
#define kcg_copy_DiagMsg_T_RBC_Diagnost(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DiagMsg_T_RBC_Diagnostic_Pkg)))
#endif /* kcg_copy_DiagMsg_T_RBC_Diagnost */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_499
#define kcg_copy_array_int_499(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_499)))
#endif /* kcg_copy_array_int_499 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_150
#define kcg_copy_array_int_150(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_150)))
#endif /* kcg_copy_array_int_150 */

#ifndef kcg_copy_array_int_21
#define kcg_copy_array_int_21(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_21)))
#endif /* kcg_copy_array_int_21 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_44501
#define kcg_copy_array_44501(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44501)))
#endif /* kcg_copy_array_44501 */

#ifndef kcg_copy_array_44505
#define kcg_copy_array_44505(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44505)))
#endif /* kcg_copy_array_44505 */

#ifndef kcg_copy_array_44509
#define kcg_copy_array_44509(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44509)))
#endif /* kcg_copy_array_44509 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_P046_sections_array_fl
#define kcg_copy_P046_sections_array_fl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_sections_array_flat_T_TM)))
#endif /* kcg_copy_P046_sections_array_fl */

#ifndef kcg_copy_P005_OBU_sectionlist_i
#define kcg_copy_P005_OBU_sectionlist_i(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_i */

#ifndef kcg_copy_array_44567
#define kcg_copy_array_44567(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44567)))
#endif /* kcg_copy_array_44567 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_M_TrainTrack_compresse
#define kcg_copy_M_TrainTrack_compresse(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_compressed_packets)))
#endif /* kcg_copy_M_TrainTrack_compresse */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_P041_OBU_sectionlist_i
#define kcg_copy_P041_OBU_sectionlist_i(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_i */

#ifndef kcg_copy_P015_section_array_T_T
#define kcg_copy_P015_section_array_T_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_section_array_T_TM)))
#endif /* kcg_copy_P015_section_array_T_T */

#ifndef kcg_copy_array_int_72
#define kcg_copy_array_int_72(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_72)))
#endif /* kcg_copy_array_int_72 */

#ifndef kcg_copy_array_44701
#define kcg_copy_array_44701(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44701)))
#endif /* kcg_copy_array_44701 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_P021_trackide_sectionl
#define kcg_copy_P021_trackide_sectionl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P021_trackide_sectionl */

#ifndef kcg_copy_P005_sections_array_fl
#define kcg_copy_P005_sections_array_fl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_sections_array_flat_T_TM)))
#endif /* kcg_copy_P005_sections_array_fl */

#ifndef kcg_copy_Array11_TM_TrainToTrac
#define kcg_copy_Array11_TM_TrainToTrac(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array11_TM_TrainToTrack)))
#endif /* kcg_copy_Array11_TM_TrainToTrac */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_copy_array_44858
#define kcg_copy_array_44858(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44858)))
#endif /* kcg_copy_array_44858 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_56
#define kcg_copy_array_int_56(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_56)))
#endif /* kcg_copy_array_int_56 */

#ifndef kcg_copy_P046_OBU_sectionlist_i
#define kcg_copy_P046_OBU_sectionlist_i(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_i */

#ifndef kcg_copy__3_P027V1_OBU_sectionl
#define kcg_copy__3_P027V1_OBU_sectionl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_3_P027V1_OBU_sectionlist_int_T)))
#endif /* kcg_copy__3_P027V1_OBU_sectionl */

#ifndef kcg_copy_P046_OBU_sectionlist_a
#define kcg_copy_P046_OBU_sectionlist_a(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_a */

#ifndef kcg_copy_P005_trackide_sectionl
#define kcg_copy_P005_trackide_sectionl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P005_trackide_sectionl */

#ifndef kcg_copy_array_44900
#define kcg_copy_array_44900(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44900)))
#endif /* kcg_copy_array_44900 */

#ifndef kcg_copy_P011_TrainTrack_int_TM
#define kcg_copy_P011_TrainTrack_int_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P011_TrainTrack_int_TM_TrainToT)))
#endif /* kcg_copy_P011_TrainTrack_int_TM */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_aNID_RADIO_T_Packet_Tr
#define kcg_copy_aNID_RADIO_T_Packet_Tr(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (aNID_RADIO_T_Packet_TrainTypes_)))
#endif /* kcg_copy_aNID_RADIO_T_Packet_Tr */

#ifndef kcg_copy_array_44930
#define kcg_copy_array_44930(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44930)))
#endif /* kcg_copy_array_44930 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array_int_70
#define kcg_copy_array_int_70(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_70)))
#endif /* kcg_copy_array_int_70 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_P003V1_trackide_sectio
#define kcg_copy_P003V1_trackide_sectio(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P003V1_trackide_sectionlist_T_T)))
#endif /* kcg_copy_P003V1_trackide_sectio */

#ifndef kcg_copy_Metadata_T_Common_Type
#define kcg_copy_Metadata_T_Common_Type(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Type */

#ifndef kcg_copy_array_44972
#define kcg_copy_array_44972(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44972)))
#endif /* kcg_copy_array_44972 */

#ifndef kcg_copy_P015_OBU_sectionlist_a
#define kcg_copy_P015_OBU_sectionlist_a(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P015_OBU_sectionlist_a */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_44996
#define kcg_copy_array_44996(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_44996)))
#endif /* kcg_copy_array_44996 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_P046_trackide_sectionl
#define kcg_copy_P046_trackide_sectionl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P046_trackide_sectionl */

#ifndef kcg_copy_array_45016
#define kcg_copy_array_45016(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_45016)))
#endif /* kcg_copy_array_45016 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy__8_RadioTrackTrainMess
#define kcg_copy__8_RadioTrackTrainMess(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_8_RadioTrackTrainMessageQueueE)))
#endif /* kcg_copy__8_RadioTrackTrainMess */

#ifndef kcg_copy_array_45033
#define kcg_copy_array_45033(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_45033)))
#endif /* kcg_copy_array_45033 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_45056
#define kcg_copy_array_45056(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_45056)))
#endif /* kcg_copy_array_45056 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_P041_trackide_sectionl
#define kcg_copy_P041_trackide_sectionl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P041_trackide_sectionl */

#ifndef kcg_copy_P005_OBU_sectionlist_a
#define kcg_copy_P005_OBU_sectionlist_a(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_a */

#ifndef kcg_copy_P021_OBU_sectionlist_i
#define kcg_copy_P021_OBU_sectionlist_i(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_i */

#ifndef kcg_copy_P027V1_trackside_secti
#define kcg_copy_P027V1_trackside_secti(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_trackside_sectionlist_T_)))
#endif /* kcg_copy_P027V1_trackside_secti */

#ifndef kcg_copy_telephoneNumber_T_Pack
#define kcg_copy_telephoneNumber_T_Pack(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (telephoneNumber_T_Packet_TrainT)))
#endif /* kcg_copy_telephoneNumber_T_Pack */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_CompressedPacketData_T
#define kcg_copy_CompressedPacketData_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (CompressedPacketData_T_Common_T)))
#endif /* kcg_copy_CompressedPacketData_T */

#ifndef kcg_copy_P005_section_array_T_T
#define kcg_copy_P005_section_array_T_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_section_array_T_TM)))
#endif /* kcg_copy_P005_section_array_T_T */

#ifndef kcg_copy_array_int_22
#define kcg_copy_array_int_22(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_22)))
#endif /* kcg_copy_array_int_22 */

#ifndef kcg_copy_array_int_492
#define kcg_copy_array_int_492(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_492)))
#endif /* kcg_copy_array_int_492 */

#ifndef kcg_copy_P015_sections_array_fl
#define kcg_copy_P015_sections_array_fl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_sections_array_flat_T_TM)))
#endif /* kcg_copy_P015_sections_array_fl */

#ifdef kcg_use_P065_trackside_int_T_TM
#ifndef kcg_comp_P065_trackside_int_T_T
extern kcg_bool kcg_comp_P065_trackside_int_T_T(
  P065_trackside_int_T_TM *kcg_c1,
  P065_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P065_trackside_int_T_T */
#endif /* kcg_use_P065_trackside_int_T_TM */

#ifdef kcg_use_M_TrackTrain_Radio_T_TM
#ifndef kcg_comp_M_TrackTrain_Radio_T_T
extern kcg_bool kcg_comp_M_TrackTrain_Radio_T_T(
  M_TrackTrain_Radio_T_TM_radio_m *kcg_c1,
  M_TrackTrain_Radio_T_TM_radio_m *kcg_c2);
#endif /* kcg_comp_M_TrackTrain_Radio_T_T */
#endif /* kcg_use_M_TrackTrain_Radio_T_TM */

#ifdef kcg_use_M_015_T_TM_radio_messag
#ifndef kcg_comp_M_015_T_TM_radio_messa
extern kcg_bool kcg_comp_M_015_T_TM_radio_messa(
  M_015_T_TM_radio_messages *kcg_c1,
  M_015_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_015_T_TM_radio_messa */
#endif /* kcg_use_M_015_T_TM_radio_messag */

#ifdef kcg_use_M_034_T_TM_radio_messag
#ifndef kcg_comp_M_034_T_TM_radio_messa
extern kcg_bool kcg_comp_M_034_T_TM_radio_messa(
  M_034_T_TM_radio_messages *kcg_c1,
  M_034_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_034_T_TM_radio_messa */
#endif /* kcg_use_M_034_T_TM_radio_messag */

#ifdef kcg_use_P041_trackside_int_T_TM
#ifndef kcg_comp_P041_trackside_int_T_T
extern kcg_bool kcg_comp_P041_trackside_int_T_T(
  P041_trackside_int_T_TM *kcg_c1,
  P041_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackside_int_T_T */
#endif /* kcg_use_P041_trackside_int_T_TM */

#ifdef kcg_use_P041_section_int_T_TM
#ifndef kcg_comp_P041_section_int_T_TM
extern kcg_bool kcg_comp_P041_section_int_T_TM(
  P041_section_int_T_TM *kcg_c1,
  P041_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_int_T_TM */
#endif /* kcg_use_P041_section_int_T_TM */

#ifdef kcg_use_BaliseTelegramHeader_in
#ifndef kcg_comp_BaliseTelegramHeader_i
extern kcg_bool kcg_comp_BaliseTelegramHeader_i(
  BaliseTelegramHeader_int_T_TM *kcg_c1,
  BaliseTelegramHeader_int_T_TM *kcg_c2);
#endif /* kcg_comp_BaliseTelegramHeader_i */
#endif /* kcg_use_BaliseTelegramHeader_in */

#ifdef kcg_use_struct_44135
#ifndef kcg_comp_struct_44135
extern kcg_bool kcg_comp_struct_44135(
  struct_44135 *kcg_c1,
  struct_44135 *kcg_c2);
#endif /* kcg_comp_struct_44135 */
#endif /* kcg_use_struct_44135 */

#ifdef kcg_use_TelegramHeader_T_BG_Typ
#ifndef kcg_comp_TelegramHeader_T_BG_Ty
extern kcg_bool kcg_comp_TelegramHeader_T_BG_Ty(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramHeader_T_BG_Ty */
#endif /* kcg_use_TelegramHeader_T_BG_Typ */

#ifdef kcg_use_P058_trackside_int_T_TM
#ifndef kcg_comp_P058_trackside_int_T_T
extern kcg_bool kcg_comp_P058_trackside_int_T_T(
  P058_trackside_int_T_TM *kcg_c1,
  P058_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P058_trackside_int_T_T */
#endif /* kcg_use_P058_trackside_int_T_TM */

#ifdef kcg_use_P021_trackside_int_T_TM
#ifndef kcg_comp_P021_trackside_int_T_T
extern kcg_bool kcg_comp_P021_trackside_int_T_T(
  P021_trackside_int_T_TM *kcg_c1,
  P021_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackside_int_T_T */
#endif /* kcg_use_P021_trackside_int_T_TM */

#ifdef kcg_use_P005_trackside_int_T_TM
#ifndef kcg_comp_P005_trackside_int_T_T
extern kcg_bool kcg_comp_P005_trackside_int_T_T(
  P005_trackside_int_T_TM *kcg_c1,
  P005_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_trackside_int_T_T */
#endif /* kcg_use_P005_trackside_int_T_TM */

#ifdef kcg_use_P015_trackside_int_T_TM
#ifndef kcg_comp_P015_trackside_int_T_T
extern kcg_bool kcg_comp_P015_trackside_int_T_T(
  P015_trackside_int_T_TM *kcg_c1,
  P015_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P015_trackside_int_T_T */
#endif /* kcg_use_P015_trackside_int_T_TM */

#ifdef kcg_use_P027V1_trackside_int_T_
#ifndef kcg_comp_P027V1_trackside_int_T
extern kcg_bool kcg_comp_P027V1_trackside_int_T(
  P027V1_trackside_int_T_TM_basel *kcg_c1,
  P027V1_trackside_int_T_TM_basel *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_int_T */
#endif /* kcg_use_P027V1_trackside_int_T_ */

#ifdef kcg_use_P003V1_trackside_int_T_
#ifndef kcg_comp_P003V1_trackside_int_T
extern kcg_bool kcg_comp_P003V1_trackside_int_T(
  P003V1_trackside_int_T_TM_basel *kcg_c1,
  P003V1_trackside_int_T_TM_basel *kcg_c2);
#endif /* kcg_comp_P003V1_trackside_int_T */
#endif /* kcg_use_P003V1_trackside_int_T_ */

#ifdef kcg_use_P001_TM_TrainToTrack
#ifndef kcg_comp_P001_TM_TrainToTrack
extern kcg_bool kcg_comp_P001_TM_TrainToTrack(
  P001_TM_TrainToTrack *kcg_c1,
  P001_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P001_TM_TrainToTrack */
#endif /* kcg_use_P001_TM_TrainToTrack */

#ifdef kcg_use_P000_TM_TrainToTrack
#ifndef kcg_comp_P000_TM_TrainToTrack
extern kcg_bool kcg_comp_P000_TM_TrainToTrack(
  P000_TM_TrainToTrack *kcg_c1,
  P000_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P000_TM_TrainToTrack */
#endif /* kcg_use_P000_TM_TrainToTrack */

#ifdef kcg_use_P011_TM_TrainToTrack
#ifndef kcg_comp_P011_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_TM_TrainToTrack(
  P011_TM_TrainToTrack *kcg_c1,
  P011_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_TM_TrainToTrack */
#endif /* kcg_use_P011_TM_TrainToTrack */

#ifdef kcg_use_Position_Report_TrainTo
#ifndef kcg_comp_Position_Report_TrainT
extern kcg_bool kcg_comp_Position_Report_TrainT(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Position_Report_TrainT */
#endif /* kcg_use_Position_Report_TrainTo */

#ifdef kcg_use_Position_Report_based_o
#ifndef kcg_comp_Position_Report_based_
extern kcg_bool kcg_comp_Position_Report_based_(
  Position_Report_based_on_two_ba *kcg_c1,
  Position_Report_based_on_two_ba *kcg_c2);
#endif /* kcg_comp_Position_Report_based_ */
#endif /* kcg_use_Position_Report_based_o */

#ifdef kcg_use_PT11_ValidatedTrainData
#ifndef kcg_comp_PT11_ValidatedTrainDat
extern kcg_bool kcg_comp_PT11_ValidatedTrainDat(
  PT11_ValidatedTrainData_T_Packe *kcg_c1,
  PT11_ValidatedTrainData_T_Packe *kcg_c2);
#endif /* kcg_comp_PT11_ValidatedTrainDat */
#endif /* kcg_use_PT11_ValidatedTrainData */

#ifdef kcg_use_TrainData_T
#ifndef kcg_comp_TrainData_T
extern kcg_bool kcg_comp_TrainData_T(TrainData_T *kcg_c1, TrainData_T *kcg_c2);
#endif /* kcg_comp_TrainData_T */
#endif /* kcg_use_TrainData_T */

#ifdef kcg_use_PosData_T
#ifndef kcg_comp_PosData_T
extern kcg_bool kcg_comp_PosData_T(PosData_T *kcg_c1, PosData_T *kcg_c2);
#endif /* kcg_comp_PosData_T */
#endif /* kcg_use_PosData_T */

#ifdef kcg_use__6_Radio_TrackTrain_Hea
#ifndef kcg_comp__6_Radio_TrackTrain_He
extern kcg_bool kcg_comp__6_Radio_TrackTrain_He(
  _6_Radio_TrackTrain_Header_T_TM *kcg_c1,
  _6_Radio_TrackTrain_Header_T_TM *kcg_c2);
#endif /* kcg_comp__6_Radio_TrackTrain_He */
#endif /* kcg_use__6_Radio_TrackTrain_Hea */

#ifdef kcg_use_PT4_ErrorReporting_T_Pa
#ifndef kcg_comp_PT4_ErrorReporting_T_P
extern kcg_bool kcg_comp_PT4_ErrorReporting_T_P(
  PT4_ErrorReporting_T_Packet_Tra *kcg_c1,
  PT4_ErrorReporting_T_Packet_Tra *kcg_c2);
#endif /* kcg_comp_PT4_ErrorReporting_T_P */
#endif /* kcg_use_PT4_ErrorReporting_T_Pa */

#ifdef kcg_use_MetadataElement_T_Commo
#ifndef kcg_comp_MetadataElement_T_Comm
extern kcg_bool kcg_comp_MetadataElement_T_Comm(
  MetadataElement_T_Common_Types_ *kcg_c1,
  MetadataElement_T_Common_Types_ *kcg_c2);
#endif /* kcg_comp_MetadataElement_T_Comm */
#endif /* kcg_use_MetadataElement_T_Commo */

#ifdef kcg_use_P027V1_section_int_T_TM
#ifndef kcg_comp_P027V1_section_int_T_T
extern kcg_bool kcg_comp_P027V1_section_int_T_T(
  P027V1_section_int_T_TM_baselin *kcg_c1,
  P027V1_section_int_T_TM_baselin *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_T_T */
#endif /* kcg_use_P027V1_section_int_T_TM */

#ifdef kcg_use_P005_TM_TrainToTrack
#ifndef kcg_comp_P005_TM_TrainToTrack
extern kcg_bool kcg_comp_P005_TM_TrainToTrack(
  P005_TM_TrainToTrack *kcg_c1,
  P005_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P005_TM_TrainToTrack */
#endif /* kcg_use_P005_TM_TrainToTrack */

#ifdef kcg_use_DynamicConfig_T
#ifndef kcg_comp_DynamicConfig_T
extern kcg_bool kcg_comp_DynamicConfig_T(
  DynamicConfig_T *kcg_c1,
  DynamicConfig_T *kcg_c2);
#endif /* kcg_comp_DynamicConfig_T */
#endif /* kcg_use_DynamicConfig_T */

#ifdef kcg_use_B_data_internal_T_Infra
#ifndef kcg_comp_B_data_internal_T_Infr
extern kcg_bool kcg_comp_B_data_internal_T_Infr(
  B_data_internal_T_InfraLib *kcg_c1,
  B_data_internal_T_InfraLib *kcg_c2);
#endif /* kcg_comp_B_data_internal_T_Infr */
#endif /* kcg_use_B_data_internal_T_Infra */

#ifdef kcg_use_PT0_PositionReport_T_Pa
#ifndef kcg_comp_PT0_PositionReport_T_P
extern kcg_bool kcg_comp_PT0_PositionReport_T_P(
  PT0_PositionReport_T_Packet_Tra *kcg_c1,
  PT0_PositionReport_T_Packet_Tra *kcg_c2);
#endif /* kcg_comp_PT0_PositionReport_T_P */
#endif /* kcg_use_PT0_PositionReport_T_Pa */

#ifdef kcg_use_PT1_PositionReport_2BG_
#ifndef kcg_comp_PT1_PositionReport_2BG
extern kcg_bool kcg_comp_PT1_PositionReport_2BG(
  PT1_PositionReport_2BG_T_Packet *kcg_c1,
  PT1_PositionReport_2BG_T_Packet *kcg_c2);
#endif /* kcg_comp_PT1_PositionReport_2BG */
#endif /* kcg_use_PT1_PositionReport_2BG_ */

#ifdef kcg_use_SessionManagement_T
#ifndef kcg_comp_SessionManagement_T
extern kcg_bool kcg_comp_SessionManagement_T(
  SessionManagement_T *kcg_c1,
  SessionManagement_T *kcg_c2);
#endif /* kcg_comp_SessionManagement_T */
#endif /* kcg_use_SessionManagement_T */

#ifdef kcg_use_struct_44555
#ifndef kcg_comp_struct_44555
extern kcg_bool kcg_comp_struct_44555(
  struct_44555 *kcg_c1,
  struct_44555 *kcg_c2);
#endif /* kcg_comp_struct_44555 */
#endif /* kcg_use_struct_44555 */

#ifdef kcg_use_IterPacket58_T_Packet_T
#ifndef kcg_comp_IterPacket58_T_Packet_
extern kcg_bool kcg_comp_IterPacket58_T_Packet_(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58_T_Packet_ */
#endif /* kcg_use_IterPacket58_T_Packet_T */

#ifdef kcg_use_M_032_int_T_TM_radio_me
#ifndef kcg_comp_M_032_int_T_TM_radio_m
extern kcg_bool kcg_comp_M_032_int_T_TM_radio_m(
  M_032_int_T_TM_radio_messages *kcg_c1,
  M_032_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_032_int_T_TM_radio_m */
#endif /* kcg_use_M_032_int_T_TM_radio_me */

#ifdef kcg_use_M_008_int_T_TM_radio_me
#ifndef kcg_comp_M_008_int_T_TM_radio_m
extern kcg_bool kcg_comp_M_008_int_T_TM_radio_m(
  M_008_int_T_TM_radio_messages *kcg_c1,
  M_008_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_008_int_T_TM_radio_m */
#endif /* kcg_use_M_008_int_T_TM_radio_me */

#ifdef kcg_use_struct_44600
#ifndef kcg_comp_struct_44600
extern kcg_bool kcg_comp_struct_44600(
  struct_44600 *kcg_c1,
  struct_44600 *kcg_c2);
#endif /* kcg_comp_struct_44600 */
#endif /* kcg_use_struct_44600 */

#ifdef kcg_use_M_008_T_TM_radio_messag
#ifndef kcg_comp_M_008_T_TM_radio_messa
extern kcg_bool kcg_comp_M_008_T_TM_radio_messa(
  M_008_T_TM_radio_messages *kcg_c1,
  M_008_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_008_T_TM_radio_messa */
#endif /* kcg_use_M_008_T_TM_radio_messag */

#ifdef kcg_use_struct_44621
#ifndef kcg_comp_struct_44621
extern kcg_bool kcg_comp_struct_44621(
  struct_44621 *kcg_c1,
  struct_44621 *kcg_c2);
#endif /* kcg_comp_struct_44621 */
#endif /* kcg_use_struct_44621 */

#ifdef kcg_use_P057_trackside_int_T_TM
#ifndef kcg_comp_P057_trackside_int_T_T
extern kcg_bool kcg_comp_P057_trackside_int_T_T(
  P057_trackside_int_T_TM *kcg_c1,
  P057_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P057_trackside_int_T_T */
#endif /* kcg_use_P057_trackside_int_T_TM */

#ifdef kcg_use_P005_section_int_T_TM
#ifndef kcg_comp_P005_section_int_T_TM
extern kcg_bool kcg_comp_P005_section_int_T_TM(
  P005_section_int_T_TM *kcg_c1,
  P005_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_int_T_TM */
#endif /* kcg_use_P005_section_int_T_TM */

#ifdef kcg_use_NationalParams_T
#ifndef kcg_comp_NationalParams_T
extern kcg_bool kcg_comp_NationalParams_T(
  NationalParams_T *kcg_c1,
  NationalParams_T *kcg_c2);
#endif /* kcg_comp_NationalParams_T */
#endif /* kcg_use_NationalParams_T */

#ifdef kcg_use_TrainPosRaw_T_InfraLib
#ifndef kcg_comp_TrainPosRaw_T_InfraLib
extern kcg_bool kcg_comp_TrainPosRaw_T_InfraLib(
  TrainPosRaw_T_InfraLib *kcg_c1,
  TrainPosRaw_T_InfraLib *kcg_c2);
#endif /* kcg_comp_TrainPosRaw_T_InfraLib */
#endif /* kcg_use_TrainPosRaw_T_InfraLib */

#ifdef kcg_use__9_RadioTrackTrainMessa
#ifndef kcg_comp__9_RadioTrackTrainMess
extern kcg_bool kcg_comp__9_RadioTrackTrainMess(
  _9_RadioTrackTrainMessageQueue_ *kcg_c1,
  _9_RadioTrackTrainMessageQueue_ *kcg_c2);
#endif /* kcg_comp__9_RadioTrackTrainMess */
#endif /* kcg_use__9_RadioTrackTrainMessa */

#ifdef kcg_use_CompressedPackets_T_Com
#ifndef kcg_comp_CompressedPackets_T_Co
extern kcg_bool kcg_comp_CompressedPackets_T_Co(
  CompressedPackets_T_Common_Type *kcg_c1,
  CompressedPackets_T_Common_Type *kcg_c2);
#endif /* kcg_comp_CompressedPackets_T_Co */
#endif /* kcg_use_CompressedPackets_T_Com */

#ifdef kcg_use_P004_TM_TrainToTrack
#ifndef kcg_comp_P004_TM_TrainToTrack
extern kcg_bool kcg_comp_P004_TM_TrainToTrack(
  P004_TM_TrainToTrack *kcg_c1,
  P004_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P004_TM_TrainToTrack */
#endif /* kcg_use_P004_TM_TrainToTrack */

#ifdef kcg_use_PT9_Level23_TransitionI
#ifndef kcg_comp_PT9_Level23_Transition
extern kcg_bool kcg_comp_PT9_Level23_Transition(
  PT9_Level23_TransitionInformati *kcg_c1,
  PT9_Level23_TransitionInformati *kcg_c2);
#endif /* kcg_comp_PT9_Level23_Transition */
#endif /* kcg_use_PT9_Level23_TransitionI */

#ifdef kcg_use_M_002_T_TM_radio_messag
#ifndef kcg_comp_M_002_T_TM_radio_messa
extern kcg_bool kcg_comp_M_002_T_TM_radio_messa(
  M_002_T_TM_radio_messages *kcg_c1,
  M_002_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_002_T_TM_radio_messa */
#endif /* kcg_use_M_002_T_TM_radio_messag */

#ifdef kcg_use_M_045_T_TM_radio_messag
#ifndef kcg_comp_M_045_T_TM_radio_messa
extern kcg_bool kcg_comp_M_045_T_TM_radio_messa(
  M_045_T_TM_radio_messages *kcg_c1,
  M_045_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_045_T_TM_radio_messa */
#endif /* kcg_use_M_045_T_TM_radio_messag */

#ifdef kcg_use_M_033_T_TM_radio_messag
#ifndef kcg_comp_M_033_T_TM_radio_messa
extern kcg_bool kcg_comp_M_033_T_TM_radio_messa(
  M_033_T_TM_radio_messages *kcg_c1,
  M_033_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_033_T_TM_radio_messa */
#endif /* kcg_use_M_033_T_TM_radio_messag */

#ifdef kcg_use_M_032_T_TM_radio_messag
#ifndef kcg_comp_M_032_T_TM_radio_messa
extern kcg_bool kcg_comp_M_032_T_TM_radio_messa(
  M_032_T_TM_radio_messages *kcg_c1,
  M_032_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_032_T_TM_radio_messa */
#endif /* kcg_use_M_032_T_TM_radio_messag */

#ifdef kcg_use_P046_trackside_int_T_TM
#ifndef kcg_comp_P046_trackside_int_T_T
extern kcg_bool kcg_comp_P046_trackside_int_T_T(
  P046_trackside_int_T_TM *kcg_c1,
  P046_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_trackside_int_T_T */
#endif /* kcg_use_P046_trackside_int_T_TM */

#ifdef kcg_use_P042_trackside_int_T_TM
#ifndef kcg_comp_P042_trackside_int_T_T
extern kcg_bool kcg_comp_P042_trackside_int_T_T(
  P042_trackside_int_T_TM *kcg_c1,
  P042_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P042_trackside_int_T_T */
#endif /* kcg_use_P042_trackside_int_T_TM */

#ifdef kcg_use_M_TrainTrack_MessageHd_
#ifndef kcg_comp_M_TrainTrack_MessageHd
extern kcg_bool kcg_comp_M_TrainTrack_MessageHd(
  M_TrainTrack_MessageHd_T_TM_rad *kcg_c1,
  M_TrainTrack_MessageHd_T_TM_rad *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_MessageHd */
#endif /* kcg_use_M_TrainTrack_MessageHd_ */

#ifdef kcg_use_Radio_TrainTrack_Header
#ifndef kcg_comp_Radio_TrainTrack_Heade
extern kcg_bool kcg_comp_Radio_TrainTrack_Heade(
  Radio_TrainTrack_Header_T_Radio *kcg_c1,
  Radio_TrainTrack_Header_T_Radio *kcg_c2);
#endif /* kcg_comp_Radio_TrainTrack_Heade */
#endif /* kcg_use_Radio_TrainTrack_Header */

#ifdef kcg_use_P027V1_section_int_qdif
#ifndef kcg_comp_P027V1_section_int_qdi
extern kcg_bool kcg_comp_P027V1_section_int_qdi(
  P027V1_section_int_qdiff_T_TM_b *kcg_c1,
  P027V1_section_int_qdiff_T_TM_b *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_qdi */
#endif /* kcg_use_P027V1_section_int_qdif */

#ifdef kcg_use_outPackets_T_Common_Typ
#ifndef kcg_comp_outPackets_T_Common_Ty
extern kcg_bool kcg_comp_outPackets_T_Common_Ty(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_outPackets_T_Common_Ty */
#endif /* kcg_use_outPackets_T_Common_Typ */

#ifdef kcg_use_PosRepParams_T
#ifndef kcg_comp_PosRepParams_T
extern kcg_bool kcg_comp_PosRepParams_T(
  PosRepParams_T *kcg_c1,
  PosRepParams_T *kcg_c2);
#endif /* kcg_comp_PosRepParams_T */
#endif /* kcg_use_PosRepParams_T */

#ifdef kcg_use_M_TrainTrack_Message_T_
#ifndef kcg_comp_M_TrainTrack_Message_T
extern kcg_bool kcg_comp_M_TrainTrack_Message_T(
  M_TrainTrack_Message_T_TM_radio *kcg_c1,
  M_TrainTrack_Message_T_TM_radio *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_Message_T */
#endif /* kcg_use_M_TrainTrack_Message_T_ */

#ifdef kcg_use_PT5_TrainRunningNumber_
#ifndef kcg_comp_PT5_TrainRunningNumber
extern kcg_bool kcg_comp_PT5_TrainRunningNumber(
  PT5_TrainRunningNumber_Packet_T *kcg_c1,
  PT5_TrainRunningNumber_Packet_T *kcg_c2);
#endif /* kcg_comp_PT5_TrainRunningNumber */
#endif /* kcg_use_PT5_TrainRunningNumber_ */

#ifdef kcg_use_P058_section_int_T_TM
#ifndef kcg_comp_P058_section_int_T_TM
extern kcg_bool kcg_comp_P058_section_int_T_TM(
  P058_section_int_T_TM *kcg_c1,
  P058_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P058_section_int_T_TM */
#endif /* kcg_use_P058_section_int_T_TM */

#ifdef kcg_use_PT3_OnboardTelephoneNum
#ifndef kcg_comp_PT3_OnboardTelephoneNu
extern kcg_bool kcg_comp_PT3_OnboardTelephoneNu(
  PT3_OnboardTelephoneNumbers_T_P *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_P *kcg_c2);
#endif /* kcg_comp_PT3_OnboardTelephoneNu */
#endif /* kcg_use_PT3_OnboardTelephoneNum */

#ifdef kcg_use_P015_section_int_T_TM
#ifndef kcg_comp_P015_section_int_T_TM
extern kcg_bool kcg_comp_P015_section_int_T_TM(
  P015_section_int_T_TM *kcg_c1,
  P015_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P015_section_int_T_TM */
#endif /* kcg_use_P015_section_int_T_TM */

#ifdef kcg_use_P021_section_int_T_TM
#ifndef kcg_comp_P021_section_int_T_TM
extern kcg_bool kcg_comp_P021_section_int_T_TM(
  P021_section_int_T_TM *kcg_c1,
  P021_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_int_T_TM */
#endif /* kcg_use_P021_section_int_T_TM */

#ifdef kcg_use_Radio_TrainTrack_Messag
#ifndef kcg_comp_Radio_TrainTrack_Messa
extern kcg_bool kcg_comp_Radio_TrainTrack_Messa(
  Radio_TrainTrack_Message_T_Radi *kcg_c1,
  Radio_TrainTrack_Message_T_Radi *kcg_c2);
#endif /* kcg_comp_Radio_TrainTrack_Messa */
#endif /* kcg_use_Radio_TrainTrack_Messag */

#ifdef kcg_use_Clock_T
#ifndef kcg_comp_Clock_T
extern kcg_bool kcg_comp_Clock_T(Clock_T *kcg_c1, Clock_T *kcg_c2);
#endif /* kcg_comp_Clock_T */
#endif /* kcg_use_Clock_T */

#ifdef kcg_use_TrackSectionData_T_Infr
#ifndef kcg_comp_TrackSectionData_T_Inf
extern kcg_bool kcg_comp_TrackSectionData_T_Inf(
  TrackSectionData_T_InfraLib *kcg_c1,
  TrackSectionData_T_InfraLib *kcg_c2);
#endif /* kcg_comp_TrackSectionData_T_Inf */
#endif /* kcg_use_TrackSectionData_T_Infr */

#ifdef kcg_use_RadioTrackTrainMessageQ
#ifndef kcg_comp_RadioTrackTrainMessage
extern kcg_bool kcg_comp_RadioTrackTrainMessage(
  RadioTrackTrainMessageQueueEntr *kcg_c1,
  RadioTrackTrainMessageQueueEntr *kcg_c2);
#endif /* kcg_comp_RadioTrackTrainMessage */
#endif /* kcg_use_RadioTrackTrainMessageQ */

#ifdef kcg_use_CompressedBaliseMessage
#ifndef kcg_comp_CompressedBaliseMessag
extern kcg_bool kcg_comp_CompressedBaliseMessag(
  CompressedBaliseMessage_TM *kcg_c1,
  CompressedBaliseMessage_TM *kcg_c2);
#endif /* kcg_comp_CompressedBaliseMessag */
#endif /* kcg_use_CompressedBaliseMessage */

#ifdef kcg_use_CompressedRadioMessage_
#ifndef kcg_comp_CompressedRadioMessage
extern kcg_bool kcg_comp_CompressedRadioMessage(
  CompressedRadioMessage_TM *kcg_c1,
  CompressedRadioMessage_TM *kcg_c2);
#endif /* kcg_comp_CompressedRadioMessage */
#endif /* kcg_use_CompressedRadioMessage_ */

#ifdef kcg_use_P255_trackside_int_T_TM
#ifndef kcg_comp_P255_trackside_int_T_T
extern kcg_bool kcg_comp_P255_trackside_int_T_T(
  P255_trackside_int_T_TM *kcg_c1,
  P255_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P255_trackside_int_T_T */
#endif /* kcg_use_P255_trackside_int_T_TM */

#ifdef kcg_use_P046_section_int_T_TM
#ifndef kcg_comp_P046_section_int_T_TM
extern kcg_bool kcg_comp_P046_section_int_T_TM(
  P046_section_int_T_TM *kcg_c1,
  P046_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_section_int_T_TM */
#endif /* kcg_use_P046_section_int_T_TM */

#ifdef kcg_use_struct_45024
#ifndef kcg_comp_struct_45024
extern kcg_bool kcg_comp_struct_45024(
  struct_45024 *kcg_c1,
  struct_45024 *kcg_c2);
#endif /* kcg_comp_struct_45024 */
#endif /* kcg_use_struct_45024 */

#ifdef kcg_use_P045_trackside_int_T_TM
#ifndef kcg_comp_P045_trackside_int_T_T
extern kcg_bool kcg_comp_P045_trackside_int_T_T(
  P045_trackside_int_T_TM *kcg_c1,
  P045_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P045_trackside_int_T_T */
#endif /* kcg_use_P045_trackside_int_T_TM */

#ifdef kcg_use_MAReqParams_T
#ifndef kcg_comp_MAReqParams_T
extern kcg_bool kcg_comp_MAReqParams_T(
  MAReqParams_T *kcg_c1,
  MAReqParams_T *kcg_c2);
#endif /* kcg_comp_MAReqParams_T */
#endif /* kcg_use_MAReqParams_T */

#ifdef kcg_use_P003_TM_TrainToTrack
#ifndef kcg_comp_P003_TM_TrainToTrack
extern kcg_bool kcg_comp_P003_TM_TrainToTrack(
  P003_TM_TrainToTrack *kcg_c1,
  P003_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P003_TM_TrainToTrack */
#endif /* kcg_use_P003_TM_TrainToTrack */

#ifdef kcg_use_sNID_RADIO_T_Packet_Tra
#ifndef kcg_comp_sNID_RADIO_T_Packet_Tr
extern kcg_bool kcg_comp_sNID_RADIO_T_Packet_Tr(
  sNID_RADIO_T_Packet_TrainTypes_ *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_ *kcg_c2);
#endif /* kcg_comp_sNID_RADIO_T_Packet_Tr */
#endif /* kcg_use_sNID_RADIO_T_Packet_Tra */

#ifdef kcg_use_P137_trackside_int_T_TM
#ifndef kcg_comp_P137_trackside_int_T_T
extern kcg_bool kcg_comp_P137_trackside_int_T_T(
  P137_trackside_int_T_TM *kcg_c1,
  P137_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P137_trackside_int_T_T */
#endif /* kcg_use_P137_trackside_int_T_TM */

#ifdef kcg_use_RBC_Data_T_RBC_DataBus_
#ifndef kcg_comp_RBC_Data_T_RBC_DataBus
extern kcg_bool kcg_comp_RBC_Data_T_RBC_DataBus(
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c1,
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Data_T_RBC_DataBus */
#endif /* kcg_use_RBC_Data_T_RBC_DataBus_ */

#ifdef kcg_use_struct_45101
#ifndef kcg_comp_struct_45101
extern kcg_bool kcg_comp_struct_45101(
  struct_45101 *kcg_c1,
  struct_45101 *kcg_c2);
#endif /* kcg_comp_struct_45101 */
#endif /* kcg_use_struct_45101 */

#ifdef kcg_use_struct_45111
#ifndef kcg_comp_struct_45111
extern kcg_bool kcg_comp_struct_45111(
  struct_45111 *kcg_c1,
  struct_45111 *kcg_c2);
#endif /* kcg_comp_struct_45111 */
#endif /* kcg_use_struct_45111 */

#ifdef kcg_use_P009_TM_TrainToTrack
#ifndef kcg_comp_P009_TM_TrainToTrack
extern kcg_bool kcg_comp_P009_TM_TrainToTrack(
  P009_TM_TrainToTrack *kcg_c1,
  P009_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P009_TM_TrainToTrack */
#endif /* kcg_use_P009_TM_TrainToTrack */

#ifdef kcg_use_R_data_internal_T_Infra
#ifndef kcg_comp_R_data_internal_T_Infr
extern kcg_bool kcg_comp_R_data_internal_T_Infr(
  R_data_internal_T_InfraLib *kcg_c1,
  R_data_internal_T_InfraLib *kcg_c2);
#endif /* kcg_comp_R_data_internal_T_Infr */
#endif /* kcg_use_R_data_internal_T_Infra */

#ifdef kcg_use_DiagMsg_T_RBC_Diagnosti
#ifndef kcg_comp_DiagMsg_T_RBC_Diagnost
extern kcg_bool kcg_comp_DiagMsg_T_RBC_Diagnost(
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c1,
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c2);
#endif /* kcg_comp_DiagMsg_T_RBC_Diagnost */
#endif /* kcg_use_DiagMsg_T_RBC_Diagnosti */

#ifdef kcg_use_array_int_105
#ifndef kcg_comp_array_int_105
extern kcg_bool kcg_comp_array_int_105(
  array_int_105 *kcg_c1,
  array_int_105 *kcg_c2);
#endif /* kcg_comp_array_int_105 */
#endif /* kcg_use_array_int_105 */

#ifdef kcg_use_array_int_264
#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */
#endif /* kcg_use_array_int_264 */

#ifdef kcg_use_array_int_499
#ifndef kcg_comp_array_int_499
extern kcg_bool kcg_comp_array_int_499(
  array_int_499 *kcg_c1,
  array_int_499 *kcg_c2);
#endif /* kcg_comp_array_int_499 */
#endif /* kcg_use_array_int_499 */

#ifdef kcg_use_array_int_6
#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */
#endif /* kcg_use_array_int_6 */

#ifdef kcg_use_array_int_150
#ifndef kcg_comp_array_int_150
extern kcg_bool kcg_comp_array_int_150(
  array_int_150 *kcg_c1,
  array_int_150 *kcg_c2);
#endif /* kcg_comp_array_int_150 */
#endif /* kcg_use_array_int_150 */

#ifdef kcg_use_array_int_21
#ifndef kcg_comp_array_int_21
extern kcg_bool kcg_comp_array_int_21(
  array_int_21 *kcg_c1,
  array_int_21 *kcg_c2);
#endif /* kcg_comp_array_int_21 */
#endif /* kcg_use_array_int_21 */

#ifdef kcg_use_array_int_491
#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */
#endif /* kcg_use_array_int_491 */

#ifdef kcg_use_array_44501
#ifndef kcg_comp_array_44501
extern kcg_bool kcg_comp_array_44501(array_44501 *kcg_c1, array_44501 *kcg_c2);
#endif /* kcg_comp_array_44501 */
#endif /* kcg_use_array_44501 */

#ifdef kcg_use_array_44505
#ifndef kcg_comp_array_44505
extern kcg_bool kcg_comp_array_44505(array_44505 *kcg_c1, array_44505 *kcg_c2);
#endif /* kcg_comp_array_44505 */
#endif /* kcg_use_array_44505 */

#ifdef kcg_use_array_44509
#ifndef kcg_comp_array_44509
extern kcg_bool kcg_comp_array_44509(array_44509 *kcg_c1, array_44509 *kcg_c2);
#endif /* kcg_comp_array_44509 */
#endif /* kcg_use_array_44509 */

#ifdef kcg_use_array_int_104
#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */
#endif /* kcg_use_array_int_104 */

#ifdef kcg_use_array_int_430
#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */
#endif /* kcg_use_array_int_430 */

#ifdef kcg_use_P046_sections_array_fla
#ifndef kcg_comp_P046_sections_array_fl
extern kcg_bool kcg_comp_P046_sections_array_fl(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P046_sections_array_fl */
#endif /* kcg_use_P046_sections_array_fla */

#ifdef kcg_use_P005_OBU_sectionlist_in
#ifndef kcg_comp_P005_OBU_sectionlist_i
extern kcg_bool kcg_comp_P005_OBU_sectionlist_i(
  P005_OBU_sectionlist_int_T_TM *kcg_c1,
  P005_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_i */
#endif /* kcg_use_P005_OBU_sectionlist_in */

#ifdef kcg_use_array_44567
#ifndef kcg_comp_array_44567
extern kcg_bool kcg_comp_array_44567(array_44567 *kcg_c1, array_44567 *kcg_c2);
#endif /* kcg_comp_array_44567 */
#endif /* kcg_use_array_44567 */

#ifdef kcg_use_array_int_5
#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */
#endif /* kcg_use_array_int_5 */

#ifdef kcg_use_M_TrainTrack_compressed
#ifndef kcg_comp_M_TrainTrack_compresse
extern kcg_bool kcg_comp_M_TrainTrack_compresse(
  M_TrainTrack_compressed_packets *kcg_c1,
  M_TrainTrack_compressed_packets *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_compresse */
#endif /* kcg_use_M_TrainTrack_compressed */

#ifdef kcg_use_array_int_444
#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */
#endif /* kcg_use_array_int_444 */

#ifdef kcg_use_P041_OBU_sectionlist_in
#ifndef kcg_comp_P041_OBU_sectionlist_i
extern kcg_bool kcg_comp_P041_OBU_sectionlist_i(
  P041_OBU_sectionlist_int_T_TM *kcg_c1,
  P041_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_i */
#endif /* kcg_use_P041_OBU_sectionlist_in */

#ifdef kcg_use_P015_section_array_T_TM
#ifndef kcg_comp_P015_section_array_T_T
extern kcg_bool kcg_comp_P015_section_array_T_T(
  P015_section_array_T_TM *kcg_c1,
  P015_section_array_T_TM *kcg_c2);
#endif /* kcg_comp_P015_section_array_T_T */
#endif /* kcg_use_P015_section_array_T_TM */

#ifdef kcg_use_array_int_72
#ifndef kcg_comp_array_int_72
extern kcg_bool kcg_comp_array_int_72(
  array_int_72 *kcg_c1,
  array_int_72 *kcg_c2);
#endif /* kcg_comp_array_int_72 */
#endif /* kcg_use_array_int_72 */

#ifdef kcg_use_array_44701
#ifndef kcg_comp_array_44701
extern kcg_bool kcg_comp_array_44701(array_44701 *kcg_c1, array_44701 *kcg_c2);
#endif /* kcg_comp_array_44701 */
#endif /* kcg_use_array_44701 */

#ifdef kcg_use_array_int_3_33
#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */
#endif /* kcg_use_array_int_3_33 */

#ifdef kcg_use_P021_trackide_sectionli
#ifndef kcg_comp_P021_trackide_sectionl
extern kcg_bool kcg_comp_P021_trackide_sectionl(
  P021_trackide_sectionlist_T_TM *kcg_c1,
  P021_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackide_sectionl */
#endif /* kcg_use_P021_trackide_sectionli */

#ifdef kcg_use_P005_sections_array_fla
#ifndef kcg_comp_P005_sections_array_fl
extern kcg_bool kcg_comp_P005_sections_array_fl(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P005_sections_array_fl */
#endif /* kcg_use_P005_sections_array_fla */

#ifdef kcg_use_Array11_TM_TrainToTrack
#ifndef kcg_comp_Array11_TM_TrainToTrac
extern kcg_bool kcg_comp_Array11_TM_TrainToTrac(
  Array11_TM_TrainToTrack *kcg_c1,
  Array11_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Array11_TM_TrainToTrac */
#endif /* kcg_use_Array11_TM_TrainToTrack */

#ifdef kcg_use_array_int_428
#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */
#endif /* kcg_use_array_int_428 */

#ifdef kcg_use_array_int_64
#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */
#endif /* kcg_use_array_int_64 */

#ifdef kcg_use_array_int_496
#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */
#endif /* kcg_use_array_int_496 */

#ifdef kcg_use_array_44858
#ifndef kcg_comp_array_44858
extern kcg_bool kcg_comp_array_44858(array_44858 *kcg_c1, array_44858 *kcg_c2);
#endif /* kcg_comp_array_44858 */
#endif /* kcg_use_array_44858 */

#ifdef kcg_use_array_int_3
#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */
#endif /* kcg_use_array_int_3 */

#ifdef kcg_use_array_int_56
#ifndef kcg_comp_array_int_56
extern kcg_bool kcg_comp_array_int_56(
  array_int_56 *kcg_c1,
  array_int_56 *kcg_c2);
#endif /* kcg_comp_array_int_56 */
#endif /* kcg_use_array_int_56 */

#ifdef kcg_use_P046_OBU_sectionlist_in
#ifndef kcg_comp_P046_OBU_sectionlist_i
extern kcg_bool kcg_comp_P046_OBU_sectionlist_i(
  P046_OBU_sectionlist_int_T_TM *kcg_c1,
  P046_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_i */
#endif /* kcg_use_P046_OBU_sectionlist_in */

#ifdef kcg_use__3_P027V1_OBU_sectionli
#ifndef kcg_comp__3_P027V1_OBU_sectionl
extern kcg_bool kcg_comp__3_P027V1_OBU_sectionl(
  _3_P027V1_OBU_sectionlist_int_T *kcg_c1,
  _3_P027V1_OBU_sectionlist_int_T *kcg_c2);
#endif /* kcg_comp__3_P027V1_OBU_sectionl */
#endif /* kcg_use__3_P027V1_OBU_sectionli */

#ifdef kcg_use_P046_OBU_sectionlist_ar
#ifndef kcg_comp_P046_OBU_sectionlist_a
extern kcg_bool kcg_comp_P046_OBU_sectionlist_a(
  P046_OBU_sectionlist_array_T_TM *kcg_c1,
  P046_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_a */
#endif /* kcg_use_P046_OBU_sectionlist_ar */

#ifdef kcg_use_P005_trackide_sectionli
#ifndef kcg_comp_P005_trackide_sectionl
extern kcg_bool kcg_comp_P005_trackide_sectionl(
  P005_trackide_sectionlist_T_TM *kcg_c1,
  P005_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P005_trackide_sectionl */
#endif /* kcg_use_P005_trackide_sectionli */

#ifdef kcg_use_array_44900
#ifndef kcg_comp_array_44900
extern kcg_bool kcg_comp_array_44900(array_44900 *kcg_c1, array_44900 *kcg_c2);
#endif /* kcg_comp_array_44900 */
#endif /* kcg_use_array_44900 */

#ifdef kcg_use_P011_TrainTrack_int_TM_
#ifndef kcg_comp_P011_TrainTrack_int_TM
extern kcg_bool kcg_comp_P011_TrainTrack_int_TM(
  P011_TrainTrack_int_TM_TrainToT *kcg_c1,
  P011_TrainTrack_int_TM_TrainToT *kcg_c2);
#endif /* kcg_comp_P011_TrainTrack_int_TM */
#endif /* kcg_use_P011_TrainTrack_int_TM_ */

#ifdef kcg_use_array_int_2
#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */
#endif /* kcg_use_array_int_2 */

#ifdef kcg_use_aNID_RADIO_T_Packet_Tra
#ifndef kcg_comp_aNID_RADIO_T_Packet_Tr
extern kcg_bool kcg_comp_aNID_RADIO_T_Packet_Tr(
  aNID_RADIO_T_Packet_TrainTypes_ *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_ *kcg_c2);
#endif /* kcg_comp_aNID_RADIO_T_Packet_Tr */
#endif /* kcg_use_aNID_RADIO_T_Packet_Tra */

#ifdef kcg_use_array_44930
#ifndef kcg_comp_array_44930
extern kcg_bool kcg_comp_array_44930(array_44930 *kcg_c1, array_44930 *kcg_c2);
#endif /* kcg_comp_array_44930 */
#endif /* kcg_use_array_44930 */

#ifdef kcg_use_array_int_17
#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */
#endif /* kcg_use_array_int_17 */

#ifdef kcg_use_array_int_70
#ifndef kcg_comp_array_int_70
extern kcg_bool kcg_comp_array_int_70(
  array_int_70 *kcg_c1,
  array_int_70 *kcg_c2);
#endif /* kcg_comp_array_int_70 */
#endif /* kcg_use_array_int_70 */

#ifdef kcg_use_array_int_396
#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */
#endif /* kcg_use_array_int_396 */

#ifdef kcg_use_P003V1_trackide_section
#ifndef kcg_comp_P003V1_trackide_sectio
extern kcg_bool kcg_comp_P003V1_trackide_sectio(
  P003V1_trackide_sectionlist_T_T *kcg_c1,
  P003V1_trackide_sectionlist_T_T *kcg_c2);
#endif /* kcg_comp_P003V1_trackide_sectio */
#endif /* kcg_use_P003V1_trackide_section */

#ifdef kcg_use_Metadata_T_Common_Types
#ifndef kcg_comp_Metadata_T_Common_Type
extern kcg_bool kcg_comp_Metadata_T_Common_Type(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Metadata_T_Common_Type */
#endif /* kcg_use_Metadata_T_Common_Types */

#ifdef kcg_use_array_44972
#ifndef kcg_comp_array_44972
extern kcg_bool kcg_comp_array_44972(array_44972 *kcg_c1, array_44972 *kcg_c2);
#endif /* kcg_comp_array_44972 */
#endif /* kcg_use_array_44972 */

#ifdef kcg_use_P015_OBU_sectionlist_ar
#ifndef kcg_comp_P015_OBU_sectionlist_a
extern kcg_bool kcg_comp_P015_OBU_sectionlist_a(
  P015_OBU_sectionlist_array_T_TM *kcg_c1,
  P015_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_sectionlist_a */
#endif /* kcg_use_P015_OBU_sectionlist_ar */

#ifdef kcg_use_array_int_9
#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */
#endif /* kcg_use_array_int_9 */

#ifdef kcg_use_array_int_24
#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */
#endif /* kcg_use_array_int_24 */

#ifdef kcg_use_array_int_350
#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */
#endif /* kcg_use_array_int_350 */

#ifdef kcg_use_array_44996
#ifndef kcg_comp_array_44996
extern kcg_bool kcg_comp_array_44996(array_44996 *kcg_c1, array_44996 *kcg_c2);
#endif /* kcg_comp_array_44996 */
#endif /* kcg_use_array_44996 */

#ifdef kcg_use_array_int_494
#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */
#endif /* kcg_use_array_int_494 */

#ifdef kcg_use_array_int_1
#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */
#endif /* kcg_use_array_int_1 */

#ifdef kcg_use_P046_trackide_sectionli
#ifndef kcg_comp_P046_trackide_sectionl
extern kcg_bool kcg_comp_P046_trackide_sectionl(
  P046_trackide_sectionlist_T_TM *kcg_c1,
  P046_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P046_trackide_sectionl */
#endif /* kcg_use_P046_trackide_sectionli */

#ifdef kcg_use_array_45016
#ifndef kcg_comp_array_45016
extern kcg_bool kcg_comp_array_45016(array_45016 *kcg_c1, array_45016 *kcg_c2);
#endif /* kcg_comp_array_45016 */
#endif /* kcg_use_array_45016 */

#ifdef kcg_use_array_int_236
#ifndef kcg_comp_array_int_236
extern kcg_bool kcg_comp_array_int_236(
  array_int_236 *kcg_c1,
  array_int_236 *kcg_c2);
#endif /* kcg_comp_array_int_236 */
#endif /* kcg_use_array_int_236 */

#ifdef kcg_use__8_RadioTrackTrainMessa
#ifndef kcg_comp__8_RadioTrackTrainMess
extern kcg_bool kcg_comp__8_RadioTrackTrainMess(
  _8_RadioTrackTrainMessageQueueE *kcg_c1,
  _8_RadioTrackTrainMessageQueueE *kcg_c2);
#endif /* kcg_comp__8_RadioTrackTrainMess */
#endif /* kcg_use__8_RadioTrackTrainMessa */

#ifdef kcg_use_array_45033
#ifndef kcg_comp_array_45033
extern kcg_bool kcg_comp_array_45033(array_45033 *kcg_c1, array_45033 *kcg_c2);
#endif /* kcg_comp_array_45033 */
#endif /* kcg_use_array_45033 */

#ifdef kcg_use_array_int_395
#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */
#endif /* kcg_use_array_int_395 */

#ifdef kcg_use_array_45056
#ifndef kcg_comp_array_45056
extern kcg_bool kcg_comp_array_45056(array_45056 *kcg_c1, array_45056 *kcg_c2);
#endif /* kcg_comp_array_45056 */
#endif /* kcg_use_array_45056 */

#ifdef kcg_use_array_int_99
#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */
#endif /* kcg_use_array_int_99 */

#ifdef kcg_use_array_int_8
#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */
#endif /* kcg_use_array_int_8 */

#ifdef kcg_use_P041_trackide_sectionli
#ifndef kcg_comp_P041_trackide_sectionl
extern kcg_bool kcg_comp_P041_trackide_sectionl(
  P041_trackide_sectionlist_T_TM *kcg_c1,
  P041_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackide_sectionl */
#endif /* kcg_use_P041_trackide_sectionli */

#ifdef kcg_use_P005_OBU_sectionlist_ar
#ifndef kcg_comp_P005_OBU_sectionlist_a
extern kcg_bool kcg_comp_P005_OBU_sectionlist_a(
  P005_OBU_sectionlist_array_T_TM *kcg_c1,
  P005_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_a */
#endif /* kcg_use_P005_OBU_sectionlist_ar */

#ifdef kcg_use_P021_OBU_sectionlist_in
#ifndef kcg_comp_P021_OBU_sectionlist_i
extern kcg_bool kcg_comp_P021_OBU_sectionlist_i(
  P021_OBU_sectionlist_int_T_TM *kcg_c1,
  P021_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_i */
#endif /* kcg_use_P021_OBU_sectionlist_in */

#ifdef kcg_use_P027V1_trackside_sectio
#ifndef kcg_comp_P027V1_trackside_secti
extern kcg_bool kcg_comp_P027V1_trackside_secti(
  P027V1_trackside_sectionlist_T_ *kcg_c1,
  P027V1_trackside_sectionlist_T_ *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_secti */
#endif /* kcg_use_P027V1_trackside_sectio */

#ifdef kcg_use_telephoneNumber_T_Packe
#ifndef kcg_comp_telephoneNumber_T_Pack
extern kcg_bool kcg_comp_telephoneNumber_T_Pack(
  telephoneNumber_T_Packet_TrainT *kcg_c1,
  telephoneNumber_T_Packet_TrainT *kcg_c2);
#endif /* kcg_comp_telephoneNumber_T_Pack */
#endif /* kcg_use_telephoneNumber_T_Packe */

#ifdef kcg_use_array_int_432
#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */
#endif /* kcg_use_array_int_432 */

#ifdef kcg_use_array_int_68
#ifndef kcg_comp_array_int_68
extern kcg_bool kcg_comp_array_int_68(
  array_int_68 *kcg_c1,
  array_int_68 *kcg_c2);
#endif /* kcg_comp_array_int_68 */
#endif /* kcg_use_array_int_68 */

#ifdef kcg_use_array_int_2_32
#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */
#endif /* kcg_use_array_int_2_32 */

#ifdef kcg_use_CompressedPacketData_T_
#ifndef kcg_comp_CompressedPacketData_T
extern kcg_bool kcg_comp_CompressedPacketData_T(
  CompressedPacketData_T_Common_T *kcg_c1,
  CompressedPacketData_T_Common_T *kcg_c2);
#endif /* kcg_comp_CompressedPacketData_T */
#endif /* kcg_use_CompressedPacketData_T_ */

#ifdef kcg_use_P005_section_array_T_TM
#ifndef kcg_comp_P005_section_array_T_T
extern kcg_bool kcg_comp_P005_section_array_T_T(
  P005_section_array_T_TM *kcg_c1,
  P005_section_array_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_array_T_T */
#endif /* kcg_use_P005_section_array_T_TM */

#ifdef kcg_use_array_int_22
#ifndef kcg_comp_array_int_22
extern kcg_bool kcg_comp_array_int_22(
  array_int_22 *kcg_c1,
  array_int_22 *kcg_c2);
#endif /* kcg_comp_array_int_22 */
#endif /* kcg_use_array_int_22 */

#ifdef kcg_use_array_int_492
#ifndef kcg_comp_array_int_492
extern kcg_bool kcg_comp_array_int_492(
  array_int_492 *kcg_c1,
  array_int_492 *kcg_c2);
#endif /* kcg_comp_array_int_492 */
#endif /* kcg_use_array_int_492 */

#ifdef kcg_use_P015_sections_array_fla
#ifndef kcg_comp_P015_sections_array_fl
extern kcg_bool kcg_comp_P015_sections_array_fl(
  P015_sections_array_flat_T_TM *kcg_c1,
  P015_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P015_sections_array_fl */
#endif /* kcg_use_P015_sections_array_fla */

#define kcg_comp_aNID_NTC_T_Packet_Trai kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_Trai kcg_copy_array_int_5

#define kcg_comp_sTractionIdentity_T_Pa kcg_comp_struct_45024

#define kcg_copy_sTractionIdentity_T_Pa kcg_copy_struct_45024

#define kcg_comp_aTractionIdentity_T_Pa kcg_comp_array_44996

#define kcg_copy_aTractionIdentity_T_Pa kcg_copy_array_44996

#define kcg_comp_P003_nid_radio_list_in kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_in kcg_copy_array_int_5

#define kcg_comp_P003_nid_radio_list_t_ kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_t_ kcg_copy_array_int_5

#define kcg_comp_P003_TrainTrack_int_TM kcg_comp_array_int_8

#define kcg_copy_P003_TrainTrack_int_TM kcg_copy_array_int_8

#define kcg_comp_Array03_TM_TrainToTrac kcg_comp_array_int_3

#define kcg_copy_Array03_TM_TrainToTrac kcg_copy_array_int_3

#define kcg_comp_P005_TrainTrack_int_TM kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM kcg_copy_array_int_3

#define kcg_comp_P004_TrainTrack_int_TM kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM kcg_copy_array_int_3

#define kcg_comp_P009_TrainTrack_int_TM kcg_comp_array_int_3

#define kcg_copy_P009_TrainTrack_int_TM kcg_copy_array_int_3

#define kcg_comp_P011_voltage_sections_ kcg_comp_array_int_8

#define kcg_copy_P011_voltage_sections_ kcg_copy_array_int_8

#define kcg_comp_P011_voltage_TM_TrainT kcg_comp_struct_45024

#define kcg_copy_P011_voltage_TM_TrainT kcg_copy_struct_45024

#define kcg_comp_P011_voltage_list_TM_T kcg_comp_array_44996

#define kcg_copy_P011_voltage_list_TM_T kcg_copy_array_44996

#define kcg_comp_P011_ntc_list_array_T_ kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_array_T_ kcg_copy_array_int_5

#define kcg_comp_P011_ntc_list_TM_Train kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_TM_Train kcg_copy_array_int_5

#define kcg_comp_P000_TrainTrack_int_TM kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM kcg_copy_array_int_17

#define kcg_comp_P001_TrainTrack_int_TM kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM kcg_copy_array_int_17

#define kcg_comp_P027V1_sections_array_ kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_ kcg_copy_array_int_64

#define kcg_comp_P027V1_trackside_qdiff kcg_comp_array_44701

#define kcg_copy_P027V1_trackside_qdiff kcg_copy_array_44701

#define kcg_comp_P027V1_OBU_sectionlist kcg_comp_array_44701

#define kcg_copy_P027V1_OBU_sectionlist kcg_copy_array_44701

#define kcg_comp_P027V1_section_array_q kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_q kcg_copy_array_int_2

#define kcg_comp__2_P027V1_OBU_sectionl kcg_comp_array_int_2_32

#define kcg_copy__2_P027V1_OBU_sectionl kcg_copy_array_int_2_32

#define kcg_comp_P015_OBU_sectionlist_i kcg_comp_array_44972

#define kcg_copy_P015_OBU_sectionlist_i kcg_copy_array_44972

#define kcg_comp_P015_trackide_sectionl kcg_comp_array_44972

#define kcg_copy_P015_trackide_sectionl kcg_copy_array_44972

#define kcg_comp_P021_section_array_T_T kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_T kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_a kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_a kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_fl kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_fl kcg_copy_array_int_99

#define kcg_comp_P058_section_array_T_T kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_T kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_a kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_a kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_fl kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_fl kcg_copy_array_int_64

#define kcg_comp_P058_OBU_sectionlist_i kcg_comp_array_45056

#define kcg_copy_P058_OBU_sectionlist_i kcg_copy_array_45056

#define kcg_comp_P058_trackide_sectionl kcg_comp_array_45056

#define kcg_copy_P058_trackide_sectionl kcg_copy_array_45056

#define kcg_comp__1_Radio_TrackTrain_He kcg_comp_struct_44135

#define kcg_copy__1_Radio_TrackTrain_He kcg_copy_struct_44135

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct_44555

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct_44555

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct_44555

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct_44555

#define kcg_comp_P041_section_array_T_T kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_T kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_a kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_a kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_fl kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_fl kcg_copy_array_int_99

#define kcg_comp_P046_section_array_T_T kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_T kcg_copy_array_int_2

#define kcg_comp_M_028_T_TM_radio_messa kcg_comp_struct_44621

#define kcg_copy_M_028_T_TM_radio_messa kcg_copy_struct_44621

#define kcg_comp_M_038_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_038_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_039_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_039_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_040_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_040_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_041_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_041_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_043_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_043_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_003_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_003_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_006_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_006_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_009_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_009_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_016_T_TM_radio_messa kcg_comp_struct_44600

#define kcg_copy_M_016_T_TM_radio_messa kcg_copy_struct_44600

#define kcg_comp_M_018_T_TM_radio_messa kcg_comp_struct_44600

#define kcg_copy_M_018_T_TM_radio_messa kcg_copy_struct_44600

#define kcg_comp_M_024_T_TM_radio_messa kcg_comp_struct_45111

#define kcg_copy_M_024_T_TM_radio_messa kcg_copy_struct_45111

#define kcg_comp_M_027_T_TM_radio_messa kcg_comp_struct_44621

#define kcg_copy_M_027_T_TM_radio_messa kcg_copy_struct_44621

#define kcg_comp_Radio_TrackTrain_Heade kcg_comp_struct_44135

#define kcg_copy_Radio_TrackTrain_Heade kcg_copy_struct_44135

#define kcg_comp_M_003_int_T_TM_radio_m kcg_comp_struct_45101

#define kcg_copy_M_003_int_T_TM_radio_m kcg_copy_struct_45101

#define kcg_comp_M_024_int_T_TM_radio_m kcg_comp_struct_45101

#define kcg_copy_M_024_int_T_TM_radio_m kcg_copy_struct_45101

#endif /* _KCG_TYPES_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

