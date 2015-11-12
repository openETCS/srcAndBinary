/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:55
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
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condit = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_cond = 3
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
  M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_ = 7,
  M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on = 8,
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_sectio = 9,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_fo = 10
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
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceed = 1
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
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
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
/* API_RadioCommunication_Pkg::cmdRadioUnit_T */
typedef enum {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
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
  _40_SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_SM1,
  SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_SM1
} _41_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum {
  SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1,
  SSM_st_FS_Mode_SM1
} _39_SSM_ST_SM1;
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
  _37_SSM_TR_no_trans_SM1,
  SSM_TR_NP_1_SM1,
  SSM_TR_Awakness_of_Train_1_SM1,
  SSM_TR_Awakness_of_Train_2_SM1,
  SSM_TR_Awakness_of_Train_3_SM1
} _38_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
  SSM_st_SoM_NTC_SN_SM1
} _36_SSM_ST_SM1;
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
  SSM_TR_Switch_Autorized_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat,
  SSM_TR_Switch_Autorized_Waiting_Ack_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat,
  SSM_TR_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Ack_Not_Received_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location
} SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum {
  SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio,
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
  _34_SSM_TR_no_trans_SM1,
  SSM_TR_BeforeChange_1_SM1,
  SSM_TR_State2_1_SM1
} _35_SSM_TR_SM1;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum { SSM_st_BeforeChange_SM1, SSM_st_State2_SM1 } _33_SSM_ST_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum {
  _31_SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_1_SM1,
  SSM_TR_LaunchRequest_1_SM1,
  SSM_TR_LaunchRequest_2_SM1,
  SSM_TR_AckReceived_1_SM1
} _32_SSM_TR_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum {
  SSM_st_Waiting_SM1,
  SSM_st_LaunchRequest_SM1,
  SSM_st_AckReceived_SM1
} _30_SSM_ST_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  _28_SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} _29_SSM_TR_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} _27_SSM_ST_SM1;
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
  _25_SSM_TR_no_trans_SM1,
  _24_SSM_TR_idle_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_2_SM1,
  SSM_TR_waitForSystemVersion_1_SM1,
  SSM_TR_waitForSystemVersion_2_SM1,
  SSM_TR_waitForSystemVersion_3_SM1,
  _23_SSM_TR_sessionEstablished_1_SM1
} _26_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum {
  _21_SSM_st_idle_SM1,
  SSM_st_waitForSafeRadioConnectionSetUp_SM1,
  SSM_st_waitForSystemVersion_SM1,
  _20_SSM_st_sessionEstablished_SM1
} _22_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum {
  _18_SSM_TR_no_trans_SM1,
  _17_SSM_TR_idle_1_SM1,
  SSM_TR_sessionEstablished_1_SM1
} _19_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum {
  _15_SSM_st_idle_SM1,
  SSM_st_sessionEstablished_SM1
} _16_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum {
  _13_SSM_TR_no_trans_SM1,
  _12_SSM_TR_idle_1_SM1,
  SSM_TR_idle_2_SM1,
  SSM_TR_establishingByOBU_1_SM1,
  SSM_TR_establishingByRBC_1_SM1
} _14_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum {
  _10_SSM_st_idle_SM1,
  SSM_st_establishingByOBU_SM1,
  SSM_st_establishingByRBC_SM1
} _11_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum {
  _8_SSM_TR_no_trans_SM1,
  SSM_TR_idle_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_2_SM1,
  SSM_TR_terminated_1_SM1
} _9_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum {
  SSM_st_idle_SM1,
  SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_st_terminated_SM1
} _7_SSM_ST_SM1;
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
  _5_SSM_TR_no_trans_SM1,
  SSM_TR_mobile_1_1_SM1,
  SSM_TR_mobile_2_1_SM1
} _6_SSM_TR_SM1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum { SSM_st_mobile_1_SM1, SSM_st_mobile_2_SM1 } _4_SSM_ST_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum {
  _2_SSM_TR_no_trans_SM1,
  SSM_TR_notRequested_1_SM1,
  SSM_TR_notRequested_2_SM1,
  SSM_TR_requested_1_SM1
} _3_SSM_TR_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum { SSM_st_notRequested_SM1, SSM_st_requested_SM1 } _1_SSM_ST_SM1;
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
  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE,
  SSM_TR_START_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SES,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS
} SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA,
  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS
} SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum {
  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_,
  SSM_TR_START_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_AWAIT_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSIO,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_
} SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN,
  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A,
  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS,
  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A
} SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_Reset_1_SM1,
  SSM_TR_Driving_1_SM1
} SSM_TR_SM1;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum { SSM_st_Reset_SM1, SSM_st_Driving_SM1 } SSM_ST_SM1;
/* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
typedef enum {
  SSM_TR_no_trans_GSM_R_MobileManagement,
  SSM_TR_Not_registered_1_GSM_R_MobileManagement,
  SSM_TR_Registering_1_GSM_R_MobileManagement,
  SSM_TR_Registering_2_GSM_R_MobileManagement,
  SSM_TR_Registered_1_GSM_R_MobileManagement,
  SSM_TR_Registered_2_GSM_R_MobileManagement,
  SSM_TR_Connecting_1_GSM_R_MobileManagement,
  SSM_TR_Connecting_2_GSM_R_MobileManagement,
  SSM_TR_Connected_1_GSM_R_MobileManagement,
  SSM_TR_Connected_2_GSM_R_MobileManagement
} SSM_TR_GSM_R_MobileManagement;
/* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
typedef enum {
  SSM_st_Not_registered_GSM_R_MobileManagement,
  SSM_st_Registering_GSM_R_MobileManagement,
  SSM_st_Registered_GSM_R_MobileManagement,
  SSM_st_Connecting_GSM_R_MobileManagement,
  SSM_st_Connected_GSM_R_MobileManagement
} SSM_ST_GSM_R_MobileManagement;
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

/* NID_MN */
typedef kcg_int NID_MN;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* NID_C */
typedef kcg_int NID_C;

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

/* Toolbox::OdometrySpeed_T */
typedef kcg_int OdometrySpeed_T_Toolbox;

typedef struct {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} struct__127225;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct__127225 mobileHWStatus_Type_MoRC_Pck;

typedef struct { M_LEVEL level; NID_STM_DMI_Types_Pkg nid_stm; } struct__127232;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct__127232 DMI_level_T_DMI_Types_Pkg;

typedef DMI_level_T_DMI_Types_Pkg array__127237[32];

/* DMI_Types_Pkg::DMI_level_array_T */
typedef array__127237 DMI_level_array_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} struct__127240;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct__127240 DMI_LevelList_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} struct__127245;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct__127245 ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

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
} struct__127252;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__127252 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrackTrain_Header_T */
typedef struct__127252 Radio_TrackTrain_Header_T_TM_transitional;

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
} struct__127270;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__127270 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__127282;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__127282 RBC_Id_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} struct__127289;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct__127289 API_RadioMsgHeader_T_API_Msg_Pkg;

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
} struct__127297;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__127297 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  kcg_int v_safeNominal;
  kcg_int v_rawNominal;
  kcg_int v_lower;
  kcg_int v_upper;
} struct__127310;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__127310 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int o_nominal;
  kcg_int o_min;
  kcg_int o_max;
} struct__127317;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__127317 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  struct__127317 odo;
  struct__127310 speed;
  kcg_int acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__127323;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__127323 odometry_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int nominal;
  kcg_int d_min;
  kcg_int d_max;
} struct__127333;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__127333 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} struct__127339;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct__127339 centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__127344;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct__127344 API_TelegramHeader_T_API_Msg_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  kcg_int nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__127355;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__127355 MetadataElement_T_Common_Types_Pkg;

typedef struct__127355 array__127363[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__127363 Metadata_T_Common_Types_Pkg;

typedef struct {
  array__127363 PacketHeaders;
  array_int_500 PacketData;
} struct__127366;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__127366 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__127371;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct__127371 API_TrackSideInput_T_API_Msg_Pkg;

typedef struct {
  kcg_bool reset;
  kcg_real targetSpeed;
  kcg_real traction;
  kcg_real brake;
  kcg_real initialPosition;
  kcg_real initialVelocity;
  kcg_int mode;
  kcg_int level;
  kcg_int mobileHWStatus;
  kcg_bool openDesk;
} struct__127380;

/* EnvSim::GUI_to_EVC */
typedef struct__127380 GUI_to_EVC_EnvSim;

typedef struct {
  kcg_bool emergencyBrake;
  kcg_bool serviceBrake;
  kcg_bool tractionCutOff;
  kcg_int currentPositionInCm;
  kcg_real currentPositionInM;
  kcg_real currentVelocityInKmH;
  kcg_bool afbActive;
  kcg_real trainPositionDeltaMax;
  kcg_real trainPositionNominal;
  kcg_real trainPositionDeltaMin;
  kcg_int timestamp;
} struct__127393;

/* EnvSim::EVC_to_GUI */
typedef struct__127393 EVC_to_GUI_EnvSim;

typedef struct { kcg_int now; kcg_int distance; } struct__127407;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct__127407 D_test_distance_T_TIU_Types_Pkg;

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
  struct__127407 d_test_trackcond;
  struct__127407 l_test_trackcond;
  M_trackcond_T_TIU_Types_Pkg m_trackcond;
} struct__127412;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct__127412 nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  struct__127412 nothing_to_resume_profile_follow;
  struct__127407 empty_profile_initial_state_to_be_resumed;
} struct__127418;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct__127418 Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int pressure; } struct__127424;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct__127424 Brake_pressure_value_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} struct__127429;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct__127429 Brake_status_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} struct__127438;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct__127438 Mode_control_and_train_status_T_TIU_Types_Pkg;

typedef struct { M_VOLTAGE m_voltage; kcg_int nid_ctraction; } struct__127449;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__127449 sTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage */
typedef struct__127449 P011_voltage_TM_TrainToTrack;

typedef struct__127449 array__127454[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__127454 aTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage_list */
typedef array__127454 P011_voltage_list_TM_TrainToTrack;

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
  kcg_int trainLength;
  kcg_int brakePerctage;
  kcg_int maxTrainSpeed;
  M_LOADINGGAUGE loadingGauge;
  M_AXLELOADCAT axleLoadCategory;
  M_AIRTIGHT airtightSystem;
  kcg_int axleNumber;
  kcg_int numberNationalSystems;
  array_int_5 nationSystems;
  kcg_int numberTractionSystems;
  array__127454 tractionSystem;
} struct__127460;

/* TIU_Types_Pkg::trainData_T */
typedef struct__127460 trainData_T_TIU_Types_Pkg;

typedef struct {
  struct__127438 train_status;
  struct__127429 brake_status;
  struct__127424 brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  struct__127460 train_data_info;
  struct__127418 type_I_train_and_brake_inhibition;
} struct__127478;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct__127478 Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; struct__127478 info; } struct__127487;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct__127487 TIU_Input_msg_API_TIU_Pkg;

typedef kcg_int array_int_311[311];

/* API_DMI_Pkg::DMI_to_EVC_Message_int_T */
typedef array_int_311 DMI_to_EVC_Message_int_T_API_DMI_Pkg;

typedef kcg_int array_int_999[999];

/* API_DMI_Pkg::EVC_to_DMI_Message_int_T */
typedef array_int_999 EVC_to_DMI_Message_int_T_API_DMI_Pkg;

typedef struct { kcg_bool no_restriction; kcg_int restriction; } struct__127498;

/* TIU_Types_Pkg::M_current_T */
typedef struct__127498 M_current_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} struct__127503;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct__127503 Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int door_control_info; } struct__127509;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct__127509 Passenger_door_control_info_T_TIU_Types_Pkg;

typedef struct {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} struct__127514;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct__127514 M_voltage_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} struct__127519;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct__127519 Change_traction_system_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} struct__127525;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct__127525 Type_I_train_commands_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} struct__127533;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct__127533 Brake_inhibition_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} struct__127540;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct__127540 Brake_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} struct__127546;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct__127546 Isolation_Status_T_TIU_Types_Pkg;

typedef struct {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} struct__127551;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct__127551 Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} struct__127561;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct__127561 TIU_Output_msg_API_TIU_Pkg;

typedef struct {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} struct__127566;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct__127566 RadioManagement_T_API_RadioCommunication_Pkg;

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
} struct__127575;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct__127575 M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} struct__127586;

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct__127586 M_TrainTrack_Message_T_TM_radio_messages;

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
} struct__127591;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__127591 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__127609;

/* TM::CompressedRadioMessage */
typedef struct__127609 CompressedRadioMessage_TM;

typedef struct {
  kcg_bool m_IsValid;
  CompressedRadioMessage_TM m_Entry;
} struct__127614;

/* RadioTrackTrainMessageQueueEntry_T */
typedef struct__127614 RadioTrackTrainMessageQueueEntry_T;

typedef RadioTrackTrainMessageQueueEntry_T array__127619[8];

/* RadioTrackTrainMessageQueueEntries_T */
typedef array__127619 RadioTrackTrainMessageQueueEntries_T;

typedef struct {
  RadioTrackTrainMessageQueueEntries_T m_Entries;
} struct__127622;

/* RadioTrackTrainMessageQueue_T */
typedef struct__127622 RadioTrackTrainMessageQueue_T;

typedef struct {
  kcg_bool valid;
  kcg_int count;
  T_TRAIN timestamp;
  DiagMsgType_E_RBC_Diagnostic_Pkg diagType;
  DiagMsgSrc_E_RBC_Diagnostic_Pkg diagSrc;
  DiagMsgText_E_RBC_Diagnostic_Pkg diagText;
} struct__127626;

/* RBC_Diagnostic_Pkg::DiagMsg_T */
typedef struct__127626 DiagMsg_T_RBC_Diagnostic_Pkg;

typedef struct { D_LOC d_loc; Q_LGTLOC q_lgtloc; } struct__127635;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct__127635 IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__127640[32];

typedef struct {
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER m_NumberOfIncrementalDistancesAndQualifiers;
  array__127640 m_IncrementalDistancesAndQualifiers;
} struct__127643;

/* PosRepParams_T */
typedef struct__127643 PosRepParams_T;

typedef struct {
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__127653;

/* MAReqParams_T */
typedef struct__127653 MAReqParams_T;

typedef struct {
  NID_C nid_c;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  T_NVCONTACT t_nvcontact;
} struct__127660;

/* NationalParams_T */
typedef struct__127660 NationalParams_T;

typedef struct {
  M_VERSION m_version;
  NationalParams_T m_NationalParams;
  MAReqParams_T m_MAReqParams;
  PosRepParams_T m_PosRepParams;
} struct__127670;

/* DynamicConfig_T */
typedef struct__127670 DynamicConfig_T;

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
} struct__127677;

/* PosData_T */
typedef struct__127677 PosData_T;

typedef kcg_int array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef struct { kcg_bool valid; array_int_15 telephoneNumber; } struct__127698;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__127698 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__127703[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__127703 aNID_RADIO_T_Packet_TrainTypes_Pkg;

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
} struct__127706;

/* TrainData_T */
typedef struct__127706 TrainData_T;

typedef struct { TrainData_T m_TrainData; PosData_T m_PosData; } struct__127724;

/* SessionManagement_T */
typedef struct__127724 SessionManagement_T;

typedef struct { T_TRAIN m_Value; } struct__127729;

/* Clock_T */
typedef struct__127729 Clock_T;

typedef DiagMsg_T_RBC_Diagnostic_Pkg array__127733[16];

typedef struct {
  SessionManagement_T session;
  DynamicConfig_T config;
  array__127733 diagnostic;
  RadioTrackTrainMessageQueue_T messageQueue;
  Clock_T clockk;
  CompressedRadioMessage_TM lastSentTrackTrainMessage;
} struct__127736;

/* RBC_DataBus_Pkg::RBC_Data_T */
typedef struct__127736 RBC_Data_T_RBC_DataBus_Pkg;

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
} struct__127745;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__127745 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrainTrack_Header_T */
typedef struct__127745 Radio_TrainTrack_Header_T_TM_transitional;

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
  array__127454 tractionIdentity;
  kcg_int nIter_ntc;
  array_int_5 nid_ntc;
} struct__127757;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__127757 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int transitionInformation;
} struct__127773;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__127773 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  array__127703 aNID_RADIO;
} struct__127778;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__127778 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

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
} struct__127784;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__127784 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct { kcg_bool valid; struct__127784 packet1; } struct__127804;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__127804 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__127809;

/* TrainToTrack::Position_Report */
typedef struct__127809 Position_Report_TrainToTrack;

typedef struct { kcg_bool valid; struct__127809 packet0; } struct__127828;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__127828 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; kcg_int TrainRunningNumber; } struct__127833;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__127833 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR m_error; } struct__127838;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__127838 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef struct {
  struct__127828 p0;
  struct__127804 p1;
  struct__127778 p3;
  struct__127838 p4;
  struct__127833 p5;
  struct__127773 p9;
  struct__127757 p11;
} struct__127843;

/* Common_Types_Pkg::outPackets_T */
typedef struct__127843 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  struct__127745 header;
  struct__127843 packets;
} struct__127853;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__127853 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

/* RCM_MsgTypes_Pkg::msgToTrack_T */
typedef Radio_TrainTrack_Message_T_Radio_Types_Pkg msgToTrack_T_RCM_MsgTypes_Pkg;

/* TM_transitional::Radio_TrainTrack_Message_T */
typedef struct__127853 Radio_TrainTrack_Message_T_TM_transitional;

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
} struct__127859;

/* TM_TrainToTrack::P011 */
typedef struct__127859 P011_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} struct__127877;

/* TM_TrainToTrack::P009 */
typedef struct__127877 P009_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} struct__127884;

/* TM_TrainToTrack::P005 */
typedef struct__127884 P005_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} struct__127891;

/* TM_TrainToTrack::P004 */
typedef struct__127891 P004_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainToTrack nid_radio;
} struct__127898;

/* TM_TrainToTrack::P003 */
typedef struct__127898 P003_TM_TrainToTrack;

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
} struct__127906;

/* TM_TrainToTrack::P001 */
typedef struct__127906 P001_TM_TrainToTrack;

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
} struct__127927;

/* TM_TrainToTrack::P000 */
typedef struct__127927 P000_TM_TrainToTrack;

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

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P009_TrainTrack_int */
typedef array_int_3 P009_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::Array03 */
typedef array_int_3 Array03_TM_TrainToTrack;

typedef kcg_int array_int_8[8];

/* TM::Array08 */
typedef array_int_8 Array08_TM;

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t */
typedef array_int_8 P011_voltage_sections_array_flat_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_TrainTrack_int */
typedef array_int_8 P003_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_11[11];

/* DATA::DMI_Driver_Identifier_int_array_T */
typedef array_int_11 DMI_Driver_Identifier_int_array_T_DATA;

/* TM_TrainToTrack::Array11 */
typedef array_int_11 Array11_TM_TrainToTrack;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P011_TrainTrack_int */
typedef array_int_25 P011_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__127962;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__127962 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__127967[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__127967 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__127967 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__127970;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__127970 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* DATA::DMI_Radio_Net_Data_int_array_T */
typedef array_int_2 DMI_Radio_Net_Data_int_array_T_DATA;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

/* TM_TrainToTrack::P011_voltage_section_array_T */
typedef array_int_2 P011_voltage_section_array_T_TM_TrainToTrack;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__127987[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__127987 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__127990[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__127990 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__127993;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__127993 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_32[32];

/* SDMConversionModelPkg::LKrIntLookUp_t */
typedef array_int_32 LKrIntLookUp_t_SDMConversionModelPkg;

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

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
} struct__128011;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__128011 P003V1_trackside_int_T_TM_baseline2;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__128040;

/* TM::P058_section_int_T */
typedef struct__128040 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__128045[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__128045 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__128045 P058_OBU_sectionlist_int_T_TM;

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
} struct__128048;

/* TM::P058_trackside_int_T */
typedef struct__128048 P058_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__128061;

/* TM::P057_trackside_int_T */
typedef struct__128061 P057_trackside_int_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__128071;

/* TM::P021_section_int_T */
typedef struct__128071 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__128077[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__128077 P021_trackide_sectionlist_T_TM;

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
} struct__128080;

/* TM::P021_trackside_int_T */
typedef struct__128080 P021_trackside_int_T_TM;

typedef P021_section_array_T_TM array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef P021_section_int_T_TM array__128099[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__128099 P021_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__128102;

/* TM::P015_section_int_T */
typedef struct__128102 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__128109[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__128109 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__128109 P015_OBU_sectionlist_int_T_TM;

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
} struct__128112;

/* TM::P015_trackside_int_T */
typedef struct__128112 P015_trackside_int_T_TM;

typedef kcg_int array_int_4[4];

/* DATA::DMI_Status_int_array_T */
typedef array_int_4 DMI_Status_int_array_T_DATA;

/* DATA::DMI_Text_Message_Ack_int_array_T */
typedef array_int_4 DMI_Text_Message_Ack_int_array_T_DATA;

/* DATA::DMI_Level_Data_int_array_T */
typedef array_int_4 DMI_Level_Data_int_array_T_DATA;

/* TM::Array04 */
typedef array_int_4 Array04_TM;

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__128148;

/* TM::P005_section_int_T */
typedef struct__128148 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__128158[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__128158 P005_trackide_sectionlist_T_TM;

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
} struct__128161;

/* TM::P005_trackside_int_T */
typedef struct__128161 P005_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* SDMConversionModelPkg::m_KvSteps_t */
typedef array_int_7 m_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_KvSteps_t */
typedef array_int_7 v_KvSteps_t_SDMConversionModelPkg;

/* TM::Array07 */
typedef array_int_7 Array07_TM;

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__128187[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__128187 P005_OBU_sectionlist_int_T_TM;

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
} struct__128190;

/* TM::P042_trackside_int_T */
typedef struct__128190 P042_trackside_int_T_TM;

typedef struct {
  kcg_real o_nominal;
  kcg_real o_min;
  kcg_real o_max;
} struct__128202;

/* Toolbox::odometryFactors_T */
typedef struct__128202 odometryFactors_T_Toolbox;

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
} struct__128208;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__128208 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__128221;

/* TM::CompressedBaliseMessage */
typedef struct__128221 CompressedBaliseMessage_TM;

typedef struct {
  kcg_bool m155_initiationOfACommunicationSession;
  kcg_bool m156_terminationOfACommunicationSession;
  kcg_bool m159_sessionEstablished;
  kcg_bool m154_noCompatibleVersionSupported;
} struct__128226;

/* RCM_MsgTypes_Pkg::msgToTrackTriggers_T */
typedef struct__128226 msgToTrackTriggers_T_RCM_MsgTypes_Pkg;

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
  struct__127323 bgPosition;
  struct__127333 BG_centerDetectionInaccuraccuracies;
  kcg_int q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__128233;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__128233 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__128251;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__128251 ReceivedMessage_T_Common_Types_Pkg;

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
} struct__128261;

/* RCM_MsgTypes_Pkg::p42_sessionManagement_T */
typedef struct__128261 p42_sessionManagement_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__128273;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct__128273 P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
  NID_LRBG lrbg;
} struct__128283;

/* RCM_MsgTypes_Pkg::m39_AckOfTerminationOfACommunicationSession_T */
typedef struct__128283 m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
} struct__128290;

/* RCM_MsgTypes_Pkg::m38_initiationOfACommunicationSession_T */
typedef struct__128290 m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  kcg_bool versionSupported;
  RBC_Id_T_Common_Types_Pkg origin;
  M_VERSION m_version;
} struct__128296;

/* RCM_MsgTypes_Pkg::m32_RBC_RIU_SystemVersion_T */
typedef struct__128296 m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator;
} struct__128304;

/* RCM_Session_Types_Pkg::safeRadioConnectionIndication_T */
typedef struct__128304 safeRadioConnectionIndication_T_RCM_Session_Types_Pkg;

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
} struct__128309;

/* RCM_Session_Types_Pkg::obuEventsAndPhases_T */
typedef struct__128309 obuEventsAndPhases_T_RCM_Session_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnetionAction_T_RCM_Types_Pkg action;
  NID_RADIO nid_radio;
} struct__128333;

/* RCM_Types_Pkg::mobileConnectionCmd_T */
typedef struct__128333 mobileConnectionCmd_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnectionStatus_T_RCM_Types_Pkg status;
  kcg_int nid_radio;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
  kcg_bool isInRadioHole;
} struct__128340;

/* RCM_Types_Pkg::mobileConnectionContext_T */
typedef struct__128340 mobileConnectionContext_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  sessionPhase_T_RCM_Session_Types_Pkg phase;
  kcg_int nid_c;
  kcg_int nid_rbc;
  kcg_int nid_radio;
} struct__128350;

/* RCM_Session_Types_Pkg::sessionStatus_T */
typedef struct__128350 sessionStatus_T_RCM_Session_Types_Pkg;

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
} struct__128358;

/* RCM_Session_Types_Pkg::sessionCmd_T */
typedef struct__128358 sessionCmd_T_RCM_Session_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; NID_MN nid_mn; } struct__128371;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct__128371 P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileRegistrationAction_T_RCM_Types_Pkg action;
  NID_MN network_id;
} struct__128377;

/* RCM_Types_Pkg::mobileRegistrationCmd_T */
typedef struct__128377 mobileRegistrationCmd_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileHealthStatus_T_RCM_Types_Pkg healthStatus;
  mobileRegistrationStatus_T_RCM_Types_Pkg status;
  kcg_int nid_mn;
} struct__128384;

/* RCM_Types_Pkg::mobileRegistrationContext_T */
typedef struct__128384 mobileRegistrationContext_T_RCM_Types_Pkg;

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
} struct__128392;

/* RCM_Session_Types_Pkg::morc_configData_T */
typedef struct__128392 morc_configData_T_RCM_Session_Types_Pkg;

typedef struct {
  mobileRegistrationContext_T_RCM_Types_Pkg registration;
  mobileConnectionContext_T_RCM_Types_Pkg connection;
  sessionStatus_T_RCM_Session_Types_Pkg session;
} struct__128406;

/* RCM_Session_Types_Pkg::morcStatus_T */
typedef struct__128406 morcStatus_T_RCM_Session_Types_Pkg;

typedef M_TrainTrack_Message_T_TM_radio_messages array__128412[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t */
typedef array__128412 M_TrainTrackMessage_buffer_t_TM_lib_internal;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t */
typedef array__128412 M_TrainTrackMessageBus_t_TM_TrainTrack_Bus;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
} struct__128415;

/* TM_radio_messages::M_136_T */
typedef struct__128415 M_136_T_TM_radio_messages;

/* TM_radio_messages::M_129_T */
typedef struct__128415 M_129_T_TM_radio_messages;

/* TM_radio_messages::M_154_T */
typedef struct__128415 M_154_T_TM_radio_messages;

/* TM_radio_messages::M_159_T */
typedef struct__128415 M_159_T_TM_radio_messages;

/* TM_radio_messages::M_156_T */
typedef struct__128415 M_156_T_TM_radio_messages;

/* TM_radio_messages::M_155_T */
typedef struct__128415 M_155_T_TM_radio_messages;

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
} struct__128423;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__128423 LinkedBG_T_BG_Types_Pkg;

typedef struct__128423 array__128437[33];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__128437 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  struct__128233 BG_Header;
  array__128437 linkedBGs;
} struct__128440;

/* BG_Types_Pkg::passedBG_T */
typedef struct__128440 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_bg_fromLinkingBG;
  kcg_int nid_c_fromLinkingBG;
  struct__127333 expectedLocation;
  struct__127333 d_link;
  struct__128423 linkingInfo;
} struct__128446;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__128446 infoFromLinking_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__127333 location;
  kcg_int seqNoOnTrack;
  struct__128446 infoFromLinking;
  struct__128440 infoFromPassing;
  kcg_bool missed;
} struct__128455;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__128455 positionedBG_T_TrainPosition_Types_Pck;

typedef positionedBG_T_TrainPosition_Types_Pck array__128467[41];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef array__128467 positionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  NID_MN nid_mn;
} struct__128470;

/* Handover_Pkg::connection_ids_T */
typedef struct__128470 connection_ids_T_Handover_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_RBCTR d_rbctr;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__128479;

/* Packet_Types_Pkg::P131_RBCTransitionOrder_T */
typedef struct__128479 P131_RBCTransitionOrder_T_Packet_Types_Pkg;

/* TM::P131_OBU_T */
typedef struct__128479 P131_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  NID_LRBG nid_lrbg;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_bool contactLastKnownRBC;
  kcg_bool useTheShortNumberStoredOnboard;
  P131_RBCTransitionOrder_T_Packet_Types_Pkg order;
} struct__128490;

/* Handover_Pkg::p131_q_rbcTransitionOrder_T */
typedef struct__128490 p131_q_rbcTransitionOrder_T_Handover_Pkg;

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
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__128503;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__128503 trainProperties_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  struct__127333 trainPosition;
  kcg_int estimatedFrontEndPosition;
  kcg_int minSafeFrontEndPosition;
  kcg_int maxSafeFrontEndPostion;
  struct__128455 LRBG;
  struct__128455 prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
  kcg_int estimatedRearEndPosition;
  kcg_int minSafeRearEndPosition;
  kcg_int maxSafeRearEndPosition;
} struct__128513;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__128513 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} struct__128533;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct__128533 radioNetWorkIDs_T_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct__128539;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__128539 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__128539 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__128539 array__128545[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__128545 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__128545 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__128548;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__128548 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__128548 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__128548 array__128555[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__128555 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__128555 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__128555 n_iter_k_m_list;
} struct__128558;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__128558 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__128558 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__128558 array__128570[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__128570 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__128570 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__128573;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__128573 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__128573 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__128573 array__128580[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__128580 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__128580 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

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
} struct__128583;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__128583 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__128614;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__128614 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} struct__128619;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct__128619 nvkrint_T_Packet_Types_Pkg;

typedef nvkrint_T_Packet_Types_Pkg array__128625[7];

/* Packet_Types_Pkg::nvkrintArray_T */
typedef array__128625 nvkrintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} struct__128628;

/* Packet_Types_Pkg::nvkvint_T */
typedef struct__128628 nvkvint_T_Packet_Types_Pkg;

typedef nvkvint_T_Packet_Types_Pkg array__128635[7];

/* Packet_Types_Pkg::nvkvintArray_T */
typedef array__128635 nvkvintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} struct__128638;

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct__128638 nvkvintset_T_Packet_Types_Pkg;

typedef nvkvintset_T_Packet_Types_Pkg array__128646[7];

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef array__128646 nvkvintsetArray_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__128649;

/* Packet_Types_Pkg::nidC_T */
typedef struct__128649 nidC_T_Packet_Types_Pkg;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__128649 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__128649 P003V1_section_enum_T_TM_baseline2;

typedef nidC_T_Packet_Types_Pkg array__128654[7];

/* Packet_Types_Pkg::nidCArray_T */
typedef array__128654 nidCArray_T_Packet_Types_Pkg;

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
} struct__128657;

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct__128657 P3_NationalValues_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__128696;

/* TM::P005_section_enum_T */
typedef struct__128696 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__128707[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__128707 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__128710;

/* TM::P005_OBU_T */
typedef struct__128710 P005_OBU_T_TM;

typedef struct {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} struct__128719;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct__128719 BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} struct__128725;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct__128725 BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} struct__128734;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct__128734 linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg array__128740[41];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef array__128740 linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} struct__128743;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct__128743 refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} struct__128751;

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct__128751 positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

typedef positionedBG_T_TrainPosition_Types_Pck array__128756[33];

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef array__128756 linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  struct__128455 bg;
} struct__128759;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct__128759 positionErrors_T_TrainPosition_Types_Pck;

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
} struct__128771;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct__128771 trainPositionInfo_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__128784;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__128784 MovementAuthoritySection_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__128793[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__128793 MovementAuthoritySectionlist_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__128796;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__128796 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__128801;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__128801 DP_or_OL_t_TrackAtlasTypes;

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
} struct__128807;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__128807 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__128825;

/* MA_Request::Driver2MAR_T */
typedef struct__128825 Driver2MAR_T_MA_Request;

/* TA_MA_Request::Driver2MAR_T */
typedef struct__128825 Driver2MAR_T_TA_MA_Request;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__128830;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__128830 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool compatibleModeAndLevel;
  M_LEVEL level;
  kcg_bool newLevel;
  M_MODE Mode;
  kcg_bool newMode;
} struct__128838;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__128838 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  Q_MARQSTREASON q_marqstreason;
} struct__128846;

/* TM_radio_messages::M_132_T */
typedef struct__128846 M_132_T_TM_radio_messages;

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
} struct__128858;

/* TM::P015_section_enum_T */
typedef struct__128858 P015_section_enum_T_TM;

/* TM::P012_section_enum_T */
typedef struct__128858 P012_section_enum_T_TM;

typedef P015_section_enum_T_TM array__128866[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__128866 P015_OBU_sectionlist_enum_T_TM;

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
} struct__128869;

/* TM::P015_OBU_T */
typedef struct__128869 P015_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__128894;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__128894 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__128902[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__128902 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__128905;

/* TM::P021_section_enum_T */
typedef struct__128905 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__128912[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__128912 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__128915;

/* TM::P021_OBU_T */
typedef struct__128915 P021_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  NID_EM nid_em;
  Q_EMERGENCYSTOP q_emergencystop;
} struct__128923;

/* TM_radio_messages::M_147_T */
typedef struct__128923 M_147_T_TM_radio_messages;

typedef struct {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} struct__128933;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct__128933 NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

typedef struct { NID_EM nid_em; kcg_bool valid; } struct__128939;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct__128939 NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store array__128944[8];

typedef struct { kcg_int nfree; array__128944 items; } struct__128947;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct__128947 NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__128952;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct__128952 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__128952 MRSP_section_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} struct__128959;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct__128959 StaticSpeedSection_t_TrackAtlasTypes;

typedef StaticSpeedSection_t_TrackAtlasTypes array__128967[50];

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef array__128967 StaticSpeedProfile_t_TrackAtlasTypes;

typedef MRSP_section_t_TrackAtlasTypes array__128970[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__128970 MRSP_Profile_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; Q_DIR q_dir; } struct__128973;

/* Packet_Types_Pkg::P135_StopShuntingOnDeskOpening_T */
typedef struct__128973 P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg;

/* TM::P135_OBU_T */
typedef struct__128973 P135_OBU_T_TM;

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
} struct__128978;

/* Packet_Types_Pkg::P12_Level1MovementAuthority_T */
typedef struct__128978 P12_Level1MovementAuthority_T_Packet_Types_Pkg;

typedef P12_Level1MovementAuthority_T_Packet_Types_Pkg array__129006[5];

/* Packet_Types_Pkg::P12_Level1MovementAuthorities_T */
typedef array__129006 P12_Level1MovementAuthorities_T_Packet_Types_Pkg;

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
} struct__129009;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct__129009 P80_ModeProfile_T_Packet_Types_Pkg;

typedef P80_ModeProfile_T_Packet_Types_Pkg array__129021[3];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef array__129021 P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} struct__129024;

/* Packet_Types_Pkg::P63_BaliseInSRAuthority_T */
typedef struct__129024 P63_BaliseInSRAuthority_T_Packet_Types_Pkg;

typedef P63_BaliseInSRAuthority_T_Packet_Types_Pkg array__129032[7];

/* Packet_Types_Pkg::P63_ListofBalisesinSRAuthority_T */
typedef array__129032 P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__129035;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__129035 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__129044[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__129044 P21_GradientProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STARTREVERSE d_startreverse;
  L_REVERSEAREA l_reversearea;
} struct__129047;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct__129047 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

/* TM::P138_OBU_T */
typedef struct__129047 P138_OBU_T_TM;

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
} struct__129055;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct__129055 P15_Level23MovementAuthority_T_Packet_Types_Pkg;

typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg array__129082[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef array__129082 P15_Level23MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_REVERSE d_reverse;
  V_REVERSE v_reverse;
} struct__129085;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct__129085 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

/* TM::P139_OBU_T */
typedef struct__129085 P139_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__129093;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__129093 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__129099;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__129099 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__129105[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__129105 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__129108;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__129108 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__129117[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__129117 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__129120;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__129120 P027V1_OBU_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__129127;

/* Packet_Types_Pkg::Diff_T */
typedef struct__129127 Diff_T_Packet_Types_Pkg;

typedef Diff_T_Packet_Types_Pkg array__129135[7];

/* Packet_Types_Pkg::DiffArray_T */
typedef array__129135 DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} struct__129138;

/* Packet_Types_Pkg::SSP_T */
typedef struct__129138 SSP_T_Packet_Types_Pkg;

typedef SSP_T_Packet_Types_Pkg array__129146[7];

/* Packet_Types_Pkg::SSPArray_T */
typedef array__129146 SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} struct__129149;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct__129149 P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__129160;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__129160 P027V1_OBU_body_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__129166;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct__129166 P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg array__129176[7];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef array__129176 P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__129179;

/* TM::P041_section_enum_T */
typedef struct__129179 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__129186[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__129186 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__129189;

/* TM::P041_OBU_T */
typedef struct__129189 P041_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__129198;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct__129198 P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg array__129205[7];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef array__129205 P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__129208;

/* TM::P046_section_enum_T */
typedef struct__129208 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__129214[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__129214 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} struct__129217;

/* TM::P046_OBU_T */
typedef struct__129217 P046_OBU_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

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
} struct__129227;

/* TM::P012_OBU_T */
typedef struct__129227 P012_OBU_T_TM;

typedef struct {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
} struct__129253;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct__129253 T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

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
} struct__129262;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct__129262 T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__129279;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct__129279 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__129279 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__129286[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__129286 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef struct__128649 array__129289[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__129289 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__129289 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__129292;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__129292 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* DATA::DMI_Dynamic_int_array_T */
typedef array_int_24 DMI_Dynamic_int_array_T_DATA;

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__129322;

/* TA_MRSP::SSP_section_t */
typedef struct__129322 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__129327[33];

/* TA_MRSP::SSP_cat_t */
typedef array__129327 SSP_cat_t_TA_MRSP;

typedef array__129327 array__129330[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__129330 SSP_matrix_t_TA_MRSP;

typedef struct {
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  L_internal_Type_Obu_BasicTypes_Pkg d_endsection;
} struct__129333;

/* TA_MA::AccuDistanceProfileMA */
typedef struct__129333 AccuDistanceProfileMA_TA_MA;

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
} struct__129338;

/* TM::P003_OBU_T */
typedef struct__129338 P003_OBU_T_TM;

typedef struct {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} struct__129393;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__129393 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__129402;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__129402 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__129411;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__129411 DataForDMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} struct__129418;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct__129418 trainData_Events_T_trainData_Types_pkg;

typedef struct {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} struct__129427;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct__129427 trainData_Trigger_T_trainData_Types_pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool RBCsystemVersionOnboard;
  kcg_bool validatedbyRBC;
  kcg_bool waitingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} struct__129435;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct__129435 trainDataStatus_T_trainData_Types_pkg;

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
} struct__129445;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct__129445 DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} struct__129457;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct__129457 DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  T_TRAIN t_train_req;
} struct__129463;

/* TM_radio_messages::M_146_T */
typedef struct__129463 M_146_T_TM_radio_messages;

typedef P011_voltage_section_array_T_TM_TrainToTrack array_int_2_4[4];

/* TM_TrainToTrack::P011_voltage_sectionlist_array_T */
typedef array_int_2_4 P011_voltage_sectionlist_array_T_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} struct__129475;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct__129475 DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} struct__129481;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct__129481 TIU_trainStatus_T_TIU_Types_Pkg;

typedef M_TrainTrack_Message_T_TM_radio_messages array__129488[100];

/* TM_lib_internal::M_TrainTrackRadioOutputBuffer_t */
typedef array__129488 M_TrainTrackRadioOutputBuffer_t_TM_lib_internal;

typedef kcg_int array_int_1[1];

/* TM_TrainToTrack::P044_other_data */
typedef array_int_1 P044_other_data_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} struct__129494;

/* TM_TrainToTrack::P044 */
typedef struct__129494 P044_TM_TrainToTrack;

typedef struct { kcg_bool present; M_ERROR errorType; } struct__129502;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct__129502 ErrorMessage_T_ProvidePositionReport_Pkg;

typedef struct {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} struct__129507;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct__129507 ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

typedef struct { NID_NTC nid_ntc; Q_LENGTH q_length; } struct__129513;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct__129513 TrainToTrackStatus_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} struct__129518;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct__129518 ReportedBG_T_ProvidePositionReport_Pkg;

typedef ReportedBG_T_ProvidePositionReport_Pkg array__129524[8];

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef array__129524 ReportedBGList_T_ProvidePositionReport_Pkg;

typedef struct { kcg_bool newSessionEstablished; } struct__129527;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct__129527 RBC_Communication_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} struct__129531;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct__129531 LocationBasedEvents_T_ProvidePositionReport_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__129536[2];

/* Packet_Types_Pkg::IterPacket58List_T */
typedef array__129536 IterPacket58List_T_Packet_Types_Pkg;

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
} struct__129539;

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct__129539 P58_PositionReportParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} struct__129552;

/* TM::P058_section_enum_T */
typedef struct__129552 P058_section_enum_T_TM;

typedef P058_section_enum_T_TM array__129558[32];

/* TM::P058_OBU_sectionlist_enum_T */
typedef array__129558 P058_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} struct__129561;

/* TM::P058_OBU_T */
typedef struct__129561 P058_OBU_T_TM;

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
} struct__129572;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct__129572 MSG_Errors_T_Common_Types_Pkg;

typedef struct {
  kcg_bool isChanged;
  NID_BG bg_id;
  NID_C nid_c;
  MSG_Errors_T_Common_Types_Pkg errors;
} struct__129584;

/* xdebugSupport_Pkg::probesBalises_T */
typedef struct__129584 probesBalises_T_xdebugSupport_Pkg;

typedef struct {
  P41_LevelTransistionOrders_T_Packet_Types_Pkg p41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg p46;
  kcg_bool p12_received;
  kcg_bool p15_received;
  kcg_bool p21_received;
  kcg_bool p27_received;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} struct__129591;

/* xdebugSupport_Pkg::dataCollectionForLevelTransition_T */
typedef struct__129591 dataCollectionForLevelTransition_T_xdebugSupport_Pkg;

typedef struct {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} struct__129602;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct__129602 filterRelatedEvents_T_Common_Types_Pkg;

typedef struct {
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} struct__129613;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_MASSPGradient_Available */
typedef struct__129613 T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg;

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array__129620[17];

typedef array__129620 array__129623[256];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array__129623 ModeDecisionTableType_DataDictionary_Pkg;

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array__129626[5];

typedef array__129626 array__129629[256];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array__129629 LevelDecisionTableType_DataDictionary_Pkg;

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
} struct__129638;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct__129638 RadioMessage_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__129647;

/* BG_Types_Pkg::Telegram_T */
typedef struct__129647 Telegram_T_BG_Types_Pkg;

typedef Telegram_T_BG_Types_Pkg array__129654[8];

/* BG_Types_Pkg::TelegramArray_T */
typedef array__129654 TelegramArray_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__129657;

/* BG_Types_Pkg::BG_Message_T */
typedef struct__129657 BG_Message_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} struct__129664;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct__129664 TrackSide_ForCheck_T_Common_Types_Pkg;

typedef struct {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} struct__129672;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct__129672 BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} struct__129683;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct__129683 TelegramStore_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} struct__129689;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct__129689 DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  M_LEVEL level;
  M_POSITION position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
  kcg_bool immediateAck;
  Location_T_Obu_BasicTypes_Pkg AckLength;
} struct__129695;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct__129695 T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} struct__129703;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct__129703 DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool is_set;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg transition;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} struct__129709;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct__129709 T_LevelTransition_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} struct__129716;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct__129716 DMI_DriverRequest_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} struct__129726;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct__129726 DMI_TXT_MSG_status_T_DMI_Types_Pkg;

typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg array__129737[31];

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef array__129737 DMI_TXT_MSGList_status_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} struct__129740;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct__129740 DMI_DriverAck_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} struct__129746;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct__129746 DMI_To_Modes_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} struct__129753;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct__129753 DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} struct__129760;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct__129760 DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__129769;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct__129769 DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__129779;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct__129779 DMI_EVC_status_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} struct__129791;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct__129791 DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

typedef kcg_char array_char_9[9];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef array_char_9 driverIdentifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} struct__129800;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct__129800 DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} struct__129806;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct__129806 DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} struct__129811;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct__129811 DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__129818;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct__129818 DMI_to_EVC_Message_T_API_DMI_Pkg;

typedef kcg_int array_int_255[255];

/* DATA::DMI_TEXT_INT_Array_T */
typedef array_int_255 DMI_TEXT_INT_Array_T_DATA;

typedef kcg_int array_int_261[261];

/* DATA::DMI_Identifier_Request_int_array_T */
typedef array_int_261 DMI_Identifier_Request_int_array_T_DATA;

/* DATA::DMI_Identifier_int_array_T */
typedef array_int_261 DMI_Identifier_int_array_T_DATA;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} struct__129840;

/* TargetManagement_types::Target_T */
typedef struct__129840 Target_T_TargetManagement_types;

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
} struct__129847;

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct__129847 SDM_Commands_T_SDM_Types_Pkg;

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
} struct__129880;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct__129880 ParabolaCurve_T_CalcBrakingCurves_types;

typedef ParabolaCurve_T_CalcBrakingCurves_types array__129887[200];

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef array__129887 ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_LoA_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} struct__129890;

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct__129890 CurveCollection_T_CalcBrakingCurves_types;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  kcg_real distance;
  kcg_real speed;
} struct__129898;

/* TargetManagement_types::Target_real_T */
typedef struct__129898 Target_real_T_TargetManagement_types;

typedef Target_real_T_TargetManagement_types array__129904[200];

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef array__129904 Target_list_MRSP_real_T_TargetManagement_types;

typedef struct {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_LoA_target;
} struct__129907;

/* TargetManagement_types::TargetCollection_T */
typedef struct__129907 TargetCollection_T_TargetManagement_types;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg position;
  A_internal_real_Type_SDM_Types_Pkg gradient_acceleration;
  kcg_bool valid;
} struct__129914;

/* SDM_GradientAcceleration_types::A_gradient_element_t */
typedef struct__129914 A_gradient_element_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_real location;
  kcg_real gradient;
  kcg_bool valid;
} struct__129920;

/* SDM_GradientAcceleration_types::Gradient_section_real_t */
typedef struct__129920 Gradient_section_real_t_SDM_GradientAcceleration_types;

typedef Gradient_section_real_t_SDM_GradientAcceleration_types array__129926[50];

/* SDM_GradientAcceleration_types::GradientProfile_real_t */
typedef array__129926 GradientProfile_real_t_SDM_GradientAcceleration_types;

typedef Gradient_section_real_t_SDM_GradientAcceleration_types array__129929[100];

/* SDM_GradientAcceleration_types::GradientProfile_real_compensated_t */
typedef array__129929 GradientProfile_real_compensated_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_real frontPos;
  kcg_int frontIndex;
  kcg_real rearPos;
  kcg_int rearIndex;
  array__129929 compensatedGradientProfile;
} struct__129932;

/* SDM_GradientAcceleration_Pkg::ACC */
typedef struct__129932 ACC_SDM_GradientAcceleration_Pkg;

typedef A_gradient_element_t_SDM_GradientAcceleration_types array__129940[100];

/* SDM_GradientAcceleration_types::A_gradient_t */
typedef array__129940 A_gradient_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} struct__129943;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct__129943 TrainLocations_real_T_SDM_Types_Pkg;

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
} struct__129961;

/* CalcBrakingCurves_types::ASafe_T */
typedef struct__129961 ASafe_T_CalcBrakingCurves_types;

typedef struct { array_int_6 a; array_int_6 v; } struct__129967;

/* SDMConversionModelPkg::av_Map_t */
typedef struct__129967 av_Map_t_SDMConversionModelPkg;

typedef struct {
  av_Map_t_SDMConversionModelPkg emergency;
  av_Map_t_SDMConversionModelPkg service;
} struct__129972;

/* SDMConversionModelPkg::a_Brake_t */
typedef struct__129972 a_Brake_t_SDMConversionModelPkg;

typedef kcg_int array_int_13[13];

/* SDMConversionModelPkg::a_MergedSteps_t */
typedef array_int_13 a_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_MergedSteps_t */
typedef array_int_13 v_MergedSteps_t_SDMConversionModelPkg;

typedef struct {
  a_MergedSteps_t_SDMConversionModelPkg a;
  v_MergedSteps_t_SDMConversionModelPkg v;
} struct__129980;

/* SDMConversionModelPkg::av_MergedMap_t */
typedef struct__129980 av_MergedMap_t_SDMConversionModelPkg;

typedef kcg_int array_int_221[221];

typedef array_int_6 array_int_6_221[221];

typedef struct { array_int_7 m; array_int_7 v; } struct__129991;

/* SDMConversionModelPkg::mv_Map_t */
typedef struct__129991 mv_Map_t_SDMConversionModelPkg;

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
} struct__130002;

/* SDMModelPkg::t_Brake_t */
typedef struct__130002 t_Brake_t_SDMModelPkg;

typedef struct {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
  T_internal_real_Type_SDM_Types_Pkg indication;
} struct__130007;

/* TargetLimits_Pkg::T_trac_t */
typedef struct__130007 T_trac_t_TargetLimits_Pkg;

typedef struct {
  kcg_real distance;
  kcg_real speed;
  kcg_real acceleration;
} struct__130017;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct__130017 ParabolaArc_T_CalcBrakingCurves_types;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} struct__130023;

/* TargetLimits_Pkg::bec_t */
typedef struct__130023 bec_t_TargetLimits_Pkg;

typedef struct {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  T_internal_Type_Obu_BasicTypes_Pkg T_traction_cut_off;
  L_internal_Type_Obu_BasicTypes_Pkg offsetAntennaL1;
} struct__130028;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct__130028 trainData_internal_t_SDM_Types_Pkg;

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
} struct__130036;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct__130036 TargetIteratorAkku_TargetLimits_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} struct__130048;

/* TargetManagement_types::EOA_real_T */
typedef struct__130048 EOA_real_T_TargetManagement_types;

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
} struct__130053;

/* TargetManagement_types::MA_section_real_T */
typedef struct__130053 MA_section_real_T_TargetManagement_types;

typedef struct {
  kcg_real Loc_Abs;
  kcg_real MRS;
  kcg_bool valid;
} struct__130066;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct__130066 MRSP_internal_section_T_TargetManagement_types;

typedef MRSP_internal_section_T_TargetManagement_types array__130072[200];

/* TargetManagement_types::MRSP_internal_T */
typedef array__130072 MRSP_internal_T_TargetManagement_types;

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
} struct__130075;

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct__130075 SDM_Locations_T_SDM_Types_Pkg;

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
} struct__130098;

/* SDM_Types_Pkg::Speeds_T */
typedef struct__130098 Speeds_T_SDM_Types_Pkg;

typedef struct {
  array__129904 targetList;
  kcg_int lastInsertedTargetIndex;
} struct__130116;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct__130116 extractTargetsMRSPACC_TargetManagement_pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} struct__130121;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct__130121 BCAccumulator_type_CalcBrakingCurves_Pkg;

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
} struct__130129;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct__130129 speedSupervisionForDMI_T_DMI_Types_Pkg;

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
} struct__130142;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct__130142 TSM_triggerCond_T_SDM_Commands_Pkg;

typedef kcg_bool array_bool_14[14];

/* SDM_Commands_Pkg::MyArray */
typedef array_bool_14 MyArray_SDM_Commands_Pkg;

typedef struct {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} struct__130162;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct__130162 TSM_revokeCond_T_SDM_Commands_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__130169;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct__130169 radioManagementMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} struct__130178;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct__130178 DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} struct__130184;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct__130184 DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} struct__130190;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct__130190 DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
} struct__130196;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct__130196 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct__130196 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct__130196 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct__130196 DMI_loadingGauge_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} struct__130203;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct__130203 DMI_train_length_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} struct__130211;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct__130211 DMI_train_id_T_DMI_Types_Pkg;

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
} struct__130220;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct__130220 DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} struct__130232;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct__130232 movementAuthorityForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} struct__130238;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct__130238 nationValuesForDMI_T_DMI_Types_Pkg;

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
} struct__130244;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct__130244 DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__130262;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct__130262 DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} struct__130268;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct__130268 DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} struct__130274;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct__130274 DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_129[129];

/* DMI_gradientProfile_int_arrayT */
typedef array_int_129 DMI_gradientProfile_int_arrayT;

/* DATA::DMI_speedProfile_int_array_T */
typedef array_int_129 DMI_speedProfile_int_array_T_DATA;

typedef DMI_speedProfileElement_T_DMI_Types_Pkg array__130287[32];

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef array__130287 DMI_SpeedProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} struct__130290;

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct__130290 DMI_speedProfile_T_DMI_Types_Pkg;

typedef DMI_gradientProfileElement_T_DMI_Types_Pkg array__130295[32];

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef array__130295 DMI_gradientProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} struct__130298;

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct__130298 DMI_gradientProfile_T_DMI_Types_Pkg;

typedef struct {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} struct__130303;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct__130303 DMI_trackConditionElement_T_DMI_Types_Pkg;

typedef DMI_trackConditionElement_T_DMI_Types_Pkg array__130308[32];

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef array__130308 DMI_trackConditionArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} struct__130311;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct__130311 DMI_trackCondition_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} struct__130316;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct__130316 DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__130330;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct__130330 DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__130341;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct__130341 DMI_Available_Menu_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} struct__130374;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct__130374 DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__130380;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct__130380 DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__130406;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct__130406 EVC_to_DMI_Message_T_API_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
} struct__130426;

/* Level_And_Mode_Types_Pkg::T_AcknoledgementRequest */
typedef struct__130426 T_AcknoledgementRequest_Level_And_Mode_Types_Pkg;

typedef struct {
  T_LevelTransition_Level_And_Mode_Types_Pkg LevelTransition;
  kcg_bool IsAvailableForUse;
} struct__130433;

/* Level_And_Mode_Types_Pkg::T_AnnouncedLevel */
typedef struct__130433 T_AnnouncedLevel_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} struct__130438;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct__130438 dmiOutputs_T_manage_DMI_Output_Pkg;

typedef struct {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} struct__130443;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct__130443 T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef struct {
  MSG_Errors_T_Common_Types_Pkg Common_Errors;
  kcg_bool Failure_Occured;
  kcg_bool Continue_Shunting_Active;
  kcg_bool Stop_Shunting_Stored;
} struct__130451;

/* Level_And_Mode_Types_Pkg::T_Data_From_F2_functions */
typedef struct__130451 T_Data_From_F2_functions_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Interface_To_National_System;
  kcg_bool National_trip_Order;
} struct__130458;

/* Level_And_Mode_Types_Pkg::T_Data_From_STM */
typedef struct__130458 T_Data_From_STM_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  struct__128759 PositionErrors;
  struct__128513 Train_Position;
  kcg_int Train_Speed;
  kcg_bool Train_Standstill;
} struct__130463;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct__130463 T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
  kcg_bool Connection_to_RBC_req;
  kcg_bool Position_Repport_Needed;
} struct__130472;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct__130472 T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} struct__130481;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct__130481 T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} struct__130490;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct__130490 TIU_commandStatus_T_TIU_Types_Pkg;

typedef T_LevelTransition_Level_And_Mode_Types_Pkg array__130496[7];

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef array__130496 T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg;

typedef struct {
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg level_transition_priority_table;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg conditionnalTransition;
  kcg_bool receivedL2L3MA_track;
  kcg_bool receivedL1MA_track;
} struct__130499;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Level */
typedef struct__130499 T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg;

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
} struct__130506;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct__130506 T_Data_From_DMI_Level_And_Mode_Types_Pkg;

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
} struct__130523;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct__130523 T_Data_To_DMI_Level_And_Mode_Types_Pkg;

typedef struct {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} struct__130535;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct__130535 T_Mode_Profile_Level_And_Mode_Types_Pkg;

typedef T_Mode_Profile_Level_And_Mode_Types_Pkg array__130543[3];

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef array__130543 T_Mode_Profile_Table_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} struct__130546;

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct__130546 T_Reversing_Data_Level_And_Mode_Types_Pkg;

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
} struct__130554;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Mode */
typedef struct__130554 T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg;

typedef kcg_bool array_bool_30[30];

typedef kcg_bool array_bool_4[4];

typedef struct { kcg_int idx; array_bool_4 items; } struct__130574;

typedef kcg_bool array_bool_1[1];

typedef kcg_real array_real_1[1];

typedef Target_real_T_TargetManagement_types array__130585[1];

typedef array_real_100 array_real_100_1[1];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_13[13];

typedef V_internal_real_Type_SDM_Types_Pkg array_real_13[13];

typedef kcg_real array_real_8[8];

typedef array_real_100 array_real_100_8[8];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_6[6];

typedef V_internal_real_Type_SDM_Types_Pkg array_real_6[6];

typedef kcg_bool array_bool_8[8];

typedef ReceivedMessage_T_Common_Types_Pkg array__130612[3];

typedef ErrorMessage_T_ProvidePositionReport_Pkg array__130615[9];

typedef struct__128649 array__130618[1];

typedef kcg_int array_int_33[33];

typedef kcg_int array_int_30[30];

typedef positionedBG_T_TrainPosition_Types_Pck array__130627[1];

typedef positionedBG_T_TrainPosition_Types_Pck array__130630[8];

typedef kcg_int array_int_42[42];

typedef M_TrainTrack_Message_T_TM_radio_messages array__130636[1];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_428[428];

typedef API_TrackSideInput_T_API_Msg_Pkg array__130657[5];

typedef kcg_bool array_bool_5[5];

typedef struct { kcg_int idx; array_bool_5 items; } struct__130663;

typedef kcg_real array_real_113[113];

typedef kcg_bool array_bool_113[113];

typedef Target_real_T_TargetManagement_types array__135638[199];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136078[4];

typedef P003_OBU_nid_c_section_enum_T_TM array__136315[31];

typedef positionedBG_T_TrainPosition_Types_Pck array__136412[40];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136565[95];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136569[96];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136573[3];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136576[97];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136580[2];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136583[98];

typedef M_TrainTrack_Message_T_TM_radio_messages array__136587[99];

typedef RadioTrackTrainMessageQueueEntry_T array__136673[7];

#ifndef kcg_copy_struct__127225
#define kcg_copy_struct__127225(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127225)))
#endif /* kcg_copy_struct__127225 */

#ifndef kcg_copy_struct__127232
#define kcg_copy_struct__127232(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127232)))
#endif /* kcg_copy_struct__127232 */

#ifndef kcg_copy_struct__127240
#define kcg_copy_struct__127240(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127240)))
#endif /* kcg_copy_struct__127240 */

#ifndef kcg_copy_struct__127245
#define kcg_copy_struct__127245(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127245)))
#endif /* kcg_copy_struct__127245 */

#ifndef kcg_copy_struct__127252
#define kcg_copy_struct__127252(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127252)))
#endif /* kcg_copy_struct__127252 */

#ifndef kcg_copy_struct__127270
#define kcg_copy_struct__127270(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127270)))
#endif /* kcg_copy_struct__127270 */

#ifndef kcg_copy_struct__127282
#define kcg_copy_struct__127282(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127282)))
#endif /* kcg_copy_struct__127282 */

#ifndef kcg_copy_struct__127289
#define kcg_copy_struct__127289(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127289)))
#endif /* kcg_copy_struct__127289 */

#ifndef kcg_copy_struct__127297
#define kcg_copy_struct__127297(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127297)))
#endif /* kcg_copy_struct__127297 */

#ifndef kcg_copy_struct__127310
#define kcg_copy_struct__127310(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127310)))
#endif /* kcg_copy_struct__127310 */

#ifndef kcg_copy_struct__127317
#define kcg_copy_struct__127317(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127317)))
#endif /* kcg_copy_struct__127317 */

#ifndef kcg_copy_struct__127323
#define kcg_copy_struct__127323(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127323)))
#endif /* kcg_copy_struct__127323 */

#ifndef kcg_copy_struct__127333
#define kcg_copy_struct__127333(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127333)))
#endif /* kcg_copy_struct__127333 */

#ifndef kcg_copy_struct__127339
#define kcg_copy_struct__127339(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127339)))
#endif /* kcg_copy_struct__127339 */

#ifndef kcg_copy_struct__127344
#define kcg_copy_struct__127344(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127344)))
#endif /* kcg_copy_struct__127344 */

#ifndef kcg_copy_struct__127355
#define kcg_copy_struct__127355(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127355)))
#endif /* kcg_copy_struct__127355 */

#ifndef kcg_copy_struct__127366
#define kcg_copy_struct__127366(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127366)))
#endif /* kcg_copy_struct__127366 */

#ifndef kcg_copy_struct__127371
#define kcg_copy_struct__127371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127371)))
#endif /* kcg_copy_struct__127371 */

#ifndef kcg_copy_struct__127380
#define kcg_copy_struct__127380(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127380)))
#endif /* kcg_copy_struct__127380 */

#ifndef kcg_copy_struct__127393
#define kcg_copy_struct__127393(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127393)))
#endif /* kcg_copy_struct__127393 */

#ifndef kcg_copy_struct__127407
#define kcg_copy_struct__127407(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127407)))
#endif /* kcg_copy_struct__127407 */

#ifndef kcg_copy_struct__127412
#define kcg_copy_struct__127412(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127412)))
#endif /* kcg_copy_struct__127412 */

#ifndef kcg_copy_struct__127418
#define kcg_copy_struct__127418(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127418)))
#endif /* kcg_copy_struct__127418 */

#ifndef kcg_copy_struct__127424
#define kcg_copy_struct__127424(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127424)))
#endif /* kcg_copy_struct__127424 */

#ifndef kcg_copy_struct__127429
#define kcg_copy_struct__127429(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127429)))
#endif /* kcg_copy_struct__127429 */

#ifndef kcg_copy_struct__127438
#define kcg_copy_struct__127438(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127438)))
#endif /* kcg_copy_struct__127438 */

#ifndef kcg_copy_struct__127449
#define kcg_copy_struct__127449(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127449)))
#endif /* kcg_copy_struct__127449 */

#ifndef kcg_copy_struct__127460
#define kcg_copy_struct__127460(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127460)))
#endif /* kcg_copy_struct__127460 */

#ifndef kcg_copy_struct__127478
#define kcg_copy_struct__127478(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127478)))
#endif /* kcg_copy_struct__127478 */

#ifndef kcg_copy_struct__127487
#define kcg_copy_struct__127487(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127487)))
#endif /* kcg_copy_struct__127487 */

#ifndef kcg_copy_struct__127498
#define kcg_copy_struct__127498(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127498)))
#endif /* kcg_copy_struct__127498 */

#ifndef kcg_copy_struct__127503
#define kcg_copy_struct__127503(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127503)))
#endif /* kcg_copy_struct__127503 */

#ifndef kcg_copy_struct__127509
#define kcg_copy_struct__127509(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127509)))
#endif /* kcg_copy_struct__127509 */

#ifndef kcg_copy_struct__127514
#define kcg_copy_struct__127514(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127514)))
#endif /* kcg_copy_struct__127514 */

#ifndef kcg_copy_struct__127519
#define kcg_copy_struct__127519(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127519)))
#endif /* kcg_copy_struct__127519 */

#ifndef kcg_copy_struct__127525
#define kcg_copy_struct__127525(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127525)))
#endif /* kcg_copy_struct__127525 */

#ifndef kcg_copy_struct__127533
#define kcg_copy_struct__127533(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127533)))
#endif /* kcg_copy_struct__127533 */

#ifndef kcg_copy_struct__127540
#define kcg_copy_struct__127540(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127540)))
#endif /* kcg_copy_struct__127540 */

#ifndef kcg_copy_struct__127546
#define kcg_copy_struct__127546(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127546)))
#endif /* kcg_copy_struct__127546 */

#ifndef kcg_copy_struct__127551
#define kcg_copy_struct__127551(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127551)))
#endif /* kcg_copy_struct__127551 */

#ifndef kcg_copy_struct__127561
#define kcg_copy_struct__127561(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127561)))
#endif /* kcg_copy_struct__127561 */

#ifndef kcg_copy_struct__127566
#define kcg_copy_struct__127566(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127566)))
#endif /* kcg_copy_struct__127566 */

#ifndef kcg_copy_struct__127575
#define kcg_copy_struct__127575(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127575)))
#endif /* kcg_copy_struct__127575 */

#ifndef kcg_copy_struct__127586
#define kcg_copy_struct__127586(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127586)))
#endif /* kcg_copy_struct__127586 */

#ifndef kcg_copy_struct__127591
#define kcg_copy_struct__127591(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127591)))
#endif /* kcg_copy_struct__127591 */

#ifndef kcg_copy_struct__127609
#define kcg_copy_struct__127609(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127609)))
#endif /* kcg_copy_struct__127609 */

#ifndef kcg_copy_struct__127614
#define kcg_copy_struct__127614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127614)))
#endif /* kcg_copy_struct__127614 */

#ifndef kcg_copy_struct__127622
#define kcg_copy_struct__127622(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127622)))
#endif /* kcg_copy_struct__127622 */

#ifndef kcg_copy_struct__127626
#define kcg_copy_struct__127626(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127626)))
#endif /* kcg_copy_struct__127626 */

#ifndef kcg_copy_struct__127635
#define kcg_copy_struct__127635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127635)))
#endif /* kcg_copy_struct__127635 */

#ifndef kcg_copy_struct__127643
#define kcg_copy_struct__127643(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127643)))
#endif /* kcg_copy_struct__127643 */

#ifndef kcg_copy_struct__127653
#define kcg_copy_struct__127653(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127653)))
#endif /* kcg_copy_struct__127653 */

#ifndef kcg_copy_struct__127660
#define kcg_copy_struct__127660(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127660)))
#endif /* kcg_copy_struct__127660 */

#ifndef kcg_copy_struct__127670
#define kcg_copy_struct__127670(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127670)))
#endif /* kcg_copy_struct__127670 */

#ifndef kcg_copy_struct__127677
#define kcg_copy_struct__127677(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127677)))
#endif /* kcg_copy_struct__127677 */

#ifndef kcg_copy_struct__127698
#define kcg_copy_struct__127698(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127698)))
#endif /* kcg_copy_struct__127698 */

#ifndef kcg_copy_struct__127706
#define kcg_copy_struct__127706(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127706)))
#endif /* kcg_copy_struct__127706 */

#ifndef kcg_copy_struct__127724
#define kcg_copy_struct__127724(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127724)))
#endif /* kcg_copy_struct__127724 */

#ifndef kcg_copy_struct__127729
#define kcg_copy_struct__127729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127729)))
#endif /* kcg_copy_struct__127729 */

#ifndef kcg_copy_struct__127736
#define kcg_copy_struct__127736(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127736)))
#endif /* kcg_copy_struct__127736 */

#ifndef kcg_copy_struct__127745
#define kcg_copy_struct__127745(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127745)))
#endif /* kcg_copy_struct__127745 */

#ifndef kcg_copy_struct__127757
#define kcg_copy_struct__127757(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127757)))
#endif /* kcg_copy_struct__127757 */

#ifndef kcg_copy_struct__127773
#define kcg_copy_struct__127773(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127773)))
#endif /* kcg_copy_struct__127773 */

#ifndef kcg_copy_struct__127778
#define kcg_copy_struct__127778(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127778)))
#endif /* kcg_copy_struct__127778 */

#ifndef kcg_copy_struct__127784
#define kcg_copy_struct__127784(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127784)))
#endif /* kcg_copy_struct__127784 */

#ifndef kcg_copy_struct__127804
#define kcg_copy_struct__127804(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127804)))
#endif /* kcg_copy_struct__127804 */

#ifndef kcg_copy_struct__127809
#define kcg_copy_struct__127809(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127809)))
#endif /* kcg_copy_struct__127809 */

#ifndef kcg_copy_struct__127828
#define kcg_copy_struct__127828(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127828)))
#endif /* kcg_copy_struct__127828 */

#ifndef kcg_copy_struct__127833
#define kcg_copy_struct__127833(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127833)))
#endif /* kcg_copy_struct__127833 */

#ifndef kcg_copy_struct__127838
#define kcg_copy_struct__127838(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127838)))
#endif /* kcg_copy_struct__127838 */

#ifndef kcg_copy_struct__127843
#define kcg_copy_struct__127843(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127843)))
#endif /* kcg_copy_struct__127843 */

#ifndef kcg_copy_struct__127853
#define kcg_copy_struct__127853(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127853)))
#endif /* kcg_copy_struct__127853 */

#ifndef kcg_copy_struct__127859
#define kcg_copy_struct__127859(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127859)))
#endif /* kcg_copy_struct__127859 */

#ifndef kcg_copy_struct__127877
#define kcg_copy_struct__127877(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127877)))
#endif /* kcg_copy_struct__127877 */

#ifndef kcg_copy_struct__127884
#define kcg_copy_struct__127884(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127884)))
#endif /* kcg_copy_struct__127884 */

#ifndef kcg_copy_struct__127891
#define kcg_copy_struct__127891(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127891)))
#endif /* kcg_copy_struct__127891 */

#ifndef kcg_copy_struct__127898
#define kcg_copy_struct__127898(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127898)))
#endif /* kcg_copy_struct__127898 */

#ifndef kcg_copy_struct__127906
#define kcg_copy_struct__127906(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127906)))
#endif /* kcg_copy_struct__127906 */

#ifndef kcg_copy_struct__127927
#define kcg_copy_struct__127927(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127927)))
#endif /* kcg_copy_struct__127927 */

#ifndef kcg_copy_struct__127962
#define kcg_copy_struct__127962(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127962)))
#endif /* kcg_copy_struct__127962 */

#ifndef kcg_copy_struct__127970
#define kcg_copy_struct__127970(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127970)))
#endif /* kcg_copy_struct__127970 */

#ifndef kcg_copy_struct__127993
#define kcg_copy_struct__127993(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__127993)))
#endif /* kcg_copy_struct__127993 */

#ifndef kcg_copy_struct__128011
#define kcg_copy_struct__128011(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128011)))
#endif /* kcg_copy_struct__128011 */

#ifndef kcg_copy_struct__128040
#define kcg_copy_struct__128040(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128040)))
#endif /* kcg_copy_struct__128040 */

#ifndef kcg_copy_struct__128048
#define kcg_copy_struct__128048(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128048)))
#endif /* kcg_copy_struct__128048 */

#ifndef kcg_copy_struct__128061
#define kcg_copy_struct__128061(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128061)))
#endif /* kcg_copy_struct__128061 */

#ifndef kcg_copy_struct__128071
#define kcg_copy_struct__128071(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128071)))
#endif /* kcg_copy_struct__128071 */

#ifndef kcg_copy_struct__128080
#define kcg_copy_struct__128080(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128080)))
#endif /* kcg_copy_struct__128080 */

#ifndef kcg_copy_struct__128102
#define kcg_copy_struct__128102(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128102)))
#endif /* kcg_copy_struct__128102 */

#ifndef kcg_copy_struct__128112
#define kcg_copy_struct__128112(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128112)))
#endif /* kcg_copy_struct__128112 */

#ifndef kcg_copy_struct__128148
#define kcg_copy_struct__128148(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128148)))
#endif /* kcg_copy_struct__128148 */

#ifndef kcg_copy_struct__128161
#define kcg_copy_struct__128161(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128161)))
#endif /* kcg_copy_struct__128161 */

#ifndef kcg_copy_struct__128190
#define kcg_copy_struct__128190(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128190)))
#endif /* kcg_copy_struct__128190 */

#ifndef kcg_copy_struct__128202
#define kcg_copy_struct__128202(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128202)))
#endif /* kcg_copy_struct__128202 */

#ifndef kcg_copy_struct__128208
#define kcg_copy_struct__128208(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128208)))
#endif /* kcg_copy_struct__128208 */

#ifndef kcg_copy_struct__128221
#define kcg_copy_struct__128221(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128221)))
#endif /* kcg_copy_struct__128221 */

#ifndef kcg_copy_struct__128226
#define kcg_copy_struct__128226(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128226)))
#endif /* kcg_copy_struct__128226 */

#ifndef kcg_copy_struct__128233
#define kcg_copy_struct__128233(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128233)))
#endif /* kcg_copy_struct__128233 */

#ifndef kcg_copy_struct__128251
#define kcg_copy_struct__128251(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128251)))
#endif /* kcg_copy_struct__128251 */

#ifndef kcg_copy_struct__128261
#define kcg_copy_struct__128261(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128261)))
#endif /* kcg_copy_struct__128261 */

#ifndef kcg_copy_struct__128273
#define kcg_copy_struct__128273(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128273)))
#endif /* kcg_copy_struct__128273 */

#ifndef kcg_copy_struct__128283
#define kcg_copy_struct__128283(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128283)))
#endif /* kcg_copy_struct__128283 */

#ifndef kcg_copy_struct__128290
#define kcg_copy_struct__128290(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128290)))
#endif /* kcg_copy_struct__128290 */

#ifndef kcg_copy_struct__128296
#define kcg_copy_struct__128296(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128296)))
#endif /* kcg_copy_struct__128296 */

#ifndef kcg_copy_struct__128304
#define kcg_copy_struct__128304(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128304)))
#endif /* kcg_copy_struct__128304 */

#ifndef kcg_copy_struct__128309
#define kcg_copy_struct__128309(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128309)))
#endif /* kcg_copy_struct__128309 */

#ifndef kcg_copy_struct__128333
#define kcg_copy_struct__128333(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128333)))
#endif /* kcg_copy_struct__128333 */

#ifndef kcg_copy_struct__128340
#define kcg_copy_struct__128340(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128340)))
#endif /* kcg_copy_struct__128340 */

#ifndef kcg_copy_struct__128350
#define kcg_copy_struct__128350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128350)))
#endif /* kcg_copy_struct__128350 */

#ifndef kcg_copy_struct__128358
#define kcg_copy_struct__128358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128358)))
#endif /* kcg_copy_struct__128358 */

#ifndef kcg_copy_struct__128371
#define kcg_copy_struct__128371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128371)))
#endif /* kcg_copy_struct__128371 */

#ifndef kcg_copy_struct__128377
#define kcg_copy_struct__128377(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128377)))
#endif /* kcg_copy_struct__128377 */

#ifndef kcg_copy_struct__128384
#define kcg_copy_struct__128384(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128384)))
#endif /* kcg_copy_struct__128384 */

#ifndef kcg_copy_struct__128392
#define kcg_copy_struct__128392(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128392)))
#endif /* kcg_copy_struct__128392 */

#ifndef kcg_copy_struct__128406
#define kcg_copy_struct__128406(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128406)))
#endif /* kcg_copy_struct__128406 */

#ifndef kcg_copy_struct__128415
#define kcg_copy_struct__128415(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128415)))
#endif /* kcg_copy_struct__128415 */

#ifndef kcg_copy_struct__128423
#define kcg_copy_struct__128423(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128423)))
#endif /* kcg_copy_struct__128423 */

#ifndef kcg_copy_struct__128440
#define kcg_copy_struct__128440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128440)))
#endif /* kcg_copy_struct__128440 */

#ifndef kcg_copy_struct__128446
#define kcg_copy_struct__128446(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128446)))
#endif /* kcg_copy_struct__128446 */

#ifndef kcg_copy_struct__128455
#define kcg_copy_struct__128455(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128455)))
#endif /* kcg_copy_struct__128455 */

#ifndef kcg_copy_struct__128470
#define kcg_copy_struct__128470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128470)))
#endif /* kcg_copy_struct__128470 */

#ifndef kcg_copy_struct__128479
#define kcg_copy_struct__128479(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128479)))
#endif /* kcg_copy_struct__128479 */

#ifndef kcg_copy_struct__128490
#define kcg_copy_struct__128490(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128490)))
#endif /* kcg_copy_struct__128490 */

#ifndef kcg_copy_struct__128503
#define kcg_copy_struct__128503(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128503)))
#endif /* kcg_copy_struct__128503 */

#ifndef kcg_copy_struct__128513
#define kcg_copy_struct__128513(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128513)))
#endif /* kcg_copy_struct__128513 */

#ifndef kcg_copy_struct__128533
#define kcg_copy_struct__128533(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128533)))
#endif /* kcg_copy_struct__128533 */

#ifndef kcg_copy_struct__128539
#define kcg_copy_struct__128539(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128539)))
#endif /* kcg_copy_struct__128539 */

#ifndef kcg_copy_struct__128548
#define kcg_copy_struct__128548(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128548)))
#endif /* kcg_copy_struct__128548 */

#ifndef kcg_copy_struct__128558
#define kcg_copy_struct__128558(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128558)))
#endif /* kcg_copy_struct__128558 */

#ifndef kcg_copy_struct__128573
#define kcg_copy_struct__128573(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128573)))
#endif /* kcg_copy_struct__128573 */

#ifndef kcg_copy_struct__128583
#define kcg_copy_struct__128583(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128583)))
#endif /* kcg_copy_struct__128583 */

#ifndef kcg_copy_struct__128614
#define kcg_copy_struct__128614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128614)))
#endif /* kcg_copy_struct__128614 */

#ifndef kcg_copy_struct__128619
#define kcg_copy_struct__128619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128619)))
#endif /* kcg_copy_struct__128619 */

#ifndef kcg_copy_struct__128628
#define kcg_copy_struct__128628(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128628)))
#endif /* kcg_copy_struct__128628 */

#ifndef kcg_copy_struct__128638
#define kcg_copy_struct__128638(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128638)))
#endif /* kcg_copy_struct__128638 */

#ifndef kcg_copy_struct__128649
#define kcg_copy_struct__128649(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128649)))
#endif /* kcg_copy_struct__128649 */

#ifndef kcg_copy_struct__128657
#define kcg_copy_struct__128657(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128657)))
#endif /* kcg_copy_struct__128657 */

#ifndef kcg_copy_struct__128696
#define kcg_copy_struct__128696(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128696)))
#endif /* kcg_copy_struct__128696 */

#ifndef kcg_copy_struct__128710
#define kcg_copy_struct__128710(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128710)))
#endif /* kcg_copy_struct__128710 */

#ifndef kcg_copy_struct__128719
#define kcg_copy_struct__128719(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128719)))
#endif /* kcg_copy_struct__128719 */

#ifndef kcg_copy_struct__128725
#define kcg_copy_struct__128725(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128725)))
#endif /* kcg_copy_struct__128725 */

#ifndef kcg_copy_struct__128734
#define kcg_copy_struct__128734(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128734)))
#endif /* kcg_copy_struct__128734 */

#ifndef kcg_copy_struct__128743
#define kcg_copy_struct__128743(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128743)))
#endif /* kcg_copy_struct__128743 */

#ifndef kcg_copy_struct__128751
#define kcg_copy_struct__128751(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128751)))
#endif /* kcg_copy_struct__128751 */

#ifndef kcg_copy_struct__128759
#define kcg_copy_struct__128759(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128759)))
#endif /* kcg_copy_struct__128759 */

#ifndef kcg_copy_struct__128771
#define kcg_copy_struct__128771(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128771)))
#endif /* kcg_copy_struct__128771 */

#ifndef kcg_copy_struct__128784
#define kcg_copy_struct__128784(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128784)))
#endif /* kcg_copy_struct__128784 */

#ifndef kcg_copy_struct__128796
#define kcg_copy_struct__128796(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128796)))
#endif /* kcg_copy_struct__128796 */

#ifndef kcg_copy_struct__128801
#define kcg_copy_struct__128801(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128801)))
#endif /* kcg_copy_struct__128801 */

#ifndef kcg_copy_struct__128807
#define kcg_copy_struct__128807(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128807)))
#endif /* kcg_copy_struct__128807 */

#ifndef kcg_copy_struct__128825
#define kcg_copy_struct__128825(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128825)))
#endif /* kcg_copy_struct__128825 */

#ifndef kcg_copy_struct__128830
#define kcg_copy_struct__128830(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128830)))
#endif /* kcg_copy_struct__128830 */

#ifndef kcg_copy_struct__128838
#define kcg_copy_struct__128838(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128838)))
#endif /* kcg_copy_struct__128838 */

#ifndef kcg_copy_struct__128846
#define kcg_copy_struct__128846(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128846)))
#endif /* kcg_copy_struct__128846 */

#ifndef kcg_copy_struct__128858
#define kcg_copy_struct__128858(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128858)))
#endif /* kcg_copy_struct__128858 */

#ifndef kcg_copy_struct__128869
#define kcg_copy_struct__128869(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128869)))
#endif /* kcg_copy_struct__128869 */

#ifndef kcg_copy_struct__128894
#define kcg_copy_struct__128894(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128894)))
#endif /* kcg_copy_struct__128894 */

#ifndef kcg_copy_struct__128905
#define kcg_copy_struct__128905(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128905)))
#endif /* kcg_copy_struct__128905 */

#ifndef kcg_copy_struct__128915
#define kcg_copy_struct__128915(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128915)))
#endif /* kcg_copy_struct__128915 */

#ifndef kcg_copy_struct__128923
#define kcg_copy_struct__128923(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128923)))
#endif /* kcg_copy_struct__128923 */

#ifndef kcg_copy_struct__128933
#define kcg_copy_struct__128933(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128933)))
#endif /* kcg_copy_struct__128933 */

#ifndef kcg_copy_struct__128939
#define kcg_copy_struct__128939(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128939)))
#endif /* kcg_copy_struct__128939 */

#ifndef kcg_copy_struct__128947
#define kcg_copy_struct__128947(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128947)))
#endif /* kcg_copy_struct__128947 */

#ifndef kcg_copy_struct__128952
#define kcg_copy_struct__128952(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128952)))
#endif /* kcg_copy_struct__128952 */

#ifndef kcg_copy_struct__128959
#define kcg_copy_struct__128959(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128959)))
#endif /* kcg_copy_struct__128959 */

#ifndef kcg_copy_struct__128973
#define kcg_copy_struct__128973(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128973)))
#endif /* kcg_copy_struct__128973 */

#ifndef kcg_copy_struct__128978
#define kcg_copy_struct__128978(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__128978)))
#endif /* kcg_copy_struct__128978 */

#ifndef kcg_copy_struct__129009
#define kcg_copy_struct__129009(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129009)))
#endif /* kcg_copy_struct__129009 */

#ifndef kcg_copy_struct__129024
#define kcg_copy_struct__129024(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129024)))
#endif /* kcg_copy_struct__129024 */

#ifndef kcg_copy_struct__129035
#define kcg_copy_struct__129035(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129035)))
#endif /* kcg_copy_struct__129035 */

#ifndef kcg_copy_struct__129047
#define kcg_copy_struct__129047(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129047)))
#endif /* kcg_copy_struct__129047 */

#ifndef kcg_copy_struct__129055
#define kcg_copy_struct__129055(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129055)))
#endif /* kcg_copy_struct__129055 */

#ifndef kcg_copy_struct__129085
#define kcg_copy_struct__129085(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129085)))
#endif /* kcg_copy_struct__129085 */

#ifndef kcg_copy_struct__129093
#define kcg_copy_struct__129093(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129093)))
#endif /* kcg_copy_struct__129093 */

#ifndef kcg_copy_struct__129099
#define kcg_copy_struct__129099(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129099)))
#endif /* kcg_copy_struct__129099 */

#ifndef kcg_copy_struct__129108
#define kcg_copy_struct__129108(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129108)))
#endif /* kcg_copy_struct__129108 */

#ifndef kcg_copy_struct__129120
#define kcg_copy_struct__129120(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129120)))
#endif /* kcg_copy_struct__129120 */

#ifndef kcg_copy_struct__129127
#define kcg_copy_struct__129127(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129127)))
#endif /* kcg_copy_struct__129127 */

#ifndef kcg_copy_struct__129138
#define kcg_copy_struct__129138(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129138)))
#endif /* kcg_copy_struct__129138 */

#ifndef kcg_copy_struct__129149
#define kcg_copy_struct__129149(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129149)))
#endif /* kcg_copy_struct__129149 */

#ifndef kcg_copy_struct__129160
#define kcg_copy_struct__129160(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129160)))
#endif /* kcg_copy_struct__129160 */

#ifndef kcg_copy_struct__129166
#define kcg_copy_struct__129166(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129166)))
#endif /* kcg_copy_struct__129166 */

#ifndef kcg_copy_struct__129179
#define kcg_copy_struct__129179(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129179)))
#endif /* kcg_copy_struct__129179 */

#ifndef kcg_copy_struct__129189
#define kcg_copy_struct__129189(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129189)))
#endif /* kcg_copy_struct__129189 */

#ifndef kcg_copy_struct__129198
#define kcg_copy_struct__129198(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129198)))
#endif /* kcg_copy_struct__129198 */

#ifndef kcg_copy_struct__129208
#define kcg_copy_struct__129208(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129208)))
#endif /* kcg_copy_struct__129208 */

#ifndef kcg_copy_struct__129217
#define kcg_copy_struct__129217(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129217)))
#endif /* kcg_copy_struct__129217 */

#ifndef kcg_copy_struct__129227
#define kcg_copy_struct__129227(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129227)))
#endif /* kcg_copy_struct__129227 */

#ifndef kcg_copy_struct__129253
#define kcg_copy_struct__129253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129253)))
#endif /* kcg_copy_struct__129253 */

#ifndef kcg_copy_struct__129262
#define kcg_copy_struct__129262(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129262)))
#endif /* kcg_copy_struct__129262 */

#ifndef kcg_copy_struct__129279
#define kcg_copy_struct__129279(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129279)))
#endif /* kcg_copy_struct__129279 */

#ifndef kcg_copy_struct__129292
#define kcg_copy_struct__129292(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129292)))
#endif /* kcg_copy_struct__129292 */

#ifndef kcg_copy_struct__129322
#define kcg_copy_struct__129322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129322)))
#endif /* kcg_copy_struct__129322 */

#ifndef kcg_copy_struct__129333
#define kcg_copy_struct__129333(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129333)))
#endif /* kcg_copy_struct__129333 */

#ifndef kcg_copy_struct__129338
#define kcg_copy_struct__129338(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129338)))
#endif /* kcg_copy_struct__129338 */

#ifndef kcg_copy_struct__129393
#define kcg_copy_struct__129393(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129393)))
#endif /* kcg_copy_struct__129393 */

#ifndef kcg_copy_struct__129402
#define kcg_copy_struct__129402(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129402)))
#endif /* kcg_copy_struct__129402 */

#ifndef kcg_copy_struct__129411
#define kcg_copy_struct__129411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129411)))
#endif /* kcg_copy_struct__129411 */

#ifndef kcg_copy_struct__129418
#define kcg_copy_struct__129418(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129418)))
#endif /* kcg_copy_struct__129418 */

#ifndef kcg_copy_struct__129427
#define kcg_copy_struct__129427(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129427)))
#endif /* kcg_copy_struct__129427 */

#ifndef kcg_copy_struct__129435
#define kcg_copy_struct__129435(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129435)))
#endif /* kcg_copy_struct__129435 */

#ifndef kcg_copy_struct__129445
#define kcg_copy_struct__129445(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129445)))
#endif /* kcg_copy_struct__129445 */

#ifndef kcg_copy_struct__129457
#define kcg_copy_struct__129457(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129457)))
#endif /* kcg_copy_struct__129457 */

#ifndef kcg_copy_struct__129463
#define kcg_copy_struct__129463(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129463)))
#endif /* kcg_copy_struct__129463 */

#ifndef kcg_copy_struct__129475
#define kcg_copy_struct__129475(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129475)))
#endif /* kcg_copy_struct__129475 */

#ifndef kcg_copy_struct__129481
#define kcg_copy_struct__129481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129481)))
#endif /* kcg_copy_struct__129481 */

#ifndef kcg_copy_struct__129494
#define kcg_copy_struct__129494(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129494)))
#endif /* kcg_copy_struct__129494 */

#ifndef kcg_copy_struct__129502
#define kcg_copy_struct__129502(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129502)))
#endif /* kcg_copy_struct__129502 */

#ifndef kcg_copy_struct__129507
#define kcg_copy_struct__129507(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129507)))
#endif /* kcg_copy_struct__129507 */

#ifndef kcg_copy_struct__129513
#define kcg_copy_struct__129513(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129513)))
#endif /* kcg_copy_struct__129513 */

#ifndef kcg_copy_struct__129518
#define kcg_copy_struct__129518(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129518)))
#endif /* kcg_copy_struct__129518 */

#ifndef kcg_copy_struct__129527
#define kcg_copy_struct__129527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129527)))
#endif /* kcg_copy_struct__129527 */

#ifndef kcg_copy_struct__129531
#define kcg_copy_struct__129531(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129531)))
#endif /* kcg_copy_struct__129531 */

#ifndef kcg_copy_struct__129539
#define kcg_copy_struct__129539(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129539)))
#endif /* kcg_copy_struct__129539 */

#ifndef kcg_copy_struct__129552
#define kcg_copy_struct__129552(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129552)))
#endif /* kcg_copy_struct__129552 */

#ifndef kcg_copy_struct__129561
#define kcg_copy_struct__129561(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129561)))
#endif /* kcg_copy_struct__129561 */

#ifndef kcg_copy_struct__129572
#define kcg_copy_struct__129572(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129572)))
#endif /* kcg_copy_struct__129572 */

#ifndef kcg_copy_struct__129584
#define kcg_copy_struct__129584(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129584)))
#endif /* kcg_copy_struct__129584 */

#ifndef kcg_copy_struct__129591
#define kcg_copy_struct__129591(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129591)))
#endif /* kcg_copy_struct__129591 */

#ifndef kcg_copy_struct__129602
#define kcg_copy_struct__129602(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129602)))
#endif /* kcg_copy_struct__129602 */

#ifndef kcg_copy_struct__129613
#define kcg_copy_struct__129613(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129613)))
#endif /* kcg_copy_struct__129613 */

#ifndef kcg_copy_struct__129638
#define kcg_copy_struct__129638(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129638)))
#endif /* kcg_copy_struct__129638 */

#ifndef kcg_copy_struct__129647
#define kcg_copy_struct__129647(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129647)))
#endif /* kcg_copy_struct__129647 */

#ifndef kcg_copy_struct__129657
#define kcg_copy_struct__129657(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129657)))
#endif /* kcg_copy_struct__129657 */

#ifndef kcg_copy_struct__129664
#define kcg_copy_struct__129664(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129664)))
#endif /* kcg_copy_struct__129664 */

#ifndef kcg_copy_struct__129672
#define kcg_copy_struct__129672(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129672)))
#endif /* kcg_copy_struct__129672 */

#ifndef kcg_copy_struct__129683
#define kcg_copy_struct__129683(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129683)))
#endif /* kcg_copy_struct__129683 */

#ifndef kcg_copy_struct__129689
#define kcg_copy_struct__129689(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129689)))
#endif /* kcg_copy_struct__129689 */

#ifndef kcg_copy_struct__129695
#define kcg_copy_struct__129695(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129695)))
#endif /* kcg_copy_struct__129695 */

#ifndef kcg_copy_struct__129703
#define kcg_copy_struct__129703(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129703)))
#endif /* kcg_copy_struct__129703 */

#ifndef kcg_copy_struct__129709
#define kcg_copy_struct__129709(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129709)))
#endif /* kcg_copy_struct__129709 */

#ifndef kcg_copy_struct__129716
#define kcg_copy_struct__129716(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129716)))
#endif /* kcg_copy_struct__129716 */

#ifndef kcg_copy_struct__129726
#define kcg_copy_struct__129726(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129726)))
#endif /* kcg_copy_struct__129726 */

#ifndef kcg_copy_struct__129740
#define kcg_copy_struct__129740(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129740)))
#endif /* kcg_copy_struct__129740 */

#ifndef kcg_copy_struct__129746
#define kcg_copy_struct__129746(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129746)))
#endif /* kcg_copy_struct__129746 */

#ifndef kcg_copy_struct__129753
#define kcg_copy_struct__129753(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129753)))
#endif /* kcg_copy_struct__129753 */

#ifndef kcg_copy_struct__129760
#define kcg_copy_struct__129760(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129760)))
#endif /* kcg_copy_struct__129760 */

#ifndef kcg_copy_struct__129769
#define kcg_copy_struct__129769(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129769)))
#endif /* kcg_copy_struct__129769 */

#ifndef kcg_copy_struct__129779
#define kcg_copy_struct__129779(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129779)))
#endif /* kcg_copy_struct__129779 */

#ifndef kcg_copy_struct__129791
#define kcg_copy_struct__129791(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129791)))
#endif /* kcg_copy_struct__129791 */

#ifndef kcg_copy_struct__129800
#define kcg_copy_struct__129800(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129800)))
#endif /* kcg_copy_struct__129800 */

#ifndef kcg_copy_struct__129806
#define kcg_copy_struct__129806(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129806)))
#endif /* kcg_copy_struct__129806 */

#ifndef kcg_copy_struct__129811
#define kcg_copy_struct__129811(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129811)))
#endif /* kcg_copy_struct__129811 */

#ifndef kcg_copy_struct__129818
#define kcg_copy_struct__129818(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129818)))
#endif /* kcg_copy_struct__129818 */

#ifndef kcg_copy_struct__129840
#define kcg_copy_struct__129840(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129840)))
#endif /* kcg_copy_struct__129840 */

#ifndef kcg_copy_struct__129847
#define kcg_copy_struct__129847(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129847)))
#endif /* kcg_copy_struct__129847 */

#ifndef kcg_copy_struct__129880
#define kcg_copy_struct__129880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129880)))
#endif /* kcg_copy_struct__129880 */

#ifndef kcg_copy_struct__129890
#define kcg_copy_struct__129890(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129890)))
#endif /* kcg_copy_struct__129890 */

#ifndef kcg_copy_struct__129898
#define kcg_copy_struct__129898(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129898)))
#endif /* kcg_copy_struct__129898 */

#ifndef kcg_copy_struct__129907
#define kcg_copy_struct__129907(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129907)))
#endif /* kcg_copy_struct__129907 */

#ifndef kcg_copy_struct__129914
#define kcg_copy_struct__129914(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129914)))
#endif /* kcg_copy_struct__129914 */

#ifndef kcg_copy_struct__129920
#define kcg_copy_struct__129920(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129920)))
#endif /* kcg_copy_struct__129920 */

#ifndef kcg_copy_struct__129932
#define kcg_copy_struct__129932(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129932)))
#endif /* kcg_copy_struct__129932 */

#ifndef kcg_copy_struct__129943
#define kcg_copy_struct__129943(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129943)))
#endif /* kcg_copy_struct__129943 */

#ifndef kcg_copy_struct__129961
#define kcg_copy_struct__129961(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129961)))
#endif /* kcg_copy_struct__129961 */

#ifndef kcg_copy_struct__129967
#define kcg_copy_struct__129967(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129967)))
#endif /* kcg_copy_struct__129967 */

#ifndef kcg_copy_struct__129972
#define kcg_copy_struct__129972(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129972)))
#endif /* kcg_copy_struct__129972 */

#ifndef kcg_copy_struct__129980
#define kcg_copy_struct__129980(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129980)))
#endif /* kcg_copy_struct__129980 */

#ifndef kcg_copy_struct__129991
#define kcg_copy_struct__129991(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__129991)))
#endif /* kcg_copy_struct__129991 */

#ifndef kcg_copy_struct__130002
#define kcg_copy_struct__130002(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130002)))
#endif /* kcg_copy_struct__130002 */

#ifndef kcg_copy_struct__130007
#define kcg_copy_struct__130007(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130007)))
#endif /* kcg_copy_struct__130007 */

#ifndef kcg_copy_struct__130017
#define kcg_copy_struct__130017(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130017)))
#endif /* kcg_copy_struct__130017 */

#ifndef kcg_copy_struct__130023
#define kcg_copy_struct__130023(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130023)))
#endif /* kcg_copy_struct__130023 */

#ifndef kcg_copy_struct__130028
#define kcg_copy_struct__130028(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130028)))
#endif /* kcg_copy_struct__130028 */

#ifndef kcg_copy_struct__130036
#define kcg_copy_struct__130036(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130036)))
#endif /* kcg_copy_struct__130036 */

#ifndef kcg_copy_struct__130048
#define kcg_copy_struct__130048(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130048)))
#endif /* kcg_copy_struct__130048 */

#ifndef kcg_copy_struct__130053
#define kcg_copy_struct__130053(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130053)))
#endif /* kcg_copy_struct__130053 */

#ifndef kcg_copy_struct__130066
#define kcg_copy_struct__130066(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130066)))
#endif /* kcg_copy_struct__130066 */

#ifndef kcg_copy_struct__130075
#define kcg_copy_struct__130075(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130075)))
#endif /* kcg_copy_struct__130075 */

#ifndef kcg_copy_struct__130098
#define kcg_copy_struct__130098(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130098)))
#endif /* kcg_copy_struct__130098 */

#ifndef kcg_copy_struct__130116
#define kcg_copy_struct__130116(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130116)))
#endif /* kcg_copy_struct__130116 */

#ifndef kcg_copy_struct__130121
#define kcg_copy_struct__130121(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130121)))
#endif /* kcg_copy_struct__130121 */

#ifndef kcg_copy_struct__130129
#define kcg_copy_struct__130129(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130129)))
#endif /* kcg_copy_struct__130129 */

#ifndef kcg_copy_struct__130142
#define kcg_copy_struct__130142(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130142)))
#endif /* kcg_copy_struct__130142 */

#ifndef kcg_copy_struct__130162
#define kcg_copy_struct__130162(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130162)))
#endif /* kcg_copy_struct__130162 */

#ifndef kcg_copy_struct__130169
#define kcg_copy_struct__130169(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130169)))
#endif /* kcg_copy_struct__130169 */

#ifndef kcg_copy_struct__130178
#define kcg_copy_struct__130178(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130178)))
#endif /* kcg_copy_struct__130178 */

#ifndef kcg_copy_struct__130184
#define kcg_copy_struct__130184(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130184)))
#endif /* kcg_copy_struct__130184 */

#ifndef kcg_copy_struct__130190
#define kcg_copy_struct__130190(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130190)))
#endif /* kcg_copy_struct__130190 */

#ifndef kcg_copy_struct__130196
#define kcg_copy_struct__130196(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130196)))
#endif /* kcg_copy_struct__130196 */

#ifndef kcg_copy_struct__130203
#define kcg_copy_struct__130203(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130203)))
#endif /* kcg_copy_struct__130203 */

#ifndef kcg_copy_struct__130211
#define kcg_copy_struct__130211(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130211)))
#endif /* kcg_copy_struct__130211 */

#ifndef kcg_copy_struct__130220
#define kcg_copy_struct__130220(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130220)))
#endif /* kcg_copy_struct__130220 */

#ifndef kcg_copy_struct__130232
#define kcg_copy_struct__130232(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130232)))
#endif /* kcg_copy_struct__130232 */

#ifndef kcg_copy_struct__130238
#define kcg_copy_struct__130238(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130238)))
#endif /* kcg_copy_struct__130238 */

#ifndef kcg_copy_struct__130244
#define kcg_copy_struct__130244(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130244)))
#endif /* kcg_copy_struct__130244 */

#ifndef kcg_copy_struct__130262
#define kcg_copy_struct__130262(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130262)))
#endif /* kcg_copy_struct__130262 */

#ifndef kcg_copy_struct__130268
#define kcg_copy_struct__130268(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130268)))
#endif /* kcg_copy_struct__130268 */

#ifndef kcg_copy_struct__130274
#define kcg_copy_struct__130274(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130274)))
#endif /* kcg_copy_struct__130274 */

#ifndef kcg_copy_struct__130290
#define kcg_copy_struct__130290(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130290)))
#endif /* kcg_copy_struct__130290 */

#ifndef kcg_copy_struct__130298
#define kcg_copy_struct__130298(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130298)))
#endif /* kcg_copy_struct__130298 */

#ifndef kcg_copy_struct__130303
#define kcg_copy_struct__130303(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130303)))
#endif /* kcg_copy_struct__130303 */

#ifndef kcg_copy_struct__130311
#define kcg_copy_struct__130311(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130311)))
#endif /* kcg_copy_struct__130311 */

#ifndef kcg_copy_struct__130316
#define kcg_copy_struct__130316(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130316)))
#endif /* kcg_copy_struct__130316 */

#ifndef kcg_copy_struct__130330
#define kcg_copy_struct__130330(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130330)))
#endif /* kcg_copy_struct__130330 */

#ifndef kcg_copy_struct__130341
#define kcg_copy_struct__130341(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130341)))
#endif /* kcg_copy_struct__130341 */

#ifndef kcg_copy_struct__130374
#define kcg_copy_struct__130374(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130374)))
#endif /* kcg_copy_struct__130374 */

#ifndef kcg_copy_struct__130380
#define kcg_copy_struct__130380(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130380)))
#endif /* kcg_copy_struct__130380 */

#ifndef kcg_copy_struct__130406
#define kcg_copy_struct__130406(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130406)))
#endif /* kcg_copy_struct__130406 */

#ifndef kcg_copy_struct__130426
#define kcg_copy_struct__130426(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130426)))
#endif /* kcg_copy_struct__130426 */

#ifndef kcg_copy_struct__130433
#define kcg_copy_struct__130433(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130433)))
#endif /* kcg_copy_struct__130433 */

#ifndef kcg_copy_struct__130438
#define kcg_copy_struct__130438(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130438)))
#endif /* kcg_copy_struct__130438 */

#ifndef kcg_copy_struct__130443
#define kcg_copy_struct__130443(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130443)))
#endif /* kcg_copy_struct__130443 */

#ifndef kcg_copy_struct__130451
#define kcg_copy_struct__130451(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130451)))
#endif /* kcg_copy_struct__130451 */

#ifndef kcg_copy_struct__130458
#define kcg_copy_struct__130458(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130458)))
#endif /* kcg_copy_struct__130458 */

#ifndef kcg_copy_struct__130463
#define kcg_copy_struct__130463(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130463)))
#endif /* kcg_copy_struct__130463 */

#ifndef kcg_copy_struct__130472
#define kcg_copy_struct__130472(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130472)))
#endif /* kcg_copy_struct__130472 */

#ifndef kcg_copy_struct__130481
#define kcg_copy_struct__130481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130481)))
#endif /* kcg_copy_struct__130481 */

#ifndef kcg_copy_struct__130490
#define kcg_copy_struct__130490(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130490)))
#endif /* kcg_copy_struct__130490 */

#ifndef kcg_copy_struct__130499
#define kcg_copy_struct__130499(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130499)))
#endif /* kcg_copy_struct__130499 */

#ifndef kcg_copy_struct__130506
#define kcg_copy_struct__130506(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130506)))
#endif /* kcg_copy_struct__130506 */

#ifndef kcg_copy_struct__130523
#define kcg_copy_struct__130523(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130523)))
#endif /* kcg_copy_struct__130523 */

#ifndef kcg_copy_struct__130535
#define kcg_copy_struct__130535(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130535)))
#endif /* kcg_copy_struct__130535 */

#ifndef kcg_copy_struct__130546
#define kcg_copy_struct__130546(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130546)))
#endif /* kcg_copy_struct__130546 */

#ifndef kcg_copy_struct__130554
#define kcg_copy_struct__130554(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130554)))
#endif /* kcg_copy_struct__130554 */

#ifndef kcg_copy_struct__130574
#define kcg_copy_struct__130574(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130574)))
#endif /* kcg_copy_struct__130574 */

#ifndef kcg_copy_struct__130663
#define kcg_copy_struct__130663(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__130663)))
#endif /* kcg_copy_struct__130663 */

#ifndef kcg_copy_array__127237
#define kcg_copy_array__127237(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127237)))
#endif /* kcg_copy_array__127237 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__127363
#define kcg_copy_array__127363(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127363)))
#endif /* kcg_copy_array__127363 */

#ifndef kcg_copy_array__127454
#define kcg_copy_array__127454(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127454)))
#endif /* kcg_copy_array__127454 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_311
#define kcg_copy_array_int_311(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_311)))
#endif /* kcg_copy_array_int_311 */

#ifndef kcg_copy_array_int_999
#define kcg_copy_array_int_999(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_999)))
#endif /* kcg_copy_array_int_999 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array__127619
#define kcg_copy_array__127619(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127619)))
#endif /* kcg_copy_array__127619 */

#ifndef kcg_copy_array__127640
#define kcg_copy_array__127640(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127640)))
#endif /* kcg_copy_array__127640 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__127703
#define kcg_copy_array__127703(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127703)))
#endif /* kcg_copy_array__127703 */

#ifndef kcg_copy_array__127733
#define kcg_copy_array__127733(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127733)))
#endif /* kcg_copy_array__127733 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array__127967
#define kcg_copy_array__127967(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127967)))
#endif /* kcg_copy_array__127967 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__127987
#define kcg_copy_array__127987(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127987)))
#endif /* kcg_copy_array__127987 */

#ifndef kcg_copy_array__127990
#define kcg_copy_array__127990(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__127990)))
#endif /* kcg_copy_array__127990 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__128045
#define kcg_copy_array__128045(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128045)))
#endif /* kcg_copy_array__128045 */

#ifndef kcg_copy_array__128077
#define kcg_copy_array__128077(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128077)))
#endif /* kcg_copy_array__128077 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__128099
#define kcg_copy_array__128099(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128099)))
#endif /* kcg_copy_array__128099 */

#ifndef kcg_copy_array__128109
#define kcg_copy_array__128109(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128109)))
#endif /* kcg_copy_array__128109 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__128158
#define kcg_copy_array__128158(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128158)))
#endif /* kcg_copy_array__128158 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__128187
#define kcg_copy_array__128187(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128187)))
#endif /* kcg_copy_array__128187 */

#ifndef kcg_copy_array__128412
#define kcg_copy_array__128412(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128412)))
#endif /* kcg_copy_array__128412 */

#ifndef kcg_copy_array__128437
#define kcg_copy_array__128437(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128437)))
#endif /* kcg_copy_array__128437 */

#ifndef kcg_copy_array__128467
#define kcg_copy_array__128467(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128467)))
#endif /* kcg_copy_array__128467 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array__128545
#define kcg_copy_array__128545(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128545)))
#endif /* kcg_copy_array__128545 */

#ifndef kcg_copy_array__128555
#define kcg_copy_array__128555(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128555)))
#endif /* kcg_copy_array__128555 */

#ifndef kcg_copy_array__128570
#define kcg_copy_array__128570(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128570)))
#endif /* kcg_copy_array__128570 */

#ifndef kcg_copy_array__128580
#define kcg_copy_array__128580(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128580)))
#endif /* kcg_copy_array__128580 */

#ifndef kcg_copy_array__128625
#define kcg_copy_array__128625(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128625)))
#endif /* kcg_copy_array__128625 */

#ifndef kcg_copy_array__128635
#define kcg_copy_array__128635(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128635)))
#endif /* kcg_copy_array__128635 */

#ifndef kcg_copy_array__128646
#define kcg_copy_array__128646(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128646)))
#endif /* kcg_copy_array__128646 */

#ifndef kcg_copy_array__128654
#define kcg_copy_array__128654(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128654)))
#endif /* kcg_copy_array__128654 */

#ifndef kcg_copy_array__128707
#define kcg_copy_array__128707(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128707)))
#endif /* kcg_copy_array__128707 */

#ifndef kcg_copy_array__128740
#define kcg_copy_array__128740(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128740)))
#endif /* kcg_copy_array__128740 */

#ifndef kcg_copy_array__128756
#define kcg_copy_array__128756(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128756)))
#endif /* kcg_copy_array__128756 */

#ifndef kcg_copy_array__128793
#define kcg_copy_array__128793(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128793)))
#endif /* kcg_copy_array__128793 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__128866
#define kcg_copy_array__128866(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128866)))
#endif /* kcg_copy_array__128866 */

#ifndef kcg_copy_array__128902
#define kcg_copy_array__128902(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128902)))
#endif /* kcg_copy_array__128902 */

#ifndef kcg_copy_array__128912
#define kcg_copy_array__128912(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128912)))
#endif /* kcg_copy_array__128912 */

#ifndef kcg_copy_array__128944
#define kcg_copy_array__128944(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128944)))
#endif /* kcg_copy_array__128944 */

#ifndef kcg_copy_array__128967
#define kcg_copy_array__128967(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128967)))
#endif /* kcg_copy_array__128967 */

#ifndef kcg_copy_array__128970
#define kcg_copy_array__128970(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__128970)))
#endif /* kcg_copy_array__128970 */

#ifndef kcg_copy_array__129006
#define kcg_copy_array__129006(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129006)))
#endif /* kcg_copy_array__129006 */

#ifndef kcg_copy_array__129021
#define kcg_copy_array__129021(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129021)))
#endif /* kcg_copy_array__129021 */

#ifndef kcg_copy_array__129032
#define kcg_copy_array__129032(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129032)))
#endif /* kcg_copy_array__129032 */

#ifndef kcg_copy_array__129044
#define kcg_copy_array__129044(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129044)))
#endif /* kcg_copy_array__129044 */

#ifndef kcg_copy_array__129082
#define kcg_copy_array__129082(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129082)))
#endif /* kcg_copy_array__129082 */

#ifndef kcg_copy_array__129105
#define kcg_copy_array__129105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129105)))
#endif /* kcg_copy_array__129105 */

#ifndef kcg_copy_array__129117
#define kcg_copy_array__129117(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129117)))
#endif /* kcg_copy_array__129117 */

#ifndef kcg_copy_array__129135
#define kcg_copy_array__129135(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129135)))
#endif /* kcg_copy_array__129135 */

#ifndef kcg_copy_array__129146
#define kcg_copy_array__129146(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129146)))
#endif /* kcg_copy_array__129146 */

#ifndef kcg_copy_array__129176
#define kcg_copy_array__129176(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129176)))
#endif /* kcg_copy_array__129176 */

#ifndef kcg_copy_array__129186
#define kcg_copy_array__129186(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129186)))
#endif /* kcg_copy_array__129186 */

#ifndef kcg_copy_array__129205
#define kcg_copy_array__129205(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129205)))
#endif /* kcg_copy_array__129205 */

#ifndef kcg_copy_array__129214
#define kcg_copy_array__129214(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129214)))
#endif /* kcg_copy_array__129214 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__129286
#define kcg_copy_array__129286(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129286)))
#endif /* kcg_copy_array__129286 */

#ifndef kcg_copy_array__129289
#define kcg_copy_array__129289(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129289)))
#endif /* kcg_copy_array__129289 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__129327
#define kcg_copy_array__129327(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129327)))
#endif /* kcg_copy_array__129327 */

#ifndef kcg_copy_array__129330
#define kcg_copy_array__129330(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129330)))
#endif /* kcg_copy_array__129330 */

#ifndef kcg_copy_array_int_2_4
#define kcg_copy_array_int_2_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_4)))
#endif /* kcg_copy_array_int_2_4 */

#ifndef kcg_copy_array__129488
#define kcg_copy_array__129488(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129488)))
#endif /* kcg_copy_array__129488 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array__129524
#define kcg_copy_array__129524(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129524)))
#endif /* kcg_copy_array__129524 */

#ifndef kcg_copy_array__129536
#define kcg_copy_array__129536(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129536)))
#endif /* kcg_copy_array__129536 */

#ifndef kcg_copy_array__129558
#define kcg_copy_array__129558(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129558)))
#endif /* kcg_copy_array__129558 */

#ifndef kcg_copy_array__129620
#define kcg_copy_array__129620(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129620)))
#endif /* kcg_copy_array__129620 */

#ifndef kcg_copy_array__129623
#define kcg_copy_array__129623(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129623)))
#endif /* kcg_copy_array__129623 */

#ifndef kcg_copy_array__129626
#define kcg_copy_array__129626(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129626)))
#endif /* kcg_copy_array__129626 */

#ifndef kcg_copy_array__129629
#define kcg_copy_array__129629(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129629)))
#endif /* kcg_copy_array__129629 */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_bool_256_46
#define kcg_copy_array_bool_256_46(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46)))
#endif /* kcg_copy_array_bool_256_46 */

#ifndef kcg_copy_array__129654
#define kcg_copy_array__129654(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129654)))
#endif /* kcg_copy_array__129654 */

#ifndef kcg_copy_array__129737
#define kcg_copy_array__129737(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129737)))
#endif /* kcg_copy_array__129737 */

#ifndef kcg_copy_array_char_255
#define kcg_copy_array_char_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_255)))
#endif /* kcg_copy_array_char_255 */

#ifndef kcg_copy_array_char_9
#define kcg_copy_array_char_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_9)))
#endif /* kcg_copy_array_char_9 */

#ifndef kcg_copy_array_int_255
#define kcg_copy_array_int_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_255)))
#endif /* kcg_copy_array_int_255 */

#ifndef kcg_copy_array_int_261
#define kcg_copy_array_int_261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_261)))
#endif /* kcg_copy_array_int_261 */

#ifndef kcg_copy_array_bool_114
#define kcg_copy_array_bool_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_114)))
#endif /* kcg_copy_array_bool_114 */

#ifndef kcg_copy_array_real_114
#define kcg_copy_array_real_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_114)))
#endif /* kcg_copy_array_real_114 */

#ifndef kcg_copy_array__129887
#define kcg_copy_array__129887(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129887)))
#endif /* kcg_copy_array__129887 */

#ifndef kcg_copy_array__129904
#define kcg_copy_array__129904(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129904)))
#endif /* kcg_copy_array__129904 */

#ifndef kcg_copy_array__129926
#define kcg_copy_array__129926(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129926)))
#endif /* kcg_copy_array__129926 */

#ifndef kcg_copy_array__129929
#define kcg_copy_array__129929(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129929)))
#endif /* kcg_copy_array__129929 */

#ifndef kcg_copy_array__129940
#define kcg_copy_array__129940(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__129940)))
#endif /* kcg_copy_array__129940 */

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

#ifndef kcg_copy_array__130072
#define kcg_copy_array__130072(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130072)))
#endif /* kcg_copy_array__130072 */

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

#ifndef kcg_copy_array__130287
#define kcg_copy_array__130287(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130287)))
#endif /* kcg_copy_array__130287 */

#ifndef kcg_copy_array__130295
#define kcg_copy_array__130295(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130295)))
#endif /* kcg_copy_array__130295 */

#ifndef kcg_copy_array__130308
#define kcg_copy_array__130308(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130308)))
#endif /* kcg_copy_array__130308 */

#ifndef kcg_copy_array_int_325
#define kcg_copy_array_int_325(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_325)))
#endif /* kcg_copy_array_int_325 */

#ifndef kcg_copy_array_int_262
#define kcg_copy_array_int_262(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_262)))
#endif /* kcg_copy_array_int_262 */

#ifndef kcg_copy_array__130496
#define kcg_copy_array__130496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130496)))
#endif /* kcg_copy_array__130496 */

#ifndef kcg_copy_array__130543
#define kcg_copy_array__130543(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130543)))
#endif /* kcg_copy_array__130543 */

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

#ifndef kcg_copy_array__130585
#define kcg_copy_array__130585(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130585)))
#endif /* kcg_copy_array__130585 */

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

#ifndef kcg_copy_array__130612
#define kcg_copy_array__130612(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130612)))
#endif /* kcg_copy_array__130612 */

#ifndef kcg_copy_array__130615
#define kcg_copy_array__130615(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130615)))
#endif /* kcg_copy_array__130615 */

#ifndef kcg_copy_array__130618
#define kcg_copy_array__130618(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130618)))
#endif /* kcg_copy_array__130618 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array__130627
#define kcg_copy_array__130627(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130627)))
#endif /* kcg_copy_array__130627 */

#ifndef kcg_copy_array__130630
#define kcg_copy_array__130630(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130630)))
#endif /* kcg_copy_array__130630 */

#ifndef kcg_copy_array_int_42
#define kcg_copy_array_int_42(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_42)))
#endif /* kcg_copy_array_int_42 */

#ifndef kcg_copy_array__130636
#define kcg_copy_array__130636(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130636)))
#endif /* kcg_copy_array__130636 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array__130657
#define kcg_copy_array__130657(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__130657)))
#endif /* kcg_copy_array__130657 */

#ifndef kcg_copy_array_bool_5
#define kcg_copy_array_bool_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_5)))
#endif /* kcg_copy_array_bool_5 */

#ifndef kcg_copy_array_real_113
#define kcg_copy_array_real_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_113)))
#endif /* kcg_copy_array_real_113 */

#ifndef kcg_copy_array_bool_113
#define kcg_copy_array_bool_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_113)))
#endif /* kcg_copy_array_bool_113 */

#ifndef kcg_copy_array__135638
#define kcg_copy_array__135638(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__135638)))
#endif /* kcg_copy_array__135638 */

#ifndef kcg_copy_array__136078
#define kcg_copy_array__136078(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136078)))
#endif /* kcg_copy_array__136078 */

#ifndef kcg_copy_array__136315
#define kcg_copy_array__136315(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136315)))
#endif /* kcg_copy_array__136315 */

#ifndef kcg_copy_array__136412
#define kcg_copy_array__136412(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136412)))
#endif /* kcg_copy_array__136412 */

#ifndef kcg_copy_array__136565
#define kcg_copy_array__136565(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136565)))
#endif /* kcg_copy_array__136565 */

#ifndef kcg_copy_array__136569
#define kcg_copy_array__136569(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136569)))
#endif /* kcg_copy_array__136569 */

#ifndef kcg_copy_array__136573
#define kcg_copy_array__136573(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136573)))
#endif /* kcg_copy_array__136573 */

#ifndef kcg_copy_array__136576
#define kcg_copy_array__136576(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136576)))
#endif /* kcg_copy_array__136576 */

#ifndef kcg_copy_array__136580
#define kcg_copy_array__136580(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136580)))
#endif /* kcg_copy_array__136580 */

#ifndef kcg_copy_array__136583
#define kcg_copy_array__136583(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136583)))
#endif /* kcg_copy_array__136583 */

#ifndef kcg_copy_array__136587
#define kcg_copy_array__136587(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136587)))
#endif /* kcg_copy_array__136587 */

#ifndef kcg_copy_array__136673
#define kcg_copy_array__136673(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__136673)))
#endif /* kcg_copy_array__136673 */

#ifndef kcg_comp_struct__127225
extern kcg_bool kcg_comp_struct__127225(
  struct__127225 *kcg_c1,
  struct__127225 *kcg_c2);
#endif /* kcg_comp_struct__127225 */

#ifndef kcg_comp_struct__127232
extern kcg_bool kcg_comp_struct__127232(
  struct__127232 *kcg_c1,
  struct__127232 *kcg_c2);
#endif /* kcg_comp_struct__127232 */

#ifndef kcg_comp_struct__127240
extern kcg_bool kcg_comp_struct__127240(
  struct__127240 *kcg_c1,
  struct__127240 *kcg_c2);
#endif /* kcg_comp_struct__127240 */

#ifndef kcg_comp_struct__127245
extern kcg_bool kcg_comp_struct__127245(
  struct__127245 *kcg_c1,
  struct__127245 *kcg_c2);
#endif /* kcg_comp_struct__127245 */

#ifndef kcg_comp_struct__127252
extern kcg_bool kcg_comp_struct__127252(
  struct__127252 *kcg_c1,
  struct__127252 *kcg_c2);
#endif /* kcg_comp_struct__127252 */

#ifndef kcg_comp_struct__127270
extern kcg_bool kcg_comp_struct__127270(
  struct__127270 *kcg_c1,
  struct__127270 *kcg_c2);
#endif /* kcg_comp_struct__127270 */

#ifndef kcg_comp_struct__127282
extern kcg_bool kcg_comp_struct__127282(
  struct__127282 *kcg_c1,
  struct__127282 *kcg_c2);
#endif /* kcg_comp_struct__127282 */

#ifndef kcg_comp_struct__127289
extern kcg_bool kcg_comp_struct__127289(
  struct__127289 *kcg_c1,
  struct__127289 *kcg_c2);
#endif /* kcg_comp_struct__127289 */

#ifndef kcg_comp_struct__127297
extern kcg_bool kcg_comp_struct__127297(
  struct__127297 *kcg_c1,
  struct__127297 *kcg_c2);
#endif /* kcg_comp_struct__127297 */

#ifndef kcg_comp_struct__127310
extern kcg_bool kcg_comp_struct__127310(
  struct__127310 *kcg_c1,
  struct__127310 *kcg_c2);
#endif /* kcg_comp_struct__127310 */

#ifndef kcg_comp_struct__127317
extern kcg_bool kcg_comp_struct__127317(
  struct__127317 *kcg_c1,
  struct__127317 *kcg_c2);
#endif /* kcg_comp_struct__127317 */

#ifndef kcg_comp_struct__127323
extern kcg_bool kcg_comp_struct__127323(
  struct__127323 *kcg_c1,
  struct__127323 *kcg_c2);
#endif /* kcg_comp_struct__127323 */

#ifndef kcg_comp_struct__127333
extern kcg_bool kcg_comp_struct__127333(
  struct__127333 *kcg_c1,
  struct__127333 *kcg_c2);
#endif /* kcg_comp_struct__127333 */

#ifndef kcg_comp_struct__127339
extern kcg_bool kcg_comp_struct__127339(
  struct__127339 *kcg_c1,
  struct__127339 *kcg_c2);
#endif /* kcg_comp_struct__127339 */

#ifndef kcg_comp_struct__127344
extern kcg_bool kcg_comp_struct__127344(
  struct__127344 *kcg_c1,
  struct__127344 *kcg_c2);
#endif /* kcg_comp_struct__127344 */

#ifndef kcg_comp_struct__127355
extern kcg_bool kcg_comp_struct__127355(
  struct__127355 *kcg_c1,
  struct__127355 *kcg_c2);
#endif /* kcg_comp_struct__127355 */

#ifndef kcg_comp_struct__127366
extern kcg_bool kcg_comp_struct__127366(
  struct__127366 *kcg_c1,
  struct__127366 *kcg_c2);
#endif /* kcg_comp_struct__127366 */

#ifndef kcg_comp_struct__127371
extern kcg_bool kcg_comp_struct__127371(
  struct__127371 *kcg_c1,
  struct__127371 *kcg_c2);
#endif /* kcg_comp_struct__127371 */

#ifndef kcg_comp_struct__127380
extern kcg_bool kcg_comp_struct__127380(
  struct__127380 *kcg_c1,
  struct__127380 *kcg_c2);
#endif /* kcg_comp_struct__127380 */

#ifndef kcg_comp_struct__127393
extern kcg_bool kcg_comp_struct__127393(
  struct__127393 *kcg_c1,
  struct__127393 *kcg_c2);
#endif /* kcg_comp_struct__127393 */

#ifndef kcg_comp_struct__127407
extern kcg_bool kcg_comp_struct__127407(
  struct__127407 *kcg_c1,
  struct__127407 *kcg_c2);
#endif /* kcg_comp_struct__127407 */

#ifndef kcg_comp_struct__127412
extern kcg_bool kcg_comp_struct__127412(
  struct__127412 *kcg_c1,
  struct__127412 *kcg_c2);
#endif /* kcg_comp_struct__127412 */

#ifndef kcg_comp_struct__127418
extern kcg_bool kcg_comp_struct__127418(
  struct__127418 *kcg_c1,
  struct__127418 *kcg_c2);
#endif /* kcg_comp_struct__127418 */

#ifndef kcg_comp_struct__127424
extern kcg_bool kcg_comp_struct__127424(
  struct__127424 *kcg_c1,
  struct__127424 *kcg_c2);
#endif /* kcg_comp_struct__127424 */

#ifndef kcg_comp_struct__127429
extern kcg_bool kcg_comp_struct__127429(
  struct__127429 *kcg_c1,
  struct__127429 *kcg_c2);
#endif /* kcg_comp_struct__127429 */

#ifndef kcg_comp_struct__127438
extern kcg_bool kcg_comp_struct__127438(
  struct__127438 *kcg_c1,
  struct__127438 *kcg_c2);
#endif /* kcg_comp_struct__127438 */

#ifndef kcg_comp_struct__127449
extern kcg_bool kcg_comp_struct__127449(
  struct__127449 *kcg_c1,
  struct__127449 *kcg_c2);
#endif /* kcg_comp_struct__127449 */

#ifndef kcg_comp_struct__127460
extern kcg_bool kcg_comp_struct__127460(
  struct__127460 *kcg_c1,
  struct__127460 *kcg_c2);
#endif /* kcg_comp_struct__127460 */

#ifndef kcg_comp_struct__127478
extern kcg_bool kcg_comp_struct__127478(
  struct__127478 *kcg_c1,
  struct__127478 *kcg_c2);
#endif /* kcg_comp_struct__127478 */

#ifndef kcg_comp_struct__127487
extern kcg_bool kcg_comp_struct__127487(
  struct__127487 *kcg_c1,
  struct__127487 *kcg_c2);
#endif /* kcg_comp_struct__127487 */

#ifndef kcg_comp_struct__127498
extern kcg_bool kcg_comp_struct__127498(
  struct__127498 *kcg_c1,
  struct__127498 *kcg_c2);
#endif /* kcg_comp_struct__127498 */

#ifndef kcg_comp_struct__127503
extern kcg_bool kcg_comp_struct__127503(
  struct__127503 *kcg_c1,
  struct__127503 *kcg_c2);
#endif /* kcg_comp_struct__127503 */

#ifndef kcg_comp_struct__127509
extern kcg_bool kcg_comp_struct__127509(
  struct__127509 *kcg_c1,
  struct__127509 *kcg_c2);
#endif /* kcg_comp_struct__127509 */

#ifndef kcg_comp_struct__127514
extern kcg_bool kcg_comp_struct__127514(
  struct__127514 *kcg_c1,
  struct__127514 *kcg_c2);
#endif /* kcg_comp_struct__127514 */

#ifndef kcg_comp_struct__127519
extern kcg_bool kcg_comp_struct__127519(
  struct__127519 *kcg_c1,
  struct__127519 *kcg_c2);
#endif /* kcg_comp_struct__127519 */

#ifndef kcg_comp_struct__127525
extern kcg_bool kcg_comp_struct__127525(
  struct__127525 *kcg_c1,
  struct__127525 *kcg_c2);
#endif /* kcg_comp_struct__127525 */

#ifndef kcg_comp_struct__127533
extern kcg_bool kcg_comp_struct__127533(
  struct__127533 *kcg_c1,
  struct__127533 *kcg_c2);
#endif /* kcg_comp_struct__127533 */

#ifndef kcg_comp_struct__127540
extern kcg_bool kcg_comp_struct__127540(
  struct__127540 *kcg_c1,
  struct__127540 *kcg_c2);
#endif /* kcg_comp_struct__127540 */

#ifndef kcg_comp_struct__127546
extern kcg_bool kcg_comp_struct__127546(
  struct__127546 *kcg_c1,
  struct__127546 *kcg_c2);
#endif /* kcg_comp_struct__127546 */

#ifndef kcg_comp_struct__127551
extern kcg_bool kcg_comp_struct__127551(
  struct__127551 *kcg_c1,
  struct__127551 *kcg_c2);
#endif /* kcg_comp_struct__127551 */

#ifndef kcg_comp_struct__127561
extern kcg_bool kcg_comp_struct__127561(
  struct__127561 *kcg_c1,
  struct__127561 *kcg_c2);
#endif /* kcg_comp_struct__127561 */

#ifndef kcg_comp_struct__127566
extern kcg_bool kcg_comp_struct__127566(
  struct__127566 *kcg_c1,
  struct__127566 *kcg_c2);
#endif /* kcg_comp_struct__127566 */

#ifndef kcg_comp_struct__127575
extern kcg_bool kcg_comp_struct__127575(
  struct__127575 *kcg_c1,
  struct__127575 *kcg_c2);
#endif /* kcg_comp_struct__127575 */

#ifndef kcg_comp_struct__127586
extern kcg_bool kcg_comp_struct__127586(
  struct__127586 *kcg_c1,
  struct__127586 *kcg_c2);
#endif /* kcg_comp_struct__127586 */

#ifndef kcg_comp_struct__127591
extern kcg_bool kcg_comp_struct__127591(
  struct__127591 *kcg_c1,
  struct__127591 *kcg_c2);
#endif /* kcg_comp_struct__127591 */

#ifndef kcg_comp_struct__127609
extern kcg_bool kcg_comp_struct__127609(
  struct__127609 *kcg_c1,
  struct__127609 *kcg_c2);
#endif /* kcg_comp_struct__127609 */

#ifndef kcg_comp_struct__127614
extern kcg_bool kcg_comp_struct__127614(
  struct__127614 *kcg_c1,
  struct__127614 *kcg_c2);
#endif /* kcg_comp_struct__127614 */

#ifndef kcg_comp_struct__127622
extern kcg_bool kcg_comp_struct__127622(
  struct__127622 *kcg_c1,
  struct__127622 *kcg_c2);
#endif /* kcg_comp_struct__127622 */

#ifndef kcg_comp_struct__127626
extern kcg_bool kcg_comp_struct__127626(
  struct__127626 *kcg_c1,
  struct__127626 *kcg_c2);
#endif /* kcg_comp_struct__127626 */

#ifndef kcg_comp_struct__127635
extern kcg_bool kcg_comp_struct__127635(
  struct__127635 *kcg_c1,
  struct__127635 *kcg_c2);
#endif /* kcg_comp_struct__127635 */

#ifndef kcg_comp_struct__127643
extern kcg_bool kcg_comp_struct__127643(
  struct__127643 *kcg_c1,
  struct__127643 *kcg_c2);
#endif /* kcg_comp_struct__127643 */

#ifndef kcg_comp_struct__127653
extern kcg_bool kcg_comp_struct__127653(
  struct__127653 *kcg_c1,
  struct__127653 *kcg_c2);
#endif /* kcg_comp_struct__127653 */

#ifndef kcg_comp_struct__127660
extern kcg_bool kcg_comp_struct__127660(
  struct__127660 *kcg_c1,
  struct__127660 *kcg_c2);
#endif /* kcg_comp_struct__127660 */

#ifndef kcg_comp_struct__127670
extern kcg_bool kcg_comp_struct__127670(
  struct__127670 *kcg_c1,
  struct__127670 *kcg_c2);
#endif /* kcg_comp_struct__127670 */

#ifndef kcg_comp_struct__127677
extern kcg_bool kcg_comp_struct__127677(
  struct__127677 *kcg_c1,
  struct__127677 *kcg_c2);
#endif /* kcg_comp_struct__127677 */

#ifndef kcg_comp_struct__127698
extern kcg_bool kcg_comp_struct__127698(
  struct__127698 *kcg_c1,
  struct__127698 *kcg_c2);
#endif /* kcg_comp_struct__127698 */

#ifndef kcg_comp_struct__127706
extern kcg_bool kcg_comp_struct__127706(
  struct__127706 *kcg_c1,
  struct__127706 *kcg_c2);
#endif /* kcg_comp_struct__127706 */

#ifndef kcg_comp_struct__127724
extern kcg_bool kcg_comp_struct__127724(
  struct__127724 *kcg_c1,
  struct__127724 *kcg_c2);
#endif /* kcg_comp_struct__127724 */

#ifndef kcg_comp_struct__127729
extern kcg_bool kcg_comp_struct__127729(
  struct__127729 *kcg_c1,
  struct__127729 *kcg_c2);
#endif /* kcg_comp_struct__127729 */

#ifndef kcg_comp_struct__127736
extern kcg_bool kcg_comp_struct__127736(
  struct__127736 *kcg_c1,
  struct__127736 *kcg_c2);
#endif /* kcg_comp_struct__127736 */

#ifndef kcg_comp_struct__127745
extern kcg_bool kcg_comp_struct__127745(
  struct__127745 *kcg_c1,
  struct__127745 *kcg_c2);
#endif /* kcg_comp_struct__127745 */

#ifndef kcg_comp_struct__127757
extern kcg_bool kcg_comp_struct__127757(
  struct__127757 *kcg_c1,
  struct__127757 *kcg_c2);
#endif /* kcg_comp_struct__127757 */

#ifndef kcg_comp_struct__127773
extern kcg_bool kcg_comp_struct__127773(
  struct__127773 *kcg_c1,
  struct__127773 *kcg_c2);
#endif /* kcg_comp_struct__127773 */

#ifndef kcg_comp_struct__127778
extern kcg_bool kcg_comp_struct__127778(
  struct__127778 *kcg_c1,
  struct__127778 *kcg_c2);
#endif /* kcg_comp_struct__127778 */

#ifndef kcg_comp_struct__127784
extern kcg_bool kcg_comp_struct__127784(
  struct__127784 *kcg_c1,
  struct__127784 *kcg_c2);
#endif /* kcg_comp_struct__127784 */

#ifndef kcg_comp_struct__127804
extern kcg_bool kcg_comp_struct__127804(
  struct__127804 *kcg_c1,
  struct__127804 *kcg_c2);
#endif /* kcg_comp_struct__127804 */

#ifndef kcg_comp_struct__127809
extern kcg_bool kcg_comp_struct__127809(
  struct__127809 *kcg_c1,
  struct__127809 *kcg_c2);
#endif /* kcg_comp_struct__127809 */

#ifndef kcg_comp_struct__127828
extern kcg_bool kcg_comp_struct__127828(
  struct__127828 *kcg_c1,
  struct__127828 *kcg_c2);
#endif /* kcg_comp_struct__127828 */

#ifndef kcg_comp_struct__127833
extern kcg_bool kcg_comp_struct__127833(
  struct__127833 *kcg_c1,
  struct__127833 *kcg_c2);
#endif /* kcg_comp_struct__127833 */

#ifndef kcg_comp_struct__127838
extern kcg_bool kcg_comp_struct__127838(
  struct__127838 *kcg_c1,
  struct__127838 *kcg_c2);
#endif /* kcg_comp_struct__127838 */

#ifndef kcg_comp_struct__127843
extern kcg_bool kcg_comp_struct__127843(
  struct__127843 *kcg_c1,
  struct__127843 *kcg_c2);
#endif /* kcg_comp_struct__127843 */

#ifndef kcg_comp_struct__127853
extern kcg_bool kcg_comp_struct__127853(
  struct__127853 *kcg_c1,
  struct__127853 *kcg_c2);
#endif /* kcg_comp_struct__127853 */

#ifndef kcg_comp_struct__127859
extern kcg_bool kcg_comp_struct__127859(
  struct__127859 *kcg_c1,
  struct__127859 *kcg_c2);
#endif /* kcg_comp_struct__127859 */

#ifndef kcg_comp_struct__127877
extern kcg_bool kcg_comp_struct__127877(
  struct__127877 *kcg_c1,
  struct__127877 *kcg_c2);
#endif /* kcg_comp_struct__127877 */

#ifndef kcg_comp_struct__127884
extern kcg_bool kcg_comp_struct__127884(
  struct__127884 *kcg_c1,
  struct__127884 *kcg_c2);
#endif /* kcg_comp_struct__127884 */

#ifndef kcg_comp_struct__127891
extern kcg_bool kcg_comp_struct__127891(
  struct__127891 *kcg_c1,
  struct__127891 *kcg_c2);
#endif /* kcg_comp_struct__127891 */

#ifndef kcg_comp_struct__127898
extern kcg_bool kcg_comp_struct__127898(
  struct__127898 *kcg_c1,
  struct__127898 *kcg_c2);
#endif /* kcg_comp_struct__127898 */

#ifndef kcg_comp_struct__127906
extern kcg_bool kcg_comp_struct__127906(
  struct__127906 *kcg_c1,
  struct__127906 *kcg_c2);
#endif /* kcg_comp_struct__127906 */

#ifndef kcg_comp_struct__127927
extern kcg_bool kcg_comp_struct__127927(
  struct__127927 *kcg_c1,
  struct__127927 *kcg_c2);
#endif /* kcg_comp_struct__127927 */

#ifndef kcg_comp_struct__127962
extern kcg_bool kcg_comp_struct__127962(
  struct__127962 *kcg_c1,
  struct__127962 *kcg_c2);
#endif /* kcg_comp_struct__127962 */

#ifndef kcg_comp_struct__127970
extern kcg_bool kcg_comp_struct__127970(
  struct__127970 *kcg_c1,
  struct__127970 *kcg_c2);
#endif /* kcg_comp_struct__127970 */

#ifndef kcg_comp_struct__127993
extern kcg_bool kcg_comp_struct__127993(
  struct__127993 *kcg_c1,
  struct__127993 *kcg_c2);
#endif /* kcg_comp_struct__127993 */

#ifndef kcg_comp_struct__128011
extern kcg_bool kcg_comp_struct__128011(
  struct__128011 *kcg_c1,
  struct__128011 *kcg_c2);
#endif /* kcg_comp_struct__128011 */

#ifndef kcg_comp_struct__128040
extern kcg_bool kcg_comp_struct__128040(
  struct__128040 *kcg_c1,
  struct__128040 *kcg_c2);
#endif /* kcg_comp_struct__128040 */

#ifndef kcg_comp_struct__128048
extern kcg_bool kcg_comp_struct__128048(
  struct__128048 *kcg_c1,
  struct__128048 *kcg_c2);
#endif /* kcg_comp_struct__128048 */

#ifndef kcg_comp_struct__128061
extern kcg_bool kcg_comp_struct__128061(
  struct__128061 *kcg_c1,
  struct__128061 *kcg_c2);
#endif /* kcg_comp_struct__128061 */

#ifndef kcg_comp_struct__128071
extern kcg_bool kcg_comp_struct__128071(
  struct__128071 *kcg_c1,
  struct__128071 *kcg_c2);
#endif /* kcg_comp_struct__128071 */

#ifndef kcg_comp_struct__128080
extern kcg_bool kcg_comp_struct__128080(
  struct__128080 *kcg_c1,
  struct__128080 *kcg_c2);
#endif /* kcg_comp_struct__128080 */

#ifndef kcg_comp_struct__128102
extern kcg_bool kcg_comp_struct__128102(
  struct__128102 *kcg_c1,
  struct__128102 *kcg_c2);
#endif /* kcg_comp_struct__128102 */

#ifndef kcg_comp_struct__128112
extern kcg_bool kcg_comp_struct__128112(
  struct__128112 *kcg_c1,
  struct__128112 *kcg_c2);
#endif /* kcg_comp_struct__128112 */

#ifndef kcg_comp_struct__128148
extern kcg_bool kcg_comp_struct__128148(
  struct__128148 *kcg_c1,
  struct__128148 *kcg_c2);
#endif /* kcg_comp_struct__128148 */

#ifndef kcg_comp_struct__128161
extern kcg_bool kcg_comp_struct__128161(
  struct__128161 *kcg_c1,
  struct__128161 *kcg_c2);
#endif /* kcg_comp_struct__128161 */

#ifndef kcg_comp_struct__128190
extern kcg_bool kcg_comp_struct__128190(
  struct__128190 *kcg_c1,
  struct__128190 *kcg_c2);
#endif /* kcg_comp_struct__128190 */

#ifndef kcg_comp_struct__128202
extern kcg_bool kcg_comp_struct__128202(
  struct__128202 *kcg_c1,
  struct__128202 *kcg_c2);
#endif /* kcg_comp_struct__128202 */

#ifndef kcg_comp_struct__128208
extern kcg_bool kcg_comp_struct__128208(
  struct__128208 *kcg_c1,
  struct__128208 *kcg_c2);
#endif /* kcg_comp_struct__128208 */

#ifndef kcg_comp_struct__128221
extern kcg_bool kcg_comp_struct__128221(
  struct__128221 *kcg_c1,
  struct__128221 *kcg_c2);
#endif /* kcg_comp_struct__128221 */

#ifndef kcg_comp_struct__128226
extern kcg_bool kcg_comp_struct__128226(
  struct__128226 *kcg_c1,
  struct__128226 *kcg_c2);
#endif /* kcg_comp_struct__128226 */

#ifndef kcg_comp_struct__128233
extern kcg_bool kcg_comp_struct__128233(
  struct__128233 *kcg_c1,
  struct__128233 *kcg_c2);
#endif /* kcg_comp_struct__128233 */

#ifndef kcg_comp_struct__128251
extern kcg_bool kcg_comp_struct__128251(
  struct__128251 *kcg_c1,
  struct__128251 *kcg_c2);
#endif /* kcg_comp_struct__128251 */

#ifndef kcg_comp_struct__128261
extern kcg_bool kcg_comp_struct__128261(
  struct__128261 *kcg_c1,
  struct__128261 *kcg_c2);
#endif /* kcg_comp_struct__128261 */

#ifndef kcg_comp_struct__128273
extern kcg_bool kcg_comp_struct__128273(
  struct__128273 *kcg_c1,
  struct__128273 *kcg_c2);
#endif /* kcg_comp_struct__128273 */

#ifndef kcg_comp_struct__128283
extern kcg_bool kcg_comp_struct__128283(
  struct__128283 *kcg_c1,
  struct__128283 *kcg_c2);
#endif /* kcg_comp_struct__128283 */

#ifndef kcg_comp_struct__128290
extern kcg_bool kcg_comp_struct__128290(
  struct__128290 *kcg_c1,
  struct__128290 *kcg_c2);
#endif /* kcg_comp_struct__128290 */

#ifndef kcg_comp_struct__128296
extern kcg_bool kcg_comp_struct__128296(
  struct__128296 *kcg_c1,
  struct__128296 *kcg_c2);
#endif /* kcg_comp_struct__128296 */

#ifndef kcg_comp_struct__128304
extern kcg_bool kcg_comp_struct__128304(
  struct__128304 *kcg_c1,
  struct__128304 *kcg_c2);
#endif /* kcg_comp_struct__128304 */

#ifndef kcg_comp_struct__128309
extern kcg_bool kcg_comp_struct__128309(
  struct__128309 *kcg_c1,
  struct__128309 *kcg_c2);
#endif /* kcg_comp_struct__128309 */

#ifndef kcg_comp_struct__128333
extern kcg_bool kcg_comp_struct__128333(
  struct__128333 *kcg_c1,
  struct__128333 *kcg_c2);
#endif /* kcg_comp_struct__128333 */

#ifndef kcg_comp_struct__128340
extern kcg_bool kcg_comp_struct__128340(
  struct__128340 *kcg_c1,
  struct__128340 *kcg_c2);
#endif /* kcg_comp_struct__128340 */

#ifndef kcg_comp_struct__128350
extern kcg_bool kcg_comp_struct__128350(
  struct__128350 *kcg_c1,
  struct__128350 *kcg_c2);
#endif /* kcg_comp_struct__128350 */

#ifndef kcg_comp_struct__128358
extern kcg_bool kcg_comp_struct__128358(
  struct__128358 *kcg_c1,
  struct__128358 *kcg_c2);
#endif /* kcg_comp_struct__128358 */

#ifndef kcg_comp_struct__128371
extern kcg_bool kcg_comp_struct__128371(
  struct__128371 *kcg_c1,
  struct__128371 *kcg_c2);
#endif /* kcg_comp_struct__128371 */

#ifndef kcg_comp_struct__128377
extern kcg_bool kcg_comp_struct__128377(
  struct__128377 *kcg_c1,
  struct__128377 *kcg_c2);
#endif /* kcg_comp_struct__128377 */

#ifndef kcg_comp_struct__128384
extern kcg_bool kcg_comp_struct__128384(
  struct__128384 *kcg_c1,
  struct__128384 *kcg_c2);
#endif /* kcg_comp_struct__128384 */

#ifndef kcg_comp_struct__128392
extern kcg_bool kcg_comp_struct__128392(
  struct__128392 *kcg_c1,
  struct__128392 *kcg_c2);
#endif /* kcg_comp_struct__128392 */

#ifndef kcg_comp_struct__128406
extern kcg_bool kcg_comp_struct__128406(
  struct__128406 *kcg_c1,
  struct__128406 *kcg_c2);
#endif /* kcg_comp_struct__128406 */

#ifndef kcg_comp_struct__128415
extern kcg_bool kcg_comp_struct__128415(
  struct__128415 *kcg_c1,
  struct__128415 *kcg_c2);
#endif /* kcg_comp_struct__128415 */

#ifndef kcg_comp_struct__128423
extern kcg_bool kcg_comp_struct__128423(
  struct__128423 *kcg_c1,
  struct__128423 *kcg_c2);
#endif /* kcg_comp_struct__128423 */

#ifndef kcg_comp_struct__128440
extern kcg_bool kcg_comp_struct__128440(
  struct__128440 *kcg_c1,
  struct__128440 *kcg_c2);
#endif /* kcg_comp_struct__128440 */

#ifndef kcg_comp_struct__128446
extern kcg_bool kcg_comp_struct__128446(
  struct__128446 *kcg_c1,
  struct__128446 *kcg_c2);
#endif /* kcg_comp_struct__128446 */

#ifndef kcg_comp_struct__128455
extern kcg_bool kcg_comp_struct__128455(
  struct__128455 *kcg_c1,
  struct__128455 *kcg_c2);
#endif /* kcg_comp_struct__128455 */

#ifndef kcg_comp_struct__128470
extern kcg_bool kcg_comp_struct__128470(
  struct__128470 *kcg_c1,
  struct__128470 *kcg_c2);
#endif /* kcg_comp_struct__128470 */

#ifndef kcg_comp_struct__128479
extern kcg_bool kcg_comp_struct__128479(
  struct__128479 *kcg_c1,
  struct__128479 *kcg_c2);
#endif /* kcg_comp_struct__128479 */

#ifndef kcg_comp_struct__128490
extern kcg_bool kcg_comp_struct__128490(
  struct__128490 *kcg_c1,
  struct__128490 *kcg_c2);
#endif /* kcg_comp_struct__128490 */

#ifndef kcg_comp_struct__128503
extern kcg_bool kcg_comp_struct__128503(
  struct__128503 *kcg_c1,
  struct__128503 *kcg_c2);
#endif /* kcg_comp_struct__128503 */

#ifndef kcg_comp_struct__128513
extern kcg_bool kcg_comp_struct__128513(
  struct__128513 *kcg_c1,
  struct__128513 *kcg_c2);
#endif /* kcg_comp_struct__128513 */

#ifndef kcg_comp_struct__128533
extern kcg_bool kcg_comp_struct__128533(
  struct__128533 *kcg_c1,
  struct__128533 *kcg_c2);
#endif /* kcg_comp_struct__128533 */

#ifndef kcg_comp_struct__128539
extern kcg_bool kcg_comp_struct__128539(
  struct__128539 *kcg_c1,
  struct__128539 *kcg_c2);
#endif /* kcg_comp_struct__128539 */

#ifndef kcg_comp_struct__128548
extern kcg_bool kcg_comp_struct__128548(
  struct__128548 *kcg_c1,
  struct__128548 *kcg_c2);
#endif /* kcg_comp_struct__128548 */

#ifndef kcg_comp_struct__128558
extern kcg_bool kcg_comp_struct__128558(
  struct__128558 *kcg_c1,
  struct__128558 *kcg_c2);
#endif /* kcg_comp_struct__128558 */

#ifndef kcg_comp_struct__128573
extern kcg_bool kcg_comp_struct__128573(
  struct__128573 *kcg_c1,
  struct__128573 *kcg_c2);
#endif /* kcg_comp_struct__128573 */

#ifndef kcg_comp_struct__128583
extern kcg_bool kcg_comp_struct__128583(
  struct__128583 *kcg_c1,
  struct__128583 *kcg_c2);
#endif /* kcg_comp_struct__128583 */

#ifndef kcg_comp_struct__128614
extern kcg_bool kcg_comp_struct__128614(
  struct__128614 *kcg_c1,
  struct__128614 *kcg_c2);
#endif /* kcg_comp_struct__128614 */

#ifndef kcg_comp_struct__128619
extern kcg_bool kcg_comp_struct__128619(
  struct__128619 *kcg_c1,
  struct__128619 *kcg_c2);
#endif /* kcg_comp_struct__128619 */

#ifndef kcg_comp_struct__128628
extern kcg_bool kcg_comp_struct__128628(
  struct__128628 *kcg_c1,
  struct__128628 *kcg_c2);
#endif /* kcg_comp_struct__128628 */

#ifndef kcg_comp_struct__128638
extern kcg_bool kcg_comp_struct__128638(
  struct__128638 *kcg_c1,
  struct__128638 *kcg_c2);
#endif /* kcg_comp_struct__128638 */

#ifndef kcg_comp_struct__128649
extern kcg_bool kcg_comp_struct__128649(
  struct__128649 *kcg_c1,
  struct__128649 *kcg_c2);
#endif /* kcg_comp_struct__128649 */

#ifndef kcg_comp_struct__128657
extern kcg_bool kcg_comp_struct__128657(
  struct__128657 *kcg_c1,
  struct__128657 *kcg_c2);
#endif /* kcg_comp_struct__128657 */

#ifndef kcg_comp_struct__128696
extern kcg_bool kcg_comp_struct__128696(
  struct__128696 *kcg_c1,
  struct__128696 *kcg_c2);
#endif /* kcg_comp_struct__128696 */

#ifndef kcg_comp_struct__128710
extern kcg_bool kcg_comp_struct__128710(
  struct__128710 *kcg_c1,
  struct__128710 *kcg_c2);
#endif /* kcg_comp_struct__128710 */

#ifndef kcg_comp_struct__128719
extern kcg_bool kcg_comp_struct__128719(
  struct__128719 *kcg_c1,
  struct__128719 *kcg_c2);
#endif /* kcg_comp_struct__128719 */

#ifndef kcg_comp_struct__128725
extern kcg_bool kcg_comp_struct__128725(
  struct__128725 *kcg_c1,
  struct__128725 *kcg_c2);
#endif /* kcg_comp_struct__128725 */

#ifndef kcg_comp_struct__128734
extern kcg_bool kcg_comp_struct__128734(
  struct__128734 *kcg_c1,
  struct__128734 *kcg_c2);
#endif /* kcg_comp_struct__128734 */

#ifndef kcg_comp_struct__128743
extern kcg_bool kcg_comp_struct__128743(
  struct__128743 *kcg_c1,
  struct__128743 *kcg_c2);
#endif /* kcg_comp_struct__128743 */

#ifndef kcg_comp_struct__128751
extern kcg_bool kcg_comp_struct__128751(
  struct__128751 *kcg_c1,
  struct__128751 *kcg_c2);
#endif /* kcg_comp_struct__128751 */

#ifndef kcg_comp_struct__128759
extern kcg_bool kcg_comp_struct__128759(
  struct__128759 *kcg_c1,
  struct__128759 *kcg_c2);
#endif /* kcg_comp_struct__128759 */

#ifndef kcg_comp_struct__128771
extern kcg_bool kcg_comp_struct__128771(
  struct__128771 *kcg_c1,
  struct__128771 *kcg_c2);
#endif /* kcg_comp_struct__128771 */

#ifndef kcg_comp_struct__128784
extern kcg_bool kcg_comp_struct__128784(
  struct__128784 *kcg_c1,
  struct__128784 *kcg_c2);
#endif /* kcg_comp_struct__128784 */

#ifndef kcg_comp_struct__128796
extern kcg_bool kcg_comp_struct__128796(
  struct__128796 *kcg_c1,
  struct__128796 *kcg_c2);
#endif /* kcg_comp_struct__128796 */

#ifndef kcg_comp_struct__128801
extern kcg_bool kcg_comp_struct__128801(
  struct__128801 *kcg_c1,
  struct__128801 *kcg_c2);
#endif /* kcg_comp_struct__128801 */

#ifndef kcg_comp_struct__128807
extern kcg_bool kcg_comp_struct__128807(
  struct__128807 *kcg_c1,
  struct__128807 *kcg_c2);
#endif /* kcg_comp_struct__128807 */

#ifndef kcg_comp_struct__128825
extern kcg_bool kcg_comp_struct__128825(
  struct__128825 *kcg_c1,
  struct__128825 *kcg_c2);
#endif /* kcg_comp_struct__128825 */

#ifndef kcg_comp_struct__128830
extern kcg_bool kcg_comp_struct__128830(
  struct__128830 *kcg_c1,
  struct__128830 *kcg_c2);
#endif /* kcg_comp_struct__128830 */

#ifndef kcg_comp_struct__128838
extern kcg_bool kcg_comp_struct__128838(
  struct__128838 *kcg_c1,
  struct__128838 *kcg_c2);
#endif /* kcg_comp_struct__128838 */

#ifndef kcg_comp_struct__128846
extern kcg_bool kcg_comp_struct__128846(
  struct__128846 *kcg_c1,
  struct__128846 *kcg_c2);
#endif /* kcg_comp_struct__128846 */

#ifndef kcg_comp_struct__128858
extern kcg_bool kcg_comp_struct__128858(
  struct__128858 *kcg_c1,
  struct__128858 *kcg_c2);
#endif /* kcg_comp_struct__128858 */

#ifndef kcg_comp_struct__128869
extern kcg_bool kcg_comp_struct__128869(
  struct__128869 *kcg_c1,
  struct__128869 *kcg_c2);
#endif /* kcg_comp_struct__128869 */

#ifndef kcg_comp_struct__128894
extern kcg_bool kcg_comp_struct__128894(
  struct__128894 *kcg_c1,
  struct__128894 *kcg_c2);
#endif /* kcg_comp_struct__128894 */

#ifndef kcg_comp_struct__128905
extern kcg_bool kcg_comp_struct__128905(
  struct__128905 *kcg_c1,
  struct__128905 *kcg_c2);
#endif /* kcg_comp_struct__128905 */

#ifndef kcg_comp_struct__128915
extern kcg_bool kcg_comp_struct__128915(
  struct__128915 *kcg_c1,
  struct__128915 *kcg_c2);
#endif /* kcg_comp_struct__128915 */

#ifndef kcg_comp_struct__128923
extern kcg_bool kcg_comp_struct__128923(
  struct__128923 *kcg_c1,
  struct__128923 *kcg_c2);
#endif /* kcg_comp_struct__128923 */

#ifndef kcg_comp_struct__128933
extern kcg_bool kcg_comp_struct__128933(
  struct__128933 *kcg_c1,
  struct__128933 *kcg_c2);
#endif /* kcg_comp_struct__128933 */

#ifndef kcg_comp_struct__128939
extern kcg_bool kcg_comp_struct__128939(
  struct__128939 *kcg_c1,
  struct__128939 *kcg_c2);
#endif /* kcg_comp_struct__128939 */

#ifndef kcg_comp_struct__128947
extern kcg_bool kcg_comp_struct__128947(
  struct__128947 *kcg_c1,
  struct__128947 *kcg_c2);
#endif /* kcg_comp_struct__128947 */

#ifndef kcg_comp_struct__128952
extern kcg_bool kcg_comp_struct__128952(
  struct__128952 *kcg_c1,
  struct__128952 *kcg_c2);
#endif /* kcg_comp_struct__128952 */

#ifndef kcg_comp_struct__128959
extern kcg_bool kcg_comp_struct__128959(
  struct__128959 *kcg_c1,
  struct__128959 *kcg_c2);
#endif /* kcg_comp_struct__128959 */

#ifndef kcg_comp_struct__128973
extern kcg_bool kcg_comp_struct__128973(
  struct__128973 *kcg_c1,
  struct__128973 *kcg_c2);
#endif /* kcg_comp_struct__128973 */

#ifndef kcg_comp_struct__128978
extern kcg_bool kcg_comp_struct__128978(
  struct__128978 *kcg_c1,
  struct__128978 *kcg_c2);
#endif /* kcg_comp_struct__128978 */

#ifndef kcg_comp_struct__129009
extern kcg_bool kcg_comp_struct__129009(
  struct__129009 *kcg_c1,
  struct__129009 *kcg_c2);
#endif /* kcg_comp_struct__129009 */

#ifndef kcg_comp_struct__129024
extern kcg_bool kcg_comp_struct__129024(
  struct__129024 *kcg_c1,
  struct__129024 *kcg_c2);
#endif /* kcg_comp_struct__129024 */

#ifndef kcg_comp_struct__129035
extern kcg_bool kcg_comp_struct__129035(
  struct__129035 *kcg_c1,
  struct__129035 *kcg_c2);
#endif /* kcg_comp_struct__129035 */

#ifndef kcg_comp_struct__129047
extern kcg_bool kcg_comp_struct__129047(
  struct__129047 *kcg_c1,
  struct__129047 *kcg_c2);
#endif /* kcg_comp_struct__129047 */

#ifndef kcg_comp_struct__129055
extern kcg_bool kcg_comp_struct__129055(
  struct__129055 *kcg_c1,
  struct__129055 *kcg_c2);
#endif /* kcg_comp_struct__129055 */

#ifndef kcg_comp_struct__129085
extern kcg_bool kcg_comp_struct__129085(
  struct__129085 *kcg_c1,
  struct__129085 *kcg_c2);
#endif /* kcg_comp_struct__129085 */

#ifndef kcg_comp_struct__129093
extern kcg_bool kcg_comp_struct__129093(
  struct__129093 *kcg_c1,
  struct__129093 *kcg_c2);
#endif /* kcg_comp_struct__129093 */

#ifndef kcg_comp_struct__129099
extern kcg_bool kcg_comp_struct__129099(
  struct__129099 *kcg_c1,
  struct__129099 *kcg_c2);
#endif /* kcg_comp_struct__129099 */

#ifndef kcg_comp_struct__129108
extern kcg_bool kcg_comp_struct__129108(
  struct__129108 *kcg_c1,
  struct__129108 *kcg_c2);
#endif /* kcg_comp_struct__129108 */

#ifndef kcg_comp_struct__129120
extern kcg_bool kcg_comp_struct__129120(
  struct__129120 *kcg_c1,
  struct__129120 *kcg_c2);
#endif /* kcg_comp_struct__129120 */

#ifndef kcg_comp_struct__129127
extern kcg_bool kcg_comp_struct__129127(
  struct__129127 *kcg_c1,
  struct__129127 *kcg_c2);
#endif /* kcg_comp_struct__129127 */

#ifndef kcg_comp_struct__129138
extern kcg_bool kcg_comp_struct__129138(
  struct__129138 *kcg_c1,
  struct__129138 *kcg_c2);
#endif /* kcg_comp_struct__129138 */

#ifndef kcg_comp_struct__129149
extern kcg_bool kcg_comp_struct__129149(
  struct__129149 *kcg_c1,
  struct__129149 *kcg_c2);
#endif /* kcg_comp_struct__129149 */

#ifndef kcg_comp_struct__129160
extern kcg_bool kcg_comp_struct__129160(
  struct__129160 *kcg_c1,
  struct__129160 *kcg_c2);
#endif /* kcg_comp_struct__129160 */

#ifndef kcg_comp_struct__129166
extern kcg_bool kcg_comp_struct__129166(
  struct__129166 *kcg_c1,
  struct__129166 *kcg_c2);
#endif /* kcg_comp_struct__129166 */

#ifndef kcg_comp_struct__129179
extern kcg_bool kcg_comp_struct__129179(
  struct__129179 *kcg_c1,
  struct__129179 *kcg_c2);
#endif /* kcg_comp_struct__129179 */

#ifndef kcg_comp_struct__129189
extern kcg_bool kcg_comp_struct__129189(
  struct__129189 *kcg_c1,
  struct__129189 *kcg_c2);
#endif /* kcg_comp_struct__129189 */

#ifndef kcg_comp_struct__129198
extern kcg_bool kcg_comp_struct__129198(
  struct__129198 *kcg_c1,
  struct__129198 *kcg_c2);
#endif /* kcg_comp_struct__129198 */

#ifndef kcg_comp_struct__129208
extern kcg_bool kcg_comp_struct__129208(
  struct__129208 *kcg_c1,
  struct__129208 *kcg_c2);
#endif /* kcg_comp_struct__129208 */

#ifndef kcg_comp_struct__129217
extern kcg_bool kcg_comp_struct__129217(
  struct__129217 *kcg_c1,
  struct__129217 *kcg_c2);
#endif /* kcg_comp_struct__129217 */

#ifndef kcg_comp_struct__129227
extern kcg_bool kcg_comp_struct__129227(
  struct__129227 *kcg_c1,
  struct__129227 *kcg_c2);
#endif /* kcg_comp_struct__129227 */

#ifndef kcg_comp_struct__129253
extern kcg_bool kcg_comp_struct__129253(
  struct__129253 *kcg_c1,
  struct__129253 *kcg_c2);
#endif /* kcg_comp_struct__129253 */

#ifndef kcg_comp_struct__129262
extern kcg_bool kcg_comp_struct__129262(
  struct__129262 *kcg_c1,
  struct__129262 *kcg_c2);
#endif /* kcg_comp_struct__129262 */

#ifndef kcg_comp_struct__129279
extern kcg_bool kcg_comp_struct__129279(
  struct__129279 *kcg_c1,
  struct__129279 *kcg_c2);
#endif /* kcg_comp_struct__129279 */

#ifndef kcg_comp_struct__129292
extern kcg_bool kcg_comp_struct__129292(
  struct__129292 *kcg_c1,
  struct__129292 *kcg_c2);
#endif /* kcg_comp_struct__129292 */

#ifndef kcg_comp_struct__129322
extern kcg_bool kcg_comp_struct__129322(
  struct__129322 *kcg_c1,
  struct__129322 *kcg_c2);
#endif /* kcg_comp_struct__129322 */

#ifndef kcg_comp_struct__129333
extern kcg_bool kcg_comp_struct__129333(
  struct__129333 *kcg_c1,
  struct__129333 *kcg_c2);
#endif /* kcg_comp_struct__129333 */

#ifndef kcg_comp_struct__129338
extern kcg_bool kcg_comp_struct__129338(
  struct__129338 *kcg_c1,
  struct__129338 *kcg_c2);
#endif /* kcg_comp_struct__129338 */

#ifndef kcg_comp_struct__129393
extern kcg_bool kcg_comp_struct__129393(
  struct__129393 *kcg_c1,
  struct__129393 *kcg_c2);
#endif /* kcg_comp_struct__129393 */

#ifndef kcg_comp_struct__129402
extern kcg_bool kcg_comp_struct__129402(
  struct__129402 *kcg_c1,
  struct__129402 *kcg_c2);
#endif /* kcg_comp_struct__129402 */

#ifndef kcg_comp_struct__129411
extern kcg_bool kcg_comp_struct__129411(
  struct__129411 *kcg_c1,
  struct__129411 *kcg_c2);
#endif /* kcg_comp_struct__129411 */

#ifndef kcg_comp_struct__129418
extern kcg_bool kcg_comp_struct__129418(
  struct__129418 *kcg_c1,
  struct__129418 *kcg_c2);
#endif /* kcg_comp_struct__129418 */

#ifndef kcg_comp_struct__129427
extern kcg_bool kcg_comp_struct__129427(
  struct__129427 *kcg_c1,
  struct__129427 *kcg_c2);
#endif /* kcg_comp_struct__129427 */

#ifndef kcg_comp_struct__129435
extern kcg_bool kcg_comp_struct__129435(
  struct__129435 *kcg_c1,
  struct__129435 *kcg_c2);
#endif /* kcg_comp_struct__129435 */

#ifndef kcg_comp_struct__129445
extern kcg_bool kcg_comp_struct__129445(
  struct__129445 *kcg_c1,
  struct__129445 *kcg_c2);
#endif /* kcg_comp_struct__129445 */

#ifndef kcg_comp_struct__129457
extern kcg_bool kcg_comp_struct__129457(
  struct__129457 *kcg_c1,
  struct__129457 *kcg_c2);
#endif /* kcg_comp_struct__129457 */

#ifndef kcg_comp_struct__129463
extern kcg_bool kcg_comp_struct__129463(
  struct__129463 *kcg_c1,
  struct__129463 *kcg_c2);
#endif /* kcg_comp_struct__129463 */

#ifndef kcg_comp_struct__129475
extern kcg_bool kcg_comp_struct__129475(
  struct__129475 *kcg_c1,
  struct__129475 *kcg_c2);
#endif /* kcg_comp_struct__129475 */

#ifndef kcg_comp_struct__129481
extern kcg_bool kcg_comp_struct__129481(
  struct__129481 *kcg_c1,
  struct__129481 *kcg_c2);
#endif /* kcg_comp_struct__129481 */

#ifndef kcg_comp_struct__129494
extern kcg_bool kcg_comp_struct__129494(
  struct__129494 *kcg_c1,
  struct__129494 *kcg_c2);
#endif /* kcg_comp_struct__129494 */

#ifndef kcg_comp_struct__129502
extern kcg_bool kcg_comp_struct__129502(
  struct__129502 *kcg_c1,
  struct__129502 *kcg_c2);
#endif /* kcg_comp_struct__129502 */

#ifndef kcg_comp_struct__129507
extern kcg_bool kcg_comp_struct__129507(
  struct__129507 *kcg_c1,
  struct__129507 *kcg_c2);
#endif /* kcg_comp_struct__129507 */

#ifndef kcg_comp_struct__129513
extern kcg_bool kcg_comp_struct__129513(
  struct__129513 *kcg_c1,
  struct__129513 *kcg_c2);
#endif /* kcg_comp_struct__129513 */

#ifndef kcg_comp_struct__129518
extern kcg_bool kcg_comp_struct__129518(
  struct__129518 *kcg_c1,
  struct__129518 *kcg_c2);
#endif /* kcg_comp_struct__129518 */

#ifndef kcg_comp_struct__129527
extern kcg_bool kcg_comp_struct__129527(
  struct__129527 *kcg_c1,
  struct__129527 *kcg_c2);
#endif /* kcg_comp_struct__129527 */

#ifndef kcg_comp_struct__129531
extern kcg_bool kcg_comp_struct__129531(
  struct__129531 *kcg_c1,
  struct__129531 *kcg_c2);
#endif /* kcg_comp_struct__129531 */

#ifndef kcg_comp_struct__129539
extern kcg_bool kcg_comp_struct__129539(
  struct__129539 *kcg_c1,
  struct__129539 *kcg_c2);
#endif /* kcg_comp_struct__129539 */

#ifndef kcg_comp_struct__129552
extern kcg_bool kcg_comp_struct__129552(
  struct__129552 *kcg_c1,
  struct__129552 *kcg_c2);
#endif /* kcg_comp_struct__129552 */

#ifndef kcg_comp_struct__129561
extern kcg_bool kcg_comp_struct__129561(
  struct__129561 *kcg_c1,
  struct__129561 *kcg_c2);
#endif /* kcg_comp_struct__129561 */

#ifndef kcg_comp_struct__129572
extern kcg_bool kcg_comp_struct__129572(
  struct__129572 *kcg_c1,
  struct__129572 *kcg_c2);
#endif /* kcg_comp_struct__129572 */

#ifndef kcg_comp_struct__129584
extern kcg_bool kcg_comp_struct__129584(
  struct__129584 *kcg_c1,
  struct__129584 *kcg_c2);
#endif /* kcg_comp_struct__129584 */

#ifndef kcg_comp_struct__129591
extern kcg_bool kcg_comp_struct__129591(
  struct__129591 *kcg_c1,
  struct__129591 *kcg_c2);
#endif /* kcg_comp_struct__129591 */

#ifndef kcg_comp_struct__129602
extern kcg_bool kcg_comp_struct__129602(
  struct__129602 *kcg_c1,
  struct__129602 *kcg_c2);
#endif /* kcg_comp_struct__129602 */

#ifndef kcg_comp_struct__129613
extern kcg_bool kcg_comp_struct__129613(
  struct__129613 *kcg_c1,
  struct__129613 *kcg_c2);
#endif /* kcg_comp_struct__129613 */

#ifndef kcg_comp_struct__129638
extern kcg_bool kcg_comp_struct__129638(
  struct__129638 *kcg_c1,
  struct__129638 *kcg_c2);
#endif /* kcg_comp_struct__129638 */

#ifndef kcg_comp_struct__129647
extern kcg_bool kcg_comp_struct__129647(
  struct__129647 *kcg_c1,
  struct__129647 *kcg_c2);
#endif /* kcg_comp_struct__129647 */

#ifndef kcg_comp_struct__129657
extern kcg_bool kcg_comp_struct__129657(
  struct__129657 *kcg_c1,
  struct__129657 *kcg_c2);
#endif /* kcg_comp_struct__129657 */

#ifndef kcg_comp_struct__129664
extern kcg_bool kcg_comp_struct__129664(
  struct__129664 *kcg_c1,
  struct__129664 *kcg_c2);
#endif /* kcg_comp_struct__129664 */

#ifndef kcg_comp_struct__129672
extern kcg_bool kcg_comp_struct__129672(
  struct__129672 *kcg_c1,
  struct__129672 *kcg_c2);
#endif /* kcg_comp_struct__129672 */

#ifndef kcg_comp_struct__129683
extern kcg_bool kcg_comp_struct__129683(
  struct__129683 *kcg_c1,
  struct__129683 *kcg_c2);
#endif /* kcg_comp_struct__129683 */

#ifndef kcg_comp_struct__129689
extern kcg_bool kcg_comp_struct__129689(
  struct__129689 *kcg_c1,
  struct__129689 *kcg_c2);
#endif /* kcg_comp_struct__129689 */

#ifndef kcg_comp_struct__129695
extern kcg_bool kcg_comp_struct__129695(
  struct__129695 *kcg_c1,
  struct__129695 *kcg_c2);
#endif /* kcg_comp_struct__129695 */

#ifndef kcg_comp_struct__129703
extern kcg_bool kcg_comp_struct__129703(
  struct__129703 *kcg_c1,
  struct__129703 *kcg_c2);
#endif /* kcg_comp_struct__129703 */

#ifndef kcg_comp_struct__129709
extern kcg_bool kcg_comp_struct__129709(
  struct__129709 *kcg_c1,
  struct__129709 *kcg_c2);
#endif /* kcg_comp_struct__129709 */

#ifndef kcg_comp_struct__129716
extern kcg_bool kcg_comp_struct__129716(
  struct__129716 *kcg_c1,
  struct__129716 *kcg_c2);
#endif /* kcg_comp_struct__129716 */

#ifndef kcg_comp_struct__129726
extern kcg_bool kcg_comp_struct__129726(
  struct__129726 *kcg_c1,
  struct__129726 *kcg_c2);
#endif /* kcg_comp_struct__129726 */

#ifndef kcg_comp_struct__129740
extern kcg_bool kcg_comp_struct__129740(
  struct__129740 *kcg_c1,
  struct__129740 *kcg_c2);
#endif /* kcg_comp_struct__129740 */

#ifndef kcg_comp_struct__129746
extern kcg_bool kcg_comp_struct__129746(
  struct__129746 *kcg_c1,
  struct__129746 *kcg_c2);
#endif /* kcg_comp_struct__129746 */

#ifndef kcg_comp_struct__129753
extern kcg_bool kcg_comp_struct__129753(
  struct__129753 *kcg_c1,
  struct__129753 *kcg_c2);
#endif /* kcg_comp_struct__129753 */

#ifndef kcg_comp_struct__129760
extern kcg_bool kcg_comp_struct__129760(
  struct__129760 *kcg_c1,
  struct__129760 *kcg_c2);
#endif /* kcg_comp_struct__129760 */

#ifndef kcg_comp_struct__129769
extern kcg_bool kcg_comp_struct__129769(
  struct__129769 *kcg_c1,
  struct__129769 *kcg_c2);
#endif /* kcg_comp_struct__129769 */

#ifndef kcg_comp_struct__129779
extern kcg_bool kcg_comp_struct__129779(
  struct__129779 *kcg_c1,
  struct__129779 *kcg_c2);
#endif /* kcg_comp_struct__129779 */

#ifndef kcg_comp_struct__129791
extern kcg_bool kcg_comp_struct__129791(
  struct__129791 *kcg_c1,
  struct__129791 *kcg_c2);
#endif /* kcg_comp_struct__129791 */

#ifndef kcg_comp_struct__129800
extern kcg_bool kcg_comp_struct__129800(
  struct__129800 *kcg_c1,
  struct__129800 *kcg_c2);
#endif /* kcg_comp_struct__129800 */

#ifndef kcg_comp_struct__129806
extern kcg_bool kcg_comp_struct__129806(
  struct__129806 *kcg_c1,
  struct__129806 *kcg_c2);
#endif /* kcg_comp_struct__129806 */

#ifndef kcg_comp_struct__129811
extern kcg_bool kcg_comp_struct__129811(
  struct__129811 *kcg_c1,
  struct__129811 *kcg_c2);
#endif /* kcg_comp_struct__129811 */

#ifndef kcg_comp_struct__129818
extern kcg_bool kcg_comp_struct__129818(
  struct__129818 *kcg_c1,
  struct__129818 *kcg_c2);
#endif /* kcg_comp_struct__129818 */

#ifndef kcg_comp_struct__129840
extern kcg_bool kcg_comp_struct__129840(
  struct__129840 *kcg_c1,
  struct__129840 *kcg_c2);
#endif /* kcg_comp_struct__129840 */

#ifndef kcg_comp_struct__129847
extern kcg_bool kcg_comp_struct__129847(
  struct__129847 *kcg_c1,
  struct__129847 *kcg_c2);
#endif /* kcg_comp_struct__129847 */

#ifndef kcg_comp_struct__129880
extern kcg_bool kcg_comp_struct__129880(
  struct__129880 *kcg_c1,
  struct__129880 *kcg_c2);
#endif /* kcg_comp_struct__129880 */

#ifndef kcg_comp_struct__129890
extern kcg_bool kcg_comp_struct__129890(
  struct__129890 *kcg_c1,
  struct__129890 *kcg_c2);
#endif /* kcg_comp_struct__129890 */

#ifndef kcg_comp_struct__129898
extern kcg_bool kcg_comp_struct__129898(
  struct__129898 *kcg_c1,
  struct__129898 *kcg_c2);
#endif /* kcg_comp_struct__129898 */

#ifndef kcg_comp_struct__129907
extern kcg_bool kcg_comp_struct__129907(
  struct__129907 *kcg_c1,
  struct__129907 *kcg_c2);
#endif /* kcg_comp_struct__129907 */

#ifndef kcg_comp_struct__129914
extern kcg_bool kcg_comp_struct__129914(
  struct__129914 *kcg_c1,
  struct__129914 *kcg_c2);
#endif /* kcg_comp_struct__129914 */

#ifndef kcg_comp_struct__129920
extern kcg_bool kcg_comp_struct__129920(
  struct__129920 *kcg_c1,
  struct__129920 *kcg_c2);
#endif /* kcg_comp_struct__129920 */

#ifndef kcg_comp_struct__129932
extern kcg_bool kcg_comp_struct__129932(
  struct__129932 *kcg_c1,
  struct__129932 *kcg_c2);
#endif /* kcg_comp_struct__129932 */

#ifndef kcg_comp_struct__129943
extern kcg_bool kcg_comp_struct__129943(
  struct__129943 *kcg_c1,
  struct__129943 *kcg_c2);
#endif /* kcg_comp_struct__129943 */

#ifndef kcg_comp_struct__129961
extern kcg_bool kcg_comp_struct__129961(
  struct__129961 *kcg_c1,
  struct__129961 *kcg_c2);
#endif /* kcg_comp_struct__129961 */

#ifndef kcg_comp_struct__129967
extern kcg_bool kcg_comp_struct__129967(
  struct__129967 *kcg_c1,
  struct__129967 *kcg_c2);
#endif /* kcg_comp_struct__129967 */

#ifndef kcg_comp_struct__129972
extern kcg_bool kcg_comp_struct__129972(
  struct__129972 *kcg_c1,
  struct__129972 *kcg_c2);
#endif /* kcg_comp_struct__129972 */

#ifndef kcg_comp_struct__129980
extern kcg_bool kcg_comp_struct__129980(
  struct__129980 *kcg_c1,
  struct__129980 *kcg_c2);
#endif /* kcg_comp_struct__129980 */

#ifndef kcg_comp_struct__129991
extern kcg_bool kcg_comp_struct__129991(
  struct__129991 *kcg_c1,
  struct__129991 *kcg_c2);
#endif /* kcg_comp_struct__129991 */

#ifndef kcg_comp_struct__130002
extern kcg_bool kcg_comp_struct__130002(
  struct__130002 *kcg_c1,
  struct__130002 *kcg_c2);
#endif /* kcg_comp_struct__130002 */

#ifndef kcg_comp_struct__130007
extern kcg_bool kcg_comp_struct__130007(
  struct__130007 *kcg_c1,
  struct__130007 *kcg_c2);
#endif /* kcg_comp_struct__130007 */

#ifndef kcg_comp_struct__130017
extern kcg_bool kcg_comp_struct__130017(
  struct__130017 *kcg_c1,
  struct__130017 *kcg_c2);
#endif /* kcg_comp_struct__130017 */

#ifndef kcg_comp_struct__130023
extern kcg_bool kcg_comp_struct__130023(
  struct__130023 *kcg_c1,
  struct__130023 *kcg_c2);
#endif /* kcg_comp_struct__130023 */

#ifndef kcg_comp_struct__130028
extern kcg_bool kcg_comp_struct__130028(
  struct__130028 *kcg_c1,
  struct__130028 *kcg_c2);
#endif /* kcg_comp_struct__130028 */

#ifndef kcg_comp_struct__130036
extern kcg_bool kcg_comp_struct__130036(
  struct__130036 *kcg_c1,
  struct__130036 *kcg_c2);
#endif /* kcg_comp_struct__130036 */

#ifndef kcg_comp_struct__130048
extern kcg_bool kcg_comp_struct__130048(
  struct__130048 *kcg_c1,
  struct__130048 *kcg_c2);
#endif /* kcg_comp_struct__130048 */

#ifndef kcg_comp_struct__130053
extern kcg_bool kcg_comp_struct__130053(
  struct__130053 *kcg_c1,
  struct__130053 *kcg_c2);
#endif /* kcg_comp_struct__130053 */

#ifndef kcg_comp_struct__130066
extern kcg_bool kcg_comp_struct__130066(
  struct__130066 *kcg_c1,
  struct__130066 *kcg_c2);
#endif /* kcg_comp_struct__130066 */

#ifndef kcg_comp_struct__130075
extern kcg_bool kcg_comp_struct__130075(
  struct__130075 *kcg_c1,
  struct__130075 *kcg_c2);
#endif /* kcg_comp_struct__130075 */

#ifndef kcg_comp_struct__130098
extern kcg_bool kcg_comp_struct__130098(
  struct__130098 *kcg_c1,
  struct__130098 *kcg_c2);
#endif /* kcg_comp_struct__130098 */

#ifndef kcg_comp_struct__130116
extern kcg_bool kcg_comp_struct__130116(
  struct__130116 *kcg_c1,
  struct__130116 *kcg_c2);
#endif /* kcg_comp_struct__130116 */

#ifndef kcg_comp_struct__130121
extern kcg_bool kcg_comp_struct__130121(
  struct__130121 *kcg_c1,
  struct__130121 *kcg_c2);
#endif /* kcg_comp_struct__130121 */

#ifndef kcg_comp_struct__130129
extern kcg_bool kcg_comp_struct__130129(
  struct__130129 *kcg_c1,
  struct__130129 *kcg_c2);
#endif /* kcg_comp_struct__130129 */

#ifndef kcg_comp_struct__130142
extern kcg_bool kcg_comp_struct__130142(
  struct__130142 *kcg_c1,
  struct__130142 *kcg_c2);
#endif /* kcg_comp_struct__130142 */

#ifndef kcg_comp_struct__130162
extern kcg_bool kcg_comp_struct__130162(
  struct__130162 *kcg_c1,
  struct__130162 *kcg_c2);
#endif /* kcg_comp_struct__130162 */

#ifndef kcg_comp_struct__130169
extern kcg_bool kcg_comp_struct__130169(
  struct__130169 *kcg_c1,
  struct__130169 *kcg_c2);
#endif /* kcg_comp_struct__130169 */

#ifndef kcg_comp_struct__130178
extern kcg_bool kcg_comp_struct__130178(
  struct__130178 *kcg_c1,
  struct__130178 *kcg_c2);
#endif /* kcg_comp_struct__130178 */

#ifndef kcg_comp_struct__130184
extern kcg_bool kcg_comp_struct__130184(
  struct__130184 *kcg_c1,
  struct__130184 *kcg_c2);
#endif /* kcg_comp_struct__130184 */

#ifndef kcg_comp_struct__130190
extern kcg_bool kcg_comp_struct__130190(
  struct__130190 *kcg_c1,
  struct__130190 *kcg_c2);
#endif /* kcg_comp_struct__130190 */

#ifndef kcg_comp_struct__130196
extern kcg_bool kcg_comp_struct__130196(
  struct__130196 *kcg_c1,
  struct__130196 *kcg_c2);
#endif /* kcg_comp_struct__130196 */

#ifndef kcg_comp_struct__130203
extern kcg_bool kcg_comp_struct__130203(
  struct__130203 *kcg_c1,
  struct__130203 *kcg_c2);
#endif /* kcg_comp_struct__130203 */

#ifndef kcg_comp_struct__130211
extern kcg_bool kcg_comp_struct__130211(
  struct__130211 *kcg_c1,
  struct__130211 *kcg_c2);
#endif /* kcg_comp_struct__130211 */

#ifndef kcg_comp_struct__130220
extern kcg_bool kcg_comp_struct__130220(
  struct__130220 *kcg_c1,
  struct__130220 *kcg_c2);
#endif /* kcg_comp_struct__130220 */

#ifndef kcg_comp_struct__130232
extern kcg_bool kcg_comp_struct__130232(
  struct__130232 *kcg_c1,
  struct__130232 *kcg_c2);
#endif /* kcg_comp_struct__130232 */

#ifndef kcg_comp_struct__130238
extern kcg_bool kcg_comp_struct__130238(
  struct__130238 *kcg_c1,
  struct__130238 *kcg_c2);
#endif /* kcg_comp_struct__130238 */

#ifndef kcg_comp_struct__130244
extern kcg_bool kcg_comp_struct__130244(
  struct__130244 *kcg_c1,
  struct__130244 *kcg_c2);
#endif /* kcg_comp_struct__130244 */

#ifndef kcg_comp_struct__130262
extern kcg_bool kcg_comp_struct__130262(
  struct__130262 *kcg_c1,
  struct__130262 *kcg_c2);
#endif /* kcg_comp_struct__130262 */

#ifndef kcg_comp_struct__130268
extern kcg_bool kcg_comp_struct__130268(
  struct__130268 *kcg_c1,
  struct__130268 *kcg_c2);
#endif /* kcg_comp_struct__130268 */

#ifndef kcg_comp_struct__130274
extern kcg_bool kcg_comp_struct__130274(
  struct__130274 *kcg_c1,
  struct__130274 *kcg_c2);
#endif /* kcg_comp_struct__130274 */

#ifndef kcg_comp_struct__130290
extern kcg_bool kcg_comp_struct__130290(
  struct__130290 *kcg_c1,
  struct__130290 *kcg_c2);
#endif /* kcg_comp_struct__130290 */

#ifndef kcg_comp_struct__130298
extern kcg_bool kcg_comp_struct__130298(
  struct__130298 *kcg_c1,
  struct__130298 *kcg_c2);
#endif /* kcg_comp_struct__130298 */

#ifndef kcg_comp_struct__130303
extern kcg_bool kcg_comp_struct__130303(
  struct__130303 *kcg_c1,
  struct__130303 *kcg_c2);
#endif /* kcg_comp_struct__130303 */

#ifndef kcg_comp_struct__130311
extern kcg_bool kcg_comp_struct__130311(
  struct__130311 *kcg_c1,
  struct__130311 *kcg_c2);
#endif /* kcg_comp_struct__130311 */

#ifndef kcg_comp_struct__130316
extern kcg_bool kcg_comp_struct__130316(
  struct__130316 *kcg_c1,
  struct__130316 *kcg_c2);
#endif /* kcg_comp_struct__130316 */

#ifndef kcg_comp_struct__130330
extern kcg_bool kcg_comp_struct__130330(
  struct__130330 *kcg_c1,
  struct__130330 *kcg_c2);
#endif /* kcg_comp_struct__130330 */

#ifndef kcg_comp_struct__130341
extern kcg_bool kcg_comp_struct__130341(
  struct__130341 *kcg_c1,
  struct__130341 *kcg_c2);
#endif /* kcg_comp_struct__130341 */

#ifndef kcg_comp_struct__130374
extern kcg_bool kcg_comp_struct__130374(
  struct__130374 *kcg_c1,
  struct__130374 *kcg_c2);
#endif /* kcg_comp_struct__130374 */

#ifndef kcg_comp_struct__130380
extern kcg_bool kcg_comp_struct__130380(
  struct__130380 *kcg_c1,
  struct__130380 *kcg_c2);
#endif /* kcg_comp_struct__130380 */

#ifndef kcg_comp_struct__130406
extern kcg_bool kcg_comp_struct__130406(
  struct__130406 *kcg_c1,
  struct__130406 *kcg_c2);
#endif /* kcg_comp_struct__130406 */

#ifndef kcg_comp_struct__130426
extern kcg_bool kcg_comp_struct__130426(
  struct__130426 *kcg_c1,
  struct__130426 *kcg_c2);
#endif /* kcg_comp_struct__130426 */

#ifndef kcg_comp_struct__130433
extern kcg_bool kcg_comp_struct__130433(
  struct__130433 *kcg_c1,
  struct__130433 *kcg_c2);
#endif /* kcg_comp_struct__130433 */

#ifndef kcg_comp_struct__130438
extern kcg_bool kcg_comp_struct__130438(
  struct__130438 *kcg_c1,
  struct__130438 *kcg_c2);
#endif /* kcg_comp_struct__130438 */

#ifndef kcg_comp_struct__130443
extern kcg_bool kcg_comp_struct__130443(
  struct__130443 *kcg_c1,
  struct__130443 *kcg_c2);
#endif /* kcg_comp_struct__130443 */

#ifndef kcg_comp_struct__130451
extern kcg_bool kcg_comp_struct__130451(
  struct__130451 *kcg_c1,
  struct__130451 *kcg_c2);
#endif /* kcg_comp_struct__130451 */

#ifndef kcg_comp_struct__130458
extern kcg_bool kcg_comp_struct__130458(
  struct__130458 *kcg_c1,
  struct__130458 *kcg_c2);
#endif /* kcg_comp_struct__130458 */

#ifndef kcg_comp_struct__130463
extern kcg_bool kcg_comp_struct__130463(
  struct__130463 *kcg_c1,
  struct__130463 *kcg_c2);
#endif /* kcg_comp_struct__130463 */

#ifndef kcg_comp_struct__130472
extern kcg_bool kcg_comp_struct__130472(
  struct__130472 *kcg_c1,
  struct__130472 *kcg_c2);
#endif /* kcg_comp_struct__130472 */

#ifndef kcg_comp_struct__130481
extern kcg_bool kcg_comp_struct__130481(
  struct__130481 *kcg_c1,
  struct__130481 *kcg_c2);
#endif /* kcg_comp_struct__130481 */

#ifndef kcg_comp_struct__130490
extern kcg_bool kcg_comp_struct__130490(
  struct__130490 *kcg_c1,
  struct__130490 *kcg_c2);
#endif /* kcg_comp_struct__130490 */

#ifndef kcg_comp_struct__130499
extern kcg_bool kcg_comp_struct__130499(
  struct__130499 *kcg_c1,
  struct__130499 *kcg_c2);
#endif /* kcg_comp_struct__130499 */

#ifndef kcg_comp_struct__130506
extern kcg_bool kcg_comp_struct__130506(
  struct__130506 *kcg_c1,
  struct__130506 *kcg_c2);
#endif /* kcg_comp_struct__130506 */

#ifndef kcg_comp_struct__130523
extern kcg_bool kcg_comp_struct__130523(
  struct__130523 *kcg_c1,
  struct__130523 *kcg_c2);
#endif /* kcg_comp_struct__130523 */

#ifndef kcg_comp_struct__130535
extern kcg_bool kcg_comp_struct__130535(
  struct__130535 *kcg_c1,
  struct__130535 *kcg_c2);
#endif /* kcg_comp_struct__130535 */

#ifndef kcg_comp_struct__130546
extern kcg_bool kcg_comp_struct__130546(
  struct__130546 *kcg_c1,
  struct__130546 *kcg_c2);
#endif /* kcg_comp_struct__130546 */

#ifndef kcg_comp_struct__130554
extern kcg_bool kcg_comp_struct__130554(
  struct__130554 *kcg_c1,
  struct__130554 *kcg_c2);
#endif /* kcg_comp_struct__130554 */

#ifndef kcg_comp_struct__130574
extern kcg_bool kcg_comp_struct__130574(
  struct__130574 *kcg_c1,
  struct__130574 *kcg_c2);
#endif /* kcg_comp_struct__130574 */

#ifndef kcg_comp_struct__130663
extern kcg_bool kcg_comp_struct__130663(
  struct__130663 *kcg_c1,
  struct__130663 *kcg_c2);
#endif /* kcg_comp_struct__130663 */

#ifndef kcg_comp_array__127237
extern kcg_bool kcg_comp_array__127237(
  array__127237 *kcg_c1,
  array__127237 *kcg_c2);
#endif /* kcg_comp_array__127237 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__127363
extern kcg_bool kcg_comp_array__127363(
  array__127363 *kcg_c1,
  array__127363 *kcg_c2);
#endif /* kcg_comp_array__127363 */

#ifndef kcg_comp_array__127454
extern kcg_bool kcg_comp_array__127454(
  array__127454 *kcg_c1,
  array__127454 *kcg_c2);
#endif /* kcg_comp_array__127454 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

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

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array__127619
extern kcg_bool kcg_comp_array__127619(
  array__127619 *kcg_c1,
  array__127619 *kcg_c2);
#endif /* kcg_comp_array__127619 */

#ifndef kcg_comp_array__127640
extern kcg_bool kcg_comp_array__127640(
  array__127640 *kcg_c1,
  array__127640 *kcg_c2);
#endif /* kcg_comp_array__127640 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__127703
extern kcg_bool kcg_comp_array__127703(
  array__127703 *kcg_c1,
  array__127703 *kcg_c2);
#endif /* kcg_comp_array__127703 */

#ifndef kcg_comp_array__127733
extern kcg_bool kcg_comp_array__127733(
  array__127733 *kcg_c1,
  array__127733 *kcg_c2);
#endif /* kcg_comp_array__127733 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */

#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */

#ifndef kcg_comp_array__127967
extern kcg_bool kcg_comp_array__127967(
  array__127967 *kcg_c1,
  array__127967 *kcg_c2);
#endif /* kcg_comp_array__127967 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__127987
extern kcg_bool kcg_comp_array__127987(
  array__127987 *kcg_c1,
  array__127987 *kcg_c2);
#endif /* kcg_comp_array__127987 */

#ifndef kcg_comp_array__127990
extern kcg_bool kcg_comp_array__127990(
  array__127990 *kcg_c1,
  array__127990 *kcg_c2);
#endif /* kcg_comp_array__127990 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__128045
extern kcg_bool kcg_comp_array__128045(
  array__128045 *kcg_c1,
  array__128045 *kcg_c2);
#endif /* kcg_comp_array__128045 */

#ifndef kcg_comp_array__128077
extern kcg_bool kcg_comp_array__128077(
  array__128077 *kcg_c1,
  array__128077 *kcg_c2);
#endif /* kcg_comp_array__128077 */

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

#ifndef kcg_comp_array__128099
extern kcg_bool kcg_comp_array__128099(
  array__128099 *kcg_c1,
  array__128099 *kcg_c2);
#endif /* kcg_comp_array__128099 */

#ifndef kcg_comp_array__128109
extern kcg_bool kcg_comp_array__128109(
  array__128109 *kcg_c1,
  array__128109 *kcg_c2);
#endif /* kcg_comp_array__128109 */

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

#ifndef kcg_comp_array__128158
extern kcg_bool kcg_comp_array__128158(
  array__128158 *kcg_c1,
  array__128158 *kcg_c2);
#endif /* kcg_comp_array__128158 */

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

#ifndef kcg_comp_array__128187
extern kcg_bool kcg_comp_array__128187(
  array__128187 *kcg_c1,
  array__128187 *kcg_c2);
#endif /* kcg_comp_array__128187 */

#ifndef kcg_comp_array__128412
extern kcg_bool kcg_comp_array__128412(
  array__128412 *kcg_c1,
  array__128412 *kcg_c2);
#endif /* kcg_comp_array__128412 */

#ifndef kcg_comp_array__128437
extern kcg_bool kcg_comp_array__128437(
  array__128437 *kcg_c1,
  array__128437 *kcg_c2);
#endif /* kcg_comp_array__128437 */

#ifndef kcg_comp_array__128467
extern kcg_bool kcg_comp_array__128467(
  array__128467 *kcg_c1,
  array__128467 *kcg_c2);
#endif /* kcg_comp_array__128467 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array__128545
extern kcg_bool kcg_comp_array__128545(
  array__128545 *kcg_c1,
  array__128545 *kcg_c2);
#endif /* kcg_comp_array__128545 */

#ifndef kcg_comp_array__128555
extern kcg_bool kcg_comp_array__128555(
  array__128555 *kcg_c1,
  array__128555 *kcg_c2);
#endif /* kcg_comp_array__128555 */

#ifndef kcg_comp_array__128570
extern kcg_bool kcg_comp_array__128570(
  array__128570 *kcg_c1,
  array__128570 *kcg_c2);
#endif /* kcg_comp_array__128570 */

#ifndef kcg_comp_array__128580
extern kcg_bool kcg_comp_array__128580(
  array__128580 *kcg_c1,
  array__128580 *kcg_c2);
#endif /* kcg_comp_array__128580 */

#ifndef kcg_comp_array__128625
extern kcg_bool kcg_comp_array__128625(
  array__128625 *kcg_c1,
  array__128625 *kcg_c2);
#endif /* kcg_comp_array__128625 */

#ifndef kcg_comp_array__128635
extern kcg_bool kcg_comp_array__128635(
  array__128635 *kcg_c1,
  array__128635 *kcg_c2);
#endif /* kcg_comp_array__128635 */

#ifndef kcg_comp_array__128646
extern kcg_bool kcg_comp_array__128646(
  array__128646 *kcg_c1,
  array__128646 *kcg_c2);
#endif /* kcg_comp_array__128646 */

#ifndef kcg_comp_array__128654
extern kcg_bool kcg_comp_array__128654(
  array__128654 *kcg_c1,
  array__128654 *kcg_c2);
#endif /* kcg_comp_array__128654 */

#ifndef kcg_comp_array__128707
extern kcg_bool kcg_comp_array__128707(
  array__128707 *kcg_c1,
  array__128707 *kcg_c2);
#endif /* kcg_comp_array__128707 */

#ifndef kcg_comp_array__128740
extern kcg_bool kcg_comp_array__128740(
  array__128740 *kcg_c1,
  array__128740 *kcg_c2);
#endif /* kcg_comp_array__128740 */

#ifndef kcg_comp_array__128756
extern kcg_bool kcg_comp_array__128756(
  array__128756 *kcg_c1,
  array__128756 *kcg_c2);
#endif /* kcg_comp_array__128756 */

#ifndef kcg_comp_array__128793
extern kcg_bool kcg_comp_array__128793(
  array__128793 *kcg_c1,
  array__128793 *kcg_c2);
#endif /* kcg_comp_array__128793 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__128866
extern kcg_bool kcg_comp_array__128866(
  array__128866 *kcg_c1,
  array__128866 *kcg_c2);
#endif /* kcg_comp_array__128866 */

#ifndef kcg_comp_array__128902
extern kcg_bool kcg_comp_array__128902(
  array__128902 *kcg_c1,
  array__128902 *kcg_c2);
#endif /* kcg_comp_array__128902 */

#ifndef kcg_comp_array__128912
extern kcg_bool kcg_comp_array__128912(
  array__128912 *kcg_c1,
  array__128912 *kcg_c2);
#endif /* kcg_comp_array__128912 */

#ifndef kcg_comp_array__128944
extern kcg_bool kcg_comp_array__128944(
  array__128944 *kcg_c1,
  array__128944 *kcg_c2);
#endif /* kcg_comp_array__128944 */

#ifndef kcg_comp_array__128967
extern kcg_bool kcg_comp_array__128967(
  array__128967 *kcg_c1,
  array__128967 *kcg_c2);
#endif /* kcg_comp_array__128967 */

#ifndef kcg_comp_array__128970
extern kcg_bool kcg_comp_array__128970(
  array__128970 *kcg_c1,
  array__128970 *kcg_c2);
#endif /* kcg_comp_array__128970 */

#ifndef kcg_comp_array__129006
extern kcg_bool kcg_comp_array__129006(
  array__129006 *kcg_c1,
  array__129006 *kcg_c2);
#endif /* kcg_comp_array__129006 */

#ifndef kcg_comp_array__129021
extern kcg_bool kcg_comp_array__129021(
  array__129021 *kcg_c1,
  array__129021 *kcg_c2);
#endif /* kcg_comp_array__129021 */

#ifndef kcg_comp_array__129032
extern kcg_bool kcg_comp_array__129032(
  array__129032 *kcg_c1,
  array__129032 *kcg_c2);
#endif /* kcg_comp_array__129032 */

#ifndef kcg_comp_array__129044
extern kcg_bool kcg_comp_array__129044(
  array__129044 *kcg_c1,
  array__129044 *kcg_c2);
#endif /* kcg_comp_array__129044 */

#ifndef kcg_comp_array__129082
extern kcg_bool kcg_comp_array__129082(
  array__129082 *kcg_c1,
  array__129082 *kcg_c2);
#endif /* kcg_comp_array__129082 */

#ifndef kcg_comp_array__129105
extern kcg_bool kcg_comp_array__129105(
  array__129105 *kcg_c1,
  array__129105 *kcg_c2);
#endif /* kcg_comp_array__129105 */

#ifndef kcg_comp_array__129117
extern kcg_bool kcg_comp_array__129117(
  array__129117 *kcg_c1,
  array__129117 *kcg_c2);
#endif /* kcg_comp_array__129117 */

#ifndef kcg_comp_array__129135
extern kcg_bool kcg_comp_array__129135(
  array__129135 *kcg_c1,
  array__129135 *kcg_c2);
#endif /* kcg_comp_array__129135 */

#ifndef kcg_comp_array__129146
extern kcg_bool kcg_comp_array__129146(
  array__129146 *kcg_c1,
  array__129146 *kcg_c2);
#endif /* kcg_comp_array__129146 */

#ifndef kcg_comp_array__129176
extern kcg_bool kcg_comp_array__129176(
  array__129176 *kcg_c1,
  array__129176 *kcg_c2);
#endif /* kcg_comp_array__129176 */

#ifndef kcg_comp_array__129186
extern kcg_bool kcg_comp_array__129186(
  array__129186 *kcg_c1,
  array__129186 *kcg_c2);
#endif /* kcg_comp_array__129186 */

#ifndef kcg_comp_array__129205
extern kcg_bool kcg_comp_array__129205(
  array__129205 *kcg_c1,
  array__129205 *kcg_c2);
#endif /* kcg_comp_array__129205 */

#ifndef kcg_comp_array__129214
extern kcg_bool kcg_comp_array__129214(
  array__129214 *kcg_c1,
  array__129214 *kcg_c2);
#endif /* kcg_comp_array__129214 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__129286
extern kcg_bool kcg_comp_array__129286(
  array__129286 *kcg_c1,
  array__129286 *kcg_c2);
#endif /* kcg_comp_array__129286 */

#ifndef kcg_comp_array__129289
extern kcg_bool kcg_comp_array__129289(
  array__129289 *kcg_c1,
  array__129289 *kcg_c2);
#endif /* kcg_comp_array__129289 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__129327
extern kcg_bool kcg_comp_array__129327(
  array__129327 *kcg_c1,
  array__129327 *kcg_c2);
#endif /* kcg_comp_array__129327 */

#ifndef kcg_comp_array__129330
extern kcg_bool kcg_comp_array__129330(
  array__129330 *kcg_c1,
  array__129330 *kcg_c2);
#endif /* kcg_comp_array__129330 */

#ifndef kcg_comp_array_int_2_4
extern kcg_bool kcg_comp_array_int_2_4(
  array_int_2_4 *kcg_c1,
  array_int_2_4 *kcg_c2);
#endif /* kcg_comp_array_int_2_4 */

#ifndef kcg_comp_array__129488
extern kcg_bool kcg_comp_array__129488(
  array__129488 *kcg_c1,
  array__129488 *kcg_c2);
#endif /* kcg_comp_array__129488 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array__129524
extern kcg_bool kcg_comp_array__129524(
  array__129524 *kcg_c1,
  array__129524 *kcg_c2);
#endif /* kcg_comp_array__129524 */

#ifndef kcg_comp_array__129536
extern kcg_bool kcg_comp_array__129536(
  array__129536 *kcg_c1,
  array__129536 *kcg_c2);
#endif /* kcg_comp_array__129536 */

#ifndef kcg_comp_array__129558
extern kcg_bool kcg_comp_array__129558(
  array__129558 *kcg_c1,
  array__129558 *kcg_c2);
#endif /* kcg_comp_array__129558 */

#ifndef kcg_comp_array__129620
extern kcg_bool kcg_comp_array__129620(
  array__129620 *kcg_c1,
  array__129620 *kcg_c2);
#endif /* kcg_comp_array__129620 */

#ifndef kcg_comp_array__129623
extern kcg_bool kcg_comp_array__129623(
  array__129623 *kcg_c1,
  array__129623 *kcg_c2);
#endif /* kcg_comp_array__129623 */

#ifndef kcg_comp_array__129626
extern kcg_bool kcg_comp_array__129626(
  array__129626 *kcg_c1,
  array__129626 *kcg_c2);
#endif /* kcg_comp_array__129626 */

#ifndef kcg_comp_array__129629
extern kcg_bool kcg_comp_array__129629(
  array__129629 *kcg_c1,
  array__129629 *kcg_c2);
#endif /* kcg_comp_array__129629 */

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

#ifndef kcg_comp_array__129654
extern kcg_bool kcg_comp_array__129654(
  array__129654 *kcg_c1,
  array__129654 *kcg_c2);
#endif /* kcg_comp_array__129654 */

#ifndef kcg_comp_array__129737
extern kcg_bool kcg_comp_array__129737(
  array__129737 *kcg_c1,
  array__129737 *kcg_c2);
#endif /* kcg_comp_array__129737 */

#ifndef kcg_comp_array_char_255
extern kcg_bool kcg_comp_array_char_255(
  array_char_255 *kcg_c1,
  array_char_255 *kcg_c2);
#endif /* kcg_comp_array_char_255 */

#ifndef kcg_comp_array_char_9
extern kcg_bool kcg_comp_array_char_9(
  array_char_9 *kcg_c1,
  array_char_9 *kcg_c2);
#endif /* kcg_comp_array_char_9 */

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

#ifndef kcg_comp_array__129887
extern kcg_bool kcg_comp_array__129887(
  array__129887 *kcg_c1,
  array__129887 *kcg_c2);
#endif /* kcg_comp_array__129887 */

#ifndef kcg_comp_array__129904
extern kcg_bool kcg_comp_array__129904(
  array__129904 *kcg_c1,
  array__129904 *kcg_c2);
#endif /* kcg_comp_array__129904 */

#ifndef kcg_comp_array__129926
extern kcg_bool kcg_comp_array__129926(
  array__129926 *kcg_c1,
  array__129926 *kcg_c2);
#endif /* kcg_comp_array__129926 */

#ifndef kcg_comp_array__129929
extern kcg_bool kcg_comp_array__129929(
  array__129929 *kcg_c1,
  array__129929 *kcg_c2);
#endif /* kcg_comp_array__129929 */

#ifndef kcg_comp_array__129940
extern kcg_bool kcg_comp_array__129940(
  array__129940 *kcg_c1,
  array__129940 *kcg_c2);
#endif /* kcg_comp_array__129940 */

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

#ifndef kcg_comp_array__130072
extern kcg_bool kcg_comp_array__130072(
  array__130072 *kcg_c1,
  array__130072 *kcg_c2);
#endif /* kcg_comp_array__130072 */

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

#ifndef kcg_comp_array__130287
extern kcg_bool kcg_comp_array__130287(
  array__130287 *kcg_c1,
  array__130287 *kcg_c2);
#endif /* kcg_comp_array__130287 */

#ifndef kcg_comp_array__130295
extern kcg_bool kcg_comp_array__130295(
  array__130295 *kcg_c1,
  array__130295 *kcg_c2);
#endif /* kcg_comp_array__130295 */

#ifndef kcg_comp_array__130308
extern kcg_bool kcg_comp_array__130308(
  array__130308 *kcg_c1,
  array__130308 *kcg_c2);
#endif /* kcg_comp_array__130308 */

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

#ifndef kcg_comp_array__130496
extern kcg_bool kcg_comp_array__130496(
  array__130496 *kcg_c1,
  array__130496 *kcg_c2);
#endif /* kcg_comp_array__130496 */

#ifndef kcg_comp_array__130543
extern kcg_bool kcg_comp_array__130543(
  array__130543 *kcg_c1,
  array__130543 *kcg_c2);
#endif /* kcg_comp_array__130543 */

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

#ifndef kcg_comp_array__130585
extern kcg_bool kcg_comp_array__130585(
  array__130585 *kcg_c1,
  array__130585 *kcg_c2);
#endif /* kcg_comp_array__130585 */

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

#ifndef kcg_comp_array__130612
extern kcg_bool kcg_comp_array__130612(
  array__130612 *kcg_c1,
  array__130612 *kcg_c2);
#endif /* kcg_comp_array__130612 */

#ifndef kcg_comp_array__130615
extern kcg_bool kcg_comp_array__130615(
  array__130615 *kcg_c1,
  array__130615 *kcg_c2);
#endif /* kcg_comp_array__130615 */

#ifndef kcg_comp_array__130618
extern kcg_bool kcg_comp_array__130618(
  array__130618 *kcg_c1,
  array__130618 *kcg_c2);
#endif /* kcg_comp_array__130618 */

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

#ifndef kcg_comp_array__130627
extern kcg_bool kcg_comp_array__130627(
  array__130627 *kcg_c1,
  array__130627 *kcg_c2);
#endif /* kcg_comp_array__130627 */

#ifndef kcg_comp_array__130630
extern kcg_bool kcg_comp_array__130630(
  array__130630 *kcg_c1,
  array__130630 *kcg_c2);
#endif /* kcg_comp_array__130630 */

#ifndef kcg_comp_array_int_42
extern kcg_bool kcg_comp_array_int_42(
  array_int_42 *kcg_c1,
  array_int_42 *kcg_c2);
#endif /* kcg_comp_array_int_42 */

#ifndef kcg_comp_array__130636
extern kcg_bool kcg_comp_array__130636(
  array__130636 *kcg_c1,
  array__130636 *kcg_c2);
#endif /* kcg_comp_array__130636 */

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

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

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

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array__130657
extern kcg_bool kcg_comp_array__130657(
  array__130657 *kcg_c1,
  array__130657 *kcg_c2);
#endif /* kcg_comp_array__130657 */

#ifndef kcg_comp_array_bool_5
extern kcg_bool kcg_comp_array_bool_5(
  array_bool_5 *kcg_c1,
  array_bool_5 *kcg_c2);
#endif /* kcg_comp_array_bool_5 */

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

#ifndef kcg_comp_array__135638
extern kcg_bool kcg_comp_array__135638(
  array__135638 *kcg_c1,
  array__135638 *kcg_c2);
#endif /* kcg_comp_array__135638 */

#ifndef kcg_comp_array__136078
extern kcg_bool kcg_comp_array__136078(
  array__136078 *kcg_c1,
  array__136078 *kcg_c2);
#endif /* kcg_comp_array__136078 */

#ifndef kcg_comp_array__136315
extern kcg_bool kcg_comp_array__136315(
  array__136315 *kcg_c1,
  array__136315 *kcg_c2);
#endif /* kcg_comp_array__136315 */

#ifndef kcg_comp_array__136412
extern kcg_bool kcg_comp_array__136412(
  array__136412 *kcg_c1,
  array__136412 *kcg_c2);
#endif /* kcg_comp_array__136412 */

#ifndef kcg_comp_array__136565
extern kcg_bool kcg_comp_array__136565(
  array__136565 *kcg_c1,
  array__136565 *kcg_c2);
#endif /* kcg_comp_array__136565 */

#ifndef kcg_comp_array__136569
extern kcg_bool kcg_comp_array__136569(
  array__136569 *kcg_c1,
  array__136569 *kcg_c2);
#endif /* kcg_comp_array__136569 */

#ifndef kcg_comp_array__136573
extern kcg_bool kcg_comp_array__136573(
  array__136573 *kcg_c1,
  array__136573 *kcg_c2);
#endif /* kcg_comp_array__136573 */

#ifndef kcg_comp_array__136576
extern kcg_bool kcg_comp_array__136576(
  array__136576 *kcg_c1,
  array__136576 *kcg_c2);
#endif /* kcg_comp_array__136576 */

#ifndef kcg_comp_array__136580
extern kcg_bool kcg_comp_array__136580(
  array__136580 *kcg_c1,
  array__136580 *kcg_c2);
#endif /* kcg_comp_array__136580 */

#ifndef kcg_comp_array__136583
extern kcg_bool kcg_comp_array__136583(
  array__136583 *kcg_c1,
  array__136583 *kcg_c2);
#endif /* kcg_comp_array__136583 */

#ifndef kcg_comp_array__136587
extern kcg_bool kcg_comp_array__136587(
  array__136587 *kcg_c1,
  array__136587 *kcg_c2);
#endif /* kcg_comp_array__136587 */

#ifndef kcg_comp_array__136673
extern kcg_bool kcg_comp_array__136673(
  array__136673 *kcg_c1,
  array__136673 *kcg_c2);
#endif /* kcg_comp_array__136673 */

#define kcg_comp_Array03_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_Array03_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_Array11_TM_TrainToTrack kcg_comp_array_int_11

#define kcg_copy_Array11_TM_TrainToTrack kcg_copy_array_int_11

#define kcg_comp_P003_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P003_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_TM_TrainToTrack kcg_comp_struct__127898

#define kcg_copy_P003_TM_TrainToTrack kcg_copy_struct__127898

#define kcg_comp_P009_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P009_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_DMI_Track_Description_int_array_T kcg_comp_array_int_325

#define kcg_copy_DMI_Track_Description_int_array_T kcg_copy_array_int_325

#define kcg_comp_P009_TM_TrainToTrack kcg_comp_struct__127877

#define kcg_copy_P009_TM_TrainToTrack kcg_copy_struct__127877

#define kcg_comp_DMI_gradientProfile_int_arrayT kcg_comp_array_int_129

#define kcg_copy_DMI_gradientProfile_int_arrayT kcg_copy_array_int_129

#define kcg_comp_P011_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P011_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_DMI_trackCondition_int_array_T kcg_comp_array_int_65

#define kcg_copy_DMI_trackCondition_int_array_T kcg_copy_array_int_65

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

#define kcg_comp_P011_voltage_TM_TrainToTrack kcg_comp_struct__127449

#define kcg_copy_P011_voltage_TM_TrainToTrack kcg_copy_struct__127449

#define kcg_comp_P011_voltage_list_TM_TrainToTrack kcg_comp_array__127454

#define kcg_copy_P011_voltage_list_TM_TrainToTrack kcg_copy_array__127454

#define kcg_comp_P011_TM_TrainToTrack kcg_comp_struct__127859

#define kcg_copy_P011_TM_TrainToTrack kcg_copy_struct__127859

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P000_TM_TrainToTrack kcg_comp_struct__127927

#define kcg_copy_P000_TM_TrainToTrack kcg_copy_struct__127927

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TM_TrainToTrack kcg_comp_struct__127906

#define kcg_copy_P001_TM_TrainToTrack kcg_copy_struct__127906

#define kcg_comp_P044_other_data_TM_TrainToTrack kcg_comp_array_int_1

#define kcg_copy_P044_other_data_TM_TrainToTrack kcg_copy_array_int_1

#define kcg_comp_P044_TM_TrainToTrack kcg_comp_struct__129494

#define kcg_copy_P044_TM_TrainToTrack kcg_copy_struct__129494

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P005_TM_TrainToTrack kcg_comp_struct__127884

#define kcg_copy_P005_TM_TrainToTrack kcg_copy_struct__127884

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P004_TM_TrainToTrack kcg_comp_struct__127891

#define kcg_copy_P004_TM_TrainToTrack kcg_copy_struct__127891

#define kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_comp_array__128412

#define kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_copy_array__128412

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__127784

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__127784

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__127809

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__127809

#define kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg kcg_comp_struct__129527

#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg kcg_copy_struct__129527

#define kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_comp_struct__129531

#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_copy_struct__129531

#define kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_comp_struct__129507

#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_copy_struct__129507

#define kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg kcg_comp_array__129524

#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg kcg_copy_array__129524

#define kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg kcg_comp_struct__129518

#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg kcg_copy_struct__129518

#define kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg kcg_comp_struct__129502

#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg kcg_copy_struct__129502

#define kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg kcg_comp_struct__128490

#define kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg kcg_copy_struct__128490

#define kcg_comp_connection_ids_T_Handover_Pkg kcg_comp_struct__128470

#define kcg_copy_connection_ids_T_Handover_Pkg kcg_copy_struct__128470

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__127967

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__127967

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__127987

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__127987

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__128011

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__128011

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__127970

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__127970

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__127990

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__127990

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__127962

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__127962

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__127967

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__127967

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__127993

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__127993

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__128539

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__128539

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__128545

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__128545

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__128548

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__128548

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__128555

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__128555

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__128558

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__128558

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__128570

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__128570

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__128573

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__128573

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__128580

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__128580

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__128583

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__128583

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__128614

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__128614

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__128649

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__128649

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__129289

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__129289

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__129292

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__129292

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__129117

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__129117

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__129120

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__129120

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__129099

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__129099

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__129105

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__129105

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__129108

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__129108

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__129160

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__129160

#define kcg_comp_probesBalises_T_xdebugSupport_Pkg kcg_comp_struct__129584

#define kcg_copy_probesBalises_T_xdebugSupport_Pkg kcg_copy_struct__129584

#define kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg kcg_comp_struct__129591

#define kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg kcg_copy_struct__129591

#define kcg_comp_ModeDecisionTableType_DataDictionary_Pkg kcg_comp_array__129623

#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg kcg_copy_array__129623

#define kcg_comp_LevelDecisionTableType_DataDictionary_Pkg kcg_comp_array__129629

#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg kcg_copy_array__129629

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

#define kcg_comp_DMI_Entry_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Entry_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Menu_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Menu_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal kcg_comp_array__129488

#define kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal kcg_copy_array__129488

#define kcg_comp_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_comp_array__128412

#define kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_copy_array__128412

#define kcg_comp_DMI_Dynamic_int_array_T_DATA kcg_comp_array_int_24

#define kcg_copy_DMI_Dynamic_int_array_T_DATA kcg_copy_array_int_24

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__129393

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__129393

#define kcg_comp_StaticSpeedSection_t_TrackAtlasTypes kcg_comp_struct__128959

#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes kcg_copy_struct__128959

#define kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage kcg_comp_array_bool_256_46

#define kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage kcg_copy_array_bool_256_46

#define kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes kcg_comp_array__128967

#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes kcg_copy_array__128967

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__128894

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__128894

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__128902

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__128902

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__129402

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__129402

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__128796

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__128796

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__128801

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__128801

#define kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__128793

#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__128793

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__128807

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__128807

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__128784

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__128784

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__128970

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__128970

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__129286

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__129286

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__129411

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__129411

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__129279

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__129279

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__128952

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__128952

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__128208

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__128208

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__128221

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__128221

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__128045

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__128045

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__128099

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__128099

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__128109

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__128109

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__128187

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__128187

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__128102

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__128102

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__128109

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__128109

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__128112

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__128112

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__128148

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__128148

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__128158

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__128158

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__128161

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__128161

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__128071

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__128071

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__128077

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__128077

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__128080

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__128080

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__128040

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__128040

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__128045

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__128045

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__128048

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__128048

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__128061

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__128061

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__127591

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__127591

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__127609

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__127609

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__128190

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__128190

#define kcg_comp_Array09_TM kcg_comp_array_int_9

#define kcg_copy_Array09_TM kcg_copy_array_int_9

#define kcg_comp_P131_OBU_T_TM kcg_comp_struct__128479

#define kcg_copy_P131_OBU_T_TM kcg_copy_struct__128479

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__128710

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__128710

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__128707

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__128707

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__128696

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__128696

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__128539

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__128539

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__128545

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__128545

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__127757

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__127757

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__128548

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__128548

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__127773

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__127773

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__128555

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__128555

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__128558

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__128558

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__127698

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__127698

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__128570

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__128570

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__127703

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__127703

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__128573

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__128573

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__127778

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__127778

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__128580

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__128580

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__127804

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__127804

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__128649

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__128649

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__127828

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__127828

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__129289

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__129289

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__127833

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__127833

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__129338

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__129338

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__127838

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__127838

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__127449

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__127449

#define kcg_comp_Array08_TM kcg_comp_array_int_8

#define kcg_copy_Array08_TM kcg_copy_array_int_8

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__127454

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__127454

#define kcg_comp_P058_OBU_T_TM kcg_comp_struct__129561

#define kcg_copy_P058_OBU_T_TM kcg_copy_struct__129561

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_5

#define kcg_comp_P058_OBU_sectionlist_enum_T_TM kcg_comp_array__129558

#define kcg_copy_P058_OBU_sectionlist_enum_T_TM kcg_copy_array__129558

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_enum_T_TM kcg_comp_struct__129552

#define kcg_copy_P058_section_enum_T_TM kcg_copy_struct__129552

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct__129047

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct__129047

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct__128973

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct__128973

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct__129085

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct__129085

#define kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__129703

#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__129703

#define kcg_comp_P012_OBU_T_TM kcg_comp_struct__129227

#define kcg_copy_P012_OBU_T_TM kcg_copy_struct__129227

#define kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__129791

#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__129791

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__129445

#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__129445

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct__128858

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct__128858

#define kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__129475

#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__129475

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_comp_array_char_9

#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_copy_array_char_9

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__129800

#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__129800

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__128915

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__128915

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__128912

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__128912

#define kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg kcg_comp_struct__129513

#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg kcg_copy_struct__129513

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__128905

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__128905

#define kcg_comp_BG_Message_T_BG_Types_Pkg kcg_comp_struct__129657

#define kcg_copy_BG_Message_T_BG_Types_Pkg kcg_copy_struct__129657

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__129189

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__129189

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__127297

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__127297

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__129186

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__129186

#define kcg_comp_Telegram_T_BG_Types_Pkg kcg_comp_struct__129647

#define kcg_copy_Telegram_T_BG_Types_Pkg kcg_copy_struct__129647

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_TelegramArray_T_BG_Types_Pkg kcg_comp_array__129654

#define kcg_copy_TelegramArray_T_BG_Types_Pkg kcg_copy_array__129654

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__129179

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__129179

#define kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg kcg_comp_struct__127339

#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg kcg_copy_struct__127339

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__128437

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__128437

#define kcg_comp_P046_OBU_T_TM kcg_comp_struct__129217

#define kcg_copy_P046_OBU_T_TM kcg_copy_struct__129217

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__128233

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__128233

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__129214

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__129214

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__128440

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__128440

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__128423

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__128423

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__129208

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__129208

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__128869

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__128869

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__128866

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__128866

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__128858

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__128858

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__128756

#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__128756

#define kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck kcg_comp_struct__128771

#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck kcg_copy_struct__128771

#define kcg_comp_positionErrors_T_TrainPosition_Types_Pck kcg_comp_struct__128759

#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck kcg_copy_struct__128759

#define kcg_comp_positionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__128467

#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__128467

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__128503

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__128503

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__128446

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__128446

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__128455

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__128455

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__128513

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__128513

#define kcg_comp_morc_configData_T_RCM_Session_Types_Pkg kcg_comp_struct__128392

#define kcg_copy_morc_configData_T_RCM_Session_Types_Pkg kcg_copy_struct__128392

#define kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg kcg_comp_struct__128304

#define kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg kcg_copy_struct__128304

#define kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg kcg_comp_struct__128309

#define kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg kcg_copy_struct__128309

#define kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg kcg_comp_struct__128358

#define kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg kcg_copy_struct__128358

#define kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg kcg_comp_struct__128350

#define kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg kcg_copy_struct__128350

#define kcg_comp_morcStatus_T_RCM_Session_Types_Pkg kcg_comp_struct__128406

#define kcg_copy_morcStatus_T_RCM_Session_Types_Pkg kcg_copy_struct__128406

#define kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg kcg_comp_struct__128377

#define kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg kcg_copy_struct__128377

#define kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg kcg_comp_struct__128333

#define kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg kcg_copy_struct__128333

#define kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg kcg_comp_struct__128340

#define kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg kcg_copy_struct__128340

#define kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg kcg_comp_struct__128384

#define kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg kcg_copy_struct__128384

#define kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130244

#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130244

#define kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130184

#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130184

#define kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130262

#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130262

#define kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130190

#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130190

#define kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130268

#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130268

#define kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130274

#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130274

#define kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130316

#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130316

#define kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130330

#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130330

#define kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130220

#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130220

#define kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130178

#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130178

#define kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130374

#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130374

#define kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__130380

#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__130380

#define kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__129457

#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__129457

#define kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__129753

#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__129753

#define kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__129806

#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__129806

#define kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__129811

#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__129811

#define kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__129760

#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__129760

#define kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__129689

#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__129689

#define kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__129769

#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__129769

#define kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg kcg_comp_struct__129716

#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg kcg_copy_struct__129716

#define kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg kcg_comp_struct__129740

#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg kcg_copy_struct__129740

#define kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg kcg_comp_struct__129746

#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg kcg_copy_struct__129746

#define kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg kcg_comp_struct__127289

#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg kcg_copy_struct__127289

#define kcg_comp_API_TelegramHeader_T_API_Msg_Pkg kcg_comp_struct__127344

#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg kcg_copy_struct__127344

#define kcg_comp_API_TrackSideInput_T_API_Msg_Pkg kcg_comp_struct__127371

#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg kcg_copy_struct__127371

#define kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__129683

#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__129683

#define kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__129672

#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__129672

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__128825

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__128825

#define kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_comp_struct__129726

#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_copy_struct__129726

#define kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_comp_array__129737

#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_copy_array__129737

#define kcg_comp_DMI_level_array_T_DMI_Types_Pkg kcg_comp_array__127237

#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg kcg_copy_array__127237

#define kcg_comp_DMI_LevelList_T_DMI_Types_Pkg kcg_comp_struct__127240

#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg kcg_copy_struct__127240

#define kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_comp_struct__130303

#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_copy_struct__130303

#define kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_comp_array__130308

#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_copy_array__130308

#define kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg kcg_comp_struct__130311

#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg kcg_copy_struct__130311

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct__129279

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct__129279

#define kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_comp_array__130295

#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_copy_array__130295

#define kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg kcg_comp_struct__130298

#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg kcg_copy_struct__130298

#define kcg_comp_GUI_to_EVC_EnvSim kcg_comp_struct__127380

#define kcg_copy_GUI_to_EVC_EnvSim kcg_copy_struct__127380

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct__128952

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct__128952

#define kcg_comp_EVC_to_GUI_EnvSim kcg_comp_struct__127393

#define kcg_copy_EVC_to_GUI_EnvSim kcg_copy_struct__127393

#define kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_comp_array__130287

#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_copy_array__130287

#define kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg kcg_comp_struct__130290

#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg kcg_copy_struct__130290

#define kcg_comp_ACC_SDM_GradientAcceleration_Pkg kcg_comp_struct__129932

#define kcg_copy_ACC_SDM_GradientAcceleration_Pkg kcg_copy_struct__129932

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct__130196

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct__130196

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct__130196

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct__130196

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct__130196

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct__130196

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct__130196

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct__130196

#define kcg_comp_DMI_train_length_T_DMI_Types_Pkg kcg_comp_struct__130203

#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg kcg_copy_struct__130203

#define kcg_comp_a_Brake_t_SDMConversionModelPkg kcg_comp_struct__129972

#define kcg_copy_a_Brake_t_SDMConversionModelPkg kcg_copy_struct__129972

#define kcg_comp_DMI_train_id_T_DMI_Types_Pkg kcg_comp_struct__130211

#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg kcg_copy_struct__130211

#define kcg_comp_v_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_v_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_a_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_a_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_av_MergedMap_t_SDMConversionModelPkg kcg_comp_struct__129980

#define kcg_copy_av_MergedMap_t_SDMConversionModelPkg kcg_copy_struct__129980

#define kcg_comp_v_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_a_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_av_Map_t_SDMConversionModelPkg kcg_comp_struct__129967

#define kcg_copy_av_Map_t_SDMConversionModelPkg kcg_copy_struct__129967

#define kcg_comp_v_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_v_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_m_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_m_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_mv_Map_t_SDMConversionModelPkg kcg_comp_struct__129991

#define kcg_copy_mv_Map_t_SDMConversionModelPkg kcg_copy_struct__129991

#define kcg_comp_LKrIntLookUp_t_SDMConversionModelPkg kcg_comp_array_int_32

#define kcg_copy_LKrIntLookUp_t_SDMConversionModelPkg kcg_copy_array_int_32

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_copy_array_real_3

#define kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg kcg_comp_struct__130341

#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg kcg_copy_struct__130341

#define kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg kcg_comp_struct__127626

#define kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg kcg_copy_struct__127626

#define kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_comp_struct__130232

#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_copy_struct__130232

#define kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg kcg_comp_struct__130238

#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg kcg_copy_struct__130238

#define kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_comp_struct__130129

#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_copy_struct__130129

#define kcg_comp_RBC_Data_T_RBC_DataBus_Pkg kcg_comp_struct__127736

#define kcg_copy_RBC_Data_T_RBC_DataBus_Pkg kcg_copy_struct__127736

#define kcg_comp_DMI_level_T_DMI_Types_Pkg kcg_comp_struct__127232

#define kcg_copy_DMI_level_T_DMI_Types_Pkg kcg_copy_struct__127232

#define kcg_comp_DMI_TEXT_DMI_Types_Pkg kcg_comp_array_char_255

#define kcg_copy_DMI_TEXT_DMI_Types_Pkg kcg_copy_array_char_255

#define kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg kcg_comp_struct__129779

#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg kcg_copy_struct__129779

#define kcg_comp_t_BrakeVt_t_SDMModelPkg kcg_comp_array_real_2

#define kcg_copy_t_BrakeVt_t_SDMModelPkg kcg_copy_array_real_2

#define kcg_comp_t_Brake_t_SDMModelPkg kcg_comp_struct__130002

#define kcg_copy_t_Brake_t_SDMModelPkg kcg_copy_struct__130002

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__127310

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__127310

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__127317

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__127317

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__127323

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__127323

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_real_3

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__127333

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__127333

#define kcg_comp_TargetIteratorAkku_TargetLimits_Pkg kcg_comp_struct__130036

#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg kcg_copy_struct__130036

#define kcg_comp_bec_t_TargetLimits_Pkg kcg_comp_struct__130023

#define kcg_copy_bec_t_TargetLimits_Pkg kcg_copy_struct__130023

#define kcg_comp_T_trac_t_TargetLimits_Pkg kcg_comp_struct__130007

#define kcg_copy_T_trac_t_TargetLimits_Pkg kcg_copy_struct__130007

#define kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg kcg_comp_struct__130116

#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg kcg_copy_struct__130116

#define kcg_comp_odometryFactors_T_Toolbox kcg_comp_struct__128202

#define kcg_copy_odometryFactors_T_Toolbox kcg_copy_struct__128202

#define kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg kcg_comp_struct__130438

#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg kcg_copy_struct__130438

#define kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_comp_array__129887

#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_copy_array__129887

#define kcg_comp_CurveCollection_T_CalcBrakingCurves_types kcg_comp_struct__129890

#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types kcg_copy_struct__129890

#define kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_comp_array_bool_114

#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_copy_array_bool_114

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types kcg_comp_struct__129880

#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types kcg_copy_struct__129880

#define kcg_comp_ParabolaArc_T_CalcBrakingCurves_types kcg_comp_struct__130017

#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types kcg_copy_struct__130017

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_ASafe_Data_T_CalcBrakingCurves_types kcg_comp_array_real_100_14

#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types kcg_copy_array_real_100_14

#define kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_14

#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_14

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_ASafe_T_CalcBrakingCurves_types kcg_comp_struct__129961

#define kcg_copy_ASafe_T_CalcBrakingCurves_types kcg_copy_struct__129961

#define kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_comp_struct__129253

#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_copy_struct__129253

#define kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__130499

#define kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__130499

#define kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_comp_array__130496

#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_copy_array__130496

#define kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_comp_struct__130443

#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_copy_struct__130443

#define kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg kcg_comp_struct__130451

#define kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg kcg_copy_struct__130451

#define kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg kcg_comp_struct__130458

#define kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg kcg_copy_struct__130458

#define kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__130506

#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__130506

#define kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_comp_struct__130463

#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_copy_struct__130463

#define kcg_comp_msgToTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct__127853

#define kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct__127853

#define kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_comp_struct__130472

#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_copy_struct__130472

#define kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg kcg_comp_struct__128226

#define kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg kcg_copy_struct__128226

#define kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__130523

#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__130523

#define kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_comp_struct__128283

#define kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_copy_struct__128283

#define kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_comp_struct__130481

#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_copy_struct__130481

#define kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg kcg_comp_struct__128296

#define kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg kcg_copy_struct__128296

#define kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_comp_array__130543

#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_copy_array__130543

#define kcg_comp_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct__128251

#define kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct__128251

#define kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg kcg_comp_struct__130554

#define kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg kcg_copy_struct__130554

#define kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_comp_struct__128290

#define kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_copy_struct__128290

#define kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_comp_struct__130546

#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_copy_struct__130546

#define kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg kcg_comp_struct__128261

#define kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg kcg_copy_struct__128261

#define kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_comp_struct__130535

#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_copy_struct__130535

#define kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_comp_struct__130121

#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_copy_struct__130121

#define kcg_comp_A_gradient_t_SDM_GradientAcceleration_types kcg_comp_array__129940

#define kcg_copy_A_gradient_t_SDM_GradientAcceleration_types kcg_copy_array__129940

#define kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types kcg_comp_struct__129914

#define kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types kcg_copy_struct__129914

#define kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types kcg_comp_array__129929

#define kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types kcg_copy_array__129929

#define kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types kcg_comp_array__129926

#define kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types kcg_copy_array__129926

#define kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types kcg_comp_struct__129920

#define kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types kcg_copy_struct__129920

#define kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_comp_struct__129262

#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_copy_struct__129262

#define kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg kcg_comp_struct__129613

#define kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg kcg_copy_struct__129613

#define kcg_comp_MRSP_internal_T_TargetManagement_types kcg_comp_array__130072

#define kcg_copy_MRSP_internal_T_TargetManagement_types kcg_copy_array__130072

#define kcg_comp_MA_section_real_T_TargetManagement_types kcg_comp_struct__130053

#define kcg_copy_MA_section_real_T_TargetManagement_types kcg_copy_struct__130053

#define kcg_comp_EOA_real_T_TargetManagement_types kcg_comp_struct__130048

#define kcg_copy_EOA_real_T_TargetManagement_types kcg_copy_struct__130048

#define kcg_comp_MRSP_internal_section_T_TargetManagement_types kcg_comp_struct__130066

#define kcg_copy_MRSP_internal_section_T_TargetManagement_types kcg_copy_struct__130066

#define kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_comp_struct__129695

#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_copy_struct__129695

#define kcg_comp_Target_real_T_TargetManagement_types kcg_comp_struct__129898

#define kcg_copy_Target_real_T_TargetManagement_types kcg_copy_struct__129898

#define kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_comp_struct__129709

#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_copy_struct__129709

#define kcg_comp_Target_list_MRSP_real_T_TargetManagement_types kcg_comp_array__129904

#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types kcg_copy_array__129904

#define kcg_comp_mobileHWStatus_Type_MoRC_Pck kcg_comp_struct__127225

#define kcg_copy_mobileHWStatus_Type_MoRC_Pck kcg_copy_struct__127225

#define kcg_comp_TargetCollection_T_TargetManagement_types kcg_comp_struct__129907

#define kcg_copy_TargetCollection_T_TargetManagement_types kcg_copy_struct__129907

#define kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg kcg_comp_struct__130433

#define kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg kcg_copy_struct__130433

#define kcg_comp_Target_T_TargetManagement_types kcg_comp_struct__129840

#define kcg_copy_Target_T_TargetManagement_types kcg_copy_struct__129840

#define kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg kcg_comp_struct__130426

#define kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg kcg_copy_struct__130426

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__128838

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__128838

#define kcg_comp_radioNetWorkIDs_T_MoRC_Pck kcg_comp_struct__128533

#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck kcg_copy_struct__128533

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct__127407

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct__127407

#define kcg_comp_TrainLocations_real_T_SDM_Types_Pkg kcg_comp_struct__129943

#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg kcg_copy_struct__129943

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__127407

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__127407

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__127407

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__127407

#define kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_comp_struct__127412

#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_copy_struct__127412

#define kcg_comp_SDM_Commands_T_SDM_Types_Pkg kcg_comp_struct__129847

#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg kcg_copy_struct__129847

#define kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_comp_struct__127418

#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_copy_struct__127418

#define kcg_comp_trainData_internal_t_SDM_Types_Pkg kcg_comp_struct__130028

#define kcg_copy_trainData_internal_t_SDM_Types_Pkg kcg_copy_struct__130028

#define kcg_comp_SDM_Locations_T_SDM_Types_Pkg kcg_comp_struct__130075

#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg kcg_copy_struct__130075

#define kcg_comp_Speeds_T_SDM_Types_Pkg kcg_comp_struct__130098

#define kcg_copy_Speeds_T_SDM_Types_Pkg kcg_copy_struct__130098

#define kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg kcg_comp_struct__127424

#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg kcg_copy_struct__127424

#define kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_array__128740

#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_array__128740

#define kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__128734

#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__128734

#define kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__128743

#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__128743

#define kcg_comp_Brake_status_T_TIU_Types_Pkg kcg_comp_struct__127429

#define kcg_copy_Brake_status_T_TIU_Types_Pkg kcg_copy_struct__127429

#define kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_comp_struct__127438

#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_copy_struct__127438

#define kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_comp_struct__127478

#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_copy_struct__127478

#define kcg_comp_trainData_T_TIU_Types_Pkg kcg_comp_struct__127460

#define kcg_copy_trainData_T_TIU_Types_Pkg kcg_copy_struct__127460

#define kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg kcg_comp_struct__129481

#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg kcg_copy_struct__129481

#define kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg kcg_comp_struct__130490

#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg kcg_copy_struct__130490

#define kcg_comp_M_current_T_TIU_Types_Pkg kcg_comp_struct__127498

#define kcg_copy_M_current_T_TIU_Types_Pkg kcg_copy_struct__127498

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct__127407

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct__127407

#define kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_comp_struct__127503

#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_copy_struct__127503

#define kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg kcg_comp_struct__127509

#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg kcg_copy_struct__127509

#define kcg_comp_MyArray_SDM_Commands_Pkg kcg_comp_array_bool_14

#define kcg_copy_MyArray_SDM_Commands_Pkg kcg_copy_array_bool_14

#define kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg kcg_comp_struct__130142

#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg kcg_copy_struct__130142

#define kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg kcg_comp_struct__130162

#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg kcg_copy_struct__130162

#define kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__128719

#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__128719

#define kcg_comp_M_voltage_T_TIU_Types_Pkg kcg_comp_struct__127514

#define kcg_copy_M_voltage_T_TIU_Types_Pkg kcg_copy_struct__127514

#define kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__128725

#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__128725

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct__127407

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct__127407

#define kcg_comp_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__128479

#define kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__128479

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct__127407

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct__127407

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__128830

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__128830

#define kcg_comp_Change_traction_system_T_TIU_Types_Pkg kcg_comp_struct__127519

#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg kcg_copy_struct__127519

#define kcg_comp_IterPacket58_T_Packet_Types_Pkg kcg_comp_struct__127635

#define kcg_copy_IterPacket58_T_Packet_Types_Pkg kcg_copy_struct__127635

#define kcg_comp_IterPacket58List_T_Packet_Types_Pkg kcg_comp_array__129536

#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg kcg_copy_array__129536

#define kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_comp_struct__129539

#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_copy_struct__129539

#define kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg kcg_comp_struct__129024

#define kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg kcg_copy_struct__129024

#define kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg kcg_comp_array__129032

#define kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg kcg_copy_array__129032

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__129035

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__129035

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__129044

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__129044

#define kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__129055

#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__129055

#define kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__129082

#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__129082

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct__129085

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct__129085

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct__129047

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct__129047

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__129093

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__129093

#define kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__128978

#define kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__128978

#define kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_comp_struct__128751

#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_copy_struct__128751

#define kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__129006

#define kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__129006

#define kcg_comp_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_comp_struct__128973

#define kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_copy_struct__128973

#define kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg kcg_comp_struct__129009

#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg kcg_copy_struct__129009

#define kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg kcg_comp_struct__127525

#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg kcg_copy_struct__127525

#define kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg kcg_comp_array__129021

#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg kcg_copy_array__129021

#define kcg_comp_SSP_T_Packet_Types_Pkg kcg_comp_struct__129138

#define kcg_copy_SSP_T_Packet_Types_Pkg kcg_copy_struct__129138

#define kcg_comp_SSPArray_T_Packet_Types_Pkg kcg_comp_array__129146

#define kcg_copy_SSPArray_T_Packet_Types_Pkg kcg_copy_array__129146

#define kcg_comp_Diff_T_Packet_Types_Pkg kcg_comp_struct__129127

#define kcg_copy_Diff_T_Packet_Types_Pkg kcg_copy_struct__129127

#define kcg_comp_DiffArray_T_Packet_Types_Pkg kcg_comp_array__129135

#define kcg_copy_DiffArray_T_Packet_Types_Pkg kcg_copy_array__129135

#define kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_comp_struct__129149

#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_copy_struct__129149

#define kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__129198

#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__129198

#define kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_comp_array__129205

#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_copy_array__129205

#define kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__129166

#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__129166

#define kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_comp_array__129176

#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_copy_array__129176

#define kcg_comp_nvkrint_T_Packet_Types_Pkg kcg_comp_struct__128619

#define kcg_copy_nvkrint_T_Packet_Types_Pkg kcg_copy_struct__128619

#define kcg_comp_nvkrintArray_T_Packet_Types_Pkg kcg_comp_array__128625

#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg kcg_copy_array__128625

#define kcg_comp_nvkvint_T_Packet_Types_Pkg kcg_comp_struct__128628

#define kcg_copy_nvkvint_T_Packet_Types_Pkg kcg_copy_struct__128628

#define kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg kcg_comp_struct__127533

#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg kcg_copy_struct__127533

#define kcg_comp_nvkvintArray_T_Packet_Types_Pkg kcg_comp_array__128635

#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg kcg_copy_array__128635

#define kcg_comp_nvkvintset_T_Packet_Types_Pkg kcg_comp_struct__128638

#define kcg_copy_nvkvintset_T_Packet_Types_Pkg kcg_copy_struct__128638

#define kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg kcg_comp_array__128646

#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg kcg_copy_array__128646

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct__128649

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct__128649

#define kcg_comp_nidCArray_T_Packet_Types_Pkg kcg_comp_array__128654

#define kcg_copy_nidCArray_T_Packet_Types_Pkg kcg_copy_array__128654

#define kcg_comp_Driver2MAR_T_TA_MA_Request kcg_comp_struct__128825

#define kcg_copy_Driver2MAR_T_TA_MA_Request kcg_copy_struct__128825

#define kcg_comp_Brake_command_T_TIU_Types_Pkg kcg_comp_struct__127540

#define kcg_copy_Brake_command_T_TIU_Types_Pkg kcg_copy_struct__127540

#define kcg_comp_P3_NationalValues_T_Packet_Types_Pkg kcg_comp_struct__128657

#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg kcg_copy_struct__128657

#define kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_comp_struct__128371

#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_copy_struct__128371

#define kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg kcg_comp_struct__128273

#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg kcg_copy_struct__128273

#define kcg_comp_Isolation_Status_T_TIU_Types_Pkg kcg_comp_struct__127546

#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg kcg_copy_struct__127546

#define kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_comp_struct__127551

#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_copy_struct__127551

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__127853

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__127853

#define kcg_comp_TIU_Input_msg_API_TIU_Pkg kcg_comp_struct__127487

#define kcg_copy_TIU_Input_msg_API_TIU_Pkg kcg_copy_struct__127487

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__127745

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__127745

#define kcg_comp_TIU_Output_msg_API_TIU_Pkg kcg_comp_struct__127561

#define kcg_copy_TIU_Output_msg_API_TIU_Pkg kcg_copy_struct__127561

#define kcg_comp_RadioMessage_T_Radio_Types_Pkg kcg_comp_struct__129638

#define kcg_copy_RadioMessage_T_Radio_Types_Pkg kcg_copy_struct__129638

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__127252

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__127252

#define kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_comp_array_int_311

#define kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_copy_array_int_311

#define kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_comp_struct__129818

#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_copy_struct__129818

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__127843

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__127843

#define kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_comp_struct__130406

#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_copy_struct__130406

#define kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_comp_array_int_999

#define kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_copy_array_int_999

#define kcg_comp_MSG_Errors_T_Common_Types_Pkg kcg_comp_struct__129572

#define kcg_copy_MSG_Errors_T_Common_Types_Pkg kcg_copy_struct__129572

#define kcg_comp_filterRelatedEvents_T_Common_Types_Pkg kcg_comp_struct__129602

#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg kcg_copy_struct__129602

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__128251

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__128251

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__127270

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__127270

#define kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg kcg_comp_struct__129664

#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg kcg_copy_struct__129664

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__127355

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__127355

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__127363

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__127363

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__127366

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__127366

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__127282

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__127282

#define kcg_comp_Radio_TrackTrain_Header_T_TM_transitional kcg_comp_struct__127252

#define kcg_copy_Radio_TrackTrain_Header_T_TM_transitional kcg_copy_struct__127252

#define kcg_comp_Radio_TrainTrack_Header_T_TM_transitional kcg_comp_struct__127745

#define kcg_copy_Radio_TrainTrack_Header_T_TM_transitional kcg_copy_struct__127745

#define kcg_comp_Radio_TrainTrack_Message_T_TM_transitional kcg_comp_struct__127853

#define kcg_copy_Radio_TrainTrack_Message_T_TM_transitional kcg_copy_struct__127853

#define kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg kcg_comp_struct__127566

#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg kcg_copy_struct__127566

#define kcg_comp_radioManagementMessage_T_Common_Types_Pkg kcg_comp_struct__130169

#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg kcg_copy_struct__130169

#define kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__128933

#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__128933

#define kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__128939

#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__128939

#define kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__128947

#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__128947

#define kcg_comp_M_155_T_TM_radio_messages kcg_comp_struct__128415

#define kcg_copy_M_155_T_TM_radio_messages kcg_copy_struct__128415

#define kcg_comp_M_156_T_TM_radio_messages kcg_comp_struct__128415

#define kcg_copy_M_156_T_TM_radio_messages kcg_copy_struct__128415

#define kcg_comp_M_159_T_TM_radio_messages kcg_comp_struct__128415

#define kcg_copy_M_159_T_TM_radio_messages kcg_copy_struct__128415

#define kcg_comp_M_154_T_TM_radio_messages kcg_comp_struct__128415

#define kcg_copy_M_154_T_TM_radio_messages kcg_copy_struct__128415

#define kcg_comp_M_132_T_TM_radio_messages kcg_comp_struct__128846

#define kcg_copy_M_132_T_TM_radio_messages kcg_copy_struct__128846

#define kcg_comp_M_147_T_TM_radio_messages kcg_comp_struct__128923

#define kcg_copy_M_147_T_TM_radio_messages kcg_copy_struct__128923

#define kcg_comp_M_146_T_TM_radio_messages kcg_comp_struct__129463

#define kcg_copy_M_146_T_TM_radio_messages kcg_copy_struct__129463

#define kcg_comp_M_129_T_TM_radio_messages kcg_comp_struct__128415

#define kcg_copy_M_129_T_TM_radio_messages kcg_copy_struct__128415

#define kcg_comp_M_136_T_TM_radio_messages kcg_comp_struct__128415

#define kcg_copy_M_136_T_TM_radio_messages kcg_copy_struct__128415

#define kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_comp_array_int_50

#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_copy_array_int_50

#define kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_comp_struct__127575

#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_copy_struct__127575

#define kcg_comp_M_TrainTrack_Message_T_TM_radio_messages kcg_comp_struct__127586

#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages kcg_copy_struct__127586

#define kcg_comp_RadioTrackTrainMessageQueueEntry_T kcg_comp_struct__127614

#define kcg_copy_RadioTrackTrainMessageQueueEntry_T kcg_copy_struct__127614

#define kcg_comp_RadioTrackTrainMessageQueueEntries_T kcg_comp_array__127619

#define kcg_copy_RadioTrackTrainMessageQueueEntries_T kcg_copy_array__127619

#define kcg_comp_RadioTrackTrainMessageQueue_T kcg_comp_struct__127622

#define kcg_copy_RadioTrackTrainMessageQueue_T kcg_copy_struct__127622

#define kcg_comp_PosRepParams_T kcg_comp_struct__127643

#define kcg_copy_PosRepParams_T kcg_copy_struct__127643

#define kcg_comp_MAReqParams_T kcg_comp_struct__127653

#define kcg_copy_MAReqParams_T kcg_copy_struct__127653

#define kcg_comp_NationalParams_T kcg_comp_struct__127660

#define kcg_copy_NationalParams_T kcg_copy_struct__127660

#define kcg_comp_DynamicConfig_T kcg_comp_struct__127670

#define kcg_copy_DynamicConfig_T kcg_copy_struct__127670

#define kcg_comp_PosData_T kcg_comp_struct__127677

#define kcg_copy_PosData_T kcg_copy_struct__127677

#define kcg_comp_TrainData_T kcg_comp_struct__127706

#define kcg_copy_TrainData_T kcg_copy_struct__127706

#define kcg_comp_SessionManagement_T kcg_comp_struct__127724

#define kcg_copy_SessionManagement_T kcg_copy_struct__127724

#define kcg_comp_Clock_T kcg_comp_struct__127729

#define kcg_copy_Clock_T kcg_copy_struct__127729

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__129327

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__129327

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__129322

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__129322

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__129330

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__129330

#define kcg_comp_AccuDistanceProfileMA_TA_MA kcg_comp_struct__129333

#define kcg_copy_AccuDistanceProfileMA_TA_MA kcg_copy_struct__129333

#define kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_comp_struct__127245

#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_copy_struct__127245

#define kcg_comp_trainData_Events_T_trainData_Types_pkg kcg_comp_struct__129418

#define kcg_copy_trainData_Events_T_trainData_Types_pkg kcg_copy_struct__129418

#define kcg_comp_trainData_Trigger_T_trainData_Types_pkg kcg_comp_struct__129427

#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg kcg_copy_struct__129427

#define kcg_comp_trainDataStatus_T_trainData_Types_pkg kcg_comp_struct__129435

#define kcg_copy_trainDataStatus_T_trainData_Types_pkg kcg_copy_struct__129435

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-12T10:46:55
*************************************************************$ */

