/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
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
/* TrackAtlasTypes::MA_Level_t */
typedef enum {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
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
/* Q_SECTIONTIMER */
typedef enum {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
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
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
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
/* Levels_Pkg::LevelStateMachine::MainLevelOutput */
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
/* Levels_Pkg::LevelStateMachine::MainLevelOutput */
typedef enum {
  SSM_st_Level_L1_MainLevelOutput,
  SSM_st_Level_L2_MainLevelOutput,
  SSM_st_Level_L3_MainLevelOutput,
  SSM_st_Level_L0_MainLevelOutput,
  SSM_st_Level_NTC_MainLevelOutput
} SSM_ST_MainLevelOutput;
/* Levels_Pkg::DriverAck::DriverAck */
typedef enum {
  SSM_TR_no_trans_DriverAck,
  SSM_TR_Idle_1_DriverAck,
  SSM_TR_WaitingForAck_1_DriverAck,
  SSM_TR_WaitingForAck_2_DriverAck,
  SSM_TR_WaitingForPassingComplete_1_DriverAck
} SSM_TR_DriverAck;
/* Levels_Pkg::DriverAck::DriverAck */
typedef enum {
  SSM_st_Idle_DriverAck,
  SSM_st_WaitingForAck_DriverAck,
  SSM_st_WaitingForPassingComplete_DriverAck
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

/* V_MAIN */
typedef kcg_int V_MAIN;

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
} struct__80211;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__80211 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__80211 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__80211 array__80217[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__80217 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__80217 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__80220;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__80220 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__80220 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__80220 array__80227[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__80227 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__80227 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__80227 n_iter_k_m_list;
} struct__80230;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__80230 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__80230 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__80230 array__80242[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__80242 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__80242 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__80245;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__80245 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__80245 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__80245 array__80252[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__80252 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__80252 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

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
} struct__80255;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__80255 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__80286;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__80286 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} struct__80291;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct__80291 nvkrint_T_Packet_Types_Pkg;

typedef nvkrint_T_Packet_Types_Pkg array__80297[7];

/* Packet_Types_Pkg::nvkrintArray_T */
typedef array__80297 nvkrintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} struct__80300;

/* Packet_Types_Pkg::nvkvint_T */
typedef struct__80300 nvkvint_T_Packet_Types_Pkg;

typedef nvkvint_T_Packet_Types_Pkg array__80307[7];

/* Packet_Types_Pkg::nvkvintArray_T */
typedef array__80307 nvkvintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} struct__80310;

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct__80310 nvkvintset_T_Packet_Types_Pkg;

typedef nvkvintset_T_Packet_Types_Pkg array__80318[7];

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef array__80318 nvkvintsetArray_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__80321;

/* Packet_Types_Pkg::nidC_T */
typedef struct__80321 nidC_T_Packet_Types_Pkg;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__80321 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__80321 P003V1_section_enum_T_TM_baseline2;

typedef nidC_T_Packet_Types_Pkg array__80326[7];

/* Packet_Types_Pkg::nidCArray_T */
typedef array__80326 nidCArray_T_Packet_Types_Pkg;

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
} struct__80329;

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct__80329 P3_NationalValues_T_Packet_Types_Pkg;

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
} struct__80368;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__80368 LinkedBG_T_BG_Types_Pkg;

typedef struct__80368 array__80382[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__80382 LinkedBGs_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  kcg_int nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__80388;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__80388 MetadataElement_T_Common_Types_Pkg;

typedef struct__80388 array__80396[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__80396 Metadata_T_Common_Types_Pkg;

typedef struct {
  array__80396 PacketHeaders;
  array_int_500 PacketData;
} struct__80399;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__80399 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__80404;

/* TM::P005_section_enum_T */
typedef struct__80404 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__80415[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__80415 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__80418;

/* TM::P005_OBU_T */
typedef struct__80418 P005_OBU_T_TM;

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
} struct__80433;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__80433 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__80451;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__80451 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__80463;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__80463 RBC_Id_T_Common_Types_Pkg;

typedef struct {
  kcg_int v_safeNominal;
  kcg_int v_rawNominal;
  kcg_int v_lower;
  kcg_int v_upper;
} struct__80470;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__80470 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int o_nominal;
  kcg_int o_min;
  kcg_int o_max;
} struct__80477;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__80477 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  struct__80477 odo;
  struct__80470 speed;
  kcg_int acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__80483;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__80483 odometry_T_Obu_BasicTypes_Pkg;

typedef struct { kcg_int nominal; kcg_int d_min; kcg_int d_max; } struct__80493;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__80493 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
  struct__80483 bgPosition;
  struct__80493 BG_centerDetectionInaccuraccuracies;
  kcg_int q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__80499;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__80499 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__80517;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__80517 ReceivedMessage_T_Common_Types_Pkg;

/* MoRC_Pck::genMessage_T */
typedef ReceivedMessage_T_Common_Types_Pkg genMessage_T_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  struct__80499 BG_Header;
  array__80382 linkedBGs;
} struct__80527;

/* BG_Types_Pkg::passedBG_T */
typedef struct__80527 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_bg_fromLinkingBG;
  kcg_int nid_c_fromLinkingBG;
  struct__80493 expectedLocation;
  struct__80493 d_link;
  struct__80368 linkingInfo;
} struct__80533;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__80533 infoFromLinking_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__80493 location;
  kcg_int seqNoOnTrack;
  struct__80533 infoFromLinking;
  struct__80527 infoFromPassing;
} struct__80542;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__80542 positionedBG_T_TrainPosition_Types_Pck;

typedef positionedBG_T_TrainPosition_Types_Pck array__80553[8];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef array__80553 positionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} struct__80556;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct__80556 BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} struct__80562;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct__80562 BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} struct__80571;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct__80571 linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg array__80577[8];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef array__80577 linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__80580;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__80580 trainProperties_T_TrainPosition_Types_Pck;

typedef struct {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} struct__80590;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct__80590 refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} struct__80598;

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct__80598 positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

typedef positionedBG_T_TrainPosition_Types_Pck array__80603[4];

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef array__80603 linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck;

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
} struct__80606;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct__80606 positionErrors_T_TrainPosition_Types_Pck;

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
} struct__80618;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct__80618 trainPositionInfo_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  struct__80493 trainPosition;
  kcg_int estimatedFrontEndPosition;
  kcg_int minSafeFrontEndPosition;
  kcg_int maxSafeFrontEndPostion;
  struct__80542 LRBG;
  struct__80542 prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
} struct__80631;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__80631 trainPosition_T_TrainPosition_Types_Pck;

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
} struct__80648;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct__80648 P80_ModeProfile_T_Packet_Types_Pkg;

typedef P80_ModeProfile_T_Packet_Types_Pkg array__80660[3];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef array__80660 P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__80663;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__80663 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__80672[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__80672 P21_GradientProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__80675;

/* TM::P021_section_enum_T */
typedef struct__80675 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__80682[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__80682 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__80685;

/* TM::P021_OBU_T */
typedef struct__80685 P021_OBU_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

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
} struct__80699;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct__80699 P15_Level23MovementAuthority_T_Packet_Types_Pkg;

typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg array__80726[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef array__80726 P15_Level23MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__80729;

/* TM::P015_section_enum_T */
typedef struct__80729 P015_section_enum_T_TM;

/* TM::P012_section_enum_T */
typedef struct__80729 P012_section_enum_T_TM;

typedef P015_section_enum_T_TM array__80737[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__80737 P015_OBU_sectionlist_enum_T_TM;

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
} struct__80740;

/* TM::P015_OBU_T */
typedef struct__80740 P015_OBU_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

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
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_REVERSE d_reverse;
  V_REVERSE v_reverse;
} struct__80774;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct__80774 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

/* TM::P139_OBU_T */
typedef struct__80774 P139_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STARTREVERSE d_startreverse;
  L_REVERSEAREA l_reversearea;
} struct__80782;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct__80782 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

/* TM::P138_OBU_T */
typedef struct__80782 P138_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__80790;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__80790 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__80796;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__80796 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__80802[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__80802 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__80805;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__80805 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__80814[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__80814 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__80817;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__80817 P027V1_OBU_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__80824;

/* Packet_Types_Pkg::Diff_T */
typedef struct__80824 Diff_T_Packet_Types_Pkg;

typedef Diff_T_Packet_Types_Pkg array__80832[7];

/* Packet_Types_Pkg::DiffArray_T */
typedef array__80832 DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} struct__80835;

/* Packet_Types_Pkg::SSP_T */
typedef struct__80835 SSP_T_Packet_Types_Pkg;

typedef SSP_T_Packet_Types_Pkg array__80843[7];

/* Packet_Types_Pkg::SSPArray_T */
typedef array__80843 SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} struct__80846;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct__80846 P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__80857;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__80857 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__80866;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct__80866 P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg array__80873[7];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef array__80873 P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__80876;

/* TM::P046_section_enum_T */
typedef struct__80876 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__80882[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__80882 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} struct__80885;

/* TM::P046_OBU_T */
typedef struct__80885 P046_OBU_T_TM;

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
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__80898;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct__80898 P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg array__80908[7];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef array__80908 P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__80911;

/* TM::P041_section_enum_T */
typedef struct__80911 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__80918[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__80918 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__80921;

/* TM::P041_OBU_T */
typedef struct__80921 P041_OBU_T_TM;

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
} struct__80930;

/* TM::P012_OBU_T */
typedef struct__80930 P012_OBU_T_TM;

typedef kcg_int array_int_7[7];

/* TM::Array07 */
typedef array_int_7 Array07_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; } struct__80959;

/* TM::P135_OBU_T */
typedef struct__80959 P135_OBU_T_TM;

typedef struct {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
  kcg_bool T_NVCONTACT_Overpass;
} struct__80964;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct__80964 T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

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
} struct__80974;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct__80974 T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__80989;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__80989 Gradient_section_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__80997;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct__80997 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__80997 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__81004[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__81004 GradientProfile_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__81007[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__81007 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef struct__80321 array__81010[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__81010 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__81010 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__81013;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__81013 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__81046;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__81046 MovementAuthoritySection_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__81055;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__81055 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__81060;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__81060 DP_or_OL_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__81066[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__81066 MovementAuthoritySectionlist_t_TrackAtlasTypes;

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
} struct__81069;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__81069 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__81087;

/* TA_MRSP::SSP_section_t */
typedef struct__81087 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__81092[33];

/* TA_MRSP::SSP_cat_t */
typedef array__81092 SSP_cat_t_TA_MRSP;

typedef array__81092 array__81095[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__81095 SSP_matrix_t_TA_MRSP;

typedef struct {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t_TA_MRSP Loc;
} struct__81098;

/* TA_MRSP::SSP_t_indexed_matrix_element */
typedef struct__81098 SSP_t_indexed_matrix_element_TA_MRSP;

typedef SSP_t_indexed_matrix_element_TA_MRSP array__81104[363];

/* TA_MRSP::SSP_t_list_t */
typedef array__81104 SSP_t_list_t_TA_MRSP;

typedef SSP_t_section_t_TA_MRSP array_int_33[33];

/* TA_MRSP::SSP_t_cat_t */
typedef array_int_33 SSP_t_cat_t_TA_MRSP;

typedef array_int_33 array_int_33_11[11];

/* TA_MRSP::SSP_t_matrix_t */
typedef array_int_33_11 SSP_t_matrix_t_TA_MRSP;

typedef struct { kcg_bool Found; kcg_int Index; } struct__81113;

/* TA_MRSP::SSP_Mark_ValidSSPsection */
typedef struct__81113 SSP_Mark_ValidSSPsection_TA_MRSP;

typedef struct {
  kcg_bool found;
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} struct__81118;

/* TA_MRSP::SSP_valid_section_t */
typedef struct__81118 SSP_valid_section_t_TA_MRSP;

typedef struct { kcg_int index; SSP_t_section_t_TA_MRSP target; } struct__81124;

/* TA_MRSP::SSP_relevant_target_t */
typedef struct__81124 SSP_relevant_target_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__81129;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct__81129 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__81129 MRSP_section_t_TrackAtlasTypes;

typedef struct { kcg_int Index; SSP_target_t_TA_MRSP Loc; } struct__81136;

/* TA_MRSP::SSP_t_indexed_trgt_t */
typedef struct__81136 SSP_t_indexed_trgt_t_TA_MRSP;

typedef SSP_t_indexed_trgt_t_TA_MRSP array__81141[11];

/* TA_MRSP::SSP_t_indexed_targets_list_t */
typedef array__81141 SSP_t_indexed_targets_list_t_TA_MRSP;

typedef MRSP_section_t_TrackAtlasTypes array__81144[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__81144 MRSP_Profile_t_TrackAtlasTypes;

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
} struct__81147;

/* TM::P003_OBU_T */
typedef struct__81147 P003_OBU_T_TM;

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
} struct__81202;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__81202 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__81214;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__81214 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__81219[3];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__81219 aTractionIdentity_T_Packet_TrainTypes_Pkg;

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
} struct__81222;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__81222 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} struct__81238;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__81238 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__81243;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__81243 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR M_ERROR; } struct__81248;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__81248 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__81253;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__81253 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__81258[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__81258 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__81261;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__81261 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

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
} struct__81267;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__81267 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__81287;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__81287 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__81292;

/* TrainToTrack::Position_Report */
typedef struct__81292 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__81311;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__81311 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__81316;

/* Common_Types_Pkg::outPackets_T */
typedef struct__81316 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__81326;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__81326 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__81332;

/* MA_Request::Driver2MAR_T */
typedef struct__81332 Driver2MAR_T_MA_Request;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__81337;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__81337 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef struct {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg p15;
  P21_GradientProfiles_T_Packet_Types_Pkg p21;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg p27;
} struct__81345;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__81345 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__81354;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__81354 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__81363;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__81363 DataForDMI_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; M_LEVEL level; M_MODE Mode; } struct__81370;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__81370 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct { M_LEVEL level; NID_STM_DMI_Types_Pkg nid_stm; } struct__81376;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct__81376 DMI_level_T_DMI_Types_Pkg;

typedef DMI_level_T_DMI_Types_Pkg array__81381[32];

/* DMI_Types_Pkg::DMI_level_array_T */
typedef array__81381 DMI_level_array_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} struct__81384;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct__81384 DMI_LevelList_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} struct__81389;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct__81389 ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

typedef struct {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} struct__81396;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct__81396 trainData_Events_T_trainData_Types_pkg;

typedef struct {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} struct__81405;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct__81405 trainData_Trigger_T_trainData_Types_pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool validatedbyRBC;
  kcg_bool watingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} struct__81413;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct__81413 trainDataStatus_T_trainData_Types_pkg;

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
} struct__81422;

/* TIU_Types_Pkg::trainData_T */
typedef struct__81422 trainData_T_TIU_Types_Pkg;

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
} struct__81440;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct__81440 DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} struct__81452;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct__81452 DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} struct__81458;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct__81458 DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

typedef struct { kcg_int now; kcg_int distance; } struct__81464;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct__81464 D_test_distance_T_TIU_Types_Pkg;

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
} struct__81469;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct__81469 nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} struct__81475;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct__81475 Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int pressure; } struct__81481;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct__81481 Brake_pressure_value_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} struct__81486;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct__81486 Brake_status_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} struct__81495;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct__81495 Mode_control_and_train_status_T_TIU_Types_Pkg;

typedef struct {
  Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} struct__81506;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct__81506 Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} struct__81515;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct__81515 TIU_trainStatus_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg info;
} struct__81522;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct__81522 TIU_Input_msg_API_TIU_Pkg;

typedef struct { kcg_bool present; M_ERROR errorType; } struct__81527;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct__81527 ErrorMessage_T_ProvidePositionReport_Pkg;

typedef struct {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} struct__81532;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct__81532 ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

typedef struct { NID_NTC nid_ntc; Q_LENGTH q_length; } struct__81538;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct__81538 TrainToTrackStatus_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} struct__81543;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct__81543 ReportedBG_T_ProvidePositionReport_Pkg;

typedef ReportedBG_T_ProvidePositionReport_Pkg array__81549[8];

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef array__81549 ReportedBGList_T_ProvidePositionReport_Pkg;

typedef struct { kcg_bool newSessionEstablished; } struct__81552;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct__81552 RBC_Communication_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} struct__81556;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct__81556 LocationBasedEvents_T_ProvidePositionReport_Pkg;

typedef struct { D_LOC d_loc; Q_LGTLOC q_lgtloc; } struct__81561;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct__81561 IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__81566[2];

/* Packet_Types_Pkg::IterPacket58List_T */
typedef array__81566 IterPacket58List_T_Packet_Types_Pkg;

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
} struct__81569;

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct__81569 P58_PositionReportParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} struct__81582;

/* TM::P058_section_enum_T */
typedef struct__81582 P058_section_enum_T_TM;

typedef P058_section_enum_T_TM array__81588[32];

/* TM::P058_OBU_sectionlist_enum_T */
typedef array__81588 P058_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} struct__81591;

/* TM::P058_OBU_T */
typedef struct__81591 P058_OBU_T_TM;

typedef kcg_int array_int_8[8];

/* TM::Array08 */
typedef array_int_8 Array08_TM;

typedef struct {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} struct__81605;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct__81605 API_RadioMsgHeader_T_API_Msg_Pkg;

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
} struct__81613;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__81613 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} struct__81626;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct__81626 centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} struct__81631;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct__81631 API_TelegramHeader_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__81640;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct__81640 API_TrackSideInput_T_API_Msg_Pkg;

typedef struct {
  P41_LevelTransistionOrders_T_Packet_Types_Pkg P41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg P46;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} struct__81649;

/* Level_And_Mode_Types_Pkg::T_Data_From_TrackForLevelChange */
typedef struct__81649 T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} struct__81660;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct__81660 filterRelatedEvents_T_Common_Types_Pkg;

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
} struct__81671;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct__81671 MSG_Errors_T_Common_Types_Pkg;

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array__81683[17];

typedef array__81683 array__81686[256];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array__81686 ModeDecisionTableType_DataDictionary_Pkg;

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array__81689[5];

typedef array__81689 array__81692[256];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array__81692 LevelDecisionTableType_DataDictionary_Pkg;

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
} struct__81701;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct__81701 RadioMessage_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__81710;

/* BG_Types_Pkg::Telegram_T */
typedef struct__81710 Telegram_T_BG_Types_Pkg;

typedef Telegram_T_BG_Types_Pkg array__81717[8];

/* BG_Types_Pkg::TelegramArray_T */
typedef array__81717 TelegramArray_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__81720;

/* BG_Types_Pkg::BG_Message_T */
typedef struct__81720 BG_Message_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} struct__81727;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct__81727 TrackSide_ForCheck_T_Common_Types_Pkg;

typedef struct {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} struct__81735;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct__81735 BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} struct__81746;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct__81746 TelegramStore_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} struct__81752;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct__81752 DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  M_LEVEL level;
  kcg_int position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
} struct__81758;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct__81758 T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} struct__81764;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct__81764 DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool is_set;
  struct__81758 transition;
  kcg_int LRBG;
  kcg_int referenceLocation;
} struct__81770;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct__81770 T_LevelTransition_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} struct__81777;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct__81777 DMI_DriverRequest_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} struct__81787;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct__81787 DMI_TXT_MSG_status_T_DMI_Types_Pkg;

typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg array__81798[31];

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef array__81798 DMI_TXT_MSGList_status_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} struct__81801;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct__81801 DMI_DriverAck_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} struct__81807;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct__81807 DMI_To_Modes_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} struct__81814;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct__81814 DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} struct__81821;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct__81821 DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} struct__81827;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct__81827 DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

typedef kcg_char array_char_9[9];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef array_char_9 driverIdentifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} struct__81836;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct__81836 DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} struct__81842;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct__81842 DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} struct__81847;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct__81847 DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__81857;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct__81857 DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__81867;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct__81867 DMI_to_EVC_Message_T_API_DMI_Pkg;

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
} struct__81883;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct__81883 DMI_EVC_status_T_DMI_Types_Pkg;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} struct__81895;

/* TargetManagement_types::Target_T */
typedef struct__81895 Target_T_TargetManagement_types;

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
} struct__81902;

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct__81902 SDM_Commands_T_SDM_Types_Pkg;

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
} struct__81935;

/* SDMConversionModelPkg::t_Brake_t */
typedef struct__81935 t_Brake_t_SDMConversionModelPkg;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} struct__81940;

/* TargetLimits_Pkg::bec_t */
typedef struct__81940 bec_t_TargetLimits_Pkg;

typedef struct {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
} struct__81945;

/* TargetLimits_Pkg::T_trac_t */
typedef struct__81945 T_trac_t_TargetLimits_Pkg;

typedef struct {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  kcg_real T_traction_cut_off;
} struct__81954;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct__81954 trainData_internal_t_SDM_Types_Pkg;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg v_safeNominal;
  V_internal_real_Type_SDM_Types_Pkg v_rawNominal;
  V_internal_real_Type_SDM_Types_Pkg v_lower;
  V_internal_real_Type_SDM_Types_Pkg v_upper;
} struct__81961;

/* SDM_Types_Pkg::OdometrySpeeds_real_T */
typedef struct__81961 OdometrySpeeds_real_T_SDM_Types_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg o_nominal;
  L_internal_real_Type_SDM_Types_Pkg o_min;
  L_internal_real_Type_SDM_Types_Pkg o_max;
} struct__81968;

/* SDM_Types_Pkg::OdometryLocations_real_T */
typedef struct__81968 OdometryLocations_real_T_SDM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_real_Type_SDM_Types_Pkg timestamp;
  OdometryLocations_real_T_SDM_Types_Pkg odo;
  OdometrySpeeds_real_T_SDM_Types_Pkg speed;
  A_internal_real_Type_SDM_Types_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__81974;

/* SDM_Types_Pkg::Odometry_real_T */
typedef struct__81974 Odometry_real_T_SDM_Types_Pkg;

typedef struct {
  kcg_real distance;
  kcg_real speed;
  kcg_real acceleration;
} struct__81984;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct__81984 ParabolaArc_T_CalcBrakingCurves_types;

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
} struct__81996;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct__81996 ParabolaCurve_T_CalcBrakingCurves_types;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg SBI2;
  kcg_int index;
  TargetType_T_TargetManagement_types ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_Pkg V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_Pkg V_ura;
} struct__82003;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct__82003 TargetIteratorAkku_TargetLimits_Pkg;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  kcg_real distance;
  kcg_real speed;
} struct__82013;

/* TargetManagement_types::Target_real_T */
typedef struct__82013 Target_real_T_TargetManagement_types;

typedef ParabolaCurve_T_CalcBrakingCurves_types array__82019[200];

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef array__82019 ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} struct__82022;

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct__82022 CurveCollection_T_CalcBrakingCurves_types;

typedef Target_real_T_TargetManagement_types array__82030[200];

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef array__82030 Target_list_MRSP_real_T_TargetManagement_types;

typedef struct {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_target;
} struct__82033;

/* TargetManagement_types::TargetCollection_T */
typedef struct__82033 TargetCollection_T_TargetManagement_types;

typedef struct {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_antenna2frontend;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} struct__82040;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct__82040 TrainLocations_real_T_SDM_Types_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} struct__82050;

/* TargetManagement_types::EOA_real_T */
typedef struct__82050 EOA_real_T_TargetManagement_types;

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
} struct__82055;

/* TargetManagement_types::MA_section_real_T */
typedef struct__82055 MA_section_real_T_TargetManagement_types;

typedef struct {
  kcg_real Loc_Abs;
  kcg_real MRS;
  kcg_bool valid;
} struct__82068;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct__82068 MRSP_internal_section_T_TargetManagement_types;

typedef MRSP_internal_section_T_TargetManagement_types array__82074[200];

/* TargetManagement_types::MRSP_internal_T */
typedef array__82074 MRSP_internal_T_TargetManagement_types;

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
} struct__82077;

/* SDM_Types_Pkg::Speeds_T */
typedef struct__82077 Speeds_T_SDM_Types_Pkg;

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
} struct__82093;

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct__82093 SDM_Locations_T_SDM_Types_Pkg;

typedef struct {
  array__82030 targetList;
  kcg_int lastInsertedTargetIndex;
} struct__82116;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct__82116 extractTargetsMRSPACC_TargetManagement_pkg;

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
} struct__82130;

/* CalcBrakingCurves_types::ASafe_T */
typedef struct__82130 ASafe_T_CalcBrakingCurves_types;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} struct__82136;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct__82136 BCAccumulator_type_CalcBrakingCurves_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} struct__82144;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct__82144 Brake_command_T_TIU_Types_Pkg;

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
} struct__82150;

/* SDM_Types_Pkg::SDM_Commands_real_T */
typedef struct__82150 SDM_Commands_real_T_SDM_Types_Pkg;

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
} struct__82177;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct__82177 speedSupervisionForDMI_T_DMI_Types_Pkg;

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
} struct__82190;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct__82190 TSM_triggerCond_T_SDM_Commands_Pkg;

typedef kcg_bool array_bool_14[14];

/* SDM_Commands_Pkg::MyArray */
typedef array_bool_14 MyArray_SDM_Commands_Pkg;

typedef struct {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} struct__82210;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct__82210 TSM_revokeCond_T_SDM_Commands_Pkg;

typedef struct {
  kcg_bool valid;
  mobileHWAction_Type_MoRC_Pck action;
  NID_MN radioNetworkID;
  NID_RADIO nid_radio;
} struct__82217;

/* MoRC_Pck::mobileHWCmd_Type */
typedef struct__82217 mobileHWCmd_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} struct__82224;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct__82224 RadioManagement_T_API_RadioCommunication_Pkg;

typedef struct {
  Radio_TrainTrack_Message_T_Radio_Types_Pkg firstOutput;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg secondOutput;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg thirdOutput;
  RadioManagement_T_API_RadioCommunication_Pkg radioEVCtoUnit;
} struct__82230;

/* API_RadioCommunication_Pkg::API_EuroRadioOutput_T */
typedef struct__82230 API_EuroRadioOutput_T_API_RadioCommunication_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; NID_MN nid_mn; } struct__82237;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct__82237 P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__82243;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct__82243 P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__82253;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct__82253 radioManagementMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool mobileHW_available;
  mobileSWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_int registeredRadioNetworkID;
  kcg_bool settingUpConnectionHasFailed;
} struct__82262;

/* MoRC_Pck::mobileSWStatus_Type */
typedef struct__82262 mobileSWStatus_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} struct__82270;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct__82270 DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__82276;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct__82276 DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} struct__82288;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct__82288 DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} struct__82294;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct__82294 DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} struct__82300;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct__82300 DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} struct__82306;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct__82306 DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} struct__82312;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct__82312 DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} struct__82322;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct__82322 DMI_trackConditionElement_T_DMI_Types_Pkg;

typedef DMI_trackConditionElement_T_DMI_Types_Pkg array__82327[32];

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef array__82327 DMI_trackConditionArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} struct__82330;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct__82330 DMI_trackCondition_T_DMI_Types_Pkg;

typedef DMI_gradientProfileElement_T_DMI_Types_Pkg array__82335[32];

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef array__82335 DMI_gradientProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} struct__82338;

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct__82338 DMI_gradientProfile_T_DMI_Types_Pkg;

typedef DMI_speedProfileElement_T_DMI_Types_Pkg array__82343[32];

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef array__82343 DMI_SpeedProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} struct__82346;

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct__82346 DMI_speedProfile_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} struct__82351;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct__82351 DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} struct__82359;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct__82359 DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
} struct__82370;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct__82370 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct__82370 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct__82370 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct__82370 DMI_loadingGauge_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} struct__82377;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct__82377 DMI_train_length_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} struct__82385;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct__82385 DMI_train_id_T_DMI_Types_Pkg;

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
} struct__82394;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct__82394 DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__82406;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct__82406 DMI_Available_Menu_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} struct__82439;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct__82439 DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__82445;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct__82445 DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__82471;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct__82471 EVC_to_DMI_Message_T_API_DMI_Pkg;

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
} struct__82491;

/* MoRC_Pck::Coder_Pkg::p42e_SessionManagement_T */
typedef struct__82491 p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg;

typedef struct {
  kcg_bool valid;
  M_VERSION version;
  kcg_bool systemVersionFromTracksideSupported;
} struct__82505;

/* MoRC_Pck::Coder_Pkg::m32e_RBC_or_RIU_System_Version_T */
typedef struct__82505 m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg;

typedef struct {
  kcg_bool valid;
  safeRadioConnectionStatus_Type_MoRC_Pck status;
} struct__82511;

/* MoRC_Pck::safeRadioConnectionStatusValid_Type */
typedef struct__82511 safeRadioConnectionStatusValid_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} struct__82516;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct__82516 mobileHWStatus_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  mobileSWAction_Type_MoRC_Pck action;
  NID_MN radioNetworkID;
} struct__82523;

/* MoRC_Pck::mobileSWCmd_Type */
typedef struct__82523 mobileSWCmd_Type_MoRC_Pck;

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
  kcg_bool systemVersionFromTracksideSupported;
} struct__82529;

/* MoRC_Pck::obuEventsAndPhases_T */
typedef struct__82529 obuEventsAndPhases_T_MoRC_Pck;

typedef struct {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} struct__82554;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct__82554 radioNetWorkIDs_T_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
  M_LEVEL newLevel;
  M_LEVEL previousLevel;
} struct__82560;

/* DMI_Types_Pkg::DMI_ModesToDMI_T */
typedef struct__82560 DMI_ModesToDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} struct__82569;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct__82569 movementAuthorityForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} struct__82575;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct__82575 nationValuesForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} struct__82581;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct__82581 dmiOutputs_T_manage_DMI_Output_Pkg;

typedef struct {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} struct__82586;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct__82586 T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  kcg_bool Linked_BG_In_Wrong_Direction;
  struct__80631 Train_Position;
  kcg_int Train_Speed;
  kcg_bool Train_Standstill;
} struct__82594;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct__82594 T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
} struct__82603;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct__82603 T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} struct__82610;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct__82610 T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} struct__82619;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct__82619 TIU_commandStatus_T_TIU_Types_Pkg;

typedef struct { kcg_bool no_restriction; kcg_int restriction; } struct__82625;

/* TIU_Types_Pkg::M_current_T */
typedef struct__82625 M_current_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} struct__82630;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct__82630 Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int door_control_info; } struct__82636;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct__82636 Passenger_door_control_info_T_TIU_Types_Pkg;

typedef struct {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} struct__82641;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct__82641 M_voltage_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} struct__82646;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct__82646 Change_traction_system_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} struct__82652;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct__82652 Type_I_train_commands_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} struct__82660;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct__82660 Brake_inhibition_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} struct__82667;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct__82667 Isolation_Status_T_TIU_Types_Pkg;

typedef struct {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} struct__82672;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct__82672 Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} struct__82682;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct__82682 TIU_Output_msg_API_TIU_Pkg;

typedef kcg_bool array_bool_20[20];

/* Level_And_Mode_Types_Pkg::T_TransitionConditions */
typedef array_bool_20 T_TransitionConditions_Level_And_Mode_Types_Pkg;

typedef T_LevelTransition_Level_And_Mode_Types_Pkg array__82690[5];

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef array__82690 T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg;

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
} struct__82693;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct__82693 T_Data_From_DMI_Level_And_Mode_Types_Pkg;

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
} struct__82710;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct__82710 T_Data_To_DMI_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} struct__82722;

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct__82722 T_Reversing_Data_Level_And_Mode_Types_Pkg;

typedef struct {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} struct__82730;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct__82730 T_Mode_Profile_Level_And_Mode_Types_Pkg;

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
} struct__82738;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track */
typedef struct__82738 T_Data_From_Track_Level_And_Mode_Types_Pkg;

typedef T_Mode_Profile_Level_And_Mode_Types_Pkg array__82755[5];

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef array__82755 T_Mode_Profile_Table_Level_And_Mode_Types_Pkg;

typedef kcg_bool array_bool_4[4];

typedef struct { kcg_int idx; array_bool_4 items; } struct__82761;

typedef kcg_bool array_bool_1[1];

typedef kcg_real array_real_1[1];

typedef Target_real_T_TargetManagement_types array__82772[1];

typedef kcg_bool array_bool_8[8];

typedef kcg_bool array_bool_30[30];

typedef ReceivedMessage_T_Common_Types_Pkg array__82781[3];

typedef ErrorMessage_T_ProvidePositionReport_Pkg array__82784[9];

typedef SSP_t_indexed_matrix_element_TA_MRSP array__82787[11];

typedef P027V1_section_enum_T_TM_baseline2 array__82790[1];

typedef struct__80321 array__82793[1];

typedef positionedBG_T_TrainPosition_Types_Pck array__82796[1];

typedef kcg_int array_int_1[1];

typedef kcg_real array_real_24[24];

typedef kcg_bool array_bool_24[24];

typedef Target_real_T_TargetManagement_types array__85687[199];

typedef P027V1_section_enum_T_TM_baseline2 array__86192[32];

typedef SSP_section_t_TA_MRSP array__86199[32];

typedef P003_OBU_nid_c_section_enum_T_TM array__86240[31];

typedef positionedBG_T_TrainPosition_Types_Pck array__86322[7];

#ifndef kcg_copy_struct__80211
#define kcg_copy_struct__80211(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80211)))
#endif /* kcg_copy_struct__80211 */

#ifndef kcg_copy_struct__80220
#define kcg_copy_struct__80220(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80220)))
#endif /* kcg_copy_struct__80220 */

#ifndef kcg_copy_struct__80230
#define kcg_copy_struct__80230(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80230)))
#endif /* kcg_copy_struct__80230 */

#ifndef kcg_copy_struct__80245
#define kcg_copy_struct__80245(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80245)))
#endif /* kcg_copy_struct__80245 */

#ifndef kcg_copy_struct__80255
#define kcg_copy_struct__80255(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80255)))
#endif /* kcg_copy_struct__80255 */

#ifndef kcg_copy_struct__80286
#define kcg_copy_struct__80286(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80286)))
#endif /* kcg_copy_struct__80286 */

#ifndef kcg_copy_struct__80291
#define kcg_copy_struct__80291(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80291)))
#endif /* kcg_copy_struct__80291 */

#ifndef kcg_copy_struct__80300
#define kcg_copy_struct__80300(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80300)))
#endif /* kcg_copy_struct__80300 */

#ifndef kcg_copy_struct__80310
#define kcg_copy_struct__80310(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80310)))
#endif /* kcg_copy_struct__80310 */

#ifndef kcg_copy_struct__80321
#define kcg_copy_struct__80321(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80321)))
#endif /* kcg_copy_struct__80321 */

#ifndef kcg_copy_struct__80329
#define kcg_copy_struct__80329(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80329)))
#endif /* kcg_copy_struct__80329 */

#ifndef kcg_copy_struct__80368
#define kcg_copy_struct__80368(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80368)))
#endif /* kcg_copy_struct__80368 */

#ifndef kcg_copy_struct__80388
#define kcg_copy_struct__80388(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80388)))
#endif /* kcg_copy_struct__80388 */

#ifndef kcg_copy_struct__80399
#define kcg_copy_struct__80399(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80399)))
#endif /* kcg_copy_struct__80399 */

#ifndef kcg_copy_struct__80404
#define kcg_copy_struct__80404(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80404)))
#endif /* kcg_copy_struct__80404 */

#ifndef kcg_copy_struct__80418
#define kcg_copy_struct__80418(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80418)))
#endif /* kcg_copy_struct__80418 */

#ifndef kcg_copy_struct__80433
#define kcg_copy_struct__80433(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80433)))
#endif /* kcg_copy_struct__80433 */

#ifndef kcg_copy_struct__80451
#define kcg_copy_struct__80451(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80451)))
#endif /* kcg_copy_struct__80451 */

#ifndef kcg_copy_struct__80463
#define kcg_copy_struct__80463(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80463)))
#endif /* kcg_copy_struct__80463 */

#ifndef kcg_copy_struct__80470
#define kcg_copy_struct__80470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80470)))
#endif /* kcg_copy_struct__80470 */

#ifndef kcg_copy_struct__80477
#define kcg_copy_struct__80477(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80477)))
#endif /* kcg_copy_struct__80477 */

#ifndef kcg_copy_struct__80483
#define kcg_copy_struct__80483(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80483)))
#endif /* kcg_copy_struct__80483 */

#ifndef kcg_copy_struct__80493
#define kcg_copy_struct__80493(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80493)))
#endif /* kcg_copy_struct__80493 */

#ifndef kcg_copy_struct__80499
#define kcg_copy_struct__80499(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80499)))
#endif /* kcg_copy_struct__80499 */

#ifndef kcg_copy_struct__80517
#define kcg_copy_struct__80517(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80517)))
#endif /* kcg_copy_struct__80517 */

#ifndef kcg_copy_struct__80527
#define kcg_copy_struct__80527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80527)))
#endif /* kcg_copy_struct__80527 */

#ifndef kcg_copy_struct__80533
#define kcg_copy_struct__80533(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80533)))
#endif /* kcg_copy_struct__80533 */

#ifndef kcg_copy_struct__80542
#define kcg_copy_struct__80542(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80542)))
#endif /* kcg_copy_struct__80542 */

#ifndef kcg_copy_struct__80556
#define kcg_copy_struct__80556(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80556)))
#endif /* kcg_copy_struct__80556 */

#ifndef kcg_copy_struct__80562
#define kcg_copy_struct__80562(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80562)))
#endif /* kcg_copy_struct__80562 */

#ifndef kcg_copy_struct__80571
#define kcg_copy_struct__80571(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80571)))
#endif /* kcg_copy_struct__80571 */

#ifndef kcg_copy_struct__80580
#define kcg_copy_struct__80580(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80580)))
#endif /* kcg_copy_struct__80580 */

#ifndef kcg_copy_struct__80590
#define kcg_copy_struct__80590(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80590)))
#endif /* kcg_copy_struct__80590 */

#ifndef kcg_copy_struct__80598
#define kcg_copy_struct__80598(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80598)))
#endif /* kcg_copy_struct__80598 */

#ifndef kcg_copy_struct__80606
#define kcg_copy_struct__80606(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80606)))
#endif /* kcg_copy_struct__80606 */

#ifndef kcg_copy_struct__80618
#define kcg_copy_struct__80618(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80618)))
#endif /* kcg_copy_struct__80618 */

#ifndef kcg_copy_struct__80631
#define kcg_copy_struct__80631(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80631)))
#endif /* kcg_copy_struct__80631 */

#ifndef kcg_copy_struct__80648
#define kcg_copy_struct__80648(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80648)))
#endif /* kcg_copy_struct__80648 */

#ifndef kcg_copy_struct__80663
#define kcg_copy_struct__80663(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80663)))
#endif /* kcg_copy_struct__80663 */

#ifndef kcg_copy_struct__80675
#define kcg_copy_struct__80675(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80675)))
#endif /* kcg_copy_struct__80675 */

#ifndef kcg_copy_struct__80685
#define kcg_copy_struct__80685(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80685)))
#endif /* kcg_copy_struct__80685 */

#ifndef kcg_copy_struct__80699
#define kcg_copy_struct__80699(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80699)))
#endif /* kcg_copy_struct__80699 */

#ifndef kcg_copy_struct__80729
#define kcg_copy_struct__80729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80729)))
#endif /* kcg_copy_struct__80729 */

#ifndef kcg_copy_struct__80740
#define kcg_copy_struct__80740(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80740)))
#endif /* kcg_copy_struct__80740 */

#ifndef kcg_copy_struct__80774
#define kcg_copy_struct__80774(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80774)))
#endif /* kcg_copy_struct__80774 */

#ifndef kcg_copy_struct__80782
#define kcg_copy_struct__80782(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80782)))
#endif /* kcg_copy_struct__80782 */

#ifndef kcg_copy_struct__80790
#define kcg_copy_struct__80790(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80790)))
#endif /* kcg_copy_struct__80790 */

#ifndef kcg_copy_struct__80796
#define kcg_copy_struct__80796(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80796)))
#endif /* kcg_copy_struct__80796 */

#ifndef kcg_copy_struct__80805
#define kcg_copy_struct__80805(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80805)))
#endif /* kcg_copy_struct__80805 */

#ifndef kcg_copy_struct__80817
#define kcg_copy_struct__80817(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80817)))
#endif /* kcg_copy_struct__80817 */

#ifndef kcg_copy_struct__80824
#define kcg_copy_struct__80824(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80824)))
#endif /* kcg_copy_struct__80824 */

#ifndef kcg_copy_struct__80835
#define kcg_copy_struct__80835(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80835)))
#endif /* kcg_copy_struct__80835 */

#ifndef kcg_copy_struct__80846
#define kcg_copy_struct__80846(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80846)))
#endif /* kcg_copy_struct__80846 */

#ifndef kcg_copy_struct__80857
#define kcg_copy_struct__80857(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80857)))
#endif /* kcg_copy_struct__80857 */

#ifndef kcg_copy_struct__80866
#define kcg_copy_struct__80866(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80866)))
#endif /* kcg_copy_struct__80866 */

#ifndef kcg_copy_struct__80876
#define kcg_copy_struct__80876(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80876)))
#endif /* kcg_copy_struct__80876 */

#ifndef kcg_copy_struct__80885
#define kcg_copy_struct__80885(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80885)))
#endif /* kcg_copy_struct__80885 */

#ifndef kcg_copy_struct__80898
#define kcg_copy_struct__80898(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80898)))
#endif /* kcg_copy_struct__80898 */

#ifndef kcg_copy_struct__80911
#define kcg_copy_struct__80911(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80911)))
#endif /* kcg_copy_struct__80911 */

#ifndef kcg_copy_struct__80921
#define kcg_copy_struct__80921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80921)))
#endif /* kcg_copy_struct__80921 */

#ifndef kcg_copy_struct__80930
#define kcg_copy_struct__80930(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80930)))
#endif /* kcg_copy_struct__80930 */

#ifndef kcg_copy_struct__80959
#define kcg_copy_struct__80959(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80959)))
#endif /* kcg_copy_struct__80959 */

#ifndef kcg_copy_struct__80964
#define kcg_copy_struct__80964(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80964)))
#endif /* kcg_copy_struct__80964 */

#ifndef kcg_copy_struct__80974
#define kcg_copy_struct__80974(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80974)))
#endif /* kcg_copy_struct__80974 */

#ifndef kcg_copy_struct__80989
#define kcg_copy_struct__80989(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80989)))
#endif /* kcg_copy_struct__80989 */

#ifndef kcg_copy_struct__80997
#define kcg_copy_struct__80997(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__80997)))
#endif /* kcg_copy_struct__80997 */

#ifndef kcg_copy_struct__81013
#define kcg_copy_struct__81013(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81013)))
#endif /* kcg_copy_struct__81013 */

#ifndef kcg_copy_struct__81046
#define kcg_copy_struct__81046(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81046)))
#endif /* kcg_copy_struct__81046 */

#ifndef kcg_copy_struct__81055
#define kcg_copy_struct__81055(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81055)))
#endif /* kcg_copy_struct__81055 */

#ifndef kcg_copy_struct__81060
#define kcg_copy_struct__81060(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81060)))
#endif /* kcg_copy_struct__81060 */

#ifndef kcg_copy_struct__81069
#define kcg_copy_struct__81069(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81069)))
#endif /* kcg_copy_struct__81069 */

#ifndef kcg_copy_struct__81087
#define kcg_copy_struct__81087(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81087)))
#endif /* kcg_copy_struct__81087 */

#ifndef kcg_copy_struct__81098
#define kcg_copy_struct__81098(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81098)))
#endif /* kcg_copy_struct__81098 */

#ifndef kcg_copy_struct__81113
#define kcg_copy_struct__81113(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81113)))
#endif /* kcg_copy_struct__81113 */

#ifndef kcg_copy_struct__81118
#define kcg_copy_struct__81118(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81118)))
#endif /* kcg_copy_struct__81118 */

#ifndef kcg_copy_struct__81124
#define kcg_copy_struct__81124(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81124)))
#endif /* kcg_copy_struct__81124 */

#ifndef kcg_copy_struct__81129
#define kcg_copy_struct__81129(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81129)))
#endif /* kcg_copy_struct__81129 */

#ifndef kcg_copy_struct__81136
#define kcg_copy_struct__81136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81136)))
#endif /* kcg_copy_struct__81136 */

#ifndef kcg_copy_struct__81147
#define kcg_copy_struct__81147(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81147)))
#endif /* kcg_copy_struct__81147 */

#ifndef kcg_copy_struct__81202
#define kcg_copy_struct__81202(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81202)))
#endif /* kcg_copy_struct__81202 */

#ifndef kcg_copy_struct__81214
#define kcg_copy_struct__81214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81214)))
#endif /* kcg_copy_struct__81214 */

#ifndef kcg_copy_struct__81222
#define kcg_copy_struct__81222(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81222)))
#endif /* kcg_copy_struct__81222 */

#ifndef kcg_copy_struct__81238
#define kcg_copy_struct__81238(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81238)))
#endif /* kcg_copy_struct__81238 */

#ifndef kcg_copy_struct__81243
#define kcg_copy_struct__81243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81243)))
#endif /* kcg_copy_struct__81243 */

#ifndef kcg_copy_struct__81248
#define kcg_copy_struct__81248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81248)))
#endif /* kcg_copy_struct__81248 */

#ifndef kcg_copy_struct__81253
#define kcg_copy_struct__81253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81253)))
#endif /* kcg_copy_struct__81253 */

#ifndef kcg_copy_struct__81261
#define kcg_copy_struct__81261(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81261)))
#endif /* kcg_copy_struct__81261 */

#ifndef kcg_copy_struct__81267
#define kcg_copy_struct__81267(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81267)))
#endif /* kcg_copy_struct__81267 */

#ifndef kcg_copy_struct__81287
#define kcg_copy_struct__81287(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81287)))
#endif /* kcg_copy_struct__81287 */

#ifndef kcg_copy_struct__81292
#define kcg_copy_struct__81292(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81292)))
#endif /* kcg_copy_struct__81292 */

#ifndef kcg_copy_struct__81311
#define kcg_copy_struct__81311(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81311)))
#endif /* kcg_copy_struct__81311 */

#ifndef kcg_copy_struct__81316
#define kcg_copy_struct__81316(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81316)))
#endif /* kcg_copy_struct__81316 */

#ifndef kcg_copy_struct__81326
#define kcg_copy_struct__81326(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81326)))
#endif /* kcg_copy_struct__81326 */

#ifndef kcg_copy_struct__81332
#define kcg_copy_struct__81332(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81332)))
#endif /* kcg_copy_struct__81332 */

#ifndef kcg_copy_struct__81337
#define kcg_copy_struct__81337(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81337)))
#endif /* kcg_copy_struct__81337 */

#ifndef kcg_copy_struct__81345
#define kcg_copy_struct__81345(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81345)))
#endif /* kcg_copy_struct__81345 */

#ifndef kcg_copy_struct__81354
#define kcg_copy_struct__81354(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81354)))
#endif /* kcg_copy_struct__81354 */

#ifndef kcg_copy_struct__81363
#define kcg_copy_struct__81363(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81363)))
#endif /* kcg_copy_struct__81363 */

#ifndef kcg_copy_struct__81370
#define kcg_copy_struct__81370(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81370)))
#endif /* kcg_copy_struct__81370 */

#ifndef kcg_copy_struct__81376
#define kcg_copy_struct__81376(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81376)))
#endif /* kcg_copy_struct__81376 */

#ifndef kcg_copy_struct__81384
#define kcg_copy_struct__81384(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81384)))
#endif /* kcg_copy_struct__81384 */

#ifndef kcg_copy_struct__81389
#define kcg_copy_struct__81389(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81389)))
#endif /* kcg_copy_struct__81389 */

#ifndef kcg_copy_struct__81396
#define kcg_copy_struct__81396(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81396)))
#endif /* kcg_copy_struct__81396 */

#ifndef kcg_copy_struct__81405
#define kcg_copy_struct__81405(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81405)))
#endif /* kcg_copy_struct__81405 */

#ifndef kcg_copy_struct__81413
#define kcg_copy_struct__81413(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81413)))
#endif /* kcg_copy_struct__81413 */

#ifndef kcg_copy_struct__81422
#define kcg_copy_struct__81422(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81422)))
#endif /* kcg_copy_struct__81422 */

#ifndef kcg_copy_struct__81440
#define kcg_copy_struct__81440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81440)))
#endif /* kcg_copy_struct__81440 */

#ifndef kcg_copy_struct__81452
#define kcg_copy_struct__81452(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81452)))
#endif /* kcg_copy_struct__81452 */

#ifndef kcg_copy_struct__81458
#define kcg_copy_struct__81458(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81458)))
#endif /* kcg_copy_struct__81458 */

#ifndef kcg_copy_struct__81464
#define kcg_copy_struct__81464(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81464)))
#endif /* kcg_copy_struct__81464 */

#ifndef kcg_copy_struct__81469
#define kcg_copy_struct__81469(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81469)))
#endif /* kcg_copy_struct__81469 */

#ifndef kcg_copy_struct__81475
#define kcg_copy_struct__81475(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81475)))
#endif /* kcg_copy_struct__81475 */

#ifndef kcg_copy_struct__81481
#define kcg_copy_struct__81481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81481)))
#endif /* kcg_copy_struct__81481 */

#ifndef kcg_copy_struct__81486
#define kcg_copy_struct__81486(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81486)))
#endif /* kcg_copy_struct__81486 */

#ifndef kcg_copy_struct__81495
#define kcg_copy_struct__81495(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81495)))
#endif /* kcg_copy_struct__81495 */

#ifndef kcg_copy_struct__81506
#define kcg_copy_struct__81506(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81506)))
#endif /* kcg_copy_struct__81506 */

#ifndef kcg_copy_struct__81515
#define kcg_copy_struct__81515(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81515)))
#endif /* kcg_copy_struct__81515 */

#ifndef kcg_copy_struct__81522
#define kcg_copy_struct__81522(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81522)))
#endif /* kcg_copy_struct__81522 */

#ifndef kcg_copy_struct__81527
#define kcg_copy_struct__81527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81527)))
#endif /* kcg_copy_struct__81527 */

#ifndef kcg_copy_struct__81532
#define kcg_copy_struct__81532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81532)))
#endif /* kcg_copy_struct__81532 */

#ifndef kcg_copy_struct__81538
#define kcg_copy_struct__81538(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81538)))
#endif /* kcg_copy_struct__81538 */

#ifndef kcg_copy_struct__81543
#define kcg_copy_struct__81543(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81543)))
#endif /* kcg_copy_struct__81543 */

#ifndef kcg_copy_struct__81552
#define kcg_copy_struct__81552(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81552)))
#endif /* kcg_copy_struct__81552 */

#ifndef kcg_copy_struct__81556
#define kcg_copy_struct__81556(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81556)))
#endif /* kcg_copy_struct__81556 */

#ifndef kcg_copy_struct__81561
#define kcg_copy_struct__81561(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81561)))
#endif /* kcg_copy_struct__81561 */

#ifndef kcg_copy_struct__81569
#define kcg_copy_struct__81569(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81569)))
#endif /* kcg_copy_struct__81569 */

#ifndef kcg_copy_struct__81582
#define kcg_copy_struct__81582(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81582)))
#endif /* kcg_copy_struct__81582 */

#ifndef kcg_copy_struct__81591
#define kcg_copy_struct__81591(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81591)))
#endif /* kcg_copy_struct__81591 */

#ifndef kcg_copy_struct__81605
#define kcg_copy_struct__81605(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81605)))
#endif /* kcg_copy_struct__81605 */

#ifndef kcg_copy_struct__81613
#define kcg_copy_struct__81613(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81613)))
#endif /* kcg_copy_struct__81613 */

#ifndef kcg_copy_struct__81626
#define kcg_copy_struct__81626(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81626)))
#endif /* kcg_copy_struct__81626 */

#ifndef kcg_copy_struct__81631
#define kcg_copy_struct__81631(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81631)))
#endif /* kcg_copy_struct__81631 */

#ifndef kcg_copy_struct__81640
#define kcg_copy_struct__81640(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81640)))
#endif /* kcg_copy_struct__81640 */

#ifndef kcg_copy_struct__81649
#define kcg_copy_struct__81649(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81649)))
#endif /* kcg_copy_struct__81649 */

#ifndef kcg_copy_struct__81660
#define kcg_copy_struct__81660(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81660)))
#endif /* kcg_copy_struct__81660 */

#ifndef kcg_copy_struct__81671
#define kcg_copy_struct__81671(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81671)))
#endif /* kcg_copy_struct__81671 */

#ifndef kcg_copy_struct__81701
#define kcg_copy_struct__81701(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81701)))
#endif /* kcg_copy_struct__81701 */

#ifndef kcg_copy_struct__81710
#define kcg_copy_struct__81710(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81710)))
#endif /* kcg_copy_struct__81710 */

#ifndef kcg_copy_struct__81720
#define kcg_copy_struct__81720(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81720)))
#endif /* kcg_copy_struct__81720 */

#ifndef kcg_copy_struct__81727
#define kcg_copy_struct__81727(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81727)))
#endif /* kcg_copy_struct__81727 */

#ifndef kcg_copy_struct__81735
#define kcg_copy_struct__81735(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81735)))
#endif /* kcg_copy_struct__81735 */

#ifndef kcg_copy_struct__81746
#define kcg_copy_struct__81746(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81746)))
#endif /* kcg_copy_struct__81746 */

#ifndef kcg_copy_struct__81752
#define kcg_copy_struct__81752(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81752)))
#endif /* kcg_copy_struct__81752 */

#ifndef kcg_copy_struct__81758
#define kcg_copy_struct__81758(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81758)))
#endif /* kcg_copy_struct__81758 */

#ifndef kcg_copy_struct__81764
#define kcg_copy_struct__81764(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81764)))
#endif /* kcg_copy_struct__81764 */

#ifndef kcg_copy_struct__81770
#define kcg_copy_struct__81770(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81770)))
#endif /* kcg_copy_struct__81770 */

#ifndef kcg_copy_struct__81777
#define kcg_copy_struct__81777(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81777)))
#endif /* kcg_copy_struct__81777 */

#ifndef kcg_copy_struct__81787
#define kcg_copy_struct__81787(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81787)))
#endif /* kcg_copy_struct__81787 */

#ifndef kcg_copy_struct__81801
#define kcg_copy_struct__81801(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81801)))
#endif /* kcg_copy_struct__81801 */

#ifndef kcg_copy_struct__81807
#define kcg_copy_struct__81807(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81807)))
#endif /* kcg_copy_struct__81807 */

#ifndef kcg_copy_struct__81814
#define kcg_copy_struct__81814(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81814)))
#endif /* kcg_copy_struct__81814 */

#ifndef kcg_copy_struct__81821
#define kcg_copy_struct__81821(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81821)))
#endif /* kcg_copy_struct__81821 */

#ifndef kcg_copy_struct__81827
#define kcg_copy_struct__81827(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81827)))
#endif /* kcg_copy_struct__81827 */

#ifndef kcg_copy_struct__81836
#define kcg_copy_struct__81836(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81836)))
#endif /* kcg_copy_struct__81836 */

#ifndef kcg_copy_struct__81842
#define kcg_copy_struct__81842(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81842)))
#endif /* kcg_copy_struct__81842 */

#ifndef kcg_copy_struct__81847
#define kcg_copy_struct__81847(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81847)))
#endif /* kcg_copy_struct__81847 */

#ifndef kcg_copy_struct__81857
#define kcg_copy_struct__81857(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81857)))
#endif /* kcg_copy_struct__81857 */

#ifndef kcg_copy_struct__81867
#define kcg_copy_struct__81867(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81867)))
#endif /* kcg_copy_struct__81867 */

#ifndef kcg_copy_struct__81883
#define kcg_copy_struct__81883(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81883)))
#endif /* kcg_copy_struct__81883 */

#ifndef kcg_copy_struct__81895
#define kcg_copy_struct__81895(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81895)))
#endif /* kcg_copy_struct__81895 */

#ifndef kcg_copy_struct__81902
#define kcg_copy_struct__81902(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81902)))
#endif /* kcg_copy_struct__81902 */

#ifndef kcg_copy_struct__81935
#define kcg_copy_struct__81935(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81935)))
#endif /* kcg_copy_struct__81935 */

#ifndef kcg_copy_struct__81940
#define kcg_copy_struct__81940(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81940)))
#endif /* kcg_copy_struct__81940 */

#ifndef kcg_copy_struct__81945
#define kcg_copy_struct__81945(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81945)))
#endif /* kcg_copy_struct__81945 */

#ifndef kcg_copy_struct__81954
#define kcg_copy_struct__81954(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81954)))
#endif /* kcg_copy_struct__81954 */

#ifndef kcg_copy_struct__81961
#define kcg_copy_struct__81961(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81961)))
#endif /* kcg_copy_struct__81961 */

#ifndef kcg_copy_struct__81968
#define kcg_copy_struct__81968(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81968)))
#endif /* kcg_copy_struct__81968 */

#ifndef kcg_copy_struct__81974
#define kcg_copy_struct__81974(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81974)))
#endif /* kcg_copy_struct__81974 */

#ifndef kcg_copy_struct__81984
#define kcg_copy_struct__81984(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81984)))
#endif /* kcg_copy_struct__81984 */

#ifndef kcg_copy_struct__81996
#define kcg_copy_struct__81996(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__81996)))
#endif /* kcg_copy_struct__81996 */

#ifndef kcg_copy_struct__82003
#define kcg_copy_struct__82003(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82003)))
#endif /* kcg_copy_struct__82003 */

#ifndef kcg_copy_struct__82013
#define kcg_copy_struct__82013(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82013)))
#endif /* kcg_copy_struct__82013 */

#ifndef kcg_copy_struct__82022
#define kcg_copy_struct__82022(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82022)))
#endif /* kcg_copy_struct__82022 */

#ifndef kcg_copy_struct__82033
#define kcg_copy_struct__82033(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82033)))
#endif /* kcg_copy_struct__82033 */

#ifndef kcg_copy_struct__82040
#define kcg_copy_struct__82040(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82040)))
#endif /* kcg_copy_struct__82040 */

#ifndef kcg_copy_struct__82050
#define kcg_copy_struct__82050(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82050)))
#endif /* kcg_copy_struct__82050 */

#ifndef kcg_copy_struct__82055
#define kcg_copy_struct__82055(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82055)))
#endif /* kcg_copy_struct__82055 */

#ifndef kcg_copy_struct__82068
#define kcg_copy_struct__82068(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82068)))
#endif /* kcg_copy_struct__82068 */

#ifndef kcg_copy_struct__82077
#define kcg_copy_struct__82077(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82077)))
#endif /* kcg_copy_struct__82077 */

#ifndef kcg_copy_struct__82093
#define kcg_copy_struct__82093(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82093)))
#endif /* kcg_copy_struct__82093 */

#ifndef kcg_copy_struct__82116
#define kcg_copy_struct__82116(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82116)))
#endif /* kcg_copy_struct__82116 */

#ifndef kcg_copy_struct__82130
#define kcg_copy_struct__82130(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82130)))
#endif /* kcg_copy_struct__82130 */

#ifndef kcg_copy_struct__82136
#define kcg_copy_struct__82136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82136)))
#endif /* kcg_copy_struct__82136 */

#ifndef kcg_copy_struct__82144
#define kcg_copy_struct__82144(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82144)))
#endif /* kcg_copy_struct__82144 */

#ifndef kcg_copy_struct__82150
#define kcg_copy_struct__82150(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82150)))
#endif /* kcg_copy_struct__82150 */

#ifndef kcg_copy_struct__82177
#define kcg_copy_struct__82177(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82177)))
#endif /* kcg_copy_struct__82177 */

#ifndef kcg_copy_struct__82190
#define kcg_copy_struct__82190(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82190)))
#endif /* kcg_copy_struct__82190 */

#ifndef kcg_copy_struct__82210
#define kcg_copy_struct__82210(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82210)))
#endif /* kcg_copy_struct__82210 */

#ifndef kcg_copy_struct__82217
#define kcg_copy_struct__82217(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82217)))
#endif /* kcg_copy_struct__82217 */

#ifndef kcg_copy_struct__82224
#define kcg_copy_struct__82224(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82224)))
#endif /* kcg_copy_struct__82224 */

#ifndef kcg_copy_struct__82230
#define kcg_copy_struct__82230(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82230)))
#endif /* kcg_copy_struct__82230 */

#ifndef kcg_copy_struct__82237
#define kcg_copy_struct__82237(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82237)))
#endif /* kcg_copy_struct__82237 */

#ifndef kcg_copy_struct__82243
#define kcg_copy_struct__82243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82243)))
#endif /* kcg_copy_struct__82243 */

#ifndef kcg_copy_struct__82253
#define kcg_copy_struct__82253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82253)))
#endif /* kcg_copy_struct__82253 */

#ifndef kcg_copy_struct__82262
#define kcg_copy_struct__82262(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82262)))
#endif /* kcg_copy_struct__82262 */

#ifndef kcg_copy_struct__82270
#define kcg_copy_struct__82270(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82270)))
#endif /* kcg_copy_struct__82270 */

#ifndef kcg_copy_struct__82276
#define kcg_copy_struct__82276(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82276)))
#endif /* kcg_copy_struct__82276 */

#ifndef kcg_copy_struct__82288
#define kcg_copy_struct__82288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82288)))
#endif /* kcg_copy_struct__82288 */

#ifndef kcg_copy_struct__82294
#define kcg_copy_struct__82294(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82294)))
#endif /* kcg_copy_struct__82294 */

#ifndef kcg_copy_struct__82300
#define kcg_copy_struct__82300(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82300)))
#endif /* kcg_copy_struct__82300 */

#ifndef kcg_copy_struct__82306
#define kcg_copy_struct__82306(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82306)))
#endif /* kcg_copy_struct__82306 */

#ifndef kcg_copy_struct__82312
#define kcg_copy_struct__82312(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82312)))
#endif /* kcg_copy_struct__82312 */

#ifndef kcg_copy_struct__82322
#define kcg_copy_struct__82322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82322)))
#endif /* kcg_copy_struct__82322 */

#ifndef kcg_copy_struct__82330
#define kcg_copy_struct__82330(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82330)))
#endif /* kcg_copy_struct__82330 */

#ifndef kcg_copy_struct__82338
#define kcg_copy_struct__82338(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82338)))
#endif /* kcg_copy_struct__82338 */

#ifndef kcg_copy_struct__82346
#define kcg_copy_struct__82346(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82346)))
#endif /* kcg_copy_struct__82346 */

#ifndef kcg_copy_struct__82351
#define kcg_copy_struct__82351(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82351)))
#endif /* kcg_copy_struct__82351 */

#ifndef kcg_copy_struct__82359
#define kcg_copy_struct__82359(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82359)))
#endif /* kcg_copy_struct__82359 */

#ifndef kcg_copy_struct__82370
#define kcg_copy_struct__82370(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82370)))
#endif /* kcg_copy_struct__82370 */

#ifndef kcg_copy_struct__82377
#define kcg_copy_struct__82377(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82377)))
#endif /* kcg_copy_struct__82377 */

#ifndef kcg_copy_struct__82385
#define kcg_copy_struct__82385(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82385)))
#endif /* kcg_copy_struct__82385 */

#ifndef kcg_copy_struct__82394
#define kcg_copy_struct__82394(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82394)))
#endif /* kcg_copy_struct__82394 */

#ifndef kcg_copy_struct__82406
#define kcg_copy_struct__82406(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82406)))
#endif /* kcg_copy_struct__82406 */

#ifndef kcg_copy_struct__82439
#define kcg_copy_struct__82439(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82439)))
#endif /* kcg_copy_struct__82439 */

#ifndef kcg_copy_struct__82445
#define kcg_copy_struct__82445(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82445)))
#endif /* kcg_copy_struct__82445 */

#ifndef kcg_copy_struct__82471
#define kcg_copy_struct__82471(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82471)))
#endif /* kcg_copy_struct__82471 */

#ifndef kcg_copy_struct__82491
#define kcg_copy_struct__82491(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82491)))
#endif /* kcg_copy_struct__82491 */

#ifndef kcg_copy_struct__82505
#define kcg_copy_struct__82505(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82505)))
#endif /* kcg_copy_struct__82505 */

#ifndef kcg_copy_struct__82511
#define kcg_copy_struct__82511(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82511)))
#endif /* kcg_copy_struct__82511 */

#ifndef kcg_copy_struct__82516
#define kcg_copy_struct__82516(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82516)))
#endif /* kcg_copy_struct__82516 */

#ifndef kcg_copy_struct__82523
#define kcg_copy_struct__82523(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82523)))
#endif /* kcg_copy_struct__82523 */

#ifndef kcg_copy_struct__82529
#define kcg_copy_struct__82529(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82529)))
#endif /* kcg_copy_struct__82529 */

#ifndef kcg_copy_struct__82554
#define kcg_copy_struct__82554(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82554)))
#endif /* kcg_copy_struct__82554 */

#ifndef kcg_copy_struct__82560
#define kcg_copy_struct__82560(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82560)))
#endif /* kcg_copy_struct__82560 */

#ifndef kcg_copy_struct__82569
#define kcg_copy_struct__82569(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82569)))
#endif /* kcg_copy_struct__82569 */

#ifndef kcg_copy_struct__82575
#define kcg_copy_struct__82575(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82575)))
#endif /* kcg_copy_struct__82575 */

#ifndef kcg_copy_struct__82581
#define kcg_copy_struct__82581(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82581)))
#endif /* kcg_copy_struct__82581 */

#ifndef kcg_copy_struct__82586
#define kcg_copy_struct__82586(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82586)))
#endif /* kcg_copy_struct__82586 */

#ifndef kcg_copy_struct__82594
#define kcg_copy_struct__82594(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82594)))
#endif /* kcg_copy_struct__82594 */

#ifndef kcg_copy_struct__82603
#define kcg_copy_struct__82603(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82603)))
#endif /* kcg_copy_struct__82603 */

#ifndef kcg_copy_struct__82610
#define kcg_copy_struct__82610(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82610)))
#endif /* kcg_copy_struct__82610 */

#ifndef kcg_copy_struct__82619
#define kcg_copy_struct__82619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82619)))
#endif /* kcg_copy_struct__82619 */

#ifndef kcg_copy_struct__82625
#define kcg_copy_struct__82625(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82625)))
#endif /* kcg_copy_struct__82625 */

#ifndef kcg_copy_struct__82630
#define kcg_copy_struct__82630(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82630)))
#endif /* kcg_copy_struct__82630 */

#ifndef kcg_copy_struct__82636
#define kcg_copy_struct__82636(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82636)))
#endif /* kcg_copy_struct__82636 */

#ifndef kcg_copy_struct__82641
#define kcg_copy_struct__82641(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82641)))
#endif /* kcg_copy_struct__82641 */

#ifndef kcg_copy_struct__82646
#define kcg_copy_struct__82646(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82646)))
#endif /* kcg_copy_struct__82646 */

#ifndef kcg_copy_struct__82652
#define kcg_copy_struct__82652(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82652)))
#endif /* kcg_copy_struct__82652 */

#ifndef kcg_copy_struct__82660
#define kcg_copy_struct__82660(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82660)))
#endif /* kcg_copy_struct__82660 */

#ifndef kcg_copy_struct__82667
#define kcg_copy_struct__82667(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82667)))
#endif /* kcg_copy_struct__82667 */

#ifndef kcg_copy_struct__82672
#define kcg_copy_struct__82672(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82672)))
#endif /* kcg_copy_struct__82672 */

#ifndef kcg_copy_struct__82682
#define kcg_copy_struct__82682(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82682)))
#endif /* kcg_copy_struct__82682 */

#ifndef kcg_copy_struct__82693
#define kcg_copy_struct__82693(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82693)))
#endif /* kcg_copy_struct__82693 */

#ifndef kcg_copy_struct__82710
#define kcg_copy_struct__82710(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82710)))
#endif /* kcg_copy_struct__82710 */

#ifndef kcg_copy_struct__82722
#define kcg_copy_struct__82722(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82722)))
#endif /* kcg_copy_struct__82722 */

#ifndef kcg_copy_struct__82730
#define kcg_copy_struct__82730(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82730)))
#endif /* kcg_copy_struct__82730 */

#ifndef kcg_copy_struct__82738
#define kcg_copy_struct__82738(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82738)))
#endif /* kcg_copy_struct__82738 */

#ifndef kcg_copy_struct__82761
#define kcg_copy_struct__82761(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__82761)))
#endif /* kcg_copy_struct__82761 */

#ifndef kcg_copy_array__80217
#define kcg_copy_array__80217(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80217)))
#endif /* kcg_copy_array__80217 */

#ifndef kcg_copy_array__80227
#define kcg_copy_array__80227(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80227)))
#endif /* kcg_copy_array__80227 */

#ifndef kcg_copy_array__80242
#define kcg_copy_array__80242(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80242)))
#endif /* kcg_copy_array__80242 */

#ifndef kcg_copy_array__80252
#define kcg_copy_array__80252(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80252)))
#endif /* kcg_copy_array__80252 */

#ifndef kcg_copy_array__80297
#define kcg_copy_array__80297(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80297)))
#endif /* kcg_copy_array__80297 */

#ifndef kcg_copy_array__80307
#define kcg_copy_array__80307(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80307)))
#endif /* kcg_copy_array__80307 */

#ifndef kcg_copy_array__80318
#define kcg_copy_array__80318(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80318)))
#endif /* kcg_copy_array__80318 */

#ifndef kcg_copy_array__80326
#define kcg_copy_array__80326(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80326)))
#endif /* kcg_copy_array__80326 */

#ifndef kcg_copy_array__80382
#define kcg_copy_array__80382(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80382)))
#endif /* kcg_copy_array__80382 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__80396
#define kcg_copy_array__80396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80396)))
#endif /* kcg_copy_array__80396 */

#ifndef kcg_copy_array__80415
#define kcg_copy_array__80415(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80415)))
#endif /* kcg_copy_array__80415 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__80553
#define kcg_copy_array__80553(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80553)))
#endif /* kcg_copy_array__80553 */

#ifndef kcg_copy_array__80577
#define kcg_copy_array__80577(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80577)))
#endif /* kcg_copy_array__80577 */

#ifndef kcg_copy_array__80603
#define kcg_copy_array__80603(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80603)))
#endif /* kcg_copy_array__80603 */

#ifndef kcg_copy_array__80660
#define kcg_copy_array__80660(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80660)))
#endif /* kcg_copy_array__80660 */

#ifndef kcg_copy_array__80672
#define kcg_copy_array__80672(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80672)))
#endif /* kcg_copy_array__80672 */

#ifndef kcg_copy_array__80682
#define kcg_copy_array__80682(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80682)))
#endif /* kcg_copy_array__80682 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__80726
#define kcg_copy_array__80726(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80726)))
#endif /* kcg_copy_array__80726 */

#ifndef kcg_copy_array__80737
#define kcg_copy_array__80737(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80737)))
#endif /* kcg_copy_array__80737 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__80802
#define kcg_copy_array__80802(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80802)))
#endif /* kcg_copy_array__80802 */

#ifndef kcg_copy_array__80814
#define kcg_copy_array__80814(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80814)))
#endif /* kcg_copy_array__80814 */

#ifndef kcg_copy_array__80832
#define kcg_copy_array__80832(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80832)))
#endif /* kcg_copy_array__80832 */

#ifndef kcg_copy_array__80843
#define kcg_copy_array__80843(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80843)))
#endif /* kcg_copy_array__80843 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__80873
#define kcg_copy_array__80873(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80873)))
#endif /* kcg_copy_array__80873 */

#ifndef kcg_copy_array__80882
#define kcg_copy_array__80882(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80882)))
#endif /* kcg_copy_array__80882 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array__80908
#define kcg_copy_array__80908(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80908)))
#endif /* kcg_copy_array__80908 */

#ifndef kcg_copy_array__80918
#define kcg_copy_array__80918(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__80918)))
#endif /* kcg_copy_array__80918 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array__81004
#define kcg_copy_array__81004(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81004)))
#endif /* kcg_copy_array__81004 */

#ifndef kcg_copy_array__81007
#define kcg_copy_array__81007(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81007)))
#endif /* kcg_copy_array__81007 */

#ifndef kcg_copy_array__81010
#define kcg_copy_array__81010(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81010)))
#endif /* kcg_copy_array__81010 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__81066
#define kcg_copy_array__81066(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81066)))
#endif /* kcg_copy_array__81066 */

#ifndef kcg_copy_array__81092
#define kcg_copy_array__81092(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81092)))
#endif /* kcg_copy_array__81092 */

#ifndef kcg_copy_array__81095
#define kcg_copy_array__81095(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81095)))
#endif /* kcg_copy_array__81095 */

#ifndef kcg_copy_array__81104
#define kcg_copy_array__81104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81104)))
#endif /* kcg_copy_array__81104 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_33_11
#define kcg_copy_array_int_33_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33_11)))
#endif /* kcg_copy_array_int_33_11 */

#ifndef kcg_copy_array__81141
#define kcg_copy_array__81141(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81141)))
#endif /* kcg_copy_array__81141 */

#ifndef kcg_copy_array__81144
#define kcg_copy_array__81144(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81144)))
#endif /* kcg_copy_array__81144 */

#ifndef kcg_copy_array__81219
#define kcg_copy_array__81219(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81219)))
#endif /* kcg_copy_array__81219 */

#ifndef kcg_copy_array__81258
#define kcg_copy_array__81258(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81258)))
#endif /* kcg_copy_array__81258 */

#ifndef kcg_copy_array__81381
#define kcg_copy_array__81381(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81381)))
#endif /* kcg_copy_array__81381 */

#ifndef kcg_copy_array__81549
#define kcg_copy_array__81549(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81549)))
#endif /* kcg_copy_array__81549 */

#ifndef kcg_copy_array__81566
#define kcg_copy_array__81566(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81566)))
#endif /* kcg_copy_array__81566 */

#ifndef kcg_copy_array__81588
#define kcg_copy_array__81588(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81588)))
#endif /* kcg_copy_array__81588 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array__81683
#define kcg_copy_array__81683(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81683)))
#endif /* kcg_copy_array__81683 */

#ifndef kcg_copy_array__81686
#define kcg_copy_array__81686(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81686)))
#endif /* kcg_copy_array__81686 */

#ifndef kcg_copy_array__81689
#define kcg_copy_array__81689(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81689)))
#endif /* kcg_copy_array__81689 */

#ifndef kcg_copy_array__81692
#define kcg_copy_array__81692(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81692)))
#endif /* kcg_copy_array__81692 */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_bool_256_46
#define kcg_copy_array_bool_256_46(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46)))
#endif /* kcg_copy_array_bool_256_46 */

#ifndef kcg_copy_array__81717
#define kcg_copy_array__81717(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81717)))
#endif /* kcg_copy_array__81717 */

#ifndef kcg_copy_array__81798
#define kcg_copy_array__81798(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__81798)))
#endif /* kcg_copy_array__81798 */

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

#ifndef kcg_copy_array__82019
#define kcg_copy_array__82019(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82019)))
#endif /* kcg_copy_array__82019 */

#ifndef kcg_copy_array__82030
#define kcg_copy_array__82030(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82030)))
#endif /* kcg_copy_array__82030 */

#ifndef kcg_copy_array__82074
#define kcg_copy_array__82074(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82074)))
#endif /* kcg_copy_array__82074 */

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

#ifndef kcg_copy_array__82327
#define kcg_copy_array__82327(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82327)))
#endif /* kcg_copy_array__82327 */

#ifndef kcg_copy_array__82335
#define kcg_copy_array__82335(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82335)))
#endif /* kcg_copy_array__82335 */

#ifndef kcg_copy_array__82343
#define kcg_copy_array__82343(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82343)))
#endif /* kcg_copy_array__82343 */

#ifndef kcg_copy_array_bool_20
#define kcg_copy_array_bool_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_20)))
#endif /* kcg_copy_array_bool_20 */

#ifndef kcg_copy_array__82690
#define kcg_copy_array__82690(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82690)))
#endif /* kcg_copy_array__82690 */

#ifndef kcg_copy_array__82755
#define kcg_copy_array__82755(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82755)))
#endif /* kcg_copy_array__82755 */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array__82772
#define kcg_copy_array__82772(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82772)))
#endif /* kcg_copy_array__82772 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array__82781
#define kcg_copy_array__82781(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82781)))
#endif /* kcg_copy_array__82781 */

#ifndef kcg_copy_array__82784
#define kcg_copy_array__82784(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82784)))
#endif /* kcg_copy_array__82784 */

#ifndef kcg_copy_array__82787
#define kcg_copy_array__82787(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82787)))
#endif /* kcg_copy_array__82787 */

#ifndef kcg_copy_array__82790
#define kcg_copy_array__82790(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82790)))
#endif /* kcg_copy_array__82790 */

#ifndef kcg_copy_array__82793
#define kcg_copy_array__82793(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82793)))
#endif /* kcg_copy_array__82793 */

#ifndef kcg_copy_array__82796
#define kcg_copy_array__82796(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__82796)))
#endif /* kcg_copy_array__82796 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_real_24
#define kcg_copy_array_real_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_24)))
#endif /* kcg_copy_array_real_24 */

#ifndef kcg_copy_array_bool_24
#define kcg_copy_array_bool_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_24)))
#endif /* kcg_copy_array_bool_24 */

#ifndef kcg_copy_array__85687
#define kcg_copy_array__85687(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__85687)))
#endif /* kcg_copy_array__85687 */

#ifndef kcg_copy_array__86192
#define kcg_copy_array__86192(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__86192)))
#endif /* kcg_copy_array__86192 */

#ifndef kcg_copy_array__86199
#define kcg_copy_array__86199(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__86199)))
#endif /* kcg_copy_array__86199 */

#ifndef kcg_copy_array__86240
#define kcg_copy_array__86240(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__86240)))
#endif /* kcg_copy_array__86240 */

#ifndef kcg_copy_array__86322
#define kcg_copy_array__86322(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__86322)))
#endif /* kcg_copy_array__86322 */

#ifndef kcg_comp_struct__80211
extern kcg_bool kcg_comp_struct__80211(
  struct__80211 *kcg_c1,
  struct__80211 *kcg_c2);
#endif /* kcg_comp_struct__80211 */

#ifndef kcg_comp_struct__80220
extern kcg_bool kcg_comp_struct__80220(
  struct__80220 *kcg_c1,
  struct__80220 *kcg_c2);
#endif /* kcg_comp_struct__80220 */

#ifndef kcg_comp_struct__80230
extern kcg_bool kcg_comp_struct__80230(
  struct__80230 *kcg_c1,
  struct__80230 *kcg_c2);
#endif /* kcg_comp_struct__80230 */

#ifndef kcg_comp_struct__80245
extern kcg_bool kcg_comp_struct__80245(
  struct__80245 *kcg_c1,
  struct__80245 *kcg_c2);
#endif /* kcg_comp_struct__80245 */

#ifndef kcg_comp_struct__80255
extern kcg_bool kcg_comp_struct__80255(
  struct__80255 *kcg_c1,
  struct__80255 *kcg_c2);
#endif /* kcg_comp_struct__80255 */

#ifndef kcg_comp_struct__80286
extern kcg_bool kcg_comp_struct__80286(
  struct__80286 *kcg_c1,
  struct__80286 *kcg_c2);
#endif /* kcg_comp_struct__80286 */

#ifndef kcg_comp_struct__80291
extern kcg_bool kcg_comp_struct__80291(
  struct__80291 *kcg_c1,
  struct__80291 *kcg_c2);
#endif /* kcg_comp_struct__80291 */

#ifndef kcg_comp_struct__80300
extern kcg_bool kcg_comp_struct__80300(
  struct__80300 *kcg_c1,
  struct__80300 *kcg_c2);
#endif /* kcg_comp_struct__80300 */

#ifndef kcg_comp_struct__80310
extern kcg_bool kcg_comp_struct__80310(
  struct__80310 *kcg_c1,
  struct__80310 *kcg_c2);
#endif /* kcg_comp_struct__80310 */

#ifndef kcg_comp_struct__80321
extern kcg_bool kcg_comp_struct__80321(
  struct__80321 *kcg_c1,
  struct__80321 *kcg_c2);
#endif /* kcg_comp_struct__80321 */

#ifndef kcg_comp_struct__80329
extern kcg_bool kcg_comp_struct__80329(
  struct__80329 *kcg_c1,
  struct__80329 *kcg_c2);
#endif /* kcg_comp_struct__80329 */

#ifndef kcg_comp_struct__80368
extern kcg_bool kcg_comp_struct__80368(
  struct__80368 *kcg_c1,
  struct__80368 *kcg_c2);
#endif /* kcg_comp_struct__80368 */

#ifndef kcg_comp_struct__80388
extern kcg_bool kcg_comp_struct__80388(
  struct__80388 *kcg_c1,
  struct__80388 *kcg_c2);
#endif /* kcg_comp_struct__80388 */

#ifndef kcg_comp_struct__80399
extern kcg_bool kcg_comp_struct__80399(
  struct__80399 *kcg_c1,
  struct__80399 *kcg_c2);
#endif /* kcg_comp_struct__80399 */

#ifndef kcg_comp_struct__80404
extern kcg_bool kcg_comp_struct__80404(
  struct__80404 *kcg_c1,
  struct__80404 *kcg_c2);
#endif /* kcg_comp_struct__80404 */

#ifndef kcg_comp_struct__80418
extern kcg_bool kcg_comp_struct__80418(
  struct__80418 *kcg_c1,
  struct__80418 *kcg_c2);
#endif /* kcg_comp_struct__80418 */

#ifndef kcg_comp_struct__80433
extern kcg_bool kcg_comp_struct__80433(
  struct__80433 *kcg_c1,
  struct__80433 *kcg_c2);
#endif /* kcg_comp_struct__80433 */

#ifndef kcg_comp_struct__80451
extern kcg_bool kcg_comp_struct__80451(
  struct__80451 *kcg_c1,
  struct__80451 *kcg_c2);
#endif /* kcg_comp_struct__80451 */

#ifndef kcg_comp_struct__80463
extern kcg_bool kcg_comp_struct__80463(
  struct__80463 *kcg_c1,
  struct__80463 *kcg_c2);
#endif /* kcg_comp_struct__80463 */

#ifndef kcg_comp_struct__80470
extern kcg_bool kcg_comp_struct__80470(
  struct__80470 *kcg_c1,
  struct__80470 *kcg_c2);
#endif /* kcg_comp_struct__80470 */

#ifndef kcg_comp_struct__80477
extern kcg_bool kcg_comp_struct__80477(
  struct__80477 *kcg_c1,
  struct__80477 *kcg_c2);
#endif /* kcg_comp_struct__80477 */

#ifndef kcg_comp_struct__80483
extern kcg_bool kcg_comp_struct__80483(
  struct__80483 *kcg_c1,
  struct__80483 *kcg_c2);
#endif /* kcg_comp_struct__80483 */

#ifndef kcg_comp_struct__80493
extern kcg_bool kcg_comp_struct__80493(
  struct__80493 *kcg_c1,
  struct__80493 *kcg_c2);
#endif /* kcg_comp_struct__80493 */

#ifndef kcg_comp_struct__80499
extern kcg_bool kcg_comp_struct__80499(
  struct__80499 *kcg_c1,
  struct__80499 *kcg_c2);
#endif /* kcg_comp_struct__80499 */

#ifndef kcg_comp_struct__80517
extern kcg_bool kcg_comp_struct__80517(
  struct__80517 *kcg_c1,
  struct__80517 *kcg_c2);
#endif /* kcg_comp_struct__80517 */

#ifndef kcg_comp_struct__80527
extern kcg_bool kcg_comp_struct__80527(
  struct__80527 *kcg_c1,
  struct__80527 *kcg_c2);
#endif /* kcg_comp_struct__80527 */

#ifndef kcg_comp_struct__80533
extern kcg_bool kcg_comp_struct__80533(
  struct__80533 *kcg_c1,
  struct__80533 *kcg_c2);
#endif /* kcg_comp_struct__80533 */

#ifndef kcg_comp_struct__80542
extern kcg_bool kcg_comp_struct__80542(
  struct__80542 *kcg_c1,
  struct__80542 *kcg_c2);
#endif /* kcg_comp_struct__80542 */

#ifndef kcg_comp_struct__80556
extern kcg_bool kcg_comp_struct__80556(
  struct__80556 *kcg_c1,
  struct__80556 *kcg_c2);
#endif /* kcg_comp_struct__80556 */

#ifndef kcg_comp_struct__80562
extern kcg_bool kcg_comp_struct__80562(
  struct__80562 *kcg_c1,
  struct__80562 *kcg_c2);
#endif /* kcg_comp_struct__80562 */

#ifndef kcg_comp_struct__80571
extern kcg_bool kcg_comp_struct__80571(
  struct__80571 *kcg_c1,
  struct__80571 *kcg_c2);
#endif /* kcg_comp_struct__80571 */

#ifndef kcg_comp_struct__80580
extern kcg_bool kcg_comp_struct__80580(
  struct__80580 *kcg_c1,
  struct__80580 *kcg_c2);
#endif /* kcg_comp_struct__80580 */

#ifndef kcg_comp_struct__80590
extern kcg_bool kcg_comp_struct__80590(
  struct__80590 *kcg_c1,
  struct__80590 *kcg_c2);
#endif /* kcg_comp_struct__80590 */

#ifndef kcg_comp_struct__80598
extern kcg_bool kcg_comp_struct__80598(
  struct__80598 *kcg_c1,
  struct__80598 *kcg_c2);
#endif /* kcg_comp_struct__80598 */

#ifndef kcg_comp_struct__80606
extern kcg_bool kcg_comp_struct__80606(
  struct__80606 *kcg_c1,
  struct__80606 *kcg_c2);
#endif /* kcg_comp_struct__80606 */

#ifndef kcg_comp_struct__80618
extern kcg_bool kcg_comp_struct__80618(
  struct__80618 *kcg_c1,
  struct__80618 *kcg_c2);
#endif /* kcg_comp_struct__80618 */

#ifndef kcg_comp_struct__80631
extern kcg_bool kcg_comp_struct__80631(
  struct__80631 *kcg_c1,
  struct__80631 *kcg_c2);
#endif /* kcg_comp_struct__80631 */

#ifndef kcg_comp_struct__80648
extern kcg_bool kcg_comp_struct__80648(
  struct__80648 *kcg_c1,
  struct__80648 *kcg_c2);
#endif /* kcg_comp_struct__80648 */

#ifndef kcg_comp_struct__80663
extern kcg_bool kcg_comp_struct__80663(
  struct__80663 *kcg_c1,
  struct__80663 *kcg_c2);
#endif /* kcg_comp_struct__80663 */

#ifndef kcg_comp_struct__80675
extern kcg_bool kcg_comp_struct__80675(
  struct__80675 *kcg_c1,
  struct__80675 *kcg_c2);
#endif /* kcg_comp_struct__80675 */

#ifndef kcg_comp_struct__80685
extern kcg_bool kcg_comp_struct__80685(
  struct__80685 *kcg_c1,
  struct__80685 *kcg_c2);
#endif /* kcg_comp_struct__80685 */

#ifndef kcg_comp_struct__80699
extern kcg_bool kcg_comp_struct__80699(
  struct__80699 *kcg_c1,
  struct__80699 *kcg_c2);
#endif /* kcg_comp_struct__80699 */

#ifndef kcg_comp_struct__80729
extern kcg_bool kcg_comp_struct__80729(
  struct__80729 *kcg_c1,
  struct__80729 *kcg_c2);
#endif /* kcg_comp_struct__80729 */

#ifndef kcg_comp_struct__80740
extern kcg_bool kcg_comp_struct__80740(
  struct__80740 *kcg_c1,
  struct__80740 *kcg_c2);
#endif /* kcg_comp_struct__80740 */

#ifndef kcg_comp_struct__80774
extern kcg_bool kcg_comp_struct__80774(
  struct__80774 *kcg_c1,
  struct__80774 *kcg_c2);
#endif /* kcg_comp_struct__80774 */

#ifndef kcg_comp_struct__80782
extern kcg_bool kcg_comp_struct__80782(
  struct__80782 *kcg_c1,
  struct__80782 *kcg_c2);
#endif /* kcg_comp_struct__80782 */

#ifndef kcg_comp_struct__80790
extern kcg_bool kcg_comp_struct__80790(
  struct__80790 *kcg_c1,
  struct__80790 *kcg_c2);
#endif /* kcg_comp_struct__80790 */

#ifndef kcg_comp_struct__80796
extern kcg_bool kcg_comp_struct__80796(
  struct__80796 *kcg_c1,
  struct__80796 *kcg_c2);
#endif /* kcg_comp_struct__80796 */

#ifndef kcg_comp_struct__80805
extern kcg_bool kcg_comp_struct__80805(
  struct__80805 *kcg_c1,
  struct__80805 *kcg_c2);
#endif /* kcg_comp_struct__80805 */

#ifndef kcg_comp_struct__80817
extern kcg_bool kcg_comp_struct__80817(
  struct__80817 *kcg_c1,
  struct__80817 *kcg_c2);
#endif /* kcg_comp_struct__80817 */

#ifndef kcg_comp_struct__80824
extern kcg_bool kcg_comp_struct__80824(
  struct__80824 *kcg_c1,
  struct__80824 *kcg_c2);
#endif /* kcg_comp_struct__80824 */

#ifndef kcg_comp_struct__80835
extern kcg_bool kcg_comp_struct__80835(
  struct__80835 *kcg_c1,
  struct__80835 *kcg_c2);
#endif /* kcg_comp_struct__80835 */

#ifndef kcg_comp_struct__80846
extern kcg_bool kcg_comp_struct__80846(
  struct__80846 *kcg_c1,
  struct__80846 *kcg_c2);
#endif /* kcg_comp_struct__80846 */

#ifndef kcg_comp_struct__80857
extern kcg_bool kcg_comp_struct__80857(
  struct__80857 *kcg_c1,
  struct__80857 *kcg_c2);
#endif /* kcg_comp_struct__80857 */

#ifndef kcg_comp_struct__80866
extern kcg_bool kcg_comp_struct__80866(
  struct__80866 *kcg_c1,
  struct__80866 *kcg_c2);
#endif /* kcg_comp_struct__80866 */

#ifndef kcg_comp_struct__80876
extern kcg_bool kcg_comp_struct__80876(
  struct__80876 *kcg_c1,
  struct__80876 *kcg_c2);
#endif /* kcg_comp_struct__80876 */

#ifndef kcg_comp_struct__80885
extern kcg_bool kcg_comp_struct__80885(
  struct__80885 *kcg_c1,
  struct__80885 *kcg_c2);
#endif /* kcg_comp_struct__80885 */

#ifndef kcg_comp_struct__80898
extern kcg_bool kcg_comp_struct__80898(
  struct__80898 *kcg_c1,
  struct__80898 *kcg_c2);
#endif /* kcg_comp_struct__80898 */

#ifndef kcg_comp_struct__80911
extern kcg_bool kcg_comp_struct__80911(
  struct__80911 *kcg_c1,
  struct__80911 *kcg_c2);
#endif /* kcg_comp_struct__80911 */

#ifndef kcg_comp_struct__80921
extern kcg_bool kcg_comp_struct__80921(
  struct__80921 *kcg_c1,
  struct__80921 *kcg_c2);
#endif /* kcg_comp_struct__80921 */

#ifndef kcg_comp_struct__80930
extern kcg_bool kcg_comp_struct__80930(
  struct__80930 *kcg_c1,
  struct__80930 *kcg_c2);
#endif /* kcg_comp_struct__80930 */

#ifndef kcg_comp_struct__80959
extern kcg_bool kcg_comp_struct__80959(
  struct__80959 *kcg_c1,
  struct__80959 *kcg_c2);
#endif /* kcg_comp_struct__80959 */

#ifndef kcg_comp_struct__80964
extern kcg_bool kcg_comp_struct__80964(
  struct__80964 *kcg_c1,
  struct__80964 *kcg_c2);
#endif /* kcg_comp_struct__80964 */

#ifndef kcg_comp_struct__80974
extern kcg_bool kcg_comp_struct__80974(
  struct__80974 *kcg_c1,
  struct__80974 *kcg_c2);
#endif /* kcg_comp_struct__80974 */

#ifndef kcg_comp_struct__80989
extern kcg_bool kcg_comp_struct__80989(
  struct__80989 *kcg_c1,
  struct__80989 *kcg_c2);
#endif /* kcg_comp_struct__80989 */

#ifndef kcg_comp_struct__80997
extern kcg_bool kcg_comp_struct__80997(
  struct__80997 *kcg_c1,
  struct__80997 *kcg_c2);
#endif /* kcg_comp_struct__80997 */

#ifndef kcg_comp_struct__81013
extern kcg_bool kcg_comp_struct__81013(
  struct__81013 *kcg_c1,
  struct__81013 *kcg_c2);
#endif /* kcg_comp_struct__81013 */

#ifndef kcg_comp_struct__81046
extern kcg_bool kcg_comp_struct__81046(
  struct__81046 *kcg_c1,
  struct__81046 *kcg_c2);
#endif /* kcg_comp_struct__81046 */

#ifndef kcg_comp_struct__81055
extern kcg_bool kcg_comp_struct__81055(
  struct__81055 *kcg_c1,
  struct__81055 *kcg_c2);
#endif /* kcg_comp_struct__81055 */

#ifndef kcg_comp_struct__81060
extern kcg_bool kcg_comp_struct__81060(
  struct__81060 *kcg_c1,
  struct__81060 *kcg_c2);
#endif /* kcg_comp_struct__81060 */

#ifndef kcg_comp_struct__81069
extern kcg_bool kcg_comp_struct__81069(
  struct__81069 *kcg_c1,
  struct__81069 *kcg_c2);
#endif /* kcg_comp_struct__81069 */

#ifndef kcg_comp_struct__81087
extern kcg_bool kcg_comp_struct__81087(
  struct__81087 *kcg_c1,
  struct__81087 *kcg_c2);
#endif /* kcg_comp_struct__81087 */

#ifndef kcg_comp_struct__81098
extern kcg_bool kcg_comp_struct__81098(
  struct__81098 *kcg_c1,
  struct__81098 *kcg_c2);
#endif /* kcg_comp_struct__81098 */

#ifndef kcg_comp_struct__81113
extern kcg_bool kcg_comp_struct__81113(
  struct__81113 *kcg_c1,
  struct__81113 *kcg_c2);
#endif /* kcg_comp_struct__81113 */

#ifndef kcg_comp_struct__81118
extern kcg_bool kcg_comp_struct__81118(
  struct__81118 *kcg_c1,
  struct__81118 *kcg_c2);
#endif /* kcg_comp_struct__81118 */

#ifndef kcg_comp_struct__81124
extern kcg_bool kcg_comp_struct__81124(
  struct__81124 *kcg_c1,
  struct__81124 *kcg_c2);
#endif /* kcg_comp_struct__81124 */

#ifndef kcg_comp_struct__81129
extern kcg_bool kcg_comp_struct__81129(
  struct__81129 *kcg_c1,
  struct__81129 *kcg_c2);
#endif /* kcg_comp_struct__81129 */

#ifndef kcg_comp_struct__81136
extern kcg_bool kcg_comp_struct__81136(
  struct__81136 *kcg_c1,
  struct__81136 *kcg_c2);
#endif /* kcg_comp_struct__81136 */

#ifndef kcg_comp_struct__81147
extern kcg_bool kcg_comp_struct__81147(
  struct__81147 *kcg_c1,
  struct__81147 *kcg_c2);
#endif /* kcg_comp_struct__81147 */

#ifndef kcg_comp_struct__81202
extern kcg_bool kcg_comp_struct__81202(
  struct__81202 *kcg_c1,
  struct__81202 *kcg_c2);
#endif /* kcg_comp_struct__81202 */

#ifndef kcg_comp_struct__81214
extern kcg_bool kcg_comp_struct__81214(
  struct__81214 *kcg_c1,
  struct__81214 *kcg_c2);
#endif /* kcg_comp_struct__81214 */

#ifndef kcg_comp_struct__81222
extern kcg_bool kcg_comp_struct__81222(
  struct__81222 *kcg_c1,
  struct__81222 *kcg_c2);
#endif /* kcg_comp_struct__81222 */

#ifndef kcg_comp_struct__81238
extern kcg_bool kcg_comp_struct__81238(
  struct__81238 *kcg_c1,
  struct__81238 *kcg_c2);
#endif /* kcg_comp_struct__81238 */

#ifndef kcg_comp_struct__81243
extern kcg_bool kcg_comp_struct__81243(
  struct__81243 *kcg_c1,
  struct__81243 *kcg_c2);
#endif /* kcg_comp_struct__81243 */

#ifndef kcg_comp_struct__81248
extern kcg_bool kcg_comp_struct__81248(
  struct__81248 *kcg_c1,
  struct__81248 *kcg_c2);
#endif /* kcg_comp_struct__81248 */

#ifndef kcg_comp_struct__81253
extern kcg_bool kcg_comp_struct__81253(
  struct__81253 *kcg_c1,
  struct__81253 *kcg_c2);
#endif /* kcg_comp_struct__81253 */

#ifndef kcg_comp_struct__81261
extern kcg_bool kcg_comp_struct__81261(
  struct__81261 *kcg_c1,
  struct__81261 *kcg_c2);
#endif /* kcg_comp_struct__81261 */

#ifndef kcg_comp_struct__81267
extern kcg_bool kcg_comp_struct__81267(
  struct__81267 *kcg_c1,
  struct__81267 *kcg_c2);
#endif /* kcg_comp_struct__81267 */

#ifndef kcg_comp_struct__81287
extern kcg_bool kcg_comp_struct__81287(
  struct__81287 *kcg_c1,
  struct__81287 *kcg_c2);
#endif /* kcg_comp_struct__81287 */

#ifndef kcg_comp_struct__81292
extern kcg_bool kcg_comp_struct__81292(
  struct__81292 *kcg_c1,
  struct__81292 *kcg_c2);
#endif /* kcg_comp_struct__81292 */

#ifndef kcg_comp_struct__81311
extern kcg_bool kcg_comp_struct__81311(
  struct__81311 *kcg_c1,
  struct__81311 *kcg_c2);
#endif /* kcg_comp_struct__81311 */

#ifndef kcg_comp_struct__81316
extern kcg_bool kcg_comp_struct__81316(
  struct__81316 *kcg_c1,
  struct__81316 *kcg_c2);
#endif /* kcg_comp_struct__81316 */

#ifndef kcg_comp_struct__81326
extern kcg_bool kcg_comp_struct__81326(
  struct__81326 *kcg_c1,
  struct__81326 *kcg_c2);
#endif /* kcg_comp_struct__81326 */

#ifndef kcg_comp_struct__81332
extern kcg_bool kcg_comp_struct__81332(
  struct__81332 *kcg_c1,
  struct__81332 *kcg_c2);
#endif /* kcg_comp_struct__81332 */

#ifndef kcg_comp_struct__81337
extern kcg_bool kcg_comp_struct__81337(
  struct__81337 *kcg_c1,
  struct__81337 *kcg_c2);
#endif /* kcg_comp_struct__81337 */

#ifndef kcg_comp_struct__81345
extern kcg_bool kcg_comp_struct__81345(
  struct__81345 *kcg_c1,
  struct__81345 *kcg_c2);
#endif /* kcg_comp_struct__81345 */

#ifndef kcg_comp_struct__81354
extern kcg_bool kcg_comp_struct__81354(
  struct__81354 *kcg_c1,
  struct__81354 *kcg_c2);
#endif /* kcg_comp_struct__81354 */

#ifndef kcg_comp_struct__81363
extern kcg_bool kcg_comp_struct__81363(
  struct__81363 *kcg_c1,
  struct__81363 *kcg_c2);
#endif /* kcg_comp_struct__81363 */

#ifndef kcg_comp_struct__81370
extern kcg_bool kcg_comp_struct__81370(
  struct__81370 *kcg_c1,
  struct__81370 *kcg_c2);
#endif /* kcg_comp_struct__81370 */

#ifndef kcg_comp_struct__81376
extern kcg_bool kcg_comp_struct__81376(
  struct__81376 *kcg_c1,
  struct__81376 *kcg_c2);
#endif /* kcg_comp_struct__81376 */

#ifndef kcg_comp_struct__81384
extern kcg_bool kcg_comp_struct__81384(
  struct__81384 *kcg_c1,
  struct__81384 *kcg_c2);
#endif /* kcg_comp_struct__81384 */

#ifndef kcg_comp_struct__81389
extern kcg_bool kcg_comp_struct__81389(
  struct__81389 *kcg_c1,
  struct__81389 *kcg_c2);
#endif /* kcg_comp_struct__81389 */

#ifndef kcg_comp_struct__81396
extern kcg_bool kcg_comp_struct__81396(
  struct__81396 *kcg_c1,
  struct__81396 *kcg_c2);
#endif /* kcg_comp_struct__81396 */

#ifndef kcg_comp_struct__81405
extern kcg_bool kcg_comp_struct__81405(
  struct__81405 *kcg_c1,
  struct__81405 *kcg_c2);
#endif /* kcg_comp_struct__81405 */

#ifndef kcg_comp_struct__81413
extern kcg_bool kcg_comp_struct__81413(
  struct__81413 *kcg_c1,
  struct__81413 *kcg_c2);
#endif /* kcg_comp_struct__81413 */

#ifndef kcg_comp_struct__81422
extern kcg_bool kcg_comp_struct__81422(
  struct__81422 *kcg_c1,
  struct__81422 *kcg_c2);
#endif /* kcg_comp_struct__81422 */

#ifndef kcg_comp_struct__81440
extern kcg_bool kcg_comp_struct__81440(
  struct__81440 *kcg_c1,
  struct__81440 *kcg_c2);
#endif /* kcg_comp_struct__81440 */

#ifndef kcg_comp_struct__81452
extern kcg_bool kcg_comp_struct__81452(
  struct__81452 *kcg_c1,
  struct__81452 *kcg_c2);
#endif /* kcg_comp_struct__81452 */

#ifndef kcg_comp_struct__81458
extern kcg_bool kcg_comp_struct__81458(
  struct__81458 *kcg_c1,
  struct__81458 *kcg_c2);
#endif /* kcg_comp_struct__81458 */

#ifndef kcg_comp_struct__81464
extern kcg_bool kcg_comp_struct__81464(
  struct__81464 *kcg_c1,
  struct__81464 *kcg_c2);
#endif /* kcg_comp_struct__81464 */

#ifndef kcg_comp_struct__81469
extern kcg_bool kcg_comp_struct__81469(
  struct__81469 *kcg_c1,
  struct__81469 *kcg_c2);
#endif /* kcg_comp_struct__81469 */

#ifndef kcg_comp_struct__81475
extern kcg_bool kcg_comp_struct__81475(
  struct__81475 *kcg_c1,
  struct__81475 *kcg_c2);
#endif /* kcg_comp_struct__81475 */

#ifndef kcg_comp_struct__81481
extern kcg_bool kcg_comp_struct__81481(
  struct__81481 *kcg_c1,
  struct__81481 *kcg_c2);
#endif /* kcg_comp_struct__81481 */

#ifndef kcg_comp_struct__81486
extern kcg_bool kcg_comp_struct__81486(
  struct__81486 *kcg_c1,
  struct__81486 *kcg_c2);
#endif /* kcg_comp_struct__81486 */

#ifndef kcg_comp_struct__81495
extern kcg_bool kcg_comp_struct__81495(
  struct__81495 *kcg_c1,
  struct__81495 *kcg_c2);
#endif /* kcg_comp_struct__81495 */

#ifndef kcg_comp_struct__81506
extern kcg_bool kcg_comp_struct__81506(
  struct__81506 *kcg_c1,
  struct__81506 *kcg_c2);
#endif /* kcg_comp_struct__81506 */

#ifndef kcg_comp_struct__81515
extern kcg_bool kcg_comp_struct__81515(
  struct__81515 *kcg_c1,
  struct__81515 *kcg_c2);
#endif /* kcg_comp_struct__81515 */

#ifndef kcg_comp_struct__81522
extern kcg_bool kcg_comp_struct__81522(
  struct__81522 *kcg_c1,
  struct__81522 *kcg_c2);
#endif /* kcg_comp_struct__81522 */

#ifndef kcg_comp_struct__81527
extern kcg_bool kcg_comp_struct__81527(
  struct__81527 *kcg_c1,
  struct__81527 *kcg_c2);
#endif /* kcg_comp_struct__81527 */

#ifndef kcg_comp_struct__81532
extern kcg_bool kcg_comp_struct__81532(
  struct__81532 *kcg_c1,
  struct__81532 *kcg_c2);
#endif /* kcg_comp_struct__81532 */

#ifndef kcg_comp_struct__81538
extern kcg_bool kcg_comp_struct__81538(
  struct__81538 *kcg_c1,
  struct__81538 *kcg_c2);
#endif /* kcg_comp_struct__81538 */

#ifndef kcg_comp_struct__81543
extern kcg_bool kcg_comp_struct__81543(
  struct__81543 *kcg_c1,
  struct__81543 *kcg_c2);
#endif /* kcg_comp_struct__81543 */

#ifndef kcg_comp_struct__81552
extern kcg_bool kcg_comp_struct__81552(
  struct__81552 *kcg_c1,
  struct__81552 *kcg_c2);
#endif /* kcg_comp_struct__81552 */

#ifndef kcg_comp_struct__81556
extern kcg_bool kcg_comp_struct__81556(
  struct__81556 *kcg_c1,
  struct__81556 *kcg_c2);
#endif /* kcg_comp_struct__81556 */

#ifndef kcg_comp_struct__81561
extern kcg_bool kcg_comp_struct__81561(
  struct__81561 *kcg_c1,
  struct__81561 *kcg_c2);
#endif /* kcg_comp_struct__81561 */

#ifndef kcg_comp_struct__81569
extern kcg_bool kcg_comp_struct__81569(
  struct__81569 *kcg_c1,
  struct__81569 *kcg_c2);
#endif /* kcg_comp_struct__81569 */

#ifndef kcg_comp_struct__81582
extern kcg_bool kcg_comp_struct__81582(
  struct__81582 *kcg_c1,
  struct__81582 *kcg_c2);
#endif /* kcg_comp_struct__81582 */

#ifndef kcg_comp_struct__81591
extern kcg_bool kcg_comp_struct__81591(
  struct__81591 *kcg_c1,
  struct__81591 *kcg_c2);
#endif /* kcg_comp_struct__81591 */

#ifndef kcg_comp_struct__81605
extern kcg_bool kcg_comp_struct__81605(
  struct__81605 *kcg_c1,
  struct__81605 *kcg_c2);
#endif /* kcg_comp_struct__81605 */

#ifndef kcg_comp_struct__81613
extern kcg_bool kcg_comp_struct__81613(
  struct__81613 *kcg_c1,
  struct__81613 *kcg_c2);
#endif /* kcg_comp_struct__81613 */

#ifndef kcg_comp_struct__81626
extern kcg_bool kcg_comp_struct__81626(
  struct__81626 *kcg_c1,
  struct__81626 *kcg_c2);
#endif /* kcg_comp_struct__81626 */

#ifndef kcg_comp_struct__81631
extern kcg_bool kcg_comp_struct__81631(
  struct__81631 *kcg_c1,
  struct__81631 *kcg_c2);
#endif /* kcg_comp_struct__81631 */

#ifndef kcg_comp_struct__81640
extern kcg_bool kcg_comp_struct__81640(
  struct__81640 *kcg_c1,
  struct__81640 *kcg_c2);
#endif /* kcg_comp_struct__81640 */

#ifndef kcg_comp_struct__81649
extern kcg_bool kcg_comp_struct__81649(
  struct__81649 *kcg_c1,
  struct__81649 *kcg_c2);
#endif /* kcg_comp_struct__81649 */

#ifndef kcg_comp_struct__81660
extern kcg_bool kcg_comp_struct__81660(
  struct__81660 *kcg_c1,
  struct__81660 *kcg_c2);
#endif /* kcg_comp_struct__81660 */

#ifndef kcg_comp_struct__81671
extern kcg_bool kcg_comp_struct__81671(
  struct__81671 *kcg_c1,
  struct__81671 *kcg_c2);
#endif /* kcg_comp_struct__81671 */

#ifndef kcg_comp_struct__81701
extern kcg_bool kcg_comp_struct__81701(
  struct__81701 *kcg_c1,
  struct__81701 *kcg_c2);
#endif /* kcg_comp_struct__81701 */

#ifndef kcg_comp_struct__81710
extern kcg_bool kcg_comp_struct__81710(
  struct__81710 *kcg_c1,
  struct__81710 *kcg_c2);
#endif /* kcg_comp_struct__81710 */

#ifndef kcg_comp_struct__81720
extern kcg_bool kcg_comp_struct__81720(
  struct__81720 *kcg_c1,
  struct__81720 *kcg_c2);
#endif /* kcg_comp_struct__81720 */

#ifndef kcg_comp_struct__81727
extern kcg_bool kcg_comp_struct__81727(
  struct__81727 *kcg_c1,
  struct__81727 *kcg_c2);
#endif /* kcg_comp_struct__81727 */

#ifndef kcg_comp_struct__81735
extern kcg_bool kcg_comp_struct__81735(
  struct__81735 *kcg_c1,
  struct__81735 *kcg_c2);
#endif /* kcg_comp_struct__81735 */

#ifndef kcg_comp_struct__81746
extern kcg_bool kcg_comp_struct__81746(
  struct__81746 *kcg_c1,
  struct__81746 *kcg_c2);
#endif /* kcg_comp_struct__81746 */

#ifndef kcg_comp_struct__81752
extern kcg_bool kcg_comp_struct__81752(
  struct__81752 *kcg_c1,
  struct__81752 *kcg_c2);
#endif /* kcg_comp_struct__81752 */

#ifndef kcg_comp_struct__81758
extern kcg_bool kcg_comp_struct__81758(
  struct__81758 *kcg_c1,
  struct__81758 *kcg_c2);
#endif /* kcg_comp_struct__81758 */

#ifndef kcg_comp_struct__81764
extern kcg_bool kcg_comp_struct__81764(
  struct__81764 *kcg_c1,
  struct__81764 *kcg_c2);
#endif /* kcg_comp_struct__81764 */

#ifndef kcg_comp_struct__81770
extern kcg_bool kcg_comp_struct__81770(
  struct__81770 *kcg_c1,
  struct__81770 *kcg_c2);
#endif /* kcg_comp_struct__81770 */

#ifndef kcg_comp_struct__81777
extern kcg_bool kcg_comp_struct__81777(
  struct__81777 *kcg_c1,
  struct__81777 *kcg_c2);
#endif /* kcg_comp_struct__81777 */

#ifndef kcg_comp_struct__81787
extern kcg_bool kcg_comp_struct__81787(
  struct__81787 *kcg_c1,
  struct__81787 *kcg_c2);
#endif /* kcg_comp_struct__81787 */

#ifndef kcg_comp_struct__81801
extern kcg_bool kcg_comp_struct__81801(
  struct__81801 *kcg_c1,
  struct__81801 *kcg_c2);
#endif /* kcg_comp_struct__81801 */

#ifndef kcg_comp_struct__81807
extern kcg_bool kcg_comp_struct__81807(
  struct__81807 *kcg_c1,
  struct__81807 *kcg_c2);
#endif /* kcg_comp_struct__81807 */

#ifndef kcg_comp_struct__81814
extern kcg_bool kcg_comp_struct__81814(
  struct__81814 *kcg_c1,
  struct__81814 *kcg_c2);
#endif /* kcg_comp_struct__81814 */

#ifndef kcg_comp_struct__81821
extern kcg_bool kcg_comp_struct__81821(
  struct__81821 *kcg_c1,
  struct__81821 *kcg_c2);
#endif /* kcg_comp_struct__81821 */

#ifndef kcg_comp_struct__81827
extern kcg_bool kcg_comp_struct__81827(
  struct__81827 *kcg_c1,
  struct__81827 *kcg_c2);
#endif /* kcg_comp_struct__81827 */

#ifndef kcg_comp_struct__81836
extern kcg_bool kcg_comp_struct__81836(
  struct__81836 *kcg_c1,
  struct__81836 *kcg_c2);
#endif /* kcg_comp_struct__81836 */

#ifndef kcg_comp_struct__81842
extern kcg_bool kcg_comp_struct__81842(
  struct__81842 *kcg_c1,
  struct__81842 *kcg_c2);
#endif /* kcg_comp_struct__81842 */

#ifndef kcg_comp_struct__81847
extern kcg_bool kcg_comp_struct__81847(
  struct__81847 *kcg_c1,
  struct__81847 *kcg_c2);
#endif /* kcg_comp_struct__81847 */

#ifndef kcg_comp_struct__81857
extern kcg_bool kcg_comp_struct__81857(
  struct__81857 *kcg_c1,
  struct__81857 *kcg_c2);
#endif /* kcg_comp_struct__81857 */

#ifndef kcg_comp_struct__81867
extern kcg_bool kcg_comp_struct__81867(
  struct__81867 *kcg_c1,
  struct__81867 *kcg_c2);
#endif /* kcg_comp_struct__81867 */

#ifndef kcg_comp_struct__81883
extern kcg_bool kcg_comp_struct__81883(
  struct__81883 *kcg_c1,
  struct__81883 *kcg_c2);
#endif /* kcg_comp_struct__81883 */

#ifndef kcg_comp_struct__81895
extern kcg_bool kcg_comp_struct__81895(
  struct__81895 *kcg_c1,
  struct__81895 *kcg_c2);
#endif /* kcg_comp_struct__81895 */

#ifndef kcg_comp_struct__81902
extern kcg_bool kcg_comp_struct__81902(
  struct__81902 *kcg_c1,
  struct__81902 *kcg_c2);
#endif /* kcg_comp_struct__81902 */

#ifndef kcg_comp_struct__81935
extern kcg_bool kcg_comp_struct__81935(
  struct__81935 *kcg_c1,
  struct__81935 *kcg_c2);
#endif /* kcg_comp_struct__81935 */

#ifndef kcg_comp_struct__81940
extern kcg_bool kcg_comp_struct__81940(
  struct__81940 *kcg_c1,
  struct__81940 *kcg_c2);
#endif /* kcg_comp_struct__81940 */

#ifndef kcg_comp_struct__81945
extern kcg_bool kcg_comp_struct__81945(
  struct__81945 *kcg_c1,
  struct__81945 *kcg_c2);
#endif /* kcg_comp_struct__81945 */

#ifndef kcg_comp_struct__81954
extern kcg_bool kcg_comp_struct__81954(
  struct__81954 *kcg_c1,
  struct__81954 *kcg_c2);
#endif /* kcg_comp_struct__81954 */

#ifndef kcg_comp_struct__81961
extern kcg_bool kcg_comp_struct__81961(
  struct__81961 *kcg_c1,
  struct__81961 *kcg_c2);
#endif /* kcg_comp_struct__81961 */

#ifndef kcg_comp_struct__81968
extern kcg_bool kcg_comp_struct__81968(
  struct__81968 *kcg_c1,
  struct__81968 *kcg_c2);
#endif /* kcg_comp_struct__81968 */

#ifndef kcg_comp_struct__81974
extern kcg_bool kcg_comp_struct__81974(
  struct__81974 *kcg_c1,
  struct__81974 *kcg_c2);
#endif /* kcg_comp_struct__81974 */

#ifndef kcg_comp_struct__81984
extern kcg_bool kcg_comp_struct__81984(
  struct__81984 *kcg_c1,
  struct__81984 *kcg_c2);
#endif /* kcg_comp_struct__81984 */

#ifndef kcg_comp_struct__81996
extern kcg_bool kcg_comp_struct__81996(
  struct__81996 *kcg_c1,
  struct__81996 *kcg_c2);
#endif /* kcg_comp_struct__81996 */

#ifndef kcg_comp_struct__82003
extern kcg_bool kcg_comp_struct__82003(
  struct__82003 *kcg_c1,
  struct__82003 *kcg_c2);
#endif /* kcg_comp_struct__82003 */

#ifndef kcg_comp_struct__82013
extern kcg_bool kcg_comp_struct__82013(
  struct__82013 *kcg_c1,
  struct__82013 *kcg_c2);
#endif /* kcg_comp_struct__82013 */

#ifndef kcg_comp_struct__82022
extern kcg_bool kcg_comp_struct__82022(
  struct__82022 *kcg_c1,
  struct__82022 *kcg_c2);
#endif /* kcg_comp_struct__82022 */

#ifndef kcg_comp_struct__82033
extern kcg_bool kcg_comp_struct__82033(
  struct__82033 *kcg_c1,
  struct__82033 *kcg_c2);
#endif /* kcg_comp_struct__82033 */

#ifndef kcg_comp_struct__82040
extern kcg_bool kcg_comp_struct__82040(
  struct__82040 *kcg_c1,
  struct__82040 *kcg_c2);
#endif /* kcg_comp_struct__82040 */

#ifndef kcg_comp_struct__82050
extern kcg_bool kcg_comp_struct__82050(
  struct__82050 *kcg_c1,
  struct__82050 *kcg_c2);
#endif /* kcg_comp_struct__82050 */

#ifndef kcg_comp_struct__82055
extern kcg_bool kcg_comp_struct__82055(
  struct__82055 *kcg_c1,
  struct__82055 *kcg_c2);
#endif /* kcg_comp_struct__82055 */

#ifndef kcg_comp_struct__82068
extern kcg_bool kcg_comp_struct__82068(
  struct__82068 *kcg_c1,
  struct__82068 *kcg_c2);
#endif /* kcg_comp_struct__82068 */

#ifndef kcg_comp_struct__82077
extern kcg_bool kcg_comp_struct__82077(
  struct__82077 *kcg_c1,
  struct__82077 *kcg_c2);
#endif /* kcg_comp_struct__82077 */

#ifndef kcg_comp_struct__82093
extern kcg_bool kcg_comp_struct__82093(
  struct__82093 *kcg_c1,
  struct__82093 *kcg_c2);
#endif /* kcg_comp_struct__82093 */

#ifndef kcg_comp_struct__82116
extern kcg_bool kcg_comp_struct__82116(
  struct__82116 *kcg_c1,
  struct__82116 *kcg_c2);
#endif /* kcg_comp_struct__82116 */

#ifndef kcg_comp_struct__82130
extern kcg_bool kcg_comp_struct__82130(
  struct__82130 *kcg_c1,
  struct__82130 *kcg_c2);
#endif /* kcg_comp_struct__82130 */

#ifndef kcg_comp_struct__82136
extern kcg_bool kcg_comp_struct__82136(
  struct__82136 *kcg_c1,
  struct__82136 *kcg_c2);
#endif /* kcg_comp_struct__82136 */

#ifndef kcg_comp_struct__82144
extern kcg_bool kcg_comp_struct__82144(
  struct__82144 *kcg_c1,
  struct__82144 *kcg_c2);
#endif /* kcg_comp_struct__82144 */

#ifndef kcg_comp_struct__82150
extern kcg_bool kcg_comp_struct__82150(
  struct__82150 *kcg_c1,
  struct__82150 *kcg_c2);
#endif /* kcg_comp_struct__82150 */

#ifndef kcg_comp_struct__82177
extern kcg_bool kcg_comp_struct__82177(
  struct__82177 *kcg_c1,
  struct__82177 *kcg_c2);
#endif /* kcg_comp_struct__82177 */

#ifndef kcg_comp_struct__82190
extern kcg_bool kcg_comp_struct__82190(
  struct__82190 *kcg_c1,
  struct__82190 *kcg_c2);
#endif /* kcg_comp_struct__82190 */

#ifndef kcg_comp_struct__82210
extern kcg_bool kcg_comp_struct__82210(
  struct__82210 *kcg_c1,
  struct__82210 *kcg_c2);
#endif /* kcg_comp_struct__82210 */

#ifndef kcg_comp_struct__82217
extern kcg_bool kcg_comp_struct__82217(
  struct__82217 *kcg_c1,
  struct__82217 *kcg_c2);
#endif /* kcg_comp_struct__82217 */

#ifndef kcg_comp_struct__82224
extern kcg_bool kcg_comp_struct__82224(
  struct__82224 *kcg_c1,
  struct__82224 *kcg_c2);
#endif /* kcg_comp_struct__82224 */

#ifndef kcg_comp_struct__82230
extern kcg_bool kcg_comp_struct__82230(
  struct__82230 *kcg_c1,
  struct__82230 *kcg_c2);
#endif /* kcg_comp_struct__82230 */

#ifndef kcg_comp_struct__82237
extern kcg_bool kcg_comp_struct__82237(
  struct__82237 *kcg_c1,
  struct__82237 *kcg_c2);
#endif /* kcg_comp_struct__82237 */

#ifndef kcg_comp_struct__82243
extern kcg_bool kcg_comp_struct__82243(
  struct__82243 *kcg_c1,
  struct__82243 *kcg_c2);
#endif /* kcg_comp_struct__82243 */

#ifndef kcg_comp_struct__82253
extern kcg_bool kcg_comp_struct__82253(
  struct__82253 *kcg_c1,
  struct__82253 *kcg_c2);
#endif /* kcg_comp_struct__82253 */

#ifndef kcg_comp_struct__82262
extern kcg_bool kcg_comp_struct__82262(
  struct__82262 *kcg_c1,
  struct__82262 *kcg_c2);
#endif /* kcg_comp_struct__82262 */

#ifndef kcg_comp_struct__82270
extern kcg_bool kcg_comp_struct__82270(
  struct__82270 *kcg_c1,
  struct__82270 *kcg_c2);
#endif /* kcg_comp_struct__82270 */

#ifndef kcg_comp_struct__82276
extern kcg_bool kcg_comp_struct__82276(
  struct__82276 *kcg_c1,
  struct__82276 *kcg_c2);
#endif /* kcg_comp_struct__82276 */

#ifndef kcg_comp_struct__82288
extern kcg_bool kcg_comp_struct__82288(
  struct__82288 *kcg_c1,
  struct__82288 *kcg_c2);
#endif /* kcg_comp_struct__82288 */

#ifndef kcg_comp_struct__82294
extern kcg_bool kcg_comp_struct__82294(
  struct__82294 *kcg_c1,
  struct__82294 *kcg_c2);
#endif /* kcg_comp_struct__82294 */

#ifndef kcg_comp_struct__82300
extern kcg_bool kcg_comp_struct__82300(
  struct__82300 *kcg_c1,
  struct__82300 *kcg_c2);
#endif /* kcg_comp_struct__82300 */

#ifndef kcg_comp_struct__82306
extern kcg_bool kcg_comp_struct__82306(
  struct__82306 *kcg_c1,
  struct__82306 *kcg_c2);
#endif /* kcg_comp_struct__82306 */

#ifndef kcg_comp_struct__82312
extern kcg_bool kcg_comp_struct__82312(
  struct__82312 *kcg_c1,
  struct__82312 *kcg_c2);
#endif /* kcg_comp_struct__82312 */

#ifndef kcg_comp_struct__82322
extern kcg_bool kcg_comp_struct__82322(
  struct__82322 *kcg_c1,
  struct__82322 *kcg_c2);
#endif /* kcg_comp_struct__82322 */

#ifndef kcg_comp_struct__82330
extern kcg_bool kcg_comp_struct__82330(
  struct__82330 *kcg_c1,
  struct__82330 *kcg_c2);
#endif /* kcg_comp_struct__82330 */

#ifndef kcg_comp_struct__82338
extern kcg_bool kcg_comp_struct__82338(
  struct__82338 *kcg_c1,
  struct__82338 *kcg_c2);
#endif /* kcg_comp_struct__82338 */

#ifndef kcg_comp_struct__82346
extern kcg_bool kcg_comp_struct__82346(
  struct__82346 *kcg_c1,
  struct__82346 *kcg_c2);
#endif /* kcg_comp_struct__82346 */

#ifndef kcg_comp_struct__82351
extern kcg_bool kcg_comp_struct__82351(
  struct__82351 *kcg_c1,
  struct__82351 *kcg_c2);
#endif /* kcg_comp_struct__82351 */

#ifndef kcg_comp_struct__82359
extern kcg_bool kcg_comp_struct__82359(
  struct__82359 *kcg_c1,
  struct__82359 *kcg_c2);
#endif /* kcg_comp_struct__82359 */

#ifndef kcg_comp_struct__82370
extern kcg_bool kcg_comp_struct__82370(
  struct__82370 *kcg_c1,
  struct__82370 *kcg_c2);
#endif /* kcg_comp_struct__82370 */

#ifndef kcg_comp_struct__82377
extern kcg_bool kcg_comp_struct__82377(
  struct__82377 *kcg_c1,
  struct__82377 *kcg_c2);
#endif /* kcg_comp_struct__82377 */

#ifndef kcg_comp_struct__82385
extern kcg_bool kcg_comp_struct__82385(
  struct__82385 *kcg_c1,
  struct__82385 *kcg_c2);
#endif /* kcg_comp_struct__82385 */

#ifndef kcg_comp_struct__82394
extern kcg_bool kcg_comp_struct__82394(
  struct__82394 *kcg_c1,
  struct__82394 *kcg_c2);
#endif /* kcg_comp_struct__82394 */

#ifndef kcg_comp_struct__82406
extern kcg_bool kcg_comp_struct__82406(
  struct__82406 *kcg_c1,
  struct__82406 *kcg_c2);
#endif /* kcg_comp_struct__82406 */

#ifndef kcg_comp_struct__82439
extern kcg_bool kcg_comp_struct__82439(
  struct__82439 *kcg_c1,
  struct__82439 *kcg_c2);
#endif /* kcg_comp_struct__82439 */

#ifndef kcg_comp_struct__82445
extern kcg_bool kcg_comp_struct__82445(
  struct__82445 *kcg_c1,
  struct__82445 *kcg_c2);
#endif /* kcg_comp_struct__82445 */

#ifndef kcg_comp_struct__82471
extern kcg_bool kcg_comp_struct__82471(
  struct__82471 *kcg_c1,
  struct__82471 *kcg_c2);
#endif /* kcg_comp_struct__82471 */

#ifndef kcg_comp_struct__82491
extern kcg_bool kcg_comp_struct__82491(
  struct__82491 *kcg_c1,
  struct__82491 *kcg_c2);
#endif /* kcg_comp_struct__82491 */

#ifndef kcg_comp_struct__82505
extern kcg_bool kcg_comp_struct__82505(
  struct__82505 *kcg_c1,
  struct__82505 *kcg_c2);
#endif /* kcg_comp_struct__82505 */

#ifndef kcg_comp_struct__82511
extern kcg_bool kcg_comp_struct__82511(
  struct__82511 *kcg_c1,
  struct__82511 *kcg_c2);
#endif /* kcg_comp_struct__82511 */

#ifndef kcg_comp_struct__82516
extern kcg_bool kcg_comp_struct__82516(
  struct__82516 *kcg_c1,
  struct__82516 *kcg_c2);
#endif /* kcg_comp_struct__82516 */

#ifndef kcg_comp_struct__82523
extern kcg_bool kcg_comp_struct__82523(
  struct__82523 *kcg_c1,
  struct__82523 *kcg_c2);
#endif /* kcg_comp_struct__82523 */

#ifndef kcg_comp_struct__82529
extern kcg_bool kcg_comp_struct__82529(
  struct__82529 *kcg_c1,
  struct__82529 *kcg_c2);
#endif /* kcg_comp_struct__82529 */

#ifndef kcg_comp_struct__82554
extern kcg_bool kcg_comp_struct__82554(
  struct__82554 *kcg_c1,
  struct__82554 *kcg_c2);
#endif /* kcg_comp_struct__82554 */

#ifndef kcg_comp_struct__82560
extern kcg_bool kcg_comp_struct__82560(
  struct__82560 *kcg_c1,
  struct__82560 *kcg_c2);
#endif /* kcg_comp_struct__82560 */

#ifndef kcg_comp_struct__82569
extern kcg_bool kcg_comp_struct__82569(
  struct__82569 *kcg_c1,
  struct__82569 *kcg_c2);
#endif /* kcg_comp_struct__82569 */

#ifndef kcg_comp_struct__82575
extern kcg_bool kcg_comp_struct__82575(
  struct__82575 *kcg_c1,
  struct__82575 *kcg_c2);
#endif /* kcg_comp_struct__82575 */

#ifndef kcg_comp_struct__82581
extern kcg_bool kcg_comp_struct__82581(
  struct__82581 *kcg_c1,
  struct__82581 *kcg_c2);
#endif /* kcg_comp_struct__82581 */

#ifndef kcg_comp_struct__82586
extern kcg_bool kcg_comp_struct__82586(
  struct__82586 *kcg_c1,
  struct__82586 *kcg_c2);
#endif /* kcg_comp_struct__82586 */

#ifndef kcg_comp_struct__82594
extern kcg_bool kcg_comp_struct__82594(
  struct__82594 *kcg_c1,
  struct__82594 *kcg_c2);
#endif /* kcg_comp_struct__82594 */

#ifndef kcg_comp_struct__82603
extern kcg_bool kcg_comp_struct__82603(
  struct__82603 *kcg_c1,
  struct__82603 *kcg_c2);
#endif /* kcg_comp_struct__82603 */

#ifndef kcg_comp_struct__82610
extern kcg_bool kcg_comp_struct__82610(
  struct__82610 *kcg_c1,
  struct__82610 *kcg_c2);
#endif /* kcg_comp_struct__82610 */

#ifndef kcg_comp_struct__82619
extern kcg_bool kcg_comp_struct__82619(
  struct__82619 *kcg_c1,
  struct__82619 *kcg_c2);
#endif /* kcg_comp_struct__82619 */

#ifndef kcg_comp_struct__82625
extern kcg_bool kcg_comp_struct__82625(
  struct__82625 *kcg_c1,
  struct__82625 *kcg_c2);
#endif /* kcg_comp_struct__82625 */

#ifndef kcg_comp_struct__82630
extern kcg_bool kcg_comp_struct__82630(
  struct__82630 *kcg_c1,
  struct__82630 *kcg_c2);
#endif /* kcg_comp_struct__82630 */

#ifndef kcg_comp_struct__82636
extern kcg_bool kcg_comp_struct__82636(
  struct__82636 *kcg_c1,
  struct__82636 *kcg_c2);
#endif /* kcg_comp_struct__82636 */

#ifndef kcg_comp_struct__82641
extern kcg_bool kcg_comp_struct__82641(
  struct__82641 *kcg_c1,
  struct__82641 *kcg_c2);
#endif /* kcg_comp_struct__82641 */

#ifndef kcg_comp_struct__82646
extern kcg_bool kcg_comp_struct__82646(
  struct__82646 *kcg_c1,
  struct__82646 *kcg_c2);
#endif /* kcg_comp_struct__82646 */

#ifndef kcg_comp_struct__82652
extern kcg_bool kcg_comp_struct__82652(
  struct__82652 *kcg_c1,
  struct__82652 *kcg_c2);
#endif /* kcg_comp_struct__82652 */

#ifndef kcg_comp_struct__82660
extern kcg_bool kcg_comp_struct__82660(
  struct__82660 *kcg_c1,
  struct__82660 *kcg_c2);
#endif /* kcg_comp_struct__82660 */

#ifndef kcg_comp_struct__82667
extern kcg_bool kcg_comp_struct__82667(
  struct__82667 *kcg_c1,
  struct__82667 *kcg_c2);
#endif /* kcg_comp_struct__82667 */

#ifndef kcg_comp_struct__82672
extern kcg_bool kcg_comp_struct__82672(
  struct__82672 *kcg_c1,
  struct__82672 *kcg_c2);
#endif /* kcg_comp_struct__82672 */

#ifndef kcg_comp_struct__82682
extern kcg_bool kcg_comp_struct__82682(
  struct__82682 *kcg_c1,
  struct__82682 *kcg_c2);
#endif /* kcg_comp_struct__82682 */

#ifndef kcg_comp_struct__82693
extern kcg_bool kcg_comp_struct__82693(
  struct__82693 *kcg_c1,
  struct__82693 *kcg_c2);
#endif /* kcg_comp_struct__82693 */

#ifndef kcg_comp_struct__82710
extern kcg_bool kcg_comp_struct__82710(
  struct__82710 *kcg_c1,
  struct__82710 *kcg_c2);
#endif /* kcg_comp_struct__82710 */

#ifndef kcg_comp_struct__82722
extern kcg_bool kcg_comp_struct__82722(
  struct__82722 *kcg_c1,
  struct__82722 *kcg_c2);
#endif /* kcg_comp_struct__82722 */

#ifndef kcg_comp_struct__82730
extern kcg_bool kcg_comp_struct__82730(
  struct__82730 *kcg_c1,
  struct__82730 *kcg_c2);
#endif /* kcg_comp_struct__82730 */

#ifndef kcg_comp_struct__82738
extern kcg_bool kcg_comp_struct__82738(
  struct__82738 *kcg_c1,
  struct__82738 *kcg_c2);
#endif /* kcg_comp_struct__82738 */

#ifndef kcg_comp_struct__82761
extern kcg_bool kcg_comp_struct__82761(
  struct__82761 *kcg_c1,
  struct__82761 *kcg_c2);
#endif /* kcg_comp_struct__82761 */

#ifndef kcg_comp_array__80217
extern kcg_bool kcg_comp_array__80217(
  array__80217 *kcg_c1,
  array__80217 *kcg_c2);
#endif /* kcg_comp_array__80217 */

#ifndef kcg_comp_array__80227
extern kcg_bool kcg_comp_array__80227(
  array__80227 *kcg_c1,
  array__80227 *kcg_c2);
#endif /* kcg_comp_array__80227 */

#ifndef kcg_comp_array__80242
extern kcg_bool kcg_comp_array__80242(
  array__80242 *kcg_c1,
  array__80242 *kcg_c2);
#endif /* kcg_comp_array__80242 */

#ifndef kcg_comp_array__80252
extern kcg_bool kcg_comp_array__80252(
  array__80252 *kcg_c1,
  array__80252 *kcg_c2);
#endif /* kcg_comp_array__80252 */

#ifndef kcg_comp_array__80297
extern kcg_bool kcg_comp_array__80297(
  array__80297 *kcg_c1,
  array__80297 *kcg_c2);
#endif /* kcg_comp_array__80297 */

#ifndef kcg_comp_array__80307
extern kcg_bool kcg_comp_array__80307(
  array__80307 *kcg_c1,
  array__80307 *kcg_c2);
#endif /* kcg_comp_array__80307 */

#ifndef kcg_comp_array__80318
extern kcg_bool kcg_comp_array__80318(
  array__80318 *kcg_c1,
  array__80318 *kcg_c2);
#endif /* kcg_comp_array__80318 */

#ifndef kcg_comp_array__80326
extern kcg_bool kcg_comp_array__80326(
  array__80326 *kcg_c1,
  array__80326 *kcg_c2);
#endif /* kcg_comp_array__80326 */

#ifndef kcg_comp_array__80382
extern kcg_bool kcg_comp_array__80382(
  array__80382 *kcg_c1,
  array__80382 *kcg_c2);
#endif /* kcg_comp_array__80382 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__80396
extern kcg_bool kcg_comp_array__80396(
  array__80396 *kcg_c1,
  array__80396 *kcg_c2);
#endif /* kcg_comp_array__80396 */

#ifndef kcg_comp_array__80415
extern kcg_bool kcg_comp_array__80415(
  array__80415 *kcg_c1,
  array__80415 *kcg_c2);
#endif /* kcg_comp_array__80415 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__80553
extern kcg_bool kcg_comp_array__80553(
  array__80553 *kcg_c1,
  array__80553 *kcg_c2);
#endif /* kcg_comp_array__80553 */

#ifndef kcg_comp_array__80577
extern kcg_bool kcg_comp_array__80577(
  array__80577 *kcg_c1,
  array__80577 *kcg_c2);
#endif /* kcg_comp_array__80577 */

#ifndef kcg_comp_array__80603
extern kcg_bool kcg_comp_array__80603(
  array__80603 *kcg_c1,
  array__80603 *kcg_c2);
#endif /* kcg_comp_array__80603 */

#ifndef kcg_comp_array__80660
extern kcg_bool kcg_comp_array__80660(
  array__80660 *kcg_c1,
  array__80660 *kcg_c2);
#endif /* kcg_comp_array__80660 */

#ifndef kcg_comp_array__80672
extern kcg_bool kcg_comp_array__80672(
  array__80672 *kcg_c1,
  array__80672 *kcg_c2);
#endif /* kcg_comp_array__80672 */

#ifndef kcg_comp_array__80682
extern kcg_bool kcg_comp_array__80682(
  array__80682 *kcg_c1,
  array__80682 *kcg_c2);
#endif /* kcg_comp_array__80682 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__80726
extern kcg_bool kcg_comp_array__80726(
  array__80726 *kcg_c1,
  array__80726 *kcg_c2);
#endif /* kcg_comp_array__80726 */

#ifndef kcg_comp_array__80737
extern kcg_bool kcg_comp_array__80737(
  array__80737 *kcg_c1,
  array__80737 *kcg_c2);
#endif /* kcg_comp_array__80737 */

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

#ifndef kcg_comp_array__80802
extern kcg_bool kcg_comp_array__80802(
  array__80802 *kcg_c1,
  array__80802 *kcg_c2);
#endif /* kcg_comp_array__80802 */

#ifndef kcg_comp_array__80814
extern kcg_bool kcg_comp_array__80814(
  array__80814 *kcg_c1,
  array__80814 *kcg_c2);
#endif /* kcg_comp_array__80814 */

#ifndef kcg_comp_array__80832
extern kcg_bool kcg_comp_array__80832(
  array__80832 *kcg_c1,
  array__80832 *kcg_c2);
#endif /* kcg_comp_array__80832 */

#ifndef kcg_comp_array__80843
extern kcg_bool kcg_comp_array__80843(
  array__80843 *kcg_c1,
  array__80843 *kcg_c2);
#endif /* kcg_comp_array__80843 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__80873
extern kcg_bool kcg_comp_array__80873(
  array__80873 *kcg_c1,
  array__80873 *kcg_c2);
#endif /* kcg_comp_array__80873 */

#ifndef kcg_comp_array__80882
extern kcg_bool kcg_comp_array__80882(
  array__80882 *kcg_c1,
  array__80882 *kcg_c2);
#endif /* kcg_comp_array__80882 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array__80908
extern kcg_bool kcg_comp_array__80908(
  array__80908 *kcg_c1,
  array__80908 *kcg_c2);
#endif /* kcg_comp_array__80908 */

#ifndef kcg_comp_array__80918
extern kcg_bool kcg_comp_array__80918(
  array__80918 *kcg_c1,
  array__80918 *kcg_c2);
#endif /* kcg_comp_array__80918 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array__81004
extern kcg_bool kcg_comp_array__81004(
  array__81004 *kcg_c1,
  array__81004 *kcg_c2);
#endif /* kcg_comp_array__81004 */

#ifndef kcg_comp_array__81007
extern kcg_bool kcg_comp_array__81007(
  array__81007 *kcg_c1,
  array__81007 *kcg_c2);
#endif /* kcg_comp_array__81007 */

#ifndef kcg_comp_array__81010
extern kcg_bool kcg_comp_array__81010(
  array__81010 *kcg_c1,
  array__81010 *kcg_c2);
#endif /* kcg_comp_array__81010 */

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

#ifndef kcg_comp_array__81066
extern kcg_bool kcg_comp_array__81066(
  array__81066 *kcg_c1,
  array__81066 *kcg_c2);
#endif /* kcg_comp_array__81066 */

#ifndef kcg_comp_array__81092
extern kcg_bool kcg_comp_array__81092(
  array__81092 *kcg_c1,
  array__81092 *kcg_c2);
#endif /* kcg_comp_array__81092 */

#ifndef kcg_comp_array__81095
extern kcg_bool kcg_comp_array__81095(
  array__81095 *kcg_c1,
  array__81095 *kcg_c2);
#endif /* kcg_comp_array__81095 */

#ifndef kcg_comp_array__81104
extern kcg_bool kcg_comp_array__81104(
  array__81104 *kcg_c1,
  array__81104 *kcg_c2);
#endif /* kcg_comp_array__81104 */

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

#ifndef kcg_comp_array__81141
extern kcg_bool kcg_comp_array__81141(
  array__81141 *kcg_c1,
  array__81141 *kcg_c2);
#endif /* kcg_comp_array__81141 */

#ifndef kcg_comp_array__81144
extern kcg_bool kcg_comp_array__81144(
  array__81144 *kcg_c1,
  array__81144 *kcg_c2);
#endif /* kcg_comp_array__81144 */

#ifndef kcg_comp_array__81219
extern kcg_bool kcg_comp_array__81219(
  array__81219 *kcg_c1,
  array__81219 *kcg_c2);
#endif /* kcg_comp_array__81219 */

#ifndef kcg_comp_array__81258
extern kcg_bool kcg_comp_array__81258(
  array__81258 *kcg_c1,
  array__81258 *kcg_c2);
#endif /* kcg_comp_array__81258 */

#ifndef kcg_comp_array__81381
extern kcg_bool kcg_comp_array__81381(
  array__81381 *kcg_c1,
  array__81381 *kcg_c2);
#endif /* kcg_comp_array__81381 */

#ifndef kcg_comp_array__81549
extern kcg_bool kcg_comp_array__81549(
  array__81549 *kcg_c1,
  array__81549 *kcg_c2);
#endif /* kcg_comp_array__81549 */

#ifndef kcg_comp_array__81566
extern kcg_bool kcg_comp_array__81566(
  array__81566 *kcg_c1,
  array__81566 *kcg_c2);
#endif /* kcg_comp_array__81566 */

#ifndef kcg_comp_array__81588
extern kcg_bool kcg_comp_array__81588(
  array__81588 *kcg_c1,
  array__81588 *kcg_c2);
#endif /* kcg_comp_array__81588 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array__81683
extern kcg_bool kcg_comp_array__81683(
  array__81683 *kcg_c1,
  array__81683 *kcg_c2);
#endif /* kcg_comp_array__81683 */

#ifndef kcg_comp_array__81686
extern kcg_bool kcg_comp_array__81686(
  array__81686 *kcg_c1,
  array__81686 *kcg_c2);
#endif /* kcg_comp_array__81686 */

#ifndef kcg_comp_array__81689
extern kcg_bool kcg_comp_array__81689(
  array__81689 *kcg_c1,
  array__81689 *kcg_c2);
#endif /* kcg_comp_array__81689 */

#ifndef kcg_comp_array__81692
extern kcg_bool kcg_comp_array__81692(
  array__81692 *kcg_c1,
  array__81692 *kcg_c2);
#endif /* kcg_comp_array__81692 */

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

#ifndef kcg_comp_array__81717
extern kcg_bool kcg_comp_array__81717(
  array__81717 *kcg_c1,
  array__81717 *kcg_c2);
#endif /* kcg_comp_array__81717 */

#ifndef kcg_comp_array__81798
extern kcg_bool kcg_comp_array__81798(
  array__81798 *kcg_c1,
  array__81798 *kcg_c2);
#endif /* kcg_comp_array__81798 */

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

#ifndef kcg_comp_array__82019
extern kcg_bool kcg_comp_array__82019(
  array__82019 *kcg_c1,
  array__82019 *kcg_c2);
#endif /* kcg_comp_array__82019 */

#ifndef kcg_comp_array__82030
extern kcg_bool kcg_comp_array__82030(
  array__82030 *kcg_c1,
  array__82030 *kcg_c2);
#endif /* kcg_comp_array__82030 */

#ifndef kcg_comp_array__82074
extern kcg_bool kcg_comp_array__82074(
  array__82074 *kcg_c1,
  array__82074 *kcg_c2);
#endif /* kcg_comp_array__82074 */

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

#ifndef kcg_comp_array__82327
extern kcg_bool kcg_comp_array__82327(
  array__82327 *kcg_c1,
  array__82327 *kcg_c2);
#endif /* kcg_comp_array__82327 */

#ifndef kcg_comp_array__82335
extern kcg_bool kcg_comp_array__82335(
  array__82335 *kcg_c1,
  array__82335 *kcg_c2);
#endif /* kcg_comp_array__82335 */

#ifndef kcg_comp_array__82343
extern kcg_bool kcg_comp_array__82343(
  array__82343 *kcg_c1,
  array__82343 *kcg_c2);
#endif /* kcg_comp_array__82343 */

#ifndef kcg_comp_array_bool_20
extern kcg_bool kcg_comp_array_bool_20(
  array_bool_20 *kcg_c1,
  array_bool_20 *kcg_c2);
#endif /* kcg_comp_array_bool_20 */

#ifndef kcg_comp_array__82690
extern kcg_bool kcg_comp_array__82690(
  array__82690 *kcg_c1,
  array__82690 *kcg_c2);
#endif /* kcg_comp_array__82690 */

#ifndef kcg_comp_array__82755
extern kcg_bool kcg_comp_array__82755(
  array__82755 *kcg_c1,
  array__82755 *kcg_c2);
#endif /* kcg_comp_array__82755 */

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

#ifndef kcg_comp_array__82772
extern kcg_bool kcg_comp_array__82772(
  array__82772 *kcg_c1,
  array__82772 *kcg_c2);
#endif /* kcg_comp_array__82772 */

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

#ifndef kcg_comp_array__82781
extern kcg_bool kcg_comp_array__82781(
  array__82781 *kcg_c1,
  array__82781 *kcg_c2);
#endif /* kcg_comp_array__82781 */

#ifndef kcg_comp_array__82784
extern kcg_bool kcg_comp_array__82784(
  array__82784 *kcg_c1,
  array__82784 *kcg_c2);
#endif /* kcg_comp_array__82784 */

#ifndef kcg_comp_array__82787
extern kcg_bool kcg_comp_array__82787(
  array__82787 *kcg_c1,
  array__82787 *kcg_c2);
#endif /* kcg_comp_array__82787 */

#ifndef kcg_comp_array__82790
extern kcg_bool kcg_comp_array__82790(
  array__82790 *kcg_c1,
  array__82790 *kcg_c2);
#endif /* kcg_comp_array__82790 */

#ifndef kcg_comp_array__82793
extern kcg_bool kcg_comp_array__82793(
  array__82793 *kcg_c1,
  array__82793 *kcg_c2);
#endif /* kcg_comp_array__82793 */

#ifndef kcg_comp_array__82796
extern kcg_bool kcg_comp_array__82796(
  array__82796 *kcg_c1,
  array__82796 *kcg_c2);
#endif /* kcg_comp_array__82796 */

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

#ifndef kcg_comp_array__85687
extern kcg_bool kcg_comp_array__85687(
  array__85687 *kcg_c1,
  array__85687 *kcg_c2);
#endif /* kcg_comp_array__85687 */

#ifndef kcg_comp_array__86192
extern kcg_bool kcg_comp_array__86192(
  array__86192 *kcg_c1,
  array__86192 *kcg_c2);
#endif /* kcg_comp_array__86192 */

#ifndef kcg_comp_array__86199
extern kcg_bool kcg_comp_array__86199(
  array__86199 *kcg_c1,
  array__86199 *kcg_c2);
#endif /* kcg_comp_array__86199 */

#ifndef kcg_comp_array__86240
extern kcg_bool kcg_comp_array__86240(
  array__86240 *kcg_c1,
  array__86240 *kcg_c2);
#endif /* kcg_comp_array__86240 */

#ifndef kcg_comp_array__86322
extern kcg_bool kcg_comp_array__86322(
  array__86322 *kcg_c1,
  array__86322 *kcg_c2);
#endif /* kcg_comp_array__86322 */

#define kcg_comp_trainData_T_TIU_Types_Pkg kcg_comp_struct__81422

#define kcg_copy_trainData_T_TIU_Types_Pkg kcg_copy_struct__81422

#define kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg kcg_comp_struct__81515

#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg kcg_copy_struct__81515

#define kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg kcg_comp_struct__82619

#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg kcg_copy_struct__82619

#define kcg_comp_M_current_T_TIU_Types_Pkg kcg_comp_struct__82625

#define kcg_copy_M_current_T_TIU_Types_Pkg kcg_copy_struct__82625

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct__81464

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct__81464

#define kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_comp_struct__82630

#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_copy_struct__82630

#define kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg kcg_comp_struct__82636

#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg kcg_copy_struct__82636

#define kcg_comp_M_voltage_T_TIU_Types_Pkg kcg_comp_struct__82641

#define kcg_copy_M_voltage_T_TIU_Types_Pkg kcg_copy_struct__82641

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct__81464

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct__81464

#define kcg_comp_MyArray_SDM_Commands_Pkg kcg_comp_array_bool_14

#define kcg_copy_MyArray_SDM_Commands_Pkg kcg_copy_array_bool_14

#define kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg kcg_comp_struct__82190

#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg kcg_copy_struct__82190

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct__81464

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct__81464

#define kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg kcg_comp_struct__82210

#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg kcg_copy_struct__82210

#define kcg_comp_Change_traction_system_T_TIU_Types_Pkg kcg_comp_struct__82646

#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg kcg_copy_struct__82646

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__81267

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__81267

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__81292

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__81292

#define kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg kcg_comp_struct__82652

#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg kcg_copy_struct__82652

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__81337

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__81337

#define kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg kcg_comp_struct__80648

#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg kcg_copy_struct__80648

#define kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg kcg_comp_array__80660

#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg kcg_copy_array__80660

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__80663

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__80663

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__80672

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__80672

#define kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__80699

#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__80699

#define kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__80726

#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__80726

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct__80774

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct__80774

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct__80782

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct__80782

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__80790

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__80790

#define kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg kcg_comp_struct__82660

#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg kcg_copy_struct__82660

#define kcg_comp_IterPacket58_T_Packet_Types_Pkg kcg_comp_struct__81561

#define kcg_copy_IterPacket58_T_Packet_Types_Pkg kcg_copy_struct__81561

#define kcg_comp_IterPacket58List_T_Packet_Types_Pkg kcg_comp_array__81566

#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg kcg_copy_array__81566

#define kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_comp_struct__81569

#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_copy_struct__81569

#define kcg_comp_SSP_T_Packet_Types_Pkg kcg_comp_struct__80835

#define kcg_copy_SSP_T_Packet_Types_Pkg kcg_copy_struct__80835

#define kcg_comp_SSPArray_T_Packet_Types_Pkg kcg_comp_array__80843

#define kcg_copy_SSPArray_T_Packet_Types_Pkg kcg_copy_array__80843

#define kcg_comp_Brake_command_T_TIU_Types_Pkg kcg_comp_struct__82144

#define kcg_copy_Brake_command_T_TIU_Types_Pkg kcg_copy_struct__82144

#define kcg_comp_Diff_T_Packet_Types_Pkg kcg_comp_struct__80824

#define kcg_copy_Diff_T_Packet_Types_Pkg kcg_copy_struct__80824

#define kcg_comp_DiffArray_T_Packet_Types_Pkg kcg_comp_array__80832

#define kcg_copy_DiffArray_T_Packet_Types_Pkg kcg_copy_array__80832

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__80418

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__80418

#define kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_comp_struct__80846

#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_copy_struct__80846

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__80415

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__80415

#define kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__80866

#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__80866

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_comp_array__80873

#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_copy_array__80873

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__80404

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__80404

#define kcg_comp_Isolation_Status_T_TIU_Types_Pkg kcg_comp_struct__82667

#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg kcg_copy_struct__82667

#define kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__80898

#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__80898

#define kcg_comp_P012_OBU_T_TM kcg_comp_struct__80930

#define kcg_copy_P012_OBU_T_TM kcg_copy_struct__80930

#define kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_comp_struct__82672

#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_copy_struct__82672

#define kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_comp_array__80908

#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_copy_array__80908

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_nvkrint_T_Packet_Types_Pkg kcg_comp_struct__80291

#define kcg_copy_nvkrint_T_Packet_Types_Pkg kcg_copy_struct__80291

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct__80729

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct__80729

#define kcg_comp_nvkrintArray_T_Packet_Types_Pkg kcg_comp_array__80297

#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg kcg_copy_array__80297

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_TIU_Input_msg_API_TIU_Pkg kcg_comp_struct__81522

#define kcg_copy_TIU_Input_msg_API_TIU_Pkg kcg_copy_struct__81522

#define kcg_comp_nvkvint_T_Packet_Types_Pkg kcg_comp_struct__80300

#define kcg_copy_nvkvint_T_Packet_Types_Pkg kcg_copy_struct__80300

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct__80774

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct__80774

#define kcg_comp_TIU_Output_msg_API_TIU_Pkg kcg_comp_struct__82682

#define kcg_copy_TIU_Output_msg_API_TIU_Pkg kcg_copy_struct__82682

#define kcg_comp_nvkvintArray_T_Packet_Types_Pkg kcg_comp_array__80307

#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg kcg_copy_array__80307

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct__80782

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct__80782

#define kcg_comp_nvkvintset_T_Packet_Types_Pkg kcg_comp_struct__80310

#define kcg_copy_nvkvintset_T_Packet_Types_Pkg kcg_copy_struct__80310

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct__80959

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct__80959

#define kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg kcg_comp_array__80318

#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg kcg_copy_array__80318

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__80211

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__80211

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct__80321

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct__80321

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__80217

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__80217

#define kcg_comp_nidCArray_T_Packet_Types_Pkg kcg_comp_array__80326

#define kcg_copy_nidCArray_T_Packet_Types_Pkg kcg_copy_array__80326

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__80220

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__80220

#define kcg_comp_P3_NationalValues_T_Packet_Types_Pkg kcg_comp_struct__80329

#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg kcg_copy_struct__80329

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__80227

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__80227

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__80230

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__80230

#define kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_comp_struct__82237

#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_copy_struct__82237

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__80242

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__80242

#define kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg kcg_comp_struct__82243

#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg kcg_copy_struct__82243

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__80245

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__80245

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__80252

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__80252

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__80321

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__80321

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__81010

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__81010

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__81147

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__81147

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_RadioMessage_T_Radio_Types_Pkg kcg_comp_struct__81701

#define kcg_copy_RadioMessage_T_Radio_Types_Pkg kcg_copy_struct__81701

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__81202

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__81202

#define kcg_comp_Array08_TM kcg_comp_array_int_8

#define kcg_copy_Array08_TM kcg_copy_array_int_8

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__81326

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__81326

#define kcg_comp_P058_OBU_T_TM kcg_comp_struct__81591

#define kcg_copy_P058_OBU_T_TM kcg_copy_struct__81591

#define kcg_comp_P058_OBU_sectionlist_enum_T_TM kcg_comp_array__81588

#define kcg_copy_P058_OBU_sectionlist_enum_T_TM kcg_copy_array__81588

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_enum_T_TM kcg_comp_struct__81582

#define kcg_copy_P058_section_enum_T_TM kcg_copy_struct__81582

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__80433

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__80433

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__80685

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__80685

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__80682

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__80682

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__80675

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__80675

#define kcg_comp_MSG_Errors_T_Common_Types_Pkg kcg_comp_struct__81671

#define kcg_copy_MSG_Errors_T_Common_Types_Pkg kcg_copy_struct__81671

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_filterRelatedEvents_T_Common_Types_Pkg kcg_comp_struct__81660

#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg kcg_copy_struct__81660

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__80517

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__80517

#define kcg_comp_P046_OBU_T_TM kcg_comp_struct__80885

#define kcg_copy_P046_OBU_T_TM kcg_copy_struct__80885

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__80451

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__80451

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__80882

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__80882

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg kcg_comp_struct__81727

#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg kcg_copy_struct__81727

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__80876

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__80876

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__80388

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__80388

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__80740

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__80740

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__80396

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__80396

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__80399

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__80399

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__80737

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__80737

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__81316

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__81316

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__80463

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__80463

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__80729

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__80729

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__80921

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__80921

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__80918

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__80918

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__80911

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__80911

#define kcg_comp_radioManagementMessage_T_Common_Types_Pkg kcg_comp_struct__82253

#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg kcg_copy_struct__82253

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__81345

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__81345

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__80989

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__80989

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__81004

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__81004

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__81354

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__81354

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__81055

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__81055

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__81060

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__81060

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__81046

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__81046

#define kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__81066

#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__81066

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__81069

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__81069

#define kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_array__80577

#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_array__80577

#define kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__80571

#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__80571

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__81144

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__81144

#define kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__80590

#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__80590

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__81007

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__81007

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__81363

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__81363

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__80997

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__80997

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__81129

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__81129

#define kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage kcg_comp_array_bool_256_46

#define kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage kcg_copy_array_bool_256_46

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__81222

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__81222

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__81238

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__81238

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__81243

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__81243

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__81248

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__81248

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__81253

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__81253

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__81258

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__81258

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__81261

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__81261

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__81287

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__81287

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__81311

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__81311

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__81214

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__81214

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__81219

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__81219

#define kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__80556

#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__80556

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__80562

#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__80562

#define kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__81764

#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__81764

#define kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__81827

#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__81827

#define kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__81440

#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__81440

#define kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__81458

#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__81458

#define kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_comp_array_char_9

#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_copy_array_char_9

#define kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__81836

#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__81836

#define kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_comp_struct__81867

#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_copy_struct__81867

#define kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_comp_struct__80598

#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_copy_struct__80598

#define kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_comp_struct__82471

#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_copy_struct__82471

#define kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg kcg_comp_struct__81538

#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg kcg_copy_struct__81538

#define kcg_comp_BG_Message_T_BG_Types_Pkg kcg_comp_struct__81720

#define kcg_copy_BG_Message_T_BG_Types_Pkg kcg_copy_struct__81720

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__81613

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__81613

#define kcg_comp_Telegram_T_BG_Types_Pkg kcg_comp_struct__81710

#define kcg_copy_Telegram_T_BG_Types_Pkg kcg_copy_struct__81710

#define kcg_comp_TelegramArray_T_BG_Types_Pkg kcg_comp_array__81717

#define kcg_copy_TelegramArray_T_BG_Types_Pkg kcg_copy_array__81717

#define kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg kcg_comp_struct__81626

#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg kcg_copy_struct__81626

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__80382

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__80382

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__80499

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__80499

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__80527

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__80527

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__80368

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__80368

#define kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__80603

#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__80603

#define kcg_comp_positionErrors_T_TrainPosition_Types_Pck kcg_comp_struct__80606

#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck kcg_copy_struct__80606

#define kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck kcg_comp_struct__80618

#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck kcg_copy_struct__80618

#define kcg_comp_positionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__80553

#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__80553

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__80580

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__80580

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__80533

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__80533

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__80542

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__80542

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__80631

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__80631

#define kcg_comp_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg kcg_comp_struct__82505

#define kcg_copy_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg kcg_copy_struct__82505

#define kcg_comp_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg kcg_comp_struct__82491

#define kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg kcg_copy_struct__82491

#define kcg_comp_obuEventsAndPhases_T_MoRC_Pck kcg_comp_struct__82529

#define kcg_copy_obuEventsAndPhases_T_MoRC_Pck kcg_copy_struct__82529

#define kcg_comp_radioNetWorkIDs_T_MoRC_Pck kcg_comp_struct__82554

#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck kcg_copy_struct__82554

#define kcg_comp_genMessage_T_MoRC_Pck kcg_comp_struct__80517

#define kcg_copy_genMessage_T_MoRC_Pck kcg_copy_struct__80517

#define kcg_comp_safeRadioConnectionStatusValid_Type_MoRC_Pck kcg_comp_struct__82511

#define kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck kcg_copy_struct__82511

#define kcg_comp_mobileHWStatus_Type_MoRC_Pck kcg_comp_struct__82516

#define kcg_copy_mobileHWStatus_Type_MoRC_Pck kcg_copy_struct__82516

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__81095

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__81095

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__81092

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__81092

#define kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP kcg_comp_struct__81113

#define kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP kcg_copy_struct__81113

#define kcg_comp_SSP_relevant_target_t_TA_MRSP kcg_comp_struct__81124

#define kcg_copy_SSP_relevant_target_t_TA_MRSP kcg_copy_struct__81124

#define kcg_comp_mobileSWCmd_Type_MoRC_Pck kcg_comp_struct__82523

#define kcg_copy_mobileSWCmd_Type_MoRC_Pck kcg_copy_struct__82523

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__81087

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__81087

#define kcg_comp_mobileHWCmd_Type_MoRC_Pck kcg_comp_struct__82217

#define kcg_copy_mobileHWCmd_Type_MoRC_Pck kcg_copy_struct__82217

#define kcg_comp_SSP_valid_section_t_TA_MRSP kcg_comp_struct__81118

#define kcg_copy_SSP_valid_section_t_TA_MRSP kcg_copy_struct__81118

#define kcg_comp_SSP_t_list_t_TA_MRSP kcg_comp_array__81104

#define kcg_copy_SSP_t_list_t_TA_MRSP kcg_copy_array__81104

#define kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP kcg_comp_struct__81098

#define kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP kcg_copy_struct__81098

#define kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP kcg_comp_array__81141

#define kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP kcg_copy_array__81141

#define kcg_comp_SSP_t_matrix_t_TA_MRSP kcg_comp_array_int_33_11

#define kcg_copy_SSP_t_matrix_t_TA_MRSP kcg_copy_array_int_33_11

#define kcg_comp_SSP_t_cat_t_TA_MRSP kcg_comp_array_int_33

#define kcg_copy_SSP_t_cat_t_TA_MRSP kcg_copy_array_int_33

#define kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP kcg_comp_struct__81136

#define kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP kcg_copy_struct__81136

#define kcg_comp_mobileSWStatus_Type_MoRC_Pck kcg_comp_struct__82262

#define kcg_copy_mobileSWStatus_Type_MoRC_Pck kcg_copy_struct__82262

#define kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg kcg_comp_struct__82224

#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg kcg_copy_struct__82224

#define kcg_comp_API_EuroRadioOutput_T_API_RadioCommunication_Pkg kcg_comp_struct__82230

#define kcg_copy_API_EuroRadioOutput_T_API_RadioCommunication_Pkg kcg_copy_struct__82230

#define kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82276

#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82276

#define kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82288

#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82288

#define kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82294

#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82294

#define kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82300

#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82300

#define kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82306

#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82306

#define kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82312

#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82312

#define kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82351

#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82351

#define kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82359

#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82359

#define kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82394

#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82394

#define kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_comp_struct__81389

#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_copy_struct__81389

#define kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82270

#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82270

#define kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82439

#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82439

#define kcg_comp_trainData_Events_T_trainData_Types_pkg kcg_comp_struct__81396

#define kcg_copy_trainData_Events_T_trainData_Types_pkg kcg_copy_struct__81396

#define kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__82445

#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__82445

#define kcg_comp_trainData_Trigger_T_trainData_Types_pkg kcg_comp_struct__81405

#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg kcg_copy_struct__81405

#define kcg_comp_trainDataStatus_T_trainData_Types_pkg kcg_comp_struct__81413

#define kcg_copy_trainDataStatus_T_trainData_Types_pkg kcg_copy_struct__81413

#define kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__81452

#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__81452

#define kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__81814

#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__81814

#define kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__81842

#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__81842

#define kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__81847

#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__81847

#define kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__81821

#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__81821

#define kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__81752

#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__81752

#define kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__81857

#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__81857

#define kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg kcg_comp_struct__81777

#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg kcg_copy_struct__81777

#define kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg kcg_comp_struct__81801

#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg kcg_copy_struct__81801

#define kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg kcg_comp_struct__81807

#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg kcg_copy_struct__81807

#define kcg_comp_DMI_ModesToDMI_T_DMI_Types_Pkg kcg_comp_struct__82560

#define kcg_copy_DMI_ModesToDMI_T_DMI_Types_Pkg kcg_copy_struct__82560

#define kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_comp_struct__81787

#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_copy_struct__81787

#define kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_comp_array__81798

#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_copy_array__81798

#define kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg kcg_comp_struct__81605

#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg kcg_copy_struct__81605

#define kcg_comp_API_TelegramHeader_T_API_Msg_Pkg kcg_comp_struct__81631

#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg kcg_copy_struct__81631

#define kcg_comp_API_TrackSideInput_T_API_Msg_Pkg kcg_comp_struct__81640

#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg kcg_copy_struct__81640

#define kcg_comp_DMI_level_array_T_DMI_Types_Pkg kcg_comp_array__81381

#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg kcg_copy_array__81381

#define kcg_comp_DMI_LevelList_T_DMI_Types_Pkg kcg_comp_struct__81384

#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg kcg_copy_struct__81384

#define kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_comp_struct__82322

#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_copy_struct__82322

#define kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_comp_array__82327

#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_copy_array__82327

#define kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg kcg_comp_struct__82330

#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg kcg_copy_struct__82330

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct__80997

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct__80997

#define kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_comp_array__82335

#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_copy_array__82335

#define kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg kcg_comp_struct__82338

#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg kcg_copy_struct__82338

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct__81129

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct__81129

#define kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_comp_array__82343

#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_copy_array__82343

#define kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg kcg_comp_struct__82346

#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg kcg_copy_struct__82346

#define kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__81746

#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__81746

#define kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__81735

#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__81735

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__81332

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__81332

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct__82370

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct__82370

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct__82370

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct__82370

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct__82370

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct__82370

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct__82370

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct__82370

#define kcg_comp_DMI_train_length_T_DMI_Types_Pkg kcg_comp_struct__82377

#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg kcg_copy_struct__82377

#define kcg_comp_DMI_train_id_T_DMI_Types_Pkg kcg_comp_struct__82385

#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg kcg_copy_struct__82385

#define kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg kcg_comp_struct__82406

#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg kcg_copy_struct__82406

#define kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_comp_struct__82569

#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_copy_struct__82569

#define kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg kcg_comp_struct__82575

#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg kcg_copy_struct__82575

#define kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_comp_struct__82177

#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_copy_struct__82177

#define kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg kcg_comp_struct__81552

#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg kcg_copy_struct__81552

#define kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_comp_struct__81556

#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_copy_struct__81556

#define kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_comp_struct__81532

#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_copy_struct__81532

#define kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg kcg_comp_array__81549

#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg kcg_copy_array__81549

#define kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg kcg_comp_struct__81543

#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg kcg_copy_struct__81543

#define kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg kcg_comp_struct__81527

#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg kcg_copy_struct__81527

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_copy_array_real_3

#define kcg_comp_t_BrakeVt_t_SDMConversionModelPkg kcg_comp_array_real_2

#define kcg_copy_t_BrakeVt_t_SDMConversionModelPkg kcg_copy_array_real_2

#define kcg_comp_t_Brake_t_SDMConversionModelPkg kcg_comp_struct__81935

#define kcg_copy_t_Brake_t_SDMConversionModelPkg kcg_copy_struct__81935

#define kcg_comp_DMI_level_T_DMI_Types_Pkg kcg_comp_struct__81376

#define kcg_copy_DMI_level_T_DMI_Types_Pkg kcg_copy_struct__81376

#define kcg_comp_DMI_TEXT_DMI_Types_Pkg kcg_comp_array_char_255

#define kcg_copy_DMI_TEXT_DMI_Types_Pkg kcg_copy_array_char_255

#define kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg kcg_comp_struct__81883

#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg kcg_copy_struct__81883

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_real_3

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__80470

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__80470

#define kcg_comp_TargetIteratorAkku_TargetLimits_Pkg kcg_comp_struct__82003

#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg kcg_copy_struct__82003

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__80477

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__80477

#define kcg_comp_bec_t_TargetLimits_Pkg kcg_comp_struct__81940

#define kcg_copy_bec_t_TargetLimits_Pkg kcg_copy_struct__81940

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__80483

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__80483

#define kcg_comp_T_trac_t_TargetLimits_Pkg kcg_comp_struct__81945

#define kcg_copy_T_trac_t_TargetLimits_Pkg kcg_copy_struct__81945

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__80493

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__80493

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__80211

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__80211

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__80217

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__80217

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__80220

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__80220

#define kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg kcg_comp_struct__82116

#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg kcg_copy_struct__82116

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__80227

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__80227

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__80230

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__80230

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__80242

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__80242

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__80245

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__80245

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__80252

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__80252

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__80255

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__80255

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__80286

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__80286

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__80321

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__80321

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__81010

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__81010

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__81013

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__81013

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__80814

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__80814

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__80817

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__80817

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_comp_array__82019

#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_copy_array__82019

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__80796

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__80796

#define kcg_comp_CurveCollection_T_CalcBrakingCurves_types kcg_comp_struct__82022

#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types kcg_copy_struct__82022

#define kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg kcg_comp_struct__82581

#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg kcg_copy_struct__82581

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__80802

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__80802

#define kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_comp_array_bool_25

#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_copy_array_bool_25

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__80805

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__80805

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_comp_array_real_25

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_copy_array_real_25

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__80857

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__80857

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_comp_array_real_25

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_copy_array_real_25

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_comp_array_real_25

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_copy_array_real_25

#define kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types kcg_comp_struct__81996

#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types kcg_copy_struct__81996

#define kcg_comp_ParabolaArc_T_CalcBrakingCurves_types kcg_comp_struct__81984

#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types kcg_copy_struct__81984

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_real_15

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_real_15

#define kcg_comp_ASafe_Data_T_CalcBrakingCurves_types kcg_comp_array_real_15_10

#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types kcg_copy_array_real_15_10

#define kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_10

#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_10

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_15

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_15

#define kcg_comp_ASafe_T_CalcBrakingCurves_types kcg_comp_struct__82130

#define kcg_copy_ASafe_T_CalcBrakingCurves_types kcg_copy_struct__82130

#define kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_comp_array__82755

#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_copy_array__82755

#define kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_comp_struct__80964

#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_copy_struct__80964

#define kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_comp_struct__80974

#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_copy_struct__80974

#define kcg_comp_T_TransitionConditions_Level_And_Mode_Types_Pkg kcg_comp_array_bool_20

#define kcg_copy_T_TransitionConditions_Level_And_Mode_Types_Pkg kcg_copy_array_bool_20

#define kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_comp_array__82690

#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_copy_array__82690

#define kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_comp_struct__82586

#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_copy_struct__82586

#define kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__82693

#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__82693

#define kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_comp_struct__82594

#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_copy_struct__82594

#define kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_comp_struct__82603

#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_copy_struct__82603

#define kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__82710

#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__82710

#define kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_comp_struct__82610

#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_copy_struct__82610

#define kcg_comp_T_Data_From_Track_Level_And_Mode_Types_Pkg kcg_comp_struct__82738

#define kcg_copy_T_Data_From_Track_Level_And_Mode_Types_Pkg kcg_copy_struct__82738

#define kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_comp_struct__82722

#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_copy_struct__82722

#define kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_comp_struct__82730

#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_copy_struct__82730

#define kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_comp_struct__82136

#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_copy_struct__82136

#define kcg_comp_ModeDecisionTableType_DataDictionary_Pkg kcg_comp_array__81686

#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg kcg_copy_array__81686

#define kcg_comp_LevelDecisionTableType_DataDictionary_Pkg kcg_comp_array__81692

#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg kcg_copy_array__81692

#define kcg_comp_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg kcg_comp_struct__81649

#define kcg_copy_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg kcg_copy_struct__81649

#define kcg_comp_MRSP_internal_T_TargetManagement_types kcg_comp_array__82074

#define kcg_copy_MRSP_internal_T_TargetManagement_types kcg_copy_array__82074

#define kcg_comp_MA_section_real_T_TargetManagement_types kcg_comp_struct__82055

#define kcg_copy_MA_section_real_T_TargetManagement_types kcg_copy_struct__82055

#define kcg_comp_EOA_real_T_TargetManagement_types kcg_comp_struct__82050

#define kcg_copy_EOA_real_T_TargetManagement_types kcg_copy_struct__82050

#define kcg_comp_MRSP_internal_section_T_TargetManagement_types kcg_comp_struct__82068

#define kcg_copy_MRSP_internal_section_T_TargetManagement_types kcg_copy_struct__82068

#define kcg_comp_Target_T_TargetManagement_types kcg_comp_struct__81895

#define kcg_copy_Target_T_TargetManagement_types kcg_copy_struct__81895

#define kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_comp_struct__81758

#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_copy_struct__81758

#define kcg_comp_Target_list_MRSP_real_T_TargetManagement_types kcg_comp_array__82030

#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types kcg_copy_array__82030

#define kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_comp_struct__81770

#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_copy_struct__81770

#define kcg_comp_TargetCollection_T_TargetManagement_types kcg_comp_struct__82033

#define kcg_copy_TargetCollection_T_TargetManagement_types kcg_copy_struct__82033

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__81370

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__81370

#define kcg_comp_Target_real_T_TargetManagement_types kcg_comp_struct__82013

#define kcg_copy_Target_real_T_TargetManagement_types kcg_copy_struct__82013

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct__81464

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct__81464

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__81464

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__81464

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__81464

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__81464

#define kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_comp_struct__81469

#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_copy_struct__81469

#define kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_comp_struct__81475

#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_copy_struct__81475

#define kcg_comp_trainData_internal_t_SDM_Types_Pkg kcg_comp_struct__81954

#define kcg_copy_trainData_internal_t_SDM_Types_Pkg kcg_copy_struct__81954

#define kcg_comp_SDM_Commands_T_SDM_Types_Pkg kcg_comp_struct__81902

#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg kcg_copy_struct__81902

#define kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg kcg_comp_struct__81481

#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg kcg_copy_struct__81481

#define kcg_comp_OdometrySpeeds_real_T_SDM_Types_Pkg kcg_comp_struct__81961

#define kcg_copy_OdometrySpeeds_real_T_SDM_Types_Pkg kcg_copy_struct__81961

#define kcg_comp_OdometryLocations_real_T_SDM_Types_Pkg kcg_comp_struct__81968

#define kcg_copy_OdometryLocations_real_T_SDM_Types_Pkg kcg_copy_struct__81968

#define kcg_comp_Odometry_real_T_SDM_Types_Pkg kcg_comp_struct__81974

#define kcg_copy_Odometry_real_T_SDM_Types_Pkg kcg_copy_struct__81974

#define kcg_comp_SDM_Commands_real_T_SDM_Types_Pkg kcg_comp_struct__82150

#define kcg_copy_SDM_Commands_real_T_SDM_Types_Pkg kcg_copy_struct__82150

#define kcg_comp_Brake_status_T_TIU_Types_Pkg kcg_comp_struct__81486

#define kcg_copy_Brake_status_T_TIU_Types_Pkg kcg_copy_struct__81486

#define kcg_comp_TrainLocations_real_T_SDM_Types_Pkg kcg_comp_struct__82040

#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg kcg_copy_struct__82040

#define kcg_comp_SDM_Locations_T_SDM_Types_Pkg kcg_comp_struct__82093

#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg kcg_copy_struct__82093

#define kcg_comp_Speeds_T_SDM_Types_Pkg kcg_comp_struct__82077

#define kcg_copy_Speeds_T_SDM_Types_Pkg kcg_copy_struct__82077

#define kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_comp_struct__81495

#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_copy_struct__81495

#define kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_comp_struct__81506

#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_copy_struct__81506

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

