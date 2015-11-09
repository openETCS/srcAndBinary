/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:52
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

/* Level_And_Mode_Types_Pkg::T_Mode */
typedef enum {
  NP_Level_And_Mode_Types_Pkg,
  SB_Level_And_Mode_Types_Pkg,
  PS_Level_And_Mode_Types_Pkg,
  SH_Level_And_Mode_Types_Pkg,
  FS_Level_And_Mode_Types_Pkg,
  LS_Level_And_Mode_Types_Pkg,
  SR_Level_And_Mode_Types_Pkg,
  OS_Level_And_Mode_Types_Pkg,
  SL_Level_And_Mode_Types_Pkg,
  NL_Level_And_Mode_Types_Pkg,
  UN_Level_And_Mode_Types_Pkg,
  TR_Level_And_Mode_Types_Pkg,
  PT_Level_And_Mode_Types_Pkg,
  SF_Level_And_Mode_Types_Pkg,
  IS_Level_And_Mode_Types_Pkg,
  SN_Level_And_Mode_Types_Pkg,
  RV_Level_And_Mode_Types_Pkg
} T_Mode_Level_And_Mode_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_MA */
typedef enum {
  Profile_OS_Level_And_Mode_Types_Pkg,
  Profile_LS_Level_And_Mode_Types_Pkg,
  Profile_SH_Level_And_Mode_Types_Pkg,
  No_Profile_Level_And_Mode_Types_Pkg
} T_MA_Level_And_Mode_Types_Pkg;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
/* DMI_Types_Pkg::DMI_Q_TEXT */
typedef enum {
  balise_read_error_DMI_Types_Pkg,
  communication_error_DMI_Types_Pkg,
  entering_FS_DMI_Types_Pkg,
  entering_OS_DMI_Types_Pkg,
  no_track_condition_will_be_received_DMI_Types_Pkg,
  runaway_movement_DMI_Types_Pkg,
  SH_refused_DMI_Types_Pkg,
  trackside_not_compatible_DMI_Types_Pkg,
  train_data_changed_DMI_Types_Pkg,
  train_is_rejected_DMI_Types_Pkg,
  unauthorized_passing_of_EOA_LOA_DMI_Types_Pkg,
  no_MA_received_at_level_transition_DMI_Types_Pkg,
  SR_distance_exceeded_DMI_Types_Pkg,
  SH_stop_order_DMI_Types_Pkg,
  SR_stop_order_DMI_Types_Pkg,
  emergency_stop_DMI_Types_Pkg,
  trackside_malfunction_DMI_Types_Pkg,
  SH_request_failed_DMI_Types_Pkg,
  RV_distance_esceeded_DMI_Types_Pkg,
  no_track_description_DMI_Types_Pkg,
  STM_brake_Deman_DMI_Types_Pkg,
  route_unsuitable_axle_load_category_DMI_Types_Pkg,
  route_unsuitable_loading_gauge_DMI_Types_Pkg,
  route_unsuitable_traction_system_DMI_Types_Pkg,
  radio_network_registration_failed_DMI_Types_Pkg,
  level_crossing_not_protected_DMI_Types_Pkg,
  acknowledgment_DMI_Types_Pkg
} DMI_Q_TEXT_DMI_Types_Pkg;
/* Q_TEXTCLASS */
typedef enum {
  Q_TEXTCLASS_Auxiliary_Information = 0,
  Q_TEXTCLASS_Important_Information = 1
} Q_TEXTCLASS;
/* Q_TEXTCONFIRM */
typedef enum {
  Q_TEXTCONFIRM_No_confirmation_required = 0,
  Q_TEXTCONFIRM_Confirmation_required = 1,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 3
} Q_TEXTCONFIRM;
/* M_TRACKCOND */
typedef enum {
  M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted = 0,
  M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area = 1,
  M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn = 2,
  M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section = 3,
  M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT = 4,
  M_TRACKCOND_Air_tightness_Initial_state_is_no_request_for_air_tightness = 5,
  M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on = 6,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_service_brake_on = 7,
  M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on = 8,
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_section = 9,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_for_emergency_brake_on = 10
} M_TRACKCOND;
/* DMI_Types_Pkg::Icon_control_flag_T */
typedef enum {
  show_icon_in_area_DMI_Types_Pkg,
  clear_area_DMI_Types_Pkg,
  show_icon_flashing_in_area_DMI_Types_Pkg,
  show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg
} Icon_control_flag_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Icon_group_T */
typedef enum {
  level_symbol_DMI_Types_Pkg,
  mode_symbols_DMI_Types_Pkg,
  status_symbols_DMI_Types_Pkg,
  order_an_announcements_symbols_DMI_Types_Pkg,
  planning_information_symbols_DMI_Types_Pkg,
  navigation_symbols_DMI_Types_Pkg,
  settings_symbols_DMI_Types_Pkg
} Icon_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Area_group_T */
typedef enum {
  A_DMI_Types_Pkg,
  B_DMI_Types_Pkg,
  C_DMI_Types_Pkg,
  D_DMI_Types_Pkg,
  E_DMI_Types_Pkg,
  F_DMI_Types_Pkg,
  G_DMI_Types_Pkg,
  H_DMI_Types_Pkg
} Area_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_List_Entry_Request_T */
typedef enum {
  Enter_revalidate_driver_identifier_DMI_Types_Pkg,
  Enter_revalidate_train_running_number_DMI_Types_Pkg,
  Enter_revalidate_ETCS_level_DMI_Types_Pkg,
  Enter_RBC_contact_menu_DMI_Types_Pkg,
  Validate_train_data_DMI_Types_Pkg,
  Enter_NTC_data_DMI_Types_Pkg,
  Spare_DMI_Types_Pkg,
  Enable_the_track_ahead_free_by_the_driver_DMI_Types_Pkg,
  Disable_the_Track_Ahead_free_page_DMI_Types_Pkg,
  Show_main_window_DMI_Types_Pkg,
  Hide_main_window_DMI_Types_Pkg,
  Hide_adhesion_factor_entry_window_DMI_Types_Pkg,
  Hide_staff_responsible_entry_window_DMI_Types_Pkg,
  Show_Set_VBC_validation_window_DMI_Types_Pkg,
  Show_Remove_VBC_validation_window_DMI_Types_Pkg
} DMI_List_Entry_Request_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::M_SupervisionDisplay_T */
typedef enum {
  supDis_normal_DMI_Types_Pkg,
  supDis_indication_DMI_Types_Pkg,
  supDis_overspeed_DMI_Types_Pkg,
  supDis_warning_DMI_Types_Pkg,
  supDis_intervention_DMI_Types_Pkg
} M_SupervisionDisplay_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::M_SUPERVISION_STATUS */
typedef enum {
  CSM_DMI_Types_Pkg,
  PIM_DMI_Types_Pkg,
  TSM_DMI_Types_Pkg,
  RSM_DMI_Types_Pkg,
  supervision_status_unknown_DMI_Types_Pkg
} M_SUPERVISION_STATUS_DMI_Types_Pkg;
/* SDM_Types_Pkg::SupervisionStatus_T */
typedef enum {
  Normal_Supervision_SDM_Types_Pkg,
  Indication_Supervision_SDM_Types_Pkg,
  Overspeed_Supervision_SDM_Types_Pkg,
  Warning_Supervision_SDM_Types_Pkg,
  Intervention_Supervision_SDM_Types_Pkg,
  Undefined_Supervision_SDM_Types_Pkg
} SupervisionStatus_T_SDM_Types_Pkg;
/* SDM_Types_Pkg::SDM_Types_T */
typedef enum {
  CSM_SDM_Types_Pkg,
  TSM_SDM_Types_Pkg,
  RSM_SDM_Types_Pkg,
  No_SDM_Type_SDM_Types_Pkg
} SDM_Types_T_SDM_Types_Pkg;
/* TargetManagement_types::TargetType_T */
typedef enum {
  EoA_TargetManagement_types,
  SvL_TargetManagement_types,
  MRSP_TargetManagement_types,
  invalid_TargetManagement_types,
  LoA_TargetManagement_types
} TargetType_T_TargetManagement_types;
/* DMI_Types_Pkg::DMI_DMI_Identifier_T */
typedef enum {
  DMI_1_DMI_Types_Pkg,
  DMI_2_DMI_Types_Pkg
} DMI_DMI_Identifier_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_Cabin_Identifier_T */
typedef enum {
  cabin_A_DMI_Types_Pkg,
  cabin_B_DMI_Types_Pkg
} DMI_Cabin_Identifier_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_StatusSet_T */
typedef enum {
  Running_state_DMI_Types_Pkg,
  Starting_state_DMI_Types_Pkg,
  Failure_state_DMI_Types_Pkg,
  Running_not_active_state_DMI_Types_Pkg,
  Train_Speed_Overflow_DMI_Types_Pkg,
  Invalid_track_condition_DMI_Types_Pkg,
  Invalid_predefined_text_message_DMI_Types_Pkg,
  Invalid_text_message_DMI_Types_Pkg,
  HW_warning_temp_reached_DMI_Types_Pkg,
  TFT_OFF_temp_reached_DMI_Types_Pkg,
  Device_OFF_temp_reached_DMI_Types_Pkg,
  Over_temperature_DMI_Types_Pkg,
  Backlight_on_off_DMI_Types_Pkg,
  FAN_blocked_DMI_Types_Pkg,
  Power_supply_key_switch_off_DMI_Types_Pkg,
  Watchdog_not_running_DMI_Types_Pkg
} DMI_StatusSet_T_DMI_Types_Pkg;
/* M_ADHESION */
typedef enum {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
/* Q_TEXTREPORT */
typedef enum {
  Q_TEXTREPORT_No_driver_acknowledgement_report_required = 0,
  Q_TEXTREPORT_Driver_acknowledgement_report_required = 1
} Q_TEXTREPORT;
/* DMI_Types_Pkg::DMI_context_TXT_MSG_T */
typedef enum {
  con_undefined_DMI_Types_Pkg,
  con_levelMgmt_DMI_Types_Pkg,
  con_modeChange_DMI_Types_Pkg,
  con_trackRequest_DMI_Types_Pkg
} DMI_context_TXT_MSG_T_DMI_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_TransitionType */
typedef enum {
  M_TransitionType_Conditional_Level_And_Mode_Types_Pkg,
  M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg,
  M_TransitionType_Normal_Level_And_Mode_Types_Pkg
} T_TransitionType_Level_And_Mode_Types_Pkg;
/* DMI_Types_Pkg::DMI_Request_T */
typedef enum {
  Start_of_mission_DMI_Types_Pkg,
  Shunting_entry_DMI_Types_Pkg,
  Shunting_exit_DMI_Types_Pkg,
  Non_leading_DMI_Types_Pkg,
  Non_leading_exit_DMI_Types_Pkg,
  Maintain_shunting_DMI_Types_Pkg,
  Level_entry_request_DMI_Types_Pkg,
  Override_EOA_DMI_Types_Pkg,
  Override_route_unsuitability_DMI_Types_Pkg,
  Request_for_radio_network_entry_DMI_Types_Pkg,
  Request_for_train_data_DMI_Types_Pkg,
  Request_for_Adhesion_factor_data_DMI_Types_Pkg,
  Request_for_SR_data_DMI_Types_Pkg,
  Request_for_system_version_DMI_Types_Pkg,
  Request_for_switching_train_data_entry_DMI_Types_Pkg,
  Request_for_train_data_view_DMI_Types_Pkg,
  Request_to_show_geographical_position_DMI_Types_Pkg,
  Language_changed_DMI_Types_Pkg,
  Train_data_entry_aborted_DMI_Types_Pkg,
  Train_running_number_entry_aborted_DMI_Types_Pkg,
  SR_data_entry_aborted_DMI_Types_Pkg,
  Radio_network_entry_aborted_DMI_Types_Pkg,
  Request_to_hide_geographical_information_DMI_Types_Pkg,
  Request_to_show_supervision_data_DMI_Types_Pkg,
  Request_to_hide_supervision_data_DMI_Types_Pkg,
  Scroll_text_up_DMI_Types_Pkg,
  Scroll_text_down_DMI_Types_Pkg,
  Request_to_contact_last_known_RBC_DMI_Types_Pkg,
  Request_to_use_short_number_DMI_Types_Pkg,
  Request_isolation_DMI_Types_Pkg,
  Track_Ahead_Free_is_validated_DMI_Types_Pkg,
  The_Train_Integrity_request_DMI_Types_Pkg,
  Set_VBC_request_DMI_Types_Pkg,
  Remove_VBC_request_DMI_Types_Pkg,
  Show_tunnel_stopping_information_DMI_Types_Pkg,
  Hide_tunnel_stopping_information_DMI_Types_Pkg,
  NTC_data_entry_request_DMI_Types_Pkg,
  End_of_NTC_data_entry_DMI_Types_Pkg
} DMI_Request_T_DMI_Types_Pkg;
/* DataDictionary_Pkg::LevelDecisionTableActionKind */
typedef enum {
  LD_Invalid_DataDictionary_Pkg,
  LD_Accept_DataDictionary_Pkg,
  LD_Reject_DataDictionary_Pkg,
  LD_NotRelevant_DataDictionary_Pkg,
  LD_01StoreIfPendingL1Transition_DataDictionary_Pkg,
  LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg,
  LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg,
  LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg,
  LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg,
  LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg,
  LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg,
  LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg,
  LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg,
  LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg,
  LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg,
  LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg,
  LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg,
  LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg,
  LD_030405Reject_DataDictionary_Pkg
} LevelDecisionTableActionKind_DataDictionary_Pkg;
/* DataDictionary_Pkg::ModeDecisionTableActionKind */
typedef enum {
  MD_Invalid_DataDictionary_Pkg,
  MD_Accept_DataDictionary_Pkg,
  MD_Reject_DataDictionary_Pkg,
  MD_NotRelevant_DataDictionary_Pkg,
  MD_01IfFollowingExitTRMode_DataDictionary_Pkg,
  MD_02IfCabActive_DataDictionary_Pkg,
  MD_03StoreRBCIDAndPhone_DataDictionary_Pkg,
  MD_04IfValidTrainDataStored_DataDictionary_Pkg,
  MD_05OnlyLevelTransitionAnnouncements_DataDictionary_Pkg,
  MD_06RejectIfOverrideActive_DataDictionary_Pkg,
  MD_07AcceptImmediateAndConditionalLevelTransitionOrder_DataDictionary_Pkg,
  MD_08NullDistanceRBCTransition_DataDictionary_Pkg,
  MD_09MaxSafeFrontWithinSupervision_DataDictionary_Pkg,
  MD_0204Accept_DataDictionary_Pkg,
  MD_0105Accept_DataDictionary_Pkg
} ModeDecisionTableActionKind_DataDictionary_Pkg;
/* Q_LGTLOC */
typedef enum {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* M_LOC */
typedef enum {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_balise_group = 1,
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2
} M_LOC;
/* TIU_Types_Pkg::cab_ID_T */
typedef enum {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
/* TA_MA::ActionType */
typedef enum { replace_TA_MA, hold_TA_MA, delete_TA_MA } ActionType_TA_MA;
/* M_LEVELTR */
typedef enum {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_DIFF */
typedef enum {
  Q_DIFF_Cant_Deficiency_specific_category = 0,
  Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP = 1,
  Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP = 2
} Q_DIFF;
/* NC_CDDIFF */
typedef enum {
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm = 0,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_100_mm = 1,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_130_mm = 2,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_150_mm = 3,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_165_mm = 4,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_180_mm = 5,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_210_mm = 6,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_225_mm = 7,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_245_mm = 8,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_275_mm = 9,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_300_mm = 10
} NC_CDDIFF;
/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* Q_SRSTOP */
typedef enum {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* M_MAMODE */
typedef enum {
  M_MAMODE_On_Sight = 0,
  M_MAMODE_Shunting = 1,
  M_MAMODE_Limited_Supervision = 2
} M_MAMODE;
/* Q_MAMODE */
typedef enum {
  Q_MAMODE_as_the_EOA = 0,
  Q_MAMODE_as_both_the_EOA_and_SvL = 1
} Q_MAMODE;
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_OVERLAP */
typedef enum {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_DANGERPOINT */
typedef enum {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_ENDTIMER */
typedef enum {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
/* Q_SECTIONTIMER */
typedef enum {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* TrackAtlasTypes::MA_Level_t */
typedef enum {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* Q_NVEMRRLS */
typedef enum {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} Q_NVEMRRLS;
/* Q_NVSBTSMPERM */
typedef enum { Q_NVSBTSMPERM_No = 0, Q_NVSBTSMPERM_Yes = 1 } Q_NVSBTSMPERM;
/* M_NVCONTACT */
typedef enum {
  M_NVCONTACT_Train_trip = 0,
  M_NVCONTACT_Apply_service_brake = 1,
  M_NVCONTACT_No_Reaction = 2
} M_NVCONTACT;
/* M_NVDERUN */
typedef enum { M_NVDERUN_No = 0, M_NVDERUN_Yes = 1 } M_NVDERUN;
/* Q_NVDRIVER_ADHES */
typedef enum {
  Q_NVDRIVER_ADHES_Not_allowed = 0,
  Q_NVDRIVER_ADHES_Allowed = 1
} Q_NVDRIVER_ADHES;
/* Q_NVGUIPERM */
typedef enum { Q_NVGUIPERM_No = 0, Q_NVGUIPERM_Yes = 1 } Q_NVGUIPERM;
/* Q_NVSBFBPERM */
typedef enum { Q_NVSBFBPERM_No = 0, Q_NVSBFBPERM_Yes = 1 } Q_NVSBFBPERM;
/* Q_NVINHSMICPERM */
typedef enum {
  Q_NVINHSMICPERM_No = 0,
  Q_NVINHSMICPERM_Yes = 1
} Q_NVINHSMICPERM;
/* M_NVEBCL */
typedef enum {
  M_NVEBCL_Confidence_level_50 = 0,
  M_NVEBCL_Confidence_level_90 = 1,
  M_NVEBCL_Confidence_level_99 = 2,
  M_NVEBCL_Confidence_level_99_9 = 3,
  M_NVEBCL_Confidence_level_99_99 = 4,
  M_NVEBCL_Confidence_level_99_999 = 5,
  M_NVEBCL_Confidence_level_99_9999 = 6,
  M_NVEBCL_Confidence_level_99_99999 = 7,
  M_NVEBCL_Confidence_level_99_999999 = 8,
  M_NVEBCL_Confidence_level_99_9999999 = 9
} M_NVEBCL;
/* Q_NVKINT */
typedef enum {
  Q_NVKINT_No_integrated_correction_factors_follow = 0,
  Q_NVKINT_Integrated_correction_factors_follow = 1
} Q_NVKINT;
/* Q_NVKVINTSET */
typedef enum {
  Q_NVKVINTSET_Freight_trains = 0,
  Q_NVKVINTSET_Conventional_passenger_trains = 1
} Q_NVKVINTSET;
/* L_NVKRINT */
typedef enum {
  L_NVKRINT_0m = 0,
  L_NVKRINT_25m = 1,
  L_NVKRINT_50m = 2,
  L_NVKRINT_75m = 3,
  L_NVKRINT_100m = 4,
  L_NVKRINT_150m = 5,
  L_NVKRINT_200m = 6,
  L_NVKRINT_300m = 7,
  L_NVKRINT_400m = 8,
  L_NVKRINT_500m = 9,
  L_NVKRINT_600m = 10,
  L_NVKRINT_700m = 11,
  L_NVKRINT_800m = 12,
  L_NVKRINT_900m = 13,
  L_NVKRINT_1000m = 14,
  L_NVKRINT_1100m = 15,
  L_NVKRINT_1200m = 16,
  L_NVKRINT_1300m = 17,
  L_NVKRINT_1400m = 18,
  L_NVKRINT_1500m = 19,
  L_NVKRINT_1600m = 20,
  L_NVKRINT_1700m = 21,
  L_NVKRINT_1800m = 22,
  L_NVKRINT_1900m = 23,
  L_NVKRINT_2000m = 24,
  L_NVKRINT_2100m = 25,
  L_NVKRINT_2200m = 26,
  L_NVKRINT_2300m = 27,
  L_NVKRINT_2400m = 28,
  L_NVKRINT_2500m = 29,
  L_NVKRINT_2600m = 30,
  L_NVKRINT_2700m = 31
} L_NVKRINT;
/* Q_NEWCOUNTRY */
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum {
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Handover_Pkg::abilityToHandleCommunicationSessions */
typedef enum {
  isAbleToManageOneSession_Handover_Pkg,
  isAbleToManageTwoSessions_Handover_Pkg
} abilityToHandleCommunicationSessions_Handover_Pkg;
/* RCM_Types_Pkg::mobileHealthStatus_T */
typedef enum {
  mhs_nok_RCM_Types_Pkg,
  mhs_ok_RCM_Types_Pkg
} mobileHealthStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileRegistrationStatus_T */
typedef enum {
  mrs_unregistered_RCM_Types_Pkg,
  mrs_registering_RCM_Types_Pkg,
  mrs_registered_RCM_Types_Pkg
} mobileRegistrationStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileRegistrationAction_T */
typedef enum {
  mra_nop_RCM_Types_Pkg,
  mra_register_RCM_Types_Pkg,
  mra_unregister_RCM_Types_Pkg
} mobileRegistrationAction_T_RCM_Types_Pkg;
/* RCM_Session_Types_Pkg::sessionPhase_T */
typedef enum {
  sp_terminated_RCM_Session_Types_Pkg,
  sp_establishing_RCM_Session_Types_Pkg,
  sp_maintaining_RCM_Session_Types_Pkg,
  sp_terminating_RCM_Session_Types_Pkg
} sessionPhase_T_RCM_Session_Types_Pkg;
/* RCM_Types_Pkg::mobileConnectionStatus_T */
typedef enum {
  mcs_disconnected_RCM_Types_Pkg,
  mcs_connecting_RCM_Types_Pkg,
  mcs_connected_RCM_Types_Pkg
} mobileConnectionStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileConnetionAction_T */
typedef enum {
  mca_nop_RCM_Types_Pkg,
  mca_connect_RCM_Types_Pkg,
  mca_disconnect_RCM_Types_Pkg,
  mca_expectRadioHole_RCM_Types_Pkg,
  mca_unexpectRadioHole_RCM_Types_Pkg
} mobileConnetionAction_T_RCM_Types_Pkg;
/* RCM_Session_Types_Pkg::safeRadioConnnectionIndicator_T */
typedef enum {
  srci_noConnection_RCM_Session_Types_Pkg,
  srci_connectionLost_setupFailed_RCM_Session_Types_Pkg,
  srci_connectionUp_RCM_Session_Types_Pkg
} safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg;
/* Q_RBC */
typedef enum {
  Q_RBC_Terminate_communication_session = 0,
  Q_RBC_Establish_communication_session = 1
} Q_RBC;
/* Q_SLEEPSESSION */
typedef enum {
  Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  Q_SLEEPSESSION_Execute_session_establishment_order = 1
} Q_SLEEPSESSION;
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
/* Q_DIRLRBG */
typedef enum {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
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
/* TIU_Types_Pkg::M_Isolation_status_T */
typedef enum {
  on_board_equipment_is_isolated_TIU_Types_Pkg,
  on_board_equipement_is_not_isolated_TIU_Types_Pkg,
  isolation_status_not_defined_TIU_Types_Pkg
} M_Isolation_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_signal_command_T */
typedef enum {
  brake_signal_command_not_defined_TIU_Types_Pkg,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_inhibit_command_T */
typedef enum {
  brake_inhibit_not_defined_TIU_Types_Pkg,
  inhibit_brake_TIU_Types_Pkg,
  do_not_inhibit_brake_TIU_Types_Pkg
} M_brake_inhibit_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_eddy_current_brake_inhibition_T */
typedef enum {
  eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg,
  inhibit_for_service_brake_TIU_Types_Pkg,
  inhibit_for_emergency_brake_TIU_Types_Pkg,
  inhibit_for_both_service_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_service_brake_TIU_Types_Pkg,
  do_not_inhibit_for_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_both_service_emergency_brake_TIU_Types_Pkg
} M_eddy_current_brake_inhibition_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_pantograph_command_T */
typedef enum {
  pantograph_command_not_defined_TIU_Types_Pkg,
  lower_pantograph_TIU_Types_Pkg,
  raise_pantograph_TIU_Types_Pkg
} M_pantograph_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_airtightness_command_T */
typedef enum {
  airtightness_command_not_defined_TIU_Types_Pkg,
  tunnel_condition_active_TIU_Types_Pkg,
  tunnel_condition_not_active_TIU_Types_Pkg
} M_airtightness_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_mainpowerswitch_command_T */
typedef enum {
  open_main_power_swicth_TIU_Types_Pkg,
  close_main_power_switch_TIU_Types_Pkg
} M_mainpowerswitch_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_cutoff_command_T */
typedef enum {
  traction_cutoff_command_not_defined_TIU_Types_Pkg,
  apply_traction_cutoff_TIU_Types_Pkg,
  release_traction_cutoff_TIU_Types_Pkg
} M_traction_cutoff_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_voltage_types_T */
typedef enum {
  line_not_fitted_with_any_traction_system_TIU_Types_Pkg,
  ac_25kV_50Hz_TIU_Types_Pkg,
  ac_15kV_16_7Hz_TIU_Types_Pkg,
  dc_3kV_TIU_Types_Pkg,
  dc_1_5kV_TIU_Types_Pkg,
  dc_600_750kV_TIU_Types_Pkg
} M_voltage_types_T_TIU_Types_Pkg;
/* API_RadioCommunication_Pkg::cmdRadioUnit_T */
typedef enum {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
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
/* NC_TRAIN */
typedef enum {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_AIRTIGHT */
typedef enum { M_AIRTIGHT_Not_fitted = 0, M_AIRTIGHT_Fitted = 1 } M_AIRTIGHT;
/* M_LOADINGGAUGE */
typedef enum {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
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
/* M_VOLTAGE */
typedef enum {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
/* TIU_Types_Pkg::M_cab_signal_status_T */
typedef enum {
  cab_signal_status_not_defined_TIU_Types_Pkg,
  both_desks_are_closed_TIU_Types_Pkg,
  desk_A_is_open_TIU_Types_Pkg,
  desk_B_is_open_TIU_Types_Pkg,
  both_desks_are_open_TIU_Types_Pkg
} M_cab_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_sleeping_signal_status_T */
typedef enum {
  signal_active_TIU_Types_Pkg,
  signal_not_active_TIU_Types_Pkg
} M_sleeping_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_passiveshunting_signal_status_T */
typedef enum {
  passive_shunting_permitted_TIU_Types_Pkg,
  passive_shunting_not_permitted_TIU_Types_Pkg
} M_passiveshunting_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_nonleading_signal_status_T */
typedef enum {
  non_leading_signall_status_not_defined_TIU_Types_Pkg,
  non_leading_permitted_TIU_Types_Pkg,
  non_leading_not_permitted_TIU_Types_Pkg
} M_nonleading_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_directioncontroller_signal_status_T */
typedef enum {
  direction_controller_in_neutral_TIU_Types_Pkg,
  direction_controller_in_forward_TIU_Types_Pkg,
  direction_controller_in_backward_TIU_Types_Pkg
} M_directioncontroller_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trainintegrity_signal_status_T */
typedef enum {
  train_is_not_integer_TIU_Types_Pkg,
  train_is_integer_TIU_Types_Pkg
} M_trainintegrity_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_signal_status_T */
typedef enum {
  traction_on_TIU_Types_Pkg,
  traction_off_TIU_Types_Pkg
} M_traction_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_status_T */
typedef enum {
  brake_status_not_defined_TIU_Types_Pkg,
  is_active_TIU_Types_Pkg,
  is_not_active_TIU_Types_Pkg
} M_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_train_data_entry_type_T */
typedef enum {
  fixed_entry_type_TIU_Types_Pkg,
  flexible_entry_type_TIU_Types_Pkg,
  switchable_entry_type_TIU_Types_Pkg,
  no_entry_type_TIU_Types_Pkg
} M_train_data_entry_type_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trackcond_T */
typedef enum {
  non_stopping_area_TIU_Types_Pkg,
  tunnel_stopping_area_TIU_Types_Pkg,
  sound_horn_TIU_Types_Pkg,
  powerless_section_lower_pantograph_TIU_Types_Pkg,
  radio_hole_TIU_Types_Pkg,
  air_tightness_TIU_Types_Pkg,
  switch_off_regenerative_brake_TIU_Types_Pkg,
  switch_off_eddy_current_brake_for_service_brake_TIU_Types_Pkg,
  switch_off_magnetic_shoe_brake_TIU_Types_Pkg,
  powerless_section_switch_off_main_power_switch_TIU_Types_Pkg,
  switch_off_eddy_current_brake_for_emergency_brake_TIU_Types_Pkg
} M_trackcond_T_TIU_Types_Pkg;
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
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
/* M_DUP */
typedef enum {
  M_DUP_No_duplicates = 0,
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* MoRC_Pck::mobileHWConnectionStatus_Type */
typedef enum {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_MoRC_Pck;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum {
  _37_SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_SM1,
  SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_SM1
} _38_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum {
  SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1,
  SSM_st_FS_Mode_SM1
} _36_SSM_ST_SM1;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum {
  SSM_TR_no_trans_Level_NTC_and_Mode_SN,
  SSM_TR_State1_1_Level_NTC_and_Mode_SN,
  SSM_TR_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_1_Level_NTC_and_Mode_SN
} SSM_TR_Level_NTC_and_Mode_SN;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum {
  SSM_st_State1_Level_NTC_and_Mode_SN,
  SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN,
  SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN
} SSM_ST_Level_NTC_and_Mode_SN;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum {
  _34_SSM_TR_no_trans_SM1,
  SSM_TR_NP_1_SM1,
  SSM_TR_Awakness_of_Train_1_SM1,
  SSM_TR_Awakness_of_Train_2_SM1,
  SSM_TR_Awakness_of_Train_3_SM1
} _35_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
  SSM_st_SoM_NTC_SN_SM1
} _33_SSM_ST_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum {
  SSM_TR_no_trans_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waition_for_Driver_ID_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_first_Validation_for_Train_Number_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_first_Validation_for_Train_Number_2_SM3_SM1_Awakness_of_Train,
  SSM_TR_first_Validation_for_Train_Number_3_SM3_SM1_Awakness_of_Train,
  SSM_TR_request_Level_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_RBC_Establishment_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Acknowlege_of_Position_from_RBC_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Validation_of_Train_Data_from_Driver_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Second_Validation_of_Train_Number_from_Driver_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Second_Validation_of_Train_Number_from_Driver_2_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_SB_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_Mobile_terminal_registration_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_driver_selection_E10_E11_or_E12_1_SM3_SM1_Awakness_of_Train
} SSM_TR_SM3_SM1_Awakness_of_Train;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum {
  SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3,
  SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3,
  SSM_st_request_Level_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3,
  SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3,
  SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3,
  SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3,
  SSM_st_SB_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3
} SSM_ST_SM3_SM1_Awakness_of_Train;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
typedef enum {
  SSM_TR_no_trans_modeInterplay,
  SSM_TR_CSM_1_modeInterplay,
  SSM_TR_CSM_2_modeInterplay,
  SSM_TR_TSM_1_modeInterplay,
  SSM_TR_TSM_2_modeInterplay,
  SSM_TR_RSM_1_modeInterplay,
  SSM_TR_RSM_2_modeInterplay
} SSM_TR_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
typedef enum {
  SSM_st_CSM_modeInterplay,
  SSM_st_TSM_modeInterplay,
  SSM_st_RSM_modeInterplay
} SSM_ST_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
typedef enum {
  SSM_TR_no_trans_CSM_modeInterplay_CSM,
  SSM_TR_Init_1_CSM_modeInterplay_CSM,
  SSM_TR_Init_2_CSM_modeInterplay_CSM,
  SSM_TR_Init_3_CSM_modeInterplay_CSM,
  SSM_TR_Init_4_CSM_modeInterplay_CSM,
  SSM_TR_Init_5_CSM_modeInterplay_CSM,
  SSM_TR_Init_6_CSM_modeInterplay_CSM,
  SSM_TR_Init_7_CSM_modeInterplay_CSM,
  SSM_TR_Init_8_CSM_modeInterplay_CSM,
  SSM_TR_Init_9_CSM_modeInterplay_CSM,
  SSM_TR_NormalStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_NormalStatus_2_CSM_modeInterplay_CSM,
  SSM_TR_NormalStatus_3_CSM_modeInterplay_CSM,
  SSM_TR_OverspeedStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_OverspeedStatus_2_CSM_modeInterplay_CSM,
  SSM_TR_OverspeedStatus_3_CSM_modeInterplay_CSM,
  SSM_TR_WarningStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_WarningStatus_2_CSM_modeInterplay_CSM,
  SSM_TR_InterventionStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_InterventionStatus_2_CSM_modeInterplay_CSM
} SSM_TR_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
typedef enum {
  SSM_st_Init_modeInterplay_CSM_CSM,
  SSM_st_NormalStatus_modeInterplay_CSM_CSM,
  SSM_st_OverspeedStatus_modeInterplay_CSM_CSM,
  SSM_st_WarningStatus_modeInterplay_CSM_CSM,
  SSM_st_InterventionStatus_modeInterplay_CSM_CSM
} SSM_ST_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum {
  SSM_TR_no_trans_SM4_modeInterplay_TSM,
  SSM_TR_init_1_SM4_modeInterplay_TSM,
  SSM_TR_init_2_SM4_modeInterplay_TSM,
  SSM_TR_init_3_SM4_modeInterplay_TSM,
  SSM_TR_init_4_SM4_modeInterplay_TSM,
  SSM_TR_init_5_SM4_modeInterplay_TSM,
  SSM_TR_init_6_SM4_modeInterplay_TSM,
  SSM_TR_Normal_1_SM4_modeInterplay_TSM,
  SSM_TR_Normal_2_SM4_modeInterplay_TSM,
  SSM_TR_Normal_3_SM4_modeInterplay_TSM,
  SSM_TR_Normal_4_SM4_modeInterplay_TSM,
  SSM_TR_Normal_5_SM4_modeInterplay_TSM,
  SSM_TR_Indication_1_SM4_modeInterplay_TSM,
  SSM_TR_Indication_2_SM4_modeInterplay_TSM,
  SSM_TR_Indication_3_SM4_modeInterplay_TSM,
  SSM_TR_Indication_4_SM4_modeInterplay_TSM,
  SSM_TR_Indication_5_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_1_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_2_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_3_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_4_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_5_SM4_modeInterplay_TSM,
  SSM_TR_Warning_1_SM4_modeInterplay_TSM,
  SSM_TR_Warning_2_SM4_modeInterplay_TSM,
  SSM_TR_Warning_3_SM4_modeInterplay_TSM,
  SSM_TR_Warning_4_SM4_modeInterplay_TSM,
  SSM_TR_Intervention_1_SM4_modeInterplay_TSM,
  SSM_TR_Intervention_2_SM4_modeInterplay_TSM,
  SSM_TR_Intervention_3_SM4_modeInterplay_TSM
} SSM_TR_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum {
  SSM_st_init_modeInterplay_TSM_SM4,
  SSM_st_Normal_modeInterplay_TSM_SM4,
  SSM_st_Indication_modeInterplay_TSM_SM4,
  SSM_st_Overspeed_modeInterplay_TSM_SM4,
  SSM_st_Warning_modeInterplay_TSM_SM4,
  SSM_st_Intervention_modeInterplay_TSM_SM4
} SSM_ST_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum {
  SSM_TR_no_trans_RSM_modeInterplay_RSM,
  SSM_TR_Init_1_RSM_modeInterplay_RSM,
  SSM_TR_Init_2_RSM_modeInterplay_RSM,
  SSM_TR_Init_3_RSM_modeInterplay_RSM,
  SSM_TR_Init_4_RSM_modeInterplay_RSM,
  SSM_TR_Init_5_RSM_modeInterplay_RSM,
  SSM_TR_IndicationStatus_1_RSM_modeInterplay_RSM,
  SSM_TR_InterventionStatus_1_RSM_modeInterplay_RSM
} SSM_TR_RSM_modeInterplay_RSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum {
  SSM_st_Init_modeInterplay_RSM_RSM,
  SSM_st_IndicationStatus_modeInterplay_RSM_RSM,
  SSM_st_InterventionStatus_modeInterplay_RSM_RSM
} SSM_ST_RSM_modeInterplay_RSM;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum {
  SSM_TR_no_trans_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_1_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_2_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_1_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_2_SM_SH_Initiated_By_Driver
} SSM_TR_SM_SH_Initiated_By_Driver;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum {
  SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver,
  SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver
} SSM_ST_SM_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum {
  SSM_TR_no_trans_SH_Initiated_By_Driver,
  SSM_TR_SH_initiated_by_driver_procedure_off_1_SH_Initiated_By_Driver,
  SSM_TR_S0_SH_initiated_by_driver_procedure_on_1_SH_Initiated_By_Driver
} SSM_TR_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum {
  SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver,
  SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver
} SSM_ST_SH_Initiated_By_Driver;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum {
  SSM_TR_no_trans_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Current_Location_1_SM_Mode_Profile_By_Trackside
} SSM_TR_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum {
  SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside,
  SSM_st_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_st_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_ST_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum {
  SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Req_Futher_Location_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Start_Supervision_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Waiting_Ack_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location
} SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum {
  SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location
} SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum {
  SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Switch_Autorized_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Switch_Autorized_Waiting_Ack_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Ack_Not_Received_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location
} SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum {
  SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location
} SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum {
  SSM_TR_no_trans_SM_Start_L1_L2_L3,
  SSM_TR_Waiting_Driver_Starting_Command_1_1_SM_Start_L1_L2_L3,
  SSM_TR_Waiting_Driver_Starting_Command_1_2_SM_Start_L1_L2_L3,
  SSM_TR_Level_1_1_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_1_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_2_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_3_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_4_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_5_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_OS_1_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_SH_1_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_LS_1_SM_Start_L1_L2_L3
} SSM_TR_SM_Start_L1_L2_L3;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum {
  SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3,
  SSM_st_Level_1_SM_Start_L1_L2_L3,
  SSM_st_Level_2_3_SM_Start_L1_L2_L3,
  SSM_st_SR_Mode_SM_Start_L1_L2_L3,
  SSM_st_FS_Mode_SM_Start_L1_L2_L3,
  SSM_st_OS_Mode_SM_Start_L1_L2_L3,
  SSM_st_SH_Mode_SM_Start_L1_L2_L3,
  SSM_st_LS_Mode_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_OS_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_SH_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_LS_SM_Start_L1_L2_L3
} SSM_ST_SM_Start_L1_L2_L3;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum {
  SSM_TR_no_trans_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_Off_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_2_SM_StartOfMissionProcedure,
  SSM_TR_EB_Requested_1_SM_StartOfMissionProcedure
} SSM_TR_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum {
  SSM_st_Procedure_Off_SM_StartOfMissionProcedure,
  SSM_st_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_EB_Requested_SM_StartOfMissionProcedure
} SSM_ST_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum {
  SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Command_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Command_2_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Command_3_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Strating_Command_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Strating_Command_2_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Strating_Command_2_2_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Level_0_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Level_NTC_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On
} SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum {
  SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On
} SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
/* Procedures::Procedure_Train_Trip::SM_Train_Trip */
typedef enum {
  SSM_TR_no_trans_SM_Train_Trip,
  SSM_TR_Train_Trip_procedure_off_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_2_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_3_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_3_2_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_1_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_2_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_3_SM_Train_Trip,
  SSM_TR_Waiting_Driver_Selection_1_SM_Train_Trip,
  SSM_TR_Wait_RBC_Ack_1_SM_Train_Trip
} SSM_TR_SM_Train_Trip;
/* Procedures::Procedure_Train_Trip::SM_Train_Trip */
typedef enum {
  SSM_st_Train_Trip_procedure_off_SM_Train_Trip,
  SSM_st_Trip_Mode_SM_Train_Trip,
  SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip,
  SSM_st_Post_Trip_Mode_SM_Train_Trip,
  SSM_st_SH_Mode_SM_Train_Trip,
  SSM_st_UN_Mode_SM_Train_Trip,
  SSM_st_SN_Mode_SM_Train_Trip,
  SSM_st_Waiting_Driver_Selection_SM_Train_Trip,
  SSM_st_Wait_RBC_Ack_SM_Train_Trip,
  SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip
} SSM_ST_SM_Train_Trip;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum {
  SSM_TR_no_trans_SM_Train_Reversing,
  SSM_TR_Reversing_Procedure_Off_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_2_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_3_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_1_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_2_SM_Train_Reversing
} SSM_TR_SM_Train_Reversing;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum {
  SSM_st_Reversing_Procedure_Off_SM_Train_Reversing,
  SSM_st_Reversing_Condition_SM_Train_Reversing,
  SSM_st_RV_Mode_SM_Train_Reversing,
  SSM_st_Reversing_Data_Available_SM_Train_Reversing
} SSM_ST_SM_Train_Reversing;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum {
  _31_SSM_TR_no_trans_SM1,
  SSM_TR_BeforeChange_1_SM1,
  SSM_TR_State2_1_SM1
} _32_SSM_TR_SM1;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum { SSM_st_BeforeChange_SM1, SSM_st_State2_SM1 } _30_SSM_ST_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum {
  _28_SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_1_SM1,
  SSM_TR_LaunchRequest_1_SM1,
  SSM_TR_LaunchRequest_2_SM1,
  SSM_TR_AckReceived_1_SM1
} _29_SSM_TR_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum {
  SSM_st_Waiting_SM1,
  SSM_st_LaunchRequest_SM1,
  SSM_st_AckReceived_SM1
} _27_SSM_ST_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  _25_SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} _26_SSM_TR_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} _24_SSM_ST_SM1;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum {
  SSM_TR_no_trans_TimerStatus_SM,
  SSM_TR_Stopped_1_TimerStatus_SM,
  SSM_TR_Stopped_2_TimerStatus_SM,
  SSM_TR_Counting_1_TimerStatus_SM,
  SSM_TR_Counting_2_TimerStatus_SM,
  SSM_TR_Counting_3_TimerStatus_SM,
  SSM_TR_Counting_4_TimerStatus_SM,
  SSM_TR_Expired_1_TimerStatus_SM,
  SSM_TR_Expired_2_TimerStatus_SM
} SSM_TR_TimerStatus_SM;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum {
  SSM_st_Stopped_TimerStatus_SM,
  SSM_st_Counting_TimerStatus_SM,
  SSM_st_Expired_TimerStatus_SM
} SSM_ST_TimerStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum {
  SSM_TR_no_trans_repeat_SM,
  SSM_TR_rep_inactive_1_repeat_SM,
  SSM_TR_rep_inactive_2_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_1_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_2_repeat_SM
} SSM_TR_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum {
  SSM_st_rep_inactive_repeat_SM,
  SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  SSM_st_rep_repeatUntilStopConditionMet_repeat_SM
} SSM_ST_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
typedef enum {
  SSM_TR_no_trans_Register_SM,
  SSM_TR_Unregistered_1_Register_SM,
  SSM_TR_Unregistered_2_Register_SM,
  SSM_TR_Unregistered_3_Register_SM,
  SSM_TR_Registering_1_Register_SM,
  SSM_TR_Registering_2_Register_SM,
  SSM_TR_Registered_1_Register_SM,
  SSM_TR_Registered_2_Register_SM,
  SSM_TR_Registered_3_Register_SM,
  SSM_TR_Reregistering_1_Register_SM
} SSM_TR_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
typedef enum {
  SSM_st_Unregistered_Register_SM,
  SSM_st_Registering_Register_SM,
  SSM_st_Registered_Register_SM,
  SSM_st_Reregistering_Register_SM
} SSM_ST_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum {
  _22_SSM_TR_no_trans_SM1,
  _21_SSM_TR_idle_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_2_SM1,
  SSM_TR_waitForSystemVersion_1_SM1,
  SSM_TR_waitForSystemVersion_2_SM1,
  SSM_TR_waitForSystemVersion_3_SM1,
  _20_SSM_TR_sessionEstablished_1_SM1
} _23_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum {
  _18_SSM_st_idle_SM1,
  SSM_st_waitForSafeRadioConnectionSetUp_SM1,
  SSM_st_waitForSystemVersion_SM1,
  _17_SSM_st_sessionEstablished_SM1
} _19_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum {
  _15_SSM_TR_no_trans_SM1,
  _14_SSM_TR_idle_1_SM1,
  SSM_TR_sessionEstablished_1_SM1
} _16_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum {
  _12_SSM_st_idle_SM1,
  SSM_st_sessionEstablished_SM1
} _13_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum {
  _10_SSM_TR_no_trans_SM1,
  _9_SSM_TR_idle_1_SM1,
  SSM_TR_idle_2_SM1,
  SSM_TR_establishingByOBU_1_SM1,
  SSM_TR_establishingByRBC_1_SM1
} _11_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum {
  _7_SSM_st_idle_SM1,
  SSM_st_establishingByOBU_SM1,
  SSM_st_establishingByRBC_SM1
} _8_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum {
  _5_SSM_TR_no_trans_SM1,
  SSM_TR_idle_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_2_SM1,
  SSM_TR_terminated_1_SM1
} _6_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum {
  SSM_st_idle_SM1,
  SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_st_terminated_SM1
} _4_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum {
  SSM_TR_no_trans_Session_SM,
  SSM_TR_sessionTerminated_1_Session_SM,
  SSM_TR_establishingSession_1_Session_SM,
  SSM_TR_establishingSession_2_Session_SM,
  SSM_TR_maintainingSession_1_Session_SM,
  SSM_TR_terminatingSession_1_Session_SM
} SSM_TR_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum {
  SSM_st_sessionTerminated_Session_SM,
  SSM_st_establishingSession_Session_SM,
  SSM_st_maintainingSession_Session_SM,
  SSM_st_terminatingSession_Session_SM
} SSM_ST_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_2_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} SSM_TR_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_st_Idle_TrainExitedFromRBCArea_SM,
  SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_ST_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum {
  SSM_TR_no_trans_connectionStatus_SM,
  SSM_TR_NoConnection_1_connectionStatus_SM,
  SSM_TR_NoConnection_2_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  SSM_TR_ConnectionUp_1_connectionStatus_SM,
  SSM_TR_ConnectionUp_2_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
typedef enum {
  SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForTransitionOrder_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForSessionWithAcceptingRBCEstablished_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForSessionWithAcceptingRBCEstablished_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_RegisterAcceptingRBC_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_RegisterAcceptingRBC_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_EstablishSessionWithAcceptingRBC_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_EstablishSessionWithAcceptingRBC_2_handOver_with_1_Session_SM_IfBlock1
} SSM_TR_handOver_with_1_Session_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
typedef enum {
  SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM
} SSM_ST_handOver_with_1_Session_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
typedef enum {
  SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForTransitionOrder_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForSessionWithAcceptingRBCEstablished_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_ReregisterHandingOverRBC_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_ReregisterHandingOverRBC_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_2_handOver_with_2_Sessions_SM_IfBlock1
} SSM_TR_handOver_with_2_Sessions_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
typedef enum {
  SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM
} SSM_ST_handOver_with_2_Sessions_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum {
  _2_SSM_TR_no_trans_SM1,
  SSM_TR_mobile_1_1_SM1,
  SSM_TR_mobile_2_1_SM1
} _3_SSM_TR_SM1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum { SSM_st_mobile_1_SM1, SSM_st_mobile_2_SM1 } _1_SSM_ST_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_notRequested_1_SM1,
  SSM_TR_notRequested_2_SM1,
  SSM_TR_requested_1_SM1
} SSM_TR_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum { SSM_st_notRequested_SM1, SSM_st_requested_SM1 } SSM_ST_SM1;
/* ProvidePositionReport_Pkg::BG_Orientation_T */
typedef Q_DIRLRBG BG_Orientation_T_ProvidePositionReport_Pkg;

/* A_NVMAXREDADH1 */
typedef kcg_real A_NVMAXREDADH1;

/* A_NVMAXREDADH2 */
typedef kcg_real A_NVMAXREDADH2;

/* A_NVMAXREDADH3 */
typedef kcg_real A_NVMAXREDADH3;

/* M_NVAVADH */
typedef kcg_real M_NVAVADH;

/* A_NVP12 */
typedef kcg_real A_NVP12;

/* A_NVP23 */
typedef kcg_real A_NVP23;

/* M_NVKVINT */
typedef kcg_real M_NVKVINT;

/* M_NVKRINT */
typedef kcg_real M_NVKRINT;

/* M_NVKTINT */
typedef kcg_real M_NVKTINT;

/* SDM_Types_Pkg::L_internal_real_Type */
typedef kcg_real L_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::V_internal_real_Type */
typedef kcg_real V_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::A_internal_real_Type */
typedef kcg_real A_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::T_internal_real_Type */
typedef kcg_real T_internal_real_Type_SDM_Types_Pkg;

/* SDM_GradientAcceleration_types::Gradient_real_t */
typedef kcg_real Gradient_real_t_SDM_GradientAcceleration_types;

/* TrackAtlasTypes::FromTIU_t */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* SDM_Commands_Pkg::EB_command_T */
typedef kcg_bool EB_command_T_SDM_Commands_Pkg;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_MN */
typedef kcg_int NID_MN;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* NID_BG */
typedef kcg_int NID_BG;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* D_TRACKCOND */
typedef kcg_int D_TRACKCOND;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* M_POSITION */
typedef kcg_int M_POSITION;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* D_VALIDNV */
typedef kcg_int D_VALIDNV;

/* V_NVSHUNT */
typedef kcg_int V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int V_NVSTFF;

/* V_NVONSIGHT */
typedef kcg_int V_NVONSIGHT;

/* V_NVLIMSUPERV */
typedef kcg_int V_NVLIMSUPERV;

/* V_NVUNFIT */
typedef kcg_int V_NVUNFIT;

/* V_NVREL */
typedef kcg_int V_NVREL;

/* D_NVROLL */
typedef kcg_int D_NVROLL;

/* V_NVALLOWOVTRP */
typedef kcg_int V_NVALLOWOVTRP;

/* V_NVSUPOVTRP */
typedef kcg_int V_NVSUPOVTRP;

/* D_NVOVTRP */
typedef kcg_int D_NVOVTRP;

/* T_NVOVTRP */
typedef kcg_int T_NVOVTRP;

/* D_NVPOTRP */
typedef kcg_int D_NVPOTRP;

/* T_NVCONTACT */
typedef kcg_int T_NVCONTACT;

/* D_NVSTFF */
typedef kcg_int D_NVSTFF;

/* V_NVKVINT */
typedef kcg_int V_NVKVINT;

/* N_ITER */
typedef kcg_int N_ITER;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* L_TRAIN */
typedef kcg_int L_TRAIN;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* D_DP */
typedef kcg_int D_DP;

/* D_OL */
typedef kcg_int D_OL;

/* V_LOA */
typedef kcg_int V_LOA;

/* T_ENDTIMER */
typedef kcg_int T_ENDTIMER;

/* L_SECTION */
typedef kcg_int L_SECTION;

/* T_SECTIONTIMER */
typedef kcg_int T_SECTIONTIMER;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int D_SECTIONTIMERSTOPLOC;

/* T_LOA */
typedef kcg_int T_LOA;

/* L_ENDSECTION */
typedef kcg_int L_ENDSECTION;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int D_ENDTIMERSTARTLOC;

/* V_RELEASEDP */
typedef kcg_int V_RELEASEDP;

/* D_STARTOL */
typedef kcg_int D_STARTOL;

/* T_OL */
typedef kcg_int T_OL;

/* V_RELEASEOL */
typedef kcg_int V_RELEASEOL;

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* V_MAIN */
typedef kcg_int V_MAIN;

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

/* D_STARTREVERSE */
typedef kcg_int D_STARTREVERSE;

/* L_REVERSEAREA */
typedef kcg_int L_REVERSEAREA;

/* D_REVERSE */
typedef kcg_int D_REVERSE;

/* V_REVERSE */
typedef kcg_int V_REVERSE;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* D_LOC */
typedef kcg_int D_LOC;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* N_AXLE */
typedef kcg_int N_AXLE;

/* L_DOUBTOVER */
typedef kcg_int L_DOUBTOVER;

/* L_TRAININT */
typedef kcg_int L_TRAININT;

/* L_DOUBTUNDER */
typedef kcg_int L_DOUBTUNDER;

/* NID_XUSER */
typedef kcg_int NID_XUSER;

/* NID_PRVLRBG */
typedef kcg_int NID_PRVLRBG;

/* D_LRBG */
typedef kcg_int D_LRBG;

/* V_TRAIN */
typedef kcg_int V_TRAIN;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* V_MAXTRAIN */
typedef kcg_int V_MAXTRAIN;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* D_RBCTR */
typedef kcg_int D_RBCTR;

/* TIU_Types_Pkg::NID_ctraction_T */
typedef kcg_int NID_ctraction_T_TIU_Types_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* ProvidePositionReport_Pkg::SystemTime_T */
typedef T_internal_Type_Obu_BasicTypes_Pkg SystemTime_T_ProvidePositionReport_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef V_internal_Type_Obu_BasicTypes_Pkg Speed_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef L_internal_Type_Obu_BasicTypes_Pkg Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_odometry_Type */
typedef kcg_int V_odometry_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* DMI_Types_Pkg::NID_STM */
typedef kcg_int NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::BCD */
typedef kcg_int BCD_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T */
typedef kcg_int DMI_TextMessage_ID_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::M_BRAKEPERCT */
typedef kcg_int M_BRAKEPERCT_DMI_Types_Pkg;

/* BG_Types_Pkg::NID_ERRORBG */
typedef kcg_int NID_ERRORBG_BG_Types_Pkg;

/* DATA::M_SupervisionDisplay_INT_T */
typedef kcg_int M_SupervisionDisplay_INT_T_DATA;

/* DATA::M_SUPERVISION_STATUS_INT_T */
typedef kcg_int M_SUPERVISION_STATUS_INT_T_DATA;

/* DATA::connectionStatusRadioUnit_INT_T */
typedef kcg_int connectionStatusRadioUnit_INT_T_DATA;

/* DATA::DMI_Available_Menu_INT_T */
typedef kcg_int DMI_Available_Menu_INT_T_DATA;

/* DATA::DMI_List_Entry_Request_INT_T */
typedef kcg_int DMI_List_Entry_Request_INT_T_DATA;

/* DATA::DMI_train_id_INT_T */
typedef kcg_int DMI_train_id_INT_T_DATA;

/* DATA::DMI_train_length_INT_T */
typedef kcg_int DMI_train_length_INT_T_DATA;

/* DATA::DMI_brakeModel_id_INT_T */
typedef kcg_int DMI_brakeModel_id_INT_T_DATA;

/* DATA::DMI_vMax_id_INT_T */
typedef kcg_int DMI_vMax_id_INT_T_DATA;

/* DATA::DMI_airtightSystem_INT_T */
typedef kcg_int DMI_airtightSystem_INT_T_DATA;

/* DATA::DMI_loadingGauge_INT_T */
typedef kcg_int DMI_loadingGauge_INT_T_DATA;

/* DATA::Icon_control_flag_INT_T */
typedef kcg_int Icon_control_flag_INT_T_DATA;

/* DATA::DMI_m_icon_flashing_freq_INT_T */
typedef kcg_int DMI_m_icon_flashing_freq_INT_T_DATA;

/* DATA::Icon_group_INT_T */
typedef kcg_int Icon_group_INT_T_DATA;

/* DATA::Area_group_INT_T */
typedef kcg_int Area_group_INT_T_DATA;

/* SDM_Types_Pkg::Percentage_T */
typedef kcg_int Percentage_T_SDM_Types_Pkg;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} struct__105343;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct__105343 mobileHWStatus_Type_MoRC_Pck;

typedef struct { M_LEVEL level; NID_STM_DMI_Types_Pkg nid_stm; } struct__105350;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct__105350 DMI_level_T_DMI_Types_Pkg;

typedef DMI_level_T_DMI_Types_Pkg array__105355[32];

/* DMI_Types_Pkg::DMI_level_array_T */
typedef array__105355 DMI_level_array_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} struct__105358;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct__105358 DMI_LevelList_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} struct__105363;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct__105363 ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

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
} struct__105373;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct__105373 M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} struct__105384;

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct__105384 M_TrainTrack_Message_T_TM_radio_messages;

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
} struct__105389;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__105389 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} struct__105407;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__105407 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__105419;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__105419 RBC_Id_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} struct__105426;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct__105426 API_RadioMsgHeader_T_API_Msg_Pkg;

typedef struct {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
} struct__105434;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__105434 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  kcg_int v_safeNominal;
  kcg_int v_rawNominal;
  kcg_int v_lower;
  kcg_int v_upper;
} struct__105447;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__105447 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int o_nominal;
  kcg_int o_min;
  kcg_int o_max;
} struct__105454;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__105454 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  struct__105454 odo;
  struct__105447 speed;
  kcg_int acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__105460;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__105460 odometry_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int nominal;
  kcg_int d_min;
  kcg_int d_max;
} struct__105470;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__105470 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} struct__105476;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct__105476 centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__105481;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct__105481 API_TelegramHeader_T_API_Msg_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  kcg_int nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__105492;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__105492 MetadataElement_T_Common_Types_Pkg;

typedef struct__105492 array__105500[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__105500 Metadata_T_Common_Types_Pkg;

typedef struct {
  array__105500 PacketHeaders;
  array_int_500 PacketData;
} struct__105503;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__105503 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__105508;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct__105508 API_TrackSideInput_T_API_Msg_Pkg;

typedef kcg_int array_int_311[311];

/* API_DMI_Pkg::DMI_to_EVC_Message_int_T */
typedef array_int_311 DMI_to_EVC_Message_int_T_API_DMI_Pkg;

typedef kcg_int array_int_999[999];

/* API_DMI_Pkg::EVC_to_DMI_Message_int_T */
typedef array_int_999 EVC_to_DMI_Message_int_T_API_DMI_Pkg;

typedef struct { kcg_int now; kcg_int distance; } struct__105523;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct__105523 D_test_distance_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_traction_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_current_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::L_test_trackcond_T */
typedef D_test_distance_T_TIU_Types_Pkg L_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackinit_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_trackinit_T_TIU_Types_Pkg;

typedef struct {
  D_test_trackcond_T_TIU_Types_Pkg d_test_trackcond;
  L_test_trackcond_T_TIU_Types_Pkg l_test_trackcond;
  M_trackcond_T_TIU_Types_Pkg m_trackcond;
} struct__105528;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct__105528 nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} struct__105534;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct__105534 Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int pressure; } struct__105540;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct__105540 Brake_pressure_value_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} struct__105545;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct__105545 Brake_status_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} struct__105554;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct__105554 Mode_control_and_train_status_T_TIU_Types_Pkg;

typedef struct { M_VOLTAGE m_voltage; kcg_int nid_ctraction; } struct__105565;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__105565 sTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage */
typedef struct__105565 P011_voltage_TM_TrainToTrack;

typedef struct__105565 array__105570[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__105570 aTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage_list */
typedef array__105570 P011_voltage_list_TM_TrainToTrack;

typedef kcg_int array_int_5[5];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_5 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TM::Array05 */
typedef array_int_5 Array05_TM;

/* TM_TrainToTrack::P011_ntc_list */
typedef array_int_5 P011_ntc_list_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list_array_T */
typedef array_int_5 P011_ntc_list_array_T_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_t */
typedef array_int_5 P003_nid_radio_list_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_int_t */
typedef array_int_5 P003_nid_radio_list_int_t_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  kcg_bool acknowledgedByDriver;
  NC_TRAIN trainCategory;
  NC_CDTRAIN cantDeficientcy;
  L_internal_Type_Obu_BasicTypes_Pkg trainLength;
  kcg_int brakePerctage;
  V_internal_Type_Obu_BasicTypes_Pkg maxTrainSpeed;
  M_LOADINGGAUGE loadingGauge;
  M_AXLELOADCAT axleLoadCategory;
  M_AIRTIGHT airtightSystem;
  kcg_int axleNumber;
  kcg_int numberNationalSystems;
  aNID_NTC_T_Packet_TrainTypes_Pkg nationSystems;
  kcg_int numberTractionSystems;
  aTractionIdentity_T_Packet_TrainTypes_Pkg tractionSystem;
} struct__105576;

/* TIU_Types_Pkg::trainData_T */
typedef struct__105576 trainData_T_TIU_Types_Pkg;

typedef struct {
  Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} struct__105594;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct__105594 Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg info;
} struct__105603;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct__105603 TIU_Input_msg_API_TIU_Pkg;

typedef struct {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} struct__105608;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct__105608 RadioManagement_T_API_RadioCommunication_Pkg;

typedef struct { kcg_bool no_restriction; kcg_int restriction; } struct__105614;

/* TIU_Types_Pkg::M_current_T */
typedef struct__105614 M_current_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} struct__105619;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct__105619 Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int door_control_info; } struct__105625;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct__105625 Passenger_door_control_info_T_TIU_Types_Pkg;

typedef struct {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} struct__105630;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct__105630 M_voltage_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} struct__105635;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct__105635 Change_traction_system_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} struct__105641;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct__105641 Type_I_train_commands_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} struct__105649;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct__105649 Brake_inhibition_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} struct__105656;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct__105656 Brake_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} struct__105662;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct__105662 Isolation_Status_T_TIU_Types_Pkg;

typedef struct {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} struct__105667;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct__105667 Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} struct__105677;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct__105677 TIU_Output_msg_API_TIU_Pkg;

typedef struct {
  kcg_bool present;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  kcg_int xT_TRAIN;
  kcg_int xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  kcg_int xNID_TEXTMESSAGE;
} struct__105682;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__105682 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrainTrack_Header_T */
typedef struct__105682 Radio_TrainTrack_Header_T_TM_transitional;

typedef struct {
  kcg_bool valid;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  kcg_int l_train;
  kcg_int v_maxtrain;
  M_LOADINGGAUGE m_loadinggoage;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  kcg_int n_axle;
  kcg_int nIter_tractionIdentity;
  array__105570 tractionIdentity;
  kcg_int nIter_ntc;
  array_int_5 nid_ntc;
} struct__105694;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__105694 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int transitionInformation;
} struct__105710;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__105710 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef kcg_int array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef struct { kcg_bool valid; array_int_15 telephoneNumber; } struct__105718;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__105718 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__105723[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__105723 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  array__105723 aNID_RADIO;
} struct__105726;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__105726 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

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
} struct__105732;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__105732 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct { kcg_bool valid; struct__105732 packet1; } struct__105752;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__105752 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__105757;

/* TrainToTrack::Position_Report */
typedef struct__105757 Position_Report_TrainToTrack;

typedef struct { kcg_bool valid; struct__105757 packet0; } struct__105776;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__105776 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; kcg_int TrainRunningNumber; } struct__105781;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__105781 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR m_error; } struct__105786;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__105786 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef struct {
  struct__105776 p0;
  struct__105752 p1;
  struct__105726 p3;
  struct__105786 p4;
  struct__105781 p5;
  struct__105710 p9;
  struct__105694 p11;
} struct__105791;

/* Common_Types_Pkg::outPackets_T */
typedef struct__105791 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  struct__105682 header;
  struct__105791 packets;
} struct__105801;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__105801 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

/* RCM_MsgTypes_Pkg::msgToTrack_T */
typedef Radio_TrainTrack_Message_T_Radio_Types_Pkg msgToTrack_T_RCM_MsgTypes_Pkg;

/* TM_transitional::Radio_TrainTrack_Message_T */
typedef struct__105801 Radio_TrainTrack_Message_T_TM_transitional;

typedef struct {
  kcg_bool m155_initiationOfACommunicationSession;
  kcg_bool m156_terminationOfACommunicationSession;
  kcg_bool m159_sessionEstablished;
  kcg_bool m154_noCompatibleVersionSupported;
} struct__105807;

/* RCM_MsgTypes_Pkg::msgToTrackTriggers_T */
typedef struct__105807 msgToTrackTriggers_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__105460 bgPosition;
  struct__105470 BG_centerDetectionInaccuraccuracies;
  kcg_int q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__105814;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__105814 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__105832;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__105832 ReceivedMessage_T_Common_Types_Pkg;

/* RCM_MsgTypes_Pkg::msgFromTrack_T */
typedef ReceivedMessage_T_Common_Types_Pkg msgFromTrack_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
  RBC_Id_T_Common_Types_Pkg origin;
} struct__105842;

/* RCM_MsgTypes_Pkg::p42_sessionManagement_T */
typedef struct__105842 p42_sessionManagement_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__105854;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct__105854 P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
  NID_LRBG lrbg;
} struct__105864;

/* RCM_MsgTypes_Pkg::m39_AckOfTerminationOfACommunicationSession_T */
typedef struct__105864 m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
} struct__105871;

/* RCM_MsgTypes_Pkg::m38_initiationOfACommunicationSession_T */
typedef struct__105871 m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  kcg_bool versionSupported;
  RBC_Id_T_Common_Types_Pkg origin;
  M_VERSION m_version;
} struct__105877;

/* RCM_MsgTypes_Pkg::m32_RBC_RIU_SystemVersion_T */
typedef struct__105877 m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator;
} struct__105885;

/* RCM_Session_Types_Pkg::safeRadioConnectionIndication_T */
typedef struct__105885 safeRadioConnectionIndication_T_RCM_Session_Types_Pkg;

typedef struct {
  kcg_bool atPowerUp;
  kcg_bool atPowerDown;
  kcg_bool atStartOfMission;
  kcg_bool modeChangeHasToBeReportedToRBC;
  kcg_bool driverHasManuallyChangedLevel_to_2_or_3;
  kcg_bool trainFrontPassesStartOfAnnouncedRadioHole;
  kcg_bool trainFrontReachesEndOfAnnouncedRadioHole;
  kcg_bool trainFrontInsideInAnAnnouncedRadioHole;
  kcg_bool trainFrontPassesALevelTransitionBorder;
  kcg_bool trainFrontPassesA_RBC_RBC_border;
  kcg_bool startOfMissionProcedureCompleted_in_level_2_or_3;
  kcg_bool isPartOfAnOngoingStartOfMissionProcedure;
  kcg_bool startOfMissionProcedureIsGoingOn;
  kcg_bool endOfMissionIsExecuted;
  kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable;
  kcg_bool errorConditionRequiringTerminationDetected;
  kcg_bool trainIsRejectedByRBC_duringStartOfMission;
  kcg_bool driverClosesTheDeskduringStartOfMission;
  kcg_bool trainExitedFromAnRBCArea;
  kcg_bool isInCommunicationSessionWithAnRIU;
  kcg_bool level_1_isLeft;
} struct__105890;

/* RCM_Session_Types_Pkg::obuEventsAndPhases_T */
typedef struct__105890 obuEventsAndPhases_T_RCM_Session_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnetionAction_T_RCM_Types_Pkg action;
  NID_RADIO nid_radio;
} struct__105914;

/* RCM_Types_Pkg::mobileConnectionCmd_T */
typedef struct__105914 mobileConnectionCmd_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnectionStatus_T_RCM_Types_Pkg status;
  kcg_int nid_radio;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
  kcg_bool isInRadioHole;
} struct__105921;

/* RCM_Types_Pkg::mobileConnectionContext_T */
typedef struct__105921 mobileConnectionContext_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  sessionPhase_T_RCM_Session_Types_Pkg phase;
  kcg_int nid_c;
  kcg_int nid_rbc;
  kcg_int nid_radio;
} struct__105931;

/* RCM_Session_Types_Pkg::sessionStatus_T */
typedef struct__105931 sessionStatus_T_RCM_Session_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool initiatedByOBU;
  kcg_bool initiatedByRBC;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  RBC_Id_T_Common_Types_Pkg origin;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg m38;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg p42;
} struct__105939;

/* RCM_Session_Types_Pkg::sessionCmd_T */
typedef struct__105939 sessionCmd_T_RCM_Session_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; NID_MN nid_mn; } struct__105952;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct__105952 P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileRegistrationAction_T_RCM_Types_Pkg action;
  NID_MN network_id;
} struct__105958;

/* RCM_Types_Pkg::mobileRegistrationCmd_T */
typedef struct__105958 mobileRegistrationCmd_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileHealthStatus_T_RCM_Types_Pkg healthStatus;
  mobileRegistrationStatus_T_RCM_Types_Pkg status;
  kcg_int nid_mn;
} struct__105965;

/* RCM_Types_Pkg::mobileRegistrationContext_T */
typedef struct__105965 mobileRegistrationContext_T_RCM_Types_Pkg;

typedef struct {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg radioNetworkID_Default;
  NID_RADIO nid_radio_shortNumberStoredOnboard;
  kcg_int noOfRetriesOfSendingTerminationMessage;
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived;
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived;
  kcg_int noOfRetriesUntilTerminationOrderIsReceived;
  T_internal_Type_Obu_BasicTypes_Pkg connectionStatusTimerInterval;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg onboardPhoneNumbers;
  NID_ENGINE nid_engine;
  T_internal_Type_Obu_BasicTypes_Pkg maxTimeToMaintainCommSession;
  kcg_int noOfTriesToEstablishASafeRadioConnection;
} struct__105973;

/* RCM_Session_Types_Pkg::morc_configData_T */
typedef struct__105973 morc_configData_T_RCM_Session_Types_Pkg;

typedef struct {
  mobileRegistrationContext_T_RCM_Types_Pkg registration;
  mobileConnectionContext_T_RCM_Types_Pkg connection;
  sessionStatus_T_RCM_Session_Types_Pkg session;
} struct__105987;

/* RCM_Session_Types_Pkg::morcStatus_T */
typedef struct__105987 morcStatus_T_RCM_Session_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainToTrack nid_radio;
} struct__105993;

/* TM_TrainToTrack::P003 */
typedef struct__105993 P003_TM_TrainToTrack;

typedef M_TrainTrack_Message_T_TM_radio_messages array__106001[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t */
typedef array__106001 M_TrainTrackMessage_buffer_t_TM_lib_internal;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t */
typedef array__106001 M_TrainTrackMessageBus_t_TM_TrainTrack_Bus;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
} struct__106004;

/* TM_radio_messages::M_136_T */
typedef struct__106004 M_136_T_TM_radio_messages;

/* TM_radio_messages::M_129_T */
typedef struct__106004 M_129_T_TM_radio_messages;

/* TM_radio_messages::M_154_T */
typedef struct__106004 M_154_T_TM_radio_messages;

/* TM_radio_messages::M_159_T */
typedef struct__106004 M_159_T_TM_radio_messages;

/* TM_radio_messages::M_156_T */
typedef struct__106004 M_156_T_TM_radio_messages;

/* TM_radio_messages::M_155_T */
typedef struct__106004 M_155_T_TM_radio_messages;

typedef kcg_int array_int_8[8];

/* TM::Array08 */
typedef array_int_8 Array08_TM;

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t */
typedef array_int_8 P011_voltage_sections_array_flat_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_TrainTrack_int */
typedef array_int_8 P003_TrainTrack_int_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  kcg_int nid_LRBG;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_link;
  Q_NEWCOUNTRY q_newcountry;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  kcg_int q_locacc;
} struct__106015;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__106015 LinkedBG_T_BG_Types_Pkg;

typedef struct__106015 array__106029[33];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__106029 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  struct__105814 BG_Header;
  array__106029 linkedBGs;
} struct__106032;

/* BG_Types_Pkg::passedBG_T */
typedef struct__106032 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_bg_fromLinkingBG;
  kcg_int nid_c_fromLinkingBG;
  struct__105470 expectedLocation;
  struct__105470 d_link;
  struct__106015 linkingInfo;
} struct__106038;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__106038 infoFromLinking_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__105470 location;
  kcg_int seqNoOnTrack;
  struct__106038 infoFromLinking;
  struct__106032 infoFromPassing;
  kcg_bool missed;
} struct__106047;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__106047 positionedBG_T_TrainPosition_Types_Pck;

typedef positionedBG_T_TrainPosition_Types_Pck array__106059[41];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef array__106059 positionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  NID_MN nid_mn;
} struct__106062;

/* Handover_Pkg::connection_ids_T */
typedef struct__106062 connection_ids_T_Handover_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_RBCTR d_rbctr;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__106071;

/* Packet_Types_Pkg::P131_RBCTransitionOrder_T */
typedef struct__106071 P131_RBCTransitionOrder_T_Packet_Types_Pkg;

/* TM::P131_OBU_T */
typedef struct__106071 P131_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  NID_LRBG nid_lrbg;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_bool contactLastKnownRBC;
  kcg_bool useTheShortNumberStoredOnboard;
  P131_RBCTransitionOrder_T_Packet_Types_Pkg order;
} struct__106082;

/* Handover_Pkg::p131_q_rbcTransitionOrder_T */
typedef struct__106082 p131_q_rbcTransitionOrder_T_Handover_Pkg;

typedef kcg_int array_int_9[9];

/* DATA::DMI_EVC_Coded_Train_Data_int_array_T */
typedef array_int_9 DMI_EVC_Coded_Train_Data_int_array_T_DATA;

/* DATA::DMI_Train_Data_int_array_T */
typedef array_int_9 DMI_Train_Data_int_array_T_DATA;

/* DATA::DMI_Icons_int_array_T */
typedef array_int_9 DMI_Icons_int_array_T_DATA;

/* DATA::DriverIdentifier_INT_T */
typedef array_int_9 DriverIdentifier_INT_T_DATA;

/* TM::Array09 */
typedef array_int_9 Array09_TM;

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
} struct__106095;

/* TM::P042_trackside_int_T */
typedef struct__106095 P042_trackside_int_T_TM;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__106107;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__106107 trainProperties_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  struct__105470 trainPosition;
  kcg_int estimatedFrontEndPosition;
  kcg_int minSafeFrontEndPosition;
  kcg_int maxSafeFrontEndPostion;
  struct__106047 LRBG;
  struct__106047 prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
  kcg_int estimatedRearEndPosition;
  kcg_int minSafeRearEndPosition;
  kcg_int maxSafeRearEndPosition;
} struct__106117;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__106117 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} struct__106137;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct__106137 radioNetWorkIDs_T_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct__106143;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__106143 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__106143 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__106143 array__106149[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__106149 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__106149 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__106152;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__106152 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__106152 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__106152 array__106159[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__106159 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__106159 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__106159 n_iter_k_m_list;
} struct__106162;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__106162 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__106162 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__106162 array__106174[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__106174 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__106174 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__106177;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__106177 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__106177 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__106177 array__106184[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__106184 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__106184 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsnicperm;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint_12;
  M_NVKVINT m_nvkvint_23;
  N_ITER n_iter_n;
  P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 n_iter_n_list;
  N_ITER n_iter_k;
  P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 n_iter_l_list;
  M_NVKTINT m_nvktint;
} struct__106187;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__106187 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__106218;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__106218 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} struct__106223;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct__106223 nvkrint_T_Packet_Types_Pkg;

typedef nvkrint_T_Packet_Types_Pkg array__106229[7];

/* Packet_Types_Pkg::nvkrintArray_T */
typedef array__106229 nvkrintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} struct__106232;

/* Packet_Types_Pkg::nvkvint_T */
typedef struct__106232 nvkvint_T_Packet_Types_Pkg;

typedef nvkvint_T_Packet_Types_Pkg array__106239[7];

/* Packet_Types_Pkg::nvkvintArray_T */
typedef array__106239 nvkvintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} struct__106242;

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct__106242 nvkvintset_T_Packet_Types_Pkg;

typedef nvkvintset_T_Packet_Types_Pkg array__106250[7];

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef array__106250 nvkvintsetArray_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__106253;

/* Packet_Types_Pkg::nidC_T */
typedef struct__106253 nidC_T_Packet_Types_Pkg;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__106253 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__106253 P003V1_section_enum_T_TM_baseline2;

typedef nidC_T_Packet_Types_Pkg array__106258[7];

/* Packet_Types_Pkg::nidCArray_T */
typedef array__106258 nidCArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  D_VALIDNV d_validnv;
  nidCArray_T_Packet_Types_Pkg nid_cArray;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVLIMSUPERV v_nvlimsuperv;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsmicperm;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsupovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  Q_NVLOCACC q_nvlocacc;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  nvkvintsetArray_T_Packet_Types_Pkg nvkvintsetArray;
  nvkrintArray_T_Packet_Types_Pkg nvkrintArray;
  M_NVKTINT m_nvktint;
} struct__106261;

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct__106261 P3_NationalValues_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__106300;

/* TM::P005_section_enum_T */
typedef struct__106300 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__106311[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__106311 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__106314;

/* TM::P005_OBU_T */
typedef struct__106314 P005_OBU_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef kcg_int array_int_3[3];

/* DATA::DMI_Menu_Request_int_array_T */
typedef array_int_3 DMI_Menu_Request_int_array_T_DATA;

/* DATA::DMI_Entry_Request_int_array_T */
typedef array_int_3 DMI_Entry_Request_int_array_T_DATA;

/* DATA::DMI_System_Version_int_array_T */
typedef array_int_3 DMI_System_Version_int_array_T_DATA;

/* DATA::DMI_Display_Control_int_array_T */
typedef array_int_3 DMI_Display_Control_int_array_T_DATA;

/* DATA::DMI_EVC_Radio_Net_Data_int_array_T */
typedef array_int_3 DMI_EVC_Radio_Net_Data_int_array_T_DATA;

/* DATA::DMI_Train_Running_Number_int_array_T */
typedef array_int_3 DMI_Train_Running_Number_int_array_T_DATA;

/* DATA::DMI_Adhesion_Factor_Data_int_array_T */
typedef array_int_3 DMI_Adhesion_Factor_Data_int_array_T_DATA;

/* DATA::DMI_Driver_Request_int_array_T */
typedef array_int_3 DMI_Driver_Request_int_array_T_DATA;

/* DATA::DMI_Train_Data_Ack_int_array_T */
typedef array_int_3 DMI_Train_Data_Ack_int_array_T_DATA;

/* DATA::DMI_Icon_Ack_int_array_T */
typedef array_int_3 DMI_Icon_Ack_int_array_T_DATA;

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P009_TrainTrack_int */
typedef array_int_3 P009_TrainTrack_int_TM_TrainToTrack;

typedef struct {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} struct__106329;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct__106329 BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} struct__106335;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct__106335 BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} struct__106344;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct__106344 linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg array__106350[41];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef array__106350 linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} struct__106353;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct__106353 refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} struct__106361;

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct__106361 positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

typedef positionedBG_T_TrainPosition_Types_Pck array__106366[33];

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef array__106366 linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  struct__106047 bg;
} struct__106369;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct__106369 positionErrors_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastLinkedBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastUnlinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevPassedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedUnlinkedBG;
  Speed_T_Obu_BasicTypes_Pkg speed;
  kcg_bool linkingIsUsedOnboard;
} struct__106381;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct__106381 trainPositionInfo_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__106394;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__106394 MovementAuthoritySection_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__106403[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__106403 MovementAuthoritySectionlist_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__106406;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__106406 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__106411;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__106411 DP_or_OL_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  MA_Level_t_TrackAtlasTypes Level;
  Q_DIR q_dir;
  V_internal_Type_Obu_BasicTypes_Pkg v_main;
  V_internal_Type_Obu_BasicTypes_Pkg v_loa;
  kcg_bool t_loa_unlimited;
  T_internal_Type_Obu_BasicTypes_Pkg t_loa;
  N_ITER n_iter;
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  kcg_bool q_dangerpoint;
  DP_or_OL_t_TrackAtlasTypes dangerpoint;
  kcg_bool q_overlap;
  DP_or_OL_t_TrackAtlasTypes overlap;
  kcg_bool q_endtimer;
  Endtimer_t_TrackAtlasTypes endtimer_t;
} struct__106417;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__106417 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__106435;

/* MA_Request::Driver2MAR_T */
typedef struct__106435 Driver2MAR_T_MA_Request;

/* TA_MA_Request::Driver2MAR_T */
typedef struct__106435 Driver2MAR_T_TA_MA_Request;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__106440;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__106440 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool compatibleModeAndLevel;
  M_LEVEL level;
  kcg_bool newLevel;
  M_MODE Mode;
  kcg_bool newMode;
} struct__106448;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__106448 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} struct__106456;

/* TM_TrainToTrack::P009 */
typedef struct__106456 P009_TM_TrainToTrack;

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
} struct__106463;

/* TM_TrainToTrack::P000 */
typedef struct__106463 P000_TM_TrainToTrack;

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
} struct__106483;

/* TM_TrainToTrack::P001 */
typedef struct__106483 P001_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  Q_MARQSTREASON q_marqstreason;
} struct__106504;

/* TM_radio_messages::M_132_T */
typedef struct__106504 M_132_T_TM_radio_messages;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_6[6];

/* SDMConversionModelPkg::a_BrakeSteps_t */
typedef array_int_6 a_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_BrakeSteps_t */
typedef array_int_6 v_BrakeSteps_t_SDMConversionModelPkg;

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__106519;

/* TM::P015_section_enum_T */
typedef struct__106519 P015_section_enum_T_TM;

/* TM::P012_section_enum_T */
typedef struct__106519 P012_section_enum_T_TM;

typedef P015_section_enum_T_TM array__106527[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__106527 P015_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_LOA v_loa;
  T_LOA t_loa;
  N_ITER n_iter;
  P015_OBU_sectionlist_enum_T_TM sections;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} struct__106530;

/* TM::P015_OBU_T */
typedef struct__106530 P015_OBU_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__106558;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__106558 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__106566[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__106566 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__106569;

/* TM::P021_section_enum_T */
typedef struct__106569 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__106576[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__106576 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__106579;

/* TM::P021_OBU_T */
typedef struct__106579 P021_OBU_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  NID_EM nid_em;
  Q_EMERGENCYSTOP q_emergencystop;
} struct__106590;

/* TM_radio_messages::M_147_T */
typedef struct__106590 M_147_T_TM_radio_messages;

typedef struct {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} struct__106600;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct__106600 NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

typedef struct { NID_EM nid_em; kcg_bool valid; } struct__106606;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct__106606 NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store array__106611[8];

typedef struct { kcg_int nfree; array__106611 items; } struct__106614;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct__106614 NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__106619;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct__106619 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__106619 MRSP_section_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} struct__106626;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct__106626 StaticSpeedSection_t_TrackAtlasTypes;

typedef StaticSpeedSection_t_TrackAtlasTypes array__106634[50];

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef array__106634 StaticSpeedProfile_t_TrackAtlasTypes;

typedef MRSP_section_t_TrackAtlasTypes array__106637[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__106637 MRSP_Profile_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; Q_DIR q_dir; } struct__106640;

/* Packet_Types_Pkg::P135_StopShuntingOnDeskOpening_T */
typedef struct__106640 P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg;

/* TM::P135_OBU_T */
typedef struct__106640 P135_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_MAIN v_main;
  V_LOA v_loa;
  T_LOA t_loa;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer_k;
  T_SECTIONTIMER t_sectiontimer_k;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc_k;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} struct__106645;

/* Packet_Types_Pkg::P12_Level1MovementAuthority_T */
typedef struct__106645 P12_Level1MovementAuthority_T_Packet_Types_Pkg;

typedef P12_Level1MovementAuthority_T_Packet_Types_Pkg array__106673[5];

/* Packet_Types_Pkg::P12_Level1MovementAuthorities_T */
typedef array__106673 P12_Level1MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_MAMODE d_mamode;
  M_MAMODE m_mamode;
  V_MAMODE v_mamode;
  L_MAMODE l_mamode;
  L_ACKMAMODE l_ackmamode;
  Q_MAMODE q_mamode;
} struct__106676;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct__106676 P80_ModeProfile_T_Packet_Types_Pkg;

typedef P80_ModeProfile_T_Packet_Types_Pkg array__106688[3];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef array__106688 P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} struct__106691;

/* Packet_Types_Pkg::P63_BaliseInSRAuthority_T */
typedef struct__106691 P63_BaliseInSRAuthority_T_Packet_Types_Pkg;

typedef P63_BaliseInSRAuthority_T_Packet_Types_Pkg array__106699[7];

/* Packet_Types_Pkg::P63_ListofBalisesinSRAuthority_T */
typedef array__106699 P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__106702;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__106702 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__106711[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__106711 P21_GradientProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STARTREVERSE d_startreverse;
  L_REVERSEAREA l_reversearea;
} struct__106714;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct__106714 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

/* TM::P138_OBU_T */
typedef struct__106714 P138_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_LOA v_loa;
  T_LOA t_loa;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer_k;
  T_SECTIONTIMER t_sectiontimer_k;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc_k;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} struct__106722;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct__106722 P15_Level23MovementAuthority_T_Packet_Types_Pkg;

typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg array__106749[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef array__106749 P15_Level23MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_REVERSE d_reverse;
  V_REVERSE v_reverse;
} struct__106752;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct__106752 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

/* TM::P139_OBU_T */
typedef struct__106752 P139_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__106760;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__106760 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__106766;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__106766 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__106772[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__106772 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__106775;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__106775 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__106784[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__106784 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__106787;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__106787 P027V1_OBU_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__106794;

/* Packet_Types_Pkg::Diff_T */
typedef struct__106794 Diff_T_Packet_Types_Pkg;

typedef Diff_T_Packet_Types_Pkg array__106802[7];

/* Packet_Types_Pkg::DiffArray_T */
typedef array__106802 DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} struct__106805;

/* Packet_Types_Pkg::SSP_T */
typedef struct__106805 SSP_T_Packet_Types_Pkg;

typedef SSP_T_Packet_Types_Pkg array__106813[7];

/* Packet_Types_Pkg::SSPArray_T */
typedef array__106813 SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} struct__106816;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct__106816 P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__106827;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__106827 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__106836;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct__106836 P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg array__106846[7];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef array__106846 P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__106849;

/* TM::P041_section_enum_T */
typedef struct__106849 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__106856[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__106856 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__106859;

/* TM::P041_OBU_T */
typedef struct__106859 P041_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__106868;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct__106868 P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg array__106875[7];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef array__106875 P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__106878;

/* TM::P046_section_enum_T */
typedef struct__106878 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__106884[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__106884 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} struct__106887;

/* TM::P046_OBU_T */
typedef struct__106887 P046_OBU_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef kcg_int array_int_4[4];

/* DATA::DMI_Status_int_array_T */
typedef array_int_4 DMI_Status_int_array_T_DATA;

/* DATA::DMI_Text_Message_Ack_int_array_T */
typedef array_int_4 DMI_Text_Message_Ack_int_array_T_DATA;

/* DATA::DMI_Level_Data_int_array_T */
typedef array_int_4 DMI_Level_Data_int_array_T_DATA;

/* TM::Array04 */
typedef array_int_4 Array04_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_MAIN v_main;
  V_LOA v_loa;
  T_LOA t_loa;
  N_ITER n_iter;
  P015_OBU_sectionlist_enum_T_TM sections;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} struct__106900;

/* TM::P012_OBU_T */
typedef struct__106900 P012_OBU_T_TM;

typedef kcg_int array_int_7[7];

/* SDMConversionModelPkg::m_KvSteps_t */
typedef array_int_7 m_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_KvSteps_t */
typedef array_int_7 v_KvSteps_t_SDMConversionModelPkg;

/* TM::Array07 */
typedef array_int_7 Array07_TM;

typedef struct {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
} struct__106929;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct__106929 T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

typedef struct {
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg P_12;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg P_135;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg P_137;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg P_138;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg P_139;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg P_15;
  P21_GradientProfiles_T_Packet_Types_Pkg P_21;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg P_27;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg P_41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg P_46;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg P_63;
  P80_ModeProfiles_T_Packet_Types_Pkg P_80;
  NID_LRBG LRBG;
  Location_T_Obu_BasicTypes_Pkg referenceLocation;
} struct__106938;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct__106938 T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__106955;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct__106955 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__106955 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__106962[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__106962 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef struct__106253 array__106965[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__106965 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__106965 P003V1_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  N_ITER n_iter;
  P003V1_sectionlist_enum_T_TM_baseline2 SECTIONS;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsopovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
} struct__106968;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__106968 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_32[32];

/* SDMConversionModelPkg::LKrIntLookUp_t */
typedef array_int_32 LKrIntLookUp_t_SDMConversionModelPkg;

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* DATA::DMI_Dynamic_int_array_T */
typedef array_int_24 DMI_Dynamic_int_array_T_DATA;

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__107001;

/* TA_MRSP::SSP_section_t */
typedef struct__107001 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__107006[33];

/* TA_MRSP::SSP_cat_t */
typedef array__107006 SSP_cat_t_TA_MRSP;

typedef array__107006 array__107009[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__107009 SSP_matrix_t_TA_MRSP;

typedef struct {
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  L_internal_Type_Obu_BasicTypes_Pkg d_endsection;
} struct__107012;

/* TA_MA::AccuDistanceProfileMA */
typedef struct__107012 AccuDistanceProfileMA_TA_MA;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  NID_C nid_c;
  N_ITER n_iter_nid_c;
  P003_OBU_nid_c_sectionlist_enum_T_TM nid_c_list;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVLIMSUPERV v_nvlimsuperv;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsnicperm;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsupovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  Q_NVLOCACC q_nvlocacc;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint_12;
  M_NVKVINT m_nvkvint_23;
  N_ITER n_iter_n;
  P003_OBU_n_sectionlist_enum_T_TM n_iter_n_list;
  N_ITER n_iter_k;
  P003_OBU_k_sectionlist_enum_T_TM n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P003_OBU_l_sectionlist_enum_T_TM n_iter_l_list;
  M_NVKTINT m_nvktint;
} struct__107017;

/* TM::P003_OBU_T */
typedef struct__107017 P003_OBU_T_TM;

typedef struct {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} struct__107072;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__107072 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__107081;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__107081 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__107090;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__107090 DataForDMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} struct__107097;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct__107097 trainData_Events_T_trainData_Types_pkg;

typedef struct {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} struct__107106;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct__107106 trainData_Trigger_T_trainData_Types_pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool RBCsystemVersionOnboard;
  kcg_bool validatedbyRBC;
  kcg_bool waitingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} struct__107114;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct__107114 trainDataStatus_T_trainData_Types_pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NC_TRAIN trainCategory;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  M_BRAKEPERCT_DMI_Types_Pkg m_brakeperct;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxTrain;
  M_AXLELOADCAT m_axleLoad;
  M_AIRTIGHT m_airTight;
  M_LOADINGGAUGE m_loadingGauge;
} struct__107124;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct__107124 DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} struct__107136;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct__107136 DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  T_TRAIN t_train_req;
} struct__107142;

/* TM_radio_messages::M_146_T */
typedef struct__107142 M_146_T_TM_radio_messages;

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
} struct__107151;

/* TM_TrainToTrack::P011 */
typedef struct__107151 P011_TM_TrainToTrack;

typedef kcg_int array_int_2[2];

/* DATA::DMI_Radio_Net_Data_int_array_T */
typedef array_int_2 DMI_Radio_Net_Data_int_array_T_DATA;

/* TM_TrainToTrack::P011_voltage_section_array_T */
typedef array_int_2 P011_voltage_section_array_T_TM_TrainToTrack;

typedef P011_voltage_section_array_T_TM_TrainToTrack array_int_2_4[4];

/* TM_TrainToTrack::P011_voltage_sectionlist_array_T */
typedef array_int_2_4 P011_voltage_sectionlist_array_T_TM_TrainToTrack;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P011_TrainTrack_int */
typedef array_int_25 P011_TrainTrack_int_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} struct__107178;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct__107178 DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} struct__107184;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct__107184 TIU_trainStatus_T_TIU_Types_Pkg;

typedef M_TrainTrack_Message_T_TM_radio_messages array__107191[100];

/* TM_lib_internal::M_TrainTrackRadioOutputBuffer_t */
typedef array__107191 M_TrainTrackRadioOutputBuffer_t_TM_lib_internal;

typedef kcg_int array_int_1[1];

/* TM_TrainToTrack::P044_other_data */
typedef array_int_1 P044_other_data_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} struct__107197;

/* TM_TrainToTrack::P044 */
typedef struct__107197 P044_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} struct__107205;

/* TM_TrainToTrack::P005 */
typedef struct__107205 P005_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} struct__107212;

/* TM_TrainToTrack::P004 */
typedef struct__107212 P004_TM_TrainToTrack;

typedef struct { kcg_bool present; M_ERROR errorType; } struct__107219;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct__107219 ErrorMessage_T_ProvidePositionReport_Pkg;

typedef struct {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} struct__107224;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct__107224 ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

typedef struct { NID_NTC nid_ntc; Q_LENGTH q_length; } struct__107230;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct__107230 TrainToTrackStatus_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} struct__107235;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct__107235 ReportedBG_T_ProvidePositionReport_Pkg;

typedef ReportedBG_T_ProvidePositionReport_Pkg array__107241[8];

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef array__107241 ReportedBGList_T_ProvidePositionReport_Pkg;

typedef struct { kcg_bool newSessionEstablished; } struct__107244;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct__107244 RBC_Communication_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} struct__107248;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct__107248 LocationBasedEvents_T_ProvidePositionReport_Pkg;

typedef struct { D_LOC d_loc; Q_LGTLOC q_lgtloc; } struct__107253;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct__107253 IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__107258[2];

/* Packet_Types_Pkg::IterPacket58List_T */
typedef array__107258 IterPacket58List_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  IterPacket58List_T_Packet_Types_Pkg iterPacket58List;
} struct__107261;

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct__107261 P58_PositionReportParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} struct__107274;

/* TM::P058_section_enum_T */
typedef struct__107274 P058_section_enum_T_TM;

typedef P058_section_enum_T_TM array__107280[32];

/* TM::P058_OBU_sectionlist_enum_T */
typedef array__107280 P058_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} struct__107283;

/* TM::P058_OBU_T */
typedef struct__107283 P058_OBU_T_TM;

typedef struct {
  kcg_bool linkedBGError;
  kcg_bool unlinkedBGError;
  kcg_bool BG_versionIncompatible;
  kcg_bool radioSequenceError;
  kcg_bool tNvContactError;
  kcg_bool otherTimingError;
  kcg_bool radioMessageConsistencyError;
  NID_C nid_c;
  NID_ERRORBG_BG_Types_Pkg nid_errorbg;
} struct__107294;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct__107294 MSG_Errors_T_Common_Types_Pkg;

typedef struct {
  kcg_bool isChanged;
  NID_BG bg_id;
  NID_C nid_c;
  MSG_Errors_T_Common_Types_Pkg errors;
} struct__107306;

/* xdebugSupport_Pkg::probesBalises_T */
typedef struct__107306 probesBalises_T_xdebugSupport_Pkg;

typedef struct {
  P41_LevelTransistionOrders_T_Packet_Types_Pkg p41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg p46;
  kcg_bool p12_received;
  kcg_bool p15_received;
  kcg_bool p21_received;
  kcg_bool p27_received;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} struct__107313;

/* xdebugSupport_Pkg::dataCollectionForLevelTransition_T */
typedef struct__107313 dataCollectionForLevelTransition_T_xdebugSupport_Pkg;

typedef struct {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} struct__107324;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct__107324 filterRelatedEvents_T_Common_Types_Pkg;

typedef struct {
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} struct__107335;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_MASSPGradient_Available */
typedef struct__107335 T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg;

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array__107342[17];

typedef array__107342 array__107345[256];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array__107345 ModeDecisionTableType_DataDictionary_Pkg;

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array__107348[5];

typedef array__107348 array__107351[256];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array__107351 LevelDecisionTableType_DataDictionary_Pkg;

typedef kcg_bool array_bool_256[256];

typedef array_bool_256 array_bool_256_46[46];

/* CheckEuroradioMessage::MetadataTruthtable_T1 */
typedef array_bool_256_46 MetadataTruthtable_T1_CheckEuroradioMessage;

typedef struct {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__107360;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct__107360 RadioMessage_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__107369;

/* BG_Types_Pkg::Telegram_T */
typedef struct__107369 Telegram_T_BG_Types_Pkg;

typedef Telegram_T_BG_Types_Pkg array__107376[8];

/* BG_Types_Pkg::TelegramArray_T */
typedef array__107376 TelegramArray_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__107379;

/* BG_Types_Pkg::BG_Message_T */
typedef struct__107379 BG_Message_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} struct__107386;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct__107386 TrackSide_ForCheck_T_Common_Types_Pkg;

typedef struct {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} struct__107394;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct__107394 BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} struct__107405;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct__107405 TelegramStore_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} struct__107411;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct__107411 DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  M_LEVEL level;
  M_POSITION position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
  kcg_bool immediateAck;
  Location_T_Obu_BasicTypes_Pkg AckLength;
} struct__107417;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct__107417 T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} struct__107425;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct__107425 DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool is_set;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg transition;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} struct__107431;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct__107431 T_LevelTransition_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} struct__107438;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct__107438 DMI_DriverRequest_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} struct__107448;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct__107448 DMI_TXT_MSG_status_T_DMI_Types_Pkg;

typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg array__107459[31];

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef array__107459 DMI_TXT_MSGList_status_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} struct__107462;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct__107462 DMI_DriverAck_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} struct__107468;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct__107468 DMI_To_Modes_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} struct__107475;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct__107475 DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} struct__107482;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct__107482 DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} struct__107488;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct__107488 DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

typedef kcg_char array_char_9[9];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef array_char_9 driverIdentifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} struct__107497;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct__107497 DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} struct__107503;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct__107503 DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} struct__107508;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct__107508 DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef kcg_char array_char_255[255];

/* DMI_Types_Pkg::DMI_TEXT */
typedef array_char_255 DMI_TEXT_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_DMI_Identifier_T_DMI_Types_Pkg DMI_Identifier;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg Cabin_Identifier;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg DMI_name;
  M_VERSION m_version;
} struct__107518;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct__107518 DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool present;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg status;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg identifier;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg driverRequest;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg trainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg radioNetData;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg textMessageAck;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg trainDataAck;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg trainData;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg adhesionFactor;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg iconAck;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg selectedLevel;
} struct__107528;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct__107528 DMI_to_EVC_Message_T_API_DMI_Pkg;

typedef struct {
  kcg_bool DMI_Active;
  kcg_bool DMI_Error;
  kcg_bool DMI_DriverIdValidated;
  kcg_bool DMI_LevelSelectedByDirver;
  kcg_bool DMI_TrainRunningNumberFirstValidation;
  kcg_bool DMI_TrainRunningNumberValidated;
  kcg_bool DMI_TrainDataValidated;
  kcg_bool DMI_StartReceived;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Identifier;
} struct__107544;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct__107544 DMI_EVC_status_T_DMI_Types_Pkg;

typedef kcg_int array_int_255[255];

/* DATA::DMI_TEXT_INT_Array_T */
typedef array_int_255 DMI_TEXT_INT_Array_T_DATA;

typedef kcg_int array_int_261[261];

/* DATA::DMI_Identifier_Request_int_array_T */
typedef array_int_261 DMI_Identifier_Request_int_array_T_DATA;

/* DATA::DMI_Identifier_int_array_T */
typedef array_int_261 DMI_Identifier_int_array_T_DATA;

typedef kcg_int array_int_11[11];

/* DATA::DMI_Driver_Identifier_int_array_T */
typedef array_int_11 DMI_Driver_Identifier_int_array_T_DATA;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} struct__107565;

/* TargetManagement_types::Target_T */
typedef struct__107565 Target_T_TargetManagement_types;

typedef struct {
  kcg_bool valid;
  V_odometry_Type_Obu_BasicTypes_Pkg estimatedSpeed;
  kcg_bool valid_v_est;
  V_odometry_Type_Obu_BasicTypes_Pkg permittedSpeed;
  kcg_bool valid_v_permitted;
  V_odometry_Type_Obu_BasicTypes_Pkg releaseSpeed;
  kcg_bool valid_v_release;
  V_odometry_Type_Obu_BasicTypes_Pkg mrdtSpeed;
  kcg_bool valid_v_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg sbiSpeed;
  kcg_bool valid_v_sbi;
  L_internal_Type_Obu_BasicTypes_Pkg targetDistance;
  kcg_bool valid_targetDistance;
  SupervisionStatus_T_SDM_Types_Pkg supervisionStatus;
  SDM_Types_T_SDM_Types_Pkg sdmType;
  SupervisionStatus_T_SDM_Types_Pkg revokedSupervisionStatus;
  SupervisionStatus_T_SDM_Types_Pkg triggeredSupervisionStatus;
  kcg_bool revokedSB;
  kcg_bool triggeredSB;
  kcg_bool revokedEB;
  kcg_bool triggeredEB;
  kcg_bool revokedTCO;
  kcg_bool triggeredTCO;
  kcg_bool ebCmd;
} struct__107572;

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct__107572 SDM_Commands_T_SDM_Types_Pkg;

typedef kcg_bool array_bool_114[114];

/* CalcBrakingCurves_types::ParabolaCurveValid_T */
typedef array_bool_114 ParabolaCurveValid_T_CalcBrakingCurves_types;

typedef kcg_real array_real_114[114];

/* CalcBrakingCurves_types::ParabolaCurveDistances_T */
typedef array_real_114 ParabolaCurveDistances_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveSpeeds_T */
typedef array_real_114 ParabolaCurveSpeeds_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveAccelerations_T */
typedef array_real_114 ParabolaCurveAccelerations_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurveDistances_T_CalcBrakingCurves_types distances;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types speeds;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types accelerations;
  ParabolaCurveValid_T_CalcBrakingCurves_types valid;
} struct__107605;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct__107605 ParabolaCurve_T_CalcBrakingCurves_types;

typedef ParabolaCurve_T_CalcBrakingCurves_types array__107612[200];

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef array__107612 ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_LoA_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} struct__107615;

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct__107615 CurveCollection_T_CalcBrakingCurves_types;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  kcg_real distance;
  kcg_real speed;
} struct__107623;

/* TargetManagement_types::Target_real_T */
typedef struct__107623 Target_real_T_TargetManagement_types;

typedef Target_real_T_TargetManagement_types array__107629[200];

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef array__107629 Target_list_MRSP_real_T_TargetManagement_types;

typedef struct {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_LoA_target;
} struct__107632;

/* TargetManagement_types::TargetCollection_T */
typedef struct__107632 TargetCollection_T_TargetManagement_types;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg position;
  A_internal_real_Type_SDM_Types_Pkg gradient_acceleration;
  kcg_bool valid;
} struct__107639;

/* SDM_GradientAcceleration_types::A_gradient_element_t */
typedef struct__107639 A_gradient_element_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_real location;
  kcg_real gradient;
  kcg_bool valid;
} struct__107645;

/* SDM_GradientAcceleration_types::Gradient_section_real_t */
typedef struct__107645 Gradient_section_real_t_SDM_GradientAcceleration_types;

typedef Gradient_section_real_t_SDM_GradientAcceleration_types array__107651[50];

/* SDM_GradientAcceleration_types::GradientProfile_real_t */
typedef array__107651 GradientProfile_real_t_SDM_GradientAcceleration_types;

typedef Gradient_section_real_t_SDM_GradientAcceleration_types array__107654[100];

/* SDM_GradientAcceleration_types::GradientProfile_real_compensated_t */
typedef array__107654 GradientProfile_real_compensated_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_real frontPos;
  kcg_int frontIndex;
  kcg_real rearPos;
  kcg_int rearIndex;
  array__107654 compensatedGradientProfile;
} struct__107657;

/* SDM_GradientAcceleration_Pkg::ACC */
typedef struct__107657 ACC_SDM_GradientAcceleration_Pkg;

typedef A_gradient_element_t_SDM_GradientAcceleration_types array__107665[100];

/* SDM_GradientAcceleration_types::A_gradient_t */
typedef array__107665 A_gradient_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} struct__107668;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct__107668 TrainLocations_real_T_SDM_Types_Pkg;

typedef kcg_real array_real_100[100];

/* CalcBrakingCurves_types::ASafeDistanceDefinition_T */
typedef array_real_100 ASafeDistanceDefinition_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafeRow_T */
typedef array_real_100 ASafeRow_T_CalcBrakingCurves_types;

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_14[14];

/* CalcBrakingCurves_types::ASafe_Data_T */
typedef array_real_100_14 ASafe_Data_T_CalcBrakingCurves_types;

typedef V_internal_real_Type_SDM_Types_Pkg array_real_14[14];

/* CalcBrakingCurves_types::ASafeSpeedDefinition_T */
typedef array_real_14 ASafeSpeedDefinition_T_CalcBrakingCurves_types;

typedef struct {
  ASafeDistanceDefinition_T_CalcBrakingCurves_types distance_definition;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types speed_definition;
  ASafe_Data_T_CalcBrakingCurves_types data;
} struct__107686;

/* CalcBrakingCurves_types::ASafe_T */
typedef struct__107686 ASafe_T_CalcBrakingCurves_types;

typedef struct { array_int_6 a; array_int_6 v; } struct__107692;

/* SDMConversionModelPkg::av_Map_t */
typedef struct__107692 av_Map_t_SDMConversionModelPkg;

typedef struct {
  av_Map_t_SDMConversionModelPkg emergency;
  av_Map_t_SDMConversionModelPkg service;
} struct__107697;

/* SDMConversionModelPkg::a_Brake_t */
typedef struct__107697 a_Brake_t_SDMConversionModelPkg;

typedef kcg_int array_int_13[13];

/* SDMConversionModelPkg::a_MergedSteps_t */
typedef array_int_13 a_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_MergedSteps_t */
typedef array_int_13 v_MergedSteps_t_SDMConversionModelPkg;

typedef struct {
  a_MergedSteps_t_SDMConversionModelPkg a;
  v_MergedSteps_t_SDMConversionModelPkg v;
} struct__107705;

/* SDMConversionModelPkg::av_MergedMap_t */
typedef struct__107705 av_MergedMap_t_SDMConversionModelPkg;

typedef kcg_int array_int_221[221];

typedef array_int_6 array_int_6_221[221];

typedef struct { array_int_7 m; array_int_7 v; } struct__107716;

/* SDMConversionModelPkg::mv_Map_t */
typedef struct__107716 mv_Map_t_SDMConversionModelPkg;

typedef kcg_real array_real_3[3];

/* TargetLimits_Pkg::TractionDeltaTriple */
typedef array_real_3 TractionDeltaTriple_TargetLimits_Pkg;

/* SDMConversionModelPkg::coeff_BrakeBasic_t */
typedef array_real_3 coeff_BrakeBasic_t_SDMConversionModelPkg;

typedef T_internal_real_Type_SDM_Types_Pkg array_real_2[2];

/* SDMModelPkg::t_BrakeVt_t */
typedef array_real_2 t_BrakeVt_t_SDMModelPkg;

typedef struct {
  t_BrakeVt_t_SDMModelPkg emergency;
  t_BrakeVt_t_SDMModelPkg service;
} struct__107727;

/* SDMModelPkg::t_Brake_t */
typedef struct__107727 t_Brake_t_SDMModelPkg;

typedef struct {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
  T_internal_real_Type_SDM_Types_Pkg indication;
} struct__107732;

/* TargetLimits_Pkg::T_trac_t */
typedef struct__107732 T_trac_t_TargetLimits_Pkg;

typedef struct {
  kcg_real distance;
  kcg_real speed;
  kcg_real acceleration;
} struct__107742;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct__107742 ParabolaArc_T_CalcBrakingCurves_types;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} struct__107748;

/* TargetLimits_Pkg::bec_t */
typedef struct__107748 bec_t_TargetLimits_Pkg;

typedef struct {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  T_internal_Type_Obu_BasicTypes_Pkg T_traction_cut_off;
  L_internal_Type_Obu_BasicTypes_Pkg offsetAntennaL1;
} struct__107753;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct__107753 trainData_internal_t_SDM_Types_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg SBI2;
  kcg_int index;
  TargetType_T_TargetManagement_types ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_Pkg V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_Pkg V_ura;
  V_internal_real_Type_SDM_Types_Pkg V_P_MRDT_ebd;
  kcg_int V_P_MRDT_index;
} struct__107761;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct__107761 TargetIteratorAkku_TargetLimits_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} struct__107773;

/* TargetManagement_types::EOA_real_T */
typedef struct__107773 EOA_real_T_TargetManagement_types;

typedef struct {
  kcg_bool valid;
  V_internal_real_Type_SDM_Types_Pkg v_main;
  EOA_real_T_TargetManagement_types EOA;
  kcg_bool DP_valid;
  L_internal_real_Type_SDM_Types_Pkg DangerPoint;
  kcg_bool OL_valid;
  L_internal_real_Type_SDM_Types_Pkg Overlap;
  kcg_bool q_calculate_release;
  V_internal_real_Type_SDM_Types_Pkg ReleaseSpeed;
  MA_Level_t_TrackAtlasTypes level;
} struct__107778;

/* TargetManagement_types::MA_section_real_T */
typedef struct__107778 MA_section_real_T_TargetManagement_types;

typedef struct {
  kcg_real Loc_Abs;
  kcg_real MRS;
  kcg_bool valid;
} struct__107791;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct__107791 MRSP_internal_section_T_TargetManagement_types;

typedef MRSP_internal_section_T_TargetManagement_types array__107797[200];

/* TargetManagement_types::MRSP_internal_T */
typedef array__107797 MRSP_internal_T_TargetManagement_types;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg SBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_Pkg EBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_Pkg EBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_Pkg SBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_Pkg d_I_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_I_of_V_MRSP;
  L_internal_Type_Obu_BasicTypes_Pkg d_P_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_W_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_EBI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg SBI1_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg SBI2_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_target;
  L_internal_Type_Obu_BasicTypes_Pkg d_eoa;
  L_internal_Type_Obu_BasicTypes_Pkg d_svl;
  kcg_bool Preindication_EBD_location_valid;
  kcg_bool Preindication_SBD_location_valid;
  kcg_bool RSM_start_location_EBD_valid;
  kcg_bool RSM_start_location_SBD_valid;
} struct__107800;

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct__107800 SDM_Locations_T_SDM_Types_Pkg;

typedef struct {
  V_odometry_Type_Obu_BasicTypes_Pkg V_est;
  V_odometry_Type_Obu_BasicTypes_Pkg V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg V_release;
  V_odometry_Type_Obu_BasicTypes_Pkg V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg v_p_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg v_p_dmi;
  V_odometry_Type_Obu_BasicTypes_Pkg v_sbi_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg v_FLOI_dmi;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_warning_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_warning_V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_sbi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_sbi_V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_ebi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_ebi_V_target;
  kcg_bool OdoStandStill;
} struct__107823;

/* SDM_Types_Pkg::Speeds_T */
typedef struct__107823 Speeds_T_SDM_Types_Pkg;

typedef struct {
  array__107629 targetList;
  kcg_int lastInsertedTargetIndex;
} struct__107841;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct__107841 extractTargetsMRSPACC_TargetManagement_pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} struct__107846;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct__107846 BCAccumulator_type_CalcBrakingCurves_Pkg;

typedef struct {
  kcg_bool valid;
  V_internal_Type_Obu_BasicTypes_Pkg targetSpeed;
  V_internal_Type_Obu_BasicTypes_Pkg permittedSpeed;
  V_internal_Type_Obu_BasicTypes_Pkg releaseSpeed;
  L_internal_Type_Obu_BasicTypes_Pkg locationBrakeTarget;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_curve_starting_point;
  V_internal_Type_Obu_BasicTypes_Pkg interventionSpeed;
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status;
  M_SupervisionDisplay_T_DMI_Types_Pkg supervisionDisplay;
  L_internal_Type_Obu_BasicTypes_Pkg distanceIndicationPoint;
} struct__107854;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct__107854 speedSupervisionForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool t1;
  kcg_bool t2;
  kcg_bool t3;
  kcg_bool t4;
  kcg_bool t5;
  kcg_bool t6;
  kcg_bool t7;
  kcg_bool t8;
  kcg_bool t9;
  kcg_bool t10;
  kcg_bool t11;
  kcg_bool t12;
  kcg_bool t13;
  kcg_bool t14;
} struct__107867;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct__107867 TSM_triggerCond_T_SDM_Commands_Pkg;

typedef kcg_bool array_bool_14[14];

/* SDM_Commands_Pkg::MyArray */
typedef array_bool_14 MyArray_SDM_Commands_Pkg;

typedef struct {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} struct__107887;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct__107887 TSM_revokeCond_T_SDM_Commands_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__107894;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct__107894 radioManagementMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} struct__107903;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct__107903 DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} struct__107909;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct__107909 DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} struct__107915;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct__107915 DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
} struct__107921;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct__107921 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct__107921 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct__107921 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct__107921 DMI_loadingGauge_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} struct__107928;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct__107928 DMI_train_length_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} struct__107936;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct__107936 DMI_train_id_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_train_id_T_DMI_Types_Pkg trainID;
  DMI_train_length_T_DMI_Types_Pkg trainLength;
  DMI_brakeModel_id_T_DMI_Types_Pkg brakeModel;
  DMI_vMax_id_T_DMI_Types_Pkg vmax;
  M_AXLELOADCAT mAxleLoad;
  DMI_airtightSystem_T_DMI_Types_Pkg airTightSystem;
  DMI_loadingGauge_T_DMI_Types_Pkg mLoadingGauge;
} struct__107945;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct__107945 DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} struct__107957;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct__107957 movementAuthorityForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} struct__107963;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct__107963 nationValuesForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  Icon_control_flag_T_DMI_Types_Pkg DMI_m_icon_control_flag;
  kcg_real DMI_m_icon_flashing_freq;
  Icon_group_T_DMI_Types_Pkg DMI_nid_icon_group;
  kcg_int DMI_nid_icon_rank;
  Area_group_T_DMI_Types_Pkg DMI_nid_area_group;
  kcg_int DMI_nid_area_rank;
  kcg_int DMI_nid_icon_identifier;
} struct__107969;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct__107969 DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_65[65];

/* DMI_trackCondition_int_array_T */
typedef array_int_65 DMI_trackCondition_int_array_T;

/* DATA::DMI_LevelList_int_array_T */
typedef array_int_65 DMI_LevelList_int_array_T_DATA;

typedef kcg_int array_int_67[67];

/* DATA::DMI_EVC_Level_Data_int_array_T */
typedef array_int_67 DMI_EVC_Level_Data_int_array_T_DATA;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} struct__107987;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct__107987 DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} struct__107993;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct__107993 DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} struct__107999;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct__107999 DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_129[129];

/* DMI_gradientProfile_int_arrayT */
typedef array_int_129 DMI_gradientProfile_int_arrayT;

/* DATA::DMI_speedProfile_int_array_T */
typedef array_int_129 DMI_speedProfile_int_array_T_DATA;

typedef DMI_speedProfileElement_T_DMI_Types_Pkg array__108012[32];

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef array__108012 DMI_SpeedProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} struct__108015;

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct__108015 DMI_speedProfile_T_DMI_Types_Pkg;

typedef DMI_gradientProfileElement_T_DMI_Types_Pkg array__108020[32];

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef array__108020 DMI_gradientProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} struct__108023;

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct__108023 DMI_gradientProfile_T_DMI_Types_Pkg;

typedef struct {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} struct__108028;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct__108028 DMI_trackConditionElement_T_DMI_Types_Pkg;

typedef DMI_trackConditionElement_T_DMI_Types_Pkg array__108033[32];

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef array__108033 DMI_trackConditionArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} struct__108036;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct__108036 DMI_trackCondition_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} struct__108041;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct__108041 DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_325[325];

/* DMI_Track_Description_int_array_T */
typedef array_int_325 DMI_Track_Description_int_array_T;

typedef kcg_int array_int_262[262];

/* DATA::DMI_Text_Message_int_array_T */
typedef array_int_262 DMI_Text_Message_int_array_T_DATA;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} struct__108055;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct__108055 DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool Menu_button_start_of_mission;
  kcg_bool Menu_button_shunting;
  kcg_bool Menu_button_shunting_exit;
  kcg_bool Menu_button_non_leading;
  kcg_bool Menu_button_exit_non_leading;
  kcg_bool Menu_button_maintain_shunting;
  kcg_bool Menu_button_driver_ID;
  kcg_bool Menu_button_train_running_number;
  kcg_bool Menu_button_ETCS_level;
  kcg_bool Menu_button_train_data_modification;
  kcg_bool Menu_button_train_data_view;
  kcg_bool Menu_button_staff_responsible_data;
  kcg_bool Menu_button_language_selection;
  kcg_bool Menu_button_override_EOA;
  kcg_bool Menu_button_override_route_suitability;
  kcg_bool Menu_button_adhesion_factor;
  kcg_bool Menu_button_system_version;
  kcg_bool Menu_button_volume;
  kcg_bool Menu_button_luminance;
  kcg_bool Menu_button_train_integrity;
  kcg_bool Menu_button_isolation;
  kcg_bool Show_hourglass;
  kcg_bool Menu_button_use_short_number;
  kcg_bool Menu_button_enter_RBC_data;
  kcg_bool Menu_button_radio_network_ID;
  kcg_bool Menu_button_contact_last_RBC;
  kcg_bool Button_switch_for_train_data;
  kcg_bool Fix_train_data_entry;
  kcg_bool Menu_button_Set_VBC;
  kcg_bool Menu_button_Remove_VBC;
} struct__108066;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct__108066 DMI_Available_Menu_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} struct__108099;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct__108099 DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  V_internal_Type_Obu_BasicTypes_Pkg v_train;
  L_internal_Type_Obu_BasicTypes_Pkg location_front_train;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_target;
  V_internal_Type_Obu_BasicTypes_Pkg v_target;
  V_internal_Type_Obu_BasicTypes_Pkg v_permitted;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_curve_starting_point;
  V_internal_Type_Obu_BasicTypes_Pkg v_intervention;
  M_MODE mode;
  DMI_level_T_DMI_Types_Pkg level;
  NID_C nid_c;
  kcg_bool nid_c_valid;
  M_SupervisionDisplay_T_DMI_Types_Pkg m_warning;
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
  L_internal_Type_Obu_BasicTypes_Pkg location_KP_Balise_Track;
  L_internal_Type_Obu_BasicTypes_Pkg distance_KP_Balise;
  L_internal_Type_Obu_BasicTypes_Pkg distance_to_TSA;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg radioConnectionStatus;
  L_internal_Type_Obu_BasicTypes_Pkg distanceIndicationPoint;
} struct__108105;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct__108105 DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool present;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg dynamic;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg menu_request;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg entry_request;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg evc_coded_train_data;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg textMessage;
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg trackDescription;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg identifierRequest;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg systemVersion;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg displayControl;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg EVC_levelData;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg EVC_radioNetData;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg trainRunningNumber;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg trainData;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg adhesionFactor;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg iconRequest;
} struct__108131;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct__108131 EVC_to_DMI_Message_T_API_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
} struct__108151;

/* Level_And_Mode_Types_Pkg::T_AcknoledgementRequest */
typedef struct__108151 T_AcknoledgementRequest_Level_And_Mode_Types_Pkg;

typedef struct {
  T_LevelTransition_Level_And_Mode_Types_Pkg LevelTransition;
  kcg_bool IsAvailableForUse;
} struct__108158;

/* Level_And_Mode_Types_Pkg::T_AnnouncedLevel */
typedef struct__108158 T_AnnouncedLevel_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} struct__108163;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct__108163 dmiOutputs_T_manage_DMI_Output_Pkg;

typedef struct {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} struct__108168;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct__108168 T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef struct {
  MSG_Errors_T_Common_Types_Pkg Common_Errors;
  kcg_bool Failure_Occured;
  kcg_bool Continue_Shunting_Active;
  kcg_bool Stop_Shunting_Stored;
} struct__108176;

/* Level_And_Mode_Types_Pkg::T_Data_From_F2_functions */
typedef struct__108176 T_Data_From_F2_functions_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Interface_To_National_System;
  kcg_bool National_trip_Order;
} struct__108183;

/* Level_And_Mode_Types_Pkg::T_Data_From_STM */
typedef struct__108183 T_Data_From_STM_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  struct__106369 PositionErrors;
  struct__106117 Train_Position;
  kcg_int Train_Speed;
  kcg_bool Train_Standstill;
} struct__108188;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct__108188 T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
  kcg_bool Connection_to_RBC_req;
  kcg_bool Position_Repport_Needed;
} struct__108197;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct__108197 T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} struct__108206;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct__108206 T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} struct__108215;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct__108215 TIU_commandStatus_T_TIU_Types_Pkg;

typedef T_LevelTransition_Level_And_Mode_Types_Pkg array__108221[7];

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef array__108221 T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg;

typedef struct {
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg level_transition_priority_table;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg conditionnalTransition;
  kcg_bool receivedL2L3MA_track;
  kcg_bool receivedL1MA_track;
} struct__108224;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Level */
typedef struct__108224 T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} struct__108231;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct__108231 T_Data_From_DMI_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool SH_Refused_By_RBC;
} struct__108248;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct__108248 T_Data_To_DMI_Level_And_Mode_Types_Pkg;

typedef struct {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} struct__108260;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct__108260 T_Mode_Profile_Level_And_Mode_Types_Pkg;

typedef T_Mode_Profile_Level_And_Mode_Types_Pkg array__108268[3];

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef array__108268 T_Mode_Profile_Table_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} struct__108271;

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct__108271 T_Reversing_Data_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool MA_SSP_Gradient_Available;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg Mode_Profile_On_Board;
  kcg_bool Shunting_granted_By_RBC;
  kcg_bool Trip_Order_Given_By_Balise;
  kcg_bool List_Bg_Related_To_SR_Empty;
  kcg_bool Stop_If_In_shunting;
  kcg_bool Stop_If_In_SR;
  kcg_bool RBC_Ack_TR_EB_Revocked;
  kcg_bool RBC_Authorized_SR;
  T_Reversing_Data_Level_And_Mode_Types_Pkg Reversing_Data;
  kcg_bool Emergency_Stop_Message_Received;
} struct__108279;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Mode */
typedef struct__108279 T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg;

typedef kcg_bool array_bool_30[30];

typedef kcg_bool array_bool_4[4];

typedef struct { kcg_int idx; array_bool_4 items; } struct__108299;

typedef kcg_bool array_bool_1[1];

typedef kcg_real array_real_1[1];

typedef Target_real_T_TargetManagement_types array__108310[1];

typedef array_real_100 array_real_100_1[1];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_13[13];

typedef V_internal_real_Type_SDM_Types_Pkg array_real_13[13];

typedef kcg_real array_real_8[8];

typedef array_real_100 array_real_100_8[8];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_6[6];

typedef V_internal_real_Type_SDM_Types_Pkg array_real_6[6];

typedef kcg_bool array_bool_8[8];

typedef ReceivedMessage_T_Common_Types_Pkg array__108337[3];

typedef ErrorMessage_T_ProvidePositionReport_Pkg array__108340[9];

typedef struct__106253 array__108343[1];

typedef kcg_int array_int_33[33];

typedef kcg_int array_int_30[30];

typedef positionedBG_T_TrainPosition_Types_Pck array__108352[1];

typedef positionedBG_T_TrainPosition_Types_Pck array__108355[8];

typedef kcg_int array_int_42[42];

typedef M_TrainTrack_Message_T_TM_radio_messages array__108361[1];

typedef kcg_real array_real_113[113];

typedef kcg_bool array_bool_113[113];

typedef Target_real_T_TargetManagement_types array__112372[199];

typedef M_TrainTrack_Message_T_TM_radio_messages array__112812[4];

typedef P003_OBU_nid_c_section_enum_T_TM array__113049[31];

typedef positionedBG_T_TrainPosition_Types_Pck array__113146[40];

typedef M_TrainTrack_Message_T_TM_radio_messages array__113299[95];

typedef M_TrainTrack_Message_T_TM_radio_messages array__113303[96];

typedef M_TrainTrack_Message_T_TM_radio_messages array__113307[3];

typedef M_TrainTrack_Message_T_TM_radio_messages array__113310[97];

typedef M_TrainTrack_Message_T_TM_radio_messages array__113314[2];

typedef M_TrainTrack_Message_T_TM_radio_messages array__113317[98];

typedef M_TrainTrack_Message_T_TM_radio_messages array__113321[99];

#ifndef kcg_copy_struct__105343
#define kcg_copy_struct__105343(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105343)))
#endif /* kcg_copy_struct__105343 */

#ifndef kcg_copy_struct__105350
#define kcg_copy_struct__105350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105350)))
#endif /* kcg_copy_struct__105350 */

#ifndef kcg_copy_struct__105358
#define kcg_copy_struct__105358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105358)))
#endif /* kcg_copy_struct__105358 */

#ifndef kcg_copy_struct__105363
#define kcg_copy_struct__105363(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105363)))
#endif /* kcg_copy_struct__105363 */

#ifndef kcg_copy_struct__105373
#define kcg_copy_struct__105373(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105373)))
#endif /* kcg_copy_struct__105373 */

#ifndef kcg_copy_struct__105384
#define kcg_copy_struct__105384(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105384)))
#endif /* kcg_copy_struct__105384 */

#ifndef kcg_copy_struct__105389
#define kcg_copy_struct__105389(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105389)))
#endif /* kcg_copy_struct__105389 */

#ifndef kcg_copy_struct__105407
#define kcg_copy_struct__105407(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105407)))
#endif /* kcg_copy_struct__105407 */

#ifndef kcg_copy_struct__105419
#define kcg_copy_struct__105419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105419)))
#endif /* kcg_copy_struct__105419 */

#ifndef kcg_copy_struct__105426
#define kcg_copy_struct__105426(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105426)))
#endif /* kcg_copy_struct__105426 */

#ifndef kcg_copy_struct__105434
#define kcg_copy_struct__105434(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105434)))
#endif /* kcg_copy_struct__105434 */

#ifndef kcg_copy_struct__105447
#define kcg_copy_struct__105447(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105447)))
#endif /* kcg_copy_struct__105447 */

#ifndef kcg_copy_struct__105454
#define kcg_copy_struct__105454(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105454)))
#endif /* kcg_copy_struct__105454 */

#ifndef kcg_copy_struct__105460
#define kcg_copy_struct__105460(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105460)))
#endif /* kcg_copy_struct__105460 */

#ifndef kcg_copy_struct__105470
#define kcg_copy_struct__105470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105470)))
#endif /* kcg_copy_struct__105470 */

#ifndef kcg_copy_struct__105476
#define kcg_copy_struct__105476(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105476)))
#endif /* kcg_copy_struct__105476 */

#ifndef kcg_copy_struct__105481
#define kcg_copy_struct__105481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105481)))
#endif /* kcg_copy_struct__105481 */

#ifndef kcg_copy_struct__105492
#define kcg_copy_struct__105492(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105492)))
#endif /* kcg_copy_struct__105492 */

#ifndef kcg_copy_struct__105503
#define kcg_copy_struct__105503(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105503)))
#endif /* kcg_copy_struct__105503 */

#ifndef kcg_copy_struct__105508
#define kcg_copy_struct__105508(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105508)))
#endif /* kcg_copy_struct__105508 */

#ifndef kcg_copy_struct__105523
#define kcg_copy_struct__105523(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105523)))
#endif /* kcg_copy_struct__105523 */

#ifndef kcg_copy_struct__105528
#define kcg_copy_struct__105528(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105528)))
#endif /* kcg_copy_struct__105528 */

#ifndef kcg_copy_struct__105534
#define kcg_copy_struct__105534(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105534)))
#endif /* kcg_copy_struct__105534 */

#ifndef kcg_copy_struct__105540
#define kcg_copy_struct__105540(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105540)))
#endif /* kcg_copy_struct__105540 */

#ifndef kcg_copy_struct__105545
#define kcg_copy_struct__105545(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105545)))
#endif /* kcg_copy_struct__105545 */

#ifndef kcg_copy_struct__105554
#define kcg_copy_struct__105554(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105554)))
#endif /* kcg_copy_struct__105554 */

#ifndef kcg_copy_struct__105565
#define kcg_copy_struct__105565(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105565)))
#endif /* kcg_copy_struct__105565 */

#ifndef kcg_copy_struct__105576
#define kcg_copy_struct__105576(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105576)))
#endif /* kcg_copy_struct__105576 */

#ifndef kcg_copy_struct__105594
#define kcg_copy_struct__105594(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105594)))
#endif /* kcg_copy_struct__105594 */

#ifndef kcg_copy_struct__105603
#define kcg_copy_struct__105603(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105603)))
#endif /* kcg_copy_struct__105603 */

#ifndef kcg_copy_struct__105608
#define kcg_copy_struct__105608(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105608)))
#endif /* kcg_copy_struct__105608 */

#ifndef kcg_copy_struct__105614
#define kcg_copy_struct__105614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105614)))
#endif /* kcg_copy_struct__105614 */

#ifndef kcg_copy_struct__105619
#define kcg_copy_struct__105619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105619)))
#endif /* kcg_copy_struct__105619 */

#ifndef kcg_copy_struct__105625
#define kcg_copy_struct__105625(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105625)))
#endif /* kcg_copy_struct__105625 */

#ifndef kcg_copy_struct__105630
#define kcg_copy_struct__105630(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105630)))
#endif /* kcg_copy_struct__105630 */

#ifndef kcg_copy_struct__105635
#define kcg_copy_struct__105635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105635)))
#endif /* kcg_copy_struct__105635 */

#ifndef kcg_copy_struct__105641
#define kcg_copy_struct__105641(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105641)))
#endif /* kcg_copy_struct__105641 */

#ifndef kcg_copy_struct__105649
#define kcg_copy_struct__105649(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105649)))
#endif /* kcg_copy_struct__105649 */

#ifndef kcg_copy_struct__105656
#define kcg_copy_struct__105656(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105656)))
#endif /* kcg_copy_struct__105656 */

#ifndef kcg_copy_struct__105662
#define kcg_copy_struct__105662(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105662)))
#endif /* kcg_copy_struct__105662 */

#ifndef kcg_copy_struct__105667
#define kcg_copy_struct__105667(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105667)))
#endif /* kcg_copy_struct__105667 */

#ifndef kcg_copy_struct__105677
#define kcg_copy_struct__105677(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105677)))
#endif /* kcg_copy_struct__105677 */

#ifndef kcg_copy_struct__105682
#define kcg_copy_struct__105682(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105682)))
#endif /* kcg_copy_struct__105682 */

#ifndef kcg_copy_struct__105694
#define kcg_copy_struct__105694(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105694)))
#endif /* kcg_copy_struct__105694 */

#ifndef kcg_copy_struct__105710
#define kcg_copy_struct__105710(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105710)))
#endif /* kcg_copy_struct__105710 */

#ifndef kcg_copy_struct__105718
#define kcg_copy_struct__105718(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105718)))
#endif /* kcg_copy_struct__105718 */

#ifndef kcg_copy_struct__105726
#define kcg_copy_struct__105726(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105726)))
#endif /* kcg_copy_struct__105726 */

#ifndef kcg_copy_struct__105732
#define kcg_copy_struct__105732(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105732)))
#endif /* kcg_copy_struct__105732 */

#ifndef kcg_copy_struct__105752
#define kcg_copy_struct__105752(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105752)))
#endif /* kcg_copy_struct__105752 */

#ifndef kcg_copy_struct__105757
#define kcg_copy_struct__105757(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105757)))
#endif /* kcg_copy_struct__105757 */

#ifndef kcg_copy_struct__105776
#define kcg_copy_struct__105776(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105776)))
#endif /* kcg_copy_struct__105776 */

#ifndef kcg_copy_struct__105781
#define kcg_copy_struct__105781(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105781)))
#endif /* kcg_copy_struct__105781 */

#ifndef kcg_copy_struct__105786
#define kcg_copy_struct__105786(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105786)))
#endif /* kcg_copy_struct__105786 */

#ifndef kcg_copy_struct__105791
#define kcg_copy_struct__105791(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105791)))
#endif /* kcg_copy_struct__105791 */

#ifndef kcg_copy_struct__105801
#define kcg_copy_struct__105801(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105801)))
#endif /* kcg_copy_struct__105801 */

#ifndef kcg_copy_struct__105807
#define kcg_copy_struct__105807(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105807)))
#endif /* kcg_copy_struct__105807 */

#ifndef kcg_copy_struct__105814
#define kcg_copy_struct__105814(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105814)))
#endif /* kcg_copy_struct__105814 */

#ifndef kcg_copy_struct__105832
#define kcg_copy_struct__105832(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105832)))
#endif /* kcg_copy_struct__105832 */

#ifndef kcg_copy_struct__105842
#define kcg_copy_struct__105842(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105842)))
#endif /* kcg_copy_struct__105842 */

#ifndef kcg_copy_struct__105854
#define kcg_copy_struct__105854(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105854)))
#endif /* kcg_copy_struct__105854 */

#ifndef kcg_copy_struct__105864
#define kcg_copy_struct__105864(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105864)))
#endif /* kcg_copy_struct__105864 */

#ifndef kcg_copy_struct__105871
#define kcg_copy_struct__105871(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105871)))
#endif /* kcg_copy_struct__105871 */

#ifndef kcg_copy_struct__105877
#define kcg_copy_struct__105877(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105877)))
#endif /* kcg_copy_struct__105877 */

#ifndef kcg_copy_struct__105885
#define kcg_copy_struct__105885(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105885)))
#endif /* kcg_copy_struct__105885 */

#ifndef kcg_copy_struct__105890
#define kcg_copy_struct__105890(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105890)))
#endif /* kcg_copy_struct__105890 */

#ifndef kcg_copy_struct__105914
#define kcg_copy_struct__105914(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105914)))
#endif /* kcg_copy_struct__105914 */

#ifndef kcg_copy_struct__105921
#define kcg_copy_struct__105921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105921)))
#endif /* kcg_copy_struct__105921 */

#ifndef kcg_copy_struct__105931
#define kcg_copy_struct__105931(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105931)))
#endif /* kcg_copy_struct__105931 */

#ifndef kcg_copy_struct__105939
#define kcg_copy_struct__105939(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105939)))
#endif /* kcg_copy_struct__105939 */

#ifndef kcg_copy_struct__105952
#define kcg_copy_struct__105952(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105952)))
#endif /* kcg_copy_struct__105952 */

#ifndef kcg_copy_struct__105958
#define kcg_copy_struct__105958(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105958)))
#endif /* kcg_copy_struct__105958 */

#ifndef kcg_copy_struct__105965
#define kcg_copy_struct__105965(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105965)))
#endif /* kcg_copy_struct__105965 */

#ifndef kcg_copy_struct__105973
#define kcg_copy_struct__105973(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105973)))
#endif /* kcg_copy_struct__105973 */

#ifndef kcg_copy_struct__105987
#define kcg_copy_struct__105987(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105987)))
#endif /* kcg_copy_struct__105987 */

#ifndef kcg_copy_struct__105993
#define kcg_copy_struct__105993(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__105993)))
#endif /* kcg_copy_struct__105993 */

#ifndef kcg_copy_struct__106004
#define kcg_copy_struct__106004(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106004)))
#endif /* kcg_copy_struct__106004 */

#ifndef kcg_copy_struct__106015
#define kcg_copy_struct__106015(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106015)))
#endif /* kcg_copy_struct__106015 */

#ifndef kcg_copy_struct__106032
#define kcg_copy_struct__106032(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106032)))
#endif /* kcg_copy_struct__106032 */

#ifndef kcg_copy_struct__106038
#define kcg_copy_struct__106038(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106038)))
#endif /* kcg_copy_struct__106038 */

#ifndef kcg_copy_struct__106047
#define kcg_copy_struct__106047(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106047)))
#endif /* kcg_copy_struct__106047 */

#ifndef kcg_copy_struct__106062
#define kcg_copy_struct__106062(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106062)))
#endif /* kcg_copy_struct__106062 */

#ifndef kcg_copy_struct__106071
#define kcg_copy_struct__106071(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106071)))
#endif /* kcg_copy_struct__106071 */

#ifndef kcg_copy_struct__106082
#define kcg_copy_struct__106082(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106082)))
#endif /* kcg_copy_struct__106082 */

#ifndef kcg_copy_struct__106095
#define kcg_copy_struct__106095(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106095)))
#endif /* kcg_copy_struct__106095 */

#ifndef kcg_copy_struct__106107
#define kcg_copy_struct__106107(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106107)))
#endif /* kcg_copy_struct__106107 */

#ifndef kcg_copy_struct__106117
#define kcg_copy_struct__106117(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106117)))
#endif /* kcg_copy_struct__106117 */

#ifndef kcg_copy_struct__106137
#define kcg_copy_struct__106137(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106137)))
#endif /* kcg_copy_struct__106137 */

#ifndef kcg_copy_struct__106143
#define kcg_copy_struct__106143(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106143)))
#endif /* kcg_copy_struct__106143 */

#ifndef kcg_copy_struct__106152
#define kcg_copy_struct__106152(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106152)))
#endif /* kcg_copy_struct__106152 */

#ifndef kcg_copy_struct__106162
#define kcg_copy_struct__106162(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106162)))
#endif /* kcg_copy_struct__106162 */

#ifndef kcg_copy_struct__106177
#define kcg_copy_struct__106177(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106177)))
#endif /* kcg_copy_struct__106177 */

#ifndef kcg_copy_struct__106187
#define kcg_copy_struct__106187(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106187)))
#endif /* kcg_copy_struct__106187 */

#ifndef kcg_copy_struct__106218
#define kcg_copy_struct__106218(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106218)))
#endif /* kcg_copy_struct__106218 */

#ifndef kcg_copy_struct__106223
#define kcg_copy_struct__106223(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106223)))
#endif /* kcg_copy_struct__106223 */

#ifndef kcg_copy_struct__106232
#define kcg_copy_struct__106232(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106232)))
#endif /* kcg_copy_struct__106232 */

#ifndef kcg_copy_struct__106242
#define kcg_copy_struct__106242(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106242)))
#endif /* kcg_copy_struct__106242 */

#ifndef kcg_copy_struct__106253
#define kcg_copy_struct__106253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106253)))
#endif /* kcg_copy_struct__106253 */

#ifndef kcg_copy_struct__106261
#define kcg_copy_struct__106261(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106261)))
#endif /* kcg_copy_struct__106261 */

#ifndef kcg_copy_struct__106300
#define kcg_copy_struct__106300(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106300)))
#endif /* kcg_copy_struct__106300 */

#ifndef kcg_copy_struct__106314
#define kcg_copy_struct__106314(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106314)))
#endif /* kcg_copy_struct__106314 */

#ifndef kcg_copy_struct__106329
#define kcg_copy_struct__106329(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106329)))
#endif /* kcg_copy_struct__106329 */

#ifndef kcg_copy_struct__106335
#define kcg_copy_struct__106335(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106335)))
#endif /* kcg_copy_struct__106335 */

#ifndef kcg_copy_struct__106344
#define kcg_copy_struct__106344(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106344)))
#endif /* kcg_copy_struct__106344 */

#ifndef kcg_copy_struct__106353
#define kcg_copy_struct__106353(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106353)))
#endif /* kcg_copy_struct__106353 */

#ifndef kcg_copy_struct__106361
#define kcg_copy_struct__106361(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106361)))
#endif /* kcg_copy_struct__106361 */

#ifndef kcg_copy_struct__106369
#define kcg_copy_struct__106369(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106369)))
#endif /* kcg_copy_struct__106369 */

#ifndef kcg_copy_struct__106381
#define kcg_copy_struct__106381(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106381)))
#endif /* kcg_copy_struct__106381 */

#ifndef kcg_copy_struct__106394
#define kcg_copy_struct__106394(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106394)))
#endif /* kcg_copy_struct__106394 */

#ifndef kcg_copy_struct__106406
#define kcg_copy_struct__106406(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106406)))
#endif /* kcg_copy_struct__106406 */

#ifndef kcg_copy_struct__106411
#define kcg_copy_struct__106411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106411)))
#endif /* kcg_copy_struct__106411 */

#ifndef kcg_copy_struct__106417
#define kcg_copy_struct__106417(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106417)))
#endif /* kcg_copy_struct__106417 */

#ifndef kcg_copy_struct__106435
#define kcg_copy_struct__106435(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106435)))
#endif /* kcg_copy_struct__106435 */

#ifndef kcg_copy_struct__106440
#define kcg_copy_struct__106440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106440)))
#endif /* kcg_copy_struct__106440 */

#ifndef kcg_copy_struct__106448
#define kcg_copy_struct__106448(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106448)))
#endif /* kcg_copy_struct__106448 */

#ifndef kcg_copy_struct__106456
#define kcg_copy_struct__106456(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106456)))
#endif /* kcg_copy_struct__106456 */

#ifndef kcg_copy_struct__106463
#define kcg_copy_struct__106463(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106463)))
#endif /* kcg_copy_struct__106463 */

#ifndef kcg_copy_struct__106483
#define kcg_copy_struct__106483(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106483)))
#endif /* kcg_copy_struct__106483 */

#ifndef kcg_copy_struct__106504
#define kcg_copy_struct__106504(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106504)))
#endif /* kcg_copy_struct__106504 */

#ifndef kcg_copy_struct__106519
#define kcg_copy_struct__106519(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106519)))
#endif /* kcg_copy_struct__106519 */

#ifndef kcg_copy_struct__106530
#define kcg_copy_struct__106530(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106530)))
#endif /* kcg_copy_struct__106530 */

#ifndef kcg_copy_struct__106558
#define kcg_copy_struct__106558(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106558)))
#endif /* kcg_copy_struct__106558 */

#ifndef kcg_copy_struct__106569
#define kcg_copy_struct__106569(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106569)))
#endif /* kcg_copy_struct__106569 */

#ifndef kcg_copy_struct__106579
#define kcg_copy_struct__106579(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106579)))
#endif /* kcg_copy_struct__106579 */

#ifndef kcg_copy_struct__106590
#define kcg_copy_struct__106590(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106590)))
#endif /* kcg_copy_struct__106590 */

#ifndef kcg_copy_struct__106600
#define kcg_copy_struct__106600(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106600)))
#endif /* kcg_copy_struct__106600 */

#ifndef kcg_copy_struct__106606
#define kcg_copy_struct__106606(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106606)))
#endif /* kcg_copy_struct__106606 */

#ifndef kcg_copy_struct__106614
#define kcg_copy_struct__106614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106614)))
#endif /* kcg_copy_struct__106614 */

#ifndef kcg_copy_struct__106619
#define kcg_copy_struct__106619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106619)))
#endif /* kcg_copy_struct__106619 */

#ifndef kcg_copy_struct__106626
#define kcg_copy_struct__106626(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106626)))
#endif /* kcg_copy_struct__106626 */

#ifndef kcg_copy_struct__106640
#define kcg_copy_struct__106640(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106640)))
#endif /* kcg_copy_struct__106640 */

#ifndef kcg_copy_struct__106645
#define kcg_copy_struct__106645(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106645)))
#endif /* kcg_copy_struct__106645 */

#ifndef kcg_copy_struct__106676
#define kcg_copy_struct__106676(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106676)))
#endif /* kcg_copy_struct__106676 */

#ifndef kcg_copy_struct__106691
#define kcg_copy_struct__106691(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106691)))
#endif /* kcg_copy_struct__106691 */

#ifndef kcg_copy_struct__106702
#define kcg_copy_struct__106702(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106702)))
#endif /* kcg_copy_struct__106702 */

#ifndef kcg_copy_struct__106714
#define kcg_copy_struct__106714(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106714)))
#endif /* kcg_copy_struct__106714 */

#ifndef kcg_copy_struct__106722
#define kcg_copy_struct__106722(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106722)))
#endif /* kcg_copy_struct__106722 */

#ifndef kcg_copy_struct__106752
#define kcg_copy_struct__106752(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106752)))
#endif /* kcg_copy_struct__106752 */

#ifndef kcg_copy_struct__106760
#define kcg_copy_struct__106760(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106760)))
#endif /* kcg_copy_struct__106760 */

#ifndef kcg_copy_struct__106766
#define kcg_copy_struct__106766(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106766)))
#endif /* kcg_copy_struct__106766 */

#ifndef kcg_copy_struct__106775
#define kcg_copy_struct__106775(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106775)))
#endif /* kcg_copy_struct__106775 */

#ifndef kcg_copy_struct__106787
#define kcg_copy_struct__106787(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106787)))
#endif /* kcg_copy_struct__106787 */

#ifndef kcg_copy_struct__106794
#define kcg_copy_struct__106794(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106794)))
#endif /* kcg_copy_struct__106794 */

#ifndef kcg_copy_struct__106805
#define kcg_copy_struct__106805(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106805)))
#endif /* kcg_copy_struct__106805 */

#ifndef kcg_copy_struct__106816
#define kcg_copy_struct__106816(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106816)))
#endif /* kcg_copy_struct__106816 */

#ifndef kcg_copy_struct__106827
#define kcg_copy_struct__106827(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106827)))
#endif /* kcg_copy_struct__106827 */

#ifndef kcg_copy_struct__106836
#define kcg_copy_struct__106836(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106836)))
#endif /* kcg_copy_struct__106836 */

#ifndef kcg_copy_struct__106849
#define kcg_copy_struct__106849(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106849)))
#endif /* kcg_copy_struct__106849 */

#ifndef kcg_copy_struct__106859
#define kcg_copy_struct__106859(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106859)))
#endif /* kcg_copy_struct__106859 */

#ifndef kcg_copy_struct__106868
#define kcg_copy_struct__106868(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106868)))
#endif /* kcg_copy_struct__106868 */

#ifndef kcg_copy_struct__106878
#define kcg_copy_struct__106878(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106878)))
#endif /* kcg_copy_struct__106878 */

#ifndef kcg_copy_struct__106887
#define kcg_copy_struct__106887(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106887)))
#endif /* kcg_copy_struct__106887 */

#ifndef kcg_copy_struct__106900
#define kcg_copy_struct__106900(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106900)))
#endif /* kcg_copy_struct__106900 */

#ifndef kcg_copy_struct__106929
#define kcg_copy_struct__106929(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106929)))
#endif /* kcg_copy_struct__106929 */

#ifndef kcg_copy_struct__106938
#define kcg_copy_struct__106938(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106938)))
#endif /* kcg_copy_struct__106938 */

#ifndef kcg_copy_struct__106955
#define kcg_copy_struct__106955(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106955)))
#endif /* kcg_copy_struct__106955 */

#ifndef kcg_copy_struct__106968
#define kcg_copy_struct__106968(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__106968)))
#endif /* kcg_copy_struct__106968 */

#ifndef kcg_copy_struct__107001
#define kcg_copy_struct__107001(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107001)))
#endif /* kcg_copy_struct__107001 */

#ifndef kcg_copy_struct__107012
#define kcg_copy_struct__107012(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107012)))
#endif /* kcg_copy_struct__107012 */

#ifndef kcg_copy_struct__107017
#define kcg_copy_struct__107017(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107017)))
#endif /* kcg_copy_struct__107017 */

#ifndef kcg_copy_struct__107072
#define kcg_copy_struct__107072(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107072)))
#endif /* kcg_copy_struct__107072 */

#ifndef kcg_copy_struct__107081
#define kcg_copy_struct__107081(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107081)))
#endif /* kcg_copy_struct__107081 */

#ifndef kcg_copy_struct__107090
#define kcg_copy_struct__107090(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107090)))
#endif /* kcg_copy_struct__107090 */

#ifndef kcg_copy_struct__107097
#define kcg_copy_struct__107097(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107097)))
#endif /* kcg_copy_struct__107097 */

#ifndef kcg_copy_struct__107106
#define kcg_copy_struct__107106(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107106)))
#endif /* kcg_copy_struct__107106 */

#ifndef kcg_copy_struct__107114
#define kcg_copy_struct__107114(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107114)))
#endif /* kcg_copy_struct__107114 */

#ifndef kcg_copy_struct__107124
#define kcg_copy_struct__107124(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107124)))
#endif /* kcg_copy_struct__107124 */

#ifndef kcg_copy_struct__107136
#define kcg_copy_struct__107136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107136)))
#endif /* kcg_copy_struct__107136 */

#ifndef kcg_copy_struct__107142
#define kcg_copy_struct__107142(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107142)))
#endif /* kcg_copy_struct__107142 */

#ifndef kcg_copy_struct__107151
#define kcg_copy_struct__107151(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107151)))
#endif /* kcg_copy_struct__107151 */

#ifndef kcg_copy_struct__107178
#define kcg_copy_struct__107178(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107178)))
#endif /* kcg_copy_struct__107178 */

#ifndef kcg_copy_struct__107184
#define kcg_copy_struct__107184(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107184)))
#endif /* kcg_copy_struct__107184 */

#ifndef kcg_copy_struct__107197
#define kcg_copy_struct__107197(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107197)))
#endif /* kcg_copy_struct__107197 */

#ifndef kcg_copy_struct__107205
#define kcg_copy_struct__107205(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107205)))
#endif /* kcg_copy_struct__107205 */

#ifndef kcg_copy_struct__107212
#define kcg_copy_struct__107212(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107212)))
#endif /* kcg_copy_struct__107212 */

#ifndef kcg_copy_struct__107219
#define kcg_copy_struct__107219(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107219)))
#endif /* kcg_copy_struct__107219 */

#ifndef kcg_copy_struct__107224
#define kcg_copy_struct__107224(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107224)))
#endif /* kcg_copy_struct__107224 */

#ifndef kcg_copy_struct__107230
#define kcg_copy_struct__107230(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107230)))
#endif /* kcg_copy_struct__107230 */

#ifndef kcg_copy_struct__107235
#define kcg_copy_struct__107235(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107235)))
#endif /* kcg_copy_struct__107235 */

#ifndef kcg_copy_struct__107244
#define kcg_copy_struct__107244(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107244)))
#endif /* kcg_copy_struct__107244 */

#ifndef kcg_copy_struct__107248
#define kcg_copy_struct__107248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107248)))
#endif /* kcg_copy_struct__107248 */

#ifndef kcg_copy_struct__107253
#define kcg_copy_struct__107253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107253)))
#endif /* kcg_copy_struct__107253 */

#ifndef kcg_copy_struct__107261
#define kcg_copy_struct__107261(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107261)))
#endif /* kcg_copy_struct__107261 */

#ifndef kcg_copy_struct__107274
#define kcg_copy_struct__107274(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107274)))
#endif /* kcg_copy_struct__107274 */

#ifndef kcg_copy_struct__107283
#define kcg_copy_struct__107283(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107283)))
#endif /* kcg_copy_struct__107283 */

#ifndef kcg_copy_struct__107294
#define kcg_copy_struct__107294(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107294)))
#endif /* kcg_copy_struct__107294 */

#ifndef kcg_copy_struct__107306
#define kcg_copy_struct__107306(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107306)))
#endif /* kcg_copy_struct__107306 */

#ifndef kcg_copy_struct__107313
#define kcg_copy_struct__107313(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107313)))
#endif /* kcg_copy_struct__107313 */

#ifndef kcg_copy_struct__107324
#define kcg_copy_struct__107324(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107324)))
#endif /* kcg_copy_struct__107324 */

#ifndef kcg_copy_struct__107335
#define kcg_copy_struct__107335(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107335)))
#endif /* kcg_copy_struct__107335 */

#ifndef kcg_copy_struct__107360
#define kcg_copy_struct__107360(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107360)))
#endif /* kcg_copy_struct__107360 */

#ifndef kcg_copy_struct__107369
#define kcg_copy_struct__107369(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107369)))
#endif /* kcg_copy_struct__107369 */

#ifndef kcg_copy_struct__107379
#define kcg_copy_struct__107379(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107379)))
#endif /* kcg_copy_struct__107379 */

#ifndef kcg_copy_struct__107386
#define kcg_copy_struct__107386(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107386)))
#endif /* kcg_copy_struct__107386 */

#ifndef kcg_copy_struct__107394
#define kcg_copy_struct__107394(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107394)))
#endif /* kcg_copy_struct__107394 */

#ifndef kcg_copy_struct__107405
#define kcg_copy_struct__107405(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107405)))
#endif /* kcg_copy_struct__107405 */

#ifndef kcg_copy_struct__107411
#define kcg_copy_struct__107411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107411)))
#endif /* kcg_copy_struct__107411 */

#ifndef kcg_copy_struct__107417
#define kcg_copy_struct__107417(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107417)))
#endif /* kcg_copy_struct__107417 */

#ifndef kcg_copy_struct__107425
#define kcg_copy_struct__107425(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107425)))
#endif /* kcg_copy_struct__107425 */

#ifndef kcg_copy_struct__107431
#define kcg_copy_struct__107431(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107431)))
#endif /* kcg_copy_struct__107431 */

#ifndef kcg_copy_struct__107438
#define kcg_copy_struct__107438(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107438)))
#endif /* kcg_copy_struct__107438 */

#ifndef kcg_copy_struct__107448
#define kcg_copy_struct__107448(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107448)))
#endif /* kcg_copy_struct__107448 */

#ifndef kcg_copy_struct__107462
#define kcg_copy_struct__107462(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107462)))
#endif /* kcg_copy_struct__107462 */

#ifndef kcg_copy_struct__107468
#define kcg_copy_struct__107468(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107468)))
#endif /* kcg_copy_struct__107468 */

#ifndef kcg_copy_struct__107475
#define kcg_copy_struct__107475(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107475)))
#endif /* kcg_copy_struct__107475 */

#ifndef kcg_copy_struct__107482
#define kcg_copy_struct__107482(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107482)))
#endif /* kcg_copy_struct__107482 */

#ifndef kcg_copy_struct__107488
#define kcg_copy_struct__107488(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107488)))
#endif /* kcg_copy_struct__107488 */

#ifndef kcg_copy_struct__107497
#define kcg_copy_struct__107497(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107497)))
#endif /* kcg_copy_struct__107497 */

#ifndef kcg_copy_struct__107503
#define kcg_copy_struct__107503(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107503)))
#endif /* kcg_copy_struct__107503 */

#ifndef kcg_copy_struct__107508
#define kcg_copy_struct__107508(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107508)))
#endif /* kcg_copy_struct__107508 */

#ifndef kcg_copy_struct__107518
#define kcg_copy_struct__107518(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107518)))
#endif /* kcg_copy_struct__107518 */

#ifndef kcg_copy_struct__107528
#define kcg_copy_struct__107528(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107528)))
#endif /* kcg_copy_struct__107528 */

#ifndef kcg_copy_struct__107544
#define kcg_copy_struct__107544(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107544)))
#endif /* kcg_copy_struct__107544 */

#ifndef kcg_copy_struct__107565
#define kcg_copy_struct__107565(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107565)))
#endif /* kcg_copy_struct__107565 */

#ifndef kcg_copy_struct__107572
#define kcg_copy_struct__107572(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107572)))
#endif /* kcg_copy_struct__107572 */

#ifndef kcg_copy_struct__107605
#define kcg_copy_struct__107605(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107605)))
#endif /* kcg_copy_struct__107605 */

#ifndef kcg_copy_struct__107615
#define kcg_copy_struct__107615(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107615)))
#endif /* kcg_copy_struct__107615 */

#ifndef kcg_copy_struct__107623
#define kcg_copy_struct__107623(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107623)))
#endif /* kcg_copy_struct__107623 */

#ifndef kcg_copy_struct__107632
#define kcg_copy_struct__107632(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107632)))
#endif /* kcg_copy_struct__107632 */

#ifndef kcg_copy_struct__107639
#define kcg_copy_struct__107639(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107639)))
#endif /* kcg_copy_struct__107639 */

#ifndef kcg_copy_struct__107645
#define kcg_copy_struct__107645(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107645)))
#endif /* kcg_copy_struct__107645 */

#ifndef kcg_copy_struct__107657
#define kcg_copy_struct__107657(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107657)))
#endif /* kcg_copy_struct__107657 */

#ifndef kcg_copy_struct__107668
#define kcg_copy_struct__107668(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107668)))
#endif /* kcg_copy_struct__107668 */

#ifndef kcg_copy_struct__107686
#define kcg_copy_struct__107686(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107686)))
#endif /* kcg_copy_struct__107686 */

#ifndef kcg_copy_struct__107692
#define kcg_copy_struct__107692(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107692)))
#endif /* kcg_copy_struct__107692 */

#ifndef kcg_copy_struct__107697
#define kcg_copy_struct__107697(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107697)))
#endif /* kcg_copy_struct__107697 */

#ifndef kcg_copy_struct__107705
#define kcg_copy_struct__107705(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107705)))
#endif /* kcg_copy_struct__107705 */

#ifndef kcg_copy_struct__107716
#define kcg_copy_struct__107716(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107716)))
#endif /* kcg_copy_struct__107716 */

#ifndef kcg_copy_struct__107727
#define kcg_copy_struct__107727(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107727)))
#endif /* kcg_copy_struct__107727 */

#ifndef kcg_copy_struct__107732
#define kcg_copy_struct__107732(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107732)))
#endif /* kcg_copy_struct__107732 */

#ifndef kcg_copy_struct__107742
#define kcg_copy_struct__107742(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107742)))
#endif /* kcg_copy_struct__107742 */

#ifndef kcg_copy_struct__107748
#define kcg_copy_struct__107748(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107748)))
#endif /* kcg_copy_struct__107748 */

#ifndef kcg_copy_struct__107753
#define kcg_copy_struct__107753(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107753)))
#endif /* kcg_copy_struct__107753 */

#ifndef kcg_copy_struct__107761
#define kcg_copy_struct__107761(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107761)))
#endif /* kcg_copy_struct__107761 */

#ifndef kcg_copy_struct__107773
#define kcg_copy_struct__107773(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107773)))
#endif /* kcg_copy_struct__107773 */

#ifndef kcg_copy_struct__107778
#define kcg_copy_struct__107778(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107778)))
#endif /* kcg_copy_struct__107778 */

#ifndef kcg_copy_struct__107791
#define kcg_copy_struct__107791(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107791)))
#endif /* kcg_copy_struct__107791 */

#ifndef kcg_copy_struct__107800
#define kcg_copy_struct__107800(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107800)))
#endif /* kcg_copy_struct__107800 */

#ifndef kcg_copy_struct__107823
#define kcg_copy_struct__107823(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107823)))
#endif /* kcg_copy_struct__107823 */

#ifndef kcg_copy_struct__107841
#define kcg_copy_struct__107841(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107841)))
#endif /* kcg_copy_struct__107841 */

#ifndef kcg_copy_struct__107846
#define kcg_copy_struct__107846(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107846)))
#endif /* kcg_copy_struct__107846 */

#ifndef kcg_copy_struct__107854
#define kcg_copy_struct__107854(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107854)))
#endif /* kcg_copy_struct__107854 */

#ifndef kcg_copy_struct__107867
#define kcg_copy_struct__107867(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107867)))
#endif /* kcg_copy_struct__107867 */

#ifndef kcg_copy_struct__107887
#define kcg_copy_struct__107887(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107887)))
#endif /* kcg_copy_struct__107887 */

#ifndef kcg_copy_struct__107894
#define kcg_copy_struct__107894(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107894)))
#endif /* kcg_copy_struct__107894 */

#ifndef kcg_copy_struct__107903
#define kcg_copy_struct__107903(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107903)))
#endif /* kcg_copy_struct__107903 */

#ifndef kcg_copy_struct__107909
#define kcg_copy_struct__107909(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107909)))
#endif /* kcg_copy_struct__107909 */

#ifndef kcg_copy_struct__107915
#define kcg_copy_struct__107915(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107915)))
#endif /* kcg_copy_struct__107915 */

#ifndef kcg_copy_struct__107921
#define kcg_copy_struct__107921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107921)))
#endif /* kcg_copy_struct__107921 */

#ifndef kcg_copy_struct__107928
#define kcg_copy_struct__107928(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107928)))
#endif /* kcg_copy_struct__107928 */

#ifndef kcg_copy_struct__107936
#define kcg_copy_struct__107936(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107936)))
#endif /* kcg_copy_struct__107936 */

#ifndef kcg_copy_struct__107945
#define kcg_copy_struct__107945(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107945)))
#endif /* kcg_copy_struct__107945 */

#ifndef kcg_copy_struct__107957
#define kcg_copy_struct__107957(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107957)))
#endif /* kcg_copy_struct__107957 */

#ifndef kcg_copy_struct__107963
#define kcg_copy_struct__107963(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107963)))
#endif /* kcg_copy_struct__107963 */

#ifndef kcg_copy_struct__107969
#define kcg_copy_struct__107969(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107969)))
#endif /* kcg_copy_struct__107969 */

#ifndef kcg_copy_struct__107987
#define kcg_copy_struct__107987(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107987)))
#endif /* kcg_copy_struct__107987 */

#ifndef kcg_copy_struct__107993
#define kcg_copy_struct__107993(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107993)))
#endif /* kcg_copy_struct__107993 */

#ifndef kcg_copy_struct__107999
#define kcg_copy_struct__107999(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__107999)))
#endif /* kcg_copy_struct__107999 */

#ifndef kcg_copy_struct__108015
#define kcg_copy_struct__108015(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108015)))
#endif /* kcg_copy_struct__108015 */

#ifndef kcg_copy_struct__108023
#define kcg_copy_struct__108023(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108023)))
#endif /* kcg_copy_struct__108023 */

#ifndef kcg_copy_struct__108028
#define kcg_copy_struct__108028(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108028)))
#endif /* kcg_copy_struct__108028 */

#ifndef kcg_copy_struct__108036
#define kcg_copy_struct__108036(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108036)))
#endif /* kcg_copy_struct__108036 */

#ifndef kcg_copy_struct__108041
#define kcg_copy_struct__108041(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108041)))
#endif /* kcg_copy_struct__108041 */

#ifndef kcg_copy_struct__108055
#define kcg_copy_struct__108055(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108055)))
#endif /* kcg_copy_struct__108055 */

#ifndef kcg_copy_struct__108066
#define kcg_copy_struct__108066(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108066)))
#endif /* kcg_copy_struct__108066 */

#ifndef kcg_copy_struct__108099
#define kcg_copy_struct__108099(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108099)))
#endif /* kcg_copy_struct__108099 */

#ifndef kcg_copy_struct__108105
#define kcg_copy_struct__108105(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108105)))
#endif /* kcg_copy_struct__108105 */

#ifndef kcg_copy_struct__108131
#define kcg_copy_struct__108131(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108131)))
#endif /* kcg_copy_struct__108131 */

#ifndef kcg_copy_struct__108151
#define kcg_copy_struct__108151(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108151)))
#endif /* kcg_copy_struct__108151 */

#ifndef kcg_copy_struct__108158
#define kcg_copy_struct__108158(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108158)))
#endif /* kcg_copy_struct__108158 */

#ifndef kcg_copy_struct__108163
#define kcg_copy_struct__108163(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108163)))
#endif /* kcg_copy_struct__108163 */

#ifndef kcg_copy_struct__108168
#define kcg_copy_struct__108168(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108168)))
#endif /* kcg_copy_struct__108168 */

#ifndef kcg_copy_struct__108176
#define kcg_copy_struct__108176(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108176)))
#endif /* kcg_copy_struct__108176 */

#ifndef kcg_copy_struct__108183
#define kcg_copy_struct__108183(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108183)))
#endif /* kcg_copy_struct__108183 */

#ifndef kcg_copy_struct__108188
#define kcg_copy_struct__108188(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108188)))
#endif /* kcg_copy_struct__108188 */

#ifndef kcg_copy_struct__108197
#define kcg_copy_struct__108197(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108197)))
#endif /* kcg_copy_struct__108197 */

#ifndef kcg_copy_struct__108206
#define kcg_copy_struct__108206(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108206)))
#endif /* kcg_copy_struct__108206 */

#ifndef kcg_copy_struct__108215
#define kcg_copy_struct__108215(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108215)))
#endif /* kcg_copy_struct__108215 */

#ifndef kcg_copy_struct__108224
#define kcg_copy_struct__108224(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108224)))
#endif /* kcg_copy_struct__108224 */

#ifndef kcg_copy_struct__108231
#define kcg_copy_struct__108231(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108231)))
#endif /* kcg_copy_struct__108231 */

#ifndef kcg_copy_struct__108248
#define kcg_copy_struct__108248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108248)))
#endif /* kcg_copy_struct__108248 */

#ifndef kcg_copy_struct__108260
#define kcg_copy_struct__108260(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108260)))
#endif /* kcg_copy_struct__108260 */

#ifndef kcg_copy_struct__108271
#define kcg_copy_struct__108271(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108271)))
#endif /* kcg_copy_struct__108271 */

#ifndef kcg_copy_struct__108279
#define kcg_copy_struct__108279(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108279)))
#endif /* kcg_copy_struct__108279 */

#ifndef kcg_copy_struct__108299
#define kcg_copy_struct__108299(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__108299)))
#endif /* kcg_copy_struct__108299 */

#ifndef kcg_copy_array__105355
#define kcg_copy_array__105355(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__105355)))
#endif /* kcg_copy_array__105355 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__105500
#define kcg_copy_array__105500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__105500)))
#endif /* kcg_copy_array__105500 */

#ifndef kcg_copy_array_int_311
#define kcg_copy_array_int_311(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_311)))
#endif /* kcg_copy_array_int_311 */

#ifndef kcg_copy_array_int_999
#define kcg_copy_array_int_999(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_999)))
#endif /* kcg_copy_array_int_999 */

#ifndef kcg_copy_array__105570
#define kcg_copy_array__105570(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__105570)))
#endif /* kcg_copy_array__105570 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__105723
#define kcg_copy_array__105723(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__105723)))
#endif /* kcg_copy_array__105723 */

#ifndef kcg_copy_array__106001
#define kcg_copy_array__106001(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106001)))
#endif /* kcg_copy_array__106001 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array__106029
#define kcg_copy_array__106029(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106029)))
#endif /* kcg_copy_array__106029 */

#ifndef kcg_copy_array__106059
#define kcg_copy_array__106059(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106059)))
#endif /* kcg_copy_array__106059 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array__106149
#define kcg_copy_array__106149(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106149)))
#endif /* kcg_copy_array__106149 */

#ifndef kcg_copy_array__106159
#define kcg_copy_array__106159(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106159)))
#endif /* kcg_copy_array__106159 */

#ifndef kcg_copy_array__106174
#define kcg_copy_array__106174(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106174)))
#endif /* kcg_copy_array__106174 */

#ifndef kcg_copy_array__106184
#define kcg_copy_array__106184(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106184)))
#endif /* kcg_copy_array__106184 */

#ifndef kcg_copy_array__106229
#define kcg_copy_array__106229(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106229)))
#endif /* kcg_copy_array__106229 */

#ifndef kcg_copy_array__106239
#define kcg_copy_array__106239(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106239)))
#endif /* kcg_copy_array__106239 */

#ifndef kcg_copy_array__106250
#define kcg_copy_array__106250(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106250)))
#endif /* kcg_copy_array__106250 */

#ifndef kcg_copy_array__106258
#define kcg_copy_array__106258(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106258)))
#endif /* kcg_copy_array__106258 */

#ifndef kcg_copy_array__106311
#define kcg_copy_array__106311(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106311)))
#endif /* kcg_copy_array__106311 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__106350
#define kcg_copy_array__106350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106350)))
#endif /* kcg_copy_array__106350 */

#ifndef kcg_copy_array__106366
#define kcg_copy_array__106366(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106366)))
#endif /* kcg_copy_array__106366 */

#ifndef kcg_copy_array__106403
#define kcg_copy_array__106403(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106403)))
#endif /* kcg_copy_array__106403 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__106527
#define kcg_copy_array__106527(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106527)))
#endif /* kcg_copy_array__106527 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__106566
#define kcg_copy_array__106566(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106566)))
#endif /* kcg_copy_array__106566 */

#ifndef kcg_copy_array__106576
#define kcg_copy_array__106576(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106576)))
#endif /* kcg_copy_array__106576 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__106611
#define kcg_copy_array__106611(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106611)))
#endif /* kcg_copy_array__106611 */

#ifndef kcg_copy_array__106634
#define kcg_copy_array__106634(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106634)))
#endif /* kcg_copy_array__106634 */

#ifndef kcg_copy_array__106637
#define kcg_copy_array__106637(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106637)))
#endif /* kcg_copy_array__106637 */

#ifndef kcg_copy_array__106673
#define kcg_copy_array__106673(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106673)))
#endif /* kcg_copy_array__106673 */

#ifndef kcg_copy_array__106688
#define kcg_copy_array__106688(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106688)))
#endif /* kcg_copy_array__106688 */

#ifndef kcg_copy_array__106699
#define kcg_copy_array__106699(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106699)))
#endif /* kcg_copy_array__106699 */

#ifndef kcg_copy_array__106711
#define kcg_copy_array__106711(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106711)))
#endif /* kcg_copy_array__106711 */

#ifndef kcg_copy_array__106749
#define kcg_copy_array__106749(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106749)))
#endif /* kcg_copy_array__106749 */

#ifndef kcg_copy_array__106772
#define kcg_copy_array__106772(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106772)))
#endif /* kcg_copy_array__106772 */

#ifndef kcg_copy_array__106784
#define kcg_copy_array__106784(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106784)))
#endif /* kcg_copy_array__106784 */

#ifndef kcg_copy_array__106802
#define kcg_copy_array__106802(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106802)))
#endif /* kcg_copy_array__106802 */

#ifndef kcg_copy_array__106813
#define kcg_copy_array__106813(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106813)))
#endif /* kcg_copy_array__106813 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__106846
#define kcg_copy_array__106846(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106846)))
#endif /* kcg_copy_array__106846 */

#ifndef kcg_copy_array__106856
#define kcg_copy_array__106856(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106856)))
#endif /* kcg_copy_array__106856 */

#ifndef kcg_copy_array__106875
#define kcg_copy_array__106875(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106875)))
#endif /* kcg_copy_array__106875 */

#ifndef kcg_copy_array__106884
#define kcg_copy_array__106884(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106884)))
#endif /* kcg_copy_array__106884 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array__106962
#define kcg_copy_array__106962(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106962)))
#endif /* kcg_copy_array__106962 */

#ifndef kcg_copy_array__106965
#define kcg_copy_array__106965(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__106965)))
#endif /* kcg_copy_array__106965 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__107006
#define kcg_copy_array__107006(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107006)))
#endif /* kcg_copy_array__107006 */

#ifndef kcg_copy_array__107009
#define kcg_copy_array__107009(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107009)))
#endif /* kcg_copy_array__107009 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_4
#define kcg_copy_array_int_2_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_4)))
#endif /* kcg_copy_array_int_2_4 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array__107191
#define kcg_copy_array__107191(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107191)))
#endif /* kcg_copy_array__107191 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array__107241
#define kcg_copy_array__107241(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107241)))
#endif /* kcg_copy_array__107241 */

#ifndef kcg_copy_array__107258
#define kcg_copy_array__107258(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107258)))
#endif /* kcg_copy_array__107258 */

#ifndef kcg_copy_array__107280
#define kcg_copy_array__107280(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107280)))
#endif /* kcg_copy_array__107280 */

#ifndef kcg_copy_array__107342
#define kcg_copy_array__107342(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107342)))
#endif /* kcg_copy_array__107342 */

#ifndef kcg_copy_array__107345
#define kcg_copy_array__107345(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107345)))
#endif /* kcg_copy_array__107345 */

#ifndef kcg_copy_array__107348
#define kcg_copy_array__107348(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107348)))
#endif /* kcg_copy_array__107348 */

#ifndef kcg_copy_array__107351
#define kcg_copy_array__107351(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107351)))
#endif /* kcg_copy_array__107351 */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_bool_256_46
#define kcg_copy_array_bool_256_46(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46)))
#endif /* kcg_copy_array_bool_256_46 */

#ifndef kcg_copy_array__107376
#define kcg_copy_array__107376(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107376)))
#endif /* kcg_copy_array__107376 */

#ifndef kcg_copy_array__107459
#define kcg_copy_array__107459(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107459)))
#endif /* kcg_copy_array__107459 */

#ifndef kcg_copy_array_char_9
#define kcg_copy_array_char_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_9)))
#endif /* kcg_copy_array_char_9 */

#ifndef kcg_copy_array_char_255
#define kcg_copy_array_char_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_255)))
#endif /* kcg_copy_array_char_255 */

#ifndef kcg_copy_array_int_255
#define kcg_copy_array_int_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_255)))
#endif /* kcg_copy_array_int_255 */

#ifndef kcg_copy_array_int_261
#define kcg_copy_array_int_261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_261)))
#endif /* kcg_copy_array_int_261 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array_bool_114
#define kcg_copy_array_bool_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_114)))
#endif /* kcg_copy_array_bool_114 */

#ifndef kcg_copy_array_real_114
#define kcg_copy_array_real_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_114)))
#endif /* kcg_copy_array_real_114 */

#ifndef kcg_copy_array__107612
#define kcg_copy_array__107612(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107612)))
#endif /* kcg_copy_array__107612 */

#ifndef kcg_copy_array__107629
#define kcg_copy_array__107629(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107629)))
#endif /* kcg_copy_array__107629 */

#ifndef kcg_copy_array__107651
#define kcg_copy_array__107651(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107651)))
#endif /* kcg_copy_array__107651 */

#ifndef kcg_copy_array__107654
#define kcg_copy_array__107654(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107654)))
#endif /* kcg_copy_array__107654 */

#ifndef kcg_copy_array__107665
#define kcg_copy_array__107665(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107665)))
#endif /* kcg_copy_array__107665 */

#ifndef kcg_copy_array_real_100
#define kcg_copy_array_real_100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100)))
#endif /* kcg_copy_array_real_100 */

#ifndef kcg_copy_array_real_100_14
#define kcg_copy_array_real_100_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_14)))
#endif /* kcg_copy_array_real_100_14 */

#ifndef kcg_copy_array_real_14
#define kcg_copy_array_real_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_14)))
#endif /* kcg_copy_array_real_14 */

#ifndef kcg_copy_array_int_13
#define kcg_copy_array_int_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_13)))
#endif /* kcg_copy_array_int_13 */

#ifndef kcg_copy_array_int_221
#define kcg_copy_array_int_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_221)))
#endif /* kcg_copy_array_int_221 */

#ifndef kcg_copy_array_int_6_221
#define kcg_copy_array_int_6_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_221)))
#endif /* kcg_copy_array_int_6_221 */

#ifndef kcg_copy_array_real_3
#define kcg_copy_array_real_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_3)))
#endif /* kcg_copy_array_real_3 */

#ifndef kcg_copy_array_real_2
#define kcg_copy_array_real_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_2)))
#endif /* kcg_copy_array_real_2 */

#ifndef kcg_copy_array__107797
#define kcg_copy_array__107797(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__107797)))
#endif /* kcg_copy_array__107797 */

#ifndef kcg_copy_array_bool_14
#define kcg_copy_array_bool_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_14)))
#endif /* kcg_copy_array_bool_14 */

#ifndef kcg_copy_array_int_65
#define kcg_copy_array_int_65(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_65)))
#endif /* kcg_copy_array_int_65 */

#ifndef kcg_copy_array_int_67
#define kcg_copy_array_int_67(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_67)))
#endif /* kcg_copy_array_int_67 */

#ifndef kcg_copy_array_int_129
#define kcg_copy_array_int_129(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_129)))
#endif /* kcg_copy_array_int_129 */

#ifndef kcg_copy_array__108012
#define kcg_copy_array__108012(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108012)))
#endif /* kcg_copy_array__108012 */

#ifndef kcg_copy_array__108020
#define kcg_copy_array__108020(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108020)))
#endif /* kcg_copy_array__108020 */

#ifndef kcg_copy_array__108033
#define kcg_copy_array__108033(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108033)))
#endif /* kcg_copy_array__108033 */

#ifndef kcg_copy_array_int_325
#define kcg_copy_array_int_325(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_325)))
#endif /* kcg_copy_array_int_325 */

#ifndef kcg_copy_array_int_262
#define kcg_copy_array_int_262(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_262)))
#endif /* kcg_copy_array_int_262 */

#ifndef kcg_copy_array__108221
#define kcg_copy_array__108221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108221)))
#endif /* kcg_copy_array__108221 */

#ifndef kcg_copy_array__108268
#define kcg_copy_array__108268(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108268)))
#endif /* kcg_copy_array__108268 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array__108310
#define kcg_copy_array__108310(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108310)))
#endif /* kcg_copy_array__108310 */

#ifndef kcg_copy_array_real_100_1
#define kcg_copy_array_real_100_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_1)))
#endif /* kcg_copy_array_real_100_1 */

#ifndef kcg_copy_array_real_100_13
#define kcg_copy_array_real_100_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_13)))
#endif /* kcg_copy_array_real_100_13 */

#ifndef kcg_copy_array_real_13
#define kcg_copy_array_real_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_13)))
#endif /* kcg_copy_array_real_13 */

#ifndef kcg_copy_array_real_8
#define kcg_copy_array_real_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_8)))
#endif /* kcg_copy_array_real_8 */

#ifndef kcg_copy_array_real_100_8
#define kcg_copy_array_real_100_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_8)))
#endif /* kcg_copy_array_real_100_8 */

#ifndef kcg_copy_array_real_100_6
#define kcg_copy_array_real_100_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_6)))
#endif /* kcg_copy_array_real_100_6 */

#ifndef kcg_copy_array_real_6
#define kcg_copy_array_real_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_6)))
#endif /* kcg_copy_array_real_6 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array__108337
#define kcg_copy_array__108337(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108337)))
#endif /* kcg_copy_array__108337 */

#ifndef kcg_copy_array__108340
#define kcg_copy_array__108340(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108340)))
#endif /* kcg_copy_array__108340 */

#ifndef kcg_copy_array__108343
#define kcg_copy_array__108343(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108343)))
#endif /* kcg_copy_array__108343 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array__108352
#define kcg_copy_array__108352(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108352)))
#endif /* kcg_copy_array__108352 */

#ifndef kcg_copy_array__108355
#define kcg_copy_array__108355(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108355)))
#endif /* kcg_copy_array__108355 */

#ifndef kcg_copy_array_int_42
#define kcg_copy_array_int_42(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_42)))
#endif /* kcg_copy_array_int_42 */

#ifndef kcg_copy_array__108361
#define kcg_copy_array__108361(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__108361)))
#endif /* kcg_copy_array__108361 */

#ifndef kcg_copy_array_real_113
#define kcg_copy_array_real_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_113)))
#endif /* kcg_copy_array_real_113 */

#ifndef kcg_copy_array_bool_113
#define kcg_copy_array_bool_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_113)))
#endif /* kcg_copy_array_bool_113 */

#ifndef kcg_copy_array__112372
#define kcg_copy_array__112372(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__112372)))
#endif /* kcg_copy_array__112372 */

#ifndef kcg_copy_array__112812
#define kcg_copy_array__112812(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__112812)))
#endif /* kcg_copy_array__112812 */

#ifndef kcg_copy_array__113049
#define kcg_copy_array__113049(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113049)))
#endif /* kcg_copy_array__113049 */

#ifndef kcg_copy_array__113146
#define kcg_copy_array__113146(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113146)))
#endif /* kcg_copy_array__113146 */

#ifndef kcg_copy_array__113299
#define kcg_copy_array__113299(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113299)))
#endif /* kcg_copy_array__113299 */

#ifndef kcg_copy_array__113303
#define kcg_copy_array__113303(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113303)))
#endif /* kcg_copy_array__113303 */

#ifndef kcg_copy_array__113307
#define kcg_copy_array__113307(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113307)))
#endif /* kcg_copy_array__113307 */

#ifndef kcg_copy_array__113310
#define kcg_copy_array__113310(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113310)))
#endif /* kcg_copy_array__113310 */

#ifndef kcg_copy_array__113314
#define kcg_copy_array__113314(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113314)))
#endif /* kcg_copy_array__113314 */

#ifndef kcg_copy_array__113317
#define kcg_copy_array__113317(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113317)))
#endif /* kcg_copy_array__113317 */

#ifndef kcg_copy_array__113321
#define kcg_copy_array__113321(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__113321)))
#endif /* kcg_copy_array__113321 */

#ifndef kcg_comp_struct__105343
extern kcg_bool kcg_comp_struct__105343(
  struct__105343 *kcg_c1,
  struct__105343 *kcg_c2);
#endif /* kcg_comp_struct__105343 */

#ifndef kcg_comp_struct__105350
extern kcg_bool kcg_comp_struct__105350(
  struct__105350 *kcg_c1,
  struct__105350 *kcg_c2);
#endif /* kcg_comp_struct__105350 */

#ifndef kcg_comp_struct__105358
extern kcg_bool kcg_comp_struct__105358(
  struct__105358 *kcg_c1,
  struct__105358 *kcg_c2);
#endif /* kcg_comp_struct__105358 */

#ifndef kcg_comp_struct__105363
extern kcg_bool kcg_comp_struct__105363(
  struct__105363 *kcg_c1,
  struct__105363 *kcg_c2);
#endif /* kcg_comp_struct__105363 */

#ifndef kcg_comp_struct__105373
extern kcg_bool kcg_comp_struct__105373(
  struct__105373 *kcg_c1,
  struct__105373 *kcg_c2);
#endif /* kcg_comp_struct__105373 */

#ifndef kcg_comp_struct__105384
extern kcg_bool kcg_comp_struct__105384(
  struct__105384 *kcg_c1,
  struct__105384 *kcg_c2);
#endif /* kcg_comp_struct__105384 */

#ifndef kcg_comp_struct__105389
extern kcg_bool kcg_comp_struct__105389(
  struct__105389 *kcg_c1,
  struct__105389 *kcg_c2);
#endif /* kcg_comp_struct__105389 */

#ifndef kcg_comp_struct__105407
extern kcg_bool kcg_comp_struct__105407(
  struct__105407 *kcg_c1,
  struct__105407 *kcg_c2);
#endif /* kcg_comp_struct__105407 */

#ifndef kcg_comp_struct__105419
extern kcg_bool kcg_comp_struct__105419(
  struct__105419 *kcg_c1,
  struct__105419 *kcg_c2);
#endif /* kcg_comp_struct__105419 */

#ifndef kcg_comp_struct__105426
extern kcg_bool kcg_comp_struct__105426(
  struct__105426 *kcg_c1,
  struct__105426 *kcg_c2);
#endif /* kcg_comp_struct__105426 */

#ifndef kcg_comp_struct__105434
extern kcg_bool kcg_comp_struct__105434(
  struct__105434 *kcg_c1,
  struct__105434 *kcg_c2);
#endif /* kcg_comp_struct__105434 */

#ifndef kcg_comp_struct__105447
extern kcg_bool kcg_comp_struct__105447(
  struct__105447 *kcg_c1,
  struct__105447 *kcg_c2);
#endif /* kcg_comp_struct__105447 */

#ifndef kcg_comp_struct__105454
extern kcg_bool kcg_comp_struct__105454(
  struct__105454 *kcg_c1,
  struct__105454 *kcg_c2);
#endif /* kcg_comp_struct__105454 */

#ifndef kcg_comp_struct__105460
extern kcg_bool kcg_comp_struct__105460(
  struct__105460 *kcg_c1,
  struct__105460 *kcg_c2);
#endif /* kcg_comp_struct__105460 */

#ifndef kcg_comp_struct__105470
extern kcg_bool kcg_comp_struct__105470(
  struct__105470 *kcg_c1,
  struct__105470 *kcg_c2);
#endif /* kcg_comp_struct__105470 */

#ifndef kcg_comp_struct__105476
extern kcg_bool kcg_comp_struct__105476(
  struct__105476 *kcg_c1,
  struct__105476 *kcg_c2);
#endif /* kcg_comp_struct__105476 */

#ifndef kcg_comp_struct__105481
extern kcg_bool kcg_comp_struct__105481(
  struct__105481 *kcg_c1,
  struct__105481 *kcg_c2);
#endif /* kcg_comp_struct__105481 */

#ifndef kcg_comp_struct__105492
extern kcg_bool kcg_comp_struct__105492(
  struct__105492 *kcg_c1,
  struct__105492 *kcg_c2);
#endif /* kcg_comp_struct__105492 */

#ifndef kcg_comp_struct__105503
extern kcg_bool kcg_comp_struct__105503(
  struct__105503 *kcg_c1,
  struct__105503 *kcg_c2);
#endif /* kcg_comp_struct__105503 */

#ifndef kcg_comp_struct__105508
extern kcg_bool kcg_comp_struct__105508(
  struct__105508 *kcg_c1,
  struct__105508 *kcg_c2);
#endif /* kcg_comp_struct__105508 */

#ifndef kcg_comp_struct__105523
extern kcg_bool kcg_comp_struct__105523(
  struct__105523 *kcg_c1,
  struct__105523 *kcg_c2);
#endif /* kcg_comp_struct__105523 */

#ifndef kcg_comp_struct__105528
extern kcg_bool kcg_comp_struct__105528(
  struct__105528 *kcg_c1,
  struct__105528 *kcg_c2);
#endif /* kcg_comp_struct__105528 */

#ifndef kcg_comp_struct__105534
extern kcg_bool kcg_comp_struct__105534(
  struct__105534 *kcg_c1,
  struct__105534 *kcg_c2);
#endif /* kcg_comp_struct__105534 */

#ifndef kcg_comp_struct__105540
extern kcg_bool kcg_comp_struct__105540(
  struct__105540 *kcg_c1,
  struct__105540 *kcg_c2);
#endif /* kcg_comp_struct__105540 */

#ifndef kcg_comp_struct__105545
extern kcg_bool kcg_comp_struct__105545(
  struct__105545 *kcg_c1,
  struct__105545 *kcg_c2);
#endif /* kcg_comp_struct__105545 */

#ifndef kcg_comp_struct__105554
extern kcg_bool kcg_comp_struct__105554(
  struct__105554 *kcg_c1,
  struct__105554 *kcg_c2);
#endif /* kcg_comp_struct__105554 */

#ifndef kcg_comp_struct__105565
extern kcg_bool kcg_comp_struct__105565(
  struct__105565 *kcg_c1,
  struct__105565 *kcg_c2);
#endif /* kcg_comp_struct__105565 */

#ifndef kcg_comp_struct__105576
extern kcg_bool kcg_comp_struct__105576(
  struct__105576 *kcg_c1,
  struct__105576 *kcg_c2);
#endif /* kcg_comp_struct__105576 */

#ifndef kcg_comp_struct__105594
extern kcg_bool kcg_comp_struct__105594(
  struct__105594 *kcg_c1,
  struct__105594 *kcg_c2);
#endif /* kcg_comp_struct__105594 */

#ifndef kcg_comp_struct__105603
extern kcg_bool kcg_comp_struct__105603(
  struct__105603 *kcg_c1,
  struct__105603 *kcg_c2);
#endif /* kcg_comp_struct__105603 */

#ifndef kcg_comp_struct__105608
extern kcg_bool kcg_comp_struct__105608(
  struct__105608 *kcg_c1,
  struct__105608 *kcg_c2);
#endif /* kcg_comp_struct__105608 */

#ifndef kcg_comp_struct__105614
extern kcg_bool kcg_comp_struct__105614(
  struct__105614 *kcg_c1,
  struct__105614 *kcg_c2);
#endif /* kcg_comp_struct__105614 */

#ifndef kcg_comp_struct__105619
extern kcg_bool kcg_comp_struct__105619(
  struct__105619 *kcg_c1,
  struct__105619 *kcg_c2);
#endif /* kcg_comp_struct__105619 */

#ifndef kcg_comp_struct__105625
extern kcg_bool kcg_comp_struct__105625(
  struct__105625 *kcg_c1,
  struct__105625 *kcg_c2);
#endif /* kcg_comp_struct__105625 */

#ifndef kcg_comp_struct__105630
extern kcg_bool kcg_comp_struct__105630(
  struct__105630 *kcg_c1,
  struct__105630 *kcg_c2);
#endif /* kcg_comp_struct__105630 */

#ifndef kcg_comp_struct__105635
extern kcg_bool kcg_comp_struct__105635(
  struct__105635 *kcg_c1,
  struct__105635 *kcg_c2);
#endif /* kcg_comp_struct__105635 */

#ifndef kcg_comp_struct__105641
extern kcg_bool kcg_comp_struct__105641(
  struct__105641 *kcg_c1,
  struct__105641 *kcg_c2);
#endif /* kcg_comp_struct__105641 */

#ifndef kcg_comp_struct__105649
extern kcg_bool kcg_comp_struct__105649(
  struct__105649 *kcg_c1,
  struct__105649 *kcg_c2);
#endif /* kcg_comp_struct__105649 */

#ifndef kcg_comp_struct__105656
extern kcg_bool kcg_comp_struct__105656(
  struct__105656 *kcg_c1,
  struct__105656 *kcg_c2);
#endif /* kcg_comp_struct__105656 */

#ifndef kcg_comp_struct__105662
extern kcg_bool kcg_comp_struct__105662(
  struct__105662 *kcg_c1,
  struct__105662 *kcg_c2);
#endif /* kcg_comp_struct__105662 */

#ifndef kcg_comp_struct__105667
extern kcg_bool kcg_comp_struct__105667(
  struct__105667 *kcg_c1,
  struct__105667 *kcg_c2);
#endif /* kcg_comp_struct__105667 */

#ifndef kcg_comp_struct__105677
extern kcg_bool kcg_comp_struct__105677(
  struct__105677 *kcg_c1,
  struct__105677 *kcg_c2);
#endif /* kcg_comp_struct__105677 */

#ifndef kcg_comp_struct__105682
extern kcg_bool kcg_comp_struct__105682(
  struct__105682 *kcg_c1,
  struct__105682 *kcg_c2);
#endif /* kcg_comp_struct__105682 */

#ifndef kcg_comp_struct__105694
extern kcg_bool kcg_comp_struct__105694(
  struct__105694 *kcg_c1,
  struct__105694 *kcg_c2);
#endif /* kcg_comp_struct__105694 */

#ifndef kcg_comp_struct__105710
extern kcg_bool kcg_comp_struct__105710(
  struct__105710 *kcg_c1,
  struct__105710 *kcg_c2);
#endif /* kcg_comp_struct__105710 */

#ifndef kcg_comp_struct__105718
extern kcg_bool kcg_comp_struct__105718(
  struct__105718 *kcg_c1,
  struct__105718 *kcg_c2);
#endif /* kcg_comp_struct__105718 */

#ifndef kcg_comp_struct__105726
extern kcg_bool kcg_comp_struct__105726(
  struct__105726 *kcg_c1,
  struct__105726 *kcg_c2);
#endif /* kcg_comp_struct__105726 */

#ifndef kcg_comp_struct__105732
extern kcg_bool kcg_comp_struct__105732(
  struct__105732 *kcg_c1,
  struct__105732 *kcg_c2);
#endif /* kcg_comp_struct__105732 */

#ifndef kcg_comp_struct__105752
extern kcg_bool kcg_comp_struct__105752(
  struct__105752 *kcg_c1,
  struct__105752 *kcg_c2);
#endif /* kcg_comp_struct__105752 */

#ifndef kcg_comp_struct__105757
extern kcg_bool kcg_comp_struct__105757(
  struct__105757 *kcg_c1,
  struct__105757 *kcg_c2);
#endif /* kcg_comp_struct__105757 */

#ifndef kcg_comp_struct__105776
extern kcg_bool kcg_comp_struct__105776(
  struct__105776 *kcg_c1,
  struct__105776 *kcg_c2);
#endif /* kcg_comp_struct__105776 */

#ifndef kcg_comp_struct__105781
extern kcg_bool kcg_comp_struct__105781(
  struct__105781 *kcg_c1,
  struct__105781 *kcg_c2);
#endif /* kcg_comp_struct__105781 */

#ifndef kcg_comp_struct__105786
extern kcg_bool kcg_comp_struct__105786(
  struct__105786 *kcg_c1,
  struct__105786 *kcg_c2);
#endif /* kcg_comp_struct__105786 */

#ifndef kcg_comp_struct__105791
extern kcg_bool kcg_comp_struct__105791(
  struct__105791 *kcg_c1,
  struct__105791 *kcg_c2);
#endif /* kcg_comp_struct__105791 */

#ifndef kcg_comp_struct__105801
extern kcg_bool kcg_comp_struct__105801(
  struct__105801 *kcg_c1,
  struct__105801 *kcg_c2);
#endif /* kcg_comp_struct__105801 */

#ifndef kcg_comp_struct__105807
extern kcg_bool kcg_comp_struct__105807(
  struct__105807 *kcg_c1,
  struct__105807 *kcg_c2);
#endif /* kcg_comp_struct__105807 */

#ifndef kcg_comp_struct__105814
extern kcg_bool kcg_comp_struct__105814(
  struct__105814 *kcg_c1,
  struct__105814 *kcg_c2);
#endif /* kcg_comp_struct__105814 */

#ifndef kcg_comp_struct__105832
extern kcg_bool kcg_comp_struct__105832(
  struct__105832 *kcg_c1,
  struct__105832 *kcg_c2);
#endif /* kcg_comp_struct__105832 */

#ifndef kcg_comp_struct__105842
extern kcg_bool kcg_comp_struct__105842(
  struct__105842 *kcg_c1,
  struct__105842 *kcg_c2);
#endif /* kcg_comp_struct__105842 */

#ifndef kcg_comp_struct__105854
extern kcg_bool kcg_comp_struct__105854(
  struct__105854 *kcg_c1,
  struct__105854 *kcg_c2);
#endif /* kcg_comp_struct__105854 */

#ifndef kcg_comp_struct__105864
extern kcg_bool kcg_comp_struct__105864(
  struct__105864 *kcg_c1,
  struct__105864 *kcg_c2);
#endif /* kcg_comp_struct__105864 */

#ifndef kcg_comp_struct__105871
extern kcg_bool kcg_comp_struct__105871(
  struct__105871 *kcg_c1,
  struct__105871 *kcg_c2);
#endif /* kcg_comp_struct__105871 */

#ifndef kcg_comp_struct__105877
extern kcg_bool kcg_comp_struct__105877(
  struct__105877 *kcg_c1,
  struct__105877 *kcg_c2);
#endif /* kcg_comp_struct__105877 */

#ifndef kcg_comp_struct__105885
extern kcg_bool kcg_comp_struct__105885(
  struct__105885 *kcg_c1,
  struct__105885 *kcg_c2);
#endif /* kcg_comp_struct__105885 */

#ifndef kcg_comp_struct__105890
extern kcg_bool kcg_comp_struct__105890(
  struct__105890 *kcg_c1,
  struct__105890 *kcg_c2);
#endif /* kcg_comp_struct__105890 */

#ifndef kcg_comp_struct__105914
extern kcg_bool kcg_comp_struct__105914(
  struct__105914 *kcg_c1,
  struct__105914 *kcg_c2);
#endif /* kcg_comp_struct__105914 */

#ifndef kcg_comp_struct__105921
extern kcg_bool kcg_comp_struct__105921(
  struct__105921 *kcg_c1,
  struct__105921 *kcg_c2);
#endif /* kcg_comp_struct__105921 */

#ifndef kcg_comp_struct__105931
extern kcg_bool kcg_comp_struct__105931(
  struct__105931 *kcg_c1,
  struct__105931 *kcg_c2);
#endif /* kcg_comp_struct__105931 */

#ifndef kcg_comp_struct__105939
extern kcg_bool kcg_comp_struct__105939(
  struct__105939 *kcg_c1,
  struct__105939 *kcg_c2);
#endif /* kcg_comp_struct__105939 */

#ifndef kcg_comp_struct__105952
extern kcg_bool kcg_comp_struct__105952(
  struct__105952 *kcg_c1,
  struct__105952 *kcg_c2);
#endif /* kcg_comp_struct__105952 */

#ifndef kcg_comp_struct__105958
extern kcg_bool kcg_comp_struct__105958(
  struct__105958 *kcg_c1,
  struct__105958 *kcg_c2);
#endif /* kcg_comp_struct__105958 */

#ifndef kcg_comp_struct__105965
extern kcg_bool kcg_comp_struct__105965(
  struct__105965 *kcg_c1,
  struct__105965 *kcg_c2);
#endif /* kcg_comp_struct__105965 */

#ifndef kcg_comp_struct__105973
extern kcg_bool kcg_comp_struct__105973(
  struct__105973 *kcg_c1,
  struct__105973 *kcg_c2);
#endif /* kcg_comp_struct__105973 */

#ifndef kcg_comp_struct__105987
extern kcg_bool kcg_comp_struct__105987(
  struct__105987 *kcg_c1,
  struct__105987 *kcg_c2);
#endif /* kcg_comp_struct__105987 */

#ifndef kcg_comp_struct__105993
extern kcg_bool kcg_comp_struct__105993(
  struct__105993 *kcg_c1,
  struct__105993 *kcg_c2);
#endif /* kcg_comp_struct__105993 */

#ifndef kcg_comp_struct__106004
extern kcg_bool kcg_comp_struct__106004(
  struct__106004 *kcg_c1,
  struct__106004 *kcg_c2);
#endif /* kcg_comp_struct__106004 */

#ifndef kcg_comp_struct__106015
extern kcg_bool kcg_comp_struct__106015(
  struct__106015 *kcg_c1,
  struct__106015 *kcg_c2);
#endif /* kcg_comp_struct__106015 */

#ifndef kcg_comp_struct__106032
extern kcg_bool kcg_comp_struct__106032(
  struct__106032 *kcg_c1,
  struct__106032 *kcg_c2);
#endif /* kcg_comp_struct__106032 */

#ifndef kcg_comp_struct__106038
extern kcg_bool kcg_comp_struct__106038(
  struct__106038 *kcg_c1,
  struct__106038 *kcg_c2);
#endif /* kcg_comp_struct__106038 */

#ifndef kcg_comp_struct__106047
extern kcg_bool kcg_comp_struct__106047(
  struct__106047 *kcg_c1,
  struct__106047 *kcg_c2);
#endif /* kcg_comp_struct__106047 */

#ifndef kcg_comp_struct__106062
extern kcg_bool kcg_comp_struct__106062(
  struct__106062 *kcg_c1,
  struct__106062 *kcg_c2);
#endif /* kcg_comp_struct__106062 */

#ifndef kcg_comp_struct__106071
extern kcg_bool kcg_comp_struct__106071(
  struct__106071 *kcg_c1,
  struct__106071 *kcg_c2);
#endif /* kcg_comp_struct__106071 */

#ifndef kcg_comp_struct__106082
extern kcg_bool kcg_comp_struct__106082(
  struct__106082 *kcg_c1,
  struct__106082 *kcg_c2);
#endif /* kcg_comp_struct__106082 */

#ifndef kcg_comp_struct__106095
extern kcg_bool kcg_comp_struct__106095(
  struct__106095 *kcg_c1,
  struct__106095 *kcg_c2);
#endif /* kcg_comp_struct__106095 */

#ifndef kcg_comp_struct__106107
extern kcg_bool kcg_comp_struct__106107(
  struct__106107 *kcg_c1,
  struct__106107 *kcg_c2);
#endif /* kcg_comp_struct__106107 */

#ifndef kcg_comp_struct__106117
extern kcg_bool kcg_comp_struct__106117(
  struct__106117 *kcg_c1,
  struct__106117 *kcg_c2);
#endif /* kcg_comp_struct__106117 */

#ifndef kcg_comp_struct__106137
extern kcg_bool kcg_comp_struct__106137(
  struct__106137 *kcg_c1,
  struct__106137 *kcg_c2);
#endif /* kcg_comp_struct__106137 */

#ifndef kcg_comp_struct__106143
extern kcg_bool kcg_comp_struct__106143(
  struct__106143 *kcg_c1,
  struct__106143 *kcg_c2);
#endif /* kcg_comp_struct__106143 */

#ifndef kcg_comp_struct__106152
extern kcg_bool kcg_comp_struct__106152(
  struct__106152 *kcg_c1,
  struct__106152 *kcg_c2);
#endif /* kcg_comp_struct__106152 */

#ifndef kcg_comp_struct__106162
extern kcg_bool kcg_comp_struct__106162(
  struct__106162 *kcg_c1,
  struct__106162 *kcg_c2);
#endif /* kcg_comp_struct__106162 */

#ifndef kcg_comp_struct__106177
extern kcg_bool kcg_comp_struct__106177(
  struct__106177 *kcg_c1,
  struct__106177 *kcg_c2);
#endif /* kcg_comp_struct__106177 */

#ifndef kcg_comp_struct__106187
extern kcg_bool kcg_comp_struct__106187(
  struct__106187 *kcg_c1,
  struct__106187 *kcg_c2);
#endif /* kcg_comp_struct__106187 */

#ifndef kcg_comp_struct__106218
extern kcg_bool kcg_comp_struct__106218(
  struct__106218 *kcg_c1,
  struct__106218 *kcg_c2);
#endif /* kcg_comp_struct__106218 */

#ifndef kcg_comp_struct__106223
extern kcg_bool kcg_comp_struct__106223(
  struct__106223 *kcg_c1,
  struct__106223 *kcg_c2);
#endif /* kcg_comp_struct__106223 */

#ifndef kcg_comp_struct__106232
extern kcg_bool kcg_comp_struct__106232(
  struct__106232 *kcg_c1,
  struct__106232 *kcg_c2);
#endif /* kcg_comp_struct__106232 */

#ifndef kcg_comp_struct__106242
extern kcg_bool kcg_comp_struct__106242(
  struct__106242 *kcg_c1,
  struct__106242 *kcg_c2);
#endif /* kcg_comp_struct__106242 */

#ifndef kcg_comp_struct__106253
extern kcg_bool kcg_comp_struct__106253(
  struct__106253 *kcg_c1,
  struct__106253 *kcg_c2);
#endif /* kcg_comp_struct__106253 */

#ifndef kcg_comp_struct__106261
extern kcg_bool kcg_comp_struct__106261(
  struct__106261 *kcg_c1,
  struct__106261 *kcg_c2);
#endif /* kcg_comp_struct__106261 */

#ifndef kcg_comp_struct__106300
extern kcg_bool kcg_comp_struct__106300(
  struct__106300 *kcg_c1,
  struct__106300 *kcg_c2);
#endif /* kcg_comp_struct__106300 */

#ifndef kcg_comp_struct__106314
extern kcg_bool kcg_comp_struct__106314(
  struct__106314 *kcg_c1,
  struct__106314 *kcg_c2);
#endif /* kcg_comp_struct__106314 */

#ifndef kcg_comp_struct__106329
extern kcg_bool kcg_comp_struct__106329(
  struct__106329 *kcg_c1,
  struct__106329 *kcg_c2);
#endif /* kcg_comp_struct__106329 */

#ifndef kcg_comp_struct__106335
extern kcg_bool kcg_comp_struct__106335(
  struct__106335 *kcg_c1,
  struct__106335 *kcg_c2);
#endif /* kcg_comp_struct__106335 */

#ifndef kcg_comp_struct__106344
extern kcg_bool kcg_comp_struct__106344(
  struct__106344 *kcg_c1,
  struct__106344 *kcg_c2);
#endif /* kcg_comp_struct__106344 */

#ifndef kcg_comp_struct__106353
extern kcg_bool kcg_comp_struct__106353(
  struct__106353 *kcg_c1,
  struct__106353 *kcg_c2);
#endif /* kcg_comp_struct__106353 */

#ifndef kcg_comp_struct__106361
extern kcg_bool kcg_comp_struct__106361(
  struct__106361 *kcg_c1,
  struct__106361 *kcg_c2);
#endif /* kcg_comp_struct__106361 */

#ifndef kcg_comp_struct__106369
extern kcg_bool kcg_comp_struct__106369(
  struct__106369 *kcg_c1,
  struct__106369 *kcg_c2);
#endif /* kcg_comp_struct__106369 */

#ifndef kcg_comp_struct__106381
extern kcg_bool kcg_comp_struct__106381(
  struct__106381 *kcg_c1,
  struct__106381 *kcg_c2);
#endif /* kcg_comp_struct__106381 */

#ifndef kcg_comp_struct__106394
extern kcg_bool kcg_comp_struct__106394(
  struct__106394 *kcg_c1,
  struct__106394 *kcg_c2);
#endif /* kcg_comp_struct__106394 */

#ifndef kcg_comp_struct__106406
extern kcg_bool kcg_comp_struct__106406(
  struct__106406 *kcg_c1,
  struct__106406 *kcg_c2);
#endif /* kcg_comp_struct__106406 */

#ifndef kcg_comp_struct__106411
extern kcg_bool kcg_comp_struct__106411(
  struct__106411 *kcg_c1,
  struct__106411 *kcg_c2);
#endif /* kcg_comp_struct__106411 */

#ifndef kcg_comp_struct__106417
extern kcg_bool kcg_comp_struct__106417(
  struct__106417 *kcg_c1,
  struct__106417 *kcg_c2);
#endif /* kcg_comp_struct__106417 */

#ifndef kcg_comp_struct__106435
extern kcg_bool kcg_comp_struct__106435(
  struct__106435 *kcg_c1,
  struct__106435 *kcg_c2);
#endif /* kcg_comp_struct__106435 */

#ifndef kcg_comp_struct__106440
extern kcg_bool kcg_comp_struct__106440(
  struct__106440 *kcg_c1,
  struct__106440 *kcg_c2);
#endif /* kcg_comp_struct__106440 */

#ifndef kcg_comp_struct__106448
extern kcg_bool kcg_comp_struct__106448(
  struct__106448 *kcg_c1,
  struct__106448 *kcg_c2);
#endif /* kcg_comp_struct__106448 */

#ifndef kcg_comp_struct__106456
extern kcg_bool kcg_comp_struct__106456(
  struct__106456 *kcg_c1,
  struct__106456 *kcg_c2);
#endif /* kcg_comp_struct__106456 */

#ifndef kcg_comp_struct__106463
extern kcg_bool kcg_comp_struct__106463(
  struct__106463 *kcg_c1,
  struct__106463 *kcg_c2);
#endif /* kcg_comp_struct__106463 */

#ifndef kcg_comp_struct__106483
extern kcg_bool kcg_comp_struct__106483(
  struct__106483 *kcg_c1,
  struct__106483 *kcg_c2);
#endif /* kcg_comp_struct__106483 */

#ifndef kcg_comp_struct__106504
extern kcg_bool kcg_comp_struct__106504(
  struct__106504 *kcg_c1,
  struct__106504 *kcg_c2);
#endif /* kcg_comp_struct__106504 */

#ifndef kcg_comp_struct__106519
extern kcg_bool kcg_comp_struct__106519(
  struct__106519 *kcg_c1,
  struct__106519 *kcg_c2);
#endif /* kcg_comp_struct__106519 */

#ifndef kcg_comp_struct__106530
extern kcg_bool kcg_comp_struct__106530(
  struct__106530 *kcg_c1,
  struct__106530 *kcg_c2);
#endif /* kcg_comp_struct__106530 */

#ifndef kcg_comp_struct__106558
extern kcg_bool kcg_comp_struct__106558(
  struct__106558 *kcg_c1,
  struct__106558 *kcg_c2);
#endif /* kcg_comp_struct__106558 */

#ifndef kcg_comp_struct__106569
extern kcg_bool kcg_comp_struct__106569(
  struct__106569 *kcg_c1,
  struct__106569 *kcg_c2);
#endif /* kcg_comp_struct__106569 */

#ifndef kcg_comp_struct__106579
extern kcg_bool kcg_comp_struct__106579(
  struct__106579 *kcg_c1,
  struct__106579 *kcg_c2);
#endif /* kcg_comp_struct__106579 */

#ifndef kcg_comp_struct__106590
extern kcg_bool kcg_comp_struct__106590(
  struct__106590 *kcg_c1,
  struct__106590 *kcg_c2);
#endif /* kcg_comp_struct__106590 */

#ifndef kcg_comp_struct__106600
extern kcg_bool kcg_comp_struct__106600(
  struct__106600 *kcg_c1,
  struct__106600 *kcg_c2);
#endif /* kcg_comp_struct__106600 */

#ifndef kcg_comp_struct__106606
extern kcg_bool kcg_comp_struct__106606(
  struct__106606 *kcg_c1,
  struct__106606 *kcg_c2);
#endif /* kcg_comp_struct__106606 */

#ifndef kcg_comp_struct__106614
extern kcg_bool kcg_comp_struct__106614(
  struct__106614 *kcg_c1,
  struct__106614 *kcg_c2);
#endif /* kcg_comp_struct__106614 */

#ifndef kcg_comp_struct__106619
extern kcg_bool kcg_comp_struct__106619(
  struct__106619 *kcg_c1,
  struct__106619 *kcg_c2);
#endif /* kcg_comp_struct__106619 */

#ifndef kcg_comp_struct__106626
extern kcg_bool kcg_comp_struct__106626(
  struct__106626 *kcg_c1,
  struct__106626 *kcg_c2);
#endif /* kcg_comp_struct__106626 */

#ifndef kcg_comp_struct__106640
extern kcg_bool kcg_comp_struct__106640(
  struct__106640 *kcg_c1,
  struct__106640 *kcg_c2);
#endif /* kcg_comp_struct__106640 */

#ifndef kcg_comp_struct__106645
extern kcg_bool kcg_comp_struct__106645(
  struct__106645 *kcg_c1,
  struct__106645 *kcg_c2);
#endif /* kcg_comp_struct__106645 */

#ifndef kcg_comp_struct__106676
extern kcg_bool kcg_comp_struct__106676(
  struct__106676 *kcg_c1,
  struct__106676 *kcg_c2);
#endif /* kcg_comp_struct__106676 */

#ifndef kcg_comp_struct__106691
extern kcg_bool kcg_comp_struct__106691(
  struct__106691 *kcg_c1,
  struct__106691 *kcg_c2);
#endif /* kcg_comp_struct__106691 */

#ifndef kcg_comp_struct__106702
extern kcg_bool kcg_comp_struct__106702(
  struct__106702 *kcg_c1,
  struct__106702 *kcg_c2);
#endif /* kcg_comp_struct__106702 */

#ifndef kcg_comp_struct__106714
extern kcg_bool kcg_comp_struct__106714(
  struct__106714 *kcg_c1,
  struct__106714 *kcg_c2);
#endif /* kcg_comp_struct__106714 */

#ifndef kcg_comp_struct__106722
extern kcg_bool kcg_comp_struct__106722(
  struct__106722 *kcg_c1,
  struct__106722 *kcg_c2);
#endif /* kcg_comp_struct__106722 */

#ifndef kcg_comp_struct__106752
extern kcg_bool kcg_comp_struct__106752(
  struct__106752 *kcg_c1,
  struct__106752 *kcg_c2);
#endif /* kcg_comp_struct__106752 */

#ifndef kcg_comp_struct__106760
extern kcg_bool kcg_comp_struct__106760(
  struct__106760 *kcg_c1,
  struct__106760 *kcg_c2);
#endif /* kcg_comp_struct__106760 */

#ifndef kcg_comp_struct__106766
extern kcg_bool kcg_comp_struct__106766(
  struct__106766 *kcg_c1,
  struct__106766 *kcg_c2);
#endif /* kcg_comp_struct__106766 */

#ifndef kcg_comp_struct__106775
extern kcg_bool kcg_comp_struct__106775(
  struct__106775 *kcg_c1,
  struct__106775 *kcg_c2);
#endif /* kcg_comp_struct__106775 */

#ifndef kcg_comp_struct__106787
extern kcg_bool kcg_comp_struct__106787(
  struct__106787 *kcg_c1,
  struct__106787 *kcg_c2);
#endif /* kcg_comp_struct__106787 */

#ifndef kcg_comp_struct__106794
extern kcg_bool kcg_comp_struct__106794(
  struct__106794 *kcg_c1,
  struct__106794 *kcg_c2);
#endif /* kcg_comp_struct__106794 */

#ifndef kcg_comp_struct__106805
extern kcg_bool kcg_comp_struct__106805(
  struct__106805 *kcg_c1,
  struct__106805 *kcg_c2);
#endif /* kcg_comp_struct__106805 */

#ifndef kcg_comp_struct__106816
extern kcg_bool kcg_comp_struct__106816(
  struct__106816 *kcg_c1,
  struct__106816 *kcg_c2);
#endif /* kcg_comp_struct__106816 */

#ifndef kcg_comp_struct__106827
extern kcg_bool kcg_comp_struct__106827(
  struct__106827 *kcg_c1,
  struct__106827 *kcg_c2);
#endif /* kcg_comp_struct__106827 */

#ifndef kcg_comp_struct__106836
extern kcg_bool kcg_comp_struct__106836(
  struct__106836 *kcg_c1,
  struct__106836 *kcg_c2);
#endif /* kcg_comp_struct__106836 */

#ifndef kcg_comp_struct__106849
extern kcg_bool kcg_comp_struct__106849(
  struct__106849 *kcg_c1,
  struct__106849 *kcg_c2);
#endif /* kcg_comp_struct__106849 */

#ifndef kcg_comp_struct__106859
extern kcg_bool kcg_comp_struct__106859(
  struct__106859 *kcg_c1,
  struct__106859 *kcg_c2);
#endif /* kcg_comp_struct__106859 */

#ifndef kcg_comp_struct__106868
extern kcg_bool kcg_comp_struct__106868(
  struct__106868 *kcg_c1,
  struct__106868 *kcg_c2);
#endif /* kcg_comp_struct__106868 */

#ifndef kcg_comp_struct__106878
extern kcg_bool kcg_comp_struct__106878(
  struct__106878 *kcg_c1,
  struct__106878 *kcg_c2);
#endif /* kcg_comp_struct__106878 */

#ifndef kcg_comp_struct__106887
extern kcg_bool kcg_comp_struct__106887(
  struct__106887 *kcg_c1,
  struct__106887 *kcg_c2);
#endif /* kcg_comp_struct__106887 */

#ifndef kcg_comp_struct__106900
extern kcg_bool kcg_comp_struct__106900(
  struct__106900 *kcg_c1,
  struct__106900 *kcg_c2);
#endif /* kcg_comp_struct__106900 */

#ifndef kcg_comp_struct__106929
extern kcg_bool kcg_comp_struct__106929(
  struct__106929 *kcg_c1,
  struct__106929 *kcg_c2);
#endif /* kcg_comp_struct__106929 */

#ifndef kcg_comp_struct__106938
extern kcg_bool kcg_comp_struct__106938(
  struct__106938 *kcg_c1,
  struct__106938 *kcg_c2);
#endif /* kcg_comp_struct__106938 */

#ifndef kcg_comp_struct__106955
extern kcg_bool kcg_comp_struct__106955(
  struct__106955 *kcg_c1,
  struct__106955 *kcg_c2);
#endif /* kcg_comp_struct__106955 */

#ifndef kcg_comp_struct__106968
extern kcg_bool kcg_comp_struct__106968(
  struct__106968 *kcg_c1,
  struct__106968 *kcg_c2);
#endif /* kcg_comp_struct__106968 */

#ifndef kcg_comp_struct__107001
extern kcg_bool kcg_comp_struct__107001(
  struct__107001 *kcg_c1,
  struct__107001 *kcg_c2);
#endif /* kcg_comp_struct__107001 */

#ifndef kcg_comp_struct__107012
extern kcg_bool kcg_comp_struct__107012(
  struct__107012 *kcg_c1,
  struct__107012 *kcg_c2);
#endif /* kcg_comp_struct__107012 */

#ifndef kcg_comp_struct__107017
extern kcg_bool kcg_comp_struct__107017(
  struct__107017 *kcg_c1,
  struct__107017 *kcg_c2);
#endif /* kcg_comp_struct__107017 */

#ifndef kcg_comp_struct__107072
extern kcg_bool kcg_comp_struct__107072(
  struct__107072 *kcg_c1,
  struct__107072 *kcg_c2);
#endif /* kcg_comp_struct__107072 */

#ifndef kcg_comp_struct__107081
extern kcg_bool kcg_comp_struct__107081(
  struct__107081 *kcg_c1,
  struct__107081 *kcg_c2);
#endif /* kcg_comp_struct__107081 */

#ifndef kcg_comp_struct__107090
extern kcg_bool kcg_comp_struct__107090(
  struct__107090 *kcg_c1,
  struct__107090 *kcg_c2);
#endif /* kcg_comp_struct__107090 */

#ifndef kcg_comp_struct__107097
extern kcg_bool kcg_comp_struct__107097(
  struct__107097 *kcg_c1,
  struct__107097 *kcg_c2);
#endif /* kcg_comp_struct__107097 */

#ifndef kcg_comp_struct__107106
extern kcg_bool kcg_comp_struct__107106(
  struct__107106 *kcg_c1,
  struct__107106 *kcg_c2);
#endif /* kcg_comp_struct__107106 */

#ifndef kcg_comp_struct__107114
extern kcg_bool kcg_comp_struct__107114(
  struct__107114 *kcg_c1,
  struct__107114 *kcg_c2);
#endif /* kcg_comp_struct__107114 */

#ifndef kcg_comp_struct__107124
extern kcg_bool kcg_comp_struct__107124(
  struct__107124 *kcg_c1,
  struct__107124 *kcg_c2);
#endif /* kcg_comp_struct__107124 */

#ifndef kcg_comp_struct__107136
extern kcg_bool kcg_comp_struct__107136(
  struct__107136 *kcg_c1,
  struct__107136 *kcg_c2);
#endif /* kcg_comp_struct__107136 */

#ifndef kcg_comp_struct__107142
extern kcg_bool kcg_comp_struct__107142(
  struct__107142 *kcg_c1,
  struct__107142 *kcg_c2);
#endif /* kcg_comp_struct__107142 */

#ifndef kcg_comp_struct__107151
extern kcg_bool kcg_comp_struct__107151(
  struct__107151 *kcg_c1,
  struct__107151 *kcg_c2);
#endif /* kcg_comp_struct__107151 */

#ifndef kcg_comp_struct__107178
extern kcg_bool kcg_comp_struct__107178(
  struct__107178 *kcg_c1,
  struct__107178 *kcg_c2);
#endif /* kcg_comp_struct__107178 */

#ifndef kcg_comp_struct__107184
extern kcg_bool kcg_comp_struct__107184(
  struct__107184 *kcg_c1,
  struct__107184 *kcg_c2);
#endif /* kcg_comp_struct__107184 */

#ifndef kcg_comp_struct__107197
extern kcg_bool kcg_comp_struct__107197(
  struct__107197 *kcg_c1,
  struct__107197 *kcg_c2);
#endif /* kcg_comp_struct__107197 */

#ifndef kcg_comp_struct__107205
extern kcg_bool kcg_comp_struct__107205(
  struct__107205 *kcg_c1,
  struct__107205 *kcg_c2);
#endif /* kcg_comp_struct__107205 */

#ifndef kcg_comp_struct__107212
extern kcg_bool kcg_comp_struct__107212(
  struct__107212 *kcg_c1,
  struct__107212 *kcg_c2);
#endif /* kcg_comp_struct__107212 */

#ifndef kcg_comp_struct__107219
extern kcg_bool kcg_comp_struct__107219(
  struct__107219 *kcg_c1,
  struct__107219 *kcg_c2);
#endif /* kcg_comp_struct__107219 */

#ifndef kcg_comp_struct__107224
extern kcg_bool kcg_comp_struct__107224(
  struct__107224 *kcg_c1,
  struct__107224 *kcg_c2);
#endif /* kcg_comp_struct__107224 */

#ifndef kcg_comp_struct__107230
extern kcg_bool kcg_comp_struct__107230(
  struct__107230 *kcg_c1,
  struct__107230 *kcg_c2);
#endif /* kcg_comp_struct__107230 */

#ifndef kcg_comp_struct__107235
extern kcg_bool kcg_comp_struct__107235(
  struct__107235 *kcg_c1,
  struct__107235 *kcg_c2);
#endif /* kcg_comp_struct__107235 */

#ifndef kcg_comp_struct__107244
extern kcg_bool kcg_comp_struct__107244(
  struct__107244 *kcg_c1,
  struct__107244 *kcg_c2);
#endif /* kcg_comp_struct__107244 */

#ifndef kcg_comp_struct__107248
extern kcg_bool kcg_comp_struct__107248(
  struct__107248 *kcg_c1,
  struct__107248 *kcg_c2);
#endif /* kcg_comp_struct__107248 */

#ifndef kcg_comp_struct__107253
extern kcg_bool kcg_comp_struct__107253(
  struct__107253 *kcg_c1,
  struct__107253 *kcg_c2);
#endif /* kcg_comp_struct__107253 */

#ifndef kcg_comp_struct__107261
extern kcg_bool kcg_comp_struct__107261(
  struct__107261 *kcg_c1,
  struct__107261 *kcg_c2);
#endif /* kcg_comp_struct__107261 */

#ifndef kcg_comp_struct__107274
extern kcg_bool kcg_comp_struct__107274(
  struct__107274 *kcg_c1,
  struct__107274 *kcg_c2);
#endif /* kcg_comp_struct__107274 */

#ifndef kcg_comp_struct__107283
extern kcg_bool kcg_comp_struct__107283(
  struct__107283 *kcg_c1,
  struct__107283 *kcg_c2);
#endif /* kcg_comp_struct__107283 */

#ifndef kcg_comp_struct__107294
extern kcg_bool kcg_comp_struct__107294(
  struct__107294 *kcg_c1,
  struct__107294 *kcg_c2);
#endif /* kcg_comp_struct__107294 */

#ifndef kcg_comp_struct__107306
extern kcg_bool kcg_comp_struct__107306(
  struct__107306 *kcg_c1,
  struct__107306 *kcg_c2);
#endif /* kcg_comp_struct__107306 */

#ifndef kcg_comp_struct__107313
extern kcg_bool kcg_comp_struct__107313(
  struct__107313 *kcg_c1,
  struct__107313 *kcg_c2);
#endif /* kcg_comp_struct__107313 */

#ifndef kcg_comp_struct__107324
extern kcg_bool kcg_comp_struct__107324(
  struct__107324 *kcg_c1,
  struct__107324 *kcg_c2);
#endif /* kcg_comp_struct__107324 */

#ifndef kcg_comp_struct__107335
extern kcg_bool kcg_comp_struct__107335(
  struct__107335 *kcg_c1,
  struct__107335 *kcg_c2);
#endif /* kcg_comp_struct__107335 */

#ifndef kcg_comp_struct__107360
extern kcg_bool kcg_comp_struct__107360(
  struct__107360 *kcg_c1,
  struct__107360 *kcg_c2);
#endif /* kcg_comp_struct__107360 */

#ifndef kcg_comp_struct__107369
extern kcg_bool kcg_comp_struct__107369(
  struct__107369 *kcg_c1,
  struct__107369 *kcg_c2);
#endif /* kcg_comp_struct__107369 */

#ifndef kcg_comp_struct__107379
extern kcg_bool kcg_comp_struct__107379(
  struct__107379 *kcg_c1,
  struct__107379 *kcg_c2);
#endif /* kcg_comp_struct__107379 */

#ifndef kcg_comp_struct__107386
extern kcg_bool kcg_comp_struct__107386(
  struct__107386 *kcg_c1,
  struct__107386 *kcg_c2);
#endif /* kcg_comp_struct__107386 */

#ifndef kcg_comp_struct__107394
extern kcg_bool kcg_comp_struct__107394(
  struct__107394 *kcg_c1,
  struct__107394 *kcg_c2);
#endif /* kcg_comp_struct__107394 */

#ifndef kcg_comp_struct__107405
extern kcg_bool kcg_comp_struct__107405(
  struct__107405 *kcg_c1,
  struct__107405 *kcg_c2);
#endif /* kcg_comp_struct__107405 */

#ifndef kcg_comp_struct__107411
extern kcg_bool kcg_comp_struct__107411(
  struct__107411 *kcg_c1,
  struct__107411 *kcg_c2);
#endif /* kcg_comp_struct__107411 */

#ifndef kcg_comp_struct__107417
extern kcg_bool kcg_comp_struct__107417(
  struct__107417 *kcg_c1,
  struct__107417 *kcg_c2);
#endif /* kcg_comp_struct__107417 */

#ifndef kcg_comp_struct__107425
extern kcg_bool kcg_comp_struct__107425(
  struct__107425 *kcg_c1,
  struct__107425 *kcg_c2);
#endif /* kcg_comp_struct__107425 */

#ifndef kcg_comp_struct__107431
extern kcg_bool kcg_comp_struct__107431(
  struct__107431 *kcg_c1,
  struct__107431 *kcg_c2);
#endif /* kcg_comp_struct__107431 */

#ifndef kcg_comp_struct__107438
extern kcg_bool kcg_comp_struct__107438(
  struct__107438 *kcg_c1,
  struct__107438 *kcg_c2);
#endif /* kcg_comp_struct__107438 */

#ifndef kcg_comp_struct__107448
extern kcg_bool kcg_comp_struct__107448(
  struct__107448 *kcg_c1,
  struct__107448 *kcg_c2);
#endif /* kcg_comp_struct__107448 */

#ifndef kcg_comp_struct__107462
extern kcg_bool kcg_comp_struct__107462(
  struct__107462 *kcg_c1,
  struct__107462 *kcg_c2);
#endif /* kcg_comp_struct__107462 */

#ifndef kcg_comp_struct__107468
extern kcg_bool kcg_comp_struct__107468(
  struct__107468 *kcg_c1,
  struct__107468 *kcg_c2);
#endif /* kcg_comp_struct__107468 */

#ifndef kcg_comp_struct__107475
extern kcg_bool kcg_comp_struct__107475(
  struct__107475 *kcg_c1,
  struct__107475 *kcg_c2);
#endif /* kcg_comp_struct__107475 */

#ifndef kcg_comp_struct__107482
extern kcg_bool kcg_comp_struct__107482(
  struct__107482 *kcg_c1,
  struct__107482 *kcg_c2);
#endif /* kcg_comp_struct__107482 */

#ifndef kcg_comp_struct__107488
extern kcg_bool kcg_comp_struct__107488(
  struct__107488 *kcg_c1,
  struct__107488 *kcg_c2);
#endif /* kcg_comp_struct__107488 */

#ifndef kcg_comp_struct__107497
extern kcg_bool kcg_comp_struct__107497(
  struct__107497 *kcg_c1,
  struct__107497 *kcg_c2);
#endif /* kcg_comp_struct__107497 */

#ifndef kcg_comp_struct__107503
extern kcg_bool kcg_comp_struct__107503(
  struct__107503 *kcg_c1,
  struct__107503 *kcg_c2);
#endif /* kcg_comp_struct__107503 */

#ifndef kcg_comp_struct__107508
extern kcg_bool kcg_comp_struct__107508(
  struct__107508 *kcg_c1,
  struct__107508 *kcg_c2);
#endif /* kcg_comp_struct__107508 */

#ifndef kcg_comp_struct__107518
extern kcg_bool kcg_comp_struct__107518(
  struct__107518 *kcg_c1,
  struct__107518 *kcg_c2);
#endif /* kcg_comp_struct__107518 */

#ifndef kcg_comp_struct__107528
extern kcg_bool kcg_comp_struct__107528(
  struct__107528 *kcg_c1,
  struct__107528 *kcg_c2);
#endif /* kcg_comp_struct__107528 */

#ifndef kcg_comp_struct__107544
extern kcg_bool kcg_comp_struct__107544(
  struct__107544 *kcg_c1,
  struct__107544 *kcg_c2);
#endif /* kcg_comp_struct__107544 */

#ifndef kcg_comp_struct__107565
extern kcg_bool kcg_comp_struct__107565(
  struct__107565 *kcg_c1,
  struct__107565 *kcg_c2);
#endif /* kcg_comp_struct__107565 */

#ifndef kcg_comp_struct__107572
extern kcg_bool kcg_comp_struct__107572(
  struct__107572 *kcg_c1,
  struct__107572 *kcg_c2);
#endif /* kcg_comp_struct__107572 */

#ifndef kcg_comp_struct__107605
extern kcg_bool kcg_comp_struct__107605(
  struct__107605 *kcg_c1,
  struct__107605 *kcg_c2);
#endif /* kcg_comp_struct__107605 */

#ifndef kcg_comp_struct__107615
extern kcg_bool kcg_comp_struct__107615(
  struct__107615 *kcg_c1,
  struct__107615 *kcg_c2);
#endif /* kcg_comp_struct__107615 */

#ifndef kcg_comp_struct__107623
extern kcg_bool kcg_comp_struct__107623(
  struct__107623 *kcg_c1,
  struct__107623 *kcg_c2);
#endif /* kcg_comp_struct__107623 */

#ifndef kcg_comp_struct__107632
extern kcg_bool kcg_comp_struct__107632(
  struct__107632 *kcg_c1,
  struct__107632 *kcg_c2);
#endif /* kcg_comp_struct__107632 */

#ifndef kcg_comp_struct__107639
extern kcg_bool kcg_comp_struct__107639(
  struct__107639 *kcg_c1,
  struct__107639 *kcg_c2);
#endif /* kcg_comp_struct__107639 */

#ifndef kcg_comp_struct__107645
extern kcg_bool kcg_comp_struct__107645(
  struct__107645 *kcg_c1,
  struct__107645 *kcg_c2);
#endif /* kcg_comp_struct__107645 */

#ifndef kcg_comp_struct__107657
extern kcg_bool kcg_comp_struct__107657(
  struct__107657 *kcg_c1,
  struct__107657 *kcg_c2);
#endif /* kcg_comp_struct__107657 */

#ifndef kcg_comp_struct__107668
extern kcg_bool kcg_comp_struct__107668(
  struct__107668 *kcg_c1,
  struct__107668 *kcg_c2);
#endif /* kcg_comp_struct__107668 */

#ifndef kcg_comp_struct__107686
extern kcg_bool kcg_comp_struct__107686(
  struct__107686 *kcg_c1,
  struct__107686 *kcg_c2);
#endif /* kcg_comp_struct__107686 */

#ifndef kcg_comp_struct__107692
extern kcg_bool kcg_comp_struct__107692(
  struct__107692 *kcg_c1,
  struct__107692 *kcg_c2);
#endif /* kcg_comp_struct__107692 */

#ifndef kcg_comp_struct__107697
extern kcg_bool kcg_comp_struct__107697(
  struct__107697 *kcg_c1,
  struct__107697 *kcg_c2);
#endif /* kcg_comp_struct__107697 */

#ifndef kcg_comp_struct__107705
extern kcg_bool kcg_comp_struct__107705(
  struct__107705 *kcg_c1,
  struct__107705 *kcg_c2);
#endif /* kcg_comp_struct__107705 */

#ifndef kcg_comp_struct__107716
extern kcg_bool kcg_comp_struct__107716(
  struct__107716 *kcg_c1,
  struct__107716 *kcg_c2);
#endif /* kcg_comp_struct__107716 */

#ifndef kcg_comp_struct__107727
extern kcg_bool kcg_comp_struct__107727(
  struct__107727 *kcg_c1,
  struct__107727 *kcg_c2);
#endif /* kcg_comp_struct__107727 */

#ifndef kcg_comp_struct__107732
extern kcg_bool kcg_comp_struct__107732(
  struct__107732 *kcg_c1,
  struct__107732 *kcg_c2);
#endif /* kcg_comp_struct__107732 */

#ifndef kcg_comp_struct__107742
extern kcg_bool kcg_comp_struct__107742(
  struct__107742 *kcg_c1,
  struct__107742 *kcg_c2);
#endif /* kcg_comp_struct__107742 */

#ifndef kcg_comp_struct__107748
extern kcg_bool kcg_comp_struct__107748(
  struct__107748 *kcg_c1,
  struct__107748 *kcg_c2);
#endif /* kcg_comp_struct__107748 */

#ifndef kcg_comp_struct__107753
extern kcg_bool kcg_comp_struct__107753(
  struct__107753 *kcg_c1,
  struct__107753 *kcg_c2);
#endif /* kcg_comp_struct__107753 */

#ifndef kcg_comp_struct__107761
extern kcg_bool kcg_comp_struct__107761(
  struct__107761 *kcg_c1,
  struct__107761 *kcg_c2);
#endif /* kcg_comp_struct__107761 */

#ifndef kcg_comp_struct__107773
extern kcg_bool kcg_comp_struct__107773(
  struct__107773 *kcg_c1,
  struct__107773 *kcg_c2);
#endif /* kcg_comp_struct__107773 */

#ifndef kcg_comp_struct__107778
extern kcg_bool kcg_comp_struct__107778(
  struct__107778 *kcg_c1,
  struct__107778 *kcg_c2);
#endif /* kcg_comp_struct__107778 */

#ifndef kcg_comp_struct__107791
extern kcg_bool kcg_comp_struct__107791(
  struct__107791 *kcg_c1,
  struct__107791 *kcg_c2);
#endif /* kcg_comp_struct__107791 */

#ifndef kcg_comp_struct__107800
extern kcg_bool kcg_comp_struct__107800(
  struct__107800 *kcg_c1,
  struct__107800 *kcg_c2);
#endif /* kcg_comp_struct__107800 */

#ifndef kcg_comp_struct__107823
extern kcg_bool kcg_comp_struct__107823(
  struct__107823 *kcg_c1,
  struct__107823 *kcg_c2);
#endif /* kcg_comp_struct__107823 */

#ifndef kcg_comp_struct__107841
extern kcg_bool kcg_comp_struct__107841(
  struct__107841 *kcg_c1,
  struct__107841 *kcg_c2);
#endif /* kcg_comp_struct__107841 */

#ifndef kcg_comp_struct__107846
extern kcg_bool kcg_comp_struct__107846(
  struct__107846 *kcg_c1,
  struct__107846 *kcg_c2);
#endif /* kcg_comp_struct__107846 */

#ifndef kcg_comp_struct__107854
extern kcg_bool kcg_comp_struct__107854(
  struct__107854 *kcg_c1,
  struct__107854 *kcg_c2);
#endif /* kcg_comp_struct__107854 */

#ifndef kcg_comp_struct__107867
extern kcg_bool kcg_comp_struct__107867(
  struct__107867 *kcg_c1,
  struct__107867 *kcg_c2);
#endif /* kcg_comp_struct__107867 */

#ifndef kcg_comp_struct__107887
extern kcg_bool kcg_comp_struct__107887(
  struct__107887 *kcg_c1,
  struct__107887 *kcg_c2);
#endif /* kcg_comp_struct__107887 */

#ifndef kcg_comp_struct__107894
extern kcg_bool kcg_comp_struct__107894(
  struct__107894 *kcg_c1,
  struct__107894 *kcg_c2);
#endif /* kcg_comp_struct__107894 */

#ifndef kcg_comp_struct__107903
extern kcg_bool kcg_comp_struct__107903(
  struct__107903 *kcg_c1,
  struct__107903 *kcg_c2);
#endif /* kcg_comp_struct__107903 */

#ifndef kcg_comp_struct__107909
extern kcg_bool kcg_comp_struct__107909(
  struct__107909 *kcg_c1,
  struct__107909 *kcg_c2);
#endif /* kcg_comp_struct__107909 */

#ifndef kcg_comp_struct__107915
extern kcg_bool kcg_comp_struct__107915(
  struct__107915 *kcg_c1,
  struct__107915 *kcg_c2);
#endif /* kcg_comp_struct__107915 */

#ifndef kcg_comp_struct__107921
extern kcg_bool kcg_comp_struct__107921(
  struct__107921 *kcg_c1,
  struct__107921 *kcg_c2);
#endif /* kcg_comp_struct__107921 */

#ifndef kcg_comp_struct__107928
extern kcg_bool kcg_comp_struct__107928(
  struct__107928 *kcg_c1,
  struct__107928 *kcg_c2);
#endif /* kcg_comp_struct__107928 */

#ifndef kcg_comp_struct__107936
extern kcg_bool kcg_comp_struct__107936(
  struct__107936 *kcg_c1,
  struct__107936 *kcg_c2);
#endif /* kcg_comp_struct__107936 */

#ifndef kcg_comp_struct__107945
extern kcg_bool kcg_comp_struct__107945(
  struct__107945 *kcg_c1,
  struct__107945 *kcg_c2);
#endif /* kcg_comp_struct__107945 */

#ifndef kcg_comp_struct__107957
extern kcg_bool kcg_comp_struct__107957(
  struct__107957 *kcg_c1,
  struct__107957 *kcg_c2);
#endif /* kcg_comp_struct__107957 */

#ifndef kcg_comp_struct__107963
extern kcg_bool kcg_comp_struct__107963(
  struct__107963 *kcg_c1,
  struct__107963 *kcg_c2);
#endif /* kcg_comp_struct__107963 */

#ifndef kcg_comp_struct__107969
extern kcg_bool kcg_comp_struct__107969(
  struct__107969 *kcg_c1,
  struct__107969 *kcg_c2);
#endif /* kcg_comp_struct__107969 */

#ifndef kcg_comp_struct__107987
extern kcg_bool kcg_comp_struct__107987(
  struct__107987 *kcg_c1,
  struct__107987 *kcg_c2);
#endif /* kcg_comp_struct__107987 */

#ifndef kcg_comp_struct__107993
extern kcg_bool kcg_comp_struct__107993(
  struct__107993 *kcg_c1,
  struct__107993 *kcg_c2);
#endif /* kcg_comp_struct__107993 */

#ifndef kcg_comp_struct__107999
extern kcg_bool kcg_comp_struct__107999(
  struct__107999 *kcg_c1,
  struct__107999 *kcg_c2);
#endif /* kcg_comp_struct__107999 */

#ifndef kcg_comp_struct__108015
extern kcg_bool kcg_comp_struct__108015(
  struct__108015 *kcg_c1,
  struct__108015 *kcg_c2);
#endif /* kcg_comp_struct__108015 */

#ifndef kcg_comp_struct__108023
extern kcg_bool kcg_comp_struct__108023(
  struct__108023 *kcg_c1,
  struct__108023 *kcg_c2);
#endif /* kcg_comp_struct__108023 */

#ifndef kcg_comp_struct__108028
extern kcg_bool kcg_comp_struct__108028(
  struct__108028 *kcg_c1,
  struct__108028 *kcg_c2);
#endif /* kcg_comp_struct__108028 */

#ifndef kcg_comp_struct__108036
extern kcg_bool kcg_comp_struct__108036(
  struct__108036 *kcg_c1,
  struct__108036 *kcg_c2);
#endif /* kcg_comp_struct__108036 */

#ifndef kcg_comp_struct__108041
extern kcg_bool kcg_comp_struct__108041(
  struct__108041 *kcg_c1,
  struct__108041 *kcg_c2);
#endif /* kcg_comp_struct__108041 */

#ifndef kcg_comp_struct__108055
extern kcg_bool kcg_comp_struct__108055(
  struct__108055 *kcg_c1,
  struct__108055 *kcg_c2);
#endif /* kcg_comp_struct__108055 */

#ifndef kcg_comp_struct__108066
extern kcg_bool kcg_comp_struct__108066(
  struct__108066 *kcg_c1,
  struct__108066 *kcg_c2);
#endif /* kcg_comp_struct__108066 */

#ifndef kcg_comp_struct__108099
extern kcg_bool kcg_comp_struct__108099(
  struct__108099 *kcg_c1,
  struct__108099 *kcg_c2);
#endif /* kcg_comp_struct__108099 */

#ifndef kcg_comp_struct__108105
extern kcg_bool kcg_comp_struct__108105(
  struct__108105 *kcg_c1,
  struct__108105 *kcg_c2);
#endif /* kcg_comp_struct__108105 */

#ifndef kcg_comp_struct__108131
extern kcg_bool kcg_comp_struct__108131(
  struct__108131 *kcg_c1,
  struct__108131 *kcg_c2);
#endif /* kcg_comp_struct__108131 */

#ifndef kcg_comp_struct__108151
extern kcg_bool kcg_comp_struct__108151(
  struct__108151 *kcg_c1,
  struct__108151 *kcg_c2);
#endif /* kcg_comp_struct__108151 */

#ifndef kcg_comp_struct__108158
extern kcg_bool kcg_comp_struct__108158(
  struct__108158 *kcg_c1,
  struct__108158 *kcg_c2);
#endif /* kcg_comp_struct__108158 */

#ifndef kcg_comp_struct__108163
extern kcg_bool kcg_comp_struct__108163(
  struct__108163 *kcg_c1,
  struct__108163 *kcg_c2);
#endif /* kcg_comp_struct__108163 */

#ifndef kcg_comp_struct__108168
extern kcg_bool kcg_comp_struct__108168(
  struct__108168 *kcg_c1,
  struct__108168 *kcg_c2);
#endif /* kcg_comp_struct__108168 */

#ifndef kcg_comp_struct__108176
extern kcg_bool kcg_comp_struct__108176(
  struct__108176 *kcg_c1,
  struct__108176 *kcg_c2);
#endif /* kcg_comp_struct__108176 */

#ifndef kcg_comp_struct__108183
extern kcg_bool kcg_comp_struct__108183(
  struct__108183 *kcg_c1,
  struct__108183 *kcg_c2);
#endif /* kcg_comp_struct__108183 */

#ifndef kcg_comp_struct__108188
extern kcg_bool kcg_comp_struct__108188(
  struct__108188 *kcg_c1,
  struct__108188 *kcg_c2);
#endif /* kcg_comp_struct__108188 */

#ifndef kcg_comp_struct__108197
extern kcg_bool kcg_comp_struct__108197(
  struct__108197 *kcg_c1,
  struct__108197 *kcg_c2);
#endif /* kcg_comp_struct__108197 */

#ifndef kcg_comp_struct__108206
extern kcg_bool kcg_comp_struct__108206(
  struct__108206 *kcg_c1,
  struct__108206 *kcg_c2);
#endif /* kcg_comp_struct__108206 */

#ifndef kcg_comp_struct__108215
extern kcg_bool kcg_comp_struct__108215(
  struct__108215 *kcg_c1,
  struct__108215 *kcg_c2);
#endif /* kcg_comp_struct__108215 */

#ifndef kcg_comp_struct__108224
extern kcg_bool kcg_comp_struct__108224(
  struct__108224 *kcg_c1,
  struct__108224 *kcg_c2);
#endif /* kcg_comp_struct__108224 */

#ifndef kcg_comp_struct__108231
extern kcg_bool kcg_comp_struct__108231(
  struct__108231 *kcg_c1,
  struct__108231 *kcg_c2);
#endif /* kcg_comp_struct__108231 */

#ifndef kcg_comp_struct__108248
extern kcg_bool kcg_comp_struct__108248(
  struct__108248 *kcg_c1,
  struct__108248 *kcg_c2);
#endif /* kcg_comp_struct__108248 */

#ifndef kcg_comp_struct__108260
extern kcg_bool kcg_comp_struct__108260(
  struct__108260 *kcg_c1,
  struct__108260 *kcg_c2);
#endif /* kcg_comp_struct__108260 */

#ifndef kcg_comp_struct__108271
extern kcg_bool kcg_comp_struct__108271(
  struct__108271 *kcg_c1,
  struct__108271 *kcg_c2);
#endif /* kcg_comp_struct__108271 */

#ifndef kcg_comp_struct__108279
extern kcg_bool kcg_comp_struct__108279(
  struct__108279 *kcg_c1,
  struct__108279 *kcg_c2);
#endif /* kcg_comp_struct__108279 */

#ifndef kcg_comp_struct__108299
extern kcg_bool kcg_comp_struct__108299(
  struct__108299 *kcg_c1,
  struct__108299 *kcg_c2);
#endif /* kcg_comp_struct__108299 */

#ifndef kcg_comp_array__105355
extern kcg_bool kcg_comp_array__105355(
  array__105355 *kcg_c1,
  array__105355 *kcg_c2);
#endif /* kcg_comp_array__105355 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__105500
extern kcg_bool kcg_comp_array__105500(
  array__105500 *kcg_c1,
  array__105500 *kcg_c2);
#endif /* kcg_comp_array__105500 */

#ifndef kcg_comp_array_int_311
extern kcg_bool kcg_comp_array_int_311(
  array_int_311 *kcg_c1,
  array_int_311 *kcg_c2);
#endif /* kcg_comp_array_int_311 */

#ifndef kcg_comp_array_int_999
extern kcg_bool kcg_comp_array_int_999(
  array_int_999 *kcg_c1,
  array_int_999 *kcg_c2);
#endif /* kcg_comp_array_int_999 */

#ifndef kcg_comp_array__105570
extern kcg_bool kcg_comp_array__105570(
  array__105570 *kcg_c1,
  array__105570 *kcg_c2);
#endif /* kcg_comp_array__105570 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__105723
extern kcg_bool kcg_comp_array__105723(
  array__105723 *kcg_c1,
  array__105723 *kcg_c2);
#endif /* kcg_comp_array__105723 */

#ifndef kcg_comp_array__106001
extern kcg_bool kcg_comp_array__106001(
  array__106001 *kcg_c1,
  array__106001 *kcg_c2);
#endif /* kcg_comp_array__106001 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array__106029
extern kcg_bool kcg_comp_array__106029(
  array__106029 *kcg_c1,
  array__106029 *kcg_c2);
#endif /* kcg_comp_array__106029 */

#ifndef kcg_comp_array__106059
extern kcg_bool kcg_comp_array__106059(
  array__106059 *kcg_c1,
  array__106059 *kcg_c2);
#endif /* kcg_comp_array__106059 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array__106149
extern kcg_bool kcg_comp_array__106149(
  array__106149 *kcg_c1,
  array__106149 *kcg_c2);
#endif /* kcg_comp_array__106149 */

#ifndef kcg_comp_array__106159
extern kcg_bool kcg_comp_array__106159(
  array__106159 *kcg_c1,
  array__106159 *kcg_c2);
#endif /* kcg_comp_array__106159 */

#ifndef kcg_comp_array__106174
extern kcg_bool kcg_comp_array__106174(
  array__106174 *kcg_c1,
  array__106174 *kcg_c2);
#endif /* kcg_comp_array__106174 */

#ifndef kcg_comp_array__106184
extern kcg_bool kcg_comp_array__106184(
  array__106184 *kcg_c1,
  array__106184 *kcg_c2);
#endif /* kcg_comp_array__106184 */

#ifndef kcg_comp_array__106229
extern kcg_bool kcg_comp_array__106229(
  array__106229 *kcg_c1,
  array__106229 *kcg_c2);
#endif /* kcg_comp_array__106229 */

#ifndef kcg_comp_array__106239
extern kcg_bool kcg_comp_array__106239(
  array__106239 *kcg_c1,
  array__106239 *kcg_c2);
#endif /* kcg_comp_array__106239 */

#ifndef kcg_comp_array__106250
extern kcg_bool kcg_comp_array__106250(
  array__106250 *kcg_c1,
  array__106250 *kcg_c2);
#endif /* kcg_comp_array__106250 */

#ifndef kcg_comp_array__106258
extern kcg_bool kcg_comp_array__106258(
  array__106258 *kcg_c1,
  array__106258 *kcg_c2);
#endif /* kcg_comp_array__106258 */

#ifndef kcg_comp_array__106311
extern kcg_bool kcg_comp_array__106311(
  array__106311 *kcg_c1,
  array__106311 *kcg_c2);
#endif /* kcg_comp_array__106311 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__106350
extern kcg_bool kcg_comp_array__106350(
  array__106350 *kcg_c1,
  array__106350 *kcg_c2);
#endif /* kcg_comp_array__106350 */

#ifndef kcg_comp_array__106366
extern kcg_bool kcg_comp_array__106366(
  array__106366 *kcg_c1,
  array__106366 *kcg_c2);
#endif /* kcg_comp_array__106366 */

#ifndef kcg_comp_array__106403
extern kcg_bool kcg_comp_array__106403(
  array__106403 *kcg_c1,
  array__106403 *kcg_c2);
#endif /* kcg_comp_array__106403 */

#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__106527
extern kcg_bool kcg_comp_array__106527(
  array__106527 *kcg_c1,
  array__106527 *kcg_c2);
#endif /* kcg_comp_array__106527 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__106566
extern kcg_bool kcg_comp_array__106566(
  array__106566 *kcg_c1,
  array__106566 *kcg_c2);
#endif /* kcg_comp_array__106566 */

#ifndef kcg_comp_array__106576
extern kcg_bool kcg_comp_array__106576(
  array__106576 *kcg_c1,
  array__106576 *kcg_c2);
#endif /* kcg_comp_array__106576 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__106611
extern kcg_bool kcg_comp_array__106611(
  array__106611 *kcg_c1,
  array__106611 *kcg_c2);
#endif /* kcg_comp_array__106611 */

#ifndef kcg_comp_array__106634
extern kcg_bool kcg_comp_array__106634(
  array__106634 *kcg_c1,
  array__106634 *kcg_c2);
#endif /* kcg_comp_array__106634 */

#ifndef kcg_comp_array__106637
extern kcg_bool kcg_comp_array__106637(
  array__106637 *kcg_c1,
  array__106637 *kcg_c2);
#endif /* kcg_comp_array__106637 */

#ifndef kcg_comp_array__106673
extern kcg_bool kcg_comp_array__106673(
  array__106673 *kcg_c1,
  array__106673 *kcg_c2);
#endif /* kcg_comp_array__106673 */

#ifndef kcg_comp_array__106688
extern kcg_bool kcg_comp_array__106688(
  array__106688 *kcg_c1,
  array__106688 *kcg_c2);
#endif /* kcg_comp_array__106688 */

#ifndef kcg_comp_array__106699
extern kcg_bool kcg_comp_array__106699(
  array__106699 *kcg_c1,
  array__106699 *kcg_c2);
#endif /* kcg_comp_array__106699 */

#ifndef kcg_comp_array__106711
extern kcg_bool kcg_comp_array__106711(
  array__106711 *kcg_c1,
  array__106711 *kcg_c2);
#endif /* kcg_comp_array__106711 */

#ifndef kcg_comp_array__106749
extern kcg_bool kcg_comp_array__106749(
  array__106749 *kcg_c1,
  array__106749 *kcg_c2);
#endif /* kcg_comp_array__106749 */

#ifndef kcg_comp_array__106772
extern kcg_bool kcg_comp_array__106772(
  array__106772 *kcg_c1,
  array__106772 *kcg_c2);
#endif /* kcg_comp_array__106772 */

#ifndef kcg_comp_array__106784
extern kcg_bool kcg_comp_array__106784(
  array__106784 *kcg_c1,
  array__106784 *kcg_c2);
#endif /* kcg_comp_array__106784 */

#ifndef kcg_comp_array__106802
extern kcg_bool kcg_comp_array__106802(
  array__106802 *kcg_c1,
  array__106802 *kcg_c2);
#endif /* kcg_comp_array__106802 */

#ifndef kcg_comp_array__106813
extern kcg_bool kcg_comp_array__106813(
  array__106813 *kcg_c1,
  array__106813 *kcg_c2);
#endif /* kcg_comp_array__106813 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__106846
extern kcg_bool kcg_comp_array__106846(
  array__106846 *kcg_c1,
  array__106846 *kcg_c2);
#endif /* kcg_comp_array__106846 */

#ifndef kcg_comp_array__106856
extern kcg_bool kcg_comp_array__106856(
  array__106856 *kcg_c1,
  array__106856 *kcg_c2);
#endif /* kcg_comp_array__106856 */

#ifndef kcg_comp_array__106875
extern kcg_bool kcg_comp_array__106875(
  array__106875 *kcg_c1,
  array__106875 *kcg_c2);
#endif /* kcg_comp_array__106875 */

#ifndef kcg_comp_array__106884
extern kcg_bool kcg_comp_array__106884(
  array__106884 *kcg_c1,
  array__106884 *kcg_c2);
#endif /* kcg_comp_array__106884 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array__106962
extern kcg_bool kcg_comp_array__106962(
  array__106962 *kcg_c1,
  array__106962 *kcg_c2);
#endif /* kcg_comp_array__106962 */

#ifndef kcg_comp_array__106965
extern kcg_bool kcg_comp_array__106965(
  array__106965 *kcg_c1,
  array__106965 *kcg_c2);
#endif /* kcg_comp_array__106965 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__107006
extern kcg_bool kcg_comp_array__107006(
  array__107006 *kcg_c1,
  array__107006 *kcg_c2);
#endif /* kcg_comp_array__107006 */

#ifndef kcg_comp_array__107009
extern kcg_bool kcg_comp_array__107009(
  array__107009 *kcg_c1,
  array__107009 *kcg_c2);
#endif /* kcg_comp_array__107009 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_4
extern kcg_bool kcg_comp_array_int_2_4(
  array_int_2_4 *kcg_c1,
  array_int_2_4 *kcg_c2);
#endif /* kcg_comp_array_int_2_4 */

#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */

#ifndef kcg_comp_array__107191
extern kcg_bool kcg_comp_array__107191(
  array__107191 *kcg_c1,
  array__107191 *kcg_c2);
#endif /* kcg_comp_array__107191 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array__107241
extern kcg_bool kcg_comp_array__107241(
  array__107241 *kcg_c1,
  array__107241 *kcg_c2);
#endif /* kcg_comp_array__107241 */

#ifndef kcg_comp_array__107258
extern kcg_bool kcg_comp_array__107258(
  array__107258 *kcg_c1,
  array__107258 *kcg_c2);
#endif /* kcg_comp_array__107258 */

#ifndef kcg_comp_array__107280
extern kcg_bool kcg_comp_array__107280(
  array__107280 *kcg_c1,
  array__107280 *kcg_c2);
#endif /* kcg_comp_array__107280 */

#ifndef kcg_comp_array__107342
extern kcg_bool kcg_comp_array__107342(
  array__107342 *kcg_c1,
  array__107342 *kcg_c2);
#endif /* kcg_comp_array__107342 */

#ifndef kcg_comp_array__107345
extern kcg_bool kcg_comp_array__107345(
  array__107345 *kcg_c1,
  array__107345 *kcg_c2);
#endif /* kcg_comp_array__107345 */

#ifndef kcg_comp_array__107348
extern kcg_bool kcg_comp_array__107348(
  array__107348 *kcg_c1,
  array__107348 *kcg_c2);
#endif /* kcg_comp_array__107348 */

#ifndef kcg_comp_array__107351
extern kcg_bool kcg_comp_array__107351(
  array__107351 *kcg_c1,
  array__107351 *kcg_c2);
#endif /* kcg_comp_array__107351 */

#ifndef kcg_comp_array_bool_256
extern kcg_bool kcg_comp_array_bool_256(
  array_bool_256 *kcg_c1,
  array_bool_256 *kcg_c2);
#endif /* kcg_comp_array_bool_256 */

#ifndef kcg_comp_array_bool_256_46
extern kcg_bool kcg_comp_array_bool_256_46(
  array_bool_256_46 *kcg_c1,
  array_bool_256_46 *kcg_c2);
#endif /* kcg_comp_array_bool_256_46 */

#ifndef kcg_comp_array__107376
extern kcg_bool kcg_comp_array__107376(
  array__107376 *kcg_c1,
  array__107376 *kcg_c2);
#endif /* kcg_comp_array__107376 */

#ifndef kcg_comp_array__107459
extern kcg_bool kcg_comp_array__107459(
  array__107459 *kcg_c1,
  array__107459 *kcg_c2);
#endif /* kcg_comp_array__107459 */

#ifndef kcg_comp_array_char_9
extern kcg_bool kcg_comp_array_char_9(
  array_char_9 *kcg_c1,
  array_char_9 *kcg_c2);
#endif /* kcg_comp_array_char_9 */

#ifndef kcg_comp_array_char_255
extern kcg_bool kcg_comp_array_char_255(
  array_char_255 *kcg_c1,
  array_char_255 *kcg_c2);
#endif /* kcg_comp_array_char_255 */

#ifndef kcg_comp_array_int_255
extern kcg_bool kcg_comp_array_int_255(
  array_int_255 *kcg_c1,
  array_int_255 *kcg_c2);
#endif /* kcg_comp_array_int_255 */

#ifndef kcg_comp_array_int_261
extern kcg_bool kcg_comp_array_int_261(
  array_int_261 *kcg_c1,
  array_int_261 *kcg_c2);
#endif /* kcg_comp_array_int_261 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array_bool_114
extern kcg_bool kcg_comp_array_bool_114(
  array_bool_114 *kcg_c1,
  array_bool_114 *kcg_c2);
#endif /* kcg_comp_array_bool_114 */

#ifndef kcg_comp_array_real_114
extern kcg_bool kcg_comp_array_real_114(
  array_real_114 *kcg_c1,
  array_real_114 *kcg_c2);
#endif /* kcg_comp_array_real_114 */

#ifndef kcg_comp_array__107612
extern kcg_bool kcg_comp_array__107612(
  array__107612 *kcg_c1,
  array__107612 *kcg_c2);
#endif /* kcg_comp_array__107612 */

#ifndef kcg_comp_array__107629
extern kcg_bool kcg_comp_array__107629(
  array__107629 *kcg_c1,
  array__107629 *kcg_c2);
#endif /* kcg_comp_array__107629 */

#ifndef kcg_comp_array__107651
extern kcg_bool kcg_comp_array__107651(
  array__107651 *kcg_c1,
  array__107651 *kcg_c2);
#endif /* kcg_comp_array__107651 */

#ifndef kcg_comp_array__107654
extern kcg_bool kcg_comp_array__107654(
  array__107654 *kcg_c1,
  array__107654 *kcg_c2);
#endif /* kcg_comp_array__107654 */

#ifndef kcg_comp_array__107665
extern kcg_bool kcg_comp_array__107665(
  array__107665 *kcg_c1,
  array__107665 *kcg_c2);
#endif /* kcg_comp_array__107665 */

#ifndef kcg_comp_array_real_100
extern kcg_bool kcg_comp_array_real_100(
  array_real_100 *kcg_c1,
  array_real_100 *kcg_c2);
#endif /* kcg_comp_array_real_100 */

#ifndef kcg_comp_array_real_100_14
extern kcg_bool kcg_comp_array_real_100_14(
  array_real_100_14 *kcg_c1,
  array_real_100_14 *kcg_c2);
#endif /* kcg_comp_array_real_100_14 */

#ifndef kcg_comp_array_real_14
extern kcg_bool kcg_comp_array_real_14(
  array_real_14 *kcg_c1,
  array_real_14 *kcg_c2);
#endif /* kcg_comp_array_real_14 */

#ifndef kcg_comp_array_int_13
extern kcg_bool kcg_comp_array_int_13(
  array_int_13 *kcg_c1,
  array_int_13 *kcg_c2);
#endif /* kcg_comp_array_int_13 */

#ifndef kcg_comp_array_int_221
extern kcg_bool kcg_comp_array_int_221(
  array_int_221 *kcg_c1,
  array_int_221 *kcg_c2);
#endif /* kcg_comp_array_int_221 */

#ifndef kcg_comp_array_int_6_221
extern kcg_bool kcg_comp_array_int_6_221(
  array_int_6_221 *kcg_c1,
  array_int_6_221 *kcg_c2);
#endif /* kcg_comp_array_int_6_221 */

#ifndef kcg_comp_array_real_3
extern kcg_bool kcg_comp_array_real_3(
  array_real_3 *kcg_c1,
  array_real_3 *kcg_c2);
#endif /* kcg_comp_array_real_3 */

#ifndef kcg_comp_array_real_2
extern kcg_bool kcg_comp_array_real_2(
  array_real_2 *kcg_c1,
  array_real_2 *kcg_c2);
#endif /* kcg_comp_array_real_2 */

#ifndef kcg_comp_array__107797
extern kcg_bool kcg_comp_array__107797(
  array__107797 *kcg_c1,
  array__107797 *kcg_c2);
#endif /* kcg_comp_array__107797 */

#ifndef kcg_comp_array_bool_14
extern kcg_bool kcg_comp_array_bool_14(
  array_bool_14 *kcg_c1,
  array_bool_14 *kcg_c2);
#endif /* kcg_comp_array_bool_14 */

#ifndef kcg_comp_array_int_65
extern kcg_bool kcg_comp_array_int_65(
  array_int_65 *kcg_c1,
  array_int_65 *kcg_c2);
#endif /* kcg_comp_array_int_65 */

#ifndef kcg_comp_array_int_67
extern kcg_bool kcg_comp_array_int_67(
  array_int_67 *kcg_c1,
  array_int_67 *kcg_c2);
#endif /* kcg_comp_array_int_67 */

#ifndef kcg_comp_array_int_129
extern kcg_bool kcg_comp_array_int_129(
  array_int_129 *kcg_c1,
  array_int_129 *kcg_c2);
#endif /* kcg_comp_array_int_129 */

#ifndef kcg_comp_array__108012
extern kcg_bool kcg_comp_array__108012(
  array__108012 *kcg_c1,
  array__108012 *kcg_c2);
#endif /* kcg_comp_array__108012 */

#ifndef kcg_comp_array__108020
extern kcg_bool kcg_comp_array__108020(
  array__108020 *kcg_c1,
  array__108020 *kcg_c2);
#endif /* kcg_comp_array__108020 */

#ifndef kcg_comp_array__108033
extern kcg_bool kcg_comp_array__108033(
  array__108033 *kcg_c1,
  array__108033 *kcg_c2);
#endif /* kcg_comp_array__108033 */

#ifndef kcg_comp_array_int_325
extern kcg_bool kcg_comp_array_int_325(
  array_int_325 *kcg_c1,
  array_int_325 *kcg_c2);
#endif /* kcg_comp_array_int_325 */

#ifndef kcg_comp_array_int_262
extern kcg_bool kcg_comp_array_int_262(
  array_int_262 *kcg_c1,
  array_int_262 *kcg_c2);
#endif /* kcg_comp_array_int_262 */

#ifndef kcg_comp_array__108221
extern kcg_bool kcg_comp_array__108221(
  array__108221 *kcg_c1,
  array__108221 *kcg_c2);
#endif /* kcg_comp_array__108221 */

#ifndef kcg_comp_array__108268
extern kcg_bool kcg_comp_array__108268(
  array__108268 *kcg_c1,
  array__108268 *kcg_c2);
#endif /* kcg_comp_array__108268 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_bool_4
extern kcg_bool kcg_comp_array_bool_4(
  array_bool_4 *kcg_c1,
  array_bool_4 *kcg_c2);
#endif /* kcg_comp_array_bool_4 */

#ifndef kcg_comp_array_bool_1
extern kcg_bool kcg_comp_array_bool_1(
  array_bool_1 *kcg_c1,
  array_bool_1 *kcg_c2);
#endif /* kcg_comp_array_bool_1 */

#ifndef kcg_comp_array_real_1
extern kcg_bool kcg_comp_array_real_1(
  array_real_1 *kcg_c1,
  array_real_1 *kcg_c2);
#endif /* kcg_comp_array_real_1 */

#ifndef kcg_comp_array__108310
extern kcg_bool kcg_comp_array__108310(
  array__108310 *kcg_c1,
  array__108310 *kcg_c2);
#endif /* kcg_comp_array__108310 */

#ifndef kcg_comp_array_real_100_1
extern kcg_bool kcg_comp_array_real_100_1(
  array_real_100_1 *kcg_c1,
  array_real_100_1 *kcg_c2);
#endif /* kcg_comp_array_real_100_1 */

#ifndef kcg_comp_array_real_100_13
extern kcg_bool kcg_comp_array_real_100_13(
  array_real_100_13 *kcg_c1,
  array_real_100_13 *kcg_c2);
#endif /* kcg_comp_array_real_100_13 */

#ifndef kcg_comp_array_real_13
extern kcg_bool kcg_comp_array_real_13(
  array_real_13 *kcg_c1,
  array_real_13 *kcg_c2);
#endif /* kcg_comp_array_real_13 */

#ifndef kcg_comp_array_real_8
extern kcg_bool kcg_comp_array_real_8(
  array_real_8 *kcg_c1,
  array_real_8 *kcg_c2);
#endif /* kcg_comp_array_real_8 */

#ifndef kcg_comp_array_real_100_8
extern kcg_bool kcg_comp_array_real_100_8(
  array_real_100_8 *kcg_c1,
  array_real_100_8 *kcg_c2);
#endif /* kcg_comp_array_real_100_8 */

#ifndef kcg_comp_array_real_100_6
extern kcg_bool kcg_comp_array_real_100_6(
  array_real_100_6 *kcg_c1,
  array_real_100_6 *kcg_c2);
#endif /* kcg_comp_array_real_100_6 */

#ifndef kcg_comp_array_real_6
extern kcg_bool kcg_comp_array_real_6(
  array_real_6 *kcg_c1,
  array_real_6 *kcg_c2);
#endif /* kcg_comp_array_real_6 */

#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */

#ifndef kcg_comp_array__108337
extern kcg_bool kcg_comp_array__108337(
  array__108337 *kcg_c1,
  array__108337 *kcg_c2);
#endif /* kcg_comp_array__108337 */

#ifndef kcg_comp_array__108340
extern kcg_bool kcg_comp_array__108340(
  array__108340 *kcg_c1,
  array__108340 *kcg_c2);
#endif /* kcg_comp_array__108340 */

#ifndef kcg_comp_array__108343
extern kcg_bool kcg_comp_array__108343(
  array__108343 *kcg_c1,
  array__108343 *kcg_c2);
#endif /* kcg_comp_array__108343 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array__108352
extern kcg_bool kcg_comp_array__108352(
  array__108352 *kcg_c1,
  array__108352 *kcg_c2);
#endif /* kcg_comp_array__108352 */

#ifndef kcg_comp_array__108355
extern kcg_bool kcg_comp_array__108355(
  array__108355 *kcg_c1,
  array__108355 *kcg_c2);
#endif /* kcg_comp_array__108355 */

#ifndef kcg_comp_array_int_42
extern kcg_bool kcg_comp_array_int_42(
  array_int_42 *kcg_c1,
  array_int_42 *kcg_c2);
#endif /* kcg_comp_array_int_42 */

#ifndef kcg_comp_array__108361
extern kcg_bool kcg_comp_array__108361(
  array__108361 *kcg_c1,
  array__108361 *kcg_c2);
#endif /* kcg_comp_array__108361 */

#ifndef kcg_comp_array_real_113
extern kcg_bool kcg_comp_array_real_113(
  array_real_113 *kcg_c1,
  array_real_113 *kcg_c2);
#endif /* kcg_comp_array_real_113 */

#ifndef kcg_comp_array_bool_113
extern kcg_bool kcg_comp_array_bool_113(
  array_bool_113 *kcg_c1,
  array_bool_113 *kcg_c2);
#endif /* kcg_comp_array_bool_113 */

#ifndef kcg_comp_array__112372
extern kcg_bool kcg_comp_array__112372(
  array__112372 *kcg_c1,
  array__112372 *kcg_c2);
#endif /* kcg_comp_array__112372 */

#ifndef kcg_comp_array__112812
extern kcg_bool kcg_comp_array__112812(
  array__112812 *kcg_c1,
  array__112812 *kcg_c2);
#endif /* kcg_comp_array__112812 */

#ifndef kcg_comp_array__113049
extern kcg_bool kcg_comp_array__113049(
  array__113049 *kcg_c1,
  array__113049 *kcg_c2);
#endif /* kcg_comp_array__113049 */

#ifndef kcg_comp_array__113146
extern kcg_bool kcg_comp_array__113146(
  array__113146 *kcg_c1,
  array__113146 *kcg_c2);
#endif /* kcg_comp_array__113146 */

#ifndef kcg_comp_array__113299
extern kcg_bool kcg_comp_array__113299(
  array__113299 *kcg_c1,
  array__113299 *kcg_c2);
#endif /* kcg_comp_array__113299 */

#ifndef kcg_comp_array__113303
extern kcg_bool kcg_comp_array__113303(
  array__113303 *kcg_c1,
  array__113303 *kcg_c2);
#endif /* kcg_comp_array__113303 */

#ifndef kcg_comp_array__113307
extern kcg_bool kcg_comp_array__113307(
  array__113307 *kcg_c1,
  array__113307 *kcg_c2);
#endif /* kcg_comp_array__113307 */

#ifndef kcg_comp_array__113310
extern kcg_bool kcg_comp_array__113310(
  array__113310 *kcg_c1,
  array__113310 *kcg_c2);
#endif /* kcg_comp_array__113310 */

#ifndef kcg_comp_array__113314
extern kcg_bool kcg_comp_array__113314(
  array__113314 *kcg_c1,
  array__113314 *kcg_c2);
#endif /* kcg_comp_array__113314 */

#ifndef kcg_comp_array__113317
extern kcg_bool kcg_comp_array__113317(
  array__113317 *kcg_c1,
  array__113317 *kcg_c2);
#endif /* kcg_comp_array__113317 */

#ifndef kcg_comp_array__113321
extern kcg_bool kcg_comp_array__113321(
  array__113321 *kcg_c1,
  array__113321 *kcg_c2);
#endif /* kcg_comp_array__113321 */

#define kcg_comp_Radio_TrainTrack_Header_T_TM_transitional kcg_comp_struct__105682

#define kcg_copy_Radio_TrainTrack_Header_T_TM_transitional kcg_copy_struct__105682

#define kcg_comp_Radio_TrainTrack_Message_T_TM_transitional kcg_comp_struct__105801

#define kcg_copy_Radio_TrainTrack_Message_T_TM_transitional kcg_copy_struct__105801

#define kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__106600

#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__106600

#define kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__106606

#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__106606

#define kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__106614

#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__106614

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__107006

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__107006

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__107001

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__107001

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__107009

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__107009

#define kcg_comp_DMI_Track_Description_int_array_T kcg_comp_array_int_325

#define kcg_copy_DMI_Track_Description_int_array_T kcg_copy_array_int_325

#define kcg_comp_DMI_gradientProfile_int_arrayT kcg_comp_array_int_129

#define kcg_copy_DMI_gradientProfile_int_arrayT kcg_copy_array_int_129

#define kcg_comp_DMI_trackCondition_int_array_T kcg_comp_array_int_65

#define kcg_copy_DMI_trackCondition_int_array_T kcg_copy_array_int_65

#define kcg_comp_AccuDistanceProfileMA_TA_MA kcg_comp_struct__107012

#define kcg_copy_AccuDistanceProfileMA_TA_MA kcg_copy_struct__107012

#define kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_comp_struct__105363

#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_copy_struct__105363

#define kcg_comp_trainData_Events_T_trainData_Types_pkg kcg_comp_struct__107097

#define kcg_copy_trainData_Events_T_trainData_Types_pkg kcg_copy_struct__107097

#define kcg_comp_trainData_Trigger_T_trainData_Types_pkg kcg_comp_struct__107106

#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg kcg_copy_struct__107106

#define kcg_comp_trainDataStatus_T_trainData_Types_pkg kcg_comp_struct__107114

#define kcg_copy_trainDataStatus_T_trainData_Types_pkg kcg_copy_struct__107114

#define kcg_comp_P003_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P003_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_TM_TrainToTrack kcg_comp_struct__105993

#define kcg_copy_P003_TM_TrainToTrack kcg_copy_struct__105993

#define kcg_comp_P009_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P009_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P009_TM_TrainToTrack kcg_comp_struct__106456

#define kcg_copy_P009_TM_TrainToTrack kcg_copy_struct__106456

#define kcg_comp_P011_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P011_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P011_ntc_list_array_T_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P011_voltage_section_array_T_TM_TrainToTrack kcg_comp_array_int_2

#define kcg_copy_P011_voltage_section_array_T_TM_TrainToTrack kcg_copy_array_int_2

#define kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack kcg_comp_array_int_2_4

#define kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack kcg_copy_array_int_2_4

#define kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P011_ntc_list_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P011_voltage_TM_TrainToTrack kcg_comp_struct__105565

#define kcg_copy_P011_voltage_TM_TrainToTrack kcg_copy_struct__105565

#define kcg_comp_P011_voltage_list_TM_TrainToTrack kcg_comp_array__105570

#define kcg_copy_P011_voltage_list_TM_TrainToTrack kcg_copy_array__105570

#define kcg_comp_P011_TM_TrainToTrack kcg_comp_struct__107151

#define kcg_copy_P011_TM_TrainToTrack kcg_copy_struct__107151

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P000_TM_TrainToTrack kcg_comp_struct__106463

#define kcg_copy_P000_TM_TrainToTrack kcg_copy_struct__106463

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TM_TrainToTrack kcg_comp_struct__106483

#define kcg_copy_P001_TM_TrainToTrack kcg_copy_struct__106483

#define kcg_comp_P044_other_data_TM_TrainToTrack kcg_comp_array_int_1

#define kcg_copy_P044_other_data_TM_TrainToTrack kcg_copy_array_int_1

#define kcg_comp_P044_TM_TrainToTrack kcg_comp_struct__107197

#define kcg_copy_P044_TM_TrainToTrack kcg_copy_struct__107197

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P005_TM_TrainToTrack kcg_comp_struct__107205

#define kcg_copy_P005_TM_TrainToTrack kcg_copy_struct__107205

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P004_TM_TrainToTrack kcg_comp_struct__107212

#define kcg_copy_P004_TM_TrainToTrack kcg_copy_struct__107212

#define kcg_comp_M_155_T_TM_radio_messages kcg_comp_struct__106004

#define kcg_copy_M_155_T_TM_radio_messages kcg_copy_struct__106004

#define kcg_comp_M_156_T_TM_radio_messages kcg_comp_struct__106004

#define kcg_copy_M_156_T_TM_radio_messages kcg_copy_struct__106004

#define kcg_comp_M_159_T_TM_radio_messages kcg_comp_struct__106004

#define kcg_copy_M_159_T_TM_radio_messages kcg_copy_struct__106004

#define kcg_comp_M_154_T_TM_radio_messages kcg_comp_struct__106004

#define kcg_copy_M_154_T_TM_radio_messages kcg_copy_struct__106004

#define kcg_comp_M_132_T_TM_radio_messages kcg_comp_struct__106504

#define kcg_copy_M_132_T_TM_radio_messages kcg_copy_struct__106504

#define kcg_comp_M_147_T_TM_radio_messages kcg_comp_struct__106590

#define kcg_copy_M_147_T_TM_radio_messages kcg_copy_struct__106590

#define kcg_comp_M_146_T_TM_radio_messages kcg_comp_struct__107142

#define kcg_copy_M_146_T_TM_radio_messages kcg_copy_struct__107142

#define kcg_comp_M_129_T_TM_radio_messages kcg_comp_struct__106004

#define kcg_copy_M_129_T_TM_radio_messages kcg_copy_struct__106004

#define kcg_comp_M_136_T_TM_radio_messages kcg_comp_struct__106004

#define kcg_copy_M_136_T_TM_radio_messages kcg_copy_struct__106004

#define kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_comp_array_int_50

#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_copy_array_int_50

#define kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_comp_struct__105373

#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_copy_struct__105373

#define kcg_comp_M_TrainTrack_Message_T_TM_radio_messages kcg_comp_struct__105384

#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages kcg_copy_struct__105384

#define kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_comp_array__106001

#define kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_copy_array__106001

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__105732

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__105732

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__105757

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__105757

#define kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg kcg_comp_struct__107244

#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg kcg_copy_struct__107244

#define kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_comp_struct__107248

#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_copy_struct__107248

#define kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_comp_struct__107224

#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_copy_struct__107224

#define kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg kcg_comp_array__107241

#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg kcg_copy_array__107241

#define kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg kcg_comp_struct__107235

#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg kcg_copy_struct__107235

#define kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg kcg_comp_struct__107219

#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg kcg_copy_struct__107219

#define kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg kcg_comp_struct__106082

#define kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg kcg_copy_struct__106082

#define kcg_comp_connection_ids_T_Handover_Pkg kcg_comp_struct__106062

#define kcg_copy_connection_ids_T_Handover_Pkg kcg_copy_struct__106062

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__106143

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__106143

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__106149

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__106149

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__106152

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__106152

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__106159

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__106159

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__106162

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__106162

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__106174

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__106174

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__106177

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__106177

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__106184

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__106184

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__106187

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__106187

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__106218

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__106218

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__106253

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__106253

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__106965

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__106965

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__106968

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__106968

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__106784

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__106784

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__106787

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__106787

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__106766

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__106766

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__106772

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__106772

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__106775

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__106775

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__106827

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__106827

#define kcg_comp_DMI_Level_Data_int_array_T_DATA kcg_comp_array_int_4

#define kcg_copy_DMI_Level_Data_int_array_T_DATA kcg_copy_array_int_4

#define kcg_comp_DMI_Icon_Ack_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Icon_Ack_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Train_Data_Ack_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Text_Message_Ack_int_array_T_DATA kcg_comp_array_int_4

#define kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA kcg_copy_array_int_4

#define kcg_comp_DMI_Radio_Net_Data_int_array_T_DATA kcg_comp_array_int_2

#define kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA kcg_copy_array_int_2

#define kcg_comp_DMI_Driver_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Driver_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Identifier_int_array_T_DATA kcg_comp_array_int_261

#define kcg_copy_DMI_Identifier_int_array_T_DATA kcg_copy_array_int_261

#define kcg_comp_DMI_Status_int_array_T_DATA kcg_comp_array_int_4

#define kcg_copy_DMI_Status_int_array_T_DATA kcg_copy_array_int_4

#define kcg_comp_DriverIdentifier_INT_T_DATA kcg_comp_array_int_9

#define kcg_copy_DriverIdentifier_INT_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Driver_Identifier_int_array_T_DATA kcg_comp_array_int_11

#define kcg_copy_DMI_Driver_Identifier_int_array_T_DATA kcg_copy_array_int_11

#define kcg_comp_DMI_Icons_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_Icons_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Adhesion_Factor_Data_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Train_Data_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_Train_Data_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Train_Running_Number_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Train_Running_Number_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_EVC_Radio_Net_Data_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA kcg_comp_array_int_67

#define kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA kcg_copy_array_int_67

#define kcg_comp_DMI_LevelList_int_array_T_DATA kcg_comp_array_int_65

#define kcg_copy_DMI_LevelList_int_array_T_DATA kcg_copy_array_int_65

#define kcg_comp_DMI_Display_Control_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Display_Control_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_System_Version_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_System_Version_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Identifier_Request_int_array_T_DATA kcg_comp_array_int_261

#define kcg_copy_DMI_Identifier_Request_int_array_T_DATA kcg_copy_array_int_261

#define kcg_comp_DMI_speedProfile_int_array_T_DATA kcg_comp_array_int_129

#define kcg_copy_DMI_speedProfile_int_array_T_DATA kcg_copy_array_int_129

#define kcg_comp_DMI_Text_Message_int_array_T_DATA kcg_comp_array_int_262

#define kcg_copy_DMI_Text_Message_int_array_T_DATA kcg_copy_array_int_262

#define kcg_comp_DMI_TEXT_INT_Array_T_DATA kcg_comp_array_int_255

#define kcg_copy_DMI_TEXT_INT_Array_T_DATA kcg_copy_array_int_255

#define kcg_comp_DMI_EVC_Coded_Train_Data_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_probesBalises_T_xdebugSupport_Pkg kcg_comp_struct__107306

#define kcg_copy_probesBalises_T_xdebugSupport_Pkg kcg_copy_struct__107306

#define kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg kcg_comp_struct__107313

#define kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg kcg_copy_struct__107313

#define kcg_comp_DMI_Entry_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Entry_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Menu_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Menu_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Dynamic_int_array_T_DATA kcg_comp_array_int_24

#define kcg_copy_DMI_Dynamic_int_array_T_DATA kcg_copy_array_int_24

#define kcg_comp_ModeDecisionTableType_DataDictionary_Pkg kcg_comp_array__107345

#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg kcg_copy_array__107345

#define kcg_comp_LevelDecisionTableType_DataDictionary_Pkg kcg_comp_array__107351

#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg kcg_copy_array__107351

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__107072

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__107072

#define kcg_comp_StaticSpeedSection_t_TrackAtlasTypes kcg_comp_struct__106626

#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes kcg_copy_struct__106626

#define kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes kcg_comp_array__106634

#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes kcg_copy_array__106634

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__106558

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__106558

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__106566

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__106566

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__107081

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__107081

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__106406

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__106406

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__106411

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__106411

#define kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__106403

#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__106403

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__106417

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__106417

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__106394

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__106394

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__106637

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__106637

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__106962

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__106962

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__107090

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__107090

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__106955

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__106955

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__106619

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__106619

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__105694

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__105694

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__105710

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__105710

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__105718

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__105718

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__105723

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__105723

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__105726

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__105726

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__105752

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__105752

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__105776

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__105776

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__105781

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__105781

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__105786

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__105786

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__105565

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__105565

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__105570

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__105570

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_5

#define kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__107425

#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__107425

#define kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__107488

#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__107488

#define kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__107124

#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__107124

#define kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__107178

#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__107178

#define kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_comp_array_char_9

#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_copy_array_char_9

#define kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__107497

#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__107497

#define kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_comp_array_int_311

#define kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_copy_array_int_311

#define kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_comp_struct__107528

#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_copy_struct__107528

#define kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_comp_array_int_999

#define kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_copy_array_int_999

#define kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_comp_struct__108131

#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_copy_struct__108131

#define kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg kcg_comp_struct__107230

#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg kcg_copy_struct__107230

#define kcg_comp_BG_Message_T_BG_Types_Pkg kcg_comp_struct__107379

#define kcg_copy_BG_Message_T_BG_Types_Pkg kcg_copy_struct__107379

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__105434

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__105434

#define kcg_comp_Telegram_T_BG_Types_Pkg kcg_comp_struct__107369

#define kcg_copy_Telegram_T_BG_Types_Pkg kcg_copy_struct__107369

#define kcg_comp_TelegramArray_T_BG_Types_Pkg kcg_comp_array__107376

#define kcg_copy_TelegramArray_T_BG_Types_Pkg kcg_copy_array__107376

#define kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg kcg_comp_struct__105476

#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg kcg_copy_struct__105476

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__106029

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__106029

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__105814

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__105814

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__106032

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__106032

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__106015

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__106015

#define kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal kcg_comp_array__107191

#define kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal kcg_copy_array__107191

#define kcg_comp_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_comp_array__106001

#define kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_copy_array__106001

#define kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__106366

#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__106366

#define kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck kcg_comp_struct__106381

#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck kcg_copy_struct__106381

#define kcg_comp_positionErrors_T_TrainPosition_Types_Pck kcg_comp_struct__106369

#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck kcg_copy_struct__106369

#define kcg_comp_positionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__106059

#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__106059

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__106107

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__106107

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__106038

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__106038

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__106047

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__106047

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__106117

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__106117

#define kcg_comp_morc_configData_T_RCM_Session_Types_Pkg kcg_comp_struct__105973

#define kcg_copy_morc_configData_T_RCM_Session_Types_Pkg kcg_copy_struct__105973

#define kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg kcg_comp_struct__105885

#define kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg kcg_copy_struct__105885

#define kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg kcg_comp_struct__105890

#define kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg kcg_copy_struct__105890

#define kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg kcg_comp_struct__105939

#define kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg kcg_copy_struct__105939

#define kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg kcg_comp_struct__105931

#define kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg kcg_copy_struct__105931

#define kcg_comp_morcStatus_T_RCM_Session_Types_Pkg kcg_comp_struct__105987

#define kcg_copy_morcStatus_T_RCM_Session_Types_Pkg kcg_copy_struct__105987

#define kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage kcg_comp_array_bool_256_46

#define kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage kcg_copy_array_bool_256_46

#define kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg kcg_comp_struct__105958

#define kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg kcg_copy_struct__105958

#define kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg kcg_comp_struct__105914

#define kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg kcg_copy_struct__105914

#define kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg kcg_comp_struct__105921

#define kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg kcg_copy_struct__105921

#define kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg kcg_comp_struct__105965

#define kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg kcg_copy_struct__105965

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__106095

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__106095

#define kcg_comp_Array09_TM kcg_comp_array_int_9

#define kcg_copy_Array09_TM kcg_copy_array_int_9

#define kcg_comp_P131_OBU_T_TM kcg_comp_struct__106071

#define kcg_copy_P131_OBU_T_TM kcg_copy_struct__106071

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__106314

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__106314

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__106311

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__106311

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__106300

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__106300

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__106143

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__106143

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__106149

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__106149

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__106152

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__106152

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__106159

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__106159

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__106162

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__106162

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__106174

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__106174

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__106177

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__106177

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__106184

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__106184

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__106253

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__106253

#define kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg kcg_comp_struct__105608

#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg kcg_copy_struct__105608

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__106965

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__106965

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__107017

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__107017

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_Array08_TM kcg_comp_array_int_8

#define kcg_copy_Array08_TM kcg_copy_array_int_8

#define kcg_comp_P058_OBU_T_TM kcg_comp_struct__107283

#define kcg_copy_P058_OBU_T_TM kcg_copy_struct__107283

#define kcg_comp_P058_OBU_sectionlist_enum_T_TM kcg_comp_array__107280

#define kcg_copy_P058_OBU_sectionlist_enum_T_TM kcg_copy_array__107280

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107969

#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107969

#define kcg_comp_P058_section_enum_T_TM kcg_comp_struct__107274

#define kcg_copy_P058_section_enum_T_TM kcg_copy_struct__107274

#define kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107909

#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107909

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct__106714

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct__106714

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct__106640

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct__106640

#define kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107987

#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107987

#define kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107915

#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107915

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct__106752

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct__106752

#define kcg_comp_P012_OBU_T_TM kcg_comp_struct__106900

#define kcg_copy_P012_OBU_T_TM kcg_copy_struct__106900

#define kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107993

#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107993

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107999

#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107999

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct__106519

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct__106519

#define kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__108041

#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__108041

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__108055

#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__108055

#define kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107945

#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107945

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__107903

#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__107903

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__106579

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__106579

#define kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__108099

#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__108099

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__106576

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__106576

#define kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__108105

#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__108105

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__107136

#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__107136

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__106569

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__106569

#define kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__107475

#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__107475

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__106859

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__106859

#define kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__107503

#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__107503

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__106856

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__106856

#define kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__107508

#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__107508

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__107482

#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__107482

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__106849

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__106849

#define kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__107411

#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__107411

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__107518

#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__107518

#define kcg_comp_P046_OBU_T_TM kcg_comp_struct__106887

#define kcg_copy_P046_OBU_T_TM kcg_copy_struct__106887

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__106884

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__106884

#define kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg kcg_comp_struct__107438

#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg kcg_copy_struct__107438

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg kcg_comp_struct__107462

#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg kcg_copy_struct__107462

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__106878

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__106878

#define kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg kcg_comp_struct__107468

#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg kcg_copy_struct__107468

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__106530

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__106530

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__106527

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__106527

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__106519

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__106519

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_comp_struct__107448

#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_copy_struct__107448

#define kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_comp_array__107459

#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_copy_array__107459

#define kcg_comp_DMI_level_array_T_DMI_Types_Pkg kcg_comp_array__105355

#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg kcg_copy_array__105355

#define kcg_comp_DMI_LevelList_T_DMI_Types_Pkg kcg_comp_struct__105358

#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg kcg_copy_struct__105358

#define kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_comp_struct__108028

#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_copy_struct__108028

#define kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_comp_array__108033

#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_copy_array__108033

#define kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg kcg_comp_struct__108036

#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg kcg_copy_struct__108036

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct__106955

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct__106955

#define kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_comp_array__108020

#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_copy_array__108020

#define kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg kcg_comp_struct__108023

#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg kcg_copy_struct__108023

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct__106619

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct__106619

#define kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_comp_array__108012

#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_copy_array__108012

#define kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg kcg_comp_struct__108015

#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg kcg_copy_struct__108015

#define kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg kcg_comp_struct__105426

#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg kcg_copy_struct__105426

#define kcg_comp_API_TelegramHeader_T_API_Msg_Pkg kcg_comp_struct__105481

#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg kcg_copy_struct__105481

#define kcg_comp_API_TrackSideInput_T_API_Msg_Pkg kcg_comp_struct__105508

#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg kcg_copy_struct__105508

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct__107921

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct__107921

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct__107921

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct__107921

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct__107921

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct__107921

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct__107921

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct__107921

#define kcg_comp_DMI_train_length_T_DMI_Types_Pkg kcg_comp_struct__107928

#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg kcg_copy_struct__107928

#define kcg_comp_DMI_train_id_T_DMI_Types_Pkg kcg_comp_struct__107936

#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg kcg_copy_struct__107936

#define kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__107405

#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__107405

#define kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__107394

#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__107394

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__106435

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__106435

#define kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg kcg_comp_struct__108066

#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg kcg_copy_struct__108066

#define kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_comp_struct__107957

#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_copy_struct__107957

#define kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg kcg_comp_struct__107963

#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg kcg_copy_struct__107963

#define kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_comp_struct__107854

#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_copy_struct__107854

#define kcg_comp_DMI_level_T_DMI_Types_Pkg kcg_comp_struct__105350

#define kcg_copy_DMI_level_T_DMI_Types_Pkg kcg_copy_struct__105350

#define kcg_comp_DMI_TEXT_DMI_Types_Pkg kcg_comp_array_char_255

#define kcg_copy_DMI_TEXT_DMI_Types_Pkg kcg_copy_array_char_255

#define kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg kcg_comp_struct__107544

#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg kcg_copy_struct__107544

#define kcg_comp_ACC_SDM_GradientAcceleration_Pkg kcg_comp_struct__107657

#define kcg_copy_ACC_SDM_GradientAcceleration_Pkg kcg_copy_struct__107657

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__105447

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__105447

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__105454

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__105454

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__105460

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__105460

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__105470

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__105470

#define kcg_comp_a_Brake_t_SDMConversionModelPkg kcg_comp_struct__107697

#define kcg_copy_a_Brake_t_SDMConversionModelPkg kcg_copy_struct__107697

#define kcg_comp_v_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_v_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_a_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_a_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_av_MergedMap_t_SDMConversionModelPkg kcg_comp_struct__107705

#define kcg_copy_av_MergedMap_t_SDMConversionModelPkg kcg_copy_struct__107705

#define kcg_comp_v_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_a_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_av_Map_t_SDMConversionModelPkg kcg_comp_struct__107692

#define kcg_copy_av_Map_t_SDMConversionModelPkg kcg_copy_struct__107692

#define kcg_comp_v_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_v_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_m_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_m_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_mv_Map_t_SDMConversionModelPkg kcg_comp_struct__107716

#define kcg_copy_mv_Map_t_SDMConversionModelPkg kcg_copy_struct__107716

#define kcg_comp_LKrIntLookUp_t_SDMConversionModelPkg kcg_comp_array_int_32

#define kcg_copy_LKrIntLookUp_t_SDMConversionModelPkg kcg_copy_array_int_32

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_copy_array_real_3

#define kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg kcg_comp_struct__108163

#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg kcg_copy_struct__108163

#define kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_comp_struct__106929

#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_copy_struct__106929

#define kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__108224

#define kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__108224

#define kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_comp_array__108221

#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_copy_array__108221

#define kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_comp_struct__108168

#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_copy_struct__108168

#define kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg kcg_comp_struct__108176

#define kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg kcg_copy_struct__108176

#define kcg_comp_t_BrakeVt_t_SDMModelPkg kcg_comp_array_real_2

#define kcg_copy_t_BrakeVt_t_SDMModelPkg kcg_copy_array_real_2

#define kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg kcg_comp_struct__108183

#define kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg kcg_copy_struct__108183

#define kcg_comp_t_Brake_t_SDMModelPkg kcg_comp_struct__107727

#define kcg_copy_t_Brake_t_SDMModelPkg kcg_copy_struct__107727

#define kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__108231

#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__108231

#define kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_comp_struct__108188

#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_copy_struct__108188

#define kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_comp_struct__108197

#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_copy_struct__108197

#define kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__108248

#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__108248

#define kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_comp_struct__108206

#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_copy_struct__108206

#define kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_comp_array__108268

#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_copy_array__108268

#define kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg kcg_comp_struct__108279

#define kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg kcg_copy_struct__108279

#define kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_comp_struct__108271

#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_copy_struct__108271

#define kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_comp_struct__108260

#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_copy_struct__108260

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_real_3

#define kcg_comp_TargetIteratorAkku_TargetLimits_Pkg kcg_comp_struct__107761

#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg kcg_copy_struct__107761

#define kcg_comp_bec_t_TargetLimits_Pkg kcg_comp_struct__107748

#define kcg_copy_bec_t_TargetLimits_Pkg kcg_copy_struct__107748

#define kcg_comp_T_trac_t_TargetLimits_Pkg kcg_comp_struct__107732

#define kcg_copy_T_trac_t_TargetLimits_Pkg kcg_copy_struct__107732

#define kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_comp_struct__106938

#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_copy_struct__106938

#define kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg kcg_comp_struct__107335

#define kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg kcg_copy_struct__107335

#define kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_comp_struct__107417

#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_copy_struct__107417

#define kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_comp_struct__107431

#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_copy_struct__107431

#define kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg kcg_comp_struct__107841

#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg kcg_copy_struct__107841

#define kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg kcg_comp_struct__108158

#define kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg kcg_copy_struct__108158

#define kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg kcg_comp_struct__108151

#define kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg kcg_copy_struct__108151

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__106448

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__106448

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct__105523

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct__105523

#define kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_comp_array__107612

#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_copy_array__107612

#define kcg_comp_CurveCollection_T_CalcBrakingCurves_types kcg_comp_struct__107615

#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types kcg_copy_struct__107615

#define kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_comp_array_bool_114

#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_copy_array_bool_114

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__105523

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__105523

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__105523

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__105523

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_comp_struct__105528

#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_copy_struct__105528

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_comp_struct__105534

#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_copy_struct__105534

#define kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types kcg_comp_struct__107605

#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types kcg_copy_struct__107605

#define kcg_comp_ParabolaArc_T_CalcBrakingCurves_types kcg_comp_struct__107742

#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types kcg_copy_struct__107742

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_ASafe_Data_T_CalcBrakingCurves_types kcg_comp_array_real_100_14

#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types kcg_copy_array_real_100_14

#define kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_14

#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_14

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg kcg_comp_struct__105540

#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg kcg_copy_struct__105540

#define kcg_comp_ASafe_T_CalcBrakingCurves_types kcg_comp_struct__107686

#define kcg_copy_ASafe_T_CalcBrakingCurves_types kcg_copy_struct__107686

#define kcg_comp_Brake_status_T_TIU_Types_Pkg kcg_comp_struct__105545

#define kcg_copy_Brake_status_T_TIU_Types_Pkg kcg_copy_struct__105545

#define kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_comp_struct__105554

#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_copy_struct__105554

#define kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_comp_struct__105594

#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_copy_struct__105594

#define kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_comp_struct__107846

#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_copy_struct__107846

#define kcg_comp_A_gradient_t_SDM_GradientAcceleration_types kcg_comp_array__107665

#define kcg_copy_A_gradient_t_SDM_GradientAcceleration_types kcg_copy_array__107665

#define kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types kcg_comp_struct__107639

#define kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types kcg_copy_struct__107639

#define kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types kcg_comp_array__107654

#define kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types kcg_copy_array__107654

#define kcg_comp_trainData_T_TIU_Types_Pkg kcg_comp_struct__105576

#define kcg_copy_trainData_T_TIU_Types_Pkg kcg_copy_struct__105576

#define kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types kcg_comp_array__107651

#define kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types kcg_copy_array__107651

#define kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types kcg_comp_struct__107645

#define kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types kcg_copy_struct__107645

#define kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg kcg_comp_struct__107184

#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg kcg_copy_struct__107184

#define kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg kcg_comp_struct__108215

#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg kcg_copy_struct__108215

#define kcg_comp_M_current_T_TIU_Types_Pkg kcg_comp_struct__105614

#define kcg_copy_M_current_T_TIU_Types_Pkg kcg_copy_struct__105614

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct__105523

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct__105523

#define kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_comp_struct__105619

#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_copy_struct__105619

#define kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg kcg_comp_struct__105625

#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg kcg_copy_struct__105625

#define kcg_comp_MRSP_internal_T_TargetManagement_types kcg_comp_array__107797

#define kcg_copy_MRSP_internal_T_TargetManagement_types kcg_copy_array__107797

#define kcg_comp_MA_section_real_T_TargetManagement_types kcg_comp_struct__107778

#define kcg_copy_MA_section_real_T_TargetManagement_types kcg_copy_struct__107778

#define kcg_comp_EOA_real_T_TargetManagement_types kcg_comp_struct__107773

#define kcg_copy_EOA_real_T_TargetManagement_types kcg_copy_struct__107773

#define kcg_comp_MRSP_internal_section_T_TargetManagement_types kcg_comp_struct__107791

#define kcg_copy_MRSP_internal_section_T_TargetManagement_types kcg_copy_struct__107791

#define kcg_comp_Target_real_T_TargetManagement_types kcg_comp_struct__107623

#define kcg_copy_Target_real_T_TargetManagement_types kcg_copy_struct__107623

#define kcg_comp_Target_list_MRSP_real_T_TargetManagement_types kcg_comp_array__107629

#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types kcg_copy_array__107629

#define kcg_comp_M_voltage_T_TIU_Types_Pkg kcg_comp_struct__105630

#define kcg_copy_M_voltage_T_TIU_Types_Pkg kcg_copy_struct__105630

#define kcg_comp_TargetCollection_T_TargetManagement_types kcg_comp_struct__107632

#define kcg_copy_TargetCollection_T_TargetManagement_types kcg_copy_struct__107632

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct__105523

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct__105523

#define kcg_comp_Target_T_TargetManagement_types kcg_comp_struct__107565

#define kcg_copy_Target_T_TargetManagement_types kcg_copy_struct__107565

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct__105523

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct__105523

#define kcg_comp_Change_traction_system_T_TIU_Types_Pkg kcg_comp_struct__105635

#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg kcg_copy_struct__105635

#define kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg kcg_comp_struct__105641

#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg kcg_copy_struct__105641

#define kcg_comp_TrainLocations_real_T_SDM_Types_Pkg kcg_comp_struct__107668

#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg kcg_copy_struct__107668

#define kcg_comp_SDM_Commands_T_SDM_Types_Pkg kcg_comp_struct__107572

#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg kcg_copy_struct__107572

#define kcg_comp_trainData_internal_t_SDM_Types_Pkg kcg_comp_struct__107753

#define kcg_copy_trainData_internal_t_SDM_Types_Pkg kcg_copy_struct__107753

#define kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg kcg_comp_struct__105649

#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg kcg_copy_struct__105649

#define kcg_comp_SDM_Locations_T_SDM_Types_Pkg kcg_comp_struct__107800

#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg kcg_copy_struct__107800

#define kcg_comp_Speeds_T_SDM_Types_Pkg kcg_comp_struct__107823

#define kcg_copy_Speeds_T_SDM_Types_Pkg kcg_copy_struct__107823

#define kcg_comp_msgToTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct__105801

#define kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct__105801

#define kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg kcg_comp_struct__105807

#define kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg kcg_copy_struct__105807

#define kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_comp_struct__105864

#define kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_copy_struct__105864

#define kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg kcg_comp_struct__105877

#define kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg kcg_copy_struct__105877

#define kcg_comp_Brake_command_T_TIU_Types_Pkg kcg_comp_struct__105656

#define kcg_copy_Brake_command_T_TIU_Types_Pkg kcg_copy_struct__105656

#define kcg_comp_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct__105832

#define kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct__105832

#define kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_comp_struct__105871

#define kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_copy_struct__105871

#define kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg kcg_comp_struct__105842

#define kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg kcg_copy_struct__105842

#define kcg_comp_Isolation_Status_T_TIU_Types_Pkg kcg_comp_struct__105662

#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg kcg_copy_struct__105662

#define kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_comp_struct__105667

#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_copy_struct__105667

#define kcg_comp_TIU_Input_msg_API_TIU_Pkg kcg_comp_struct__105603

#define kcg_copy_TIU_Input_msg_API_TIU_Pkg kcg_copy_struct__105603

#define kcg_comp_TIU_Output_msg_API_TIU_Pkg kcg_comp_struct__105677

#define kcg_copy_TIU_Output_msg_API_TIU_Pkg kcg_copy_struct__105677

#define kcg_comp_mobileHWStatus_Type_MoRC_Pck kcg_comp_struct__105343

#define kcg_copy_mobileHWStatus_Type_MoRC_Pck kcg_copy_struct__105343

#define kcg_comp_radioNetWorkIDs_T_MoRC_Pck kcg_comp_struct__106137

#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck kcg_copy_struct__106137

#define kcg_comp_MyArray_SDM_Commands_Pkg kcg_comp_array_bool_14

#define kcg_copy_MyArray_SDM_Commands_Pkg kcg_copy_array_bool_14

#define kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg kcg_comp_struct__107867

#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg kcg_copy_struct__107867

#define kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg kcg_comp_struct__107887

#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg kcg_copy_struct__107887

#define kcg_comp_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__106071

#define kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__106071

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__106440

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__106440

#define kcg_comp_IterPacket58_T_Packet_Types_Pkg kcg_comp_struct__107253

#define kcg_copy_IterPacket58_T_Packet_Types_Pkg kcg_copy_struct__107253

#define kcg_comp_IterPacket58List_T_Packet_Types_Pkg kcg_comp_array__107258

#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg kcg_copy_array__107258

#define kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_comp_struct__107261

#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_copy_struct__107261

#define kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg kcg_comp_struct__106691

#define kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg kcg_copy_struct__106691

#define kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg kcg_comp_array__106699

#define kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg kcg_copy_array__106699

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__106702

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__106702

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__106711

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__106711

#define kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__106722

#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__106722

#define kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__106749

#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__106749

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct__106752

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct__106752

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct__106714

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct__106714

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__106760

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__106760

#define kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__106645

#define kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__106645

#define kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_array__106350

#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_array__106350

#define kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__106673

#define kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__106673

#define kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__106344

#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__106344

#define kcg_comp_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_comp_struct__106640

#define kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_copy_struct__106640

#define kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__106353

#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__106353

#define kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg kcg_comp_struct__106676

#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg kcg_copy_struct__106676

#define kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg kcg_comp_array__106688

#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg kcg_copy_array__106688

#define kcg_comp_SSP_T_Packet_Types_Pkg kcg_comp_struct__106805

#define kcg_copy_SSP_T_Packet_Types_Pkg kcg_copy_struct__106805

#define kcg_comp_SSPArray_T_Packet_Types_Pkg kcg_comp_array__106813

#define kcg_copy_SSPArray_T_Packet_Types_Pkg kcg_copy_array__106813

#define kcg_comp_Diff_T_Packet_Types_Pkg kcg_comp_struct__106794

#define kcg_copy_Diff_T_Packet_Types_Pkg kcg_copy_struct__106794

#define kcg_comp_DiffArray_T_Packet_Types_Pkg kcg_comp_array__106802

#define kcg_copy_DiffArray_T_Packet_Types_Pkg kcg_copy_array__106802

#define kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_comp_struct__106816

#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_copy_struct__106816

#define kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__106868

#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__106868

#define kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_comp_array__106875

#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_copy_array__106875

#define kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__106836

#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__106836

#define kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_comp_array__106846

#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_copy_array__106846

#define kcg_comp_nvkrint_T_Packet_Types_Pkg kcg_comp_struct__106223

#define kcg_copy_nvkrint_T_Packet_Types_Pkg kcg_copy_struct__106223

#define kcg_comp_nvkrintArray_T_Packet_Types_Pkg kcg_comp_array__106229

#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg kcg_copy_array__106229

#define kcg_comp_nvkvint_T_Packet_Types_Pkg kcg_comp_struct__106232

#define kcg_copy_nvkvint_T_Packet_Types_Pkg kcg_copy_struct__106232

#define kcg_comp_nvkvintArray_T_Packet_Types_Pkg kcg_comp_array__106239

#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg kcg_copy_array__106239

#define kcg_comp_nvkvintset_T_Packet_Types_Pkg kcg_comp_struct__106242

#define kcg_copy_nvkvintset_T_Packet_Types_Pkg kcg_copy_struct__106242

#define kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg kcg_comp_array__106250

#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg kcg_copy_array__106250

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct__106253

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct__106253

#define kcg_comp_nidCArray_T_Packet_Types_Pkg kcg_comp_array__106258

#define kcg_copy_nidCArray_T_Packet_Types_Pkg kcg_copy_array__106258

#define kcg_comp_P3_NationalValues_T_Packet_Types_Pkg kcg_comp_struct__106261

#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg kcg_copy_struct__106261

#define kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_comp_struct__105952

#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_copy_struct__105952

#define kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg kcg_comp_struct__105854

#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg kcg_copy_struct__105854

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__105801

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__105801

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__105682

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__105682

#define kcg_comp_RadioMessage_T_Radio_Types_Pkg kcg_comp_struct__107360

#define kcg_copy_RadioMessage_T_Radio_Types_Pkg kcg_copy_struct__107360

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__105389

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__105389

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__105791

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__105791

#define kcg_comp_MSG_Errors_T_Common_Types_Pkg kcg_comp_struct__107294

#define kcg_copy_MSG_Errors_T_Common_Types_Pkg kcg_copy_struct__107294

#define kcg_comp_filterRelatedEvents_T_Common_Types_Pkg kcg_comp_struct__107324

#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg kcg_copy_struct__107324

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__105832

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__105832

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__105407

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__105407

#define kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg kcg_comp_struct__107386

#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg kcg_copy_struct__107386

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__105492

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__105492

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__105500

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__105500

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__105503

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__105503

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__105419

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__105419

#define kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__106329

#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__106329

#define kcg_comp_radioManagementMessage_T_Common_Types_Pkg kcg_comp_struct__107894

#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg kcg_copy_struct__107894

#define kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__106335

#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__106335

#define kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_comp_struct__106361

#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_copy_struct__106361

#define kcg_comp_Driver2MAR_T_TA_MA_Request kcg_comp_struct__106435

#define kcg_copy_Driver2MAR_T_TA_MA_Request kcg_copy_struct__106435

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-09T13:58:52
*************************************************************$ */

