/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
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
/* TIU_Types_Pkg::M_Isolation_status_T */
typedef enum {
  on_board_equipment_is_isolated_TIU_Types_Pkg,
  on_board_equipement_is_not_isolated_TIU_Types_Pkg,
  isolation_status_not_defined_TIU_Types_Pkg
} M_Isolation_status_T_TIU_Types_Pkg;
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
/* MoRC_Pck::mobileSWAction_Type */
typedef enum {
  mswa_nop_MoRC_Pck,
  mswa_register_MoRC_Pck,
  mswa_connect_MoRC_Pck,
  mswa_establishRadioConnection_MoRC_Pck,
  mswa_terminateRadioConnection_MoRC_Pck,
  mswa_disconnect_MoRC_Pck,
  mswa_unregister_MoRC_Pck
} mobileSWAction_Type_MoRC_Pck;
/* MoRC_Pck::mobileHWConnectionStatus_Type */
typedef enum {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_MoRC_Pck;
/* MoRC_Pck::safeRadioConnectionStatus_Type */
typedef enum {
  srcs_NoConnection_MoRC_Pck,
  srcs_ConnectionLost_SetupFailed_MoRC_Pck,
  srcs_ConnectionUp_MoRC_Pck
} safeRadioConnectionStatus_Type_MoRC_Pck;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
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
/* MoRC_Pck::mobileSWConnectionStatus_Type */
typedef enum {
  mswc_unregistered_MoRC_Pck,
  mswc_registering_MoRC_Pck,
  mswc_registered_MoRC_Pck,
  mswc_connecting_MoRC_Pck,
  mswc_connected_MoRC_Pck,
  mswc_establishingSession_MoRC_Pck,
  mswc_sessionEstablished_MoRC_Pck
} mobileSWConnectionStatus_Type_MoRC_Pck;
/* API_RadioCommunication_Pkg::cmdRadioUnit_T */
typedef enum {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
/* MoRC_Pck::mobileHWAction_Type */
typedef enum {
  mhwa_nop_MoRC_Pck,
  mhwa_register_MoRC_Pck,
  mhwa_connect_MoRC_Pck,
  mhwa_disconnect_MoRC_Pck,
  mhwa_unregister_MoRC_Pck
} mobileHWAction_Type_MoRC_Pck;
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
/* TIU_Types_Pkg::M_brake_signal_command_T */
typedef enum {
  brake_signal_command_not_defined_TIU_Types_Pkg,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Types_Pkg;
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
  M_TransitionType_Immediate_Level_And_Mode_Types_Pkg,
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
/* Radio_Types_Pkg::sessionStatus_Type */
typedef enum {
  morc_st_inactive_Radio_Types_Pkg,
  morc_st_establishing_Radio_Types_Pkg,
  morc_st_maintaining_Radio_Types_Pkg,
  morc_st_terminating_Radio_Types_Pkg
} sessionStatus_Type_Radio_Types_Pkg;
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
/* TIU_Types_Pkg::cab_ID_T */
typedef enum {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_Cab */
typedef enum {
  A_Level_And_Mode_Types_Pkg,
  B_Level_And_Mode_Types_Pkg,
  unknown_Level_And_Mode_Types_Pkg
} T_Cab_Level_And_Mode_Types_Pkg;
/* Q_SRSTOP */
typedef enum {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
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
/* Q_LENGTH */
typedef enum {
  Q_LENGTH_No_train_integrity_information_available = 0,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
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
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* TrackAtlasTypes::MA_Level_t */
typedef enum {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* Q_ENDTIMER */
typedef enum {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
/* Q_DANGERPOINT */
typedef enum {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_OVERLAP */
typedef enum {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_SECTIONTIMER */
typedef enum {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* Level_And_Mode_Types_Pkg::T_MA */
typedef enum {
  Profile_OS_Level_And_Mode_Types_Pkg,
  Profile_LS_Level_And_Mode_Types_Pkg,
  Profile_SH_Level_And_Mode_Types_Pkg,
  No_Profile_Level_And_Mode_Types_Pkg
} T_MA_Level_And_Mode_Types_Pkg;
/* M_LEVELTR */
typedef enum {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_DLRBG */
typedef enum {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
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
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
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
/* Q_NVSBTSMPERM */
typedef enum { Q_NVSBTSMPERM_No = 0, Q_NVSBTSMPERM_Yes = 1 } Q_NVSBTSMPERM;
/* Q_NVEMRRLS */
typedef enum {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} Q_NVEMRRLS;
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
/* Q_NVINHSMICPERM */
typedef enum {
  Q_NVINHSMICPERM_No = 0,
  Q_NVINHSMICPERM_Yes = 1
} Q_NVINHSMICPERM;
/* Q_NVGUIPERM */
typedef enum { Q_NVGUIPERM_No = 0, Q_NVGUIPERM_Yes = 1 } Q_NVGUIPERM;
/* Q_NVSBFBPERM */
typedef enum { Q_NVSBFBPERM_No = 0, Q_NVSBFBPERM_Yes = 1 } Q_NVSBFBPERM;
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
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum {
  _8_SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_SM1,
  SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_SM1
} _9_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum {
  SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1,
  SSM_st_FS_Mode_SM1
} _7_SSM_ST_SM1;
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
  _5_SSM_TR_no_trans_SM1,
  SSM_TR_NP_1_SM1,
  SSM_TR_Awakness_of_Train_1_SM1,
  SSM_TR_Awakness_of_Train_2_SM1,
  SSM_TR_Awakness_of_Train_3_SM1
} _6_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
  SSM_st_SoM_NTC_SN_SM1
} _4_SSM_ST_SM1;
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
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */
typedef enum {
  SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM,
  SSM_TR_Idle_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_Idle_2_EstablishmentOfACommunicationSession_SM,
  SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_2_EstablishmentOfACommunicationSession_SM,
  SSM_TR_WaitForSystemVersionFromTrackSide_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_WaitForSystemVersionFromTrackSide_2_EstablishmentOfACommunicationSession_SM,
  SSM_TR_NoCompatibleSystemVersionSupported_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByTrackside_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_1_EstablishmentOfACommunicationSession_SM
} SSM_TR_EstablishmentOfACommunicationSession_SM;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */
typedef enum {
  SSM_st_Idle_EstablishmentOfACommunicationSession_SM,
  SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM,
  SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM,
  SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM,
  SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM,
  SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM,
  SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM
} SSM_ST_EstablishmentOfACommunicationSession_SM;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum {
  SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU
} SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM
} SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSt,
  SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta,
  SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta
} SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn,
  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn
} SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartO,
  SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf,
  SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf
} SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC,
  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC
} SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM;
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
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
typedef enum {
  SSM_TR_no_trans_Maintaining_SM,
  SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM,
  SSM_TR_CommunicationSessionEstablished_1_Maintaining_SM
} SSM_TR_Maintaining_SM;
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
typedef enum {
  SSM_st_CommunicationSessionNotEstablished_Maintaining_SM,
  SSM_st_CommunicationSessionEstablished_Maintaining_SM
} SSM_ST_Maintaining_SM;
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum {
  SSM_TR_no_trans_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_SafeRadio_connected_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_SafeRadio_connected_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnectionLost_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnectionLost_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnecctionLostInAnnouncedRadioHole_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished
} SSM_TR_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum {
  SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM
} SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum {
  SSM_TR_no_trans_TerminateTheCommunicationSession_SM,
  SSM_TR_Idle_1_TerminateTheCommunicationSession_SM,
  SSM_TR_Idle_2_TerminateTheCommunicationSession_SM,
  SSM_TR_WaitForAcknowledgementMessage_1_TerminateTheCommunicationSession_SM,
  SSM_TR_EstablishingACommunicationSessionAborted_1_TerminateTheCommunicationSession_SM
} SSM_TR_TerminateTheCommunicationSession_SM;
/* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum {
  SSM_st_Idle_TerminateTheCommunicationSession_SM,
  SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM,
  SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM,
  SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM
} SSM_ST_TerminateTheCommunicationSession_SM;
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */
typedef enum {
  SSM_TR_no_trans_MobileHW_available_SM,
  SSM_TR_MobileHWNotAvailable_1_MobileHW_available_SM,
  SSM_TR_MobileHWAvailable_1_MobileHW_available_SM,
  SSM_TR_InitialState_1_MobileHW_available_SM
} SSM_TR_MobileHW_available_SM;
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */
typedef enum {
  SSM_st_MobileHWNotAvailable_MobileHW_available_SM,
  SSM_st_MobileHWAvailable_MobileHW_available_SM,
  SSM_st_InitialState_MobileHW_available_SM
} SSM_ST_MobileHW_available_SM;
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum {
  SSM_TR_no_trans_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_UnregisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteringToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteringToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteringToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteredToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteredToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectingToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectingToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_4_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_EstablishingASession_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_SessionEstablished_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_SessionEstablished_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable
} SSM_TR_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum {
  SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM
} SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus_SM */
typedef enum {
  SSM_TR_no_trans_connectionStatus_SM,
  SSM_TR_NoConnection_1_connectionStatus_SM,
  SSM_TR_NoConnection_2_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  SSM_TR_ConnectionUp_1_connectionStatus_SM,
  SSM_TR_ConnectionUp_2_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus_SM */
typedef enum {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} SSM_TR_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_st_Idle_TrainExitedFromRBCArea_SM,
  SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_ST_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
typedef enum {
  _2_SSM_TR_no_trans_SM1,
  SSM_TR_NoTerminationInProgress_1_SM1,
  SSM_TR_TerminationInProgress_1_SM1,
  SSM_TR_EstablishNewSession_1_SM1
} _3_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
typedef enum {
  SSM_st_NoTerminationInProgress_SM1,
  SSM_st_TerminationInProgress_SM1,
  SSM_st_EstablishNewSession_SM1
} _1_SSM_ST_SM1;
/* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */
typedef enum {
  SSM_TR_no_trans_CommunicationSession_SM,
  SSM_TR_NoSession_1_CommunicationSession_SM,
  SSM_TR_Establishing_1_CommunicationSession_SM,
  SSM_TR_Establishing_2_CommunicationSession_SM,
  SSM_TR_Maintaining_1_CommunicationSession_SM,
  SSM_TR_Terminating_1_CommunicationSession_SM
} SSM_TR_CommunicationSession_SM;
/* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */
typedef enum {
  SSM_st_NoSession_CommunicationSession_SM,
  SSM_st_Establishing_CommunicationSession_SM,
  SSM_st_Maintaining_CommunicationSession_SM,
  SSM_st_Terminating_CommunicationSession_SM
} SSM_ST_CommunicationSession_SM;
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
/* LevelStateMachine::MainLevelOutput */
typedef enum {
  SSM_TR_no_trans_MainLevelOutput,
  SSM_TR_Level_L1_1_MainLevelOutput,
  SSM_TR_Level_L1_2_MainLevelOutput,
  SSM_TR_Level_L1_3_MainLevelOutput,
  SSM_TR_Level_L1_4_MainLevelOutput,
  SSM_TR_Level_L2_1_MainLevelOutput,
  SSM_TR_Level_L2_2_MainLevelOutput,
  SSM_TR_Level_L2_3_MainLevelOutput,
  SSM_TR_Level_L2_4_MainLevelOutput,
  SSM_TR_Level_L3_1_MainLevelOutput,
  SSM_TR_Level_L3_2_MainLevelOutput,
  SSM_TR_Level_L3_3_MainLevelOutput,
  SSM_TR_Level_L3_4_MainLevelOutput,
  SSM_TR_Level_L0_1_MainLevelOutput,
  SSM_TR_Level_L0_2_MainLevelOutput,
  SSM_TR_Level_L0_3_MainLevelOutput,
  SSM_TR_Level_L0_4_MainLevelOutput,
  SSM_TR_Level_NTC_1_MainLevelOutput,
  SSM_TR_Level_NTC_2_MainLevelOutput,
  SSM_TR_Level_NTC_3_MainLevelOutput,
  SSM_TR_Level_NTC_4_MainLevelOutput
} SSM_TR_MainLevelOutput;
/* LevelStateMachine::MainLevelOutput */
typedef enum {
  SSM_st_Level_L1_MainLevelOutput,
  SSM_st_Level_L2_MainLevelOutput,
  SSM_st_Level_L3_MainLevelOutput,
  SSM_st_Level_L0_MainLevelOutput,
  SSM_st_Level_NTC_MainLevelOutput
} SSM_ST_MainLevelOutput;
/* DriverAck::DriverAck */
typedef enum {
  SSM_TR_no_trans_DriverAck,
  SSM_TR_Idle_1_DriverAck,
  SSM_TR_Waiting_1_DriverAck,
  SSM_TR_Waiting_2_DriverAck
} SSM_TR_DriverAck;
/* DriverAck::DriverAck */
typedef enum {
  SSM_st_Idle_DriverAck,
  SSM_st_Waiting_DriverAck
} SSM_ST_DriverAck;
/* MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} SSM_TR_SM1;
/* MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} SSM_ST_SM1;
/* ProvidePositionReport_Pkg::BG_Orientation_T */
typedef Q_DIRLRBG BG_Orientation_T_ProvidePositionReport_Pkg;

/* T_TRAIN */
typedef kcg_real T_TRAIN;

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

/* SDM_Types_Pkg::V_internal_real_Type */
typedef kcg_real V_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::L_internal_real_Type */
typedef kcg_real L_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::T_internal_real_Type */
typedef kcg_real T_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::A_internal_real_Type */
typedef kcg_real A_internal_real_Type_SDM_Types_Pkg;

/* TrackAtlasTypes::FromTIU_t */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* SDM_Commands_Pkg::EB_command_T */
typedef kcg_bool EB_command_T_SDM_Commands_Pkg;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* NID_C */
typedef kcg_int NID_C;

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

/* NID_MN */
typedef kcg_int NID_MN;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* N_AXLE */
typedef kcg_int N_AXLE;

/* N_ITER */
typedef kcg_int N_ITER;

/* L_TRAIN */
typedef kcg_int L_TRAIN;

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

/* M_POSITION */
typedef kcg_int M_POSITION;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* D_LOC */
typedef kcg_int D_LOC;

/* L_DOUBTOVER */
typedef kcg_int L_DOUBTOVER;

/* L_TRAININT */
typedef kcg_int L_TRAININT;

/* L_DOUBTUNDER */
typedef kcg_int L_DOUBTUNDER;

/* D_STARTREVERSE */
typedef kcg_int D_STARTREVERSE;

/* L_REVERSEAREA */
typedef kcg_int L_REVERSEAREA;

/* D_REVERSE */
typedef kcg_int D_REVERSE;

/* V_REVERSE */
typedef kcg_int V_REVERSE;

/* V_LOA */
typedef kcg_int V_LOA;

/* T_LOA */
typedef kcg_int T_LOA;

/* L_SECTION */
typedef kcg_int L_SECTION;

/* T_SECTIONTIMER */
typedef kcg_int T_SECTIONTIMER;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int D_SECTIONTIMERSTOPLOC;

/* L_ENDSECTION */
typedef kcg_int L_ENDSECTION;

/* T_ENDTIMER */
typedef kcg_int T_ENDTIMER;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int D_ENDTIMERSTARTLOC;

/* D_DP */
typedef kcg_int D_DP;

/* V_RELEASEDP */
typedef kcg_int V_RELEASEDP;

/* D_STARTOL */
typedef kcg_int D_STARTOL;

/* T_OL */
typedef kcg_int T_OL;

/* D_OL */
typedef kcg_int D_OL;

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

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

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

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

/* MoRC_Pck::NID_MESSAGE_Type */
typedef kcg_int NID_MESSAGE_Type_MoRC_Pck;

/* BG_Types_Pkg::NID_ERRORBG */
typedef kcg_int NID_ERRORBG_BG_Types_Pkg;

/* TA_MRSP::SSP_target_t */
typedef kcg_int SSP_target_t_TA_MRSP;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct__76855;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__76855 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__76855 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__76855 array__76861[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__76861 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__76861 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__76864;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__76864 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__76864 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__76864 array__76871[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__76871 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__76871 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__76871 n_iter_k_m_list;
} struct__76874;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__76874 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__76874 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__76874 array__76886[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__76886 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__76886 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__76889;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__76889 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__76889 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__76889 array__76896[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__76896 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__76896 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

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
} struct__76899;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__76899 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__76930;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__76930 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} struct__76935;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct__76935 nvkrint_T_Packet_Types_Pkg;

typedef nvkrint_T_Packet_Types_Pkg array__76941[7];

/* Packet_Types_Pkg::nvkrintArray_T */
typedef array__76941 nvkrintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} struct__76944;

/* Packet_Types_Pkg::nvkvint_T */
typedef struct__76944 nvkvint_T_Packet_Types_Pkg;

typedef nvkvint_T_Packet_Types_Pkg array__76951[7];

/* Packet_Types_Pkg::nvkvintArray_T */
typedef array__76951 nvkvintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} struct__76954;

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct__76954 nvkvintset_T_Packet_Types_Pkg;

typedef nvkvintset_T_Packet_Types_Pkg array__76962[7];

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef array__76962 nvkvintsetArray_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__76965;

/* Packet_Types_Pkg::nidC_T */
typedef struct__76965 nidC_T_Packet_Types_Pkg;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__76965 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__76965 P003V1_section_enum_T_TM_baseline2;

typedef nidC_T_Packet_Types_Pkg array__76970[7];

/* Packet_Types_Pkg::nidCArray_T */
typedef array__76970 nidCArray_T_Packet_Types_Pkg;

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
} struct__76973;

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct__76973 P3_NationalValues_T_Packet_Types_Pkg;

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
} struct__77012;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__77012 LinkedBG_T_BG_Types_Pkg;

typedef struct__77012 array__77026[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__77026 LinkedBGs_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  kcg_int nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__77032;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__77032 MetadataElement_T_Common_Types_Pkg;

typedef struct__77032 array__77040[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__77040 Metadata_T_Common_Types_Pkg;

typedef struct {
  array__77040 PacketHeaders;
  array_int_500 PacketData;
} struct__77043;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__77043 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__77048;

/* TM::P005_section_enum_T */
typedef struct__77048 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__77059[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__77059 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__77062;

/* TM::P005_OBU_T */
typedef struct__77062 P005_OBU_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef kcg_int array_int_3[3];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_3 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TM::Array03 */
typedef array_int_3 Array03_TM;

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
} struct__77077;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__77077 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__77095;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__77095 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__77107;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__77107 RBC_Id_T_Common_Types_Pkg;

typedef struct {
  kcg_int v_safeNominal;
  kcg_int v_rawNominal;
  kcg_int v_lower;
  kcg_int v_upper;
} struct__77114;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__77114 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int o_nominal;
  kcg_int o_min;
  kcg_int o_max;
} struct__77121;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__77121 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  struct__77121 odo;
  struct__77114 speed;
  kcg_int acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__77127;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__77127 odometry_T_Obu_BasicTypes_Pkg;

typedef struct { kcg_int nominal; kcg_int d_min; kcg_int d_max; } struct__77137;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__77137 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
  struct__77127 bgPosition;
  struct__77137 BG_centerDetectionInaccuraccuracies;
  kcg_int q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__77143;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__77143 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__77161;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__77161 ReceivedMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  struct__77143 BG_Header;
  array__77026 linkedBGs;
} struct__77171;

/* BG_Types_Pkg::passedBG_T */
typedef struct__77171 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_bg_fromLinkingBG;
  kcg_int nid_c_fromLinkingBG;
  struct__77137 expectedLocation;
  struct__77137 d_link;
  struct__77012 linkingInfo;
} struct__77177;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__77177 infoFromLinking_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__77137 location;
  kcg_int seqNoOnTrack;
  struct__77177 infoFromLinking;
  struct__77171 infoFromPassing;
} struct__77186;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__77186 positionedBG_T_TrainPosition_Types_Pck;

typedef positionedBG_T_TrainPosition_Types_Pck array__77197[8];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef array__77197 positionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} struct__77200;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct__77200 BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} struct__77206;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct__77206 BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} struct__77215;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct__77215 linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg array__77221[8];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef array__77221 linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__77224;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__77224 trainProperties_T_TrainPosition_Types_Pck;

typedef struct {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} struct__77234;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct__77234 refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} struct__77242;

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct__77242 positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

typedef positionedBG_T_TrainPosition_Types_Pck array__77247[4];

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef array__77247 linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  positionedBG_T_TrainPosition_Types_Pck bg;
} struct__77250;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct__77250 positionErrors_T_TrainPosition_Types_Pck;

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
} struct__77262;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct__77262 trainPositionInfo_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  struct__77137 trainPosition;
  kcg_int estimatedFrontEndPosition;
  kcg_int minSafeFrontEndPosition;
  kcg_int maxSafeFrontEndPostion;
  struct__77186 LRBG;
  struct__77186 prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
} struct__77275;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__77275 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__77292;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__77292 Gradient_section_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__77300;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct__77300 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__77300 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__77307[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__77307 GradientProfile_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__77310[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__77310 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__77313;

/* TM::P046_section_enum_T */
typedef struct__77313 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__77319[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__77319 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__77322;

/* TM::P041_section_enum_T */
typedef struct__77322 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__77329[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__77329 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool MA_available;
  kcg_bool MA_L1_available;
  kcg_bool MA_L23_available;
  kcg_bool GradientProfile_available;
  kcg_bool SSP_available;
  kcg_bool Shunting_Granted;
  kcg_bool TripOrder_GivenByBalise;
  kcg_bool StopIfInShunting;
  kcg_bool StopIfInSR;
  kcg_bool ER_BG_SystemVersion;
  kcg_bool LinkingReactToTrip;
  kcg_bool RBCAck_TR_EB_Revoiked;
  kcg_bool RBC_Authorized_SR;
  kcg_bool T_NV_ContactOverpass;
  kcg_bool Emergency_Stop_Message_Received;
} struct__77332;

/* TrackAtlasTypes::FlagsForModeAndLevel_t */
typedef struct__77332 FlagsForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} struct__77350;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct__77350 T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} struct__77358;

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct__77358 T_Reversing_Data_Level_And_Mode_Types_Pkg;

typedef struct {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} struct__77366;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct__77366 T_Mode_Profile_Level_And_Mode_Types_Pkg;

typedef struct {
  FlagsForModeAndLevel_t_TrackAtlasTypes Flags;
  L_internal_Type_Obu_BasicTypes_Pkg AckDistance;
  V_internal_Type_Obu_BasicTypes_Pkg ReceivedTargetSpeed;
  L_internal_Type_Obu_BasicTypes_Pkg Distance;
  L_internal_Type_Obu_BasicTypes_Pkg Length;
  T_Mode_Profile_Level_And_Mode_Types_Pkg Mode_Profile_Onboard;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg ERTMS_capabilities;
  T_Reversing_Data_Level_And_Mode_Types_Pkg Reversing_Data;
  P041_OBU_sectionlist_enum_T_TM ConditionalTransitionPriorities;
  P046_OBU_sectionlist_enum_T_TM TransitionPriorities;
} struct__77374;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__77374 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct__76965 array__77387[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__77387 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__77387 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__77390;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__77390 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

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
} struct__77423;

/* TM::P003_OBU_T */
typedef struct__77423 P003_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__77478;

/* TM::P015_section_enum_T */
typedef struct__77478 P015_section_enum_T_TM;

typedef P015_section_enum_T_TM array__77486[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__77486 P015_OBU_sectionlist_enum_T_TM;

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
} struct__77489;

/* TM::P015_OBU_T */
typedef struct__77489 P015_OBU_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef kcg_int array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef kcg_int array_int_6[6];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__77523;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__77523 MovementAuthoritySection_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__77532;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__77532 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__77537;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__77537 DP_or_OL_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__77543[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__77543 MovementAuthoritySectionlist_t_TrackAtlasTypes;

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
} struct__77546;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__77546 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__77564;

/* TA_MRSP::SSP_section_t */
typedef struct__77564 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__77569[33];

/* TA_MRSP::SSP_cat_t */
typedef array__77569 SSP_cat_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__77572;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__77572 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__77578[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__77578 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__77581;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__77581 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__77590[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__77590 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__77593;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__77593 P027V1_OBU_T_TM_baseline2;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__77600;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__77600 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef array__77569 array__77612[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__77612 SSP_matrix_t_TA_MRSP;

typedef struct {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t_TA_MRSP Loc;
} struct__77615;

/* TA_MRSP::SSP_t_indexed_matrix_element */
typedef struct__77615 SSP_t_indexed_matrix_element_TA_MRSP;

typedef SSP_t_indexed_matrix_element_TA_MRSP array__77621[363];

/* TA_MRSP::SSP_t_list_t */
typedef array__77621 SSP_t_list_t_TA_MRSP;

typedef SSP_t_section_t_TA_MRSP array_int_33[33];

/* TA_MRSP::SSP_t_cat_t */
typedef array_int_33 SSP_t_cat_t_TA_MRSP;

typedef array_int_33 array_int_33_11[11];

/* TA_MRSP::SSP_t_matrix_t */
typedef array_int_33_11 SSP_t_matrix_t_TA_MRSP;

typedef struct { kcg_bool Found; kcg_int Index; } struct__77630;

/* TA_MRSP::SSP_Mark_ValidSSPsection */
typedef struct__77630 SSP_Mark_ValidSSPsection_TA_MRSP;

typedef struct {
  kcg_bool found;
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} struct__77635;

/* TA_MRSP::SSP_valid_section_t */
typedef struct__77635 SSP_valid_section_t_TA_MRSP;

typedef struct { kcg_int index; SSP_t_section_t_TA_MRSP target; } struct__77641;

/* TA_MRSP::SSP_relevant_target_t */
typedef struct__77641 SSP_relevant_target_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__77646;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct__77646 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__77646 MRSP_section_t_TrackAtlasTypes;

typedef struct { kcg_int Index; SSP_target_t_TA_MRSP Loc; } struct__77653;

/* TA_MRSP::SSP_t_indexed_trgt_t */
typedef struct__77653 SSP_t_indexed_trgt_t_TA_MRSP;

typedef SSP_t_indexed_trgt_t_TA_MRSP array__77658[11];

/* TA_MRSP::SSP_t_indexed_targets_list_t */
typedef array__77658 SSP_t_indexed_targets_list_t_TA_MRSP;

typedef MRSP_section_t_TrackAtlasTypes array__77661[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__77661 MRSP_Profile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__77664;

/* TM::P021_section_enum_T */
typedef struct__77664 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__77671[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__77671 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__77674;

/* TM::P021_OBU_T */
typedef struct__77674 P021_OBU_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

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
} struct__77685;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__77685 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__77697;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__77697 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__77702[3];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__77702 aTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NC_CDTRAIN NC_CDTRAIN;
  NC_TRAIN NC_TRAIN;
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
} struct__77705;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__77705 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} struct__77721;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__77721 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__77726;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__77726 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR M_ERROR; } struct__77731;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__77731 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__77736;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__77736 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__77741[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__77741 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__77744;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__77744 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

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
} struct__77750;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__77750 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__77770;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__77770 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__77775;

/* TrainToTrack::Position_Report */
typedef struct__77775 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__77794;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__77794 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__77799;

/* Common_Types_Pkg::outPackets_T */
typedef struct__77799 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__77809;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__77809 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__77815;

/* MA_Request::Driver2MAR_T */
typedef struct__77815 Driver2MAR_T_MA_Request;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__77820;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__77820 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__77828;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__77828 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__77837;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__77837 DataForDMI_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; M_LEVEL level; M_MODE Mode; } struct__77844;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__77844 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct { M_LEVEL level; NID_STM_DMI_Types_Pkg nid_stm; } struct__77850;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct__77850 DMI_level_T_DMI_Types_Pkg;

typedef DMI_level_T_DMI_Types_Pkg array__77855[32];

/* DMI_Types_Pkg::DMI_level_array_T */
typedef array__77855 DMI_level_array_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} struct__77858;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct__77858 DMI_LevelList_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} struct__77863;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct__77863 ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

typedef struct {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
} struct__77870;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct__77870 trainData_Events_T_trainData_Types_pkg;

typedef struct {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} struct__77878;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct__77878 trainData_Trigger_T_trainData_Types_pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool validatedbyRBC;
  kcg_bool watingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} struct__77886;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct__77886 trainDataStatus_T_trainData_Types_pkg;

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
} struct__77895;

/* TIU_Types_Pkg::trainData_T */
typedef struct__77895 trainData_T_TIU_Types_Pkg;

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
} struct__77913;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct__77913 DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} struct__77925;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct__77925 DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__77931;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct__77931 P80_ModeProfile_T_Packet_Types_Pkg;

typedef P80_ModeProfile_T_Packet_Types_Pkg array__77943[3];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef array__77943 P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__77946;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct__77946 P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg array__77953[7];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef array__77953 P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__77956;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct__77956 P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg array__77966[7];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef array__77966 P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__77969;

/* Packet_Types_Pkg::Diff_T */
typedef struct__77969 Diff_T_Packet_Types_Pkg;

typedef Diff_T_Packet_Types_Pkg array__77977[7];

/* Packet_Types_Pkg::DiffArray_T */
typedef array__77977 DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} struct__77980;

/* Packet_Types_Pkg::SSP_T */
typedef struct__77980 SSP_T_Packet_Types_Pkg;

typedef SSP_T_Packet_Types_Pkg array__77988[7];

/* Packet_Types_Pkg::SSPArray_T */
typedef array__77988 SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} struct__77991;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct__77991 P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__78002;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__78002 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__78011[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__78011 P21_GradientProfiles_T_Packet_Types_Pkg;

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
} struct__78014;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct__78014 P15_Level23MovementAuthority_T_Packet_Types_Pkg;

typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg array__78041[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef array__78041 P15_Level23MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_REVERSE d_reverse;
  V_REVERSE v_reverse;
} struct__78044;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct__78044 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STARTREVERSE d_startreverse;
  L_REVERSEAREA l_reversearea;
} struct__78052;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct__78052 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__78060;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__78060 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool P_12;
  kcg_bool P_135;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg P_137;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg P_138;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg P_139;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg P_15;
  P21_GradientProfiles_T_Packet_Types_Pkg P_21;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg P_27;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg P_41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg P_46;
  kcg_bool P_63;
  P80_ModeProfiles_T_Packet_Types_Pkg P_80;
} struct__78066;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct__78066 T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} struct__78081;

/* TM::P046_OBU_T */
typedef struct__78081 P046_OBU_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef kcg_int array_int_4[4];

/* TM::Array04 */
typedef array_int_4 Array04_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__78094;

/* TM::P041_OBU_T */
typedef struct__78094 P041_OBU_T_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; } struct__78103;

/* TM::P135_OBU_T */
typedef struct__78103 P135_OBU_T_TM;

typedef struct {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
  kcg_bool T_NVCONTACT_Overpass;
} struct__78108;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct__78108 T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

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
} struct__78118;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct__78118 MSG_Errors_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} struct__78130;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct__78130 DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

typedef struct { kcg_int now; kcg_int distance; } struct__78136;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct__78136 D_test_distance_T_TIU_Types_Pkg;

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
} struct__78141;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct__78141 nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} struct__78147;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct__78147 Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int pressure; } struct__78153;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct__78153 Brake_pressure_value_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} struct__78158;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct__78158 Brake_status_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} struct__78167;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct__78167 Mode_control_and_train_status_T_TIU_Types_Pkg;

typedef struct {
  Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} struct__78178;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct__78178 Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} struct__78187;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct__78187 TIU_trainStatus_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg info;
} struct__78194;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct__78194 TIU_Input_msg_API_TIU_Pkg;

typedef struct { kcg_bool present; M_ERROR errorType; } struct__78199;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct__78199 ErrorMessage_T_ProvidePositionReport_Pkg;

typedef struct {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} struct__78204;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct__78204 ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

typedef struct { NID_NTC nid_ntc; Q_LENGTH q_length; } struct__78210;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct__78210 TrainToTrackStatus_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} struct__78215;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct__78215 ReportedBG_T_ProvidePositionReport_Pkg;

typedef ReportedBG_T_ProvidePositionReport_Pkg array__78221[8];

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef array__78221 ReportedBGList_T_ProvidePositionReport_Pkg;

typedef struct { kcg_bool newSessionEstablished; } struct__78224;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct__78224 RBC_Communication_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} struct__78228;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct__78228 LocationBasedEvents_T_ProvidePositionReport_Pkg;

typedef struct { D_LOC d_loc; Q_LGTLOC q_lgtloc; } struct__78233;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct__78233 IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__78238[2];

/* Packet_Types_Pkg::IterPacket58List_T */
typedef array__78238 IterPacket58List_T_Packet_Types_Pkg;

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
} struct__78241;

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct__78241 P58_PositionReportParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} struct__78254;

/* TM::P058_section_enum_T */
typedef struct__78254 P058_section_enum_T_TM;

typedef P058_section_enum_T_TM array__78260[32];

/* TM::P058_OBU_sectionlist_enum_T */
typedef array__78260 P058_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} struct__78263;

/* TM::P058_OBU_T */
typedef struct__78263 P058_OBU_T_TM;

typedef kcg_int array_int_8[8];

/* TM::Array08 */
typedef array_int_8 Array08_TM;

typedef struct {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} struct__78277;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct__78277 API_RadioMsgHeader_T_API_Msg_Pkg;

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
} struct__78285;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__78285 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} struct__78298;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct__78298 centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} struct__78303;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct__78303 API_TelegramHeader_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__78312;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct__78312 API_TrackSideInput_T_API_Msg_Pkg;

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array__78321[17];

typedef array__78321 array__78324[256];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array__78324 ModeDecisionTableType_DataDictionary_Pkg;

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array__78327[5];

typedef array__78327 array__78330[256];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array__78330 LevelDecisionTableType_DataDictionary_Pkg;

typedef struct {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} struct__78333;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct__78333 filterRelatedEvents_T_Common_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; NID_MN nid_mn; } struct__78344;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct__78344 P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__78350;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct__78350 P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__78360;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct__78360 radioManagementMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  NID_BG nidBG;
  Location_T_Obu_BasicTypes_Pkg bgLocation;
  P58_PositionReportParameters_T_Packet_Types_Pkg packet58;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__78369;

/* Common_Types_Pkg::PositionReportParameter_T */
typedef struct__78369 PositionReportParameter_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__78377;

/* BG_Types_Pkg::Telegram_T */
typedef struct__78377 Telegram_T_BG_Types_Pkg;

typedef Telegram_T_BG_Types_Pkg array__78384[8];

/* BG_Types_Pkg::TelegramArray_T */
typedef array__78384 TelegramArray_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__78387;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct__78387 RadioMessage_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__78396;

/* BG_Types_Pkg::BG_Message_T */
typedef struct__78396 BG_Message_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} struct__78403;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct__78403 TrackSide_ForCheck_T_Common_Types_Pkg;

typedef struct {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} struct__78411;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct__78411 BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} struct__78422;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct__78422 TelegramStore_T_Receive_TrackSide_Msg_Pkg;

typedef kcg_bool array_bool_256[256];

typedef array_bool_256 array_bool_256_46[46];

/* MetadataTruthtable_T */
typedef array_bool_256_46 MetadataTruthtable_T;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} struct__78434;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct__78434 DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  M_LEVEL level;
  kcg_int position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
} struct__78440;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct__78440 T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} struct__78446;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct__78446 DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct { kcg_bool is_set; struct__78440 transition; } struct__78452;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct__78452 T_LevelTransition_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} struct__78457;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct__78457 DMI_DriverRequest_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} struct__78467;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct__78467 DMI_TXT_MSG_status_T_DMI_Types_Pkg;

typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg array__78478[31];

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef array__78478 DMI_TXT_MSGList_status_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} struct__78481;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct__78481 DMI_DriverAck_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} struct__78487;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct__78487 DMI_To_Modes_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} struct__78494;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct__78494 DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} struct__78501;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct__78501 DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} struct__78507;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct__78507 DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

typedef kcg_char array_char_9[9];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef array_char_9 driverIdentifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} struct__78516;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct__78516 DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} struct__78522;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct__78522 DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} struct__78527;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct__78527 DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

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
  M_VERSION M_VERSION;
} struct__78537;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct__78537 DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__78547;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct__78547 DMI_to_EVC_Message_T_API_DMI_Pkg;

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
} struct__78563;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct__78563 DMI_EVC_status_T_DMI_Types_Pkg;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} struct__78575;

/* TargetManagement_types::Target_T */
typedef struct__78575 Target_T_TargetManagement_types;

typedef struct {
  kcg_bool valid;
  V_internal_Type_Obu_BasicTypes_Pkg estimatedSpeed;
  kcg_bool valid_v_est;
  V_internal_Type_Obu_BasicTypes_Pkg permittedSpeed;
  kcg_bool valid_v_permitted;
  V_internal_Type_Obu_BasicTypes_Pkg releaseSpeed;
  kcg_bool valid_v_release;
  V_internal_Type_Obu_BasicTypes_Pkg mrdtSpeed;
  kcg_bool valid_v_mrdt;
  V_internal_Type_Obu_BasicTypes_Pkg sbiSpeed;
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
} struct__78582;

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct__78582 SDM_Commands_T_SDM_Types_Pkg;

typedef kcg_real array_real_3[3];

/* TargetLimits_Pkg::TractionDeltaTriple */
typedef array_real_3 TractionDeltaTriple_TargetLimits_Pkg;

/* SDMConversionModelPkg::coeff_BrakeBasic_t */
typedef array_real_3 coeff_BrakeBasic_t_SDMConversionModelPkg;

typedef T_internal_real_Type_SDM_Types_Pkg array_real_2[2];

/* SDMConversionModelPkg::t_BrakeVt_t */
typedef array_real_2 t_BrakeVt_t_SDMConversionModelPkg;

typedef struct {
  t_BrakeVt_t_SDMConversionModelPkg emergency;
  t_BrakeVt_t_SDMConversionModelPkg service;
} struct__78615;

/* SDMConversionModelPkg::t_Brake_t */
typedef struct__78615 t_Brake_t_SDMConversionModelPkg;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} struct__78620;

/* TargetLimits_Pkg::bec_t */
typedef struct__78620 bec_t_TargetLimits_Pkg;

typedef struct {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
} struct__78625;

/* TargetLimits_Pkg::T_trac_t */
typedef struct__78625 T_trac_t_TargetLimits_Pkg;

typedef struct {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  kcg_real T_traction_cut_off;
} struct__78634;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct__78634 trainData_internal_t_SDM_Types_Pkg;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg v_safeNominal;
  V_internal_real_Type_SDM_Types_Pkg v_rawNominal;
  V_internal_real_Type_SDM_Types_Pkg v_lower;
  V_internal_real_Type_SDM_Types_Pkg v_upper;
} struct__78641;

/* SDM_Types_Pkg::OdometrySpeeds_real_T */
typedef struct__78641 OdometrySpeeds_real_T_SDM_Types_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg o_nominal;
  L_internal_real_Type_SDM_Types_Pkg o_min;
  L_internal_real_Type_SDM_Types_Pkg o_max;
} struct__78648;

/* SDM_Types_Pkg::OdometryLocations_real_T */
typedef struct__78648 OdometryLocations_real_T_SDM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_real_Type_SDM_Types_Pkg timestamp;
  OdometryLocations_real_T_SDM_Types_Pkg odo;
  OdometrySpeeds_real_T_SDM_Types_Pkg speed;
  A_internal_real_Type_SDM_Types_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__78654;

/* SDM_Types_Pkg::Odometry_real_T */
typedef struct__78654 Odometry_real_T_SDM_Types_Pkg;

typedef struct {
  kcg_real distance;
  kcg_real speed;
  kcg_real acceleration;
} struct__78664;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct__78664 ParabolaArc_T_CalcBrakingCurves_types;

typedef kcg_bool array_bool_25[25];

/* CalcBrakingCurves_types::ParabolaCurveValid_T */
typedef array_bool_25 ParabolaCurveValid_T_CalcBrakingCurves_types;

typedef kcg_real array_real_25[25];

/* CalcBrakingCurves_types::ParabolaCurveDistances_T */
typedef array_real_25 ParabolaCurveDistances_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveSpeeds_T */
typedef array_real_25 ParabolaCurveSpeeds_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveAccelerations_T */
typedef array_real_25 ParabolaCurveAccelerations_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurveDistances_T_CalcBrakingCurves_types distances;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types speeds;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types accelerations;
  ParabolaCurveValid_T_CalcBrakingCurves_types valid;
} struct__78676;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct__78676 ParabolaCurve_T_CalcBrakingCurves_types;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg SBI2;
  kcg_int index;
  TargetType_T_TargetManagement_types ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_Pkg V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_Pkg V_ura;
} struct__78683;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct__78683 TargetIteratorAkku_TargetLimits_Pkg;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  kcg_real distance;
  kcg_real speed;
} struct__78693;

/* TargetManagement_types::Target_real_T */
typedef struct__78693 Target_real_T_TargetManagement_types;

typedef ParabolaCurve_T_CalcBrakingCurves_types array__78699[200];

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef array__78699 ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} struct__78702;

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct__78702 CurveCollection_T_CalcBrakingCurves_types;

typedef Target_real_T_TargetManagement_types array__78710[200];

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef array__78710 Target_list_MRSP_real_T_TargetManagement_types;

typedef struct {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_target;
} struct__78713;

/* TargetManagement_types::TargetCollection_T */
typedef struct__78713 TargetCollection_T_TargetManagement_types;

typedef struct {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_antenna2frontend;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} struct__78720;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct__78720 TrainLocations_real_T_SDM_Types_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} struct__78730;

/* TargetManagement_types::EOA_real_T */
typedef struct__78730 EOA_real_T_TargetManagement_types;

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
} struct__78735;

/* TargetManagement_types::MA_section_real_T */
typedef struct__78735 MA_section_real_T_TargetManagement_types;

typedef struct {
  kcg_real Loc_Abs;
  kcg_real MRS;
  kcg_bool valid;
} struct__78748;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct__78748 MRSP_internal_section_T_TargetManagement_types;

typedef MRSP_internal_section_T_TargetManagement_types array__78754[200];

/* TargetManagement_types::MRSP_internal_T */
typedef array__78754 MRSP_internal_T_TargetManagement_types;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg V_est;
  V_internal_real_Type_SDM_Types_Pkg V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg V_release;
  V_internal_real_Type_SDM_Types_Pkg V_target;
  V_internal_real_Type_SDM_Types_Pkg v_p_mrdt;
  V_internal_real_Type_SDM_Types_Pkg v_sbi_mrdt;
  V_internal_real_Type_SDM_Types_Pkg v_FLOI;
  V_internal_real_Type_SDM_Types_Pkg dV_warning_V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg dV_warning_V_target;
  V_internal_real_Type_SDM_Types_Pkg dV_sbi_V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg dV_sbi_V_target;
  V_internal_real_Type_SDM_Types_Pkg dV_ebi_V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg dV_ebi_V_target;
} struct__78757;

/* SDM_Types_Pkg::Speeds_T */
typedef struct__78757 Speeds_T_SDM_Types_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg SBD_preindication_location;
  L_internal_real_Type_SDM_Types_Pkg EBD_preindication_location;
  L_internal_real_Type_SDM_Types_Pkg EBD_RSM_start_location;
  L_internal_real_Type_SDM_Types_Pkg SBD_RSM_start_location;
  L_internal_real_Type_SDM_Types_Pkg d_I_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg d_I_of_V_MRSP;
  L_internal_real_Type_SDM_Types_Pkg d_P_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg d_W_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg d_FLOI_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg d_EBI_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg FLOI_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg SBI1_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg SBI2_of_V_est;
  L_internal_real_Type_SDM_Types_Pkg d_P_of_V_target;
  L_internal_real_Type_SDM_Types_Pkg d_eoa;
  L_internal_real_Type_SDM_Types_Pkg d_svl;
  kcg_bool Preindication_EBD_location_valid;
  kcg_bool Preindication_SBD_location_valid;
  kcg_bool RSM_start_location_EBD_valid;
  kcg_bool RSM_start_location_SBD_valid;
} struct__78773;

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct__78773 SDM_Locations_T_SDM_Types_Pkg;

typedef struct {
  array__78710 targetList;
  kcg_int lastInsertedTargetIndex;
} struct__78796;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct__78796 extractTargetsMRSPACC_TargetManagement_pkg;

typedef kcg_real array_real_15[15];

/* CalcBrakingCurves_types::ASafeDistanceDefinition_T */
typedef array_real_15 ASafeDistanceDefinition_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafeRow_T */
typedef array_real_15 ASafeRow_T_CalcBrakingCurves_types;

typedef ASafeRow_T_CalcBrakingCurves_types array_real_15_10[10];

/* CalcBrakingCurves_types::ASafe_Data_T */
typedef array_real_15_10 ASafe_Data_T_CalcBrakingCurves_types;

typedef V_internal_real_Type_SDM_Types_Pkg array_real_10[10];

/* CalcBrakingCurves_types::ASafeSpeedDefinition_T */
typedef array_real_10 ASafeSpeedDefinition_T_CalcBrakingCurves_types;

typedef struct {
  ASafeDistanceDefinition_T_CalcBrakingCurves_types distance_definition;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types speed_definition;
  ASafe_Data_T_CalcBrakingCurves_types data;
} struct__78810;

/* CalcBrakingCurves_types::ASafe_T */
typedef struct__78810 ASafe_T_CalcBrakingCurves_types;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} struct__78816;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct__78816 BCAccumulator_type_CalcBrakingCurves_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} struct__78824;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct__78824 Brake_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  V_internal_real_Type_SDM_Types_Pkg estimatedSpeed;
  kcg_bool valid_v_est;
  V_internal_real_Type_SDM_Types_Pkg permittedSpeed;
  kcg_bool valid_v_permitted;
  V_internal_real_Type_SDM_Types_Pkg releaseSpeed;
  kcg_bool valid_v_release;
  V_internal_real_Type_SDM_Types_Pkg mrdtSpeed;
  kcg_bool valid_v_mrdt;
  V_internal_real_Type_SDM_Types_Pkg sbiSpeed;
  kcg_bool valid_v_sbi;
  L_internal_real_Type_SDM_Types_Pkg targetDistance;
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
} struct__78830;

/* SDM_Types_Pkg::SDM_Commands_real_T */
typedef struct__78830 SDM_Commands_real_T_SDM_Types_Pkg;

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
} struct__78857;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct__78857 speedSupervisionForDMI_T_DMI_Types_Pkg;

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
} struct__78870;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct__78870 TSM_triggerCond_T_SDM_Commands_Pkg;

typedef kcg_bool array_bool_14[14];

/* SDM_Commands_Pkg::MyArray */
typedef array_bool_14 MyArray_SDM_Commands_Pkg;

typedef struct {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} struct__78890;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct__78890 TSM_revokeCond_T_SDM_Commands_Pkg;

typedef struct {
  kcg_bool valid;
  mobileHWAction_Type_MoRC_Pck action;
  NID_MN radioNetworkID;
  NID_RADIO nid_radio;
} struct__78897;

/* MoRC_Pck::mobileHWCmd_Type */
typedef struct__78897 mobileHWCmd_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} struct__78904;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct__78904 RadioManagement_T_API_RadioCommunication_Pkg;

typedef struct {
  Radio_TrainTrack_Message_T_Radio_Types_Pkg firstOutput;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg secondOutput;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg thirdOutput;
  RadioManagement_T_API_RadioCommunication_Pkg radioEVCtoUnit;
} struct__78910;

/* API_RadioCommunication_Pkg::API_EuroRadioOutput_T */
typedef struct__78910 API_EuroRadioOutput_T_API_RadioCommunication_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool mobileHW_available;
  mobileSWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_int registeredRadioNetworkID;
  kcg_bool settingUpConnectionHasFailed;
} struct__78917;

/* MoRC_Pck::mobileSWStatus_Type */
typedef struct__78917 mobileSWStatus_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} struct__78925;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct__78925 DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__78931;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct__78931 DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} struct__78943;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct__78943 DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} struct__78949;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct__78949 DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} struct__78955;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct__78955 DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} struct__78961;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct__78961 DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} struct__78967;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct__78967 DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} struct__78977;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct__78977 DMI_trackConditionElement_T_DMI_Types_Pkg;

typedef DMI_trackConditionElement_T_DMI_Types_Pkg array__78982[32];

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef array__78982 DMI_trackConditionArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} struct__78985;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct__78985 DMI_trackCondition_T_DMI_Types_Pkg;

typedef DMI_gradientProfileElement_T_DMI_Types_Pkg array__78990[32];

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef array__78990 DMI_gradientProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} struct__78993;

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct__78993 DMI_gradientProfile_T_DMI_Types_Pkg;

typedef DMI_speedProfileElement_T_DMI_Types_Pkg array__78998[32];

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef array__78998 DMI_SpeedProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} struct__79001;

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct__79001 DMI_speedProfile_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} struct__79006;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct__79006 DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} struct__79014;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct__79014 DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
} struct__79025;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct__79025 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct__79025 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct__79025 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct__79025 DMI_loadingGauge_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} struct__79032;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct__79032 DMI_train_length_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} struct__79040;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct__79040 DMI_train_id_T_DMI_Types_Pkg;

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
} struct__79049;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct__79049 DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__79061;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct__79061 DMI_Available_Menu_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} struct__79094;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct__79094 DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__79100;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct__79100 DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__79126;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct__79126 EVC_to_DMI_Message_T_API_DMI_Pkg;

typedef struct {
  MsgSource_T_Common_Types_Pkg source;
  kcg_bool establishOrderDoesNotRequestToContactAnAcceptingRBC;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
} struct__79146;

/* MoRC_Pck::Coder_Pkg::p42_order_T */
typedef struct__79146 p42_order_T_MoRC_Pck_Coder_Pkg;

typedef struct {
  kcg_bool establish;
  kcg_bool terminate;
  kcg_bool contactLastKnownRBC;
  kcg_bool useTheShortNumberStoredOnboard;
  kcg_bool establishOrderDoesNotRequestToContactAnAcceptingRBC;
  MsgSource_T_Common_Types_Pkg source;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
} struct__79152;

/* MoRC_Pck::Coder_Pkg::p42e_SessionManagement_T */
typedef struct__79152 p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg;

typedef struct {
  kcg_bool valid;
  M_VERSION version;
  kcg_bool systemVersionFromTracksideSupported;
} struct__79166;

/* MoRC_Pck::Coder_Pkg::m32e_RBC_or_RIU_System_Version_T */
typedef struct__79166 m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg;

typedef struct {
  kcg_bool valid;
  safeRadioConnectionStatus_Type_MoRC_Pck status;
} struct__79172;

/* MoRC_Pck::safeRadioConnectionStatusValid_Type */
typedef struct__79172 safeRadioConnectionStatusValid_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} struct__79177;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct__79177 mobileHWStatus_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  mobileSWAction_Type_MoRC_Pck action;
  NID_MN radioNetworkID;
} struct__79184;

/* MoRC_Pck::mobileSWCmd_Type */
typedef struct__79184 mobileSWCmd_Type_MoRC_Pck;

typedef struct {
  kcg_bool atPowerDown;
  kcg_bool atPowerUp;
  kcg_bool atStartOfMission;
  kcg_bool startOfMissionProcedureIsGoingOn;
  kcg_bool startOfMissionProcedureCompleted;
  kcg_bool trainIsRejectedByRBC_duringStartOfMission;
  kcg_bool endOfMissionIsExecuted;
  kcg_bool driverClosesTheDeskduringStartOfMission;
  kcg_bool driverHasManuallyChangedLevel;
  kcg_bool afterDriverEntryOfANewRadioNetworkID;
  kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable;
  kcg_bool isPartOfAnOngoingStartOfMissionProcedure;
  kcg_bool trainPassesALevelTransitionBorder;
  kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  kcg_bool trainExitedFromAnRBCArea;
  kcg_bool modeChangeHasToBeReportedToRBC;
  kcg_bool trainFrontInsideInAnAnnouncedRadioHole;
  kcg_bool trainFrontReachesEndOfAnnouncedRadioHole;
  kcg_bool OBU_hasToEstablishANewSession;
  kcg_bool isInCommunicationSessionWithAnRIU;
  kcg_bool errorConditionRequiringTerminationDetected;
} struct__79190;

/* MoRC_Pck::obuEventsAndPhases_T */
typedef struct__79190 obuEventsAndPhases_T_MoRC_Pck;

typedef struct {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} struct__79214;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct__79214 radioNetWorkIDs_T_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
  M_LEVEL newLevel;
  M_LEVEL previousLevel;
} struct__79220;

/* DMI_Types_Pkg::DMI_ModesToDMI_T */
typedef struct__79220 DMI_ModesToDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} struct__79229;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct__79229 movementAuthorityForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} struct__79235;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct__79235 nationValuesForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} struct__79241;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct__79241 dmiOutputs_T_manage_DMI_Output_Pkg;

typedef struct {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  kcg_bool Linked_BG_In_Wrong_Direction;
  struct__77275 Train_Position;
  kcg_int Train_Speed;
  kcg_bool Train_Standstill;
} struct__79246;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct__79246 T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
} struct__79255;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct__79255 T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} struct__79262;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct__79262 T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} struct__79271;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct__79271 TIU_commandStatus_T_TIU_Types_Pkg;

typedef struct { kcg_bool no_restriction; kcg_int restriction; } struct__79277;

/* TIU_Types_Pkg::M_current_T */
typedef struct__79277 M_current_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} struct__79282;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct__79282 Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int door_control_info; } struct__79288;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct__79288 Passenger_door_control_info_T_TIU_Types_Pkg;

typedef struct {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} struct__79293;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct__79293 M_voltage_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} struct__79298;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct__79298 Change_traction_system_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} struct__79304;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct__79304 Type_I_train_commands_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} struct__79312;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct__79312 Brake_inhibition_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} struct__79319;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct__79319 Isolation_Status_T_TIU_Types_Pkg;

typedef struct {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} struct__79324;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct__79324 Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} struct__79334;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct__79334 TIU_Output_msg_API_TIU_Pkg;

typedef T_LevelTransition_Level_And_Mode_Types_Pkg array__79339[5];

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef array__79339 T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg;

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
} struct__79342;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct__79342 T_Data_From_DMI_Level_And_Mode_Types_Pkg;

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
} struct__79359;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct__79359 T_Data_To_DMI_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool MA_SSP_Gradient_Available;
  T_Mode_Profile_Level_And_Mode_Types_Pkg Mode_Profile_On_Board;
  kcg_bool Shunting_granted_By_RBC;
  kcg_bool Trip_Order_Given_By_Balise;
  kcg_bool List_Bg_Related_To_SR_Empty;
  kcg_bool Stop_If_In_shunting;
  kcg_bool Stop_If_In_SR;
  kcg_bool Error_BG_System_Version;
  kcg_bool Linking_Reaction_To_Trip;
  kcg_bool RBC_Ack_TR_EB_Revocked;
  kcg_bool RBC_Authorized_SR;
  T_Reversing_Data_Level_And_Mode_Types_Pkg Reversing_Data;
  kcg_bool T_NVCONTACT_Overpass;
  kcg_bool Emergency_Stop_Message_Received;
} struct__79371;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track */
typedef struct__79371 T_Data_From_Track_Level_And_Mode_Types_Pkg;

typedef T_Mode_Profile_Level_And_Mode_Types_Pkg array__79388[5];

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef array__79388 T_Mode_Profile_Table_Level_And_Mode_Types_Pkg;

typedef kcg_bool array_bool_20[20];

/* Level_And_Mode_Types_Pkg::T_TransitionConditions */
typedef array_bool_20 T_TransitionConditions_Level_And_Mode_Types_Pkg;

typedef kcg_bool array_bool_4[4];

typedef struct { kcg_int idx; array_bool_4 items; } struct__79397;

typedef kcg_bool array_bool_1[1];

typedef kcg_real array_real_1[1];

typedef Target_real_T_TargetManagement_types array__79408[1];

typedef kcg_bool array_bool_8[8];

typedef kcg_bool array_bool_30[30];

typedef ReceivedMessage_T_Common_Types_Pkg array__79417[3];

typedef ErrorMessage_T_ProvidePositionReport_Pkg array__79420[9];

typedef SSP_t_indexed_matrix_element_TA_MRSP array__79423[11];

typedef P027V1_section_enum_T_TM_baseline2 array__79426[1];

typedef struct__76965 array__79429[1];

typedef positionedBG_T_TrainPosition_Types_Pck array__79432[1];

typedef kcg_int array_int_1[1];

typedef kcg_real array_real_24[24];

typedef kcg_bool array_bool_24[24];

typedef Target_real_T_TargetManagement_types array__82215[199];

typedef P027V1_section_enum_T_TM_baseline2 array__82684[32];

typedef SSP_section_t_TA_MRSP array__82691[32];

typedef P003_OBU_nid_c_section_enum_T_TM array__82748[31];

typedef positionedBG_T_TrainPosition_Types_Pck array__82782[7];

#ifndef kcg_copy_struct__76855
#define kcg_copy_struct__76855(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76855)))
#endif /* kcg_copy_struct__76855 */

#ifndef kcg_copy_struct__76864
#define kcg_copy_struct__76864(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76864)))
#endif /* kcg_copy_struct__76864 */

#ifndef kcg_copy_struct__76874
#define kcg_copy_struct__76874(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76874)))
#endif /* kcg_copy_struct__76874 */

#ifndef kcg_copy_struct__76889
#define kcg_copy_struct__76889(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76889)))
#endif /* kcg_copy_struct__76889 */

#ifndef kcg_copy_struct__76899
#define kcg_copy_struct__76899(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76899)))
#endif /* kcg_copy_struct__76899 */

#ifndef kcg_copy_struct__76930
#define kcg_copy_struct__76930(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76930)))
#endif /* kcg_copy_struct__76930 */

#ifndef kcg_copy_struct__76935
#define kcg_copy_struct__76935(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76935)))
#endif /* kcg_copy_struct__76935 */

#ifndef kcg_copy_struct__76944
#define kcg_copy_struct__76944(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76944)))
#endif /* kcg_copy_struct__76944 */

#ifndef kcg_copy_struct__76954
#define kcg_copy_struct__76954(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76954)))
#endif /* kcg_copy_struct__76954 */

#ifndef kcg_copy_struct__76965
#define kcg_copy_struct__76965(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76965)))
#endif /* kcg_copy_struct__76965 */

#ifndef kcg_copy_struct__76973
#define kcg_copy_struct__76973(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__76973)))
#endif /* kcg_copy_struct__76973 */

#ifndef kcg_copy_struct__77012
#define kcg_copy_struct__77012(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77012)))
#endif /* kcg_copy_struct__77012 */

#ifndef kcg_copy_struct__77032
#define kcg_copy_struct__77032(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77032)))
#endif /* kcg_copy_struct__77032 */

#ifndef kcg_copy_struct__77043
#define kcg_copy_struct__77043(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77043)))
#endif /* kcg_copy_struct__77043 */

#ifndef kcg_copy_struct__77048
#define kcg_copy_struct__77048(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77048)))
#endif /* kcg_copy_struct__77048 */

#ifndef kcg_copy_struct__77062
#define kcg_copy_struct__77062(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77062)))
#endif /* kcg_copy_struct__77062 */

#ifndef kcg_copy_struct__77077
#define kcg_copy_struct__77077(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77077)))
#endif /* kcg_copy_struct__77077 */

#ifndef kcg_copy_struct__77095
#define kcg_copy_struct__77095(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77095)))
#endif /* kcg_copy_struct__77095 */

#ifndef kcg_copy_struct__77107
#define kcg_copy_struct__77107(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77107)))
#endif /* kcg_copy_struct__77107 */

#ifndef kcg_copy_struct__77114
#define kcg_copy_struct__77114(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77114)))
#endif /* kcg_copy_struct__77114 */

#ifndef kcg_copy_struct__77121
#define kcg_copy_struct__77121(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77121)))
#endif /* kcg_copy_struct__77121 */

#ifndef kcg_copy_struct__77127
#define kcg_copy_struct__77127(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77127)))
#endif /* kcg_copy_struct__77127 */

#ifndef kcg_copy_struct__77137
#define kcg_copy_struct__77137(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77137)))
#endif /* kcg_copy_struct__77137 */

#ifndef kcg_copy_struct__77143
#define kcg_copy_struct__77143(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77143)))
#endif /* kcg_copy_struct__77143 */

#ifndef kcg_copy_struct__77161
#define kcg_copy_struct__77161(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77161)))
#endif /* kcg_copy_struct__77161 */

#ifndef kcg_copy_struct__77171
#define kcg_copy_struct__77171(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77171)))
#endif /* kcg_copy_struct__77171 */

#ifndef kcg_copy_struct__77177
#define kcg_copy_struct__77177(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77177)))
#endif /* kcg_copy_struct__77177 */

#ifndef kcg_copy_struct__77186
#define kcg_copy_struct__77186(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77186)))
#endif /* kcg_copy_struct__77186 */

#ifndef kcg_copy_struct__77200
#define kcg_copy_struct__77200(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77200)))
#endif /* kcg_copy_struct__77200 */

#ifndef kcg_copy_struct__77206
#define kcg_copy_struct__77206(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77206)))
#endif /* kcg_copy_struct__77206 */

#ifndef kcg_copy_struct__77215
#define kcg_copy_struct__77215(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77215)))
#endif /* kcg_copy_struct__77215 */

#ifndef kcg_copy_struct__77224
#define kcg_copy_struct__77224(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77224)))
#endif /* kcg_copy_struct__77224 */

#ifndef kcg_copy_struct__77234
#define kcg_copy_struct__77234(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77234)))
#endif /* kcg_copy_struct__77234 */

#ifndef kcg_copy_struct__77242
#define kcg_copy_struct__77242(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77242)))
#endif /* kcg_copy_struct__77242 */

#ifndef kcg_copy_struct__77250
#define kcg_copy_struct__77250(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77250)))
#endif /* kcg_copy_struct__77250 */

#ifndef kcg_copy_struct__77262
#define kcg_copy_struct__77262(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77262)))
#endif /* kcg_copy_struct__77262 */

#ifndef kcg_copy_struct__77275
#define kcg_copy_struct__77275(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77275)))
#endif /* kcg_copy_struct__77275 */

#ifndef kcg_copy_struct__77292
#define kcg_copy_struct__77292(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77292)))
#endif /* kcg_copy_struct__77292 */

#ifndef kcg_copy_struct__77300
#define kcg_copy_struct__77300(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77300)))
#endif /* kcg_copy_struct__77300 */

#ifndef kcg_copy_struct__77313
#define kcg_copy_struct__77313(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77313)))
#endif /* kcg_copy_struct__77313 */

#ifndef kcg_copy_struct__77322
#define kcg_copy_struct__77322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77322)))
#endif /* kcg_copy_struct__77322 */

#ifndef kcg_copy_struct__77332
#define kcg_copy_struct__77332(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77332)))
#endif /* kcg_copy_struct__77332 */

#ifndef kcg_copy_struct__77350
#define kcg_copy_struct__77350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77350)))
#endif /* kcg_copy_struct__77350 */

#ifndef kcg_copy_struct__77358
#define kcg_copy_struct__77358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77358)))
#endif /* kcg_copy_struct__77358 */

#ifndef kcg_copy_struct__77366
#define kcg_copy_struct__77366(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77366)))
#endif /* kcg_copy_struct__77366 */

#ifndef kcg_copy_struct__77374
#define kcg_copy_struct__77374(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77374)))
#endif /* kcg_copy_struct__77374 */

#ifndef kcg_copy_struct__77390
#define kcg_copy_struct__77390(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77390)))
#endif /* kcg_copy_struct__77390 */

#ifndef kcg_copy_struct__77423
#define kcg_copy_struct__77423(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77423)))
#endif /* kcg_copy_struct__77423 */

#ifndef kcg_copy_struct__77478
#define kcg_copy_struct__77478(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77478)))
#endif /* kcg_copy_struct__77478 */

#ifndef kcg_copy_struct__77489
#define kcg_copy_struct__77489(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77489)))
#endif /* kcg_copy_struct__77489 */

#ifndef kcg_copy_struct__77523
#define kcg_copy_struct__77523(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77523)))
#endif /* kcg_copy_struct__77523 */

#ifndef kcg_copy_struct__77532
#define kcg_copy_struct__77532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77532)))
#endif /* kcg_copy_struct__77532 */

#ifndef kcg_copy_struct__77537
#define kcg_copy_struct__77537(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77537)))
#endif /* kcg_copy_struct__77537 */

#ifndef kcg_copy_struct__77546
#define kcg_copy_struct__77546(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77546)))
#endif /* kcg_copy_struct__77546 */

#ifndef kcg_copy_struct__77564
#define kcg_copy_struct__77564(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77564)))
#endif /* kcg_copy_struct__77564 */

#ifndef kcg_copy_struct__77572
#define kcg_copy_struct__77572(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77572)))
#endif /* kcg_copy_struct__77572 */

#ifndef kcg_copy_struct__77581
#define kcg_copy_struct__77581(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77581)))
#endif /* kcg_copy_struct__77581 */

#ifndef kcg_copy_struct__77593
#define kcg_copy_struct__77593(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77593)))
#endif /* kcg_copy_struct__77593 */

#ifndef kcg_copy_struct__77600
#define kcg_copy_struct__77600(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77600)))
#endif /* kcg_copy_struct__77600 */

#ifndef kcg_copy_struct__77615
#define kcg_copy_struct__77615(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77615)))
#endif /* kcg_copy_struct__77615 */

#ifndef kcg_copy_struct__77630
#define kcg_copy_struct__77630(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77630)))
#endif /* kcg_copy_struct__77630 */

#ifndef kcg_copy_struct__77635
#define kcg_copy_struct__77635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77635)))
#endif /* kcg_copy_struct__77635 */

#ifndef kcg_copy_struct__77641
#define kcg_copy_struct__77641(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77641)))
#endif /* kcg_copy_struct__77641 */

#ifndef kcg_copy_struct__77646
#define kcg_copy_struct__77646(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77646)))
#endif /* kcg_copy_struct__77646 */

#ifndef kcg_copy_struct__77653
#define kcg_copy_struct__77653(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77653)))
#endif /* kcg_copy_struct__77653 */

#ifndef kcg_copy_struct__77664
#define kcg_copy_struct__77664(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77664)))
#endif /* kcg_copy_struct__77664 */

#ifndef kcg_copy_struct__77674
#define kcg_copy_struct__77674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77674)))
#endif /* kcg_copy_struct__77674 */

#ifndef kcg_copy_struct__77685
#define kcg_copy_struct__77685(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77685)))
#endif /* kcg_copy_struct__77685 */

#ifndef kcg_copy_struct__77697
#define kcg_copy_struct__77697(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77697)))
#endif /* kcg_copy_struct__77697 */

#ifndef kcg_copy_struct__77705
#define kcg_copy_struct__77705(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77705)))
#endif /* kcg_copy_struct__77705 */

#ifndef kcg_copy_struct__77721
#define kcg_copy_struct__77721(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77721)))
#endif /* kcg_copy_struct__77721 */

#ifndef kcg_copy_struct__77726
#define kcg_copy_struct__77726(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77726)))
#endif /* kcg_copy_struct__77726 */

#ifndef kcg_copy_struct__77731
#define kcg_copy_struct__77731(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77731)))
#endif /* kcg_copy_struct__77731 */

#ifndef kcg_copy_struct__77736
#define kcg_copy_struct__77736(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77736)))
#endif /* kcg_copy_struct__77736 */

#ifndef kcg_copy_struct__77744
#define kcg_copy_struct__77744(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77744)))
#endif /* kcg_copy_struct__77744 */

#ifndef kcg_copy_struct__77750
#define kcg_copy_struct__77750(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77750)))
#endif /* kcg_copy_struct__77750 */

#ifndef kcg_copy_struct__77770
#define kcg_copy_struct__77770(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77770)))
#endif /* kcg_copy_struct__77770 */

#ifndef kcg_copy_struct__77775
#define kcg_copy_struct__77775(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77775)))
#endif /* kcg_copy_struct__77775 */

#ifndef kcg_copy_struct__77794
#define kcg_copy_struct__77794(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77794)))
#endif /* kcg_copy_struct__77794 */

#ifndef kcg_copy_struct__77799
#define kcg_copy_struct__77799(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77799)))
#endif /* kcg_copy_struct__77799 */

#ifndef kcg_copy_struct__77809
#define kcg_copy_struct__77809(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77809)))
#endif /* kcg_copy_struct__77809 */

#ifndef kcg_copy_struct__77815
#define kcg_copy_struct__77815(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77815)))
#endif /* kcg_copy_struct__77815 */

#ifndef kcg_copy_struct__77820
#define kcg_copy_struct__77820(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77820)))
#endif /* kcg_copy_struct__77820 */

#ifndef kcg_copy_struct__77828
#define kcg_copy_struct__77828(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77828)))
#endif /* kcg_copy_struct__77828 */

#ifndef kcg_copy_struct__77837
#define kcg_copy_struct__77837(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77837)))
#endif /* kcg_copy_struct__77837 */

#ifndef kcg_copy_struct__77844
#define kcg_copy_struct__77844(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77844)))
#endif /* kcg_copy_struct__77844 */

#ifndef kcg_copy_struct__77850
#define kcg_copy_struct__77850(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77850)))
#endif /* kcg_copy_struct__77850 */

#ifndef kcg_copy_struct__77858
#define kcg_copy_struct__77858(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77858)))
#endif /* kcg_copy_struct__77858 */

#ifndef kcg_copy_struct__77863
#define kcg_copy_struct__77863(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77863)))
#endif /* kcg_copy_struct__77863 */

#ifndef kcg_copy_struct__77870
#define kcg_copy_struct__77870(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77870)))
#endif /* kcg_copy_struct__77870 */

#ifndef kcg_copy_struct__77878
#define kcg_copy_struct__77878(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77878)))
#endif /* kcg_copy_struct__77878 */

#ifndef kcg_copy_struct__77886
#define kcg_copy_struct__77886(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77886)))
#endif /* kcg_copy_struct__77886 */

#ifndef kcg_copy_struct__77895
#define kcg_copy_struct__77895(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77895)))
#endif /* kcg_copy_struct__77895 */

#ifndef kcg_copy_struct__77913
#define kcg_copy_struct__77913(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77913)))
#endif /* kcg_copy_struct__77913 */

#ifndef kcg_copy_struct__77925
#define kcg_copy_struct__77925(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77925)))
#endif /* kcg_copy_struct__77925 */

#ifndef kcg_copy_struct__77931
#define kcg_copy_struct__77931(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77931)))
#endif /* kcg_copy_struct__77931 */

#ifndef kcg_copy_struct__77946
#define kcg_copy_struct__77946(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77946)))
#endif /* kcg_copy_struct__77946 */

#ifndef kcg_copy_struct__77956
#define kcg_copy_struct__77956(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77956)))
#endif /* kcg_copy_struct__77956 */

#ifndef kcg_copy_struct__77969
#define kcg_copy_struct__77969(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77969)))
#endif /* kcg_copy_struct__77969 */

#ifndef kcg_copy_struct__77980
#define kcg_copy_struct__77980(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77980)))
#endif /* kcg_copy_struct__77980 */

#ifndef kcg_copy_struct__77991
#define kcg_copy_struct__77991(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__77991)))
#endif /* kcg_copy_struct__77991 */

#ifndef kcg_copy_struct__78002
#define kcg_copy_struct__78002(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78002)))
#endif /* kcg_copy_struct__78002 */

#ifndef kcg_copy_struct__78014
#define kcg_copy_struct__78014(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78014)))
#endif /* kcg_copy_struct__78014 */

#ifndef kcg_copy_struct__78044
#define kcg_copy_struct__78044(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78044)))
#endif /* kcg_copy_struct__78044 */

#ifndef kcg_copy_struct__78052
#define kcg_copy_struct__78052(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78052)))
#endif /* kcg_copy_struct__78052 */

#ifndef kcg_copy_struct__78060
#define kcg_copy_struct__78060(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78060)))
#endif /* kcg_copy_struct__78060 */

#ifndef kcg_copy_struct__78066
#define kcg_copy_struct__78066(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78066)))
#endif /* kcg_copy_struct__78066 */

#ifndef kcg_copy_struct__78081
#define kcg_copy_struct__78081(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78081)))
#endif /* kcg_copy_struct__78081 */

#ifndef kcg_copy_struct__78094
#define kcg_copy_struct__78094(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78094)))
#endif /* kcg_copy_struct__78094 */

#ifndef kcg_copy_struct__78103
#define kcg_copy_struct__78103(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78103)))
#endif /* kcg_copy_struct__78103 */

#ifndef kcg_copy_struct__78108
#define kcg_copy_struct__78108(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78108)))
#endif /* kcg_copy_struct__78108 */

#ifndef kcg_copy_struct__78118
#define kcg_copy_struct__78118(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78118)))
#endif /* kcg_copy_struct__78118 */

#ifndef kcg_copy_struct__78130
#define kcg_copy_struct__78130(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78130)))
#endif /* kcg_copy_struct__78130 */

#ifndef kcg_copy_struct__78136
#define kcg_copy_struct__78136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78136)))
#endif /* kcg_copy_struct__78136 */

#ifndef kcg_copy_struct__78141
#define kcg_copy_struct__78141(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78141)))
#endif /* kcg_copy_struct__78141 */

#ifndef kcg_copy_struct__78147
#define kcg_copy_struct__78147(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78147)))
#endif /* kcg_copy_struct__78147 */

#ifndef kcg_copy_struct__78153
#define kcg_copy_struct__78153(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78153)))
#endif /* kcg_copy_struct__78153 */

#ifndef kcg_copy_struct__78158
#define kcg_copy_struct__78158(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78158)))
#endif /* kcg_copy_struct__78158 */

#ifndef kcg_copy_struct__78167
#define kcg_copy_struct__78167(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78167)))
#endif /* kcg_copy_struct__78167 */

#ifndef kcg_copy_struct__78178
#define kcg_copy_struct__78178(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78178)))
#endif /* kcg_copy_struct__78178 */

#ifndef kcg_copy_struct__78187
#define kcg_copy_struct__78187(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78187)))
#endif /* kcg_copy_struct__78187 */

#ifndef kcg_copy_struct__78194
#define kcg_copy_struct__78194(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78194)))
#endif /* kcg_copy_struct__78194 */

#ifndef kcg_copy_struct__78199
#define kcg_copy_struct__78199(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78199)))
#endif /* kcg_copy_struct__78199 */

#ifndef kcg_copy_struct__78204
#define kcg_copy_struct__78204(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78204)))
#endif /* kcg_copy_struct__78204 */

#ifndef kcg_copy_struct__78210
#define kcg_copy_struct__78210(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78210)))
#endif /* kcg_copy_struct__78210 */

#ifndef kcg_copy_struct__78215
#define kcg_copy_struct__78215(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78215)))
#endif /* kcg_copy_struct__78215 */

#ifndef kcg_copy_struct__78224
#define kcg_copy_struct__78224(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78224)))
#endif /* kcg_copy_struct__78224 */

#ifndef kcg_copy_struct__78228
#define kcg_copy_struct__78228(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78228)))
#endif /* kcg_copy_struct__78228 */

#ifndef kcg_copy_struct__78233
#define kcg_copy_struct__78233(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78233)))
#endif /* kcg_copy_struct__78233 */

#ifndef kcg_copy_struct__78241
#define kcg_copy_struct__78241(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78241)))
#endif /* kcg_copy_struct__78241 */

#ifndef kcg_copy_struct__78254
#define kcg_copy_struct__78254(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78254)))
#endif /* kcg_copy_struct__78254 */

#ifndef kcg_copy_struct__78263
#define kcg_copy_struct__78263(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78263)))
#endif /* kcg_copy_struct__78263 */

#ifndef kcg_copy_struct__78277
#define kcg_copy_struct__78277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78277)))
#endif /* kcg_copy_struct__78277 */

#ifndef kcg_copy_struct__78285
#define kcg_copy_struct__78285(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78285)))
#endif /* kcg_copy_struct__78285 */

#ifndef kcg_copy_struct__78298
#define kcg_copy_struct__78298(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78298)))
#endif /* kcg_copy_struct__78298 */

#ifndef kcg_copy_struct__78303
#define kcg_copy_struct__78303(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78303)))
#endif /* kcg_copy_struct__78303 */

#ifndef kcg_copy_struct__78312
#define kcg_copy_struct__78312(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78312)))
#endif /* kcg_copy_struct__78312 */

#ifndef kcg_copy_struct__78333
#define kcg_copy_struct__78333(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78333)))
#endif /* kcg_copy_struct__78333 */

#ifndef kcg_copy_struct__78344
#define kcg_copy_struct__78344(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78344)))
#endif /* kcg_copy_struct__78344 */

#ifndef kcg_copy_struct__78350
#define kcg_copy_struct__78350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78350)))
#endif /* kcg_copy_struct__78350 */

#ifndef kcg_copy_struct__78360
#define kcg_copy_struct__78360(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78360)))
#endif /* kcg_copy_struct__78360 */

#ifndef kcg_copy_struct__78369
#define kcg_copy_struct__78369(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78369)))
#endif /* kcg_copy_struct__78369 */

#ifndef kcg_copy_struct__78377
#define kcg_copy_struct__78377(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78377)))
#endif /* kcg_copy_struct__78377 */

#ifndef kcg_copy_struct__78387
#define kcg_copy_struct__78387(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78387)))
#endif /* kcg_copy_struct__78387 */

#ifndef kcg_copy_struct__78396
#define kcg_copy_struct__78396(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78396)))
#endif /* kcg_copy_struct__78396 */

#ifndef kcg_copy_struct__78403
#define kcg_copy_struct__78403(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78403)))
#endif /* kcg_copy_struct__78403 */

#ifndef kcg_copy_struct__78411
#define kcg_copy_struct__78411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78411)))
#endif /* kcg_copy_struct__78411 */

#ifndef kcg_copy_struct__78422
#define kcg_copy_struct__78422(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78422)))
#endif /* kcg_copy_struct__78422 */

#ifndef kcg_copy_struct__78434
#define kcg_copy_struct__78434(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78434)))
#endif /* kcg_copy_struct__78434 */

#ifndef kcg_copy_struct__78440
#define kcg_copy_struct__78440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78440)))
#endif /* kcg_copy_struct__78440 */

#ifndef kcg_copy_struct__78446
#define kcg_copy_struct__78446(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78446)))
#endif /* kcg_copy_struct__78446 */

#ifndef kcg_copy_struct__78452
#define kcg_copy_struct__78452(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78452)))
#endif /* kcg_copy_struct__78452 */

#ifndef kcg_copy_struct__78457
#define kcg_copy_struct__78457(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78457)))
#endif /* kcg_copy_struct__78457 */

#ifndef kcg_copy_struct__78467
#define kcg_copy_struct__78467(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78467)))
#endif /* kcg_copy_struct__78467 */

#ifndef kcg_copy_struct__78481
#define kcg_copy_struct__78481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78481)))
#endif /* kcg_copy_struct__78481 */

#ifndef kcg_copy_struct__78487
#define kcg_copy_struct__78487(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78487)))
#endif /* kcg_copy_struct__78487 */

#ifndef kcg_copy_struct__78494
#define kcg_copy_struct__78494(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78494)))
#endif /* kcg_copy_struct__78494 */

#ifndef kcg_copy_struct__78501
#define kcg_copy_struct__78501(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78501)))
#endif /* kcg_copy_struct__78501 */

#ifndef kcg_copy_struct__78507
#define kcg_copy_struct__78507(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78507)))
#endif /* kcg_copy_struct__78507 */

#ifndef kcg_copy_struct__78516
#define kcg_copy_struct__78516(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78516)))
#endif /* kcg_copy_struct__78516 */

#ifndef kcg_copy_struct__78522
#define kcg_copy_struct__78522(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78522)))
#endif /* kcg_copy_struct__78522 */

#ifndef kcg_copy_struct__78527
#define kcg_copy_struct__78527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78527)))
#endif /* kcg_copy_struct__78527 */

#ifndef kcg_copy_struct__78537
#define kcg_copy_struct__78537(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78537)))
#endif /* kcg_copy_struct__78537 */

#ifndef kcg_copy_struct__78547
#define kcg_copy_struct__78547(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78547)))
#endif /* kcg_copy_struct__78547 */

#ifndef kcg_copy_struct__78563
#define kcg_copy_struct__78563(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78563)))
#endif /* kcg_copy_struct__78563 */

#ifndef kcg_copy_struct__78575
#define kcg_copy_struct__78575(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78575)))
#endif /* kcg_copy_struct__78575 */

#ifndef kcg_copy_struct__78582
#define kcg_copy_struct__78582(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78582)))
#endif /* kcg_copy_struct__78582 */

#ifndef kcg_copy_struct__78615
#define kcg_copy_struct__78615(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78615)))
#endif /* kcg_copy_struct__78615 */

#ifndef kcg_copy_struct__78620
#define kcg_copy_struct__78620(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78620)))
#endif /* kcg_copy_struct__78620 */

#ifndef kcg_copy_struct__78625
#define kcg_copy_struct__78625(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78625)))
#endif /* kcg_copy_struct__78625 */

#ifndef kcg_copy_struct__78634
#define kcg_copy_struct__78634(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78634)))
#endif /* kcg_copy_struct__78634 */

#ifndef kcg_copy_struct__78641
#define kcg_copy_struct__78641(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78641)))
#endif /* kcg_copy_struct__78641 */

#ifndef kcg_copy_struct__78648
#define kcg_copy_struct__78648(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78648)))
#endif /* kcg_copy_struct__78648 */

#ifndef kcg_copy_struct__78654
#define kcg_copy_struct__78654(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78654)))
#endif /* kcg_copy_struct__78654 */

#ifndef kcg_copy_struct__78664
#define kcg_copy_struct__78664(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78664)))
#endif /* kcg_copy_struct__78664 */

#ifndef kcg_copy_struct__78676
#define kcg_copy_struct__78676(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78676)))
#endif /* kcg_copy_struct__78676 */

#ifndef kcg_copy_struct__78683
#define kcg_copy_struct__78683(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78683)))
#endif /* kcg_copy_struct__78683 */

#ifndef kcg_copy_struct__78693
#define kcg_copy_struct__78693(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78693)))
#endif /* kcg_copy_struct__78693 */

#ifndef kcg_copy_struct__78702
#define kcg_copy_struct__78702(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78702)))
#endif /* kcg_copy_struct__78702 */

#ifndef kcg_copy_struct__78713
#define kcg_copy_struct__78713(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78713)))
#endif /* kcg_copy_struct__78713 */

#ifndef kcg_copy_struct__78720
#define kcg_copy_struct__78720(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78720)))
#endif /* kcg_copy_struct__78720 */

#ifndef kcg_copy_struct__78730
#define kcg_copy_struct__78730(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78730)))
#endif /* kcg_copy_struct__78730 */

#ifndef kcg_copy_struct__78735
#define kcg_copy_struct__78735(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78735)))
#endif /* kcg_copy_struct__78735 */

#ifndef kcg_copy_struct__78748
#define kcg_copy_struct__78748(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78748)))
#endif /* kcg_copy_struct__78748 */

#ifndef kcg_copy_struct__78757
#define kcg_copy_struct__78757(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78757)))
#endif /* kcg_copy_struct__78757 */

#ifndef kcg_copy_struct__78773
#define kcg_copy_struct__78773(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78773)))
#endif /* kcg_copy_struct__78773 */

#ifndef kcg_copy_struct__78796
#define kcg_copy_struct__78796(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78796)))
#endif /* kcg_copy_struct__78796 */

#ifndef kcg_copy_struct__78810
#define kcg_copy_struct__78810(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78810)))
#endif /* kcg_copy_struct__78810 */

#ifndef kcg_copy_struct__78816
#define kcg_copy_struct__78816(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78816)))
#endif /* kcg_copy_struct__78816 */

#ifndef kcg_copy_struct__78824
#define kcg_copy_struct__78824(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78824)))
#endif /* kcg_copy_struct__78824 */

#ifndef kcg_copy_struct__78830
#define kcg_copy_struct__78830(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78830)))
#endif /* kcg_copy_struct__78830 */

#ifndef kcg_copy_struct__78857
#define kcg_copy_struct__78857(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78857)))
#endif /* kcg_copy_struct__78857 */

#ifndef kcg_copy_struct__78870
#define kcg_copy_struct__78870(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78870)))
#endif /* kcg_copy_struct__78870 */

#ifndef kcg_copy_struct__78890
#define kcg_copy_struct__78890(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78890)))
#endif /* kcg_copy_struct__78890 */

#ifndef kcg_copy_struct__78897
#define kcg_copy_struct__78897(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78897)))
#endif /* kcg_copy_struct__78897 */

#ifndef kcg_copy_struct__78904
#define kcg_copy_struct__78904(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78904)))
#endif /* kcg_copy_struct__78904 */

#ifndef kcg_copy_struct__78910
#define kcg_copy_struct__78910(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78910)))
#endif /* kcg_copy_struct__78910 */

#ifndef kcg_copy_struct__78917
#define kcg_copy_struct__78917(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78917)))
#endif /* kcg_copy_struct__78917 */

#ifndef kcg_copy_struct__78925
#define kcg_copy_struct__78925(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78925)))
#endif /* kcg_copy_struct__78925 */

#ifndef kcg_copy_struct__78931
#define kcg_copy_struct__78931(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78931)))
#endif /* kcg_copy_struct__78931 */

#ifndef kcg_copy_struct__78943
#define kcg_copy_struct__78943(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78943)))
#endif /* kcg_copy_struct__78943 */

#ifndef kcg_copy_struct__78949
#define kcg_copy_struct__78949(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78949)))
#endif /* kcg_copy_struct__78949 */

#ifndef kcg_copy_struct__78955
#define kcg_copy_struct__78955(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78955)))
#endif /* kcg_copy_struct__78955 */

#ifndef kcg_copy_struct__78961
#define kcg_copy_struct__78961(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78961)))
#endif /* kcg_copy_struct__78961 */

#ifndef kcg_copy_struct__78967
#define kcg_copy_struct__78967(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78967)))
#endif /* kcg_copy_struct__78967 */

#ifndef kcg_copy_struct__78977
#define kcg_copy_struct__78977(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78977)))
#endif /* kcg_copy_struct__78977 */

#ifndef kcg_copy_struct__78985
#define kcg_copy_struct__78985(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78985)))
#endif /* kcg_copy_struct__78985 */

#ifndef kcg_copy_struct__78993
#define kcg_copy_struct__78993(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__78993)))
#endif /* kcg_copy_struct__78993 */

#ifndef kcg_copy_struct__79001
#define kcg_copy_struct__79001(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79001)))
#endif /* kcg_copy_struct__79001 */

#ifndef kcg_copy_struct__79006
#define kcg_copy_struct__79006(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79006)))
#endif /* kcg_copy_struct__79006 */

#ifndef kcg_copy_struct__79014
#define kcg_copy_struct__79014(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79014)))
#endif /* kcg_copy_struct__79014 */

#ifndef kcg_copy_struct__79025
#define kcg_copy_struct__79025(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79025)))
#endif /* kcg_copy_struct__79025 */

#ifndef kcg_copy_struct__79032
#define kcg_copy_struct__79032(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79032)))
#endif /* kcg_copy_struct__79032 */

#ifndef kcg_copy_struct__79040
#define kcg_copy_struct__79040(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79040)))
#endif /* kcg_copy_struct__79040 */

#ifndef kcg_copy_struct__79049
#define kcg_copy_struct__79049(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79049)))
#endif /* kcg_copy_struct__79049 */

#ifndef kcg_copy_struct__79061
#define kcg_copy_struct__79061(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79061)))
#endif /* kcg_copy_struct__79061 */

#ifndef kcg_copy_struct__79094
#define kcg_copy_struct__79094(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79094)))
#endif /* kcg_copy_struct__79094 */

#ifndef kcg_copy_struct__79100
#define kcg_copy_struct__79100(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79100)))
#endif /* kcg_copy_struct__79100 */

#ifndef kcg_copy_struct__79126
#define kcg_copy_struct__79126(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79126)))
#endif /* kcg_copy_struct__79126 */

#ifndef kcg_copy_struct__79146
#define kcg_copy_struct__79146(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79146)))
#endif /* kcg_copy_struct__79146 */

#ifndef kcg_copy_struct__79152
#define kcg_copy_struct__79152(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79152)))
#endif /* kcg_copy_struct__79152 */

#ifndef kcg_copy_struct__79166
#define kcg_copy_struct__79166(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79166)))
#endif /* kcg_copy_struct__79166 */

#ifndef kcg_copy_struct__79172
#define kcg_copy_struct__79172(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79172)))
#endif /* kcg_copy_struct__79172 */

#ifndef kcg_copy_struct__79177
#define kcg_copy_struct__79177(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79177)))
#endif /* kcg_copy_struct__79177 */

#ifndef kcg_copy_struct__79184
#define kcg_copy_struct__79184(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79184)))
#endif /* kcg_copy_struct__79184 */

#ifndef kcg_copy_struct__79190
#define kcg_copy_struct__79190(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79190)))
#endif /* kcg_copy_struct__79190 */

#ifndef kcg_copy_struct__79214
#define kcg_copy_struct__79214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79214)))
#endif /* kcg_copy_struct__79214 */

#ifndef kcg_copy_struct__79220
#define kcg_copy_struct__79220(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79220)))
#endif /* kcg_copy_struct__79220 */

#ifndef kcg_copy_struct__79229
#define kcg_copy_struct__79229(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79229)))
#endif /* kcg_copy_struct__79229 */

#ifndef kcg_copy_struct__79235
#define kcg_copy_struct__79235(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79235)))
#endif /* kcg_copy_struct__79235 */

#ifndef kcg_copy_struct__79241
#define kcg_copy_struct__79241(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79241)))
#endif /* kcg_copy_struct__79241 */

#ifndef kcg_copy_struct__79246
#define kcg_copy_struct__79246(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79246)))
#endif /* kcg_copy_struct__79246 */

#ifndef kcg_copy_struct__79255
#define kcg_copy_struct__79255(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79255)))
#endif /* kcg_copy_struct__79255 */

#ifndef kcg_copy_struct__79262
#define kcg_copy_struct__79262(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79262)))
#endif /* kcg_copy_struct__79262 */

#ifndef kcg_copy_struct__79271
#define kcg_copy_struct__79271(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79271)))
#endif /* kcg_copy_struct__79271 */

#ifndef kcg_copy_struct__79277
#define kcg_copy_struct__79277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79277)))
#endif /* kcg_copy_struct__79277 */

#ifndef kcg_copy_struct__79282
#define kcg_copy_struct__79282(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79282)))
#endif /* kcg_copy_struct__79282 */

#ifndef kcg_copy_struct__79288
#define kcg_copy_struct__79288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79288)))
#endif /* kcg_copy_struct__79288 */

#ifndef kcg_copy_struct__79293
#define kcg_copy_struct__79293(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79293)))
#endif /* kcg_copy_struct__79293 */

#ifndef kcg_copy_struct__79298
#define kcg_copy_struct__79298(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79298)))
#endif /* kcg_copy_struct__79298 */

#ifndef kcg_copy_struct__79304
#define kcg_copy_struct__79304(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79304)))
#endif /* kcg_copy_struct__79304 */

#ifndef kcg_copy_struct__79312
#define kcg_copy_struct__79312(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79312)))
#endif /* kcg_copy_struct__79312 */

#ifndef kcg_copy_struct__79319
#define kcg_copy_struct__79319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79319)))
#endif /* kcg_copy_struct__79319 */

#ifndef kcg_copy_struct__79324
#define kcg_copy_struct__79324(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79324)))
#endif /* kcg_copy_struct__79324 */

#ifndef kcg_copy_struct__79334
#define kcg_copy_struct__79334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79334)))
#endif /* kcg_copy_struct__79334 */

#ifndef kcg_copy_struct__79342
#define kcg_copy_struct__79342(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79342)))
#endif /* kcg_copy_struct__79342 */

#ifndef kcg_copy_struct__79359
#define kcg_copy_struct__79359(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79359)))
#endif /* kcg_copy_struct__79359 */

#ifndef kcg_copy_struct__79371
#define kcg_copy_struct__79371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79371)))
#endif /* kcg_copy_struct__79371 */

#ifndef kcg_copy_struct__79397
#define kcg_copy_struct__79397(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__79397)))
#endif /* kcg_copy_struct__79397 */

#ifndef kcg_copy_array__76861
#define kcg_copy_array__76861(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76861)))
#endif /* kcg_copy_array__76861 */

#ifndef kcg_copy_array__76871
#define kcg_copy_array__76871(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76871)))
#endif /* kcg_copy_array__76871 */

#ifndef kcg_copy_array__76886
#define kcg_copy_array__76886(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76886)))
#endif /* kcg_copy_array__76886 */

#ifndef kcg_copy_array__76896
#define kcg_copy_array__76896(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76896)))
#endif /* kcg_copy_array__76896 */

#ifndef kcg_copy_array__76941
#define kcg_copy_array__76941(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76941)))
#endif /* kcg_copy_array__76941 */

#ifndef kcg_copy_array__76951
#define kcg_copy_array__76951(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76951)))
#endif /* kcg_copy_array__76951 */

#ifndef kcg_copy_array__76962
#define kcg_copy_array__76962(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76962)))
#endif /* kcg_copy_array__76962 */

#ifndef kcg_copy_array__76970
#define kcg_copy_array__76970(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__76970)))
#endif /* kcg_copy_array__76970 */

#ifndef kcg_copy_array__77026
#define kcg_copy_array__77026(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77026)))
#endif /* kcg_copy_array__77026 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__77040
#define kcg_copy_array__77040(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77040)))
#endif /* kcg_copy_array__77040 */

#ifndef kcg_copy_array__77059
#define kcg_copy_array__77059(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77059)))
#endif /* kcg_copy_array__77059 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__77197
#define kcg_copy_array__77197(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77197)))
#endif /* kcg_copy_array__77197 */

#ifndef kcg_copy_array__77221
#define kcg_copy_array__77221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77221)))
#endif /* kcg_copy_array__77221 */

#ifndef kcg_copy_array__77247
#define kcg_copy_array__77247(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77247)))
#endif /* kcg_copy_array__77247 */

#ifndef kcg_copy_array__77307
#define kcg_copy_array__77307(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77307)))
#endif /* kcg_copy_array__77307 */

#ifndef kcg_copy_array__77310
#define kcg_copy_array__77310(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77310)))
#endif /* kcg_copy_array__77310 */

#ifndef kcg_copy_array__77319
#define kcg_copy_array__77319(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77319)))
#endif /* kcg_copy_array__77319 */

#ifndef kcg_copy_array__77329
#define kcg_copy_array__77329(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77329)))
#endif /* kcg_copy_array__77329 */

#ifndef kcg_copy_array__77387
#define kcg_copy_array__77387(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77387)))
#endif /* kcg_copy_array__77387 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__77486
#define kcg_copy_array__77486(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77486)))
#endif /* kcg_copy_array__77486 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__77543
#define kcg_copy_array__77543(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77543)))
#endif /* kcg_copy_array__77543 */

#ifndef kcg_copy_array__77569
#define kcg_copy_array__77569(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77569)))
#endif /* kcg_copy_array__77569 */

#ifndef kcg_copy_array__77578
#define kcg_copy_array__77578(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77578)))
#endif /* kcg_copy_array__77578 */

#ifndef kcg_copy_array__77590
#define kcg_copy_array__77590(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77590)))
#endif /* kcg_copy_array__77590 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__77612
#define kcg_copy_array__77612(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77612)))
#endif /* kcg_copy_array__77612 */

#ifndef kcg_copy_array__77621
#define kcg_copy_array__77621(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77621)))
#endif /* kcg_copy_array__77621 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_33_11
#define kcg_copy_array_int_33_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33_11)))
#endif /* kcg_copy_array_int_33_11 */

#ifndef kcg_copy_array__77658
#define kcg_copy_array__77658(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77658)))
#endif /* kcg_copy_array__77658 */

#ifndef kcg_copy_array__77661
#define kcg_copy_array__77661(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77661)))
#endif /* kcg_copy_array__77661 */

#ifndef kcg_copy_array__77671
#define kcg_copy_array__77671(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77671)))
#endif /* kcg_copy_array__77671 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__77702
#define kcg_copy_array__77702(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77702)))
#endif /* kcg_copy_array__77702 */

#ifndef kcg_copy_array__77741
#define kcg_copy_array__77741(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77741)))
#endif /* kcg_copy_array__77741 */

#ifndef kcg_copy_array__77855
#define kcg_copy_array__77855(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77855)))
#endif /* kcg_copy_array__77855 */

#ifndef kcg_copy_array__77943
#define kcg_copy_array__77943(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77943)))
#endif /* kcg_copy_array__77943 */

#ifndef kcg_copy_array__77953
#define kcg_copy_array__77953(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77953)))
#endif /* kcg_copy_array__77953 */

#ifndef kcg_copy_array__77966
#define kcg_copy_array__77966(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77966)))
#endif /* kcg_copy_array__77966 */

#ifndef kcg_copy_array__77977
#define kcg_copy_array__77977(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77977)))
#endif /* kcg_copy_array__77977 */

#ifndef kcg_copy_array__77988
#define kcg_copy_array__77988(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__77988)))
#endif /* kcg_copy_array__77988 */

#ifndef kcg_copy_array__78011
#define kcg_copy_array__78011(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78011)))
#endif /* kcg_copy_array__78011 */

#ifndef kcg_copy_array__78041
#define kcg_copy_array__78041(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78041)))
#endif /* kcg_copy_array__78041 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array__78221
#define kcg_copy_array__78221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78221)))
#endif /* kcg_copy_array__78221 */

#ifndef kcg_copy_array__78238
#define kcg_copy_array__78238(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78238)))
#endif /* kcg_copy_array__78238 */

#ifndef kcg_copy_array__78260
#define kcg_copy_array__78260(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78260)))
#endif /* kcg_copy_array__78260 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array__78321
#define kcg_copy_array__78321(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78321)))
#endif /* kcg_copy_array__78321 */

#ifndef kcg_copy_array__78324
#define kcg_copy_array__78324(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78324)))
#endif /* kcg_copy_array__78324 */

#ifndef kcg_copy_array__78327
#define kcg_copy_array__78327(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78327)))
#endif /* kcg_copy_array__78327 */

#ifndef kcg_copy_array__78330
#define kcg_copy_array__78330(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78330)))
#endif /* kcg_copy_array__78330 */

#ifndef kcg_copy_array__78384
#define kcg_copy_array__78384(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78384)))
#endif /* kcg_copy_array__78384 */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_bool_256_46
#define kcg_copy_array_bool_256_46(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46)))
#endif /* kcg_copy_array_bool_256_46 */

#ifndef kcg_copy_array__78478
#define kcg_copy_array__78478(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78478)))
#endif /* kcg_copy_array__78478 */

#ifndef kcg_copy_array_char_9
#define kcg_copy_array_char_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_9)))
#endif /* kcg_copy_array_char_9 */

#ifndef kcg_copy_array_char_255
#define kcg_copy_array_char_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_255)))
#endif /* kcg_copy_array_char_255 */

#ifndef kcg_copy_array_real_3
#define kcg_copy_array_real_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_3)))
#endif /* kcg_copy_array_real_3 */

#ifndef kcg_copy_array_real_2
#define kcg_copy_array_real_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_2)))
#endif /* kcg_copy_array_real_2 */

#ifndef kcg_copy_array_bool_25
#define kcg_copy_array_bool_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_25)))
#endif /* kcg_copy_array_bool_25 */

#ifndef kcg_copy_array_real_25
#define kcg_copy_array_real_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_25)))
#endif /* kcg_copy_array_real_25 */

#ifndef kcg_copy_array__78699
#define kcg_copy_array__78699(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78699)))
#endif /* kcg_copy_array__78699 */

#ifndef kcg_copy_array__78710
#define kcg_copy_array__78710(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78710)))
#endif /* kcg_copy_array__78710 */

#ifndef kcg_copy_array__78754
#define kcg_copy_array__78754(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78754)))
#endif /* kcg_copy_array__78754 */

#ifndef kcg_copy_array_real_15
#define kcg_copy_array_real_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_15)))
#endif /* kcg_copy_array_real_15 */

#ifndef kcg_copy_array_real_15_10
#define kcg_copy_array_real_15_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_15_10)))
#endif /* kcg_copy_array_real_15_10 */

#ifndef kcg_copy_array_real_10
#define kcg_copy_array_real_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_10)))
#endif /* kcg_copy_array_real_10 */

#ifndef kcg_copy_array_bool_14
#define kcg_copy_array_bool_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_14)))
#endif /* kcg_copy_array_bool_14 */

#ifndef kcg_copy_array__78982
#define kcg_copy_array__78982(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78982)))
#endif /* kcg_copy_array__78982 */

#ifndef kcg_copy_array__78990
#define kcg_copy_array__78990(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78990)))
#endif /* kcg_copy_array__78990 */

#ifndef kcg_copy_array__78998
#define kcg_copy_array__78998(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__78998)))
#endif /* kcg_copy_array__78998 */

#ifndef kcg_copy_array__79339
#define kcg_copy_array__79339(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79339)))
#endif /* kcg_copy_array__79339 */

#ifndef kcg_copy_array__79388
#define kcg_copy_array__79388(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79388)))
#endif /* kcg_copy_array__79388 */

#ifndef kcg_copy_array_bool_20
#define kcg_copy_array_bool_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_20)))
#endif /* kcg_copy_array_bool_20 */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array__79408
#define kcg_copy_array__79408(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79408)))
#endif /* kcg_copy_array__79408 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array__79417
#define kcg_copy_array__79417(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79417)))
#endif /* kcg_copy_array__79417 */

#ifndef kcg_copy_array__79420
#define kcg_copy_array__79420(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79420)))
#endif /* kcg_copy_array__79420 */

#ifndef kcg_copy_array__79423
#define kcg_copy_array__79423(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79423)))
#endif /* kcg_copy_array__79423 */

#ifndef kcg_copy_array__79426
#define kcg_copy_array__79426(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79426)))
#endif /* kcg_copy_array__79426 */

#ifndef kcg_copy_array__79429
#define kcg_copy_array__79429(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79429)))
#endif /* kcg_copy_array__79429 */

#ifndef kcg_copy_array__79432
#define kcg_copy_array__79432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__79432)))
#endif /* kcg_copy_array__79432 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_real_24
#define kcg_copy_array_real_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_24)))
#endif /* kcg_copy_array_real_24 */

#ifndef kcg_copy_array_bool_24
#define kcg_copy_array_bool_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_24)))
#endif /* kcg_copy_array_bool_24 */

#ifndef kcg_copy_array__82215
#define kcg_copy_array__82215(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82215)))
#endif /* kcg_copy_array__82215 */

#ifndef kcg_copy_array__82684
#define kcg_copy_array__82684(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82684)))
#endif /* kcg_copy_array__82684 */

#ifndef kcg_copy_array__82691
#define kcg_copy_array__82691(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82691)))
#endif /* kcg_copy_array__82691 */

#ifndef kcg_copy_array__82748
#define kcg_copy_array__82748(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82748)))
#endif /* kcg_copy_array__82748 */

#ifndef kcg_copy_array__82782
#define kcg_copy_array__82782(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82782)))
#endif /* kcg_copy_array__82782 */

#ifndef kcg_comp_struct__76855
extern kcg_bool kcg_comp_struct__76855(
  struct__76855 *kcg_c1,
  struct__76855 *kcg_c2);
#endif /* kcg_comp_struct__76855 */

#ifndef kcg_comp_struct__76864
extern kcg_bool kcg_comp_struct__76864(
  struct__76864 *kcg_c1,
  struct__76864 *kcg_c2);
#endif /* kcg_comp_struct__76864 */

#ifndef kcg_comp_struct__76874
extern kcg_bool kcg_comp_struct__76874(
  struct__76874 *kcg_c1,
  struct__76874 *kcg_c2);
#endif /* kcg_comp_struct__76874 */

#ifndef kcg_comp_struct__76889
extern kcg_bool kcg_comp_struct__76889(
  struct__76889 *kcg_c1,
  struct__76889 *kcg_c2);
#endif /* kcg_comp_struct__76889 */

#ifndef kcg_comp_struct__76899
extern kcg_bool kcg_comp_struct__76899(
  struct__76899 *kcg_c1,
  struct__76899 *kcg_c2);
#endif /* kcg_comp_struct__76899 */

#ifndef kcg_comp_struct__76930
extern kcg_bool kcg_comp_struct__76930(
  struct__76930 *kcg_c1,
  struct__76930 *kcg_c2);
#endif /* kcg_comp_struct__76930 */

#ifndef kcg_comp_struct__76935
extern kcg_bool kcg_comp_struct__76935(
  struct__76935 *kcg_c1,
  struct__76935 *kcg_c2);
#endif /* kcg_comp_struct__76935 */

#ifndef kcg_comp_struct__76944
extern kcg_bool kcg_comp_struct__76944(
  struct__76944 *kcg_c1,
  struct__76944 *kcg_c2);
#endif /* kcg_comp_struct__76944 */

#ifndef kcg_comp_struct__76954
extern kcg_bool kcg_comp_struct__76954(
  struct__76954 *kcg_c1,
  struct__76954 *kcg_c2);
#endif /* kcg_comp_struct__76954 */

#ifndef kcg_comp_struct__76965
extern kcg_bool kcg_comp_struct__76965(
  struct__76965 *kcg_c1,
  struct__76965 *kcg_c2);
#endif /* kcg_comp_struct__76965 */

#ifndef kcg_comp_struct__76973
extern kcg_bool kcg_comp_struct__76973(
  struct__76973 *kcg_c1,
  struct__76973 *kcg_c2);
#endif /* kcg_comp_struct__76973 */

#ifndef kcg_comp_struct__77012
extern kcg_bool kcg_comp_struct__77012(
  struct__77012 *kcg_c1,
  struct__77012 *kcg_c2);
#endif /* kcg_comp_struct__77012 */

#ifndef kcg_comp_struct__77032
extern kcg_bool kcg_comp_struct__77032(
  struct__77032 *kcg_c1,
  struct__77032 *kcg_c2);
#endif /* kcg_comp_struct__77032 */

#ifndef kcg_comp_struct__77043
extern kcg_bool kcg_comp_struct__77043(
  struct__77043 *kcg_c1,
  struct__77043 *kcg_c2);
#endif /* kcg_comp_struct__77043 */

#ifndef kcg_comp_struct__77048
extern kcg_bool kcg_comp_struct__77048(
  struct__77048 *kcg_c1,
  struct__77048 *kcg_c2);
#endif /* kcg_comp_struct__77048 */

#ifndef kcg_comp_struct__77062
extern kcg_bool kcg_comp_struct__77062(
  struct__77062 *kcg_c1,
  struct__77062 *kcg_c2);
#endif /* kcg_comp_struct__77062 */

#ifndef kcg_comp_struct__77077
extern kcg_bool kcg_comp_struct__77077(
  struct__77077 *kcg_c1,
  struct__77077 *kcg_c2);
#endif /* kcg_comp_struct__77077 */

#ifndef kcg_comp_struct__77095
extern kcg_bool kcg_comp_struct__77095(
  struct__77095 *kcg_c1,
  struct__77095 *kcg_c2);
#endif /* kcg_comp_struct__77095 */

#ifndef kcg_comp_struct__77107
extern kcg_bool kcg_comp_struct__77107(
  struct__77107 *kcg_c1,
  struct__77107 *kcg_c2);
#endif /* kcg_comp_struct__77107 */

#ifndef kcg_comp_struct__77114
extern kcg_bool kcg_comp_struct__77114(
  struct__77114 *kcg_c1,
  struct__77114 *kcg_c2);
#endif /* kcg_comp_struct__77114 */

#ifndef kcg_comp_struct__77121
extern kcg_bool kcg_comp_struct__77121(
  struct__77121 *kcg_c1,
  struct__77121 *kcg_c2);
#endif /* kcg_comp_struct__77121 */

#ifndef kcg_comp_struct__77127
extern kcg_bool kcg_comp_struct__77127(
  struct__77127 *kcg_c1,
  struct__77127 *kcg_c2);
#endif /* kcg_comp_struct__77127 */

#ifndef kcg_comp_struct__77137
extern kcg_bool kcg_comp_struct__77137(
  struct__77137 *kcg_c1,
  struct__77137 *kcg_c2);
#endif /* kcg_comp_struct__77137 */

#ifndef kcg_comp_struct__77143
extern kcg_bool kcg_comp_struct__77143(
  struct__77143 *kcg_c1,
  struct__77143 *kcg_c2);
#endif /* kcg_comp_struct__77143 */

#ifndef kcg_comp_struct__77161
extern kcg_bool kcg_comp_struct__77161(
  struct__77161 *kcg_c1,
  struct__77161 *kcg_c2);
#endif /* kcg_comp_struct__77161 */

#ifndef kcg_comp_struct__77171
extern kcg_bool kcg_comp_struct__77171(
  struct__77171 *kcg_c1,
  struct__77171 *kcg_c2);
#endif /* kcg_comp_struct__77171 */

#ifndef kcg_comp_struct__77177
extern kcg_bool kcg_comp_struct__77177(
  struct__77177 *kcg_c1,
  struct__77177 *kcg_c2);
#endif /* kcg_comp_struct__77177 */

#ifndef kcg_comp_struct__77186
extern kcg_bool kcg_comp_struct__77186(
  struct__77186 *kcg_c1,
  struct__77186 *kcg_c2);
#endif /* kcg_comp_struct__77186 */

#ifndef kcg_comp_struct__77200
extern kcg_bool kcg_comp_struct__77200(
  struct__77200 *kcg_c1,
  struct__77200 *kcg_c2);
#endif /* kcg_comp_struct__77200 */

#ifndef kcg_comp_struct__77206
extern kcg_bool kcg_comp_struct__77206(
  struct__77206 *kcg_c1,
  struct__77206 *kcg_c2);
#endif /* kcg_comp_struct__77206 */

#ifndef kcg_comp_struct__77215
extern kcg_bool kcg_comp_struct__77215(
  struct__77215 *kcg_c1,
  struct__77215 *kcg_c2);
#endif /* kcg_comp_struct__77215 */

#ifndef kcg_comp_struct__77224
extern kcg_bool kcg_comp_struct__77224(
  struct__77224 *kcg_c1,
  struct__77224 *kcg_c2);
#endif /* kcg_comp_struct__77224 */

#ifndef kcg_comp_struct__77234
extern kcg_bool kcg_comp_struct__77234(
  struct__77234 *kcg_c1,
  struct__77234 *kcg_c2);
#endif /* kcg_comp_struct__77234 */

#ifndef kcg_comp_struct__77242
extern kcg_bool kcg_comp_struct__77242(
  struct__77242 *kcg_c1,
  struct__77242 *kcg_c2);
#endif /* kcg_comp_struct__77242 */

#ifndef kcg_comp_struct__77250
extern kcg_bool kcg_comp_struct__77250(
  struct__77250 *kcg_c1,
  struct__77250 *kcg_c2);
#endif /* kcg_comp_struct__77250 */

#ifndef kcg_comp_struct__77262
extern kcg_bool kcg_comp_struct__77262(
  struct__77262 *kcg_c1,
  struct__77262 *kcg_c2);
#endif /* kcg_comp_struct__77262 */

#ifndef kcg_comp_struct__77275
extern kcg_bool kcg_comp_struct__77275(
  struct__77275 *kcg_c1,
  struct__77275 *kcg_c2);
#endif /* kcg_comp_struct__77275 */

#ifndef kcg_comp_struct__77292
extern kcg_bool kcg_comp_struct__77292(
  struct__77292 *kcg_c1,
  struct__77292 *kcg_c2);
#endif /* kcg_comp_struct__77292 */

#ifndef kcg_comp_struct__77300
extern kcg_bool kcg_comp_struct__77300(
  struct__77300 *kcg_c1,
  struct__77300 *kcg_c2);
#endif /* kcg_comp_struct__77300 */

#ifndef kcg_comp_struct__77313
extern kcg_bool kcg_comp_struct__77313(
  struct__77313 *kcg_c1,
  struct__77313 *kcg_c2);
#endif /* kcg_comp_struct__77313 */

#ifndef kcg_comp_struct__77322
extern kcg_bool kcg_comp_struct__77322(
  struct__77322 *kcg_c1,
  struct__77322 *kcg_c2);
#endif /* kcg_comp_struct__77322 */

#ifndef kcg_comp_struct__77332
extern kcg_bool kcg_comp_struct__77332(
  struct__77332 *kcg_c1,
  struct__77332 *kcg_c2);
#endif /* kcg_comp_struct__77332 */

#ifndef kcg_comp_struct__77350
extern kcg_bool kcg_comp_struct__77350(
  struct__77350 *kcg_c1,
  struct__77350 *kcg_c2);
#endif /* kcg_comp_struct__77350 */

#ifndef kcg_comp_struct__77358
extern kcg_bool kcg_comp_struct__77358(
  struct__77358 *kcg_c1,
  struct__77358 *kcg_c2);
#endif /* kcg_comp_struct__77358 */

#ifndef kcg_comp_struct__77366
extern kcg_bool kcg_comp_struct__77366(
  struct__77366 *kcg_c1,
  struct__77366 *kcg_c2);
#endif /* kcg_comp_struct__77366 */

#ifndef kcg_comp_struct__77374
extern kcg_bool kcg_comp_struct__77374(
  struct__77374 *kcg_c1,
  struct__77374 *kcg_c2);
#endif /* kcg_comp_struct__77374 */

#ifndef kcg_comp_struct__77390
extern kcg_bool kcg_comp_struct__77390(
  struct__77390 *kcg_c1,
  struct__77390 *kcg_c2);
#endif /* kcg_comp_struct__77390 */

#ifndef kcg_comp_struct__77423
extern kcg_bool kcg_comp_struct__77423(
  struct__77423 *kcg_c1,
  struct__77423 *kcg_c2);
#endif /* kcg_comp_struct__77423 */

#ifndef kcg_comp_struct__77478
extern kcg_bool kcg_comp_struct__77478(
  struct__77478 *kcg_c1,
  struct__77478 *kcg_c2);
#endif /* kcg_comp_struct__77478 */

#ifndef kcg_comp_struct__77489
extern kcg_bool kcg_comp_struct__77489(
  struct__77489 *kcg_c1,
  struct__77489 *kcg_c2);
#endif /* kcg_comp_struct__77489 */

#ifndef kcg_comp_struct__77523
extern kcg_bool kcg_comp_struct__77523(
  struct__77523 *kcg_c1,
  struct__77523 *kcg_c2);
#endif /* kcg_comp_struct__77523 */

#ifndef kcg_comp_struct__77532
extern kcg_bool kcg_comp_struct__77532(
  struct__77532 *kcg_c1,
  struct__77532 *kcg_c2);
#endif /* kcg_comp_struct__77532 */

#ifndef kcg_comp_struct__77537
extern kcg_bool kcg_comp_struct__77537(
  struct__77537 *kcg_c1,
  struct__77537 *kcg_c2);
#endif /* kcg_comp_struct__77537 */

#ifndef kcg_comp_struct__77546
extern kcg_bool kcg_comp_struct__77546(
  struct__77546 *kcg_c1,
  struct__77546 *kcg_c2);
#endif /* kcg_comp_struct__77546 */

#ifndef kcg_comp_struct__77564
extern kcg_bool kcg_comp_struct__77564(
  struct__77564 *kcg_c1,
  struct__77564 *kcg_c2);
#endif /* kcg_comp_struct__77564 */

#ifndef kcg_comp_struct__77572
extern kcg_bool kcg_comp_struct__77572(
  struct__77572 *kcg_c1,
  struct__77572 *kcg_c2);
#endif /* kcg_comp_struct__77572 */

#ifndef kcg_comp_struct__77581
extern kcg_bool kcg_comp_struct__77581(
  struct__77581 *kcg_c1,
  struct__77581 *kcg_c2);
#endif /* kcg_comp_struct__77581 */

#ifndef kcg_comp_struct__77593
extern kcg_bool kcg_comp_struct__77593(
  struct__77593 *kcg_c1,
  struct__77593 *kcg_c2);
#endif /* kcg_comp_struct__77593 */

#ifndef kcg_comp_struct__77600
extern kcg_bool kcg_comp_struct__77600(
  struct__77600 *kcg_c1,
  struct__77600 *kcg_c2);
#endif /* kcg_comp_struct__77600 */

#ifndef kcg_comp_struct__77615
extern kcg_bool kcg_comp_struct__77615(
  struct__77615 *kcg_c1,
  struct__77615 *kcg_c2);
#endif /* kcg_comp_struct__77615 */

#ifndef kcg_comp_struct__77630
extern kcg_bool kcg_comp_struct__77630(
  struct__77630 *kcg_c1,
  struct__77630 *kcg_c2);
#endif /* kcg_comp_struct__77630 */

#ifndef kcg_comp_struct__77635
extern kcg_bool kcg_comp_struct__77635(
  struct__77635 *kcg_c1,
  struct__77635 *kcg_c2);
#endif /* kcg_comp_struct__77635 */

#ifndef kcg_comp_struct__77641
extern kcg_bool kcg_comp_struct__77641(
  struct__77641 *kcg_c1,
  struct__77641 *kcg_c2);
#endif /* kcg_comp_struct__77641 */

#ifndef kcg_comp_struct__77646
extern kcg_bool kcg_comp_struct__77646(
  struct__77646 *kcg_c1,
  struct__77646 *kcg_c2);
#endif /* kcg_comp_struct__77646 */

#ifndef kcg_comp_struct__77653
extern kcg_bool kcg_comp_struct__77653(
  struct__77653 *kcg_c1,
  struct__77653 *kcg_c2);
#endif /* kcg_comp_struct__77653 */

#ifndef kcg_comp_struct__77664
extern kcg_bool kcg_comp_struct__77664(
  struct__77664 *kcg_c1,
  struct__77664 *kcg_c2);
#endif /* kcg_comp_struct__77664 */

#ifndef kcg_comp_struct__77674
extern kcg_bool kcg_comp_struct__77674(
  struct__77674 *kcg_c1,
  struct__77674 *kcg_c2);
#endif /* kcg_comp_struct__77674 */

#ifndef kcg_comp_struct__77685
extern kcg_bool kcg_comp_struct__77685(
  struct__77685 *kcg_c1,
  struct__77685 *kcg_c2);
#endif /* kcg_comp_struct__77685 */

#ifndef kcg_comp_struct__77697
extern kcg_bool kcg_comp_struct__77697(
  struct__77697 *kcg_c1,
  struct__77697 *kcg_c2);
#endif /* kcg_comp_struct__77697 */

#ifndef kcg_comp_struct__77705
extern kcg_bool kcg_comp_struct__77705(
  struct__77705 *kcg_c1,
  struct__77705 *kcg_c2);
#endif /* kcg_comp_struct__77705 */

#ifndef kcg_comp_struct__77721
extern kcg_bool kcg_comp_struct__77721(
  struct__77721 *kcg_c1,
  struct__77721 *kcg_c2);
#endif /* kcg_comp_struct__77721 */

#ifndef kcg_comp_struct__77726
extern kcg_bool kcg_comp_struct__77726(
  struct__77726 *kcg_c1,
  struct__77726 *kcg_c2);
#endif /* kcg_comp_struct__77726 */

#ifndef kcg_comp_struct__77731
extern kcg_bool kcg_comp_struct__77731(
  struct__77731 *kcg_c1,
  struct__77731 *kcg_c2);
#endif /* kcg_comp_struct__77731 */

#ifndef kcg_comp_struct__77736
extern kcg_bool kcg_comp_struct__77736(
  struct__77736 *kcg_c1,
  struct__77736 *kcg_c2);
#endif /* kcg_comp_struct__77736 */

#ifndef kcg_comp_struct__77744
extern kcg_bool kcg_comp_struct__77744(
  struct__77744 *kcg_c1,
  struct__77744 *kcg_c2);
#endif /* kcg_comp_struct__77744 */

#ifndef kcg_comp_struct__77750
extern kcg_bool kcg_comp_struct__77750(
  struct__77750 *kcg_c1,
  struct__77750 *kcg_c2);
#endif /* kcg_comp_struct__77750 */

#ifndef kcg_comp_struct__77770
extern kcg_bool kcg_comp_struct__77770(
  struct__77770 *kcg_c1,
  struct__77770 *kcg_c2);
#endif /* kcg_comp_struct__77770 */

#ifndef kcg_comp_struct__77775
extern kcg_bool kcg_comp_struct__77775(
  struct__77775 *kcg_c1,
  struct__77775 *kcg_c2);
#endif /* kcg_comp_struct__77775 */

#ifndef kcg_comp_struct__77794
extern kcg_bool kcg_comp_struct__77794(
  struct__77794 *kcg_c1,
  struct__77794 *kcg_c2);
#endif /* kcg_comp_struct__77794 */

#ifndef kcg_comp_struct__77799
extern kcg_bool kcg_comp_struct__77799(
  struct__77799 *kcg_c1,
  struct__77799 *kcg_c2);
#endif /* kcg_comp_struct__77799 */

#ifndef kcg_comp_struct__77809
extern kcg_bool kcg_comp_struct__77809(
  struct__77809 *kcg_c1,
  struct__77809 *kcg_c2);
#endif /* kcg_comp_struct__77809 */

#ifndef kcg_comp_struct__77815
extern kcg_bool kcg_comp_struct__77815(
  struct__77815 *kcg_c1,
  struct__77815 *kcg_c2);
#endif /* kcg_comp_struct__77815 */

#ifndef kcg_comp_struct__77820
extern kcg_bool kcg_comp_struct__77820(
  struct__77820 *kcg_c1,
  struct__77820 *kcg_c2);
#endif /* kcg_comp_struct__77820 */

#ifndef kcg_comp_struct__77828
extern kcg_bool kcg_comp_struct__77828(
  struct__77828 *kcg_c1,
  struct__77828 *kcg_c2);
#endif /* kcg_comp_struct__77828 */

#ifndef kcg_comp_struct__77837
extern kcg_bool kcg_comp_struct__77837(
  struct__77837 *kcg_c1,
  struct__77837 *kcg_c2);
#endif /* kcg_comp_struct__77837 */

#ifndef kcg_comp_struct__77844
extern kcg_bool kcg_comp_struct__77844(
  struct__77844 *kcg_c1,
  struct__77844 *kcg_c2);
#endif /* kcg_comp_struct__77844 */

#ifndef kcg_comp_struct__77850
extern kcg_bool kcg_comp_struct__77850(
  struct__77850 *kcg_c1,
  struct__77850 *kcg_c2);
#endif /* kcg_comp_struct__77850 */

#ifndef kcg_comp_struct__77858
extern kcg_bool kcg_comp_struct__77858(
  struct__77858 *kcg_c1,
  struct__77858 *kcg_c2);
#endif /* kcg_comp_struct__77858 */

#ifndef kcg_comp_struct__77863
extern kcg_bool kcg_comp_struct__77863(
  struct__77863 *kcg_c1,
  struct__77863 *kcg_c2);
#endif /* kcg_comp_struct__77863 */

#ifndef kcg_comp_struct__77870
extern kcg_bool kcg_comp_struct__77870(
  struct__77870 *kcg_c1,
  struct__77870 *kcg_c2);
#endif /* kcg_comp_struct__77870 */

#ifndef kcg_comp_struct__77878
extern kcg_bool kcg_comp_struct__77878(
  struct__77878 *kcg_c1,
  struct__77878 *kcg_c2);
#endif /* kcg_comp_struct__77878 */

#ifndef kcg_comp_struct__77886
extern kcg_bool kcg_comp_struct__77886(
  struct__77886 *kcg_c1,
  struct__77886 *kcg_c2);
#endif /* kcg_comp_struct__77886 */

#ifndef kcg_comp_struct__77895
extern kcg_bool kcg_comp_struct__77895(
  struct__77895 *kcg_c1,
  struct__77895 *kcg_c2);
#endif /* kcg_comp_struct__77895 */

#ifndef kcg_comp_struct__77913
extern kcg_bool kcg_comp_struct__77913(
  struct__77913 *kcg_c1,
  struct__77913 *kcg_c2);
#endif /* kcg_comp_struct__77913 */

#ifndef kcg_comp_struct__77925
extern kcg_bool kcg_comp_struct__77925(
  struct__77925 *kcg_c1,
  struct__77925 *kcg_c2);
#endif /* kcg_comp_struct__77925 */

#ifndef kcg_comp_struct__77931
extern kcg_bool kcg_comp_struct__77931(
  struct__77931 *kcg_c1,
  struct__77931 *kcg_c2);
#endif /* kcg_comp_struct__77931 */

#ifndef kcg_comp_struct__77946
extern kcg_bool kcg_comp_struct__77946(
  struct__77946 *kcg_c1,
  struct__77946 *kcg_c2);
#endif /* kcg_comp_struct__77946 */

#ifndef kcg_comp_struct__77956
extern kcg_bool kcg_comp_struct__77956(
  struct__77956 *kcg_c1,
  struct__77956 *kcg_c2);
#endif /* kcg_comp_struct__77956 */

#ifndef kcg_comp_struct__77969
extern kcg_bool kcg_comp_struct__77969(
  struct__77969 *kcg_c1,
  struct__77969 *kcg_c2);
#endif /* kcg_comp_struct__77969 */

#ifndef kcg_comp_struct__77980
extern kcg_bool kcg_comp_struct__77980(
  struct__77980 *kcg_c1,
  struct__77980 *kcg_c2);
#endif /* kcg_comp_struct__77980 */

#ifndef kcg_comp_struct__77991
extern kcg_bool kcg_comp_struct__77991(
  struct__77991 *kcg_c1,
  struct__77991 *kcg_c2);
#endif /* kcg_comp_struct__77991 */

#ifndef kcg_comp_struct__78002
extern kcg_bool kcg_comp_struct__78002(
  struct__78002 *kcg_c1,
  struct__78002 *kcg_c2);
#endif /* kcg_comp_struct__78002 */

#ifndef kcg_comp_struct__78014
extern kcg_bool kcg_comp_struct__78014(
  struct__78014 *kcg_c1,
  struct__78014 *kcg_c2);
#endif /* kcg_comp_struct__78014 */

#ifndef kcg_comp_struct__78044
extern kcg_bool kcg_comp_struct__78044(
  struct__78044 *kcg_c1,
  struct__78044 *kcg_c2);
#endif /* kcg_comp_struct__78044 */

#ifndef kcg_comp_struct__78052
extern kcg_bool kcg_comp_struct__78052(
  struct__78052 *kcg_c1,
  struct__78052 *kcg_c2);
#endif /* kcg_comp_struct__78052 */

#ifndef kcg_comp_struct__78060
extern kcg_bool kcg_comp_struct__78060(
  struct__78060 *kcg_c1,
  struct__78060 *kcg_c2);
#endif /* kcg_comp_struct__78060 */

#ifndef kcg_comp_struct__78066
extern kcg_bool kcg_comp_struct__78066(
  struct__78066 *kcg_c1,
  struct__78066 *kcg_c2);
#endif /* kcg_comp_struct__78066 */

#ifndef kcg_comp_struct__78081
extern kcg_bool kcg_comp_struct__78081(
  struct__78081 *kcg_c1,
  struct__78081 *kcg_c2);
#endif /* kcg_comp_struct__78081 */

#ifndef kcg_comp_struct__78094
extern kcg_bool kcg_comp_struct__78094(
  struct__78094 *kcg_c1,
  struct__78094 *kcg_c2);
#endif /* kcg_comp_struct__78094 */

#ifndef kcg_comp_struct__78103
extern kcg_bool kcg_comp_struct__78103(
  struct__78103 *kcg_c1,
  struct__78103 *kcg_c2);
#endif /* kcg_comp_struct__78103 */

#ifndef kcg_comp_struct__78108
extern kcg_bool kcg_comp_struct__78108(
  struct__78108 *kcg_c1,
  struct__78108 *kcg_c2);
#endif /* kcg_comp_struct__78108 */

#ifndef kcg_comp_struct__78118
extern kcg_bool kcg_comp_struct__78118(
  struct__78118 *kcg_c1,
  struct__78118 *kcg_c2);
#endif /* kcg_comp_struct__78118 */

#ifndef kcg_comp_struct__78130
extern kcg_bool kcg_comp_struct__78130(
  struct__78130 *kcg_c1,
  struct__78130 *kcg_c2);
#endif /* kcg_comp_struct__78130 */

#ifndef kcg_comp_struct__78136
extern kcg_bool kcg_comp_struct__78136(
  struct__78136 *kcg_c1,
  struct__78136 *kcg_c2);
#endif /* kcg_comp_struct__78136 */

#ifndef kcg_comp_struct__78141
extern kcg_bool kcg_comp_struct__78141(
  struct__78141 *kcg_c1,
  struct__78141 *kcg_c2);
#endif /* kcg_comp_struct__78141 */

#ifndef kcg_comp_struct__78147
extern kcg_bool kcg_comp_struct__78147(
  struct__78147 *kcg_c1,
  struct__78147 *kcg_c2);
#endif /* kcg_comp_struct__78147 */

#ifndef kcg_comp_struct__78153
extern kcg_bool kcg_comp_struct__78153(
  struct__78153 *kcg_c1,
  struct__78153 *kcg_c2);
#endif /* kcg_comp_struct__78153 */

#ifndef kcg_comp_struct__78158
extern kcg_bool kcg_comp_struct__78158(
  struct__78158 *kcg_c1,
  struct__78158 *kcg_c2);
#endif /* kcg_comp_struct__78158 */

#ifndef kcg_comp_struct__78167
extern kcg_bool kcg_comp_struct__78167(
  struct__78167 *kcg_c1,
  struct__78167 *kcg_c2);
#endif /* kcg_comp_struct__78167 */

#ifndef kcg_comp_struct__78178
extern kcg_bool kcg_comp_struct__78178(
  struct__78178 *kcg_c1,
  struct__78178 *kcg_c2);
#endif /* kcg_comp_struct__78178 */

#ifndef kcg_comp_struct__78187
extern kcg_bool kcg_comp_struct__78187(
  struct__78187 *kcg_c1,
  struct__78187 *kcg_c2);
#endif /* kcg_comp_struct__78187 */

#ifndef kcg_comp_struct__78194
extern kcg_bool kcg_comp_struct__78194(
  struct__78194 *kcg_c1,
  struct__78194 *kcg_c2);
#endif /* kcg_comp_struct__78194 */

#ifndef kcg_comp_struct__78199
extern kcg_bool kcg_comp_struct__78199(
  struct__78199 *kcg_c1,
  struct__78199 *kcg_c2);
#endif /* kcg_comp_struct__78199 */

#ifndef kcg_comp_struct__78204
extern kcg_bool kcg_comp_struct__78204(
  struct__78204 *kcg_c1,
  struct__78204 *kcg_c2);
#endif /* kcg_comp_struct__78204 */

#ifndef kcg_comp_struct__78210
extern kcg_bool kcg_comp_struct__78210(
  struct__78210 *kcg_c1,
  struct__78210 *kcg_c2);
#endif /* kcg_comp_struct__78210 */

#ifndef kcg_comp_struct__78215
extern kcg_bool kcg_comp_struct__78215(
  struct__78215 *kcg_c1,
  struct__78215 *kcg_c2);
#endif /* kcg_comp_struct__78215 */

#ifndef kcg_comp_struct__78224
extern kcg_bool kcg_comp_struct__78224(
  struct__78224 *kcg_c1,
  struct__78224 *kcg_c2);
#endif /* kcg_comp_struct__78224 */

#ifndef kcg_comp_struct__78228
extern kcg_bool kcg_comp_struct__78228(
  struct__78228 *kcg_c1,
  struct__78228 *kcg_c2);
#endif /* kcg_comp_struct__78228 */

#ifndef kcg_comp_struct__78233
extern kcg_bool kcg_comp_struct__78233(
  struct__78233 *kcg_c1,
  struct__78233 *kcg_c2);
#endif /* kcg_comp_struct__78233 */

#ifndef kcg_comp_struct__78241
extern kcg_bool kcg_comp_struct__78241(
  struct__78241 *kcg_c1,
  struct__78241 *kcg_c2);
#endif /* kcg_comp_struct__78241 */

#ifndef kcg_comp_struct__78254
extern kcg_bool kcg_comp_struct__78254(
  struct__78254 *kcg_c1,
  struct__78254 *kcg_c2);
#endif /* kcg_comp_struct__78254 */

#ifndef kcg_comp_struct__78263
extern kcg_bool kcg_comp_struct__78263(
  struct__78263 *kcg_c1,
  struct__78263 *kcg_c2);
#endif /* kcg_comp_struct__78263 */

#ifndef kcg_comp_struct__78277
extern kcg_bool kcg_comp_struct__78277(
  struct__78277 *kcg_c1,
  struct__78277 *kcg_c2);
#endif /* kcg_comp_struct__78277 */

#ifndef kcg_comp_struct__78285
extern kcg_bool kcg_comp_struct__78285(
  struct__78285 *kcg_c1,
  struct__78285 *kcg_c2);
#endif /* kcg_comp_struct__78285 */

#ifndef kcg_comp_struct__78298
extern kcg_bool kcg_comp_struct__78298(
  struct__78298 *kcg_c1,
  struct__78298 *kcg_c2);
#endif /* kcg_comp_struct__78298 */

#ifndef kcg_comp_struct__78303
extern kcg_bool kcg_comp_struct__78303(
  struct__78303 *kcg_c1,
  struct__78303 *kcg_c2);
#endif /* kcg_comp_struct__78303 */

#ifndef kcg_comp_struct__78312
extern kcg_bool kcg_comp_struct__78312(
  struct__78312 *kcg_c1,
  struct__78312 *kcg_c2);
#endif /* kcg_comp_struct__78312 */

#ifndef kcg_comp_struct__78333
extern kcg_bool kcg_comp_struct__78333(
  struct__78333 *kcg_c1,
  struct__78333 *kcg_c2);
#endif /* kcg_comp_struct__78333 */

#ifndef kcg_comp_struct__78344
extern kcg_bool kcg_comp_struct__78344(
  struct__78344 *kcg_c1,
  struct__78344 *kcg_c2);
#endif /* kcg_comp_struct__78344 */

#ifndef kcg_comp_struct__78350
extern kcg_bool kcg_comp_struct__78350(
  struct__78350 *kcg_c1,
  struct__78350 *kcg_c2);
#endif /* kcg_comp_struct__78350 */

#ifndef kcg_comp_struct__78360
extern kcg_bool kcg_comp_struct__78360(
  struct__78360 *kcg_c1,
  struct__78360 *kcg_c2);
#endif /* kcg_comp_struct__78360 */

#ifndef kcg_comp_struct__78369
extern kcg_bool kcg_comp_struct__78369(
  struct__78369 *kcg_c1,
  struct__78369 *kcg_c2);
#endif /* kcg_comp_struct__78369 */

#ifndef kcg_comp_struct__78377
extern kcg_bool kcg_comp_struct__78377(
  struct__78377 *kcg_c1,
  struct__78377 *kcg_c2);
#endif /* kcg_comp_struct__78377 */

#ifndef kcg_comp_struct__78387
extern kcg_bool kcg_comp_struct__78387(
  struct__78387 *kcg_c1,
  struct__78387 *kcg_c2);
#endif /* kcg_comp_struct__78387 */

#ifndef kcg_comp_struct__78396
extern kcg_bool kcg_comp_struct__78396(
  struct__78396 *kcg_c1,
  struct__78396 *kcg_c2);
#endif /* kcg_comp_struct__78396 */

#ifndef kcg_comp_struct__78403
extern kcg_bool kcg_comp_struct__78403(
  struct__78403 *kcg_c1,
  struct__78403 *kcg_c2);
#endif /* kcg_comp_struct__78403 */

#ifndef kcg_comp_struct__78411
extern kcg_bool kcg_comp_struct__78411(
  struct__78411 *kcg_c1,
  struct__78411 *kcg_c2);
#endif /* kcg_comp_struct__78411 */

#ifndef kcg_comp_struct__78422
extern kcg_bool kcg_comp_struct__78422(
  struct__78422 *kcg_c1,
  struct__78422 *kcg_c2);
#endif /* kcg_comp_struct__78422 */

#ifndef kcg_comp_struct__78434
extern kcg_bool kcg_comp_struct__78434(
  struct__78434 *kcg_c1,
  struct__78434 *kcg_c2);
#endif /* kcg_comp_struct__78434 */

#ifndef kcg_comp_struct__78440
extern kcg_bool kcg_comp_struct__78440(
  struct__78440 *kcg_c1,
  struct__78440 *kcg_c2);
#endif /* kcg_comp_struct__78440 */

#ifndef kcg_comp_struct__78446
extern kcg_bool kcg_comp_struct__78446(
  struct__78446 *kcg_c1,
  struct__78446 *kcg_c2);
#endif /* kcg_comp_struct__78446 */

#ifndef kcg_comp_struct__78452
extern kcg_bool kcg_comp_struct__78452(
  struct__78452 *kcg_c1,
  struct__78452 *kcg_c2);
#endif /* kcg_comp_struct__78452 */

#ifndef kcg_comp_struct__78457
extern kcg_bool kcg_comp_struct__78457(
  struct__78457 *kcg_c1,
  struct__78457 *kcg_c2);
#endif /* kcg_comp_struct__78457 */

#ifndef kcg_comp_struct__78467
extern kcg_bool kcg_comp_struct__78467(
  struct__78467 *kcg_c1,
  struct__78467 *kcg_c2);
#endif /* kcg_comp_struct__78467 */

#ifndef kcg_comp_struct__78481
extern kcg_bool kcg_comp_struct__78481(
  struct__78481 *kcg_c1,
  struct__78481 *kcg_c2);
#endif /* kcg_comp_struct__78481 */

#ifndef kcg_comp_struct__78487
extern kcg_bool kcg_comp_struct__78487(
  struct__78487 *kcg_c1,
  struct__78487 *kcg_c2);
#endif /* kcg_comp_struct__78487 */

#ifndef kcg_comp_struct__78494
extern kcg_bool kcg_comp_struct__78494(
  struct__78494 *kcg_c1,
  struct__78494 *kcg_c2);
#endif /* kcg_comp_struct__78494 */

#ifndef kcg_comp_struct__78501
extern kcg_bool kcg_comp_struct__78501(
  struct__78501 *kcg_c1,
  struct__78501 *kcg_c2);
#endif /* kcg_comp_struct__78501 */

#ifndef kcg_comp_struct__78507
extern kcg_bool kcg_comp_struct__78507(
  struct__78507 *kcg_c1,
  struct__78507 *kcg_c2);
#endif /* kcg_comp_struct__78507 */

#ifndef kcg_comp_struct__78516
extern kcg_bool kcg_comp_struct__78516(
  struct__78516 *kcg_c1,
  struct__78516 *kcg_c2);
#endif /* kcg_comp_struct__78516 */

#ifndef kcg_comp_struct__78522
extern kcg_bool kcg_comp_struct__78522(
  struct__78522 *kcg_c1,
  struct__78522 *kcg_c2);
#endif /* kcg_comp_struct__78522 */

#ifndef kcg_comp_struct__78527
extern kcg_bool kcg_comp_struct__78527(
  struct__78527 *kcg_c1,
  struct__78527 *kcg_c2);
#endif /* kcg_comp_struct__78527 */

#ifndef kcg_comp_struct__78537
extern kcg_bool kcg_comp_struct__78537(
  struct__78537 *kcg_c1,
  struct__78537 *kcg_c2);
#endif /* kcg_comp_struct__78537 */

#ifndef kcg_comp_struct__78547
extern kcg_bool kcg_comp_struct__78547(
  struct__78547 *kcg_c1,
  struct__78547 *kcg_c2);
#endif /* kcg_comp_struct__78547 */

#ifndef kcg_comp_struct__78563
extern kcg_bool kcg_comp_struct__78563(
  struct__78563 *kcg_c1,
  struct__78563 *kcg_c2);
#endif /* kcg_comp_struct__78563 */

#ifndef kcg_comp_struct__78575
extern kcg_bool kcg_comp_struct__78575(
  struct__78575 *kcg_c1,
  struct__78575 *kcg_c2);
#endif /* kcg_comp_struct__78575 */

#ifndef kcg_comp_struct__78582
extern kcg_bool kcg_comp_struct__78582(
  struct__78582 *kcg_c1,
  struct__78582 *kcg_c2);
#endif /* kcg_comp_struct__78582 */

#ifndef kcg_comp_struct__78615
extern kcg_bool kcg_comp_struct__78615(
  struct__78615 *kcg_c1,
  struct__78615 *kcg_c2);
#endif /* kcg_comp_struct__78615 */

#ifndef kcg_comp_struct__78620
extern kcg_bool kcg_comp_struct__78620(
  struct__78620 *kcg_c1,
  struct__78620 *kcg_c2);
#endif /* kcg_comp_struct__78620 */

#ifndef kcg_comp_struct__78625
extern kcg_bool kcg_comp_struct__78625(
  struct__78625 *kcg_c1,
  struct__78625 *kcg_c2);
#endif /* kcg_comp_struct__78625 */

#ifndef kcg_comp_struct__78634
extern kcg_bool kcg_comp_struct__78634(
  struct__78634 *kcg_c1,
  struct__78634 *kcg_c2);
#endif /* kcg_comp_struct__78634 */

#ifndef kcg_comp_struct__78641
extern kcg_bool kcg_comp_struct__78641(
  struct__78641 *kcg_c1,
  struct__78641 *kcg_c2);
#endif /* kcg_comp_struct__78641 */

#ifndef kcg_comp_struct__78648
extern kcg_bool kcg_comp_struct__78648(
  struct__78648 *kcg_c1,
  struct__78648 *kcg_c2);
#endif /* kcg_comp_struct__78648 */

#ifndef kcg_comp_struct__78654
extern kcg_bool kcg_comp_struct__78654(
  struct__78654 *kcg_c1,
  struct__78654 *kcg_c2);
#endif /* kcg_comp_struct__78654 */

#ifndef kcg_comp_struct__78664
extern kcg_bool kcg_comp_struct__78664(
  struct__78664 *kcg_c1,
  struct__78664 *kcg_c2);
#endif /* kcg_comp_struct__78664 */

#ifndef kcg_comp_struct__78676
extern kcg_bool kcg_comp_struct__78676(
  struct__78676 *kcg_c1,
  struct__78676 *kcg_c2);
#endif /* kcg_comp_struct__78676 */

#ifndef kcg_comp_struct__78683
extern kcg_bool kcg_comp_struct__78683(
  struct__78683 *kcg_c1,
  struct__78683 *kcg_c2);
#endif /* kcg_comp_struct__78683 */

#ifndef kcg_comp_struct__78693
extern kcg_bool kcg_comp_struct__78693(
  struct__78693 *kcg_c1,
  struct__78693 *kcg_c2);
#endif /* kcg_comp_struct__78693 */

#ifndef kcg_comp_struct__78702
extern kcg_bool kcg_comp_struct__78702(
  struct__78702 *kcg_c1,
  struct__78702 *kcg_c2);
#endif /* kcg_comp_struct__78702 */

#ifndef kcg_comp_struct__78713
extern kcg_bool kcg_comp_struct__78713(
  struct__78713 *kcg_c1,
  struct__78713 *kcg_c2);
#endif /* kcg_comp_struct__78713 */

#ifndef kcg_comp_struct__78720
extern kcg_bool kcg_comp_struct__78720(
  struct__78720 *kcg_c1,
  struct__78720 *kcg_c2);
#endif /* kcg_comp_struct__78720 */

#ifndef kcg_comp_struct__78730
extern kcg_bool kcg_comp_struct__78730(
  struct__78730 *kcg_c1,
  struct__78730 *kcg_c2);
#endif /* kcg_comp_struct__78730 */

#ifndef kcg_comp_struct__78735
extern kcg_bool kcg_comp_struct__78735(
  struct__78735 *kcg_c1,
  struct__78735 *kcg_c2);
#endif /* kcg_comp_struct__78735 */

#ifndef kcg_comp_struct__78748
extern kcg_bool kcg_comp_struct__78748(
  struct__78748 *kcg_c1,
  struct__78748 *kcg_c2);
#endif /* kcg_comp_struct__78748 */

#ifndef kcg_comp_struct__78757
extern kcg_bool kcg_comp_struct__78757(
  struct__78757 *kcg_c1,
  struct__78757 *kcg_c2);
#endif /* kcg_comp_struct__78757 */

#ifndef kcg_comp_struct__78773
extern kcg_bool kcg_comp_struct__78773(
  struct__78773 *kcg_c1,
  struct__78773 *kcg_c2);
#endif /* kcg_comp_struct__78773 */

#ifndef kcg_comp_struct__78796
extern kcg_bool kcg_comp_struct__78796(
  struct__78796 *kcg_c1,
  struct__78796 *kcg_c2);
#endif /* kcg_comp_struct__78796 */

#ifndef kcg_comp_struct__78810
extern kcg_bool kcg_comp_struct__78810(
  struct__78810 *kcg_c1,
  struct__78810 *kcg_c2);
#endif /* kcg_comp_struct__78810 */

#ifndef kcg_comp_struct__78816
extern kcg_bool kcg_comp_struct__78816(
  struct__78816 *kcg_c1,
  struct__78816 *kcg_c2);
#endif /* kcg_comp_struct__78816 */

#ifndef kcg_comp_struct__78824
extern kcg_bool kcg_comp_struct__78824(
  struct__78824 *kcg_c1,
  struct__78824 *kcg_c2);
#endif /* kcg_comp_struct__78824 */

#ifndef kcg_comp_struct__78830
extern kcg_bool kcg_comp_struct__78830(
  struct__78830 *kcg_c1,
  struct__78830 *kcg_c2);
#endif /* kcg_comp_struct__78830 */

#ifndef kcg_comp_struct__78857
extern kcg_bool kcg_comp_struct__78857(
  struct__78857 *kcg_c1,
  struct__78857 *kcg_c2);
#endif /* kcg_comp_struct__78857 */

#ifndef kcg_comp_struct__78870
extern kcg_bool kcg_comp_struct__78870(
  struct__78870 *kcg_c1,
  struct__78870 *kcg_c2);
#endif /* kcg_comp_struct__78870 */

#ifndef kcg_comp_struct__78890
extern kcg_bool kcg_comp_struct__78890(
  struct__78890 *kcg_c1,
  struct__78890 *kcg_c2);
#endif /* kcg_comp_struct__78890 */

#ifndef kcg_comp_struct__78897
extern kcg_bool kcg_comp_struct__78897(
  struct__78897 *kcg_c1,
  struct__78897 *kcg_c2);
#endif /* kcg_comp_struct__78897 */

#ifndef kcg_comp_struct__78904
extern kcg_bool kcg_comp_struct__78904(
  struct__78904 *kcg_c1,
  struct__78904 *kcg_c2);
#endif /* kcg_comp_struct__78904 */

#ifndef kcg_comp_struct__78910
extern kcg_bool kcg_comp_struct__78910(
  struct__78910 *kcg_c1,
  struct__78910 *kcg_c2);
#endif /* kcg_comp_struct__78910 */

#ifndef kcg_comp_struct__78917
extern kcg_bool kcg_comp_struct__78917(
  struct__78917 *kcg_c1,
  struct__78917 *kcg_c2);
#endif /* kcg_comp_struct__78917 */

#ifndef kcg_comp_struct__78925
extern kcg_bool kcg_comp_struct__78925(
  struct__78925 *kcg_c1,
  struct__78925 *kcg_c2);
#endif /* kcg_comp_struct__78925 */

#ifndef kcg_comp_struct__78931
extern kcg_bool kcg_comp_struct__78931(
  struct__78931 *kcg_c1,
  struct__78931 *kcg_c2);
#endif /* kcg_comp_struct__78931 */

#ifndef kcg_comp_struct__78943
extern kcg_bool kcg_comp_struct__78943(
  struct__78943 *kcg_c1,
  struct__78943 *kcg_c2);
#endif /* kcg_comp_struct__78943 */

#ifndef kcg_comp_struct__78949
extern kcg_bool kcg_comp_struct__78949(
  struct__78949 *kcg_c1,
  struct__78949 *kcg_c2);
#endif /* kcg_comp_struct__78949 */

#ifndef kcg_comp_struct__78955
extern kcg_bool kcg_comp_struct__78955(
  struct__78955 *kcg_c1,
  struct__78955 *kcg_c2);
#endif /* kcg_comp_struct__78955 */

#ifndef kcg_comp_struct__78961
extern kcg_bool kcg_comp_struct__78961(
  struct__78961 *kcg_c1,
  struct__78961 *kcg_c2);
#endif /* kcg_comp_struct__78961 */

#ifndef kcg_comp_struct__78967
extern kcg_bool kcg_comp_struct__78967(
  struct__78967 *kcg_c1,
  struct__78967 *kcg_c2);
#endif /* kcg_comp_struct__78967 */

#ifndef kcg_comp_struct__78977
extern kcg_bool kcg_comp_struct__78977(
  struct__78977 *kcg_c1,
  struct__78977 *kcg_c2);
#endif /* kcg_comp_struct__78977 */

#ifndef kcg_comp_struct__78985
extern kcg_bool kcg_comp_struct__78985(
  struct__78985 *kcg_c1,
  struct__78985 *kcg_c2);
#endif /* kcg_comp_struct__78985 */

#ifndef kcg_comp_struct__78993
extern kcg_bool kcg_comp_struct__78993(
  struct__78993 *kcg_c1,
  struct__78993 *kcg_c2);
#endif /* kcg_comp_struct__78993 */

#ifndef kcg_comp_struct__79001
extern kcg_bool kcg_comp_struct__79001(
  struct__79001 *kcg_c1,
  struct__79001 *kcg_c2);
#endif /* kcg_comp_struct__79001 */

#ifndef kcg_comp_struct__79006
extern kcg_bool kcg_comp_struct__79006(
  struct__79006 *kcg_c1,
  struct__79006 *kcg_c2);
#endif /* kcg_comp_struct__79006 */

#ifndef kcg_comp_struct__79014
extern kcg_bool kcg_comp_struct__79014(
  struct__79014 *kcg_c1,
  struct__79014 *kcg_c2);
#endif /* kcg_comp_struct__79014 */

#ifndef kcg_comp_struct__79025
extern kcg_bool kcg_comp_struct__79025(
  struct__79025 *kcg_c1,
  struct__79025 *kcg_c2);
#endif /* kcg_comp_struct__79025 */

#ifndef kcg_comp_struct__79032
extern kcg_bool kcg_comp_struct__79032(
  struct__79032 *kcg_c1,
  struct__79032 *kcg_c2);
#endif /* kcg_comp_struct__79032 */

#ifndef kcg_comp_struct__79040
extern kcg_bool kcg_comp_struct__79040(
  struct__79040 *kcg_c1,
  struct__79040 *kcg_c2);
#endif /* kcg_comp_struct__79040 */

#ifndef kcg_comp_struct__79049
extern kcg_bool kcg_comp_struct__79049(
  struct__79049 *kcg_c1,
  struct__79049 *kcg_c2);
#endif /* kcg_comp_struct__79049 */

#ifndef kcg_comp_struct__79061
extern kcg_bool kcg_comp_struct__79061(
  struct__79061 *kcg_c1,
  struct__79061 *kcg_c2);
#endif /* kcg_comp_struct__79061 */

#ifndef kcg_comp_struct__79094
extern kcg_bool kcg_comp_struct__79094(
  struct__79094 *kcg_c1,
  struct__79094 *kcg_c2);
#endif /* kcg_comp_struct__79094 */

#ifndef kcg_comp_struct__79100
extern kcg_bool kcg_comp_struct__79100(
  struct__79100 *kcg_c1,
  struct__79100 *kcg_c2);
#endif /* kcg_comp_struct__79100 */

#ifndef kcg_comp_struct__79126
extern kcg_bool kcg_comp_struct__79126(
  struct__79126 *kcg_c1,
  struct__79126 *kcg_c2);
#endif /* kcg_comp_struct__79126 */

#ifndef kcg_comp_struct__79146
extern kcg_bool kcg_comp_struct__79146(
  struct__79146 *kcg_c1,
  struct__79146 *kcg_c2);
#endif /* kcg_comp_struct__79146 */

#ifndef kcg_comp_struct__79152
extern kcg_bool kcg_comp_struct__79152(
  struct__79152 *kcg_c1,
  struct__79152 *kcg_c2);
#endif /* kcg_comp_struct__79152 */

#ifndef kcg_comp_struct__79166
extern kcg_bool kcg_comp_struct__79166(
  struct__79166 *kcg_c1,
  struct__79166 *kcg_c2);
#endif /* kcg_comp_struct__79166 */

#ifndef kcg_comp_struct__79172
extern kcg_bool kcg_comp_struct__79172(
  struct__79172 *kcg_c1,
  struct__79172 *kcg_c2);
#endif /* kcg_comp_struct__79172 */

#ifndef kcg_comp_struct__79177
extern kcg_bool kcg_comp_struct__79177(
  struct__79177 *kcg_c1,
  struct__79177 *kcg_c2);
#endif /* kcg_comp_struct__79177 */

#ifndef kcg_comp_struct__79184
extern kcg_bool kcg_comp_struct__79184(
  struct__79184 *kcg_c1,
  struct__79184 *kcg_c2);
#endif /* kcg_comp_struct__79184 */

#ifndef kcg_comp_struct__79190
extern kcg_bool kcg_comp_struct__79190(
  struct__79190 *kcg_c1,
  struct__79190 *kcg_c2);
#endif /* kcg_comp_struct__79190 */

#ifndef kcg_comp_struct__79214
extern kcg_bool kcg_comp_struct__79214(
  struct__79214 *kcg_c1,
  struct__79214 *kcg_c2);
#endif /* kcg_comp_struct__79214 */

#ifndef kcg_comp_struct__79220
extern kcg_bool kcg_comp_struct__79220(
  struct__79220 *kcg_c1,
  struct__79220 *kcg_c2);
#endif /* kcg_comp_struct__79220 */

#ifndef kcg_comp_struct__79229
extern kcg_bool kcg_comp_struct__79229(
  struct__79229 *kcg_c1,
  struct__79229 *kcg_c2);
#endif /* kcg_comp_struct__79229 */

#ifndef kcg_comp_struct__79235
extern kcg_bool kcg_comp_struct__79235(
  struct__79235 *kcg_c1,
  struct__79235 *kcg_c2);
#endif /* kcg_comp_struct__79235 */

#ifndef kcg_comp_struct__79241
extern kcg_bool kcg_comp_struct__79241(
  struct__79241 *kcg_c1,
  struct__79241 *kcg_c2);
#endif /* kcg_comp_struct__79241 */

#ifndef kcg_comp_struct__79246
extern kcg_bool kcg_comp_struct__79246(
  struct__79246 *kcg_c1,
  struct__79246 *kcg_c2);
#endif /* kcg_comp_struct__79246 */

#ifndef kcg_comp_struct__79255
extern kcg_bool kcg_comp_struct__79255(
  struct__79255 *kcg_c1,
  struct__79255 *kcg_c2);
#endif /* kcg_comp_struct__79255 */

#ifndef kcg_comp_struct__79262
extern kcg_bool kcg_comp_struct__79262(
  struct__79262 *kcg_c1,
  struct__79262 *kcg_c2);
#endif /* kcg_comp_struct__79262 */

#ifndef kcg_comp_struct__79271
extern kcg_bool kcg_comp_struct__79271(
  struct__79271 *kcg_c1,
  struct__79271 *kcg_c2);
#endif /* kcg_comp_struct__79271 */

#ifndef kcg_comp_struct__79277
extern kcg_bool kcg_comp_struct__79277(
  struct__79277 *kcg_c1,
  struct__79277 *kcg_c2);
#endif /* kcg_comp_struct__79277 */

#ifndef kcg_comp_struct__79282
extern kcg_bool kcg_comp_struct__79282(
  struct__79282 *kcg_c1,
  struct__79282 *kcg_c2);
#endif /* kcg_comp_struct__79282 */

#ifndef kcg_comp_struct__79288
extern kcg_bool kcg_comp_struct__79288(
  struct__79288 *kcg_c1,
  struct__79288 *kcg_c2);
#endif /* kcg_comp_struct__79288 */

#ifndef kcg_comp_struct__79293
extern kcg_bool kcg_comp_struct__79293(
  struct__79293 *kcg_c1,
  struct__79293 *kcg_c2);
#endif /* kcg_comp_struct__79293 */

#ifndef kcg_comp_struct__79298
extern kcg_bool kcg_comp_struct__79298(
  struct__79298 *kcg_c1,
  struct__79298 *kcg_c2);
#endif /* kcg_comp_struct__79298 */

#ifndef kcg_comp_struct__79304
extern kcg_bool kcg_comp_struct__79304(
  struct__79304 *kcg_c1,
  struct__79304 *kcg_c2);
#endif /* kcg_comp_struct__79304 */

#ifndef kcg_comp_struct__79312
extern kcg_bool kcg_comp_struct__79312(
  struct__79312 *kcg_c1,
  struct__79312 *kcg_c2);
#endif /* kcg_comp_struct__79312 */

#ifndef kcg_comp_struct__79319
extern kcg_bool kcg_comp_struct__79319(
  struct__79319 *kcg_c1,
  struct__79319 *kcg_c2);
#endif /* kcg_comp_struct__79319 */

#ifndef kcg_comp_struct__79324
extern kcg_bool kcg_comp_struct__79324(
  struct__79324 *kcg_c1,
  struct__79324 *kcg_c2);
#endif /* kcg_comp_struct__79324 */

#ifndef kcg_comp_struct__79334
extern kcg_bool kcg_comp_struct__79334(
  struct__79334 *kcg_c1,
  struct__79334 *kcg_c2);
#endif /* kcg_comp_struct__79334 */

#ifndef kcg_comp_struct__79342
extern kcg_bool kcg_comp_struct__79342(
  struct__79342 *kcg_c1,
  struct__79342 *kcg_c2);
#endif /* kcg_comp_struct__79342 */

#ifndef kcg_comp_struct__79359
extern kcg_bool kcg_comp_struct__79359(
  struct__79359 *kcg_c1,
  struct__79359 *kcg_c2);
#endif /* kcg_comp_struct__79359 */

#ifndef kcg_comp_struct__79371
extern kcg_bool kcg_comp_struct__79371(
  struct__79371 *kcg_c1,
  struct__79371 *kcg_c2);
#endif /* kcg_comp_struct__79371 */

#ifndef kcg_comp_struct__79397
extern kcg_bool kcg_comp_struct__79397(
  struct__79397 *kcg_c1,
  struct__79397 *kcg_c2);
#endif /* kcg_comp_struct__79397 */

#ifndef kcg_comp_array__76861
extern kcg_bool kcg_comp_array__76861(
  array__76861 *kcg_c1,
  array__76861 *kcg_c2);
#endif /* kcg_comp_array__76861 */

#ifndef kcg_comp_array__76871
extern kcg_bool kcg_comp_array__76871(
  array__76871 *kcg_c1,
  array__76871 *kcg_c2);
#endif /* kcg_comp_array__76871 */

#ifndef kcg_comp_array__76886
extern kcg_bool kcg_comp_array__76886(
  array__76886 *kcg_c1,
  array__76886 *kcg_c2);
#endif /* kcg_comp_array__76886 */

#ifndef kcg_comp_array__76896
extern kcg_bool kcg_comp_array__76896(
  array__76896 *kcg_c1,
  array__76896 *kcg_c2);
#endif /* kcg_comp_array__76896 */

#ifndef kcg_comp_array__76941
extern kcg_bool kcg_comp_array__76941(
  array__76941 *kcg_c1,
  array__76941 *kcg_c2);
#endif /* kcg_comp_array__76941 */

#ifndef kcg_comp_array__76951
extern kcg_bool kcg_comp_array__76951(
  array__76951 *kcg_c1,
  array__76951 *kcg_c2);
#endif /* kcg_comp_array__76951 */

#ifndef kcg_comp_array__76962
extern kcg_bool kcg_comp_array__76962(
  array__76962 *kcg_c1,
  array__76962 *kcg_c2);
#endif /* kcg_comp_array__76962 */

#ifndef kcg_comp_array__76970
extern kcg_bool kcg_comp_array__76970(
  array__76970 *kcg_c1,
  array__76970 *kcg_c2);
#endif /* kcg_comp_array__76970 */

#ifndef kcg_comp_array__77026
extern kcg_bool kcg_comp_array__77026(
  array__77026 *kcg_c1,
  array__77026 *kcg_c2);
#endif /* kcg_comp_array__77026 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__77040
extern kcg_bool kcg_comp_array__77040(
  array__77040 *kcg_c1,
  array__77040 *kcg_c2);
#endif /* kcg_comp_array__77040 */

#ifndef kcg_comp_array__77059
extern kcg_bool kcg_comp_array__77059(
  array__77059 *kcg_c1,
  array__77059 *kcg_c2);
#endif /* kcg_comp_array__77059 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__77197
extern kcg_bool kcg_comp_array__77197(
  array__77197 *kcg_c1,
  array__77197 *kcg_c2);
#endif /* kcg_comp_array__77197 */

#ifndef kcg_comp_array__77221
extern kcg_bool kcg_comp_array__77221(
  array__77221 *kcg_c1,
  array__77221 *kcg_c2);
#endif /* kcg_comp_array__77221 */

#ifndef kcg_comp_array__77247
extern kcg_bool kcg_comp_array__77247(
  array__77247 *kcg_c1,
  array__77247 *kcg_c2);
#endif /* kcg_comp_array__77247 */

#ifndef kcg_comp_array__77307
extern kcg_bool kcg_comp_array__77307(
  array__77307 *kcg_c1,
  array__77307 *kcg_c2);
#endif /* kcg_comp_array__77307 */

#ifndef kcg_comp_array__77310
extern kcg_bool kcg_comp_array__77310(
  array__77310 *kcg_c1,
  array__77310 *kcg_c2);
#endif /* kcg_comp_array__77310 */

#ifndef kcg_comp_array__77319
extern kcg_bool kcg_comp_array__77319(
  array__77319 *kcg_c1,
  array__77319 *kcg_c2);
#endif /* kcg_comp_array__77319 */

#ifndef kcg_comp_array__77329
extern kcg_bool kcg_comp_array__77329(
  array__77329 *kcg_c1,
  array__77329 *kcg_c2);
#endif /* kcg_comp_array__77329 */

#ifndef kcg_comp_array__77387
extern kcg_bool kcg_comp_array__77387(
  array__77387 *kcg_c1,
  array__77387 *kcg_c2);
#endif /* kcg_comp_array__77387 */

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

#ifndef kcg_comp_array__77486
extern kcg_bool kcg_comp_array__77486(
  array__77486 *kcg_c1,
  array__77486 *kcg_c2);
#endif /* kcg_comp_array__77486 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__77543
extern kcg_bool kcg_comp_array__77543(
  array__77543 *kcg_c1,
  array__77543 *kcg_c2);
#endif /* kcg_comp_array__77543 */

#ifndef kcg_comp_array__77569
extern kcg_bool kcg_comp_array__77569(
  array__77569 *kcg_c1,
  array__77569 *kcg_c2);
#endif /* kcg_comp_array__77569 */

#ifndef kcg_comp_array__77578
extern kcg_bool kcg_comp_array__77578(
  array__77578 *kcg_c1,
  array__77578 *kcg_c2);
#endif /* kcg_comp_array__77578 */

#ifndef kcg_comp_array__77590
extern kcg_bool kcg_comp_array__77590(
  array__77590 *kcg_c1,
  array__77590 *kcg_c2);
#endif /* kcg_comp_array__77590 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__77612
extern kcg_bool kcg_comp_array__77612(
  array__77612 *kcg_c1,
  array__77612 *kcg_c2);
#endif /* kcg_comp_array__77612 */

#ifndef kcg_comp_array__77621
extern kcg_bool kcg_comp_array__77621(
  array__77621 *kcg_c1,
  array__77621 *kcg_c2);
#endif /* kcg_comp_array__77621 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_33_11
extern kcg_bool kcg_comp_array_int_33_11(
  array_int_33_11 *kcg_c1,
  array_int_33_11 *kcg_c2);
#endif /* kcg_comp_array_int_33_11 */

#ifndef kcg_comp_array__77658
extern kcg_bool kcg_comp_array__77658(
  array__77658 *kcg_c1,
  array__77658 *kcg_c2);
#endif /* kcg_comp_array__77658 */

#ifndef kcg_comp_array__77661
extern kcg_bool kcg_comp_array__77661(
  array__77661 *kcg_c1,
  array__77661 *kcg_c2);
#endif /* kcg_comp_array__77661 */

#ifndef kcg_comp_array__77671
extern kcg_bool kcg_comp_array__77671(
  array__77671 *kcg_c1,
  array__77671 *kcg_c2);
#endif /* kcg_comp_array__77671 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__77702
extern kcg_bool kcg_comp_array__77702(
  array__77702 *kcg_c1,
  array__77702 *kcg_c2);
#endif /* kcg_comp_array__77702 */

#ifndef kcg_comp_array__77741
extern kcg_bool kcg_comp_array__77741(
  array__77741 *kcg_c1,
  array__77741 *kcg_c2);
#endif /* kcg_comp_array__77741 */

#ifndef kcg_comp_array__77855
extern kcg_bool kcg_comp_array__77855(
  array__77855 *kcg_c1,
  array__77855 *kcg_c2);
#endif /* kcg_comp_array__77855 */

#ifndef kcg_comp_array__77943
extern kcg_bool kcg_comp_array__77943(
  array__77943 *kcg_c1,
  array__77943 *kcg_c2);
#endif /* kcg_comp_array__77943 */

#ifndef kcg_comp_array__77953
extern kcg_bool kcg_comp_array__77953(
  array__77953 *kcg_c1,
  array__77953 *kcg_c2);
#endif /* kcg_comp_array__77953 */

#ifndef kcg_comp_array__77966
extern kcg_bool kcg_comp_array__77966(
  array__77966 *kcg_c1,
  array__77966 *kcg_c2);
#endif /* kcg_comp_array__77966 */

#ifndef kcg_comp_array__77977
extern kcg_bool kcg_comp_array__77977(
  array__77977 *kcg_c1,
  array__77977 *kcg_c2);
#endif /* kcg_comp_array__77977 */

#ifndef kcg_comp_array__77988
extern kcg_bool kcg_comp_array__77988(
  array__77988 *kcg_c1,
  array__77988 *kcg_c2);
#endif /* kcg_comp_array__77988 */

#ifndef kcg_comp_array__78011
extern kcg_bool kcg_comp_array__78011(
  array__78011 *kcg_c1,
  array__78011 *kcg_c2);
#endif /* kcg_comp_array__78011 */

#ifndef kcg_comp_array__78041
extern kcg_bool kcg_comp_array__78041(
  array__78041 *kcg_c1,
  array__78041 *kcg_c2);
#endif /* kcg_comp_array__78041 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array__78221
extern kcg_bool kcg_comp_array__78221(
  array__78221 *kcg_c1,
  array__78221 *kcg_c2);
#endif /* kcg_comp_array__78221 */

#ifndef kcg_comp_array__78238
extern kcg_bool kcg_comp_array__78238(
  array__78238 *kcg_c1,
  array__78238 *kcg_c2);
#endif /* kcg_comp_array__78238 */

#ifndef kcg_comp_array__78260
extern kcg_bool kcg_comp_array__78260(
  array__78260 *kcg_c1,
  array__78260 *kcg_c2);
#endif /* kcg_comp_array__78260 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array__78321
extern kcg_bool kcg_comp_array__78321(
  array__78321 *kcg_c1,
  array__78321 *kcg_c2);
#endif /* kcg_comp_array__78321 */

#ifndef kcg_comp_array__78324
extern kcg_bool kcg_comp_array__78324(
  array__78324 *kcg_c1,
  array__78324 *kcg_c2);
#endif /* kcg_comp_array__78324 */

#ifndef kcg_comp_array__78327
extern kcg_bool kcg_comp_array__78327(
  array__78327 *kcg_c1,
  array__78327 *kcg_c2);
#endif /* kcg_comp_array__78327 */

#ifndef kcg_comp_array__78330
extern kcg_bool kcg_comp_array__78330(
  array__78330 *kcg_c1,
  array__78330 *kcg_c2);
#endif /* kcg_comp_array__78330 */

#ifndef kcg_comp_array__78384
extern kcg_bool kcg_comp_array__78384(
  array__78384 *kcg_c1,
  array__78384 *kcg_c2);
#endif /* kcg_comp_array__78384 */

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

#ifndef kcg_comp_array__78478
extern kcg_bool kcg_comp_array__78478(
  array__78478 *kcg_c1,
  array__78478 *kcg_c2);
#endif /* kcg_comp_array__78478 */

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

#ifndef kcg_comp_array_bool_25
extern kcg_bool kcg_comp_array_bool_25(
  array_bool_25 *kcg_c1,
  array_bool_25 *kcg_c2);
#endif /* kcg_comp_array_bool_25 */

#ifndef kcg_comp_array_real_25
extern kcg_bool kcg_comp_array_real_25(
  array_real_25 *kcg_c1,
  array_real_25 *kcg_c2);
#endif /* kcg_comp_array_real_25 */

#ifndef kcg_comp_array__78699
extern kcg_bool kcg_comp_array__78699(
  array__78699 *kcg_c1,
  array__78699 *kcg_c2);
#endif /* kcg_comp_array__78699 */

#ifndef kcg_comp_array__78710
extern kcg_bool kcg_comp_array__78710(
  array__78710 *kcg_c1,
  array__78710 *kcg_c2);
#endif /* kcg_comp_array__78710 */

#ifndef kcg_comp_array__78754
extern kcg_bool kcg_comp_array__78754(
  array__78754 *kcg_c1,
  array__78754 *kcg_c2);
#endif /* kcg_comp_array__78754 */

#ifndef kcg_comp_array_real_15
extern kcg_bool kcg_comp_array_real_15(
  array_real_15 *kcg_c1,
  array_real_15 *kcg_c2);
#endif /* kcg_comp_array_real_15 */

#ifndef kcg_comp_array_real_15_10
extern kcg_bool kcg_comp_array_real_15_10(
  array_real_15_10 *kcg_c1,
  array_real_15_10 *kcg_c2);
#endif /* kcg_comp_array_real_15_10 */

#ifndef kcg_comp_array_real_10
extern kcg_bool kcg_comp_array_real_10(
  array_real_10 *kcg_c1,
  array_real_10 *kcg_c2);
#endif /* kcg_comp_array_real_10 */

#ifndef kcg_comp_array_bool_14
extern kcg_bool kcg_comp_array_bool_14(
  array_bool_14 *kcg_c1,
  array_bool_14 *kcg_c2);
#endif /* kcg_comp_array_bool_14 */

#ifndef kcg_comp_array__78982
extern kcg_bool kcg_comp_array__78982(
  array__78982 *kcg_c1,
  array__78982 *kcg_c2);
#endif /* kcg_comp_array__78982 */

#ifndef kcg_comp_array__78990
extern kcg_bool kcg_comp_array__78990(
  array__78990 *kcg_c1,
  array__78990 *kcg_c2);
#endif /* kcg_comp_array__78990 */

#ifndef kcg_comp_array__78998
extern kcg_bool kcg_comp_array__78998(
  array__78998 *kcg_c1,
  array__78998 *kcg_c2);
#endif /* kcg_comp_array__78998 */

#ifndef kcg_comp_array__79339
extern kcg_bool kcg_comp_array__79339(
  array__79339 *kcg_c1,
  array__79339 *kcg_c2);
#endif /* kcg_comp_array__79339 */

#ifndef kcg_comp_array__79388
extern kcg_bool kcg_comp_array__79388(
  array__79388 *kcg_c1,
  array__79388 *kcg_c2);
#endif /* kcg_comp_array__79388 */

#ifndef kcg_comp_array_bool_20
extern kcg_bool kcg_comp_array_bool_20(
  array_bool_20 *kcg_c1,
  array_bool_20 *kcg_c2);
#endif /* kcg_comp_array_bool_20 */

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

#ifndef kcg_comp_array__79408
extern kcg_bool kcg_comp_array__79408(
  array__79408 *kcg_c1,
  array__79408 *kcg_c2);
#endif /* kcg_comp_array__79408 */

#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array__79417
extern kcg_bool kcg_comp_array__79417(
  array__79417 *kcg_c1,
  array__79417 *kcg_c2);
#endif /* kcg_comp_array__79417 */

#ifndef kcg_comp_array__79420
extern kcg_bool kcg_comp_array__79420(
  array__79420 *kcg_c1,
  array__79420 *kcg_c2);
#endif /* kcg_comp_array__79420 */

#ifndef kcg_comp_array__79423
extern kcg_bool kcg_comp_array__79423(
  array__79423 *kcg_c1,
  array__79423 *kcg_c2);
#endif /* kcg_comp_array__79423 */

#ifndef kcg_comp_array__79426
extern kcg_bool kcg_comp_array__79426(
  array__79426 *kcg_c1,
  array__79426 *kcg_c2);
#endif /* kcg_comp_array__79426 */

#ifndef kcg_comp_array__79429
extern kcg_bool kcg_comp_array__79429(
  array__79429 *kcg_c1,
  array__79429 *kcg_c2);
#endif /* kcg_comp_array__79429 */

#ifndef kcg_comp_array__79432
extern kcg_bool kcg_comp_array__79432(
  array__79432 *kcg_c1,
  array__79432 *kcg_c2);
#endif /* kcg_comp_array__79432 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_real_24
extern kcg_bool kcg_comp_array_real_24(
  array_real_24 *kcg_c1,
  array_real_24 *kcg_c2);
#endif /* kcg_comp_array_real_24 */

#ifndef kcg_comp_array_bool_24
extern kcg_bool kcg_comp_array_bool_24(
  array_bool_24 *kcg_c1,
  array_bool_24 *kcg_c2);
#endif /* kcg_comp_array_bool_24 */

#ifndef kcg_comp_array__82215
extern kcg_bool kcg_comp_array__82215(
  array__82215 *kcg_c1,
  array__82215 *kcg_c2);
#endif /* kcg_comp_array__82215 */

#ifndef kcg_comp_array__82684
extern kcg_bool kcg_comp_array__82684(
  array__82684 *kcg_c1,
  array__82684 *kcg_c2);
#endif /* kcg_comp_array__82684 */

#ifndef kcg_comp_array__82691
extern kcg_bool kcg_comp_array__82691(
  array__82691 *kcg_c1,
  array__82691 *kcg_c2);
#endif /* kcg_comp_array__82691 */

#ifndef kcg_comp_array__82748
extern kcg_bool kcg_comp_array__82748(
  array__82748 *kcg_c1,
  array__82748 *kcg_c2);
#endif /* kcg_comp_array__82748 */

#ifndef kcg_comp_array__82782
extern kcg_bool kcg_comp_array__82782(
  array__82782 *kcg_c1,
  array__82782 *kcg_c2);
#endif /* kcg_comp_array__82782 */

#define kcg_comp_Change_traction_system_T_TIU_Types_Pkg kcg_comp_struct__79298

#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg kcg_copy_struct__79298

#define kcg_comp_MyArray_SDM_Commands_Pkg kcg_comp_array_bool_14

#define kcg_copy_MyArray_SDM_Commands_Pkg kcg_copy_array_bool_14

#define kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg kcg_comp_struct__78870

#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg kcg_copy_struct__78870

#define kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg kcg_comp_struct__78890

#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg kcg_copy_struct__78890

#define kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg kcg_comp_struct__79304

#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg kcg_copy_struct__79304

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__77750

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__77750

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__77775

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__77775

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__77820

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__77820

#define kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg kcg_comp_struct__77931

#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg kcg_copy_struct__77931

#define kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg kcg_comp_array__77943

#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg kcg_copy_array__77943

#define kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__77946

#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__77946

#define kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg kcg_comp_struct__79312

#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg kcg_copy_struct__79312

#define kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_comp_array__77953

#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_copy_array__77953

#define kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__77956

#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__77956

#define kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_comp_array__77966

#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_copy_array__77966

#define kcg_comp_SSP_T_Packet_Types_Pkg kcg_comp_struct__77980

#define kcg_copy_SSP_T_Packet_Types_Pkg kcg_copy_struct__77980

#define kcg_comp_SSPArray_T_Packet_Types_Pkg kcg_comp_array__77988

#define kcg_copy_SSPArray_T_Packet_Types_Pkg kcg_copy_array__77988

#define kcg_comp_Brake_command_T_TIU_Types_Pkg kcg_comp_struct__78824

#define kcg_copy_Brake_command_T_TIU_Types_Pkg kcg_copy_struct__78824

#define kcg_comp_Diff_T_Packet_Types_Pkg kcg_comp_struct__77969

#define kcg_copy_Diff_T_Packet_Types_Pkg kcg_copy_struct__77969

#define kcg_comp_DiffArray_T_Packet_Types_Pkg kcg_comp_array__77977

#define kcg_copy_DiffArray_T_Packet_Types_Pkg kcg_copy_array__77977

#define kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_comp_struct__77991

#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_copy_struct__77991

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__78002

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__78002

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__78011

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__78011

#define kcg_comp_Isolation_Status_T_TIU_Types_Pkg kcg_comp_struct__79319

#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg kcg_copy_struct__79319

#define kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__78014

#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__78014

#define kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_comp_struct__79324

#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_copy_struct__79324

#define kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__78041

#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__78041

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct__78044

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct__78044

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct__78052

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct__78052

#define kcg_comp_TIU_Input_msg_API_TIU_Pkg kcg_comp_struct__78194

#define kcg_copy_TIU_Input_msg_API_TIU_Pkg kcg_copy_struct__78194

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__78060

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__78060

#define kcg_comp_TIU_Output_msg_API_TIU_Pkg kcg_comp_struct__79334

#define kcg_copy_TIU_Output_msg_API_TIU_Pkg kcg_copy_struct__79334

#define kcg_comp_IterPacket58_T_Packet_Types_Pkg kcg_comp_struct__78233

#define kcg_copy_IterPacket58_T_Packet_Types_Pkg kcg_copy_struct__78233

#define kcg_comp_IterPacket58List_T_Packet_Types_Pkg kcg_comp_array__78238

#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg kcg_copy_array__78238

#define kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_comp_struct__78241

#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_copy_struct__78241

#define kcg_comp_nvkrint_T_Packet_Types_Pkg kcg_comp_struct__76935

#define kcg_copy_nvkrint_T_Packet_Types_Pkg kcg_copy_struct__76935

#define kcg_comp_nvkrintArray_T_Packet_Types_Pkg kcg_comp_array__76941

#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg kcg_copy_array__76941

#define kcg_comp_nvkvint_T_Packet_Types_Pkg kcg_comp_struct__76944

#define kcg_copy_nvkvint_T_Packet_Types_Pkg kcg_copy_struct__76944

#define kcg_comp_nvkvintArray_T_Packet_Types_Pkg kcg_comp_array__76951

#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg kcg_copy_array__76951

#define kcg_comp_nvkvintset_T_Packet_Types_Pkg kcg_comp_struct__76954

#define kcg_copy_nvkvintset_T_Packet_Types_Pkg kcg_copy_struct__76954

#define kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg kcg_comp_array__76962

#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg kcg_copy_array__76962

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct__76965

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct__76965

#define kcg_comp_nidCArray_T_Packet_Types_Pkg kcg_comp_array__76970

#define kcg_copy_nidCArray_T_Packet_Types_Pkg kcg_copy_array__76970

#define kcg_comp_P3_NationalValues_T_Packet_Types_Pkg kcg_comp_struct__76973

#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg kcg_copy_struct__76973

#define kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_comp_struct__78344

#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_copy_struct__78344

#define kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg kcg_comp_struct__78350

#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg kcg_copy_struct__78350

#define kcg_comp_RadioMessage_T_Radio_Types_Pkg kcg_comp_struct__78387

#define kcg_copy_RadioMessage_T_Radio_Types_Pkg kcg_copy_struct__78387

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__77685

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__77685

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__77809

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__77809

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__77077

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__77077

#define kcg_comp_MSG_Errors_T_Common_Types_Pkg kcg_comp_struct__78118

#define kcg_copy_MSG_Errors_T_Common_Types_Pkg kcg_copy_struct__78118

#define kcg_comp_filterRelatedEvents_T_Common_Types_Pkg kcg_comp_struct__78333

#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg kcg_copy_struct__78333

#define kcg_comp_PositionReportParameter_T_Common_Types_Pkg kcg_comp_struct__78369

#define kcg_copy_PositionReportParameter_T_Common_Types_Pkg kcg_copy_struct__78369

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__77161

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__77161

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__77095

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__77095

#define kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg kcg_comp_struct__78403

#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg kcg_copy_struct__78403

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__77032

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__77032

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__77040

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__77040

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__77043

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__77043

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct__78103

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct__78103

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__77799

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__77799

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__77107

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__77107

#define kcg_comp_P046_OBU_T_TM kcg_comp_struct__78081

#define kcg_copy_P046_OBU_T_TM kcg_copy_struct__78081

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__78094

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__78094

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__77062

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__77062

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__77059

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__77059

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__77048

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__77048

#define kcg_comp_radioManagementMessage_T_Common_Types_Pkg kcg_comp_struct__78360

#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg kcg_copy_struct__78360

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__76855

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__76855

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__76861

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__76861

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__76864

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__76864

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__76871

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__76871

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__76874

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__76874

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__76886

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__76886

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__76889

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__76889

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__76896

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__76896

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__76965

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__76965

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__77387

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__77387

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__77423

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__77423

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__77313

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__77313

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__77319

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__77319

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__77322

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__77322

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__77329

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__77329

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_FlagsForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__77332

#define kcg_copy_FlagsForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__77332

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__77374

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__77374

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__77292

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__77292

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__77478

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__77478

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__77307

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__77307

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__77486

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__77486

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__77828

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__77828

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__77489

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__77489

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__77532

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__77532

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__77537

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__77537

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__77674

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__77674

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__77523

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__77523

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__77671

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__77671

#define kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__77543

#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__77543

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__77546

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__77546

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__77664

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__77664

#define kcg_comp_Array08_TM kcg_comp_array_int_8

#define kcg_copy_Array08_TM kcg_copy_array_int_8

#define kcg_comp_P058_OBU_T_TM kcg_comp_struct__78263

#define kcg_copy_P058_OBU_T_TM kcg_copy_struct__78263

#define kcg_comp_P058_OBU_sectionlist_enum_T_TM kcg_comp_array__78260

#define kcg_copy_P058_OBU_sectionlist_enum_T_TM kcg_copy_array__78260

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__77661

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__77661

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__77310

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__77310

#define kcg_comp_P058_section_enum_T_TM kcg_comp_struct__78254

#define kcg_copy_P058_section_enum_T_TM kcg_copy_struct__78254

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__77837

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__77837

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__77300

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__77300

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__77646

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__77646

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__77705

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__77705

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__77721

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__77721

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__77726

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__77726

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__77731

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__77731

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__77736

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__77736

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__77741

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__77741

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__77744

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__77744

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__77770

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__77770

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__77794

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__77794

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__77697

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__77697

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__77702

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__77702

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_MetadataTruthtable_T kcg_comp_array_bool_256_46

#define kcg_copy_MetadataTruthtable_T kcg_copy_array_bool_256_46

#define kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__78446

#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__78446

#define kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__78507

#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__78507

#define kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__77913

#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__77913

#define kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__78130

#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__78130

#define kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_comp_array_char_9

#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_copy_array_char_9

#define kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__78516

#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__78516

#define kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_comp_struct__78547

#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_copy_struct__78547

#define kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_comp_struct__79126

#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_copy_struct__79126

#define kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg kcg_comp_struct__78210

#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg kcg_copy_struct__78210

#define kcg_comp_BG_Message_T_BG_Types_Pkg kcg_comp_struct__78396

#define kcg_copy_BG_Message_T_BG_Types_Pkg kcg_copy_struct__78396

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__78285

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__78285

#define kcg_comp_Telegram_T_BG_Types_Pkg kcg_comp_struct__78377

#define kcg_copy_Telegram_T_BG_Types_Pkg kcg_copy_struct__78377

#define kcg_comp_TelegramArray_T_BG_Types_Pkg kcg_comp_array__78384

#define kcg_copy_TelegramArray_T_BG_Types_Pkg kcg_copy_array__78384

#define kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg kcg_comp_struct__78298

#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg kcg_copy_struct__78298

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__77026

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__77026

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__77143

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__77143

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__77171

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__77171

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__77012

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__77012

#define kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_array__77221

#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_array__77221

#define kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__77247

#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__77247

#define kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__77215

#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__77215

#define kcg_comp_positionErrors_T_TrainPosition_Types_Pck kcg_comp_struct__77250

#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck kcg_copy_struct__77250

#define kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__77234

#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__77234

#define kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck kcg_comp_struct__77262

#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck kcg_copy_struct__77262

#define kcg_comp_positionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__77197

#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__77197

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__77224

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__77224

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__77177

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__77177

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__77186

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__77186

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__77275

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__77275

#define kcg_comp_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg kcg_comp_struct__79166

#define kcg_copy_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg kcg_copy_struct__79166

#define kcg_comp_p42_order_T_MoRC_Pck_Coder_Pkg kcg_comp_struct__79146

#define kcg_copy_p42_order_T_MoRC_Pck_Coder_Pkg kcg_copy_struct__79146

#define kcg_comp_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg kcg_comp_struct__79152

#define kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg kcg_copy_struct__79152

#define kcg_comp_obuEventsAndPhases_T_MoRC_Pck kcg_comp_struct__79190

#define kcg_copy_obuEventsAndPhases_T_MoRC_Pck kcg_copy_struct__79190

#define kcg_comp_radioNetWorkIDs_T_MoRC_Pck kcg_comp_struct__79214

#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck kcg_copy_struct__79214

#define kcg_comp_safeRadioConnectionStatusValid_Type_MoRC_Pck kcg_comp_struct__79172

#define kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck kcg_copy_struct__79172

#define kcg_comp_mobileHWStatus_Type_MoRC_Pck kcg_comp_struct__79177

#define kcg_copy_mobileHWStatus_Type_MoRC_Pck kcg_copy_struct__79177

#define kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__77200

#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__77200

#define kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__77206

#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__77206

#define kcg_comp_mobileSWCmd_Type_MoRC_Pck kcg_comp_struct__79184

#define kcg_copy_mobileSWCmd_Type_MoRC_Pck kcg_copy_struct__79184

#define kcg_comp_mobileHWCmd_Type_MoRC_Pck kcg_comp_struct__78897

#define kcg_copy_mobileHWCmd_Type_MoRC_Pck kcg_copy_struct__78897

#define kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_comp_struct__77242

#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_copy_struct__77242

#define kcg_comp_mobileSWStatus_Type_MoRC_Pck kcg_comp_struct__78917

#define kcg_copy_mobileSWStatus_Type_MoRC_Pck kcg_copy_struct__78917

#define kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg kcg_comp_struct__78904

#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg kcg_copy_struct__78904

#define kcg_comp_API_EuroRadioOutput_T_API_RadioCommunication_Pkg kcg_comp_struct__78910

#define kcg_copy_API_EuroRadioOutput_T_API_RadioCommunication_Pkg kcg_copy_struct__78910

#define kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__78931

#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__78931

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__76855

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__76855

#define kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__78943

#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__78943

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__76861

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__76861

#define kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__78949

#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__78949

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__76864

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__76864

#define kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__78955

#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__78955

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__76871

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__76871

#define kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__78961

#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__78961

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__76874

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__76874

#define kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__78967

#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__78967

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__76886

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__76886

#define kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__79006

#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__79006

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__76889

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__76889

#define kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__79014

#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__79014

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__76896

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__76896

#define kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__79049

#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__79049

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__76899

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__76899

#define kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__78925

#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__78925

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__76930

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__76930

#define kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__79094

#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__79094

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__79100

#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__79100

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__77590

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__77590

#define kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__77925

#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__77925

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__77593

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__77593

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__78494

#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__78494

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__77572

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__77572

#define kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__78522

#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__78522

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__77578

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__77578

#define kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__78527

#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__78527

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__77581

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__77581

#define kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__78501

#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__78501

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__77600

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__77600

#define kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__78434

#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__78434

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__76965

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__76965

#define kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__78537

#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__78537

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__77387

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__77387

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__77390

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__77390

#define kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg kcg_comp_struct__78457

#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg kcg_copy_struct__78457

#define kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg kcg_comp_struct__78481

#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg kcg_copy_struct__78481

#define kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg kcg_comp_struct__78487

#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg kcg_copy_struct__78487

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__77612

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__77612

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__77569

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__77569

#define kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP kcg_comp_struct__77630

#define kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP kcg_copy_struct__77630

#define kcg_comp_SSP_relevant_target_t_TA_MRSP kcg_comp_struct__77641

#define kcg_copy_SSP_relevant_target_t_TA_MRSP kcg_copy_struct__77641

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__77564

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__77564

#define kcg_comp_SSP_valid_section_t_TA_MRSP kcg_comp_struct__77635

#define kcg_copy_SSP_valid_section_t_TA_MRSP kcg_copy_struct__77635

#define kcg_comp_SSP_t_list_t_TA_MRSP kcg_comp_array__77621

#define kcg_copy_SSP_t_list_t_TA_MRSP kcg_copy_array__77621

#define kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP kcg_comp_struct__77615

#define kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP kcg_copy_struct__77615

#define kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP kcg_comp_array__77658

#define kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP kcg_copy_array__77658

#define kcg_comp_SSP_t_matrix_t_TA_MRSP kcg_comp_array_int_33_11

#define kcg_copy_SSP_t_matrix_t_TA_MRSP kcg_copy_array_int_33_11

#define kcg_comp_SSP_t_cat_t_TA_MRSP kcg_comp_array_int_33

#define kcg_copy_SSP_t_cat_t_TA_MRSP kcg_copy_array_int_33

#define kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP kcg_comp_struct__77653

#define kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP kcg_copy_struct__77653

#define kcg_comp_DMI_ModesToDMI_T_DMI_Types_Pkg kcg_comp_struct__79220

#define kcg_copy_DMI_ModesToDMI_T_DMI_Types_Pkg kcg_copy_struct__79220

#define kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_comp_struct__78467

#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_copy_struct__78467

#define kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_comp_array__78478

#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_copy_array__78478

#define kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg kcg_comp_struct__78277

#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg kcg_copy_struct__78277

#define kcg_comp_API_TelegramHeader_T_API_Msg_Pkg kcg_comp_struct__78303

#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg kcg_copy_struct__78303

#define kcg_comp_API_TrackSideInput_T_API_Msg_Pkg kcg_comp_struct__78312

#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg kcg_copy_struct__78312

#define kcg_comp_DMI_level_array_T_DMI_Types_Pkg kcg_comp_array__77855

#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg kcg_copy_array__77855

#define kcg_comp_DMI_LevelList_T_DMI_Types_Pkg kcg_comp_struct__77858

#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg kcg_copy_struct__77858

#define kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_comp_struct__78977

#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_copy_struct__78977

#define kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_comp_array__78982

#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_copy_array__78982

#define kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg kcg_comp_struct__78985

#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg kcg_copy_struct__78985

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct__77300

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct__77300

#define kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_comp_array__78990

#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_copy_array__78990

#define kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg kcg_comp_struct__78993

#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg kcg_copy_struct__78993

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct__77646

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct__77646

#define kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_comp_array__78998

#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_copy_array__78998

#define kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg kcg_comp_struct__79001

#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg kcg_copy_struct__79001

#define kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_comp_struct__77863

#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_copy_struct__77863

#define kcg_comp_trainData_Events_T_trainData_Types_pkg kcg_comp_struct__77870

#define kcg_copy_trainData_Events_T_trainData_Types_pkg kcg_copy_struct__77870

#define kcg_comp_trainData_Trigger_T_trainData_Types_pkg kcg_comp_struct__77878

#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg kcg_copy_struct__77878

#define kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__78422

#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__78422

#define kcg_comp_trainDataStatus_T_trainData_Types_pkg kcg_comp_struct__77886

#define kcg_copy_trainDataStatus_T_trainData_Types_pkg kcg_copy_struct__77886

#define kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__78411

#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__78411

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__77815

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__77815

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct__79025

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct__79025

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct__79025

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct__79025

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct__79025

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct__79025

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct__79025

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct__79025

#define kcg_comp_DMI_train_length_T_DMI_Types_Pkg kcg_comp_struct__79032

#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg kcg_copy_struct__79032

#define kcg_comp_DMI_train_id_T_DMI_Types_Pkg kcg_comp_struct__79040

#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg kcg_copy_struct__79040

#define kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg kcg_comp_struct__79061

#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg kcg_copy_struct__79061

#define kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_comp_struct__79229

#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_copy_struct__79229

#define kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg kcg_comp_struct__79235

#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg kcg_copy_struct__79235

#define kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_comp_struct__78857

#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_copy_struct__78857

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_copy_array_real_3

#define kcg_comp_t_BrakeVt_t_SDMConversionModelPkg kcg_comp_array_real_2

#define kcg_copy_t_BrakeVt_t_SDMConversionModelPkg kcg_copy_array_real_2

#define kcg_comp_t_Brake_t_SDMConversionModelPkg kcg_comp_struct__78615

#define kcg_copy_t_Brake_t_SDMConversionModelPkg kcg_copy_struct__78615

#define kcg_comp_DMI_level_T_DMI_Types_Pkg kcg_comp_struct__77850

#define kcg_copy_DMI_level_T_DMI_Types_Pkg kcg_copy_struct__77850

#define kcg_comp_DMI_TEXT_DMI_Types_Pkg kcg_comp_array_char_255

#define kcg_copy_DMI_TEXT_DMI_Types_Pkg kcg_copy_array_char_255

#define kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg kcg_comp_struct__78563

#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg kcg_copy_struct__78563

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__77114

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__77114

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__77121

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__77121

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__77127

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__77127

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_real_3

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__77137

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__77137

#define kcg_comp_TargetIteratorAkku_TargetLimits_Pkg kcg_comp_struct__78683

#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg kcg_copy_struct__78683

#define kcg_comp_bec_t_TargetLimits_Pkg kcg_comp_struct__78620

#define kcg_copy_bec_t_TargetLimits_Pkg kcg_copy_struct__78620

#define kcg_comp_T_trac_t_TargetLimits_Pkg kcg_comp_struct__78625

#define kcg_copy_T_trac_t_TargetLimits_Pkg kcg_copy_struct__78625

#define kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg kcg_comp_struct__78796

#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg kcg_copy_struct__78796

#define kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg kcg_comp_struct__79241

#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg kcg_copy_struct__79241

#define kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_comp_array__78699

#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_copy_array__78699

#define kcg_comp_CurveCollection_T_CalcBrakingCurves_types kcg_comp_struct__78702

#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types kcg_copy_struct__78702

#define kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_comp_array_bool_25

#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_copy_array_bool_25

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_comp_array_real_25

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_copy_array_real_25

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_comp_array_real_25

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_copy_array_real_25

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_comp_array_real_25

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_copy_array_real_25

#define kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types kcg_comp_struct__78676

#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types kcg_copy_struct__78676

#define kcg_comp_ParabolaArc_T_CalcBrakingCurves_types kcg_comp_struct__78664

#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types kcg_copy_struct__78664

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_real_15

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_real_15

#define kcg_comp_ASafe_Data_T_CalcBrakingCurves_types kcg_comp_array_real_15_10

#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types kcg_copy_array_real_15_10

#define kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_10

#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_10

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_15

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_15

#define kcg_comp_ASafe_T_CalcBrakingCurves_types kcg_comp_struct__78810

#define kcg_copy_ASafe_T_CalcBrakingCurves_types kcg_copy_struct__78810

#define kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_comp_array__79388

#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_copy_array__79388

#define kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_comp_struct__78108

#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_copy_struct__78108

#define kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_comp_struct__78066

#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_copy_struct__78066

#define kcg_comp_T_TransitionConditions_Level_And_Mode_Types_Pkg kcg_comp_array_bool_20

#define kcg_copy_T_TransitionConditions_Level_And_Mode_Types_Pkg kcg_copy_array_bool_20

#define kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_comp_array__79339

#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_copy_array__79339

#define kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_comp_struct__77350

#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_copy_struct__77350

#define kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__79342

#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__79342

#define kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_comp_struct__79246

#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_copy_struct__79246

#define kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_comp_struct__79255

#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_copy_struct__79255

#define kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__79359

#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__79359

#define kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg kcg_comp_struct__78224

#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg kcg_copy_struct__78224

#define kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_comp_struct__79262

#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_copy_struct__79262

#define kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_comp_struct__78228

#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_copy_struct__78228

#define kcg_comp_T_Data_From_Track_Level_And_Mode_Types_Pkg kcg_comp_struct__79371

#define kcg_copy_T_Data_From_Track_Level_And_Mode_Types_Pkg kcg_copy_struct__79371

#define kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_comp_struct__78204

#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_copy_struct__78204

#define kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg kcg_comp_array__78221

#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg kcg_copy_array__78221

#define kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg kcg_comp_struct__78215

#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg kcg_copy_struct__78215

#define kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_comp_struct__77358

#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_copy_struct__77358

#define kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg kcg_comp_struct__78199

#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg kcg_copy_struct__78199

#define kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_comp_struct__77366

#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_copy_struct__77366

#define kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_comp_struct__78816

#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_copy_struct__78816

#define kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_comp_struct__78440

#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_copy_struct__78440

#define kcg_comp_MRSP_internal_T_TargetManagement_types kcg_comp_array__78754

#define kcg_copy_MRSP_internal_T_TargetManagement_types kcg_copy_array__78754

#define kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_comp_struct__78452

#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_copy_struct__78452

#define kcg_comp_MA_section_real_T_TargetManagement_types kcg_comp_struct__78735

#define kcg_copy_MA_section_real_T_TargetManagement_types kcg_copy_struct__78735

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__77844

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__77844

#define kcg_comp_EOA_real_T_TargetManagement_types kcg_comp_struct__78730

#define kcg_copy_EOA_real_T_TargetManagement_types kcg_copy_struct__78730

#define kcg_comp_MRSP_internal_section_T_TargetManagement_types kcg_comp_struct__78748

#define kcg_copy_MRSP_internal_section_T_TargetManagement_types kcg_copy_struct__78748

#define kcg_comp_Target_T_TargetManagement_types kcg_comp_struct__78575

#define kcg_copy_Target_T_TargetManagement_types kcg_copy_struct__78575

#define kcg_comp_Target_list_MRSP_real_T_TargetManagement_types kcg_comp_array__78710

#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types kcg_copy_array__78710

#define kcg_comp_TargetCollection_T_TargetManagement_types kcg_comp_struct__78713

#define kcg_copy_TargetCollection_T_TargetManagement_types kcg_copy_struct__78713

#define kcg_comp_Target_real_T_TargetManagement_types kcg_comp_struct__78693

#define kcg_copy_Target_real_T_TargetManagement_types kcg_copy_struct__78693

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct__78136

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct__78136

#define kcg_comp_ModeDecisionTableType_DataDictionary_Pkg kcg_comp_array__78324

#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg kcg_copy_array__78324

#define kcg_comp_LevelDecisionTableType_DataDictionary_Pkg kcg_comp_array__78330

#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg kcg_copy_array__78330

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__78136

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__78136

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__78136

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__78136

#define kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_comp_struct__78141

#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_copy_struct__78141

#define kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_comp_struct__78147

#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_copy_struct__78147

#define kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg kcg_comp_struct__78153

#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg kcg_copy_struct__78153

#define kcg_comp_trainData_internal_t_SDM_Types_Pkg kcg_comp_struct__78634

#define kcg_copy_trainData_internal_t_SDM_Types_Pkg kcg_copy_struct__78634

#define kcg_comp_SDM_Commands_T_SDM_Types_Pkg kcg_comp_struct__78582

#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg kcg_copy_struct__78582

#define kcg_comp_Brake_status_T_TIU_Types_Pkg kcg_comp_struct__78158

#define kcg_copy_Brake_status_T_TIU_Types_Pkg kcg_copy_struct__78158

#define kcg_comp_OdometrySpeeds_real_T_SDM_Types_Pkg kcg_comp_struct__78641

#define kcg_copy_OdometrySpeeds_real_T_SDM_Types_Pkg kcg_copy_struct__78641

#define kcg_comp_OdometryLocations_real_T_SDM_Types_Pkg kcg_comp_struct__78648

#define kcg_copy_OdometryLocations_real_T_SDM_Types_Pkg kcg_copy_struct__78648

#define kcg_comp_Odometry_real_T_SDM_Types_Pkg kcg_comp_struct__78654

#define kcg_copy_Odometry_real_T_SDM_Types_Pkg kcg_copy_struct__78654

#define kcg_comp_SDM_Commands_real_T_SDM_Types_Pkg kcg_comp_struct__78830

#define kcg_copy_SDM_Commands_real_T_SDM_Types_Pkg kcg_copy_struct__78830

#define kcg_comp_TrainLocations_real_T_SDM_Types_Pkg kcg_comp_struct__78720

#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg kcg_copy_struct__78720

#define kcg_comp_SDM_Locations_T_SDM_Types_Pkg kcg_comp_struct__78773

#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg kcg_copy_struct__78773

#define kcg_comp_Speeds_T_SDM_Types_Pkg kcg_comp_struct__78757

#define kcg_copy_Speeds_T_SDM_Types_Pkg kcg_copy_struct__78757

#define kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_comp_struct__78167

#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_copy_struct__78167

#define kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_comp_struct__78178

#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_copy_struct__78178

#define kcg_comp_trainData_T_TIU_Types_Pkg kcg_comp_struct__77895

#define kcg_copy_trainData_T_TIU_Types_Pkg kcg_copy_struct__77895

#define kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg kcg_comp_struct__78187

#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg kcg_copy_struct__78187

#define kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg kcg_comp_struct__79271

#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg kcg_copy_struct__79271

#define kcg_comp_M_current_T_TIU_Types_Pkg kcg_comp_struct__79277

#define kcg_copy_M_current_T_TIU_Types_Pkg kcg_copy_struct__79277

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct__78136

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct__78136

#define kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_comp_struct__79282

#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_copy_struct__79282

#define kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg kcg_comp_struct__79288

#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg kcg_copy_struct__79288

#define kcg_comp_M_voltage_T_TIU_Types_Pkg kcg_comp_struct__79293

#define kcg_copy_M_voltage_T_TIU_Types_Pkg kcg_copy_struct__79293

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct__78136

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct__78136

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct__78136

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct__78136

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

