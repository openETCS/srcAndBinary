/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
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

/* Level_And_Mode_Types_Pkg::T_Mode */
typedef enum kcg_tag_T_Mode_Level_And_Mode_Types_Pkg {
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
typedef enum kcg_tag_T_MA_Level_And_Mode_Types_Pkg {
  Profile_OS_Level_And_Mode_Types_Pkg,
  Profile_LS_Level_And_Mode_Types_Pkg,
  Profile_SH_Level_And_Mode_Types_Pkg,
  No_Profile_Level_And_Mode_Types_Pkg
} T_MA_Level_And_Mode_Types_Pkg;
/* TIU_Types_Pkg::M_Isolation_status_T */
typedef enum kcg_tag_M_Isolation_status_T_TIU_Types_Pkg {
  on_board_equipment_is_isolated_TIU_Types_Pkg,
  on_board_equipement_is_not_isolated_TIU_Types_Pkg,
  isolation_status_not_defined_TIU_Types_Pkg
} M_Isolation_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_inhibit_command_T */
typedef enum kcg_tag_M_brake_inhibit_command_T_TIU_Types_Pkg {
  brake_inhibit_not_defined_TIU_Types_Pkg,
  inhibit_brake_TIU_Types_Pkg,
  do_not_inhibit_brake_TIU_Types_Pkg
} M_brake_inhibit_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_eddy_current_brake_inhibition_T */
typedef enum kcg_tag_M_eddy_current_brake_inhibition_T_TIU_Types_Pkg {
  eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg,
  inhibit_for_service_brake_TIU_Types_Pkg,
  inhibit_for_emergency_brake_TIU_Types_Pkg,
  inhibit_for_both_service_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_service_brake_TIU_Types_Pkg,
  do_not_inhibit_for_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_both_service_emergency_brake_TIU_Types_Pkg
} M_eddy_current_brake_inhibition_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_pantograph_command_T */
typedef enum kcg_tag_M_pantograph_command_T_TIU_Types_Pkg {
  pantograph_command_not_defined_TIU_Types_Pkg,
  lower_pantograph_TIU_Types_Pkg,
  raise_pantograph_TIU_Types_Pkg
} M_pantograph_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_airtightness_command_T */
typedef enum kcg_tag_M_airtightness_command_T_TIU_Types_Pkg {
  airtightness_command_not_defined_TIU_Types_Pkg,
  tunnel_condition_active_TIU_Types_Pkg,
  tunnel_condition_not_active_TIU_Types_Pkg
} M_airtightness_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_mainpowerswitch_command_T */
typedef enum kcg_tag_M_mainpowerswitch_command_T_TIU_Types_Pkg {
  open_main_power_swicth_TIU_Types_Pkg,
  close_main_power_switch_TIU_Types_Pkg
} M_mainpowerswitch_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_cutoff_command_T */
typedef enum kcg_tag_M_traction_cutoff_command_T_TIU_Types_Pkg {
  traction_cutoff_command_not_defined_TIU_Types_Pkg,
  apply_traction_cutoff_TIU_Types_Pkg,
  release_traction_cutoff_TIU_Types_Pkg
} M_traction_cutoff_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_voltage_types_T */
typedef enum kcg_tag_M_voltage_types_T_TIU_Types_Pkg {
  line_not_fitted_with_any_traction_system_TIU_Types_Pkg,
  ac_25kV_50Hz_TIU_Types_Pkg,
  ac_15kV_16_7Hz_TIU_Types_Pkg,
  dc_3kV_TIU_Types_Pkg,
  dc_1_5kV_TIU_Types_Pkg,
  dc_600_750kV_TIU_Types_Pkg
} M_voltage_types_T_TIU_Types_Pkg;
/* MoRC_Pck::mobileSWAction_Type */
typedef enum kcg_tag_mobileSWAction_Type_MoRC_Pck {
  mswa_nop_MoRC_Pck,
  mswa_register_MoRC_Pck,
  mswa_connect_MoRC_Pck,
  mswa_establishRadioConnection_MoRC_Pck,
  mswa_terminateRadioConnection_MoRC_Pck,
  mswa_disconnect_MoRC_Pck,
  mswa_unregister_MoRC_Pck
} mobileSWAction_Type_MoRC_Pck;
/* MoRC_Pck::mobileHWConnectionStatus_Type */
typedef enum kcg_tag_mobileHWConnectionStatus_Type_MoRC_Pck {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_MoRC_Pck;
/* MoRC_Pck::safeRadioConnectionStatus_Type */
typedef enum kcg_tag_safeRadioConnectionStatus_Type_MoRC_Pck {
  srcs_NoConnection_MoRC_Pck,
  srcs_ConnectionLost_SetupFailed_MoRC_Pck,
  srcs_ConnectionUp_MoRC_Pck
} safeRadioConnectionStatus_Type_MoRC_Pck;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum kcg_tag_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
/* Q_TEXTCLASS */
typedef enum kcg_tag_Q_TEXTCLASS {
  Q_TEXTCLASS_Auxiliary_Information = 0,
  Q_TEXTCLASS_Important_Information = 1
} Q_TEXTCLASS;
/* Q_TEXTCONFIRM */
typedef enum kcg_tag_Q_TEXTCONFIRM {
  Q_TEXTCONFIRM_No_confirmation_required = 0,
  Q_TEXTCONFIRM_Confirmation_required = 1,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 3
} Q_TEXTCONFIRM;
/* DMI_Types_Pkg::DMI_Q_TEXT */
typedef enum kcg_tag_DMI_Q_TEXT_DMI_Types_Pkg {
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
typedef enum kcg_tag_M_TRACKCOND {
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
typedef enum kcg_tag_Icon_control_flag_T_DMI_Types_Pkg {
  show_icon_in_area_DMI_Types_Pkg,
  clear_area_DMI_Types_Pkg,
  show_icon_flashing_in_area_DMI_Types_Pkg,
  show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg
} Icon_control_flag_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Icon_group_T */
typedef enum kcg_tag_Icon_group_T_DMI_Types_Pkg {
  level_symbol_DMI_Types_Pkg,
  mode_symbols_DMI_Types_Pkg,
  status_symbols_DMI_Types_Pkg,
  order_an_announcements_symbols_DMI_Types_Pkg,
  planning_information_symbols_DMI_Types_Pkg,
  navigation_symbols_DMI_Types_Pkg,
  settings_symbols_DMI_Types_Pkg
} Icon_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Area_group_T */
typedef enum kcg_tag_Area_group_T_DMI_Types_Pkg {
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
typedef enum kcg_tag_DMI_List_Entry_Request_T_DMI_Types_Pkg {
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
typedef enum kcg_tag_mobileSWConnectionStatus_Type_MoRC_Pck {
  mswc_unregistered_MoRC_Pck,
  mswc_registering_MoRC_Pck,
  mswc_registered_MoRC_Pck,
  mswc_connecting_MoRC_Pck,
  mswc_connected_MoRC_Pck,
  mswc_establishingSession_MoRC_Pck,
  mswc_sessionEstablished_MoRC_Pck
} mobileSWConnectionStatus_Type_MoRC_Pck;
/* Q_RBC */
typedef enum kcg_tag_Q_RBC {
  Q_RBC_Terminate_communication_session = 0,
  Q_RBC_Establish_communication_session = 1
} Q_RBC;
/* Q_SLEEPSESSION */
typedef enum kcg_tag_Q_SLEEPSESSION {
  Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  Q_SLEEPSESSION_Execute_session_establishment_order = 1
} Q_SLEEPSESSION;
/* API_RadioCommunication_Pkg::cmdRadioUnit_T */
typedef enum kcg_tag_cmdRadioUnit_T_API_RadioCommunication_Pkg {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
/* MoRC_Pck::mobileHWAction_Type */
typedef enum kcg_tag_mobileHWAction_Type_MoRC_Pck {
  mhwa_nop_MoRC_Pck,
  mhwa_register_MoRC_Pck,
  mhwa_connect_MoRC_Pck,
  mhwa_disconnect_MoRC_Pck,
  mhwa_unregister_MoRC_Pck
} mobileHWAction_Type_MoRC_Pck;
/* DMI_Types_Pkg::M_SupervisionDisplay_T */
typedef enum kcg_tag_M_SupervisionDisplay_T_DMI_Types_Pkg {
  supDis_normal_DMI_Types_Pkg,
  supDis_indication_DMI_Types_Pkg,
  supDis_overspeed_DMI_Types_Pkg,
  supDis_warning_DMI_Types_Pkg,
  supDis_intervention_DMI_Types_Pkg
} M_SupervisionDisplay_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::M_SUPERVISION_STATUS */
typedef enum kcg_tag_M_SUPERVISION_STATUS_DMI_Types_Pkg {
  CSM_DMI_Types_Pkg,
  PIM_DMI_Types_Pkg,
  TSM_DMI_Types_Pkg,
  RSM_DMI_Types_Pkg,
  supervision_status_unknown_DMI_Types_Pkg
} M_SUPERVISION_STATUS_DMI_Types_Pkg;
/* TIU_Types_Pkg::M_brake_signal_command_T */
typedef enum kcg_tag_M_brake_signal_command_T_TIU_Types_Pkg {
  brake_signal_command_not_defined_TIU_Types_Pkg,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Types_Pkg;
/* SDM_Types_Pkg::SupervisionStatus_T */
typedef enum kcg_tag_SupervisionStatus_T_SDM_Types_Pkg {
  Normal_Supervision_SDM_Types_Pkg,
  Indication_Supervision_SDM_Types_Pkg,
  Overspeed_Supervision_SDM_Types_Pkg,
  Warning_Supervision_SDM_Types_Pkg,
  Intervention_Supervision_SDM_Types_Pkg,
  Undefined_Supervision_SDM_Types_Pkg
} SupervisionStatus_T_SDM_Types_Pkg;
/* SDM_Types_Pkg::SDM_Types_T */
typedef enum kcg_tag_SDM_Types_T_SDM_Types_Pkg {
  CSM_SDM_Types_Pkg,
  TSM_SDM_Types_Pkg,
  RSM_SDM_Types_Pkg,
  No_SDM_Type_SDM_Types_Pkg
} SDM_Types_T_SDM_Types_Pkg;
/* TargetManagement_types::TargetType_T */
typedef enum kcg_tag_TargetType_T_TargetManagement_types {
  EoA_TargetManagement_types,
  SvL_TargetManagement_types,
  MRSP_TargetManagement_types,
  invalid_TargetManagement_types,
  LoA_TargetManagement_types
} TargetType_T_TargetManagement_types;
/* DMI_Types_Pkg::DMI_DMI_Identifier_T */
typedef enum kcg_tag_DMI_DMI_Identifier_T_DMI_Types_Pkg {
  DMI_1_DMI_Types_Pkg,
  DMI_2_DMI_Types_Pkg
} DMI_DMI_Identifier_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_Cabin_Identifier_T */
typedef enum kcg_tag_DMI_Cabin_Identifier_T_DMI_Types_Pkg {
  cabin_A_DMI_Types_Pkg,
  cabin_B_DMI_Types_Pkg
} DMI_Cabin_Identifier_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_StatusSet_T */
typedef enum kcg_tag_DMI_StatusSet_T_DMI_Types_Pkg {
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
typedef enum kcg_tag_M_ADHESION {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
/* Q_TEXTREPORT */
typedef enum kcg_tag_Q_TEXTREPORT {
  Q_TEXTREPORT_No_driver_acknowledgement_report_required = 0,
  Q_TEXTREPORT_Driver_acknowledgement_report_required = 1
} Q_TEXTREPORT;
/* DMI_Types_Pkg::DMI_context_TXT_MSG_T */
typedef enum kcg_tag_DMI_context_TXT_MSG_T_DMI_Types_Pkg {
  con_undefined_DMI_Types_Pkg,
  con_levelMgmt_DMI_Types_Pkg,
  con_modeChange_DMI_Types_Pkg,
  con_trackRequest_DMI_Types_Pkg
} DMI_context_TXT_MSG_T_DMI_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_TransitionType */
typedef enum kcg_tag_T_TransitionType_Level_And_Mode_Types_Pkg {
  M_TransitionType_Conditional_Level_And_Mode_Types_Pkg,
  M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg,
  M_TransitionType_Normal_Level_And_Mode_Types_Pkg
} T_TransitionType_Level_And_Mode_Types_Pkg;
/* DMI_Types_Pkg::DMI_Request_T */
typedef enum kcg_tag_DMI_Request_T_DMI_Types_Pkg {
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
typedef enum kcg_tag_sessionStatus_Type_Radio_Types_Pkg {
  morc_st_inactive_Radio_Types_Pkg,
  morc_st_establishing_Radio_Types_Pkg,
  morc_st_maintaining_Radio_Types_Pkg,
  morc_st_terminating_Radio_Types_Pkg
} sessionStatus_Type_Radio_Types_Pkg;
/* DataDictionary_Pkg::LevelDecisionTableActionKind */
typedef enum kcg_tag_LevelDecisionTableActionKind_DataDictionary_Pkg {
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
typedef enum kcg_tag_ModeDecisionTableActionKind_DataDictionary_Pkg {
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
/* M_DUP */
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates = 0,
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LGTLOC */
typedef enum kcg_tag_Q_LGTLOC {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* M_LOC */
typedef enum kcg_tag_M_LOC {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_balise_group = 1,
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2
} M_LOC;
/* TIU_Types_Pkg::cab_ID_T */
typedef enum kcg_tag_cab_ID_T_TIU_Types_Pkg {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_cab_signal_status_T */
typedef enum kcg_tag_M_cab_signal_status_T_TIU_Types_Pkg {
  cab_signal_status_not_defined_TIU_Types_Pkg,
  both_desks_are_closed_TIU_Types_Pkg,
  desk_A_is_open_TIU_Types_Pkg,
  desk_B_is_open_TIU_Types_Pkg,
  both_desks_are_open_TIU_Types_Pkg
} M_cab_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_sleeping_signal_status_T */
typedef enum kcg_tag_M_sleeping_signal_status_T_TIU_Types_Pkg {
  signal_active_TIU_Types_Pkg,
  signal_not_active_TIU_Types_Pkg
} M_sleeping_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_passiveshunting_signal_status_T */
typedef enum kcg_tag_M_passiveshunting_signal_status_T_TIU_Types_Pkg {
  passive_shunting_permitted_TIU_Types_Pkg,
  passive_shunting_not_permitted_TIU_Types_Pkg
} M_passiveshunting_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_nonleading_signal_status_T */
typedef enum kcg_tag_M_nonleading_signal_status_T_TIU_Types_Pkg {
  non_leading_signall_status_not_defined_TIU_Types_Pkg,
  non_leading_permitted_TIU_Types_Pkg,
  non_leading_not_permitted_TIU_Types_Pkg
} M_nonleading_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_directioncontroller_signal_status_T */
typedef enum kcg_tag_M_directioncontroller_signal_status_T_TIU_Types_Pkg {
  direction_controller_in_neutral_TIU_Types_Pkg,
  direction_controller_in_forward_TIU_Types_Pkg,
  direction_controller_in_backward_TIU_Types_Pkg
} M_directioncontroller_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trainintegrity_signal_status_T */
typedef enum kcg_tag_M_trainintegrity_signal_status_T_TIU_Types_Pkg {
  train_is_not_integer_TIU_Types_Pkg,
  train_is_integer_TIU_Types_Pkg
} M_trainintegrity_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_signal_status_T */
typedef enum kcg_tag_M_traction_signal_status_T_TIU_Types_Pkg {
  traction_on_TIU_Types_Pkg,
  traction_off_TIU_Types_Pkg
} M_traction_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_status_T */
typedef enum kcg_tag_M_brake_status_T_TIU_Types_Pkg {
  brake_status_not_defined_TIU_Types_Pkg,
  is_active_TIU_Types_Pkg,
  is_not_active_TIU_Types_Pkg
} M_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_train_data_entry_type_T */
typedef enum kcg_tag_M_train_data_entry_type_T_TIU_Types_Pkg {
  fixed_entry_type_TIU_Types_Pkg,
  flexible_entry_type_TIU_Types_Pkg,
  switchable_entry_type_TIU_Types_Pkg,
  no_entry_type_TIU_Types_Pkg
} M_train_data_entry_type_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trackcond_T */
typedef enum kcg_tag_M_trackcond_T_TIU_Types_Pkg {
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
/* TrackAtlasTypes::MA_Level_t */
typedef enum kcg_tag_MA_Level_t_TrackAtlasTypes {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* M_LEVELTR */
typedef enum kcg_tag_M_LEVELTR {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_DIFF */
typedef enum kcg_tag_Q_DIFF {
  Q_DIFF_Cant_Deficiency_specific_category = 0,
  Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP = 1,
  Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP = 2
} Q_DIFF;
/* NC_CDDIFF */
typedef enum kcg_tag_NC_CDDIFF {
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
typedef enum kcg_tag_Q_FRONT {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* Q_SRSTOP */
typedef enum kcg_tag_Q_SRSTOP {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* M_MAMODE */
typedef enum kcg_tag_M_MAMODE {
  M_MAMODE_On_Sight = 0,
  M_MAMODE_Shunting = 1,
  M_MAMODE_Limited_Supervision = 2
} M_MAMODE;
/* Q_MAMODE */
typedef enum kcg_tag_Q_MAMODE {
  Q_MAMODE_as_the_EOA = 0,
  Q_MAMODE_as_both_the_EOA_and_SvL = 1
} Q_MAMODE;
/* Q_SECTIONTIMER */
typedef enum kcg_tag_Q_SECTIONTIMER {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* Q_OVERLAP */
typedef enum kcg_tag_Q_OVERLAP {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_DANGERPOINT */
typedef enum kcg_tag_Q_DANGERPOINT {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_ENDTIMER */
typedef enum kcg_tag_Q_ENDTIMER {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
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
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* Q_LENGTH */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_information_available = 0,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
/* Q_EMERGENCYSTOP */
typedef enum kcg_tag_Q_EMERGENCYSTOP {
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
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
/* NC_TRAIN */
typedef enum kcg_tag_NC_TRAIN {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_AIRTIGHT */
typedef enum kcg_tag_M_AIRTIGHT {
  M_AIRTIGHT_Not_fitted = 0,
  M_AIRTIGHT_Fitted = 1
} M_AIRTIGHT;
/* M_LOADINGGAUGE */
typedef enum kcg_tag_M_LOADINGGAUGE {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
/* NC_CDTRAIN */
typedef enum kcg_tag_NC_CDTRAIN {
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
typedef enum kcg_tag_M_VOLTAGE {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
/* M_ERROR */
typedef enum kcg_tag_M_ERROR {
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
typedef enum kcg_tag_Q_MARQSTREASON {
  Q_MARQSTREASON_Start_selected_by_driver = 1,
  Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached = 2,
  Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached = 4,
  Q_MARQSTREASON_Track_description_deleted = 8,
  Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location = 16
} Q_MARQSTREASON;
/* Q_GDIR */
typedef enum kcg_tag_Q_GDIR { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_DLRBG */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LINK */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* Q_UPDOWN */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
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
/* Q_DIRLRBG */
typedef enum kcg_tag_Q_DIRLRBG {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DIRTRAIN */
typedef enum kcg_tag_Q_DIRTRAIN {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum kcg_tag_odoMotionState_T_Obu_BasicTypes_Pkg {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum kcg_tag_odoMotionDirection_T_Obu_BasicTypes_Pkg {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* Common_Types_Pkg::MsgSource_T */
typedef enum kcg_tag_MsgSource_T_Common_Types_Pkg {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* M_VERSION */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* M_ACK */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_NEWCOUNTRY */
typedef enum kcg_tag_Q_NEWCOUNTRY {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum kcg_tag_Q_LINKORIENTATION {
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum kcg_tag_Q_LINKREACTION {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Q_NVEMRRLS */
typedef enum kcg_tag_Q_NVEMRRLS {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} Q_NVEMRRLS;
/* Q_NVSBTSMPERM */
typedef enum kcg_tag_Q_NVSBTSMPERM {
  Q_NVSBTSMPERM_No = 0,
  Q_NVSBTSMPERM_Yes = 1
} Q_NVSBTSMPERM;
/* M_NVCONTACT */
typedef enum kcg_tag_M_NVCONTACT {
  M_NVCONTACT_Train_trip = 0,
  M_NVCONTACT_Apply_service_brake = 1,
  M_NVCONTACT_No_Reaction = 2
} M_NVCONTACT;
/* M_NVDERUN */
typedef enum kcg_tag_M_NVDERUN {
  M_NVDERUN_No = 0,
  M_NVDERUN_Yes = 1
} M_NVDERUN;
/* Q_NVDRIVER_ADHES */
typedef enum kcg_tag_Q_NVDRIVER_ADHES {
  Q_NVDRIVER_ADHES_Not_allowed = 0,
  Q_NVDRIVER_ADHES_Allowed = 1
} Q_NVDRIVER_ADHES;
/* Q_DIR */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_SCALE */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_NVGUIPERM */
typedef enum kcg_tag_Q_NVGUIPERM {
  Q_NVGUIPERM_No = 0,
  Q_NVGUIPERM_Yes = 1
} Q_NVGUIPERM;
/* Q_NVSBFBPERM */
typedef enum kcg_tag_Q_NVSBFBPERM {
  Q_NVSBFBPERM_No = 0,
  Q_NVSBFBPERM_Yes = 1
} Q_NVSBFBPERM;
/* Q_NVINHSMICPERM */
typedef enum kcg_tag_Q_NVINHSMICPERM {
  Q_NVINHSMICPERM_No = 0,
  Q_NVINHSMICPERM_Yes = 1
} Q_NVINHSMICPERM;
/* M_NVEBCL */
typedef enum kcg_tag_M_NVEBCL {
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
typedef enum kcg_tag_Q_NVKINT {
  Q_NVKINT_No_integrated_correction_factors_follow = 0,
  Q_NVKINT_Integrated_correction_factors_follow = 1
} Q_NVKINT;
/* Q_NVKVINTSET */
typedef enum kcg_tag_Q_NVKVINTSET {
  Q_NVKVINTSET_Freight_trains = 0,
  Q_NVKVINTSET_Conventional_passenger_trains = 1
} Q_NVKVINTSET;
/* L_NVKRINT */
typedef enum kcg_tag_L_NVKRINT {
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
typedef enum kcg_tag__16_SSM_TR_SM1 {
  _15_SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_SM1,
  SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_SM1
} _16_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum kcg_tag__14_SSM_ST_SM1 {
  SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1,
  SSM_st_FS_Mode_SM1
} _14_SSM_ST_SM1;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum kcg_tag_SSM_TR_Level_NTC_and_Mode_SN {
  SSM_TR_no_trans_Level_NTC_and_Mode_SN,
  SSM_TR_State1_1_Level_NTC_and_Mode_SN,
  SSM_TR_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_1_Level_NTC_and_Mode_SN
} SSM_TR_Level_NTC_and_Mode_SN;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum kcg_tag_SSM_ST_Level_NTC_and_Mode_SN {
  SSM_st_State1_Level_NTC_and_Mode_SN,
  SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN,
  SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN
} SSM_ST_Level_NTC_and_Mode_SN;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum kcg_tag__13_SSM_TR_SM1 {
  _12_SSM_TR_no_trans_SM1,
  SSM_TR_NP_1_SM1,
  SSM_TR_Awakness_of_Train_1_SM1,
  SSM_TR_Awakness_of_Train_2_SM1,
  SSM_TR_Awakness_of_Train_3_SM1
} _13_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum kcg_tag__11_SSM_ST_SM1 {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
  SSM_st_SoM_NTC_SN_SM1
} _11_SSM_ST_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum kcg_tag_SSM_TR_SM3_SM1_Awakness_of_Train {
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
typedef enum kcg_tag_SSM_ST_SM3_SM1_Awakness_of_Train {
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
typedef enum kcg_tag_SSM_TR_modeInterplay {
  SSM_TR_no_trans_modeInterplay,
  SSM_TR_CSM_1_modeInterplay,
  SSM_TR_CSM_2_modeInterplay,
  SSM_TR_TSM_1_modeInterplay,
  SSM_TR_TSM_2_modeInterplay,
  SSM_TR_RSM_1_modeInterplay,
  SSM_TR_RSM_2_modeInterplay
} SSM_TR_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
typedef enum kcg_tag_SSM_ST_modeInterplay {
  SSM_st_CSM_modeInterplay,
  SSM_st_TSM_modeInterplay,
  SSM_st_RSM_modeInterplay
} SSM_ST_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
typedef enum kcg_tag_SSM_TR_CSM_modeInterplay_CSM {
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
typedef enum kcg_tag_SSM_ST_CSM_modeInterplay_CSM {
  SSM_st_Init_modeInterplay_CSM_CSM,
  SSM_st_NormalStatus_modeInterplay_CSM_CSM,
  SSM_st_OverspeedStatus_modeInterplay_CSM_CSM,
  SSM_st_WarningStatus_modeInterplay_CSM_CSM,
  SSM_st_InterventionStatus_modeInterplay_CSM_CSM
} SSM_ST_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum kcg_tag_SSM_TR_SM4_modeInterplay_TSM {
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
typedef enum kcg_tag_SSM_ST_SM4_modeInterplay_TSM {
  SSM_st_init_modeInterplay_TSM_SM4,
  SSM_st_Normal_modeInterplay_TSM_SM4,
  SSM_st_Indication_modeInterplay_TSM_SM4,
  SSM_st_Overspeed_modeInterplay_TSM_SM4,
  SSM_st_Warning_modeInterplay_TSM_SM4,
  SSM_st_Intervention_modeInterplay_TSM_SM4
} SSM_ST_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum kcg_tag_SSM_TR_RSM_modeInterplay_RSM {
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
typedef enum kcg_tag_SSM_ST_RSM_modeInterplay_RSM {
  SSM_st_Init_modeInterplay_RSM_RSM,
  SSM_st_IndicationStatus_modeInterplay_RSM_RSM,
  SSM_st_InterventionStatus_modeInterplay_RSM_RSM
} SSM_ST_RSM_modeInterplay_RSM;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */
typedef enum kcg_tag_SSM_TR_EstablishmentOfACommunicationSession_SM {
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
typedef enum kcg_tag_SSM_ST_EstablishmentOfACommunicationSession_SM {
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
typedef enum kcg_tag_SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU {
  SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU
} SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum kcg_tag_SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM
} SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum kcg_tag_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta {
  SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSt,
  SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta,
  SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta
} SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum kcg_tag_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn,
  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn
} SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum kcg_tag_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf {
  SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartO,
  SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf,
  SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf
} SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM;
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum kcg_tag_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC,
  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC
} SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum kcg_tag_SSM_TR_TimerStatus_SM {
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
typedef enum kcg_tag_SSM_ST_TimerStatus_SM {
  SSM_st_Stopped_TimerStatus_SM,
  SSM_st_Counting_TimerStatus_SM,
  SSM_st_Expired_TimerStatus_SM
} SSM_ST_TimerStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
typedef enum kcg_tag_SSM_TR_Maintaining_SM {
  SSM_TR_no_trans_Maintaining_SM,
  SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM,
  SSM_TR_CommunicationSessionEstablished_1_Maintaining_SM
} SSM_TR_Maintaining_SM;
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM */
typedef enum kcg_tag_SSM_ST_Maintaining_SM {
  SSM_st_CommunicationSessionNotEstablished_Maintaining_SM,
  SSM_st_CommunicationSessionEstablished_Maintaining_SM
} SSM_ST_Maintaining_SM;
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum kcg_tag_SSM_TR_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished {
  SSM_TR_no_trans_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_SafeRadio_connected_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_SafeRadio_connected_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnectionLost_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnectionLost_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnecctionLostInAnnouncedRadioHole_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished
} SSM_TR_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* MoRC_Pck::Subfunc_Pkg::maintaining_a_Session::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum kcg_tag_SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished {
  SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM
} SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum kcg_tag_SSM_TR_TerminateTheCommunicationSession_SM {
  SSM_TR_no_trans_TerminateTheCommunicationSession_SM,
  SSM_TR_Idle_1_TerminateTheCommunicationSession_SM,
  SSM_TR_Idle_2_TerminateTheCommunicationSession_SM,
  SSM_TR_WaitForAcknowledgementMessage_1_TerminateTheCommunicationSession_SM,
  SSM_TR_EstablishingACommunicationSessionAborted_1_TerminateTheCommunicationSession_SM
} SSM_TR_TerminateTheCommunicationSession_SM;
/* MoRC_Pck::Subfunc_Pkg::terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum kcg_tag_SSM_ST_TerminateTheCommunicationSession_SM {
  SSM_st_Idle_TerminateTheCommunicationSession_SM,
  SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM,
  SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM,
  SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM
} SSM_ST_TerminateTheCommunicationSession_SM;
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */
typedef enum kcg_tag_SSM_TR_MobileHW_available_SM {
  SSM_TR_no_trans_MobileHW_available_SM,
  SSM_TR_MobileHWNotAvailable_1_MobileHW_available_SM,
  SSM_TR_MobileHWAvailable_1_MobileHW_available_SM,
  SSM_TR_InitialState_1_MobileHW_available_SM
} SSM_TR_MobileHW_available_SM;
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM */
typedef enum kcg_tag_SSM_ST_MobileHW_available_SM {
  SSM_st_MobileHWNotAvailable_MobileHW_available_SM,
  SSM_st_MobileHWAvailable_MobileHW_available_SM,
  SSM_st_InitialState_MobileHW_available_SM
} SSM_ST_MobileHW_available_SM;
/* MoRC_Pck::Subfunc_Pkg::radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum kcg_tag_SSM_TR_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable {
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
typedef enum kcg_tag_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable {
  SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM
} SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus_SM */
typedef enum kcg_tag_SSM_TR_connectionStatus_SM {
  SSM_TR_no_trans_connectionStatus_SM,
  SSM_TR_NoConnection_1_connectionStatus_SM,
  SSM_TR_NoConnection_2_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  SSM_TR_ConnectionUp_1_connectionStatus_SM,
  SSM_TR_ConnectionUp_2_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication::connectionStatus_SM */
typedef enum kcg_tag_SSM_ST_connectionStatus_SM {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum kcg_tag_SSM_TR_TrainExitedFromRBCArea_SM {
  SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} SSM_TR_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum kcg_tag_SSM_ST_TrainExitedFromRBCArea_SM {
  SSM_st_Idle_TrainExitedFromRBCArea_SM,
  SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_ST_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
typedef enum kcg_tag__10_SSM_TR_SM1 {
  _9_SSM_TR_no_trans_SM1,
  SSM_TR_NoTerminationInProgress_1_SM1,
  SSM_TR_TerminationInProgress_1_SM1,
  SSM_TR_EstablishNewSession_1_SM1
} _10_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateAndEstablishSession::SM1 */
typedef enum kcg_tag__8_SSM_ST_SM1 {
  SSM_st_NoTerminationInProgress_SM1,
  SSM_st_TerminationInProgress_SM1,
  SSM_st_EstablishNewSession_SM1
} _8_SSM_ST_SM1;
/* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */
typedef enum kcg_tag_SSM_TR_CommunicationSession_SM {
  SSM_TR_no_trans_CommunicationSession_SM,
  SSM_TR_NoSession_1_CommunicationSession_SM,
  SSM_TR_Establishing_1_CommunicationSession_SM,
  SSM_TR_Establishing_2_CommunicationSession_SM,
  SSM_TR_Maintaining_1_CommunicationSession_SM,
  SSM_TR_Terminating_1_CommunicationSession_SM
} SSM_TR_CommunicationSession_SM;
/* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */
typedef enum kcg_tag_SSM_ST_CommunicationSession_SM {
  SSM_st_NoSession_CommunicationSession_SM,
  SSM_st_Establishing_CommunicationSession_SM,
  SSM_st_Maintaining_CommunicationSession_SM,
  SSM_st_Terminating_CommunicationSession_SM
} SSM_ST_CommunicationSession_SM;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_TR_SM_SH_Initiated_By_Driver {
  SSM_TR_no_trans_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_1_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_2_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_1_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_2_SM_SH_Initiated_By_Driver
} SSM_TR_SM_SH_Initiated_By_Driver;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_ST_SM_SH_Initiated_By_Driver {
  SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver,
  SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver
} SSM_ST_SM_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_TR_SH_Initiated_By_Driver {
  SSM_TR_no_trans_SH_Initiated_By_Driver,
  SSM_TR_SH_initiated_by_driver_procedure_off_1_SH_Initiated_By_Driver,
  SSM_TR_S0_SH_initiated_by_driver_procedure_on_1_SH_Initiated_By_Driver
} SSM_TR_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_ST_SH_Initiated_By_Driver {
  SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver,
  SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver
} SSM_ST_SH_Initiated_By_Driver;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum kcg_tag_SSM_TR_SM_Mode_Profile_By_Trackside {
  SSM_TR_no_trans_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Current_Location_1_SM_Mode_Profile_By_Trackside
} SSM_TR_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum kcg_tag_SSM_ST_SM_Mode_Profile_By_Trackside {
  SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside,
  SSM_st_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_st_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_ST_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum kcg_tag_SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location {
  SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Req_Futher_Location_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Start_Supervision_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Waiting_Ack_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location
} SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum kcg_tag_SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location {
  SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location
} SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum kcg_tag_SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location {
  SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Switch_Autorized_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Switch_Autorized_Waiting_Ack_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Ack_Not_Received_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location
} SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum kcg_tag_SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location {
  SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location
} SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum kcg_tag_SSM_TR_SM_Start_L1_L2_L3 {
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
typedef enum kcg_tag_SSM_ST_SM_Start_L1_L2_L3 {
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
typedef enum kcg_tag_SSM_TR_SM_StartOfMissionProcedure {
  SSM_TR_no_trans_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_Off_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_2_SM_StartOfMissionProcedure,
  SSM_TR_EB_Requested_1_SM_StartOfMissionProcedure
} SSM_TR_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum kcg_tag_SSM_ST_SM_StartOfMissionProcedure {
  SSM_st_Procedure_Off_SM_StartOfMissionProcedure,
  SSM_st_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_EB_Requested_SM_StartOfMissionProcedure
} SSM_ST_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum kcg_tag_SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On {
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
typedef enum kcg_tag_SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On {
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
typedef enum kcg_tag_SSM_TR_SM_Train_Trip {
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
typedef enum kcg_tag_SSM_ST_SM_Train_Trip {
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
typedef enum kcg_tag_SSM_TR_SM_Train_Reversing {
  SSM_TR_no_trans_SM_Train_Reversing,
  SSM_TR_Reversing_Procedure_Off_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_2_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_3_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_1_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_2_SM_Train_Reversing
} SSM_TR_SM_Train_Reversing;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum kcg_tag_SSM_ST_SM_Train_Reversing {
  SSM_st_Reversing_Procedure_Off_SM_Train_Reversing,
  SSM_st_Reversing_Condition_SM_Train_Reversing,
  SSM_st_RV_Mode_SM_Train_Reversing,
  SSM_st_Reversing_Data_Available_SM_Train_Reversing
} SSM_ST_SM_Train_Reversing;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum kcg_tag__7_SSM_TR_SM1 {
  _6_SSM_TR_no_trans_SM1,
  SSM_TR_BeforeChange_1_SM1,
  SSM_TR_State2_1_SM1
} _7_SSM_TR_SM1;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum kcg_tag__5_SSM_ST_SM1 {
  SSM_st_BeforeChange_SM1,
  SSM_st_State2_SM1
} _5_SSM_ST_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum kcg_tag__4_SSM_TR_SM1 {
  _3_SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_1_SM1,
  SSM_TR_LaunchRequest_1_SM1,
  SSM_TR_LaunchRequest_2_SM1,
  SSM_TR_AckReceived_1_SM1
} _4_SSM_TR_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum kcg_tag__2_SSM_ST_SM1 {
  SSM_st_Waiting_SM1,
  SSM_st_LaunchRequest_SM1,
  SSM_st_AckReceived_SM1
} _2_SSM_ST_SM1;
/* MA_Request::MA_Request_Supervision::SM1 */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} SSM_TR_SM1;
/* MA_Request::MA_Request_Supervision::SM1 */
typedef enum kcg_tag_SSM_ST_SM1 {
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

/* CalcBrakingCurves_types::ASafeSpeedDefinition_T */
typedef V_internal_real_Type_SDM_Types_Pkg ASafeSpeedDefinition_T_CalcBrakingCurves_types[14];

/* SDM_Types_Pkg::L_internal_real_Type */
typedef kcg_real L_internal_real_Type_SDM_Types_Pkg;

/* TargetManagement_types::Target_real_T */
typedef struct kcg_tag_Target_real_T_TargetManagement_types {
  TargetType_T_TargetManagement_types targetType;
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
} Target_real_T_TargetManagement_types;

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef Target_real_T_TargetManagement_types Target_list_MRSP_real_T_TargetManagement_types[200];

/* TargetManagement_types::EOA_real_T */
typedef struct kcg_tag_EOA_real_T_TargetManagement_types {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} EOA_real_T_TargetManagement_types;

/* TargetLimits_Pkg::bec_t */
typedef struct kcg_tag_bec_t_TargetLimits_Pkg {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} bec_t_TargetLimits_Pkg;

/* SDM_Types_Pkg::T_internal_real_Type */
typedef kcg_real T_internal_real_Type_SDM_Types_Pkg;

/* SDMModelPkg::t_BrakeVt_t */
typedef T_internal_real_Type_SDM_Types_Pkg t_BrakeVt_t_SDMModelPkg[2];

/* SDMModelPkg::t_Brake_t */
typedef struct kcg_tag_t_Brake_t_SDMModelPkg {
  t_BrakeVt_t_SDMModelPkg emergency;
  t_BrakeVt_t_SDMModelPkg service;
} t_Brake_t_SDMModelPkg;

/* SDM_Types_Pkg::A_internal_real_Type */
typedef kcg_real A_internal_real_Type_SDM_Types_Pkg;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct kcg_tag_ParabolaArc_T_CalcBrakingCurves_types {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  A_internal_real_Type_SDM_Types_Pkg acceleration;
} ParabolaArc_T_CalcBrakingCurves_types;

/* SDM_GradientAcceleration_types::Gradient_real_t */
typedef kcg_real Gradient_real_t_SDM_GradientAcceleration_types;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct kcg_tag_Isolation_Status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} Isolation_Status_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct kcg_tag_Brake_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} Brake_command_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct kcg_tag_Brake_inhibition_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} Brake_inhibition_command_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct kcg_tag_Type_I_train_commands_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} Type_I_train_commands_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct kcg_tag_TIU_commandStatus_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} TIU_commandStatus_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct kcg_tag_TIU_trainStatus_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} TIU_trainStatus_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct kcg_tag_Mode_control_and_train_status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} Mode_control_and_train_status_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct kcg_tag_Brake_status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} Brake_status_T_TIU_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct kcg_tag_T_Mode_Level_Level_And_Mode_Types_Pkg {
  kcg_bool compatibleModeAndLevel;
  M_LEVEL level;
  kcg_bool newLevel;
  M_MODE Mode;
  kcg_bool newMode;
} T_Mode_Level_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_AcknoledgementRequest */
typedef struct kcg_tag_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
} T_AcknoledgementRequest_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_MASSPGradient_Available */
typedef struct kcg_tag_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg {
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct kcg_tag_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct kcg_tag_T_Data_To_DMI_Level_And_Mode_Types_Pkg {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool SH_Refused_By_RBC;
} T_Data_To_DMI_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct kcg_tag_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
  kcg_bool Connection_to_RBC_req;
  kcg_bool Position_Repport_Needed;
} T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct kcg_tag_T_Data_From_DMI_Level_And_Mode_Types_Pkg {
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
} T_Data_From_DMI_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_STM */
typedef struct kcg_tag_T_Data_From_STM_Level_And_Mode_Types_Pkg {
  kcg_bool Interface_To_National_System;
  kcg_bool National_trip_Order;
} T_Data_From_STM_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct kcg_tag_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct kcg_tag_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
} T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct kcg_tag_dmiOutputs_T_manage_DMI_Output_Pkg {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} dmiOutputs_T_manage_DMI_Output_Pkg;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct kcg_tag_DMI_Available_Menu_T_DMI_Types_Pkg {
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
} DMI_Available_Menu_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct kcg_tag_DMI_DriverAck_T_DMI_Types_Pkg {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} DMI_DriverAck_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct kcg_tag_DMI_DriverRequest_T_DMI_Types_Pkg {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} DMI_DriverRequest_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct kcg_tag_DMI_To_Modes_T_DMI_Types_Pkg {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} DMI_To_Modes_T_DMI_Types_Pkg;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct kcg_tag_mobileHWStatus_Type_MoRC_Pck {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} mobileHWStatus_Type_MoRC_Pck;

/* MoRC_Pck::safeRadioConnectionStatusValid_Type */
typedef struct kcg_tag_safeRadioConnectionStatusValid_Type_MoRC_Pck {
  kcg_bool valid;
  safeRadioConnectionStatus_Type_MoRC_Pck status;
} safeRadioConnectionStatusValid_Type_MoRC_Pck;

/* MoRC_Pck::obuEventsAndPhases_T */
typedef struct kcg_tag_obuEventsAndPhases_T_MoRC_Pck {
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
} obuEventsAndPhases_T_MoRC_Pck;

/* MoRC_Pck::Coder_Pkg::m32e_RBC_or_RIU_System_Version_T */
typedef struct kcg_tag_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg {
  kcg_bool valid;
  M_VERSION version;
  kcg_bool systemVersionFromTracksideSupported;
} m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct kcg_tag_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  M_ERROR m_error;
} PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

/* TrackAtlasTypes::FromTIU_t */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct kcg_tag_RadioMetadata_T_Common_Types_Pkg {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} RadioMetadata_T_Common_Types_Pkg;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct kcg_tag_nvkrint_T_Packet_Types_Pkg {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} nvkrint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkrintArray_T */
typedef nvkrint_T_Packet_Types_Pkg nvkrintArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct kcg_tag_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct kcg_tag_TSM_revokeCond_T_SDM_Commands_Pkg {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} TSM_revokeCond_T_SDM_Commands_Pkg;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct kcg_tag_TSM_triggerCond_T_SDM_Commands_Pkg {
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
} TSM_triggerCond_T_SDM_Commands_Pkg;

/* SDM_Commands_Pkg::MyArray */
typedef kcg_bool MyArray_SDM_Commands_Pkg[14];

/* SDM_Commands_Pkg::EB_command_T */
typedef kcg_bool EB_command_T_SDM_Commands_Pkg;

/* SDM_Types_Pkg::Speeds_T */
typedef struct kcg_tag_Speeds_T_SDM_Types_Pkg {
  V_internal_real_Type_SDM_Types_Pkg V_est;
  V_internal_real_Type_SDM_Types_Pkg V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg V_release;
  V_internal_real_Type_SDM_Types_Pkg V_target;
  V_internal_real_Type_SDM_Types_Pkg v_p_mrdt;
  V_internal_real_Type_SDM_Types_Pkg v_p_dmi;
  V_internal_real_Type_SDM_Types_Pkg v_sbi_mrdt;
  V_internal_real_Type_SDM_Types_Pkg v_FLOI_dmi;
  V_internal_real_Type_SDM_Types_Pkg dV_warning_V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg dV_warning_V_target;
  V_internal_real_Type_SDM_Types_Pkg dV_sbi_V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg dV_sbi_V_target;
  V_internal_real_Type_SDM_Types_Pkg dV_ebi_V_MRSP;
  V_internal_real_Type_SDM_Types_Pkg dV_ebi_V_target;
  kcg_bool OdoStandStill;
} Speeds_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct kcg_tag_SDM_Locations_T_SDM_Types_Pkg {
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
  L_internal_real_Type_SDM_Types_Pkg d_target;
  L_internal_real_Type_SDM_Types_Pkg d_eoa;
  L_internal_real_Type_SDM_Types_Pkg d_svl;
  kcg_bool Preindication_EBD_location_valid;
  kcg_bool Preindication_SBD_location_valid;
  kcg_bool RSM_start_location_EBD_valid;
  kcg_bool RSM_start_location_SBD_valid;
} SDM_Locations_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct kcg_tag_TrainLocations_real_T_SDM_Types_Pkg {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_cond_L1_antenna2frontend;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} TrainLocations_real_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct kcg_tag_trainData_internal_t_SDM_Types_Pkg {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  T_internal_real_Type_SDM_Types_Pkg T_traction_cut_off;
} trainData_internal_t_SDM_Types_Pkg;

/* TargetManagement_types::TargetCollection_T */
typedef struct kcg_tag_TargetCollection_T_TargetManagement_types {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_LoA_target;
} TargetCollection_T_TargetManagement_types;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct kcg_tag_MRSP_internal_section_T_TargetManagement_types {
  L_internal_real_Type_SDM_Types_Pkg Loc_Abs;
  V_internal_real_Type_SDM_Types_Pkg MRS;
  kcg_bool valid;
} MRSP_internal_section_T_TargetManagement_types;

/* TargetManagement_types::MRSP_internal_T */
typedef MRSP_internal_section_T_TargetManagement_types MRSP_internal_T_TargetManagement_types[200];

/* TargetManagement_types::MA_section_real_T */
typedef struct kcg_tag_MA_section_real_T_TargetManagement_types {
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
} MA_section_real_T_TargetManagement_types;

/* SDM_GradientAcceleration_types::Gradient_section_real_t */
typedef struct kcg_tag_Gradient_section_real_t_SDM_GradientAcceleration_types {
  L_internal_real_Type_SDM_Types_Pkg location;
  Gradient_real_t_SDM_GradientAcceleration_types gradient;
  kcg_bool valid;
} Gradient_section_real_t_SDM_GradientAcceleration_types;

/* SDM_GradientAcceleration_types::GradientProfile_real_t */
typedef Gradient_section_real_t_SDM_GradientAcceleration_types GradientProfile_real_t_SDM_GradientAcceleration_types[50];

/* SDM_GradientAcceleration_types::GradientProfile_real_compensated_t */
typedef Gradient_section_real_t_SDM_GradientAcceleration_types GradientProfile_real_compensated_t_SDM_GradientAcceleration_types[100];

/* SDM_GradientAcceleration_types::A_gradient_element_t */
typedef struct kcg_tag_A_gradient_element_t_SDM_GradientAcceleration_types {
  L_internal_real_Type_SDM_Types_Pkg position;
  A_internal_real_Type_SDM_Types_Pkg gradient_acceleration;
  kcg_bool valid;
} A_gradient_element_t_SDM_GradientAcceleration_types;

/* SDM_GradientAcceleration_types::A_gradient_t */
typedef A_gradient_element_t_SDM_GradientAcceleration_types A_gradient_t_SDM_GradientAcceleration_types[100];

/* CalcBrakingCurves_types::ParabolaCurveValid_T */
typedef kcg_bool ParabolaCurveValid_T_CalcBrakingCurves_types[114];

/* TargetLimits_Pkg::T_trac_t */
typedef struct kcg_tag_T_trac_t_TargetLimits_Pkg {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
  T_internal_real_Type_SDM_Types_Pkg indication;
} T_trac_t_TargetLimits_Pkg;

/* MA_Request::Driver2MAR_T */
typedef struct kcg_tag_Driver2MAR_T_MA_Request {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} Driver2MAR_T_MA_Request;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct kcg_tag_P027V1_OBU_body_enum_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
} P027V1_OBU_body_enum_T_TM_baseline2;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct kcg_tag_ErrorMessage_T_ProvidePositionReport_Pkg {
  kcg_bool present;
  M_ERROR errorType;
} ErrorMessage_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct kcg_tag_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct kcg_tag_LocationBasedEvents_T_ProvidePositionReport_Pkg {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} LocationBasedEvents_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct kcg_tag_RBC_Communication_T_ProvidePositionReport_Pkg {
  kcg_bool newSessionEstablished;
} RBC_Communication_T_ProvidePositionReport_Pkg;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct kcg_tag_trainDataStatus_T_trainData_Types_pkg {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool validatedbyRBC;
  kcg_bool waitingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} trainDataStatus_T_trainData_Types_pkg;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct kcg_tag_trainData_Trigger_T_trainData_Types_pkg {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} trainData_Trigger_T_trainData_Types_pkg;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct kcg_tag_trainData_Events_T_trainData_Types_pkg {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} trainData_Events_T_trainData_Types_pkg;

/* DMI_Types_Pkg::DMI_TEXT */
typedef kcg_char DMI_TEXT_DMI_Types_Pkg[255];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef kcg_char driverIdentifier_T_DMI_Messages_Bothways_Pkg[9];

/* L_TEXT */
typedef kcg_int L_TEXT;

/* NID_C */
typedef kcg_int NID_C;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct kcg_tag_nationValuesForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} nationValuesForDMI_T_DMI_Types_Pkg;

/* NID_BG */
typedef kcg_int NID_BG;

/* Packet_Types_Pkg::P63_BaliseInSRAuthority_T */
typedef struct kcg_tag_P63_BaliseInSRAuthority_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} P63_BaliseInSRAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P63_ListofBalisesinSRAuthority_T */
typedef P63_BaliseInSRAuthority_T_Packet_Types_Pkg P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg[7];

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct kcg_tag_LinkedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  NID_LRBG nid_LRBG;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} LinkedBG_T_BG_Types_Pkg;

/* BG_Types_Pkg::LinkedBGs_T */
typedef LinkedBG_T_BG_Types_Pkg LinkedBGs_T_BG_Types_Pkg[33];

/* TM::P005_section_enum_T */
typedef struct kcg_tag_P005_section_enum_T_TM {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} P005_section_enum_T_TM;

/* TM::P005_OBU_sectionlist_enum_T */
typedef P005_section_enum_T_TM P005_OBU_sectionlist_enum_T_TM[33];

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct kcg_tag_TelegramHeader_T_BG_Types_Pkg {
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

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct kcg_tag_TrainToTrackStatus_T_BG_Types_Pkg {
  NID_NTC nid_ntc;
  Q_LENGTH q_length;
} TrainToTrackStatus_T_BG_Types_Pkg;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct kcg_tag_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg[7];

/* TM::P046_section_enum_T */
typedef struct kcg_tag_P046_section_enum_T_TM {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} P046_section_enum_T_TM;

/* TM::P046_OBU_sectionlist_enum_T */
typedef P046_section_enum_T_TM P046_OBU_sectionlist_enum_T_TM[33];

/* D_TRACKCOND */
typedef kcg_int D_TRACKCOND;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct kcg_tag_DMI_trackConditionElement_T_DMI_Types_Pkg {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} DMI_trackConditionElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef DMI_trackConditionElement_T_DMI_Types_Pkg DMI_trackConditionArray_T_DMI_Types_Pkg[32];

/* NID_MN */
typedef kcg_int NID_MN;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct kcg_tag_RadioManagement_T_API_RadioCommunication_Pkg {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} RadioManagement_T_API_RadioCommunication_Pkg;

/* MoRC_Pck::mobileSWStatus_Type */
typedef struct kcg_tag_mobileSWStatus_Type_MoRC_Pck {
  kcg_bool valid;
  kcg_bool mobileHW_available;
  mobileSWConnectionStatus_Type_MoRC_Pck connectionStatus;
  NID_MN registeredRadioNetworkID;
  kcg_bool settingUpConnectionHasFailed;
} mobileSWStatus_Type_MoRC_Pck;

/* MoRC_Pck::mobileSWCmd_Type */
typedef struct kcg_tag_mobileSWCmd_Type_MoRC_Pck {
  kcg_bool valid;
  mobileSWAction_Type_MoRC_Pck action;
  NID_MN radioNetworkID;
} mobileSWCmd_Type_MoRC_Pck;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct kcg_tag_P45_RadioNetworkRegistration_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  NID_MN nid_mn;
} P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct kcg_tag_radioNetWorkIDs_T_MoRC_Pck {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} radioNetWorkIDs_T_MoRC_Pck;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct kcg_tag_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct kcg_tag_sTractionIdentity_T_Packet_TrainTypes_Pkg {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} sTractionIdentity_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef sTractionIdentity_T_Packet_TrainTypes_Pkg aTractionIdentity_T_Packet_TrainTypes_Pkg[3];

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* M_POSITION */
typedef kcg_int M_POSITION;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* NID_EM */
typedef kcg_int NID_EM;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct kcg_tag_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store {
  NID_EM nid_em;
  kcg_bool valid;
} NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

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

/* MoRC_Pck::mobileHWCmd_Type */
typedef struct kcg_tag_mobileHWCmd_Type_MoRC_Pck {
  kcg_bool valid;
  mobileHWAction_Type_MoRC_Pck action;
  NID_MN radioNetworkID;
  NID_RADIO nid_radio;
} mobileHWCmd_Type_MoRC_Pck;

/* MoRC_Pck::Coder_Pkg::p42e_SessionManagement_T */
typedef struct kcg_tag_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg {
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
} p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct kcg_tag_P42_SessionManagement_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} P42_SessionManagement_T_Packet_Types_Pkg;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct kcg_tag_Radio_TrainTrack_Header_T_Radio_Types_Pkg {
  kcg_bool present;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  T_TRAIN xT_TRAIN;
  NID_EM xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  NID_TEXTMESSAGE xNID_TEXTMESSAGE;
} Radio_TrainTrack_Header_T_Radio_Types_Pkg;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct kcg_tag_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

/* N_AXLE */
typedef kcg_int N_AXLE;

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

/* TM_baseline2::P003_permanent_data_T */
typedef struct kcg_tag_P003_permanent_data_T_TM_baseline2 {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} P003_permanent_data_T_TM_baseline2;

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

/* Packet_Types_Pkg::nvkvint_T */
typedef struct kcg_tag_nvkvint_T_Packet_Types_Pkg {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} nvkvint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintArray_T */
typedef nvkvint_T_Packet_Types_Pkg nvkvintArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct kcg_tag_nvkvintset_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} nvkvintset_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef nvkvintset_T_Packet_Types_Pkg nvkvintsetArray_T_Packet_Types_Pkg[7];

/* N_ITER */
typedef kcg_int N_ITER;

/* TM::P046_OBU_T */
typedef struct kcg_tag_P046_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} P046_OBU_T_TM;

/* L_TRAIN */
typedef kcg_int L_TRAIN;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct kcg_tag_P41_LevelTransitionOrder_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} P41_LevelTransitionOrder_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg P41_LevelTransistionOrders_T_Packet_Types_Pkg[7];

/* TM::P041_section_enum_T */
typedef struct kcg_tag_P041_section_enum_T_TM {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} P041_section_enum_T_TM;

/* TM::P041_OBU_sectionlist_enum_T */
typedef P041_section_enum_T_TM P041_OBU_sectionlist_enum_T_TM[33];

/* TM::P041_OBU_T */
typedef struct kcg_tag_P041_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} P041_OBU_T_TM;

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

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct kcg_tag_P15_Level23MovementAuthority_T_Packet_Types_Pkg {
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
} P15_Level23MovementAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg P15_Level23MovementAuthorities_T_Packet_Types_Pkg[5];

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct kcg_tag_P21_GradientProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} P21_GradientProfile_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef P21_GradientProfile_T_Packet_Types_Pkg P21_GradientProfiles_T_Packet_Types_Pkg[7];

/* TM::P021_section_enum_T */
typedef struct kcg_tag_P021_section_enum_T_TM {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} P021_section_enum_T_TM;

/* TM::P021_OBU_sectionlist_enum_T */
typedef P021_section_enum_T_TM P021_OBU_sectionlist_enum_T_TM[33];

/* TM::P021_OBU_T */
typedef struct kcg_tag_P021_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} P021_OBU_T_TM;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* Packet_Types_Pkg::Diff_T */
typedef struct kcg_tag_Diff_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} Diff_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::DiffArray_T */
typedef Diff_T_Packet_Types_Pkg DiffArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::SSP_T */
typedef struct kcg_tag_SSP_T_Packet_Types_Pkg {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} SSP_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::SSPArray_T */
typedef SSP_T_Packet_Types_Pkg SSPArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct kcg_tag_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct kcg_tag_P027V1_section_enum_qdiff_T_TM_baseline2 {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} P027V1_section_enum_qdiff_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef P027V1_section_enum_qdiff_T_TM_baseline2 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2[32];

/* TM_baseline2::P027V1_section_enum_T */
typedef struct kcg_tag_P027V1_section_enum_T_TM_baseline2 {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} P027V1_section_enum_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef P027V1_section_enum_T_TM_baseline2 P027V1_OBU_sectionlist_enum_T_TM_baseline2[33];

/* TM_baseline2::P027V1_OBU_T */
typedef struct kcg_tag_P027V1_OBU_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} P027V1_OBU_T_TM_baseline2;

/* V_MAIN */
typedef kcg_int V_MAIN;

/* Packet_Types_Pkg::P12_Level1MovementAuthority_T */
typedef struct kcg_tag_P12_Level1MovementAuthority_T_Packet_Types_Pkg {
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
} P12_Level1MovementAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P12_Level1MovementAuthorities_T */
typedef P12_Level1MovementAuthority_T_Packet_Types_Pkg P12_Level1MovementAuthorities_T_Packet_Types_Pkg[5];

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct kcg_tag_P80_ModeProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_MAMODE d_mamode;
  M_MAMODE m_mamode;
  V_MAMODE v_mamode;
  L_MAMODE l_mamode;
  L_ACKMAMODE l_ackmamode;
  Q_MAMODE q_mamode;
} P80_ModeProfile_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef P80_ModeProfile_T_Packet_Types_Pkg P80_ModeProfiles_T_Packet_Types_Pkg[3];

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

/* TM::P005_OBU_T */
typedef struct kcg_tag_P005_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} P005_OBU_T_TM;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* D_LOC */
typedef kcg_int D_LOC;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct kcg_tag_IterPacket58_T_Packet_Types_Pkg {
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} IterPacket58_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::IterPacket58List_T */
typedef IterPacket58_T_Packet_Types_Pkg IterPacket58List_T_Packet_Types_Pkg[2];

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct kcg_tag_P58_PositionReportParameters_T_Packet_Types_Pkg {
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
} P58_PositionReportParameters_T_Packet_Types_Pkg;

/* TM::P058_section_enum_T */
typedef struct kcg_tag_P058_section_enum_T_TM {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} P058_section_enum_T_TM;

/* TM::P058_OBU_sectionlist_enum_T */
typedef P058_section_enum_T_TM P058_OBU_sectionlist_enum_T_TM[32];

/* TM::P058_OBU_T */
typedef struct kcg_tag_P058_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} P058_OBU_T_TM;

/* L_DOUBTOVER */
typedef kcg_int L_DOUBTOVER;

/* L_TRAININT */
typedef kcg_int L_TRAININT;

/* L_DOUBTUNDER */
typedef kcg_int L_DOUBTUNDER;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct kcg_tag_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

/* TIU_Types_Pkg::NID_ctraction_T */
typedef kcg_int NID_ctraction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct kcg_tag_M_voltage_T_TIU_Types_Pkg {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} M_voltage_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct kcg_tag_Passenger_door_control_info_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int door_control_info;
} Passenger_door_control_info_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_current_T */
typedef struct kcg_tag_M_current_T_TIU_Types_Pkg {
  kcg_bool no_restriction;
  kcg_int restriction;
} M_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct kcg_tag_Brake_pressure_value_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int pressure;
} Brake_pressure_value_T_TIU_Types_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct kcg_tag_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_DMI_Identifier_T_DMI_Types_Pkg DMI_Identifier;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg Cabin_Identifier;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg DMI_name;
  M_VERSION m_version;
} DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct kcg_tag_DMI_EVC_status_T_DMI_Types_Pkg {
  kcg_bool DMI_Active;
  kcg_bool DMI_Error;
  kcg_bool DMI_DriverIdValidated;
  kcg_bool DMI_LevelSelectedByDirver;
  kcg_bool DMI_TrainRunningNumberFirstValidation;
  kcg_bool DMI_TrainRunningNumberValidated;
  kcg_bool DMI_TrainDataValidated;
  kcg_bool DMI_StartReceived;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Identifier;
} DMI_EVC_status_T_DMI_Types_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct kcg_tag_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct kcg_tag_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct kcg_tag_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct kcg_tag_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct kcg_tag_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct kcg_tag_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct kcg_tag_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct kcg_tag_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct kcg_tag_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct kcg_tag_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct kcg_tag_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct kcg_tag_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct kcg_tag_OdometrySpeeds_T_Obu_BasicTypes_Pkg {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} OdometrySpeeds_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct kcg_tag_LocWithInAcc_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} LocWithInAcc_T_Obu_BasicTypes_Pkg;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct kcg_tag_infoFromLinking_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} infoFromLinking_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct kcg_tag_trainProperties_T_TrainPosition_Types_Pck {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} trainProperties_T_TrainPosition_Types_Pck;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct kcg_tag_ReportedBG_T_ProvidePositionReport_Pkg {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} ReportedBG_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef ReportedBG_T_ProvidePositionReport_Pkg ReportedBGList_T_ProvidePositionReport_Pkg[8];

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct kcg_tag_OdometryLocations_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} OdometryLocations_T_Obu_BasicTypes_Pkg;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct kcg_tag_speedSupervisionForDMI_T_DMI_Types_Pkg {
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
} speedSupervisionForDMI_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct kcg_tag_movementAuthorityForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} movementAuthorityForDMI_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct kcg_tag_MovementAuthoritySection_t_TrackAtlasTypes {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} MovementAuthoritySection_t_TrackAtlasTypes;

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef MovementAuthoritySection_t_TrackAtlasTypes MovementAuthoritySectionlist_t_TrackAtlasTypes[10];

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct kcg_tag_DP_or_OL_t_TrackAtlasTypes {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} DP_or_OL_t_TrackAtlasTypes;

/* TrackAtlasTypes::Endtimer_t */
typedef struct kcg_tag_Endtimer_t_TrackAtlasTypes {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} Endtimer_t_TrackAtlasTypes;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct kcg_tag_MovementAuthority_t_TrackAtlasTypes {
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
} MovementAuthority_t_TrackAtlasTypes;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct kcg_tag_StaticSpeedSection_t_TrackAtlasTypes {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} StaticSpeedSection_t_TrackAtlasTypes;

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef StaticSpeedSection_t_TrackAtlasTypes StaticSpeedProfile_t_TrackAtlasTypes[50];

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct kcg_tag_SDM_Commands_T_SDM_Types_Pkg {
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
} SDM_Commands_T_SDM_Types_Pkg;

/* TargetManagement_types::Target_T */
typedef struct kcg_tag_Target_T_TargetManagement_types {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} Target_T_TargetManagement_types;

/* xdebugSupport_Pkg::dataCollectionForLevelTransition_T */
typedef struct kcg_tag_dataCollectionForLevelTransition_T_xdebugSupport_Pkg {
  P41_LevelTransistionOrders_T_Packet_Types_Pkg p41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg p46;
  kcg_bool p12_received;
  kcg_bool p15_received;
  kcg_bool p21_received;
  kcg_bool p27_received;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} dataCollectionForLevelTransition_T_xdebugSupport_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef kcg_int Location_T_Obu_BasicTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct kcg_tag_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg {
  M_LEVEL level;
  M_POSITION position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
  kcg_bool immediateAck;
  Location_T_Obu_BasicTypes_Pkg AckLength;
} T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct kcg_tag_T_LevelTransition_Level_And_Mode_Types_Pkg {
  kcg_bool is_set;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg transition;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} T_LevelTransition_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_AnnouncedLevel */
typedef struct kcg_tag_T_AnnouncedLevel_Level_And_Mode_Types_Pkg {
  T_LevelTransition_Level_And_Mode_Types_Pkg LevelTransition;
  kcg_bool IsAvailableForUse;
} T_AnnouncedLevel_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef T_LevelTransition_Level_And_Mode_Types_Pkg T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg[7];

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Level */
typedef struct kcg_tag_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg {
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg level_transition_priority_table;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg conditionnalTransition;
  kcg_bool receivedL2L3MA_track;
  kcg_bool receivedL1MA_track;
} T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct kcg_tag_odometry_T_Obu_BasicTypes_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} odometry_T_Obu_BasicTypes_Pkg;

/* BG_Types_Pkg::BG_Header_T */
typedef struct kcg_tag_BG_Header_T_BG_Types_Pkg {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  odometry_T_Obu_BasicTypes_Pkg bgPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
  Q_NVLOCACC q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} BG_Header_T_BG_Types_Pkg;

/* BG_Types_Pkg::passedBG_T */
typedef struct kcg_tag_passedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} passedBG_T_BG_Types_Pkg;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct kcg_tag_centerOfBalisePosition_T_BG_Types_Pkg {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} centerOfBalisePosition_T_BG_Types_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct kcg_tag_Gradient_section_t_TrackAtlasTypes {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} Gradient_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::GradientProfile_t */
typedef Gradient_section_t_TrackAtlasTypes GradientProfile_t_TrackAtlasTypes[50];

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef kcg_int Speed_T_Obu_BasicTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct kcg_tag_T_Mode_Profile_Level_And_Mode_Types_Pkg {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} T_Mode_Profile_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef T_Mode_Profile_Level_And_Mode_Types_Pkg T_Mode_Profile_Table_Level_And_Mode_Types_Pkg[3];

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct kcg_tag_T_Reversing_Data_Level_And_Mode_Types_Pkg {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} T_Reversing_Data_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Mode */
typedef struct kcg_tag_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg {
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
} T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg;

/* DMI_Types_Pkg::NID_STM */
typedef kcg_int NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct kcg_tag_DMI_level_T_DMI_Types_Pkg {
  M_LEVEL level;
  NID_STM_DMI_Types_Pkg nid_stm;
} DMI_level_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_array_T */
typedef DMI_level_T_DMI_Types_Pkg DMI_level_array_T_DMI_Types_Pkg[32];

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct kcg_tag_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg {
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
} DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct kcg_tag_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

/* DMI_Types_Pkg::BCD */
typedef kcg_int BCD_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct kcg_tag_DMI_train_id_T_DMI_Types_Pkg {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} DMI_train_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct kcg_tag_DMI_train_length_T_DMI_Types_Pkg {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} DMI_train_length_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T */
typedef kcg_int DMI_TextMessage_ID_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct kcg_tag_DMI_TXT_MSG_status_T_DMI_Types_Pkg {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} DMI_TXT_MSG_status_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg DMI_TXT_MSGList_status_T_DMI_Types_Pkg[31];

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct kcg_tag_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct kcg_tag_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct kcg_tag_DMI_trackCondition_T_DMI_Types_Pkg {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} DMI_trackCondition_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct kcg_tag_DMI_LevelList_T_DMI_Types_Pkg {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} DMI_LevelList_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct kcg_tag_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct kcg_tag_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

/* DMI_Types_Pkg::M_BRAKEPERCT */
typedef kcg_int M_BRAKEPERCT_DMI_Types_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct kcg_tag_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NC_TRAIN trainCategory;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  M_BRAKEPERCT_DMI_Types_Pkg m_brakeperct;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxTrain;
  M_AXLELOADCAT m_axleLoad;
  M_AIRTIGHT m_airTight;
  M_LOADINGGAUGE m_loadingGauge;
} DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct kcg_tag_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct kcg_tag_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct kcg_tag_DMI_to_EVC_Message_T_API_DMI_Pkg {
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
} DMI_to_EVC_Message_T_API_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct kcg_tag_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  Icon_control_flag_T_DMI_Types_Pkg DMI_m_icon_control_flag;
  kcg_real DMI_m_icon_flashing_freq;
  Icon_group_T_DMI_Types_Pkg DMI_nid_icon_group;
  kcg_int DMI_nid_icon_rank;
  Area_group_T_DMI_Types_Pkg DMI_nid_area_group;
  kcg_int DMI_nid_area_rank;
  kcg_int DMI_nid_icon_identifier;
} DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

/* MoRC_Pck::NID_MESSAGE_Type */
typedef kcg_int NID_MESSAGE_Type_MoRC_Pck;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct kcg_tag_positionedBG_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
  kcg_bool missed;
} positionedBG_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct kcg_tag_trainPosition_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  Location_T_Obu_BasicTypes_Pkg estimatedFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeFrontEndPostion;
  positionedBG_T_TrainPosition_Types_Pck LRBG;
  positionedBG_T_TrainPosition_Types_Pck prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
  Location_T_Obu_BasicTypes_Pkg estimatedRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeRearEndPosition;
} trainPosition_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef positionedBG_T_TrainPosition_Types_Pck positionedBGs_T_TrainPosition_Types_Pck[41];

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct kcg_tag_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct kcg_tag_positionErrors_T_TrainPosition_Types_Pck {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  positionedBG_T_TrainPosition_Types_Pck bg;
} positionErrors_T_TrainPosition_Types_Pck;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct kcg_tag_T_Data_From_Localisation_Level_And_Mode_Types_Pkg {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  positionErrors_T_TrainPosition_Types_Pck PositionErrors;
  trainPosition_T_TrainPosition_Types_Pck Train_Position;
  Speed_T_Obu_BasicTypes_Pkg Train_Speed;
  kcg_bool Train_Standstill;
} T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct kcg_tag_trainPositionInfo_T_TrainPosition_Types_Pck {
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
} trainPositionInfo_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef positionedBG_T_TrainPosition_Types_Pck linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck[33];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct kcg_tag_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* BG_Types_Pkg::NID_ERRORBG */
typedef kcg_int NID_ERRORBG_BG_Types_Pkg;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct kcg_tag_MSG_Errors_T_Common_Types_Pkg {
  kcg_bool linkedBGError;
  kcg_bool unlinkedBGError;
  kcg_bool BG_versionIncompatible;
  kcg_bool radioSequenceError;
  kcg_bool tNvContactError;
  kcg_bool otherTimingError;
  kcg_bool radioMessageConsistencyError;
  NID_C nid_c;
  NID_ERRORBG_BG_Types_Pkg nid_errorbg;
} MSG_Errors_T_Common_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_F2_functions */
typedef struct kcg_tag_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg {
  MSG_Errors_T_Common_Types_Pkg Common_Errors;
  kcg_bool Failure_Occured;
  kcg_bool Continue_Shunting_Active;
  kcg_bool Stop_Shunting_Stored;
} T_Data_From_F2_functions_Level_And_Mode_Types_Pkg;

/* xdebugSupport_Pkg::probesBalises_T */
typedef struct kcg_tag_probesBalises_T_xdebugSupport_Pkg {
  kcg_bool isChanged;
  NID_BG bg_id;
  NID_C nid_c;
  MSG_Errors_T_Common_Types_Pkg errors;
} probesBalises_T_xdebugSupport_Pkg;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct kcg_tag_RBC_Id_T_Common_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} RBC_Id_T_Common_Types_Pkg;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct kcg_tag_API_TelegramHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_TelegramHeader_T_API_Msg_Pkg;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct kcg_tag_MetadataElement_T_Common_Types_Pkg {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} MetadataElement_T_Common_Types_Pkg;

/* Common_Types_Pkg::Metadata_T */
typedef MetadataElement_T_Common_Types_Pkg Metadata_T_Common_Types_Pkg[30];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef kcg_int CompressedPacketData_T_Common_Types_Pkg[500];

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct kcg_tag_CompressedPackets_T_Common_Types_Pkg {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} CompressedPackets_T_Common_Types_Pkg;

/* BG_Types_Pkg::Telegram_T */
typedef struct kcg_tag_Telegram_T_BG_Types_Pkg {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} Telegram_T_BG_Types_Pkg;

/* BG_Types_Pkg::TelegramArray_T */
typedef Telegram_T_BG_Types_Pkg TelegramArray_T_BG_Types_Pkg[8];

/* BG_Types_Pkg::BG_Message_T */
typedef struct kcg_tag_BG_Message_T_BG_Types_Pkg {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} BG_Message_T_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct kcg_tag_TelegramStore_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} TelegramStore_T_Receive_TrackSide_Msg_Pkg;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct kcg_tag_filterRelatedEvents_T_Common_Types_Pkg {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} filterRelatedEvents_T_Common_Types_Pkg;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct kcg_tag_Radio_TrackTrain_Header_T_Radio_Types_Pkg {
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
} Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct kcg_tag_radioManagementMessage_T_Common_Types_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} radioManagementMessage_T_Common_Types_Pkg;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct kcg_tag_RadioMessage_T_Radio_Types_Pkg {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} RadioMessage_T_Radio_Types_Pkg;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct kcg_tag_TrackSide_ForCheck_T_Common_Types_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} TrackSide_ForCheck_T_Common_Types_Pkg;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct kcg_tag_API_RadioMsgHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_RadioMsgHeader_T_API_Msg_Pkg;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct kcg_tag_API_TrackSideInput_T_API_Msg_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} API_TrackSideInput_T_API_Msg_Pkg;

/* TrainToTrack::Position_Report */
typedef struct kcg_tag_Position_Report_TrainToTrack {
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
typedef struct kcg_tag_PT0_PositionReport_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} PT0_PositionReport_T_Packet_TrainTypes_Pkg;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct kcg_tag_Position_Report_based_on_two_balise_groups_TrainToTrack {
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
} Position_Report_based_on_two_balise_groups_TrainToTrack;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct kcg_tag_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

/* SDM_Types_Pkg::Percentage_T */
typedef kcg_int Percentage_T_SDM_Types_Pkg;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct kcg_tag_extractTargetsMRSPACC_TargetManagement_pkg {
  Target_list_MRSP_real_T_TargetManagement_types targetList;
  kcg_int lastInsertedTargetIndex;
} extractTargetsMRSPACC_TargetManagement_pkg;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct kcg_tag_TargetIteratorAkku_TargetLimits_Pkg {
  L_internal_real_Type_SDM_Types_Pkg SBI2;
  kcg_int index;
  TargetType_T_TargetManagement_types ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_Pkg V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_Pkg V_ura;
  V_internal_real_Type_SDM_Types_Pkg V_P_MRDT_ebd;
  kcg_int V_P_MRDT_index;
} TargetIteratorAkku_TargetLimits_Pkg;

/* SDM_GradientAcceleration_Pkg::ACC */
typedef struct kcg_tag_ACC_SDM_GradientAcceleration_Pkg {
  L_internal_real_Type_SDM_Types_Pkg frontPos;
  kcg_int frontIndex;
  L_internal_real_Type_SDM_Types_Pkg rearPos;
  kcg_int rearIndex;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types compensatedGradientProfile;
} ACC_SDM_GradientAcceleration_Pkg;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct kcg_tag_BGCollector_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} BGCollector_T_Receive_TrackSide_Msg_Pkg;

/* TM::P046_sections_array_flat_T */
typedef kcg_int P046_sections_array_flat_T_TM[66];

/* TM::Array04 */
typedef kcg_int Array04_TM[4];

/* TM::Array05 */
typedef kcg_int Array05_TM[5];

/* TM::Array08 */
typedef kcg_int Array08_TM[8];

/* TM::Array24 */
typedef kcg_int Array24_TM[24];

/* TM::P005_sections_array_flat_T */
typedef kcg_int P005_sections_array_flat_T_TM[231];

/* ProvidePositionReport_Pkg::SystemTime_T */
typedef kcg_int SystemTime_T_ProvidePositionReport_Pkg;

/* TA_MRSP::SSP_target_t */
typedef kcg_int SSP_target_t_TA_MRSP;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_t_cat_t */
typedef SSP_t_section_t_TA_MRSP SSP_t_cat_t_TA_MRSP[33];

/* TA_MRSP::SSP_t_matrix_t */
typedef SSP_t_cat_t_TA_MRSP SSP_t_matrix_t_TA_MRSP[11];

/* TA_MRSP::SSP_t_indexed_trgt_t */
typedef struct kcg_tag_SSP_t_indexed_trgt_t_TA_MRSP {
  kcg_int Index;
  SSP_target_t_TA_MRSP Loc;
} SSP_t_indexed_trgt_t_TA_MRSP;

/* TA_MRSP::SSP_t_indexed_targets_list_t */
typedef SSP_t_indexed_trgt_t_TA_MRSP SSP_t_indexed_targets_list_t_TA_MRSP[11];

/* TA_MRSP::SSP_t_indexed_matrix_element */
typedef struct kcg_tag_SSP_t_indexed_matrix_element_TA_MRSP {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t_TA_MRSP Loc;
} SSP_t_indexed_matrix_element_TA_MRSP;

/* TA_MRSP::SSP_t_list_t */
typedef SSP_t_indexed_matrix_element_TA_MRSP SSP_t_list_t_TA_MRSP[363];

/* TA_MRSP::SSP_valid_section_t */
typedef struct kcg_tag_SSP_valid_section_t_TA_MRSP {
  kcg_bool found;
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} SSP_valid_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

/* TA_MRSP::SSP_section_t */
typedef struct kcg_tag_SSP_section_t_TA_MRSP {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} SSP_section_t_TA_MRSP;

/* TA_MRSP::SSP_cat_t */
typedef SSP_section_t_TA_MRSP SSP_cat_t_TA_MRSP[33];

/* TA_MRSP::SSP_matrix_t */
typedef SSP_cat_t_TA_MRSP SSP_matrix_t_TA_MRSP[11];

/* TA_MRSP::SSP_relevant_target_t */
typedef struct kcg_tag_SSP_relevant_target_t_TA_MRSP {
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} SSP_relevant_target_t_TA_MRSP;

/* TA_MRSP::SSP_Mark_ValidSSPsection */
typedef struct kcg_tag_SSP_Mark_ValidSSPsection_TA_MRSP {
  kcg_bool Found;
  kcg_int Index;
} SSP_Mark_ValidSSPsection_TA_MRSP;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct kcg_tag_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct kcg_tag_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct kcg_tag_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct kcg_tag_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg[41];

typedef kcg_bool array_bool_4[4];

typedef Target_real_T_TargetManagement_types array_76065[1];

typedef kcg_bool array_bool_113[113];

typedef kcg_real array_real_113[113];

typedef Target_real_T_TargetManagement_types array_76247[199];

typedef kcg_int array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct kcg_tag_sNID_RADIO_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} sNID_RADIO_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef sNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO_T_Packet_TrainTypes_Pkg[1];

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct kcg_tag_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef kcg_int array_int_7[7];

/* SDMConversionModelPkg::m_KvSteps_t */
typedef array_int_7 m_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_KvSteps_t */
typedef array_int_7 v_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::mv_Map_t */
typedef struct kcg_tag_mv_Map_t_SDMConversionModelPkg {
  m_KvSteps_t_SDMConversionModelPkg m;
  v_KvSteps_t_SDMConversionModelPkg v;
} mv_Map_t_SDMConversionModelPkg;

/* TM::Array07 */
typedef array_int_7 Array07_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef kcg_int array_int_3[3];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_3 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TIU_Types_Pkg::trainData_T */
typedef struct kcg_tag_trainData_T_TIU_Types_Pkg {
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
} trainData_T_TIU_Types_Pkg;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct kcg_tag_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg {
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
} PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

/* Common_Types_Pkg::outPackets_T */
typedef struct kcg_tag_outPackets_T_Common_Types_Pkg {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} outPackets_T_Common_Types_Pkg;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct kcg_tag_Radio_TrainTrack_Message_T_Radio_Types_Pkg {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} Radio_TrainTrack_Message_T_Radio_Types_Pkg;

/* API_RadioCommunication_Pkg::API_EuroRadioOutput_T */
typedef struct kcg_tag_API_EuroRadioOutput_T_API_RadioCommunication_Pkg {
  Radio_TrainTrack_Message_T_Radio_Types_Pkg firstOutput;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg secondOutput;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg thirdOutput;
  RadioManagement_T_API_RadioCommunication_Pkg radioEVCtoUnit;
} API_EuroRadioOutput_T_API_RadioCommunication_Pkg;

/* TM::Array03 */
typedef array_int_3 Array03_TM;

typedef kcg_real array_real_3[3];

/* TargetLimits_Pkg::TractionDeltaTriple */
typedef array_real_3 TractionDeltaTriple_TargetLimits_Pkg;

/* SDMConversionModelPkg::coeff_BrakeBasic_t */
typedef array_real_3 coeff_BrakeBasic_t_SDMConversionModelPkg;

typedef ErrorMessage_T_ProvidePositionReport_Pkg array_76498[9];

typedef positionedBG_T_TrainPosition_Types_Pck array_76502[40];

typedef struct kcg_tag_struct_76527 {
  kcg_bool valid;
  kcg_int l_section;
  Q_SECTIONTIMER q_sectiontimer;
  kcg_int t_sectiontimer;
  kcg_int d_sectiontimerstoploc;
} struct_76527;

/* TM::P015_section_enum_T */
typedef struct_76527 P015_section_enum_T_TM;

/* TM::P015_OBU_sectionlist_enum_T */
typedef P015_section_enum_T_TM P015_OBU_sectionlist_enum_T_TM[32];

/* TM::P015_OBU_T */
typedef struct kcg_tag_P015_OBU_T_TM {
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
} P015_OBU_T_TM;

/* TM::P012_OBU_T */
typedef struct kcg_tag_P012_OBU_T_TM {
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
} P012_OBU_T_TM;

/* TM::P012_section_enum_T */
typedef struct_76527 P012_section_enum_T_TM;

typedef struct kcg_tag_struct_76545 {
  kcg_bool valid;
  kcg_int Loc_Abs;
  kcg_int Loc_LRBG;
  kcg_int MRS;
} struct_76545;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct_76545 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef DMI_speedProfileElement_T_DMI_Types_Pkg DMI_SpeedProfileArray_T_DMI_Types_Pkg[32];

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct kcg_tag_DMI_speedProfile_T_DMI_Types_Pkg {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} DMI_speedProfile_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct_76545 MRSP_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::MRSP_Profile_t */
typedef MRSP_section_t_TrackAtlasTypes MRSP_Profile_t_TrackAtlasTypes[200];

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct kcg_tag_DataForSupervision_nextGen_t_TrackAtlasTypes {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct kcg_tag_struct_76606 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_startreverse;
  kcg_int l_reversearea;
} struct_76606;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct_76606 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

/* TM::P138_OBU_T */
typedef struct_76606 P138_OBU_T_TM;

typedef struct kcg_tag_struct_76615 {
  kcg_int number;
  kcg_int dig1;
  kcg_int dig2;
  kcg_int dig3;
} struct_76615;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct_76615 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct_76615 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct_76615 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct_76615 DMI_loadingGauge_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct kcg_tag_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_train_id_T_DMI_Types_Pkg trainID;
  DMI_train_length_T_DMI_Types_Pkg trainLength;
  DMI_brakeModel_id_T_DMI_Types_Pkg brakeModel;
  DMI_vMax_id_T_DMI_Types_Pkg vmax;
  M_AXLELOADCAT mAxleLoad;
  DMI_airtightSystem_T_DMI_Types_Pkg airTightSystem;
  DMI_loadingGauge_T_DMI_Types_Pkg mLoadingGauge;
} DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_bool array_bool_30[30];

typedef struct kcg_tag_struct_76665 {
  kcg_int idx;
  array_bool_4 items;
} struct_76665;

typedef struct kcg_tag_struct_76674 {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct_76674;

/* TM::P003_OBU_l_section_enum_T */
typedef struct_76674 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct_76674 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct_76674 array_76646[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array_76646 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array_76646 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array_76681[17];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array_76681 ModeDecisionTableType_DataDictionary_Pkg[256];

typedef kcg_real array_real_100[100];

/* CalcBrakingCurves_types::ASafeDistanceDefinition_T */
typedef array_real_100 ASafeDistanceDefinition_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafeRow_T */
typedef array_real_100 ASafeRow_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafe_Data_T */
typedef ASafeRow_T_CalcBrakingCurves_types ASafe_Data_T_CalcBrakingCurves_types[14];

/* CalcBrakingCurves_types::ASafe_T */
typedef struct kcg_tag_ASafe_T_CalcBrakingCurves_types {
  ASafeDistanceDefinition_T_CalcBrakingCurves_types distance_definition;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types speed_definition;
  ASafe_Data_T_CalcBrakingCurves_types data;
} ASafe_T_CalcBrakingCurves_types;

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_8[8];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_13[13];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_1[1];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_6[6];

typedef kcg_int array_int_221[221];

typedef kcg_bool array_bool_256[256];

/* CheckEuroradioMessage::MetadataTruthtable_T1 */
typedef array_bool_256 MetadataTruthtable_T1_CheckEuroradioMessage[46];

typedef struct kcg_tag_struct_76792 {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct_76792;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct_76792 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct_76792 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef kcg_int array_int_6[6];

/* SDMConversionModelPkg::a_BrakeSteps_t */
typedef array_int_6 a_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_BrakeSteps_t */
typedef array_int_6 v_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::av_Map_t */
typedef struct kcg_tag_av_Map_t_SDMConversionModelPkg {
  a_BrakeSteps_t_SDMConversionModelPkg a;
  v_BrakeSteps_t_SDMConversionModelPkg v;
} av_Map_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::a_Brake_t */
typedef struct kcg_tag_a_Brake_t_SDMConversionModelPkg {
  av_Map_t_SDMConversionModelPkg emergency;
  av_Map_t_SDMConversionModelPkg service;
} a_Brake_t_SDMConversionModelPkg;

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef V_internal_real_Type_SDM_Types_Pkg array_real_6[6];

typedef struct kcg_tag_struct_76853 {
  kcg_int now;
  kcg_int distance;
} struct_76853;

/* TIU_Types_Pkg::D_test_traction_T */
typedef struct_76853 D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct kcg_tag_Change_traction_system_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} Change_traction_system_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct_76853 D_test_distance_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_current_T */
typedef struct_76853 D_test_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct kcg_tag_Change_of_allowed_current_consumption_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct kcg_tag_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct kcg_tag_TIU_Output_msg_API_TIU_Pkg {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} TIU_Output_msg_API_TIU_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T */
typedef struct_76853 D_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::L_test_trackcond_T */
typedef struct_76853 L_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct kcg_tag_nothing_to_resume_profile_follow_T_TIU_Types_Pkg {
  D_test_trackcond_T_TIU_Types_Pkg d_test_trackcond;
  L_test_trackcond_T_TIU_Types_Pkg l_test_trackcond;
  M_trackcond_T_TIU_Types_Pkg m_trackcond;
} nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackinit_T */
typedef struct_76853 D_test_trackinit_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct kcg_tag_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg {
  kcg_bool valid;
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct kcg_tag_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg {
  Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct kcg_tag_TIU_Input_msg_API_TIU_Pkg {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg info;
} TIU_Input_msg_API_TIU_Pkg;

typedef struct kcg_tag_struct_76907 {
  kcg_bool valid;
  kcg_int begin_section;
  kcg_int end_section;
  kcg_int gradient;
} struct_76907;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct_76907 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef DMI_gradientProfileElement_T_DMI_Types_Pkg DMI_gradientProfileArray_T_DMI_Types_Pkg[32];

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct kcg_tag_DMI_gradientProfile_T_DMI_Types_Pkg {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} DMI_gradientProfile_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct kcg_tag_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct kcg_tag_EVC_to_DMI_Message_T_API_DMI_Pkg {
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
} EVC_to_DMI_Message_T_API_DMI_Pkg;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct_76907 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes GradientProfile_for_DMI_t_TrackAtlasTypes[50];

/* TrackAtlasTypes::DataForDMI_t */
typedef struct kcg_tag_DataForDMI_t_TrackAtlasTypes {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} DataForDMI_t_TrackAtlasTypes;

typedef kcg_int array_int_2[2];

typedef struct kcg_tag_struct_76928 {
  kcg_bool valid;
  Q_DIR q_dir;
} struct_76928;

/* Packet_Types_Pkg::P135_StopShuntingOnDeskOpening_T */
typedef struct_76928 P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg;

/* TM::P135_OBU_T */
typedef struct_76928 P135_OBU_T_TM;

typedef array_int_6 array_int_6_221[221];

typedef struct kcg_tag_struct_76993 {
  kcg_bool valid;
  kcg_int nid_c;
} struct_76993;

/* Packet_Types_Pkg::nidC_T */
typedef struct_76993 nidC_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nidCArray_T */
typedef nidC_T_Packet_Types_Pkg nidCArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct kcg_tag_P3_NationalValues_T_Packet_Types_Pkg {
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
} P3_NationalValues_T_Packet_Types_Pkg;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct_76993 P003_OBU_nid_c_section_enum_T_TM;

typedef P003_OBU_nid_c_section_enum_T_TM array_76336[1];

/* TM_baseline2::P003V1_section_enum_T */
typedef struct_76993 P003V1_section_enum_T_TM_baseline2;

typedef struct_76993 array_76114[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array_76114 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array_76114 P003V1_sectionlist_enum_T_TM_baseline2;

/* TM_baseline2::P003V1_OBU_T */
typedef struct kcg_tag_P003V1_OBU_T_TM_baseline2 {
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
} P003V1_OBU_T_TM_baseline2;

typedef struct_76993 array_76302[31];

typedef struct_76792 array_77008[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array_77008 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array_77008 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct kcg_tag_struct_77034 {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct_77034;

/* TM::P003_OBU_n_section_enum_T */
typedef struct_77034 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct_77034 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct_77034 array_77004[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array_77004 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array_77004 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store array_77095[8];

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct kcg_tag_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store {
  kcg_int nfree;
  array_77095 items;
} NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef kcg_int array_int_13[13];

/* SDMConversionModelPkg::a_MergedSteps_t */
typedef array_int_13 a_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_MergedSteps_t */
typedef array_int_13 v_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::av_MergedMap_t */
typedef struct kcg_tag_av_MergedMap_t_SDMConversionModelPkg {
  a_MergedSteps_t_SDMConversionModelPkg a;
  v_MergedSteps_t_SDMConversionModelPkg v;
} av_MergedMap_t_SDMConversionModelPkg;

typedef V_internal_real_Type_SDM_Types_Pkg array_real_13[13];

typedef struct kcg_tag_struct_77209 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_reverse;
  kcg_int v_reverse;
} struct_77209;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct_77209 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct kcg_tag_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg {
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
} T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct kcg_tag_DataForModeAndLevel_t_TrackAtlasTypes {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} DataForModeAndLevel_t_TrackAtlasTypes;

/* TM::P139_OBU_T */
typedef struct_77209 P139_OBU_T_TM;

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array_77257[5];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array_77257 LevelDecisionTableType_DataDictionary_Pkg[256];

typedef positionedBG_T_TrainPosition_Types_Pck array_77261[1];

typedef kcg_bool array_bool_1[1];

typedef kcg_int array_int_1[1];

typedef kcg_real array_real_1[1];

typedef kcg_real array_real_114[114];

/* CalcBrakingCurves_types::ParabolaCurveDistances_T */
typedef array_real_114 ParabolaCurveDistances_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveSpeeds_T */
typedef array_real_114 ParabolaCurveSpeeds_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveAccelerations_T */
typedef array_real_114 ParabolaCurveAccelerations_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct kcg_tag_ParabolaCurve_T_CalcBrakingCurves_types {
  ParabolaCurveDistances_T_CalcBrakingCurves_types distances;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types speeds;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types accelerations;
  ParabolaCurveValid_T_CalcBrakingCurves_types valid;
} ParabolaCurve_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct kcg_tag_BCAccumulator_type_CalcBrakingCurves_Pkg {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} BCAccumulator_type_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef ParabolaCurve_T_CalcBrakingCurves_types ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types[200];

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct kcg_tag_CurveCollection_T_CalcBrakingCurves_types {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_LoA_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} CurveCollection_T_CalcBrakingCurves_types;

typedef kcg_int array_int_32[32];

/* SDMConversionModelPkg::LKrIntLookUp_t */
typedef array_int_32 LKrIntLookUp_t_SDMConversionModelPkg;

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef struct kcg_tag_struct_78479 {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array_77008 n_iter_k_m_list;
} struct_78479;

/* TM::P003_OBU_k_section_enum_T */
typedef struct_78479 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct_78479 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct_78479 array_76298[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array_76298 P003_OBU_k_sectionlist_enum_T_TM;

/* TM::P003_OBU_T */
typedef struct kcg_tag_P003_OBU_T_TM {
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
} P003_OBU_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array_76298 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

/* TM_baseline2::P203V1_OBU_T */
typedef struct kcg_tag_P203V1_OBU_T_TM_baseline2 {
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
} P203V1_OBU_T_TM_baseline2;

typedef struct kcg_tag_struct_78522 {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct_78522;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct_78522 ReceivedMessage_T_Common_Types_Pkg;

typedef ReceivedMessage_T_Common_Types_Pkg array_76969[3];

/* RCM_MsgTypes_Pkg::msgFromTrack_T */
typedef struct_78522 msgFromTrack_T_RCM_MsgTypes_Pkg;

typedef positionedBG_T_TrainPosition_Types_Pck array_78651[8];

typedef kcg_bool array_bool_8[8];

typedef V_internal_real_Type_SDM_Types_Pkg array_real_8[8];

#ifndef kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg
#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P21_GradientProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Type_I_train_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes
#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForSupervision_nextGen_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes */

#ifndef kcg_copy_P041_OBU_T_TM
#define kcg_copy_P041_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_OBU_T_TM)))
#endif /* kcg_copy_P041_OBU_T_TM */

#ifndef kcg_copy_P027V1_section_enum_T_TM_baseline2
#define kcg_copy_P027V1_section_enum_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_enum_T_TM_baseline2 */

#ifndef kcg_copy_P005_OBU_T_TM
#define kcg_copy_P005_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_OBU_T_TM)))
#endif /* kcg_copy_P005_OBU_T_TM */

#ifndef kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_enum_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg)))
#endif /* kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifndef kcg_copy_Endtimer_t_TrackAtlasTypes
#define kcg_copy_Endtimer_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Endtimer_t_TrackAtlasTypes)))
#endif /* kcg_copy_Endtimer_t_TrackAtlasTypes */

#ifndef kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types
#define kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (A_gradient_element_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_Driver2MAR_T_MA_Request
#define kcg_copy_Driver2MAR_T_MA_Request(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Driver2MAR_T_MA_Request)))
#endif /* kcg_copy_Driver2MAR_T_MA_Request */

#ifndef kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg
#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (centerOfBalisePosition_T_BG_Types_Pkg)))
#endif /* kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg */

#ifndef kcg_copy_a_Brake_t_SDMConversionModelPkg
#define kcg_copy_a_Brake_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (a_Brake_t_SDMConversionModelPkg)))
#endif /* kcg_copy_a_Brake_t_SDMConversionModelPkg */

#ifndef kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrainTrack_Message_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg */

#ifndef kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_mv_Map_t_SDMConversionModelPkg
#define kcg_copy_mv_Map_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mv_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_mv_Map_t_SDMConversionModelPkg */

#ifndef kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P45_RadioNetworkRegistration_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifndef kcg_copy_MetadataElement_T_Common_Types_Pkg
#define kcg_copy_MetadataElement_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MetadataElement_T_Common_Types_Pkg)))
#endif /* kcg_copy_MetadataElement_T_Common_Types_Pkg */

#ifndef kcg_copy_SSP_relevant_target_t_TA_MRSP
#define kcg_copy_SSP_relevant_target_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_relevant_target_t_TA_MRSP)))
#endif /* kcg_copy_SSP_relevant_target_t_TA_MRSP */

#ifndef kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Localisation_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg
#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_DriverRequest_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg
#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P41_LevelTransitionOrder_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg */

#ifndef kcg_copy_T_trac_t_TargetLimits_Pkg
#define kcg_copy_T_trac_t_TargetLimits_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_trac_t_TargetLimits_Pkg)))
#endif /* kcg_copy_T_trac_t_TargetLimits_Pkg */

#ifndef kcg_copy_TrainLocations_real_T_SDM_Types_Pkg
#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainLocations_real_T_SDM_Types_Pkg)))
#endif /* kcg_copy_TrainLocations_real_T_SDM_Types_Pkg */

#ifndef kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg
#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_DriverAck_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg */

#ifndef kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg
#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_commandStatus_T_TIU_Types_Pkg)))
#endif /* kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg
#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_To_Modes_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg */

#ifndef kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP
#define kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_Mark_ValidSSPsection_TA_MRSP)))
#endif /* kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP */

#ifndef kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg)))
#endif /* kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifndef kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_Target_real_T_TargetManagement_types
#define kcg_copy_Target_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Target_real_T_TargetManagement_types)))
#endif /* kcg_copy_Target_real_T_TargetManagement_types */

#ifndef kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_To_BG_Management_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_LevelTansitionInfo_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_BG_Message_T_BG_Types_Pkg
#define kcg_copy_BG_Message_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Message_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Message_T_BG_Types_Pkg */

#ifndef kcg_copy_Telegram_T_BG_Types_Pkg
#define kcg_copy_Telegram_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Telegram_T_BG_Types_Pkg)))
#endif /* kcg_copy_Telegram_T_BG_Types_Pkg */

#ifndef kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg)))
#endif /* kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */

#ifndef kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_Brake_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_ParabolaArc_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ParabolaArc_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaArc_T_CalcBrakingCurves_types */

#ifndef kcg_copy_DMI_train_length_T_DMI_Types_Pkg
#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_train_length_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_train_length_T_DMI_Types_Pkg */

#ifndef kcg_copy_API_EuroRadioOutput_T_API_RadioCommunication_Pkg
#define kcg_copy_API_EuroRadioOutput_T_API_RadioCommunication_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_EuroRadioOutput_T_API_RadioCommunication_Pkg)))
#endif /* kcg_copy_API_EuroRadioOutput_T_API_RadioCommunication_Pkg */

#ifndef kcg_copy_TargetCollection_T_TargetManagement_types
#define kcg_copy_TargetCollection_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TargetCollection_T_TargetManagement_types)))
#endif /* kcg_copy_TargetCollection_T_TargetManagement_types */

#ifndef kcg_copy_probesBalises_T_xdebugSupport_Pkg
#define kcg_copy_probesBalises_T_xdebugSupport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (probesBalises_T_xdebugSupport_Pkg)))
#endif /* kcg_copy_probesBalises_T_xdebugSupport_Pkg */

#ifndef kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg
#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nationValuesForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2
#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_body_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 */

#ifndef kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_Target_T_TargetManagement_types
#define kcg_copy_Target_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Target_T_TargetManagement_types)))
#endif /* kcg_copy_Target_T_TargetManagement_types */

#ifndef kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
#define kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_AcknoledgementRequest_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_passedBG_T_BG_Types_Pkg
#define kcg_copy_passedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (passedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_passedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_trainData_Events_T_trainData_Types_pkg
#define kcg_copy_trainData_Events_T_trainData_Types_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_Events_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainData_Events_T_trainData_Types_pkg */

#ifndef kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_struct_76527
#define kcg_copy_struct_76527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76527)))
#endif /* kcg_copy_struct_76527 */

#ifndef kcg_copy_trainDataStatus_T_trainData_Types_pkg
#define kcg_copy_trainDataStatus_T_trainData_Types_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainDataStatus_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainDataStatus_T_trainData_Types_pkg */

#ifndef kcg_copy_struct_76545
#define kcg_copy_struct_76545(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76545)))
#endif /* kcg_copy_struct_76545 */

#ifndef kcg_copy_DP_or_OL_t_TrackAtlasTypes
#define kcg_copy_DP_or_OL_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DP_or_OL_t_TrackAtlasTypes)))
#endif /* kcg_copy_DP_or_OL_t_TrackAtlasTypes */

#ifndef kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */

#ifndef kcg_copy_Diff_T_Packet_Types_Pkg
#define kcg_copy_Diff_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Diff_T_Packet_Types_Pkg)))
#endif /* kcg_copy_Diff_T_Packet_Types_Pkg */

#ifndef kcg_copy_av_MergedMap_t_SDMConversionModelPkg
#define kcg_copy_av_MergedMap_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (av_MergedMap_t_SDMConversionModelPkg)))
#endif /* kcg_copy_av_MergedMap_t_SDMConversionModelPkg */

#ifndef kcg_copy_CompressedPackets_T_Common_Types_Pkg
#define kcg_copy_CompressedPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types
#define kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Gradient_section_real_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_mobileSWCmd_Type_MoRC_Pck
#define kcg_copy_mobileSWCmd_Type_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileSWCmd_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileSWCmd_Type_MoRC_Pck */

#ifndef kcg_copy_struct_76606
#define kcg_copy_struct_76606(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76606)))
#endif /* kcg_copy_struct_76606 */

#ifndef kcg_copy_struct_76615
#define kcg_copy_struct_76615(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76615)))
#endif /* kcg_copy_struct_76615 */

#ifndef kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_inhibition_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_struct_76665
#define kcg_copy_struct_76665(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76665)))
#endif /* kcg_copy_struct_76665 */

#ifndef kcg_copy_struct_76674
#define kcg_copy_struct_76674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76674)))
#endif /* kcg_copy_struct_76674 */

#ifndef kcg_copy_CurveCollection_T_CalcBrakingCurves_types
#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CurveCollection_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_CurveCollection_T_CalcBrakingCurves_types */

#ifndef kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_trackConditionElement_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg */

#ifndef kcg_copy_SSP_section_t_TA_MRSP
#define kcg_copy_SSP_section_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_section_t_TA_MRSP)))
#endif /* kcg_copy_SSP_section_t_TA_MRSP */

#ifndef kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg
#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sTractionIdentity_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg
#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioManagement_T_API_RadioCommunication_Pkg)))
#endif /* kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg */

#ifndef kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
#define kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_AnnouncedLevel_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_STM_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_mobileSWStatus_Type_MoRC_Pck
#define kcg_copy_mobileSWStatus_Type_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileSWStatus_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileSWStatus_Type_MoRC_Pck */

#ifndef kcg_copy_trainData_internal_t_SDM_Types_Pkg
#define kcg_copy_trainData_internal_t_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_internal_t_SDM_Types_Pkg)))
#endif /* kcg_copy_trainData_internal_t_SDM_Types_Pkg */

#ifndef kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg
#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (extractTargetsMRSPACC_TargetManagement_pkg)))
#endif /* kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg */

#ifndef kcg_copy_P041_section_enum_T_TM
#define kcg_copy_P041_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_enum_T_TM)))
#endif /* kcg_copy_P041_section_enum_T_TM */

#ifndef kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */

#ifndef kcg_copy_struct_76792
#define kcg_copy_struct_76792(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76792)))
#endif /* kcg_copy_struct_76792 */

#ifndef kcg_copy_nvkvint_T_Packet_Types_Pkg
#define kcg_copy_nvkvint_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvint_T_Packet_Types_Pkg */

#ifndef kcg_copy_P046_OBU_T_TM
#define kcg_copy_P046_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_OBU_T_TM)))
#endif /* kcg_copy_P046_OBU_T_TM */

#ifndef kcg_copy_P027V1_OBU_T_TM_baseline2
#define kcg_copy_P027V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_bec_t_TargetLimits_Pkg
#define kcg_copy_bec_t_TargetLimits_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (bec_t_TargetLimits_Pkg)))
#endif /* kcg_copy_bec_t_TargetLimits_Pkg */

#ifndef kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg)))
#endif /* kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifndef kcg_copy_mobileHWStatus_Type_MoRC_Pck
#define kcg_copy_mobileHWStatus_Type_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileHWStatus_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileHWStatus_Type_MoRC_Pck */

#ifndef kcg_copy_struct_76853
#define kcg_copy_struct_76853(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76853)))
#endif /* kcg_copy_struct_76853 */

#ifndef kcg_copy_Change_traction_system_T_TIU_Types_Pkg
#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Change_traction_system_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Change_traction_system_T_TIU_Types_Pkg */

#ifndef kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Change_of_allowed_current_consumption_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifndef kcg_copy_radioNetWorkIDs_T_MoRC_Pck
#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (radioNetWorkIDs_T_MoRC_Pck)))
#endif /* kcg_copy_radioNetWorkIDs_T_MoRC_Pck */

#ifndef kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Level_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramStore_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg
#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ReportedBG_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_struct_76907
#define kcg_copy_struct_76907(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76907)))
#endif /* kcg_copy_struct_76907 */

#ifndef kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_struct_76928
#define kcg_copy_struct_76928(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76928)))
#endif /* kcg_copy_struct_76928 */

#ifndef kcg_copy_P046_section_enum_T_TM
#define kcg_copy_P046_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_section_enum_T_TM)))
#endif /* kcg_copy_P046_section_enum_T_TM */

#ifndef kcg_copy_Isolation_Status_T_TIU_Types_Pkg
#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Isolation_Status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Isolation_Status_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg
#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_speedProfile_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg
#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_gradientProfile_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_trackCondition_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_LevelList_T_DMI_Types_Pkg
#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_LevelList_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_LevelList_T_DMI_Types_Pkg */

#ifndef kcg_copy_MRSP_internal_section_T_TargetManagement_types
#define kcg_copy_MRSP_internal_section_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MRSP_internal_section_T_TargetManagement_types)))
#endif /* kcg_copy_MRSP_internal_section_T_TargetManagement_types */

#ifndef kcg_copy_av_Map_t_SDMConversionModelPkg
#define kcg_copy_av_Map_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (av_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_av_Map_t_SDMConversionModelPkg */

#ifndef kcg_copy_struct_76993
#define kcg_copy_struct_76993(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_76993)))
#endif /* kcg_copy_struct_76993 */

#ifndef kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg
#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ErrorMessage_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP
#define kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_t_indexed_matrix_element_TA_MRSP)))
#endif /* kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP */

#ifndef kcg_copy_SSP_T_Packet_Types_Pkg
#define kcg_copy_SSP_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSP_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkvintset_T_Packet_Types_Pkg
#define kcg_copy_nvkvintset_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvintset_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintset_T_Packet_Types_Pkg */

#ifndef kcg_copy_struct_77034
#define kcg_copy_struct_77034(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_77034)))
#endif /* kcg_copy_struct_77034 */

#ifndef kcg_copy_t_Brake_t_SDMModelPkg
#define kcg_copy_t_Brake_t_SDMModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (t_Brake_t_SDMModelPkg)))
#endif /* kcg_copy_t_Brake_t_SDMModelPkg */

#ifndef kcg_copy_M_current_T_TIU_Types_Pkg
#define kcg_copy_M_current_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_current_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_current_T_TIU_Types_Pkg */

#ifndef kcg_copy_TIU_Output_msg_API_TIU_Pkg
#define kcg_copy_TIU_Output_msg_API_TIU_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Output_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Output_msg_API_TIU_Pkg */

#ifndef kcg_copy_TIU_Input_msg_API_TIU_Pkg
#define kcg_copy_TIU_Input_msg_API_TIU_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Input_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Input_msg_API_TIU_Pkg */

#ifndef kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT0_PositionReport_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg
#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Passenger_door_control_info_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck
#define kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (safeRadioConnectionStatusValid_Type_MoRC_Pck)))
#endif /* kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck */

#ifndef kcg_copy_ASafe_T_CalcBrakingCurves_types
#define kcg_copy_ASafe_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ASafe_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafe_T_CalcBrakingCurves_types */

#ifndef kcg_copy_P021_OBU_T_TM
#define kcg_copy_P021_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_OBU_T_TM)))
#endif /* kcg_copy_P021_OBU_T_TM */

#ifndef kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_SSP_valid_section_t_TA_MRSP
#define kcg_copy_SSP_valid_section_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_valid_section_t_TA_MRSP)))
#endif /* kcg_copy_SSP_valid_section_t_TA_MRSP */

#ifndef kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Reversing_Data_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P021_section_enum_T_TM
#define kcg_copy_P021_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_enum_T_TM)))
#endif /* kcg_copy_P021_section_enum_T_TM */

#ifndef kcg_copy_IterPacket58_T_Packet_Types_Pkg
#define kcg_copy_IterPacket58_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (IterPacket58_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58_T_Packet_Types_Pkg */

#ifndef kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg
#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TSM_revokeCond_T_SDM_Commands_Pkg)))
#endif /* kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifndef kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ParabolaCurve_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types */

#ifndef kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg
#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (movementAuthorityForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes
#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForModeAndLevel_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes */

#ifndef kcg_copy_struct_77209
#define kcg_copy_struct_77209(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_77209)))
#endif /* kcg_copy_struct_77209 */

#ifndef kcg_copy_Brake_status_T_TIU_Types_Pkg
#define kcg_copy_Brake_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes
#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MovementAuthoritySection_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes */

#ifndef kcg_copy_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg
#define kcg_copy_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg)))
#endif /* kcg_copy_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg */

#ifndef kcg_copy_DMI_level_T_DMI_Types_Pkg
#define kcg_copy_DMI_level_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_level_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_T_DMI_Types_Pkg */

#ifndef kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Mode_Level_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P137_StopIfInStaffResponsible_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */

#ifndef kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Mode_Profile_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nothing_to_resume_profile_follow_T_TIU_Types_Pkg)))
#endif /* kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifndef kcg_copy_EOA_real_T_TargetManagement_types
#define kcg_copy_EOA_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (EOA_real_T_TargetManagement_types)))
#endif /* kcg_copy_EOA_real_T_TargetManagement_types */

#ifndef kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_trainData_Trigger_T_trainData_Types_pkg
#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_Trigger_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainData_Trigger_T_trainData_Types_pkg */

#ifndef kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_F2_functions_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P058_section_enum_T_TM
#define kcg_copy_P058_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_section_enum_T_TM)))
#endif /* kcg_copy_P058_section_enum_T_TM */

#ifndef kcg_copy_ACC_SDM_GradientAcceleration_Pkg
#define kcg_copy_ACC_SDM_GradientAcceleration_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ACC_SDM_GradientAcceleration_Pkg)))
#endif /* kcg_copy_ACC_SDM_GradientAcceleration_Pkg */

#ifndef kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg
#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BCAccumulator_type_CalcBrakingCurves_Pkg)))
#endif /* kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg */

#ifndef kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg
#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrackSide_ForCheck_T_Common_Types_Pkg)))
#endif /* kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifndef kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg
#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_RadioMsgHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometrySpeeds_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_Gradient_section_t_TrackAtlasTypes
#define kcg_copy_Gradient_section_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Gradient_section_t_TrackAtlasTypes)))
#endif /* kcg_copy_Gradient_section_t_TrackAtlasTypes */

#ifndef kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometryLocations_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg
#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (dmiOutputs_T_manage_DMI_Output_Pkg)))
#endif /* kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifndef kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_DMI_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_obuEventsAndPhases_T_MoRC_Pck
#define kcg_copy_obuEventsAndPhases_T_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (obuEventsAndPhases_T_MoRC_Pck)))
#endif /* kcg_copy_obuEventsAndPhases_T_MoRC_Pck */

#ifndef kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg
#define kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg)))
#endif /* kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg */

#ifndef kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg
#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (EVC_to_DMI_Message_T_API_DMI_Pkg)))
#endif /* kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg */

#ifndef kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg
#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Available_Menu_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg */

#ifndef kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg
#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TSM_triggerCond_T_SDM_Commands_Pkg)))
#endif /* kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg */

#ifndef kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg
#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (speedSupervisionForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_Speeds_T_SDM_Types_Pkg
#define kcg_copy_Speeds_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Speeds_T_SDM_Types_Pkg)))
#endif /* kcg_copy_Speeds_T_SDM_Types_Pkg */

#ifndef kcg_copy_SDM_Locations_T_SDM_Types_Pkg
#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Locations_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Locations_T_SDM_Types_Pkg */

#ifndef kcg_copy_MA_section_real_T_TargetManagement_types
#define kcg_copy_MA_section_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MA_section_real_T_TargetManagement_types)))
#endif /* kcg_copy_MA_section_real_T_TargetManagement_types */

#ifndef kcg_copy_SDM_Commands_T_SDM_Types_Pkg
#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Commands_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Commands_T_SDM_Types_Pkg */

#ifndef kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg
#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_to_EVC_Message_T_API_DMI_Pkg)))
#endif /* kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg */

#ifndef kcg_copy_TelegramHeader_T_BG_Types_Pkg
#define kcg_copy_TelegramHeader_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeader_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeader_T_BG_Types_Pkg */

#ifndef kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg
#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P58_PositionReportParameters_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg */

#ifndef kcg_copy_trainData_T_TIU_Types_Pkg
#define kcg_copy_trainData_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_T_TIU_Types_Pkg)))
#endif /* kcg_copy_trainData_T_TIU_Types_Pkg */

#ifndef kcg_copy_P003_OBU_T_TM
#define kcg_copy_P003_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_OBU_T_TM)))
#endif /* kcg_copy_P003_OBU_T_TM */

#ifndef kcg_copy_MovementAuthority_t_TrackAtlasTypes
#define kcg_copy_MovementAuthority_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MovementAuthority_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthority_t_TrackAtlasTypes */

#ifndef kcg_copy_P003V1_OBU_T_TM_baseline2
#define kcg_copy_P003V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P003V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P012_OBU_T_TM
#define kcg_copy_P012_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P012_OBU_T_TM)))
#endif /* kcg_copy_P012_OBU_T_TM */

#ifndef kcg_copy_P015_OBU_T_TM
#define kcg_copy_P015_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_OBU_T_TM)))
#endif /* kcg_copy_P015_OBU_T_TM */

#ifndef kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg
#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P15_Level23MovementAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg
#define kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P12_Level1MovementAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_Position_Report_TrainToTrack
#define kcg_copy_Position_Report_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_TrainToTrack)))
#endif /* kcg_copy_Position_Report_TrainToTrack */

#ifndef kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack
#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_based_on_two_balise_groups_TrainToTrack)))
#endif /* kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifndef kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_trainPosition_T_TrainPosition_Types_Pck
#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPosition_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPosition_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck
#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPositionInfo_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_BG_Header_T_BG_Types_Pkg
#define kcg_copy_BG_Header_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Header_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Header_T_BG_Types_Pkg */

#ifndef kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrackTrain_Header_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifndef kcg_copy_LinkedBG_T_BG_Types_Pkg
#define kcg_copy_LinkedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LinkedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_P3_NationalValues_T_Packet_Types_Pkg
#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P3_NationalValues_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P3_NationalValues_T_Packet_Types_Pkg */

#ifndef kcg_copy_P203V1_OBU_T_TM_baseline2
#define kcg_copy_P203V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P203V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P203V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg
#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Communication_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_To_DMI_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg
#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P42_SessionManagement_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg */

#ifndef kcg_copy_TargetIteratorAkku_TargetLimits_Pkg
#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TargetIteratorAkku_TargetLimits_Pkg)))
#endif /* kcg_copy_TargetIteratorAkku_TargetLimits_Pkg */

#ifndef kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_TXT_MSG_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BGCollector_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_filterRelatedEvents_T_Common_Types_Pkg
#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (filterRelatedEvents_T_Common_Types_Pkg)))
#endif /* kcg_copy_filterRelatedEvents_T_Common_Types_Pkg */

#ifndef kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg
#define kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (dataCollectionForLevelTransition_T_xdebugSupport_Pkg)))
#endif /* kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg */

#ifndef kcg_copy_MSG_Errors_T_Common_Types_Pkg
#define kcg_copy_MSG_Errors_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MSG_Errors_T_Common_Types_Pkg)))
#endif /* kcg_copy_MSG_Errors_T_Common_Types_Pkg */

#ifndef kcg_copy_P058_OBU_T_TM
#define kcg_copy_P058_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_OBU_T_TM)))
#endif /* kcg_copy_P058_OBU_T_TM */

#ifndef kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg
#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Mode_control_and_train_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg
#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P80_ModeProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg
#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrainTrack_Header_T_Radio_Types_Pkg)))
#endif /* kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifndef kcg_copy_positionErrors_T_TrainPosition_Types_Pck
#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionErrors_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionErrors_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_positionedBG_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBG_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBG_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_odometry_T_Obu_BasicTypes_Pkg
#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometry_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_RadioMetadata_T_Common_Types_Pkg
#define kcg_copy_RadioMetadata_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMetadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_RadioMetadata_T_Common_Types_Pkg */

#ifndef kcg_copy_P005_section_enum_T_TM
#define kcg_copy_P005_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_section_enum_T_TM)))
#endif /* kcg_copy_P005_section_enum_T_TM */

#ifndef kcg_copy_struct_78479
#define kcg_copy_struct_78479(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_78479)))
#endif /* kcg_copy_struct_78479 */

#ifndef kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Message_EVC_to_Train_Interface_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifndef kcg_copy_outPackets_T_Common_Types_Pkg
#define kcg_copy_outPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (outPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_outPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_trainProperties_T_TrainPosition_Types_Pck
#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainProperties_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainProperties_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_struct_78522
#define kcg_copy_struct_78522(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_78522)))
#endif /* kcg_copy_struct_78522 */

#ifndef kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg
#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_pressure_value_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg */

#ifndef kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
#define kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P63_BaliseInSRAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg
#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocWithInAcc_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_DataForDMI_t_TrackAtlasTypes
#define kcg_copy_DataForDMI_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForDMI_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForDMI_t_TrackAtlasTypes */

#ifndef kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_LevelTransition_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP
#define kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_t_indexed_trgt_t_TA_MRSP)))
#endif /* kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP */

#ifndef kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg
#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_trainStatus_T_TIU_Types_Pkg)))
#endif /* kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg */

#ifndef kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg
#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocationBasedEvents_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_ERTMS_capabilities_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_StaticSpeedSection_t_TrackAtlasTypes
#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (StaticSpeedSection_t_TrackAtlasTypes)))
#endif /* kcg_copy_StaticSpeedSection_t_TrackAtlasTypes */

#ifndef kcg_copy_P003_permanent_data_T_TM_baseline2
#define kcg_copy_P003_permanent_data_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_permanent_data_T_TM_baseline2)))
#endif /* kcg_copy_P003_permanent_data_T_TM_baseline2 */

#ifndef kcg_copy_nvkrint_T_Packet_Types_Pkg
#define kcg_copy_nvkrint_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkrint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrint_T_Packet_Types_Pkg */

#ifndef kcg_copy_M_voltage_T_TIU_Types_Pkg
#define kcg_copy_M_voltage_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_voltage_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_voltage_T_TIU_Types_Pkg */

#ifndef kcg_copy_mobileHWCmd_Type_MoRC_Pck
#define kcg_copy_mobileHWCmd_Type_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileHWCmd_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileHWCmd_Type_MoRC_Pck */

#ifndef kcg_copy_DMI_train_id_T_DMI_Types_Pkg
#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_train_id_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_train_id_T_DMI_Types_Pkg */

#ifndef kcg_copy_radioManagementMessage_T_Common_Types_Pkg
#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (radioManagementMessage_T_Common_Types_Pkg)))
#endif /* kcg_copy_radioManagementMessage_T_Common_Types_Pkg */

#ifndef kcg_copy_RadioMessage_T_Radio_Types_Pkg
#define kcg_copy_RadioMessage_T_Radio_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMessage_T_Radio_Types_Pkg)))
#endif /* kcg_copy_RadioMessage_T_Radio_Types_Pkg */

#ifndef kcg_copy_API_TrackSideInput_T_API_Msg_Pkg
#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TrackSideInput_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TrackSideInput_T_API_Msg_Pkg */

#ifndef kcg_copy_API_TelegramHeader_T_API_Msg_Pkg
#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TelegramHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TelegramHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifndef kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck
#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (infoFromLinking_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_RBC_Id_T_Common_Types_Pkg
#define kcg_copy_RBC_Id_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Id_T_Common_Types_Pkg)))
#endif /* kcg_copy_RBC_Id_T_Common_Types_Pkg */

#ifndef kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg
#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainToTrackStatus_T_BG_Types_Pkg)))
#endif /* kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg */

#ifndef kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_Array04_TM
#define kcg_copy_Array04_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array04_TM)))
#endif /* kcg_copy_Array04_TM */

#ifndef kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes
#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (StaticSpeedProfile_t_TrackAtlasTypes)))
#endif /* kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes */

#ifndef kcg_copy_GradientProfile_t_TrackAtlasTypes
#define kcg_copy_GradientProfile_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_t_TrackAtlasTypes)))
#endif /* kcg_copy_GradientProfile_t_TrackAtlasTypes */

#ifndef kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes
#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_for_DMI_t_TrackAtlasTypes)))
#endif /* kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes */

#ifndef kcg_copy_TelegramArray_T_BG_Types_Pkg
#define kcg_copy_TelegramArray_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (TelegramArray_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramArray_T_BG_Types_Pkg */

#ifndef kcg_copy_array_76065
#define kcg_copy_array_76065(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76065)))
#endif /* kcg_copy_array_76065 */

#ifndef kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg
#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P41_LevelTransistionOrders_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg */

#ifndef kcg_copy_Target_list_MRSP_real_T_TargetManagement_types
#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Target_list_MRSP_real_T_TargetManagement_types)))
#endif /* kcg_copy_Target_list_MRSP_real_T_TargetManagement_types */

#ifndef kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_P005_OBU_sectionlist_enum_T_TM
#define kcg_copy_P005_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_LinkedBGs_T_BG_Types_Pkg
#define kcg_copy_LinkedBGs_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LinkedBGs_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBGs_T_BG_Types_Pkg */

#ifndef kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg
#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (aTractionIdentity_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_array_76114
#define kcg_copy_array_76114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76114)))
#endif /* kcg_copy_array_76114 */

#ifndef kcg_copy_IterPacket58List_T_Packet_Types_Pkg
#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (IterPacket58List_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58List_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_bool_113
#define kcg_copy_array_bool_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_113)))
#endif /* kcg_copy_array_bool_113 */

#ifndef kcg_copy_array_real_113
#define kcg_copy_array_real_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_113)))
#endif /* kcg_copy_array_real_113 */

#ifndef kcg_copy_DMI_level_array_T_DMI_Types_Pkg
#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_level_array_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_array_T_DMI_Types_Pkg */

#ifndef kcg_copy_P046_sections_array_flat_T_TM
#define kcg_copy_P046_sections_array_flat_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_sections_array_flat_T_TM)))
#endif /* kcg_copy_P046_sections_array_flat_T_TM */

#ifndef kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg
#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ReportedBGList_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_positionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (positionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_array_76247
#define kcg_copy_array_76247(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76247)))
#endif /* kcg_copy_array_76247 */

#ifndef kcg_copy_Metadata_T_Common_Types_Pkg
#define kcg_copy_Metadata_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Types_Pkg */

#ifndef kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkvintArray_T_Packet_Types_Pkg
#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkvintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_76298
#define kcg_copy_array_76298(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76298)))
#endif /* kcg_copy_array_76298 */

#ifndef kcg_copy_array_76302
#define kcg_copy_array_76302(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76302)))
#endif /* kcg_copy_array_76302 */

#ifndef kcg_copy_array_76336
#define kcg_copy_array_76336(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76336)))
#endif /* kcg_copy_array_76336 */

#ifndef kcg_copy_array_real_100_8
#define kcg_copy_array_real_100_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_8)))
#endif /* kcg_copy_array_real_100_8 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_real_100_13
#define kcg_copy_array_real_100_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_13)))
#endif /* kcg_copy_array_real_100_13 */

#ifndef kcg_copy_array_real_3
#define kcg_copy_array_real_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_3)))
#endif /* kcg_copy_array_real_3 */

#ifndef kcg_copy_array_76498
#define kcg_copy_array_76498(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76498)))
#endif /* kcg_copy_array_76498 */

#ifndef kcg_copy_array_76502
#define kcg_copy_array_76502(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76502)))
#endif /* kcg_copy_array_76502 */

#ifndef kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P15_Level23MovementAuthorities_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */

#ifndef kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
#define kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P12_Level1MovementAuthorities_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TXT_MSGList_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes
#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MovementAuthoritySectionlist_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes */

#ifndef kcg_copy_array_real_100_1
#define kcg_copy_array_real_100_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_1)))
#endif /* kcg_copy_array_real_100_1 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_P046_OBU_sectionlist_enum_T_TM
#define kcg_copy_P046_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_Mode_Profile_Table_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_array_76646
#define kcg_copy_array_76646(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76646)))
#endif /* kcg_copy_array_76646 */

#ifndef kcg_copy_MRSP_internal_T_TargetManagement_types
#define kcg_copy_MRSP_internal_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MRSP_internal_T_TargetManagement_types)))
#endif /* kcg_copy_MRSP_internal_T_TargetManagement_types */

#ifndef kcg_copy_array_real_100_6
#define kcg_copy_array_real_100_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_6)))
#endif /* kcg_copy_array_real_100_6 */

#ifndef kcg_copy_SSP_t_list_t_TA_MRSP
#define kcg_copy_SSP_t_list_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_t_list_t_TA_MRSP)))
#endif /* kcg_copy_SSP_t_list_t_TA_MRSP */

#ifndef kcg_copy_MRSP_Profile_t_TrackAtlasTypes
#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MRSP_Profile_t_TrackAtlasTypes)))
#endif /* kcg_copy_MRSP_Profile_t_TrackAtlasTypes */

#ifndef kcg_copy_array_76681
#define kcg_copy_array_76681(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76681)))
#endif /* kcg_copy_array_76681 */

#ifndef kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifndef kcg_copy_array_real_100
#define kcg_copy_array_real_100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100)))
#endif /* kcg_copy_array_real_100 */

#ifndef kcg_copy_array_int_221
#define kcg_copy_array_int_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_221)))
#endif /* kcg_copy_array_int_221 */

#ifndef kcg_copy_A_gradient_t_SDM_GradientAcceleration_types
#define kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (A_gradient_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_A_gradient_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
#define kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_real_compensated_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP
#define kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_t_indexed_targets_list_t_TA_MRSP)))
#endif /* kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP */

#ifndef kcg_copy_MyArray_SDM_Commands_Pkg
#define kcg_copy_MyArray_SDM_Commands_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MyArray_SDM_Commands_Pkg)))
#endif /* kcg_copy_MyArray_SDM_Commands_Pkg */

#ifndef kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types
#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ASafeSpeedDefinition_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifndef kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types
#define kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_real_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_P015_OBU_sectionlist_enum_T_TM
#define kcg_copy_P015_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P015_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_real_6
#define kcg_copy_array_real_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_6)))
#endif /* kcg_copy_array_real_6 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_t_BrakeVt_t_SDMModelPkg
#define kcg_copy_t_BrakeVt_t_SDMModelPkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (t_BrakeVt_t_SDMModelPkg)))
#endif /* kcg_copy_t_BrakeVt_t_SDMModelPkg */

#ifndef kcg_copy_array_int_6_221
#define kcg_copy_array_int_6_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_221)))
#endif /* kcg_copy_array_int_6_221 */

#ifndef kcg_copy_array_76969
#define kcg_copy_array_76969(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_76969)))
#endif /* kcg_copy_array_76969 */

#ifndef kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg
#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P80_ModeProfiles_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_SpeedProfileArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_gradientProfileArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_array_77004
#define kcg_copy_array_77004(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_77004)))
#endif /* kcg_copy_array_77004 */

#ifndef kcg_copy_array_77008
#define kcg_copy_array_77008(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_77008)))
#endif /* kcg_copy_array_77008 */

#ifndef kcg_copy_SSP_t_cat_t_TA_MRSP
#define kcg_copy_SSP_t_cat_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_t_cat_t_TA_MRSP)))
#endif /* kcg_copy_SSP_t_cat_t_TA_MRSP */

#ifndef kcg_copy_SSP_t_matrix_t_TA_MRSP
#define kcg_copy_SSP_t_matrix_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_t_matrix_t_TA_MRSP)))
#endif /* kcg_copy_SSP_t_matrix_t_TA_MRSP */

#ifndef kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2
#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_sectionlist_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */

#ifndef kcg_copy_nidCArray_T_Packet_Types_Pkg
#define kcg_copy_nidCArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nidCArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nidCArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_77095
#define kcg_copy_array_77095(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_77095)))
#endif /* kcg_copy_array_77095 */

#ifndef kcg_copy_ModeDecisionTableType_DataDictionary_Pkg
#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ModeDecisionTableType_DataDictionary_Pkg)))
#endif /* kcg_copy_ModeDecisionTableType_DataDictionary_Pkg */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_SSP_cat_t_TA_MRSP
#define kcg_copy_SSP_cat_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_cat_t_TA_MRSP)))
#endif /* kcg_copy_SSP_cat_t_TA_MRSP */

#ifndef kcg_copy_nvkrintArray_T_Packet_Types_Pkg
#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkrintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrintArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_ASafe_Data_T_CalcBrakingCurves_types
#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ASafe_Data_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafe_Data_T_CalcBrakingCurves_types */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_trackConditionArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_array_int_13
#define kcg_copy_array_int_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_13)))
#endif /* kcg_copy_array_int_13 */

#ifndef kcg_copy_array_real_13
#define kcg_copy_array_real_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_13)))
#endif /* kcg_copy_array_real_13 */

#ifndef kcg_copy_DMI_TEXT_DMI_Types_Pkg
#define kcg_copy_DMI_TEXT_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TEXT_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TEXT_DMI_Types_Pkg */

#ifndef kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (driverIdentifier_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_P041_OBU_sectionlist_enum_T_TM
#define kcg_copy_P041_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_P021_OBU_sectionlist_enum_T_TM
#define kcg_copy_P021_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_array_77257
#define kcg_copy_array_77257(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_77257)))
#endif /* kcg_copy_array_77257 */

#ifndef kcg_copy_array_77261
#define kcg_copy_array_77261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_77261)))
#endif /* kcg_copy_array_77261 */

#ifndef kcg_copy_SSP_matrix_t_TA_MRSP
#define kcg_copy_SSP_matrix_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_matrix_t_TA_MRSP)))
#endif /* kcg_copy_SSP_matrix_t_TA_MRSP */

#ifndef kcg_copy_Array05_TM
#define kcg_copy_Array05_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array05_TM)))
#endif /* kcg_copy_Array05_TM */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_P058_OBU_sectionlist_enum_T_TM
#define kcg_copy_P058_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P058_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P058_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage
#define kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MetadataTruthtable_T1_CheckEuroradioMessage)))
#endif /* kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage */

#ifndef kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (aNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ParabolaCurveValid_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifndef kcg_copy_array_real_114
#define kcg_copy_array_real_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_114)))
#endif /* kcg_copy_array_real_114 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_P005_sections_array_flat_T_TM
#define kcg_copy_P005_sections_array_flat_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_sections_array_flat_T_TM)))
#endif /* kcg_copy_P005_sections_array_flat_T_TM */

#ifndef kcg_copy_Array24_TM
#define kcg_copy_Array24_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array24_TM)))
#endif /* kcg_copy_Array24_TM */

#ifndef kcg_copy_SSPArray_T_Packet_Types_Pkg
#define kcg_copy_SSPArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSPArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSPArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_DiffArray_T_Packet_Types_Pkg
#define kcg_copy_DiffArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DiffArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_DiffArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg
#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P21_GradientProfiles_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg */

#ifndef kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
#define kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg
#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkvintsetArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_LevelDecisionTableType_DataDictionary_Pkg
#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LevelDecisionTableType_DataDictionary_Pkg)))
#endif /* kcg_copy_LevelDecisionTableType_DataDictionary_Pkg */

#ifndef kcg_copy_CompressedPacketData_T_Common_Types_Pkg
#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (CompressedPacketData_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPacketData_T_Common_Types_Pkg */

#ifndef kcg_copy_array_78651
#define kcg_copy_array_78651(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_78651)))
#endif /* kcg_copy_array_78651 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_Array08_TM
#define kcg_copy_Array08_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array08_TM)))
#endif /* kcg_copy_Array08_TM */

#ifndef kcg_copy_array_real_8
#define kcg_copy_array_real_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_8)))
#endif /* kcg_copy_array_real_8 */

#ifdef kcg_use_P21_GradientProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg(
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P21_GradientProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Type_I_train_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes
#ifndef kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes(
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c1,
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes */
#endif /* kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes */

#ifdef kcg_use_P041_OBU_T_TM
#ifndef kcg_comp_P041_OBU_T_TM
extern kcg_bool kcg_comp_P041_OBU_T_TM(
  P041_OBU_T_TM *kcg_c1,
  P041_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_T_TM */
#endif /* kcg_use_P041_OBU_T_TM */

#ifdef kcg_use_P027V1_section_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_enum_T_TM_baseline2(
  P027V1_section_enum_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_enum_T_TM_baseline2 */

#ifdef kcg_use_P005_OBU_T_TM
#ifndef kcg_comp_P005_OBU_T_TM
extern kcg_bool kcg_comp_P005_OBU_T_TM(
  P005_OBU_T_TM *kcg_c1,
  P005_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_T_TM */
#endif /* kcg_use_P005_OBU_T_TM */

#ifdef kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2(
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#ifndef kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
extern kcg_bool kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2);
#endif /* kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */
#endif /* kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_Endtimer_t_TrackAtlasTypes
#ifndef kcg_comp_Endtimer_t_TrackAtlasTypes
extern kcg_bool kcg_comp_Endtimer_t_TrackAtlasTypes(
  Endtimer_t_TrackAtlasTypes *kcg_c1,
  Endtimer_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_Endtimer_t_TrackAtlasTypes */
#endif /* kcg_use_Endtimer_t_TrackAtlasTypes */

#ifdef kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types(
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_Driver2MAR_T_MA_Request
#ifndef kcg_comp_Driver2MAR_T_MA_Request
extern kcg_bool kcg_comp_Driver2MAR_T_MA_Request(
  Driver2MAR_T_MA_Request *kcg_c1,
  Driver2MAR_T_MA_Request *kcg_c2);
#endif /* kcg_comp_Driver2MAR_T_MA_Request */
#endif /* kcg_use_Driver2MAR_T_MA_Request */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
#ifndef kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg
extern kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg */
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_a_Brake_t_SDMConversionModelPkg
#ifndef kcg_comp_a_Brake_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_a_Brake_t_SDMConversionModelPkg(
  a_Brake_t_SDMConversionModelPkg *kcg_c1,
  a_Brake_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_a_Brake_t_SDMConversionModelPkg */
#endif /* kcg_use_a_Brake_t_SDMConversionModelPkg */

#ifdef kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg
#ifndef kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg */
#endif /* kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg */

#ifdef kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_mv_Map_t_SDMConversionModelPkg
#ifndef kcg_comp_mv_Map_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_mv_Map_t_SDMConversionModelPkg(
  mv_Map_t_SDMConversionModelPkg *kcg_c1,
  mv_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_mv_Map_t_SDMConversionModelPkg */
#endif /* kcg_use_mv_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#ifndef kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c1,
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */
#endif /* kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifndef kcg_comp_MetadataElement_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_MetadataElement_T_Common_Types_Pkg
#endif /* kcg_comp_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_SSP_relevant_target_t_TA_MRSP
#ifndef kcg_comp_SSP_relevant_target_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_relevant_target_t_TA_MRSP(
  SSP_relevant_target_t_TA_MRSP *kcg_c1,
  SSP_relevant_target_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_relevant_target_t_TA_MRSP */
#endif /* kcg_use_SSP_relevant_target_t_TA_MRSP */

#ifdef kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg(
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg
#ifndef kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg */
#endif /* kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_T_trac_t_TargetLimits_Pkg
#ifndef kcg_comp_T_trac_t_TargetLimits_Pkg
extern kcg_bool kcg_comp_T_trac_t_TargetLimits_Pkg(
  T_trac_t_TargetLimits_Pkg *kcg_c1,
  T_trac_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_T_trac_t_TargetLimits_Pkg */
#endif /* kcg_use_T_trac_t_TargetLimits_Pkg */

#ifdef kcg_use_TrainLocations_real_T_SDM_Types_Pkg
#ifndef kcg_comp_TrainLocations_real_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_TrainLocations_real_T_SDM_Types_Pkg(
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c1,
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrainLocations_real_T_SDM_Types_Pkg */
#endif /* kcg_use_TrainLocations_real_T_SDM_Types_Pkg */

#ifdef kcg_use_DMI_DriverAck_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg(
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_DriverAck_T_DMI_Types_Pkg */

#ifdef kcg_use_TIU_commandStatus_T_TIU_Types_Pkg
#ifndef kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg(
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg */
#endif /* kcg_use_TIU_commandStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_To_Modes_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg(
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c1,
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_To_Modes_T_DMI_Types_Pkg */

#ifdef kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_SSP_Mark_ValidSSPsection_TA_MRSP
#ifndef kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP
extern kcg_bool kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP(
  SSP_Mark_ValidSSPsection_TA_MRSP *kcg_c1,
  SSP_Mark_ValidSSPsection_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP */
#endif /* kcg_use_SSP_Mark_ValidSSPsection_TA_MRSP */

#ifdef kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#ifndef kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
extern kcg_bool kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c1,
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c2);
#endif /* kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */
#endif /* kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifdef kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_Target_real_T_TargetManagement_types
#ifndef kcg_comp_Target_real_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_real_T_TargetManagement_types(
  Target_real_T_TargetManagement_types *kcg_c1,
  Target_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_real_T_TargetManagement_types */
#endif /* kcg_use_Target_real_T_TargetManagement_types */

#ifdef kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_BG_Message_T_BG_Types_Pkg
#ifndef kcg_comp_BG_Message_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Message_T_BG_Types_Pkg(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_BG_Message_T_BG_Types_Pkg */
#endif /* kcg_use_BG_Message_T_BG_Types_Pkg */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
#ifndef kcg_comp_Telegram_T_BG_Types_Pkg
extern kcg_bool kcg_comp_Telegram_T_BG_Types_Pkg(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Telegram_T_BG_Types_Pkg */
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
#ifndef kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
extern kcg_bool kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c1,
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c2);
#endif /* kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */
#endif /* kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */

#ifdef kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_Brake_command_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_command_T_TIU_Types_Pkg(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_command_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_command_T_TIU_Types_Pkg */

#ifdef kcg_use_ParabolaArc_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaArc_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaArc_T_CalcBrakingCurves_types(
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaArc_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaArc_T_CalcBrakingCurves_types */

#ifdef kcg_use_DMI_train_length_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_train_length_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_train_length_T_DMI_Types_Pkg(
  DMI_train_length_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_length_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_train_length_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_train_length_T_DMI_Types_Pkg */

#ifdef kcg_use_API_EuroRadioOutput_T_API_RadioCommunication_Pkg
#ifndef kcg_comp_API_EuroRadioOutput_T_API_RadioCommunication_Pkg
extern kcg_bool kcg_comp_API_EuroRadioOutput_T_API_RadioCommunication_Pkg(
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg *kcg_c1,
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg *kcg_c2);
#endif /* kcg_comp_API_EuroRadioOutput_T_API_RadioCommunication_Pkg */
#endif /* kcg_use_API_EuroRadioOutput_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_TargetCollection_T_TargetManagement_types
#ifndef kcg_comp_TargetCollection_T_TargetManagement_types
extern kcg_bool kcg_comp_TargetCollection_T_TargetManagement_types(
  TargetCollection_T_TargetManagement_types *kcg_c1,
  TargetCollection_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_TargetCollection_T_TargetManagement_types */
#endif /* kcg_use_TargetCollection_T_TargetManagement_types */

#ifdef kcg_use_probesBalises_T_xdebugSupport_Pkg
#ifndef kcg_comp_probesBalises_T_xdebugSupport_Pkg
extern kcg_bool kcg_comp_probesBalises_T_xdebugSupport_Pkg(
  probesBalises_T_xdebugSupport_Pkg *kcg_c1,
  probesBalises_T_xdebugSupport_Pkg *kcg_c2);
#endif /* kcg_comp_probesBalises_T_xdebugSupport_Pkg */
#endif /* kcg_use_probesBalises_T_xdebugSupport_Pkg */

#ifdef kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_nationValuesForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg(
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c1,
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_nationValuesForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_P027V1_OBU_body_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2(
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_body_enum_T_TM_baseline2 */

#ifdef kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_Target_T_TargetManagement_types
#ifndef kcg_comp_Target_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_T_TargetManagement_types(
  Target_T_TargetManagement_types *kcg_c1,
  Target_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_T_TargetManagement_types */
#endif /* kcg_use_Target_T_TargetManagement_types */

#ifdef kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */

#ifndef kcg_comp_passedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_passedBG_T_BG_Types_Pkg(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_passedBG_T_BG_Types_Pkg
#endif /* kcg_comp_passedBG_T_BG_Types_Pkg */

#ifdef kcg_use_trainData_Events_T_trainData_Types_pkg
#ifndef kcg_comp_trainData_Events_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainData_Events_T_trainData_Types_pkg(
  trainData_Events_T_trainData_Types_pkg *kcg_c1,
  trainData_Events_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainData_Events_T_trainData_Types_pkg */
#endif /* kcg_use_trainData_Events_T_trainData_Types_pkg */

#ifdef kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_struct_76527
#ifndef kcg_comp_struct_76527
extern kcg_bool kcg_comp_struct_76527(
  struct_76527 *kcg_c1,
  struct_76527 *kcg_c2);
#endif /* kcg_comp_struct_76527 */
#endif /* kcg_use_struct_76527 */

#ifdef kcg_use_trainDataStatus_T_trainData_Types_pkg
#ifndef kcg_comp_trainDataStatus_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainDataStatus_T_trainData_Types_pkg(
  trainDataStatus_T_trainData_Types_pkg *kcg_c1,
  trainDataStatus_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainDataStatus_T_trainData_Types_pkg */
#endif /* kcg_use_trainDataStatus_T_trainData_Types_pkg */

#ifdef kcg_use_struct_76545
#ifndef kcg_comp_struct_76545
extern kcg_bool kcg_comp_struct_76545(
  struct_76545 *kcg_c1,
  struct_76545 *kcg_c2);
#endif /* kcg_comp_struct_76545 */
#endif /* kcg_use_struct_76545 */

#ifdef kcg_use_DP_or_OL_t_TrackAtlasTypes
#ifndef kcg_comp_DP_or_OL_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DP_or_OL_t_TrackAtlasTypes(
  DP_or_OL_t_TrackAtlasTypes *kcg_c1,
  DP_or_OL_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DP_or_OL_t_TrackAtlasTypes */
#endif /* kcg_use_DP_or_OL_t_TrackAtlasTypes */

#ifdef kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
#ifndef kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */
#endif /* kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_Diff_T_Packet_Types_Pkg
#ifndef kcg_comp_Diff_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_Diff_T_Packet_Types_Pkg(
  Diff_T_Packet_Types_Pkg *kcg_c1,
  Diff_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Diff_T_Packet_Types_Pkg */
#endif /* kcg_use_Diff_T_Packet_Types_Pkg */

#ifdef kcg_use_av_MergedMap_t_SDMConversionModelPkg
#ifndef kcg_comp_av_MergedMap_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_av_MergedMap_t_SDMConversionModelPkg(
  av_MergedMap_t_SDMConversionModelPkg *kcg_c1,
  av_MergedMap_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_av_MergedMap_t_SDMConversionModelPkg */
#endif /* kcg_use_av_MergedMap_t_SDMConversionModelPkg */

#ifndef kcg_comp_CompressedPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPackets_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types(
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c1,
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_mobileSWCmd_Type_MoRC_Pck
#ifndef kcg_comp_mobileSWCmd_Type_MoRC_Pck
extern kcg_bool kcg_comp_mobileSWCmd_Type_MoRC_Pck(
  mobileSWCmd_Type_MoRC_Pck *kcg_c1,
  mobileSWCmd_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_mobileSWCmd_Type_MoRC_Pck */
#endif /* kcg_use_mobileSWCmd_Type_MoRC_Pck */

#ifdef kcg_use_struct_76606
#ifndef kcg_comp_struct_76606
extern kcg_bool kcg_comp_struct_76606(
  struct_76606 *kcg_c1,
  struct_76606 *kcg_c2);
#endif /* kcg_comp_struct_76606 */
#endif /* kcg_use_struct_76606 */

#ifdef kcg_use_struct_76615
#ifndef kcg_comp_struct_76615
extern kcg_bool kcg_comp_struct_76615(
  struct_76615 *kcg_c1,
  struct_76615 *kcg_c2);
#endif /* kcg_comp_struct_76615 */
#endif /* kcg_use_struct_76615 */

#ifdef kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifdef kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_76665
#ifndef kcg_comp_struct_76665
extern kcg_bool kcg_comp_struct_76665(
  struct_76665 *kcg_c1,
  struct_76665 *kcg_c2);
#endif /* kcg_comp_struct_76665 */
#endif /* kcg_use_struct_76665 */

#ifdef kcg_use_struct_76674
#ifndef kcg_comp_struct_76674
extern kcg_bool kcg_comp_struct_76674(
  struct_76674 *kcg_c1,
  struct_76674 *kcg_c2);
#endif /* kcg_comp_struct_76674 */
#endif /* kcg_use_struct_76674 */

#ifdef kcg_use_CurveCollection_T_CalcBrakingCurves_types
#ifndef kcg_comp_CurveCollection_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_CurveCollection_T_CalcBrakingCurves_types(
  CurveCollection_T_CalcBrakingCurves_types *kcg_c1,
  CurveCollection_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_CurveCollection_T_CalcBrakingCurves_types */
#endif /* kcg_use_CurveCollection_T_CalcBrakingCurves_types */

#ifdef kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg(
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg */

#ifdef kcg_use_SSP_section_t_TA_MRSP
#ifndef kcg_comp_SSP_section_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_section_t_TA_MRSP(
  SSP_section_t_TA_MRSP *kcg_c1,
  SSP_section_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_section_t_TA_MRSP */
#endif /* kcg_use_SSP_section_t_TA_MRSP */

#ifdef kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg(
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_RadioManagement_T_API_RadioCommunication_Pkg
#ifndef kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg
extern kcg_bool kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c1,
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c2);
#endif /* kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg */
#endif /* kcg_use_RadioManagement_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg(
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg */

#ifndef kcg_comp_mobileSWStatus_Type_MoRC_Pck
extern kcg_bool kcg_comp_mobileSWStatus_Type_MoRC_Pck(
  mobileSWStatus_Type_MoRC_Pck *kcg_c1,
  mobileSWStatus_Type_MoRC_Pck *kcg_c2);
#define kcg_use_mobileSWStatus_Type_MoRC_Pck
#endif /* kcg_comp_mobileSWStatus_Type_MoRC_Pck */

#ifdef kcg_use_trainData_internal_t_SDM_Types_Pkg
#ifndef kcg_comp_trainData_internal_t_SDM_Types_Pkg
extern kcg_bool kcg_comp_trainData_internal_t_SDM_Types_Pkg(
  trainData_internal_t_SDM_Types_Pkg *kcg_c1,
  trainData_internal_t_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_internal_t_SDM_Types_Pkg */
#endif /* kcg_use_trainData_internal_t_SDM_Types_Pkg */

#ifdef kcg_use_extractTargetsMRSPACC_TargetManagement_pkg
#ifndef kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg
extern kcg_bool kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg(
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c1,
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c2);
#endif /* kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg */
#endif /* kcg_use_extractTargetsMRSPACC_TargetManagement_pkg */

#ifdef kcg_use_P041_section_enum_T_TM
#ifndef kcg_comp_P041_section_enum_T_TM
extern kcg_bool kcg_comp_P041_section_enum_T_TM(
  P041_section_enum_T_TM *kcg_c1,
  P041_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_enum_T_TM */
#endif /* kcg_use_P041_section_enum_T_TM */

#ifdef kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
#ifndef kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c1,
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */
#endif /* kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_76792
#ifndef kcg_comp_struct_76792
extern kcg_bool kcg_comp_struct_76792(
  struct_76792 *kcg_c1,
  struct_76792 *kcg_c2);
#endif /* kcg_comp_struct_76792 */
#endif /* kcg_use_struct_76792 */

#ifdef kcg_use_nvkvint_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvint_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvint_T_Packet_Types_Pkg(
  nvkvint_T_Packet_Types_Pkg *kcg_c1,
  nvkvint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvint_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvint_T_Packet_Types_Pkg */

#ifdef kcg_use_P046_OBU_T_TM
#ifndef kcg_comp_P046_OBU_T_TM
extern kcg_bool kcg_comp_P046_OBU_T_TM(
  P046_OBU_T_TM *kcg_c1,
  P046_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_T_TM */
#endif /* kcg_use_P046_OBU_T_TM */

#ifdef kcg_use_P027V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_T_TM_baseline2(
  P027V1_OBU_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_bec_t_TargetLimits_Pkg
#ifndef kcg_comp_bec_t_TargetLimits_Pkg
extern kcg_bool kcg_comp_bec_t_TargetLimits_Pkg(
  bec_t_TargetLimits_Pkg *kcg_c1,
  bec_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_bec_t_TargetLimits_Pkg */
#endif /* kcg_use_bec_t_TargetLimits_Pkg */

#ifdef kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#ifndef kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
extern kcg_bool kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2);
#endif /* kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */
#endif /* kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_mobileHWStatus_Type_MoRC_Pck
#ifndef kcg_comp_mobileHWStatus_Type_MoRC_Pck
extern kcg_bool kcg_comp_mobileHWStatus_Type_MoRC_Pck(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_mobileHWStatus_Type_MoRC_Pck */
#endif /* kcg_use_mobileHWStatus_Type_MoRC_Pck */

#ifdef kcg_use_struct_76853
#ifndef kcg_comp_struct_76853
extern kcg_bool kcg_comp_struct_76853(
  struct_76853 *kcg_c1,
  struct_76853 *kcg_c2);
#endif /* kcg_comp_struct_76853 */
#endif /* kcg_use_struct_76853 */

#ifdef kcg_use_Change_traction_system_T_TIU_Types_Pkg
#ifndef kcg_comp_Change_traction_system_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
  Change_traction_system_T_TIU_Types_Pkg *kcg_c1,
  Change_traction_system_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Change_traction_system_T_TIU_Types_Pkg */
#endif /* kcg_use_Change_traction_system_T_TIU_Types_Pkg */

#ifdef kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
#ifndef kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c1,
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */
#endif /* kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifdef kcg_use_radioNetWorkIDs_T_MoRC_Pck
#ifndef kcg_comp_radioNetWorkIDs_T_MoRC_Pck
extern kcg_bool kcg_comp_radioNetWorkIDs_T_MoRC_Pck(
  radioNetWorkIDs_T_MoRC_Pck *kcg_c1,
  radioNetWorkIDs_T_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_radioNetWorkIDs_T_MoRC_Pck */
#endif /* kcg_use_radioNetWorkIDs_T_MoRC_Pck */

#ifdef kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_ReportedBG_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg(
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ReportedBG_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_76907
#ifndef kcg_comp_struct_76907
extern kcg_bool kcg_comp_struct_76907(
  struct_76907 *kcg_c1,
  struct_76907 *kcg_c2);
#endif /* kcg_comp_struct_76907 */
#endif /* kcg_use_struct_76907 */

#ifdef kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_struct_76928
#ifndef kcg_comp_struct_76928
extern kcg_bool kcg_comp_struct_76928(
  struct_76928 *kcg_c1,
  struct_76928 *kcg_c2);
#endif /* kcg_comp_struct_76928 */
#endif /* kcg_use_struct_76928 */

#ifdef kcg_use_P046_section_enum_T_TM
#ifndef kcg_comp_P046_section_enum_T_TM
extern kcg_bool kcg_comp_P046_section_enum_T_TM(
  P046_section_enum_T_TM *kcg_c1,
  P046_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_section_enum_T_TM */
#endif /* kcg_use_P046_section_enum_T_TM */

#ifdef kcg_use_Isolation_Status_T_TIU_Types_Pkg
#ifndef kcg_comp_Isolation_Status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
  Isolation_Status_T_TIU_Types_Pkg *kcg_c1,
  Isolation_Status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Isolation_Status_T_TIU_Types_Pkg */
#endif /* kcg_use_Isolation_Status_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_speedProfile_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg(
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_speedProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg(
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_trackCondition_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg(
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackCondition_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_LevelList_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_LevelList_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c1,
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_LevelList_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_LevelList_T_DMI_Types_Pkg */

#ifdef kcg_use_MRSP_internal_section_T_TargetManagement_types
#ifndef kcg_comp_MRSP_internal_section_T_TargetManagement_types
extern kcg_bool kcg_comp_MRSP_internal_section_T_TargetManagement_types(
  MRSP_internal_section_T_TargetManagement_types *kcg_c1,
  MRSP_internal_section_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MRSP_internal_section_T_TargetManagement_types */
#endif /* kcg_use_MRSP_internal_section_T_TargetManagement_types */

#ifdef kcg_use_av_Map_t_SDMConversionModelPkg
#ifndef kcg_comp_av_Map_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_av_Map_t_SDMConversionModelPkg(
  av_Map_t_SDMConversionModelPkg *kcg_c1,
  av_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_av_Map_t_SDMConversionModelPkg */
#endif /* kcg_use_av_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_struct_76993
#ifndef kcg_comp_struct_76993
extern kcg_bool kcg_comp_struct_76993(
  struct_76993 *kcg_c1,
  struct_76993 *kcg_c2);
#endif /* kcg_comp_struct_76993 */
#endif /* kcg_use_struct_76993 */

#ifdef kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg(
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c1,
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_SSP_t_indexed_matrix_element_TA_MRSP
#ifndef kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP
extern kcg_bool kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP(
  SSP_t_indexed_matrix_element_TA_MRSP *kcg_c1,
  SSP_t_indexed_matrix_element_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP */
#endif /* kcg_use_SSP_t_indexed_matrix_element_TA_MRSP */

#ifdef kcg_use_SSP_T_Packet_Types_Pkg
#ifndef kcg_comp_SSP_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_SSP_T_Packet_Types_Pkg(
  SSP_T_Packet_Types_Pkg *kcg_c1,
  SSP_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSP_T_Packet_Types_Pkg */
#endif /* kcg_use_SSP_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintset_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintset_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintset_T_Packet_Types_Pkg(
  nvkvintset_T_Packet_Types_Pkg *kcg_c1,
  nvkvintset_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintset_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintset_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_77034
#ifndef kcg_comp_struct_77034
extern kcg_bool kcg_comp_struct_77034(
  struct_77034 *kcg_c1,
  struct_77034 *kcg_c2);
#endif /* kcg_comp_struct_77034 */
#endif /* kcg_use_struct_77034 */

#ifdef kcg_use_t_Brake_t_SDMModelPkg
#ifndef kcg_comp_t_Brake_t_SDMModelPkg
extern kcg_bool kcg_comp_t_Brake_t_SDMModelPkg(
  t_Brake_t_SDMModelPkg *kcg_c1,
  t_Brake_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_Brake_t_SDMModelPkg */
#endif /* kcg_use_t_Brake_t_SDMModelPkg */

#ifdef kcg_use_M_current_T_TIU_Types_Pkg
#ifndef kcg_comp_M_current_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_current_T_TIU_Types_Pkg(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_current_T_TIU_Types_Pkg */
#endif /* kcg_use_M_current_T_TIU_Types_Pkg */

#ifdef kcg_use_TIU_Output_msg_API_TIU_Pkg
#ifndef kcg_comp_TIU_Output_msg_API_TIU_Pkg
extern kcg_bool kcg_comp_TIU_Output_msg_API_TIU_Pkg(
  TIU_Output_msg_API_TIU_Pkg *kcg_c1,
  TIU_Output_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Output_msg_API_TIU_Pkg */
#endif /* kcg_use_TIU_Output_msg_API_TIU_Pkg */

#ifdef kcg_use_TIU_Input_msg_API_TIU_Pkg
#ifndef kcg_comp_TIU_Input_msg_API_TIU_Pkg
extern kcg_bool kcg_comp_TIU_Input_msg_API_TIU_Pkg(
  TIU_Input_msg_API_TIU_Pkg *kcg_c1,
  TIU_Input_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Input_msg_API_TIU_Pkg */
#endif /* kcg_use_TIU_Input_msg_API_TIU_Pkg */

#ifdef kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg
#ifndef kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c1,
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg */
#endif /* kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_safeRadioConnectionStatusValid_Type_MoRC_Pck
#ifndef kcg_comp_safeRadioConnectionStatusValid_Type_MoRC_Pck
extern kcg_bool kcg_comp_safeRadioConnectionStatusValid_Type_MoRC_Pck(
  safeRadioConnectionStatusValid_Type_MoRC_Pck *kcg_c1,
  safeRadioConnectionStatusValid_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_safeRadioConnectionStatusValid_Type_MoRC_Pck */
#endif /* kcg_use_safeRadioConnectionStatusValid_Type_MoRC_Pck */

#ifdef kcg_use_ASafe_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafe_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafe_T_CalcBrakingCurves_types(
  ASafe_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafe_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafe_T_CalcBrakingCurves_types */

#ifdef kcg_use_P021_OBU_T_TM
#ifndef kcg_comp_P021_OBU_T_TM
extern kcg_bool kcg_comp_P021_OBU_T_TM(
  P021_OBU_T_TM *kcg_c1,
  P021_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_T_TM */
#endif /* kcg_use_P021_OBU_T_TM */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_SSP_valid_section_t_TA_MRSP
#ifndef kcg_comp_SSP_valid_section_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_valid_section_t_TA_MRSP(
  SSP_valid_section_t_TA_MRSP *kcg_c1,
  SSP_valid_section_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_valid_section_t_TA_MRSP */
#endif /* kcg_use_SSP_valid_section_t_TA_MRSP */

#ifdef kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg(
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P021_section_enum_T_TM
#ifndef kcg_comp_P021_section_enum_T_TM
extern kcg_bool kcg_comp_P021_section_enum_T_TM(
  P021_section_enum_T_TM *kcg_c1,
  P021_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_enum_T_TM */
#endif /* kcg_use_P021_section_enum_T_TM */

#ifdef kcg_use_IterPacket58_T_Packet_Types_Pkg
#ifndef kcg_comp_IterPacket58_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_IterPacket58_T_Packet_Types_Pkg(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58_T_Packet_Types_Pkg */
#endif /* kcg_use_IterPacket58_T_Packet_Types_Pkg */

#ifdef kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg
#ifndef kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg
extern kcg_bool kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg(
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg */
#endif /* kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_ParabolaCurve_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurve_T_CalcBrakingCurves_types */

#ifdef kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg(
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c1,
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_DataForModeAndLevel_t_TrackAtlasTypes
#ifndef kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes(
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c1,
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes */
#endif /* kcg_use_DataForModeAndLevel_t_TrackAtlasTypes */

#ifdef kcg_use_struct_77209
#ifndef kcg_comp_struct_77209
extern kcg_bool kcg_comp_struct_77209(
  struct_77209 *kcg_c1,
  struct_77209 *kcg_c2);
#endif /* kcg_comp_struct_77209 */
#endif /* kcg_use_struct_77209 */

#ifdef kcg_use_Brake_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_status_T_TIU_Types_Pkg(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_status_T_TIU_Types_Pkg */

#ifdef kcg_use_MovementAuthoritySection_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes(
  MovementAuthoritySection_t_TrackAtlasTypes *kcg_c1,
  MovementAuthoritySection_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthoritySection_t_TrackAtlasTypes */

#ifdef kcg_use_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg
#ifndef kcg_comp_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg
extern kcg_bool kcg_comp_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg(
  m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg *kcg_c1,
  m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg *kcg_c2);
#endif /* kcg_comp_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg */
#endif /* kcg_use_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg */

#ifdef kcg_use_DMI_level_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_level_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_level_T_DMI_Types_Pkg(
  DMI_level_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_level_T_DMI_Types_Pkg */

#ifdef kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg(
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
#ifndef kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c1,
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */
#endif /* kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */

#ifdef kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#ifndef kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c1,
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */
#endif /* kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifdef kcg_use_EOA_real_T_TargetManagement_types
#ifndef kcg_comp_EOA_real_T_TargetManagement_types
extern kcg_bool kcg_comp_EOA_real_T_TargetManagement_types(
  EOA_real_T_TargetManagement_types *kcg_c1,
  EOA_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_EOA_real_T_TargetManagement_types */
#endif /* kcg_use_EOA_real_T_TargetManagement_types */

#ifdef kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c1,
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_trainData_Trigger_T_trainData_Types_pkg
#ifndef kcg_comp_trainData_Trigger_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainData_Trigger_T_trainData_Types_pkg(
  trainData_Trigger_T_trainData_Types_pkg *kcg_c1,
  trainData_Trigger_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainData_Trigger_T_trainData_Types_pkg */
#endif /* kcg_use_trainData_Trigger_T_trainData_Types_pkg */

#ifdef kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P058_section_enum_T_TM
#ifndef kcg_comp_P058_section_enum_T_TM
extern kcg_bool kcg_comp_P058_section_enum_T_TM(
  P058_section_enum_T_TM *kcg_c1,
  P058_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_section_enum_T_TM */
#endif /* kcg_use_P058_section_enum_T_TM */

#ifdef kcg_use_ACC_SDM_GradientAcceleration_Pkg
#ifndef kcg_comp_ACC_SDM_GradientAcceleration_Pkg
extern kcg_bool kcg_comp_ACC_SDM_GradientAcceleration_Pkg(
  ACC_SDM_GradientAcceleration_Pkg *kcg_c1,
  ACC_SDM_GradientAcceleration_Pkg *kcg_c2);
#endif /* kcg_comp_ACC_SDM_GradientAcceleration_Pkg */
#endif /* kcg_use_ACC_SDM_GradientAcceleration_Pkg */

#ifdef kcg_use_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg
#ifndef kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg
extern kcg_bool kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg(
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c1,
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c2);
#endif /* kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg */
#endif /* kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg */

#ifdef kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg
#ifndef kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg
extern kcg_bool kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg(
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c1,
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg */
#endif /* kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifdef kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg
#ifndef kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg */
#endif /* kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifdef kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Gradient_section_t_TrackAtlasTypes
#ifndef kcg_comp_Gradient_section_t_TrackAtlasTypes
extern kcg_bool kcg_comp_Gradient_section_t_TrackAtlasTypes(
  Gradient_section_t_TrackAtlasTypes *kcg_c1,
  Gradient_section_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_Gradient_section_t_TrackAtlasTypes */
#endif /* kcg_use_Gradient_section_t_TrackAtlasTypes */

#ifndef kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg
#ifndef kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg
extern kcg_bool kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg(
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c1,
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c2);
#endif /* kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg */
#endif /* kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifdef kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_obuEventsAndPhases_T_MoRC_Pck
#ifndef kcg_comp_obuEventsAndPhases_T_MoRC_Pck
extern kcg_bool kcg_comp_obuEventsAndPhases_T_MoRC_Pck(
  obuEventsAndPhases_T_MoRC_Pck *kcg_c1,
  obuEventsAndPhases_T_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_obuEventsAndPhases_T_MoRC_Pck */
#endif /* kcg_use_obuEventsAndPhases_T_MoRC_Pck */

#ifdef kcg_use_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg
#ifndef kcg_comp_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg
extern kcg_bool kcg_comp_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *kcg_c1,
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *kcg_c2);
#endif /* kcg_comp_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg */
#endif /* kcg_use_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg */

#ifdef kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg
#ifndef kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg
extern kcg_bool kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg(
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg */
#endif /* kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg */

#ifdef kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg(
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c1,
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg */

#ifdef kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg
#ifndef kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg
extern kcg_bool kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg(
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg */
#endif /* kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg(
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c1,
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_Speeds_T_SDM_Types_Pkg
#ifndef kcg_comp_Speeds_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_Speeds_T_SDM_Types_Pkg(
  Speeds_T_SDM_Types_Pkg *kcg_c1,
  Speeds_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Speeds_T_SDM_Types_Pkg */
#endif /* kcg_use_Speeds_T_SDM_Types_Pkg */

#ifdef kcg_use_SDM_Locations_T_SDM_Types_Pkg
#ifndef kcg_comp_SDM_Locations_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_SDM_Locations_T_SDM_Types_Pkg(
  SDM_Locations_T_SDM_Types_Pkg *kcg_c1,
  SDM_Locations_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Locations_T_SDM_Types_Pkg */
#endif /* kcg_use_SDM_Locations_T_SDM_Types_Pkg */

#ifdef kcg_use_MA_section_real_T_TargetManagement_types
#ifndef kcg_comp_MA_section_real_T_TargetManagement_types
extern kcg_bool kcg_comp_MA_section_real_T_TargetManagement_types(
  MA_section_real_T_TargetManagement_types *kcg_c1,
  MA_section_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MA_section_real_T_TargetManagement_types */
#endif /* kcg_use_MA_section_real_T_TargetManagement_types */

#ifdef kcg_use_SDM_Commands_T_SDM_Types_Pkg
#ifndef kcg_comp_SDM_Commands_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_SDM_Commands_T_SDM_Types_Pkg(
  SDM_Commands_T_SDM_Types_Pkg *kcg_c1,
  SDM_Commands_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Commands_T_SDM_Types_Pkg */
#endif /* kcg_use_SDM_Commands_T_SDM_Types_Pkg */

#ifdef kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg
#ifndef kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg
extern kcg_bool kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg(
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg */
#endif /* kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg */

#ifndef kcg_comp_TelegramHeader_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_TelegramHeader_T_BG_Types_Pkg
#endif /* kcg_comp_TelegramHeader_T_BG_Types_Pkg */

#ifdef kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg
#ifndef kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg(
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c1,
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg */
#endif /* kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_trainData_T_TIU_Types_Pkg
#ifndef kcg_comp_trainData_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_trainData_T_TIU_Types_Pkg(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_T_TIU_Types_Pkg */
#endif /* kcg_use_trainData_T_TIU_Types_Pkg */

#ifdef kcg_use_P003_OBU_T_TM
#ifndef kcg_comp_P003_OBU_T_TM
extern kcg_bool kcg_comp_P003_OBU_T_TM(
  P003_OBU_T_TM *kcg_c1,
  P003_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P003_OBU_T_TM */
#endif /* kcg_use_P003_OBU_T_TM */

#ifdef kcg_use_MovementAuthority_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthority_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthority_t_TrackAtlasTypes(
  MovementAuthority_t_TrackAtlasTypes *kcg_c1,
  MovementAuthority_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthority_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthority_t_TrackAtlasTypes */

#ifdef kcg_use_P003V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P003V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P003V1_OBU_T_TM_baseline2(
  P003V1_OBU_T_TM_baseline2 *kcg_c1,
  P003V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P003V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P012_OBU_T_TM
#ifndef kcg_comp_P012_OBU_T_TM
extern kcg_bool kcg_comp_P012_OBU_T_TM(
  P012_OBU_T_TM *kcg_c1,
  P012_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P012_OBU_T_TM */
#endif /* kcg_use_P012_OBU_T_TM */

#ifdef kcg_use_P015_OBU_T_TM
#ifndef kcg_comp_P015_OBU_T_TM
extern kcg_bool kcg_comp_P015_OBU_T_TM(
  P015_OBU_T_TM *kcg_c1,
  P015_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_T_TM */
#endif /* kcg_use_P015_OBU_T_TM */

#ifdef kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg(
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_Position_Report_TrainToTrack
#ifndef kcg_comp_Position_Report_TrainToTrack
extern kcg_bool kcg_comp_Position_Report_TrainToTrack(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Position_Report_TrainToTrack */
#endif /* kcg_use_Position_Report_TrainToTrack */

#ifdef kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack
#ifndef kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack
extern kcg_bool kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c1,
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack */
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_trainPosition_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPosition_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
  trainPosition_T_TrainPosition_Types_Pck *kcg_c1,
  trainPosition_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPosition_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPosition_T_TrainPosition_Types_Pck */

#ifdef kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck(
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c1,
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifndef kcg_comp_BG_Header_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Header_T_BG_Types_Pkg(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_BG_Header_T_BG_Types_Pkg
#endif /* kcg_comp_BG_Header_T_BG_Types_Pkg */

#ifdef kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg
#ifndef kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg */
#endif /* kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifndef kcg_comp_LinkedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBG_T_BG_Types_Pkg(
  LinkedBG_T_BG_Types_Pkg *kcg_c1,
  LinkedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBG_T_BG_Types_Pkg
#endif /* kcg_comp_LinkedBG_T_BG_Types_Pkg */

#ifdef kcg_use_P3_NationalValues_T_Packet_Types_Pkg
#ifndef kcg_comp_P3_NationalValues_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P3_NationalValues_T_Packet_Types_Pkg(
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c1,
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P3_NationalValues_T_Packet_Types_Pkg */
#endif /* kcg_use_P3_NationalValues_T_Packet_Types_Pkg */

#ifdef kcg_use_P203V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P203V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P203V1_OBU_T_TM_baseline2(
  P203V1_OBU_T_TM_baseline2 *kcg_c1,
  P203V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P203V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P203V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg(
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c1,
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_P42_SessionManagement_T_Packet_Types_Pkg
#ifndef kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c1,
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg */
#endif /* kcg_use_P42_SessionManagement_T_Packet_Types_Pkg */

#ifdef kcg_use_TargetIteratorAkku_TargetLimits_Pkg
#ifndef kcg_comp_TargetIteratorAkku_TargetLimits_Pkg
extern kcg_bool kcg_comp_TargetIteratorAkku_TargetLimits_Pkg(
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c1,
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_TargetIteratorAkku_TargetLimits_Pkg */
#endif /* kcg_use_TargetIteratorAkku_TargetLimits_Pkg */

#ifdef kcg_use_DMI_EVC_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg(
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_EVC_status_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg */

#ifdef kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg(
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_filterRelatedEvents_T_Common_Types_Pkg
#ifndef kcg_comp_filterRelatedEvents_T_Common_Types_Pkg
extern kcg_bool kcg_comp_filterRelatedEvents_T_Common_Types_Pkg(
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c1,
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_filterRelatedEvents_T_Common_Types_Pkg */
#endif /* kcg_use_filterRelatedEvents_T_Common_Types_Pkg */

#ifdef kcg_use_dataCollectionForLevelTransition_T_xdebugSupport_Pkg
#ifndef kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg
extern kcg_bool kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg *kcg_c1,
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg *kcg_c2);
#endif /* kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg */
#endif /* kcg_use_dataCollectionForLevelTransition_T_xdebugSupport_Pkg */

#ifdef kcg_use_MSG_Errors_T_Common_Types_Pkg
#ifndef kcg_comp_MSG_Errors_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MSG_Errors_T_Common_Types_Pkg(
  MSG_Errors_T_Common_Types_Pkg *kcg_c1,
  MSG_Errors_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_MSG_Errors_T_Common_Types_Pkg */
#endif /* kcg_use_MSG_Errors_T_Common_Types_Pkg */

#ifdef kcg_use_P058_OBU_T_TM
#ifndef kcg_comp_P058_OBU_T_TM
extern kcg_bool kcg_comp_P058_OBU_T_TM(
  P058_OBU_T_TM *kcg_c1,
  P058_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_T_TM */
#endif /* kcg_use_P058_OBU_T_TM */

#ifdef kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c1,
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c1,
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_P80_ModeProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg(
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P80_ModeProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg
#ifndef kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg */
#endif /* kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_positionErrors_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionErrors_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
  positionErrors_T_TrainPosition_Types_Pck *kcg_c1,
  positionErrors_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionErrors_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionErrors_T_TrainPosition_Types_Pck */

#ifndef kcg_comp_positionedBG_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
  positionedBG_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBG_T_TrainPosition_Types_Pck *kcg_c2);
#define kcg_use_positionedBG_T_TrainPosition_Types_Pck
#endif /* kcg_comp_positionedBG_T_TrainPosition_Types_Pck */

#ifndef kcg_comp_odometry_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_odometry_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_RadioMetadata_T_Common_Types_Pkg
#ifndef kcg_comp_RadioMetadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMetadata_T_Common_Types_Pkg */
#endif /* kcg_use_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_P005_section_enum_T_TM
#ifndef kcg_comp_P005_section_enum_T_TM
extern kcg_bool kcg_comp_P005_section_enum_T_TM(
  P005_section_enum_T_TM *kcg_c1,
  P005_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_enum_T_TM */
#endif /* kcg_use_P005_section_enum_T_TM */

#ifdef kcg_use_struct_78479
#ifndef kcg_comp_struct_78479
extern kcg_bool kcg_comp_struct_78479(
  struct_78479 *kcg_c1,
  struct_78479 *kcg_c2);
#endif /* kcg_comp_struct_78479 */
#endif /* kcg_use_struct_78479 */

#ifdef kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c1,
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
#ifndef kcg_comp_outPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_outPackets_T_Common_Types_Pkg */
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifdef kcg_use_trainProperties_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainProperties_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
  trainProperties_T_TrainPosition_Types_Pck *kcg_c1,
  trainProperties_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainProperties_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainProperties_T_TrainPosition_Types_Pck */

#ifdef kcg_use_struct_78522
#ifndef kcg_comp_struct_78522
extern kcg_bool kcg_comp_struct_78522(
  struct_78522 *kcg_c1,
  struct_78522 *kcg_c2);
#endif /* kcg_comp_struct_78522 */
#endif /* kcg_use_struct_78522 */

#ifdef kcg_use_Brake_pressure_value_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c1,
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_pressure_value_T_TIU_Types_Pkg */

#ifdef kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */

#ifndef kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_DataForDMI_t_TrackAtlasTypes
#ifndef kcg_comp_DataForDMI_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForDMI_t_TrackAtlasTypes(
  DataForDMI_t_TrackAtlasTypes *kcg_c1,
  DataForDMI_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForDMI_t_TrackAtlasTypes */
#endif /* kcg_use_DataForDMI_t_TrackAtlasTypes */

#ifdef kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_SSP_t_indexed_trgt_t_TA_MRSP
#ifndef kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP(
  SSP_t_indexed_trgt_t_TA_MRSP *kcg_c1,
  SSP_t_indexed_trgt_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP */
#endif /* kcg_use_SSP_t_indexed_trgt_t_TA_MRSP */

#ifdef kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_TIU_trainStatus_T_TIU_Types_Pkg
#ifndef kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg(
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg */
#endif /* kcg_use_TIU_trainStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg(
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c1,
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c1,
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_StaticSpeedSection_t_TrackAtlasTypes
#ifndef kcg_comp_StaticSpeedSection_t_TrackAtlasTypes
extern kcg_bool kcg_comp_StaticSpeedSection_t_TrackAtlasTypes(
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_StaticSpeedSection_t_TrackAtlasTypes */
#endif /* kcg_use_StaticSpeedSection_t_TrackAtlasTypes */

#ifdef kcg_use_P003_permanent_data_T_TM_baseline2
#ifndef kcg_comp_P003_permanent_data_T_TM_baseline2
extern kcg_bool kcg_comp_P003_permanent_data_T_TM_baseline2(
  P003_permanent_data_T_TM_baseline2 *kcg_c1,
  P003_permanent_data_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003_permanent_data_T_TM_baseline2 */
#endif /* kcg_use_P003_permanent_data_T_TM_baseline2 */

#ifdef kcg_use_nvkrint_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkrint_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkrint_T_Packet_Types_Pkg(
  nvkrint_T_Packet_Types_Pkg *kcg_c1,
  nvkrint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrint_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkrint_T_Packet_Types_Pkg */

#ifdef kcg_use_M_voltage_T_TIU_Types_Pkg
#ifndef kcg_comp_M_voltage_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_voltage_T_TIU_Types_Pkg(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_voltage_T_TIU_Types_Pkg */
#endif /* kcg_use_M_voltage_T_TIU_Types_Pkg */

#ifdef kcg_use_mobileHWCmd_Type_MoRC_Pck
#ifndef kcg_comp_mobileHWCmd_Type_MoRC_Pck
extern kcg_bool kcg_comp_mobileHWCmd_Type_MoRC_Pck(
  mobileHWCmd_Type_MoRC_Pck *kcg_c1,
  mobileHWCmd_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_mobileHWCmd_Type_MoRC_Pck */
#endif /* kcg_use_mobileHWCmd_Type_MoRC_Pck */

#ifdef kcg_use_DMI_train_id_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_train_id_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_train_id_T_DMI_Types_Pkg(
  DMI_train_id_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_id_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_train_id_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_train_id_T_DMI_Types_Pkg */

#ifdef kcg_use_radioManagementMessage_T_Common_Types_Pkg
#ifndef kcg_comp_radioManagementMessage_T_Common_Types_Pkg
extern kcg_bool kcg_comp_radioManagementMessage_T_Common_Types_Pkg(
  radioManagementMessage_T_Common_Types_Pkg *kcg_c1,
  radioManagementMessage_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_radioManagementMessage_T_Common_Types_Pkg */
#endif /* kcg_use_radioManagementMessage_T_Common_Types_Pkg */

#ifdef kcg_use_RadioMessage_T_Radio_Types_Pkg
#ifndef kcg_comp_RadioMessage_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_RadioMessage_T_Radio_Types_Pkg(
  RadioMessage_T_Radio_Types_Pkg *kcg_c1,
  RadioMessage_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMessage_T_Radio_Types_Pkg */
#endif /* kcg_use_RadioMessage_T_Radio_Types_Pkg */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
#ifndef kcg_comp_API_TrackSideInput_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TrackSideInput_T_API_Msg_Pkg */
#endif /* kcg_use_API_TrackSideInput_T_API_Msg_Pkg */

#ifdef kcg_use_API_TelegramHeader_T_API_Msg_Pkg
#ifndef kcg_comp_API_TelegramHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TelegramHeader_T_API_Msg_Pkg */
#endif /* kcg_use_API_TelegramHeader_T_API_Msg_Pkg */

#ifdef kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c1,
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifndef kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck(
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c1,
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c2);
#define kcg_use_infoFromLinking_T_TrainPosition_Types_Pck
#endif /* kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck */

#ifdef kcg_use_RBC_Id_T_Common_Types_Pkg
#ifndef kcg_comp_RBC_Id_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Id_T_Common_Types_Pkg */
#endif /* kcg_use_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_TrainToTrackStatus_T_BG_Types_Pkg
#ifndef kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg(
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c1,
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg */
#endif /* kcg_use_TrainToTrackStatus_T_BG_Types_Pkg */

#ifdef kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_array_bool_4
#ifndef kcg_comp_array_bool_4
extern kcg_bool kcg_comp_array_bool_4(
  array_bool_4 *kcg_c1,
  array_bool_4 *kcg_c2);
#endif /* kcg_comp_array_bool_4 */
#endif /* kcg_use_array_bool_4 */

#ifdef kcg_use_Array04_TM
#ifndef kcg_comp_Array04_TM
extern kcg_bool kcg_comp_Array04_TM(Array04_TM *kcg_c1, Array04_TM *kcg_c2);
#endif /* kcg_comp_Array04_TM */
#endif /* kcg_use_Array04_TM */

#ifdef kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_StaticSpeedProfile_t_TrackAtlasTypes
#ifndef kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes(
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes */
#endif /* kcg_use_StaticSpeedProfile_t_TrackAtlasTypes */

#ifdef kcg_use_GradientProfile_t_TrackAtlasTypes
#ifndef kcg_comp_GradientProfile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_GradientProfile_t_TrackAtlasTypes(
  GradientProfile_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_GradientProfile_t_TrackAtlasTypes */
#endif /* kcg_use_GradientProfile_t_TrackAtlasTypes */

#ifdef kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes
#ifndef kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes
extern kcg_bool kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes(
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes */
#endif /* kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes */

#ifdef kcg_use_TelegramArray_T_BG_Types_Pkg
#ifndef kcg_comp_TelegramArray_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramArray_T_BG_Types_Pkg(
  TelegramArray_T_BG_Types_Pkg *kcg_c1,
  TelegramArray_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramArray_T_BG_Types_Pkg */
#endif /* kcg_use_TelegramArray_T_BG_Types_Pkg */

#ifdef kcg_use_array_76065
#ifndef kcg_comp_array_76065
extern kcg_bool kcg_comp_array_76065(array_76065 *kcg_c1, array_76065 *kcg_c2);
#endif /* kcg_comp_array_76065 */
#endif /* kcg_use_array_76065 */

#ifdef kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg
#ifndef kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg */
#endif /* kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_Target_list_MRSP_real_T_TargetManagement_types
#ifndef kcg_comp_Target_list_MRSP_real_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c1,
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_list_MRSP_real_T_TargetManagement_types */
#endif /* kcg_use_Target_list_MRSP_real_T_TargetManagement_types */

#ifdef kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P005_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P005_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P005_OBU_sectionlist_enum_T_TM(
  P005_OBU_sectionlist_enum_T_TM *kcg_c1,
  P005_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P005_OBU_sectionlist_enum_T_TM */

#ifndef kcg_comp_LinkedBGs_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBGs_T_BG_Types_Pkg(
  LinkedBGs_T_BG_Types_Pkg *kcg_c1,
  LinkedBGs_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBGs_T_BG_Types_Pkg
#endif /* kcg_comp_LinkedBGs_T_BG_Types_Pkg */

#ifdef kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_76114
#ifndef kcg_comp_array_76114
extern kcg_bool kcg_comp_array_76114(array_76114 *kcg_c1, array_76114 *kcg_c2);
#endif /* kcg_comp_array_76114 */
#endif /* kcg_use_array_76114 */

#ifdef kcg_use_IterPacket58List_T_Packet_Types_Pkg
#ifndef kcg_comp_IterPacket58List_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_IterPacket58List_T_Packet_Types_Pkg(
  IterPacket58List_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58List_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58List_T_Packet_Types_Pkg */
#endif /* kcg_use_IterPacket58List_T_Packet_Types_Pkg */

#ifdef kcg_use_array_bool_113
#ifndef kcg_comp_array_bool_113
extern kcg_bool kcg_comp_array_bool_113(
  array_bool_113 *kcg_c1,
  array_bool_113 *kcg_c2);
#endif /* kcg_comp_array_bool_113 */
#endif /* kcg_use_array_bool_113 */

#ifdef kcg_use_array_real_113
#ifndef kcg_comp_array_real_113
extern kcg_bool kcg_comp_array_real_113(
  array_real_113 *kcg_c1,
  array_real_113 *kcg_c2);
#endif /* kcg_comp_array_real_113 */
#endif /* kcg_use_array_real_113 */

#ifdef kcg_use_DMI_level_array_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_level_array_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_level_array_T_DMI_Types_Pkg(
  DMI_level_array_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_array_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_array_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_level_array_T_DMI_Types_Pkg */

#ifdef kcg_use_P046_sections_array_flat_T_TM
#ifndef kcg_comp_P046_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P046_sections_array_flat_T_TM(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P046_sections_array_flat_T_TM */
#endif /* kcg_use_P046_sections_array_flat_T_TM */

#ifdef kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg(
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_positionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_array_76247
#ifndef kcg_comp_array_76247
extern kcg_bool kcg_comp_array_76247(array_76247 *kcg_c1, array_76247 *kcg_c2);
#endif /* kcg_comp_array_76247 */
#endif /* kcg_use_array_76247 */

#ifndef kcg_comp_Metadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_Metadata_T_Common_Types_Pkg
#endif /* kcg_comp_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
#ifndef kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c1,
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */
#endif /* kcg_use_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintArray_T_Packet_Types_Pkg(
  nvkvintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_15
#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */
#endif /* kcg_use_array_int_15 */

#ifdef kcg_use_array_76298
#ifndef kcg_comp_array_76298
extern kcg_bool kcg_comp_array_76298(array_76298 *kcg_c1, array_76298 *kcg_c2);
#endif /* kcg_comp_array_76298 */
#endif /* kcg_use_array_76298 */

#ifdef kcg_use_array_76302
#ifndef kcg_comp_array_76302
extern kcg_bool kcg_comp_array_76302(array_76302 *kcg_c1, array_76302 *kcg_c2);
#endif /* kcg_comp_array_76302 */
#endif /* kcg_use_array_76302 */

#ifdef kcg_use_array_76336
#ifndef kcg_comp_array_76336
extern kcg_bool kcg_comp_array_76336(array_76336 *kcg_c1, array_76336 *kcg_c2);
#endif /* kcg_comp_array_76336 */
#endif /* kcg_use_array_76336 */

#ifdef kcg_use_array_real_100_8
#ifndef kcg_comp_array_real_100_8
extern kcg_bool kcg_comp_array_real_100_8(
  array_real_100_8 *kcg_c1,
  array_real_100_8 *kcg_c2);
#endif /* kcg_comp_array_real_100_8 */
#endif /* kcg_use_array_real_100_8 */

#ifdef kcg_use_array_int_7
#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */
#endif /* kcg_use_array_int_7 */

#ifdef kcg_use_array_int_128
#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */
#endif /* kcg_use_array_int_128 */

#ifdef kcg_use_array_int_3
#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */
#endif /* kcg_use_array_int_3 */

#ifdef kcg_use_array_real_100_13
#ifndef kcg_comp_array_real_100_13
extern kcg_bool kcg_comp_array_real_100_13(
  array_real_100_13 *kcg_c1,
  array_real_100_13 *kcg_c2);
#endif /* kcg_comp_array_real_100_13 */
#endif /* kcg_use_array_real_100_13 */

#ifdef kcg_use_array_real_3
#ifndef kcg_comp_array_real_3
extern kcg_bool kcg_comp_array_real_3(
  array_real_3 *kcg_c1,
  array_real_3 *kcg_c2);
#endif /* kcg_comp_array_real_3 */
#endif /* kcg_use_array_real_3 */

#ifdef kcg_use_array_76498
#ifndef kcg_comp_array_76498
extern kcg_bool kcg_comp_array_76498(array_76498 *kcg_c1, array_76498 *kcg_c2);
#endif /* kcg_comp_array_76498 */
#endif /* kcg_use_array_76498 */

#ifdef kcg_use_array_76502
#ifndef kcg_comp_array_76502
extern kcg_bool kcg_comp_array_76502(array_76502 *kcg_c1, array_76502 *kcg_c2);
#endif /* kcg_comp_array_76502 */
#endif /* kcg_use_array_76502 */

#ifdef kcg_use_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
#ifndef kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */
#endif /* kcg_use_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
#ifndef kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */
#endif /* kcg_use_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */

#ifdef kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes(
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c1,
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes */

#ifdef kcg_use_array_real_100_1
#ifndef kcg_comp_array_real_100_1
extern kcg_bool kcg_comp_array_real_100_1(
  array_real_100_1 *kcg_c1,
  array_real_100_1 *kcg_c2);
#endif /* kcg_comp_array_real_100_1 */
#endif /* kcg_use_array_real_100_1 */

#ifdef kcg_use_array_bool_30
#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */
#endif /* kcg_use_array_bool_30 */

#ifdef kcg_use_P046_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P046_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P046_OBU_sectionlist_enum_T_TM(
  P046_OBU_sectionlist_enum_T_TM *kcg_c1,
  P046_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P046_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_array_76646
#ifndef kcg_comp_array_76646
extern kcg_bool kcg_comp_array_76646(array_76646 *kcg_c1, array_76646 *kcg_c2);
#endif /* kcg_comp_array_76646 */
#endif /* kcg_use_array_76646 */

#ifdef kcg_use_MRSP_internal_T_TargetManagement_types
#ifndef kcg_comp_MRSP_internal_T_TargetManagement_types
extern kcg_bool kcg_comp_MRSP_internal_T_TargetManagement_types(
  MRSP_internal_T_TargetManagement_types *kcg_c1,
  MRSP_internal_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MRSP_internal_T_TargetManagement_types */
#endif /* kcg_use_MRSP_internal_T_TargetManagement_types */

#ifdef kcg_use_array_real_100_6
#ifndef kcg_comp_array_real_100_6
extern kcg_bool kcg_comp_array_real_100_6(
  array_real_100_6 *kcg_c1,
  array_real_100_6 *kcg_c2);
#endif /* kcg_comp_array_real_100_6 */
#endif /* kcg_use_array_real_100_6 */

#ifdef kcg_use_SSP_t_list_t_TA_MRSP
#ifndef kcg_comp_SSP_t_list_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_t_list_t_TA_MRSP(
  SSP_t_list_t_TA_MRSP *kcg_c1,
  SSP_t_list_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_t_list_t_TA_MRSP */
#endif /* kcg_use_SSP_t_list_t_TA_MRSP */

#ifdef kcg_use_MRSP_Profile_t_TrackAtlasTypes
#ifndef kcg_comp_MRSP_Profile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
  MRSP_Profile_t_TrackAtlasTypes *kcg_c1,
  MRSP_Profile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MRSP_Profile_t_TrackAtlasTypes */
#endif /* kcg_use_MRSP_Profile_t_TrackAtlasTypes */

#ifdef kcg_use_array_76681
#ifndef kcg_comp_array_76681
extern kcg_bool kcg_comp_array_76681(array_76681 *kcg_c1, array_76681 *kcg_c2);
#endif /* kcg_comp_array_76681 */
#endif /* kcg_use_array_76681 */

#ifdef kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_real_100
#ifndef kcg_comp_array_real_100
extern kcg_bool kcg_comp_array_real_100(
  array_real_100 *kcg_c1,
  array_real_100 *kcg_c2);
#endif /* kcg_comp_array_real_100 */
#endif /* kcg_use_array_real_100 */

#ifdef kcg_use_array_int_221
#ifndef kcg_comp_array_int_221
extern kcg_bool kcg_comp_array_int_221(
  array_int_221 *kcg_c1,
  array_int_221 *kcg_c2);
#endif /* kcg_comp_array_int_221 */
#endif /* kcg_use_array_int_221 */

#ifdef kcg_use_A_gradient_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_A_gradient_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_A_gradient_t_SDM_GradientAcceleration_types(
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_A_gradient_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_A_gradient_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_SSP_t_indexed_targets_list_t_TA_MRSP
#ifndef kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP(
  SSP_t_indexed_targets_list_t_TA_MRSP *kcg_c1,
  SSP_t_indexed_targets_list_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP */
#endif /* kcg_use_SSP_t_indexed_targets_list_t_TA_MRSP */

#ifdef kcg_use_MyArray_SDM_Commands_Pkg
#ifndef kcg_comp_MyArray_SDM_Commands_Pkg
extern kcg_bool kcg_comp_MyArray_SDM_Commands_Pkg(
  MyArray_SDM_Commands_Pkg *kcg_c1,
  MyArray_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_MyArray_SDM_Commands_Pkg */
#endif /* kcg_use_MyArray_SDM_Commands_Pkg */

#ifdef kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c1,
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifdef kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types(
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_array_bool_256
#ifndef kcg_comp_array_bool_256
extern kcg_bool kcg_comp_array_bool_256(
  array_bool_256 *kcg_c1,
  array_bool_256 *kcg_c2);
#endif /* kcg_comp_array_bool_256 */
#endif /* kcg_use_array_bool_256 */

#ifdef kcg_use_P015_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P015_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P015_OBU_sectionlist_enum_T_TM(
  P015_OBU_sectionlist_enum_T_TM *kcg_c1,
  P015_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P015_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_int_6
#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */
#endif /* kcg_use_array_int_6 */

#ifdef kcg_use_array_real_6
#ifndef kcg_comp_array_real_6
extern kcg_bool kcg_comp_array_real_6(
  array_real_6 *kcg_c1,
  array_real_6 *kcg_c2);
#endif /* kcg_comp_array_real_6 */
#endif /* kcg_use_array_real_6 */

#ifdef kcg_use_array_int_2
#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */
#endif /* kcg_use_array_int_2 */

#ifdef kcg_use_t_BrakeVt_t_SDMModelPkg
#ifndef kcg_comp_t_BrakeVt_t_SDMModelPkg
extern kcg_bool kcg_comp_t_BrakeVt_t_SDMModelPkg(
  t_BrakeVt_t_SDMModelPkg *kcg_c1,
  t_BrakeVt_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_BrakeVt_t_SDMModelPkg */
#endif /* kcg_use_t_BrakeVt_t_SDMModelPkg */

#ifdef kcg_use_array_int_6_221
#ifndef kcg_comp_array_int_6_221
extern kcg_bool kcg_comp_array_int_6_221(
  array_int_6_221 *kcg_c1,
  array_int_6_221 *kcg_c2);
#endif /* kcg_comp_array_int_6_221 */
#endif /* kcg_use_array_int_6_221 */

#ifdef kcg_use_array_76969
#ifndef kcg_comp_array_76969
extern kcg_bool kcg_comp_array_76969(array_76969 *kcg_c1, array_76969 *kcg_c2);
#endif /* kcg_comp_array_76969 */
#endif /* kcg_use_array_76969 */

#ifdef kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg
#ifndef kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg(
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg */
#endif /* kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg(
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_array_77004
#ifndef kcg_comp_array_77004
extern kcg_bool kcg_comp_array_77004(array_77004 *kcg_c1, array_77004 *kcg_c2);
#endif /* kcg_comp_array_77004 */
#endif /* kcg_use_array_77004 */

#ifdef kcg_use_array_77008
#ifndef kcg_comp_array_77008
extern kcg_bool kcg_comp_array_77008(array_77008 *kcg_c1, array_77008 *kcg_c2);
#endif /* kcg_comp_array_77008 */
#endif /* kcg_use_array_77008 */

#ifdef kcg_use_SSP_t_cat_t_TA_MRSP
#ifndef kcg_comp_SSP_t_cat_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_t_cat_t_TA_MRSP(
  SSP_t_cat_t_TA_MRSP *kcg_c1,
  SSP_t_cat_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_t_cat_t_TA_MRSP */
#endif /* kcg_use_SSP_t_cat_t_TA_MRSP */

#ifdef kcg_use_SSP_t_matrix_t_TA_MRSP
#ifndef kcg_comp_SSP_t_matrix_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_t_matrix_t_TA_MRSP(
  SSP_t_matrix_t_TA_MRSP *kcg_c1,
  SSP_t_matrix_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_t_matrix_t_TA_MRSP */
#endif /* kcg_use_SSP_t_matrix_t_TA_MRSP */

#ifdef kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */

#ifdef kcg_use_nidCArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nidCArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nidCArray_T_Packet_Types_Pkg(
  nidCArray_T_Packet_Types_Pkg *kcg_c1,
  nidCArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nidCArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nidCArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_77095
#ifndef kcg_comp_array_77095
extern kcg_bool kcg_comp_array_77095(array_77095 *kcg_c1, array_77095 *kcg_c2);
#endif /* kcg_comp_array_77095 */
#endif /* kcg_use_array_77095 */

#ifdef kcg_use_ModeDecisionTableType_DataDictionary_Pkg
#ifndef kcg_comp_ModeDecisionTableType_DataDictionary_Pkg
extern kcg_bool kcg_comp_ModeDecisionTableType_DataDictionary_Pkg(
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c1,
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c2);
#endif /* kcg_comp_ModeDecisionTableType_DataDictionary_Pkg */
#endif /* kcg_use_ModeDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_array_int_64
#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */
#endif /* kcg_use_array_int_64 */

#ifdef kcg_use_SSP_cat_t_TA_MRSP
#ifndef kcg_comp_SSP_cat_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_cat_t_TA_MRSP(
  SSP_cat_t_TA_MRSP *kcg_c1,
  SSP_cat_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_cat_t_TA_MRSP */
#endif /* kcg_use_SSP_cat_t_TA_MRSP */

#ifdef kcg_use_nvkrintArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkrintArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkrintArray_T_Packet_Types_Pkg(
  nvkrintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkrintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrintArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkrintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_ASafe_Data_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafe_Data_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafe_Data_T_CalcBrakingCurves_types(
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafe_Data_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafe_Data_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_int_99
#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */
#endif /* kcg_use_array_int_99 */

#ifdef kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg(
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg */

#ifdef kcg_use_array_int_13
#ifndef kcg_comp_array_int_13
extern kcg_bool kcg_comp_array_int_13(
  array_int_13 *kcg_c1,
  array_int_13 *kcg_c2);
#endif /* kcg_comp_array_int_13 */
#endif /* kcg_use_array_int_13 */

#ifdef kcg_use_array_real_13
#ifndef kcg_comp_array_real_13
extern kcg_bool kcg_comp_array_real_13(
  array_real_13 *kcg_c1,
  array_real_13 *kcg_c2);
#endif /* kcg_comp_array_real_13 */
#endif /* kcg_use_array_real_13 */

#ifdef kcg_use_DMI_TEXT_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TEXT_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TEXT_DMI_Types_Pkg(
  DMI_TEXT_DMI_Types_Pkg *kcg_c1,
  DMI_TEXT_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TEXT_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TEXT_DMI_Types_Pkg */

#ifdef kcg_use_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P041_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P041_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P041_OBU_sectionlist_enum_T_TM(
  P041_OBU_sectionlist_enum_T_TM *kcg_c1,
  P041_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P041_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P021_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P021_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P021_OBU_sectionlist_enum_T_TM(
  P021_OBU_sectionlist_enum_T_TM *kcg_c1,
  P021_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P021_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_77257
#ifndef kcg_comp_array_77257
extern kcg_bool kcg_comp_array_77257(array_77257 *kcg_c1, array_77257 *kcg_c2);
#endif /* kcg_comp_array_77257 */
#endif /* kcg_use_array_77257 */

#ifdef kcg_use_array_77261
#ifndef kcg_comp_array_77261
extern kcg_bool kcg_comp_array_77261(array_77261 *kcg_c1, array_77261 *kcg_c2);
#endif /* kcg_comp_array_77261 */
#endif /* kcg_use_array_77261 */

#ifdef kcg_use_SSP_matrix_t_TA_MRSP
#ifndef kcg_comp_SSP_matrix_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_matrix_t_TA_MRSP(
  SSP_matrix_t_TA_MRSP *kcg_c1,
  SSP_matrix_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_matrix_t_TA_MRSP */
#endif /* kcg_use_SSP_matrix_t_TA_MRSP */

#ifdef kcg_use_Array05_TM
#ifndef kcg_comp_Array05_TM
extern kcg_bool kcg_comp_Array05_TM(Array05_TM *kcg_c1, Array05_TM *kcg_c2);
#endif /* kcg_comp_Array05_TM */
#endif /* kcg_use_Array05_TM */

#ifdef kcg_use_array_bool_1
#ifndef kcg_comp_array_bool_1
extern kcg_bool kcg_comp_array_bool_1(
  array_bool_1 *kcg_c1,
  array_bool_1 *kcg_c2);
#endif /* kcg_comp_array_bool_1 */
#endif /* kcg_use_array_bool_1 */

#ifdef kcg_use_array_int_1
#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */
#endif /* kcg_use_array_int_1 */

#ifdef kcg_use_array_real_1
#ifndef kcg_comp_array_real_1
extern kcg_bool kcg_comp_array_real_1(
  array_real_1 *kcg_c1,
  array_real_1 *kcg_c2);
#endif /* kcg_comp_array_real_1 */
#endif /* kcg_use_array_real_1 */

#ifdef kcg_use_P058_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P058_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P058_OBU_sectionlist_enum_T_TM(
  P058_OBU_sectionlist_enum_T_TM *kcg_c1,
  P058_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P058_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage
#ifndef kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage
extern kcg_bool kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage(
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c1,
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c2);
#endif /* kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage */
#endif /* kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types(
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_real_114
#ifndef kcg_comp_array_real_114
extern kcg_bool kcg_comp_array_real_114(
  array_real_114 *kcg_c1,
  array_real_114 *kcg_c2);
#endif /* kcg_comp_array_real_114 */
#endif /* kcg_use_array_real_114 */

#ifdef kcg_use_array_int_32
#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */
#endif /* kcg_use_array_int_32 */

#ifdef kcg_use_P005_sections_array_flat_T_TM
#ifndef kcg_comp_P005_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P005_sections_array_flat_T_TM(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P005_sections_array_flat_T_TM */
#endif /* kcg_use_P005_sections_array_flat_T_TM */

#ifdef kcg_use_Array24_TM
#ifndef kcg_comp_Array24_TM
extern kcg_bool kcg_comp_Array24_TM(Array24_TM *kcg_c1, Array24_TM *kcg_c2);
#endif /* kcg_comp_Array24_TM */
#endif /* kcg_use_Array24_TM */

#ifdef kcg_use_SSPArray_T_Packet_Types_Pkg
#ifndef kcg_comp_SSPArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_SSPArray_T_Packet_Types_Pkg(
  SSPArray_T_Packet_Types_Pkg *kcg_c1,
  SSPArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSPArray_T_Packet_Types_Pkg */
#endif /* kcg_use_SSPArray_T_Packet_Types_Pkg */

#ifdef kcg_use_DiffArray_T_Packet_Types_Pkg
#ifndef kcg_comp_DiffArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_DiffArray_T_Packet_Types_Pkg(
  DiffArray_T_Packet_Types_Pkg *kcg_c1,
  DiffArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DiffArray_T_Packet_Types_Pkg */
#endif /* kcg_use_DiffArray_T_Packet_Types_Pkg */

#ifdef kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg
#ifndef kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg(
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg */
#endif /* kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintsetArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg(
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintsetArray_T_Packet_Types_Pkg */

#ifdef kcg_use_LevelDecisionTableType_DataDictionary_Pkg
#ifndef kcg_comp_LevelDecisionTableType_DataDictionary_Pkg
extern kcg_bool kcg_comp_LevelDecisionTableType_DataDictionary_Pkg(
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c1,
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c2);
#endif /* kcg_comp_LevelDecisionTableType_DataDictionary_Pkg */
#endif /* kcg_use_LevelDecisionTableType_DataDictionary_Pkg */

#ifndef kcg_comp_CompressedPacketData_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPacketData_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_array_78651
#ifndef kcg_comp_array_78651
extern kcg_bool kcg_comp_array_78651(array_78651 *kcg_c1, array_78651 *kcg_c2);
#endif /* kcg_comp_array_78651 */
#endif /* kcg_use_array_78651 */

#ifdef kcg_use_array_bool_8
#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */
#endif /* kcg_use_array_bool_8 */

#ifdef kcg_use_Array08_TM
#ifndef kcg_comp_Array08_TM
extern kcg_bool kcg_comp_Array08_TM(Array08_TM *kcg_c1, Array08_TM *kcg_c2);
#endif /* kcg_comp_Array08_TM */
#endif /* kcg_use_Array08_TM */

#ifdef kcg_use_array_real_8
#ifndef kcg_comp_array_real_8
extern kcg_bool kcg_comp_array_real_8(
  array_real_8 *kcg_c1,
  array_real_8 *kcg_c2);
#endif /* kcg_comp_array_real_8 */
#endif /* kcg_use_array_real_8 */

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct_76674

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct_76674

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array_76646

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array_76646

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct_76792

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct_76792

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array_77008

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array_77008

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct_78479

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct_78479

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array_76298

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array_76298

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct_77034

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct_77034

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array_77004

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array_77004

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct_76993

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct_76993

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct_78522

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct_78522

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct_76545

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct_76545

#define kcg_comp_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_comp_struct_76928

#define kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_copy_struct_76928

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct_76606

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct_76606

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct_76606

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct_76606

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct_76527

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct_76527

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct_77209

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct_77209

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct_77209

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct_77209

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct_76928

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct_76928

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct_76527

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct_76527

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct_76907

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct_76907

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct_76993

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct_76993

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array_76114

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array_76114

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct_76993

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct_76993

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array_76114

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array_76114

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct_76674

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct_76674

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array_76646

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array_76646

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct_76792

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct_76792

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array_77008

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array_77008

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct_78479

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct_78479

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array_76298

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array_76298

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct_77034

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct_77034

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array_77004

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array_77004

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct_76853

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct_76853

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct_76853

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct_76853

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_76853

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_76853

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_76853

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_76853

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_v_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_a_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_v_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_v_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_a_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_a_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_v_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_v_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_m_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_m_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_LKrIntLookUp_t_SDMConversionModelPkg kcg_comp_array_int_32

#define kcg_copy_LKrIntLookUp_t_SDMConversionModelPkg kcg_copy_array_int_32

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_copy_array_real_3

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_real_3

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct_76907

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct_76907

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct_76545

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct_76545

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct_76615

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct_76615

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct_76615

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct_76615

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct_76615

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct_76615

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct_76615

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct_76615

#define kcg_comp_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct_78522

#define kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct_78522

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct_76853

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct_76853

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct_76853

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct_76853

#endif /* _KCG_TYPES_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

