/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-30T15:42:56
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

/* TIU_Types_Pkg::cab_ID_T */
typedef enum {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
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
/* DMI_Types_Pkg::Icon_control_flag_T */
typedef enum {
  show_icon_in_area_DMI_Types_Pkg,
  clear_area_DMI_Types_Pkg,
  show_icon_flashing_in_area_DMI_Types_Pkg,
  show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg
} Icon_control_flag_T_DMI_Types_Pkg;
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
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condit = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_cond = 3
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
  M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_ = 7,
  M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on = 8,
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_sectio = 9,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_fo = 10
} M_TRACKCOND;
/* M_ADHESION */
typedef enum {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
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
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
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
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
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
/* NC_TRAIN */
typedef enum {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
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
/* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
typedef enum {
  _12_SSM_TR_no_trans_SM1,
  _11_SSM_TR_stop_1_SM1,
  _10_SSM_TR_start_1_SM1
} _13_SSM_TR_SM1;
/* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
typedef enum { _8_SSM_st_stop_SM1, _7_SSM_st_start_SM1 } _9_SSM_ST_SM1;
/* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
typedef enum {
  SSM_TR_no_trans_PlanningAreaStatus,
  SSM_TR_NotVisible_1_PlanningAreaStatus,
  SSM_TR_Visible_1_PlanningAreaStatus
} SSM_TR_PlanningAreaStatus;
/* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
typedef enum {
  SSM_st_NotVisible_PlanningAreaStatus,
  SSM_st_Visible_PlanningAreaStatus
} SSM_ST_PlanningAreaStatus;
/* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */
typedef enum {
  _5_SSM_TR_no_trans_SM1,
  SSM_TR_stop_1_SM1,
  SSM_TR_start_1_SM1
} _6_SSM_TR_SM1;
/* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */
typedef enum { SSM_st_stop_SM1, SSM_st_start_SM1 } _4_SSM_ST_SM1;
/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
typedef enum {
  _2_SSM_TR_no_trans_SM1,
  SSM_TR_insert1_1_SM1,
  SSM_TR_State2_1_SM1,
  SSM_TR_insert2_1_SM1,
  SSM_TR_State4_1_SM1,
  SSM_TR_insert3_1_SM1,
  SSM_TR_State6_1_SM1,
  SSM_TR_insert4_1_SM1,
  SSM_TR_State8_1_SM1,
  SSM_TR_State0_1_SM1,
  SSM_TR_insertAck2_1_SM1,
  SSM_TR_insertAck1_1_SM1,
  SSM_TR_State5_1_SM1,
  SSM_TR_State3_1_SM1,
  SSM_TR_insert5_1_SM1,
  SSM_TR_State7_1_SM1,
  SSM_TR_insert6_1_SM1
} _3_SSM_TR_SM1;
/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
typedef enum {
  SSM_st_insert1_SM1,
  SSM_st_State2_SM1,
  SSM_st_insert2_SM1,
  SSM_st_State4_SM1,
  SSM_st_insert3_SM1,
  SSM_st_State6_SM1,
  SSM_st_insert4_SM1,
  SSM_st_State8_SM1,
  SSM_st_State0_SM1,
  SSM_st_insertAck2_SM1,
  SSM_st_insertAck1_SM1,
  SSM_st_State5_SM1,
  SSM_st_State3_SM1,
  SSM_st_insert5_SM1,
  SSM_st_State7_SM1,
  SSM_st_insert6_SM1,
  SSM_st_State9_SM1
} _1_SSM_ST_SM1;
/* ZoomLevel::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_Zoom1_1_SM1,
  SSM_TR_Zoom2_1_SM1,
  SSM_TR_Zoom2_2_SM1,
  SSM_TR_Zoom4_1_SM1,
  SSM_TR_Zoom4_2_SM1,
  SSM_TR_Zoom3_1_SM1,
  SSM_TR_Zoom3_2_SM1,
  SSM_TR_Zoom6_1_SM1,
  SSM_TR_Zoom5_1_SM1,
  SSM_TR_Zoom5_2_SM1
} SSM_TR_SM1;
/* ZoomLevel::SM1 */
typedef enum {
  SSM_st_Zoom1_SM1,
  SSM_st_Zoom2_SM1,
  SSM_st_Zoom4_SM1,
  SSM_st_Zoom3_SM1,
  SSM_st_Zoom6_SM1,
  SSM_st_Zoom5_SM1
} SSM_ST_SM1;
/* DMI_Control_Pkg::DMI_Controller::CabinSM */
typedef enum {
  SSM_TR_no_trans_CabinSM,
  SSM_TR_DeskIsOpen_1_CabinSM,
  SSM_TR_DeskIsClose_1_CabinSM
} SSM_TR_CabinSM;
/* DMI_Control_Pkg::DMI_Controller::CabinSM */
typedef enum {
  SSM_st_DeskIsOpen_CabinSM,
  SSM_st_DeskIsClose_CabinSM
} SSM_ST_CabinSM;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */
typedef enum {
  SSM_TR_no_trans_HandshakeSM_CabinSM_DeskIsOpen,
  SSM_TR_WaitingForIdentifierRequest_1_HandshakeSM_CabinSM_DeskIsOpen
} SSM_TR_HandshakeSM_CabinSM_DeskIsOpen;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */
typedef enum {
  SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM,
  SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM
} SSM_ST_HandshakeSM_CabinSM_DeskIsOpen;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3 */
typedef enum {
  SSM_TR_no_trans_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_AckOff_1_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_AckOn_1_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3 */
typedef enum {
  SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3,
  SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3
} SSM_ST_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
typedef enum {
  SSM_TR_no_trans_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_ReadSpeedSupervisionInfo_1_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationAct,
  SSM_TR_idle_1_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
typedef enum {
  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS,
  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM
} SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */
typedef enum {
  SSM_TR_no_trans_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_HideHourglass_1_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_ShowHourGlass_1_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */
typedef enum {
  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM,
  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM
} SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */
typedef enum {
  SSM_TR_no_trans_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_1_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_2_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_SendC9Ack_1_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_SendC1Ack_1_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */
typedef enum {
  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17,
  SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17,
  SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17
} SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */
typedef enum {
  SSM_TR_no_trans_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_radyToBeAck_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_radyToBeAck_2_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_brakeSymbolAcked_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_C1AreaAcked_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */
typedef enum {
  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM,
  SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM,
  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM,
  SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM
} SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */
typedef enum {
  SSM_TR_no_trans_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_IconPacketValid_1_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_1_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */
typedef enum {
  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM,
  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM
} SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */
typedef enum {
  SSM_TR_no_trans_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_NO_1_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_YES_1_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */
typedef enum {
  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM,
  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM
} SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */
typedef enum {
  SSM_TR_no_trans_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_InternalDMI_TrainDataValues_1_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */
typedef enum {
  SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM,
  SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM
} SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */
typedef enum {
  SSM_TR_no_trans_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Insert_DriverID_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_2_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_3_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_4_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Insert_TrainRN_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_2_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_3_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_4_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_LevelWindow_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */
typedef enum {
  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM
} SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */
typedef enum {
  SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_5_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_DriverID_DMI_controlled_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques,
  SSM_TR_DriverID_DMI_controlled_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques,
  SSM_TR_TrainDataWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Main,
  SSM_TR_TrainDataWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Main,
  SSM_TR_TrainDataValidationWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_TrainDataValidationWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_TrainDataValidationWindow_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_TrainDataValidationWindow_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_Insert_TrainRN_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainM,
  SSM_TR_Insert_TrainRN_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainM,
  SSM_TR_WaitingLevelInformation_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques,
  SSM_TR_LevelWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_LevelWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu
} SSM_TR_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */
typedef enum {
  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows,
  SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe,
  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS,
  SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM
} SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
/* float32 */
typedef kcg_real float32;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_C */
typedef kcg_int NID_C;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* D_TRACKCOND */
typedef kcg_int D_TRACKCOND;

/* NID_MN */
typedef kcg_int NID_MN;

/* int32 */
typedef kcg_int int32;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* DMI_Types_Pkg::NID_STM */
typedef kcg_int NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::M_BRAKEPERCT */
typedef kcg_int M_BRAKEPERCT_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T */
typedef kcg_int DMI_TextMessage_ID_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::BCD */
typedef kcg_int BCD_DMI_Types_Pkg;

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

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

typedef struct { kcg_int now; kcg_int distance; } struct__31251;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct__31251 D_test_distance_T_TIU_Types_Pkg;

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
} struct__31256;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct__31256 nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} struct__31262;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct__31262 Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__31268;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__31268 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__31273[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__31273 aTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef kcg_int array_int_5[5];

/* V5 */
typedef array_int_5 V5;

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_5 aNID_NTC_T_Packet_TrainTypes_Pkg;

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
} struct__31279;

/* TIU_Types_Pkg::trainData_T */
typedef struct__31279 trainData_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int pressure; } struct__31297;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct__31297 Brake_pressure_value_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} struct__31302;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct__31302 Brake_status_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} struct__31311;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct__31311 Mode_control_and_train_status_T_TIU_Types_Pkg;

typedef struct {
  Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} struct__31322;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct__31322 Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg info;
} struct__31331;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct__31331 TIU_Input_msg_API_TIU_Pkg;

typedef kcg_int array_int_311[311];

/* API_DMI_Pkg::DMI_to_EVC_Message_int_T */
typedef array_int_311 DMI_to_EVC_Message_int_T_API_DMI_Pkg;

typedef kcg_int array_int_999[999];

/* API_DMI_Pkg::EVC_to_DMI_Message_int_T */
typedef array_int_999 EVC_to_DMI_Message_int_T_API_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} struct__31342;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct__31342 DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct { M_LEVEL level; NID_STM_DMI_Types_Pkg nid_stm; } struct__31348;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct__31348 DMI_level_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} struct__31353;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct__31353 DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

typedef kcg_real array_real_32[32];

typedef kcg_int array_int_9[9];

/* DATA::DMI_EVC_Coded_Train_Data_int_array_T */
typedef array_int_9 DMI_EVC_Coded_Train_Data_int_array_T_DATA;

/* DATA::DMI_Train_Data_int_array_T */
typedef array_int_9 DMI_Train_Data_int_array_T_DATA;

/* DATA::DMI_Icons_int_array_T */
typedef array_int_9 DMI_Icons_int_array_T_DATA;

/* DATA::DriverIdentifier_INT_T */
typedef array_int_9 DriverIdentifier_INT_T_DATA;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} struct__31365;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct__31365 DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

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
} struct__31373;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct__31373 DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} struct__31383;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct__31383 DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} struct__31390;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct__31390 DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} struct__31397;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct__31397 DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} struct__31403;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct__31403 DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} struct__31409;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct__31409 DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} struct__31415;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct__31415 DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

typedef kcg_char array_char_9[9];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef array_char_9 driverIdentifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} struct__31424;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct__31424 DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

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
} struct__31430;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct__31430 DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

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
} struct__31442;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct__31442 DMI_to_EVC_Message_T_API_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} struct__31458;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct__31458 DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} struct__31464;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct__31464 DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} struct__31470;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct__31470 DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
} struct__31476;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct__31476 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct__31476 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct__31476 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct__31476 DMI_loadingGauge_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} struct__31483;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct__31483 DMI_train_length_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} struct__31491;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct__31491 DMI_train_id_T_DMI_Types_Pkg;

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
} struct__31500;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct__31500 DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} struct__31512;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct__31512 DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} struct__31522;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct__31522 DMI_trackConditionElement_T_DMI_Types_Pkg;

typedef DMI_trackConditionElement_T_DMI_Types_Pkg array__31527[32];

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef array__31527 DMI_trackConditionArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} struct__31530;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct__31530 DMI_trackCondition_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__31535;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct__31535 DMI_speedProfileElement_T_DMI_Types_Pkg;

typedef DMI_speedProfileElement_T_DMI_Types_Pkg array__31542[32];

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef array__31542 DMI_SpeedProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} struct__31545;

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct__31545 DMI_speedProfile_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__31550;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct__31550 DMI_gradientProfileElement_T_DMI_Types_Pkg;

typedef DMI_gradientProfileElement_T_DMI_Types_Pkg array__31557[32];

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef array__31557 DMI_gradientProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} struct__31560;

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct__31560 DMI_gradientProfile_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} struct__31565;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct__31565 DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int system_clock;
  kcg_int textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  kcg_int l_text;
  array_char_255 x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} struct__31573;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct__31573 DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__31584;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct__31584 DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__31610;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct__31610 DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__31622;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct__31622 DMI_Available_Menu_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} struct__31655;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct__31655 DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} struct__31661;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct__31661 DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef DMI_level_T_DMI_Types_Pkg array__31667[32];

/* DMI_Types_Pkg::DMI_level_array_T */
typedef array__31667 DMI_level_array_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} struct__31670;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct__31670 DMI_LevelList_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} struct__31675;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct__31675 DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__31681;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct__31681 EVC_to_DMI_Message_T_API_DMI_Pkg;

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

typedef kcg_int array_int_4[4];

/* DATA::DMI_Status_int_array_T */
typedef array_int_4 DMI_Status_int_array_T_DATA;

/* DATA::DMI_Text_Message_Ack_int_array_T */
typedef array_int_4 DMI_Text_Message_Ack_int_array_T_DATA;

/* DATA::DMI_Level_Data_int_array_T */
typedef array_int_4 DMI_Level_Data_int_array_T_DATA;

typedef kcg_int array_int_2[2];

/* DATA::DMI_Radio_Net_Data_int_array_T */
typedef array_int_2 DMI_Radio_Net_Data_int_array_T_DATA;

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

typedef kcg_int array_int_65[65];

/* DMI_trackCondition_int_array_T */
typedef array_int_65 DMI_trackCondition_int_array_T;

/* DATA::DMI_LevelList_int_array_T */
typedef array_int_65 DMI_LevelList_int_array_T_DATA;

typedef kcg_int array_int_67[67];

/* DATA::DMI_EVC_Level_Data_int_array_T */
typedef array_int_67 DMI_EVC_Level_Data_int_array_T_DATA;

typedef kcg_int array_int_129[129];

/* DMI_gradientProfile_int_arrayT */
typedef array_int_129 DMI_gradientProfile_int_arrayT;

/* DATA::DMI_speedProfile_int_array_T */
typedef array_int_129 DMI_speedProfile_int_array_T_DATA;

typedef kcg_int array_int_325[325];

/* DMI_Track_Description_int_array_T */
typedef array_int_325 DMI_Track_Description_int_array_T;

typedef kcg_int array_int_262[262];

/* DATA::DMI_Text_Message_int_array_T */
typedef array_int_262 DMI_Text_Message_int_array_T_DATA;

typedef kcg_bool array_bool_30[30];

/* DATA::DMI_Available_Menu_int_T */
typedef array_bool_30 DMI_Available_Menu_int_T_DATA;

typedef kcg_int array_int_24[24];

/* DATA::DMI_Dynamic_int_array_T */
typedef array_int_24 DMI_Dynamic_int_array_T_DATA;

typedef struct { kcg_bool present; struct__31573 dmi_msg; } struct__31740;

/* MsgStructure */
typedef struct__31740 MsgStructure;

typedef DMI_Q_TEXT_DMI_Types_Pkg array__31745[27];

/* Array_DMI_Q_Text */
typedef array__31745 Array_DMI_Q_Text;

typedef kcg_char array_char_30[30];

typedef array_char_30 array_char_30_5[5];

typedef kcg_real array_real_5[5];

typedef MsgStructure array__31757[10];

typedef kcg_real array_real_10[10];

/* tPASP_Array */
typedef array_real_10 tPASP_Array;

typedef MsgStructure array__31763[5];

typedef DMI_List_Entry_Request_T_DMI_Types_Pkg array__31766[15];

/* Array_DMI_List_Entry_Request */
typedef array__31766 Array_DMI_List_Entry_Request;

typedef kcg_bool array_bool_15[15];

typedef struct {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} struct__31772;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct__31772 TIU_trainStatus_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool visable;
  kcg_real start_gp;
  kcg_real end_gp;
} struct__31779;

/* DMI_Control_Pkg::Sub_func::GP */
typedef struct__31779 GP_DMI_Control_Pkg_Sub_func;

typedef kcg_int array_int_8[8];

typedef kcg_real array_real_9[9];

/* tScale */
typedef array_real_9 tScale;

typedef kcg_bool array_bool_32[32];

typedef kcg_real array_real_4[4];

/* tPASPOutput_Array */
typedef array_real_4 tPASPOutput_Array;

typedef kcg_int array_int_10[10];

typedef kcg_bool array_bool_10[10];

typedef kcg_char array_char_12[12];

typedef kcg_int array_int_30[30];

typedef kcg_real array_real_6[6];

typedef tScale array_real_9_6[6];

typedef array_real_10 array_real_10_2[2];

/* tSpeedPoints */
typedef array_real_10_2 tSpeedPoints;

typedef kcg_bool array_bool_12[12];

typedef kcg_int array_int_12[12];

typedef kcg_int array_int_32[32];

typedef kcg_real array_real_1[1];

typedef kcg_char array_char_243[243];

typedef MsgStructure array__32700[4];

typedef MsgStructure array__32707[9];

#ifndef kcg_copy_struct__31251
#define kcg_copy_struct__31251(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31251)))
#endif /* kcg_copy_struct__31251 */

#ifndef kcg_copy_struct__31256
#define kcg_copy_struct__31256(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31256)))
#endif /* kcg_copy_struct__31256 */

#ifndef kcg_copy_struct__31262
#define kcg_copy_struct__31262(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31262)))
#endif /* kcg_copy_struct__31262 */

#ifndef kcg_copy_struct__31268
#define kcg_copy_struct__31268(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31268)))
#endif /* kcg_copy_struct__31268 */

#ifndef kcg_copy_struct__31279
#define kcg_copy_struct__31279(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31279)))
#endif /* kcg_copy_struct__31279 */

#ifndef kcg_copy_struct__31297
#define kcg_copy_struct__31297(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31297)))
#endif /* kcg_copy_struct__31297 */

#ifndef kcg_copy_struct__31302
#define kcg_copy_struct__31302(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31302)))
#endif /* kcg_copy_struct__31302 */

#ifndef kcg_copy_struct__31311
#define kcg_copy_struct__31311(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31311)))
#endif /* kcg_copy_struct__31311 */

#ifndef kcg_copy_struct__31322
#define kcg_copy_struct__31322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31322)))
#endif /* kcg_copy_struct__31322 */

#ifndef kcg_copy_struct__31331
#define kcg_copy_struct__31331(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31331)))
#endif /* kcg_copy_struct__31331 */

#ifndef kcg_copy_struct__31342
#define kcg_copy_struct__31342(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31342)))
#endif /* kcg_copy_struct__31342 */

#ifndef kcg_copy_struct__31348
#define kcg_copy_struct__31348(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31348)))
#endif /* kcg_copy_struct__31348 */

#ifndef kcg_copy_struct__31353
#define kcg_copy_struct__31353(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31353)))
#endif /* kcg_copy_struct__31353 */

#ifndef kcg_copy_struct__31365
#define kcg_copy_struct__31365(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31365)))
#endif /* kcg_copy_struct__31365 */

#ifndef kcg_copy_struct__31373
#define kcg_copy_struct__31373(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31373)))
#endif /* kcg_copy_struct__31373 */

#ifndef kcg_copy_struct__31383
#define kcg_copy_struct__31383(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31383)))
#endif /* kcg_copy_struct__31383 */

#ifndef kcg_copy_struct__31390
#define kcg_copy_struct__31390(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31390)))
#endif /* kcg_copy_struct__31390 */

#ifndef kcg_copy_struct__31397
#define kcg_copy_struct__31397(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31397)))
#endif /* kcg_copy_struct__31397 */

#ifndef kcg_copy_struct__31403
#define kcg_copy_struct__31403(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31403)))
#endif /* kcg_copy_struct__31403 */

#ifndef kcg_copy_struct__31409
#define kcg_copy_struct__31409(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31409)))
#endif /* kcg_copy_struct__31409 */

#ifndef kcg_copy_struct__31415
#define kcg_copy_struct__31415(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31415)))
#endif /* kcg_copy_struct__31415 */

#ifndef kcg_copy_struct__31424
#define kcg_copy_struct__31424(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31424)))
#endif /* kcg_copy_struct__31424 */

#ifndef kcg_copy_struct__31430
#define kcg_copy_struct__31430(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31430)))
#endif /* kcg_copy_struct__31430 */

#ifndef kcg_copy_struct__31442
#define kcg_copy_struct__31442(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31442)))
#endif /* kcg_copy_struct__31442 */

#ifndef kcg_copy_struct__31458
#define kcg_copy_struct__31458(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31458)))
#endif /* kcg_copy_struct__31458 */

#ifndef kcg_copy_struct__31464
#define kcg_copy_struct__31464(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31464)))
#endif /* kcg_copy_struct__31464 */

#ifndef kcg_copy_struct__31470
#define kcg_copy_struct__31470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31470)))
#endif /* kcg_copy_struct__31470 */

#ifndef kcg_copy_struct__31476
#define kcg_copy_struct__31476(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31476)))
#endif /* kcg_copy_struct__31476 */

#ifndef kcg_copy_struct__31483
#define kcg_copy_struct__31483(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31483)))
#endif /* kcg_copy_struct__31483 */

#ifndef kcg_copy_struct__31491
#define kcg_copy_struct__31491(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31491)))
#endif /* kcg_copy_struct__31491 */

#ifndef kcg_copy_struct__31500
#define kcg_copy_struct__31500(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31500)))
#endif /* kcg_copy_struct__31500 */

#ifndef kcg_copy_struct__31512
#define kcg_copy_struct__31512(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31512)))
#endif /* kcg_copy_struct__31512 */

#ifndef kcg_copy_struct__31522
#define kcg_copy_struct__31522(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31522)))
#endif /* kcg_copy_struct__31522 */

#ifndef kcg_copy_struct__31530
#define kcg_copy_struct__31530(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31530)))
#endif /* kcg_copy_struct__31530 */

#ifndef kcg_copy_struct__31535
#define kcg_copy_struct__31535(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31535)))
#endif /* kcg_copy_struct__31535 */

#ifndef kcg_copy_struct__31545
#define kcg_copy_struct__31545(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31545)))
#endif /* kcg_copy_struct__31545 */

#ifndef kcg_copy_struct__31550
#define kcg_copy_struct__31550(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31550)))
#endif /* kcg_copy_struct__31550 */

#ifndef kcg_copy_struct__31560
#define kcg_copy_struct__31560(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31560)))
#endif /* kcg_copy_struct__31560 */

#ifndef kcg_copy_struct__31565
#define kcg_copy_struct__31565(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31565)))
#endif /* kcg_copy_struct__31565 */

#ifndef kcg_copy_struct__31573
#define kcg_copy_struct__31573(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31573)))
#endif /* kcg_copy_struct__31573 */

#ifndef kcg_copy_struct__31584
#define kcg_copy_struct__31584(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31584)))
#endif /* kcg_copy_struct__31584 */

#ifndef kcg_copy_struct__31610
#define kcg_copy_struct__31610(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31610)))
#endif /* kcg_copy_struct__31610 */

#ifndef kcg_copy_struct__31622
#define kcg_copy_struct__31622(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31622)))
#endif /* kcg_copy_struct__31622 */

#ifndef kcg_copy_struct__31655
#define kcg_copy_struct__31655(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31655)))
#endif /* kcg_copy_struct__31655 */

#ifndef kcg_copy_struct__31661
#define kcg_copy_struct__31661(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31661)))
#endif /* kcg_copy_struct__31661 */

#ifndef kcg_copy_struct__31670
#define kcg_copy_struct__31670(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31670)))
#endif /* kcg_copy_struct__31670 */

#ifndef kcg_copy_struct__31675
#define kcg_copy_struct__31675(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31675)))
#endif /* kcg_copy_struct__31675 */

#ifndef kcg_copy_struct__31681
#define kcg_copy_struct__31681(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31681)))
#endif /* kcg_copy_struct__31681 */

#ifndef kcg_copy_struct__31740
#define kcg_copy_struct__31740(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31740)))
#endif /* kcg_copy_struct__31740 */

#ifndef kcg_copy_struct__31772
#define kcg_copy_struct__31772(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31772)))
#endif /* kcg_copy_struct__31772 */

#ifndef kcg_copy_struct__31779
#define kcg_copy_struct__31779(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31779)))
#endif /* kcg_copy_struct__31779 */

#ifndef kcg_copy_array__31273
#define kcg_copy_array__31273(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31273)))
#endif /* kcg_copy_array__31273 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_311
#define kcg_copy_array_int_311(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_311)))
#endif /* kcg_copy_array_int_311 */

#ifndef kcg_copy_array_int_999
#define kcg_copy_array_int_999(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_999)))
#endif /* kcg_copy_array_int_999 */

#ifndef kcg_copy_array_real_32
#define kcg_copy_array_real_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_32)))
#endif /* kcg_copy_array_real_32 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_char_255
#define kcg_copy_array_char_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_255)))
#endif /* kcg_copy_array_char_255 */

#ifndef kcg_copy_array_char_9
#define kcg_copy_array_char_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_9)))
#endif /* kcg_copy_array_char_9 */

#ifndef kcg_copy_array__31527
#define kcg_copy_array__31527(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31527)))
#endif /* kcg_copy_array__31527 */

#ifndef kcg_copy_array__31542
#define kcg_copy_array__31542(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31542)))
#endif /* kcg_copy_array__31542 */

#ifndef kcg_copy_array__31557
#define kcg_copy_array__31557(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31557)))
#endif /* kcg_copy_array__31557 */

#ifndef kcg_copy_array__31667
#define kcg_copy_array__31667(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31667)))
#endif /* kcg_copy_array__31667 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_255
#define kcg_copy_array_int_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_255)))
#endif /* kcg_copy_array_int_255 */

#ifndef kcg_copy_array_int_261
#define kcg_copy_array_int_261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_261)))
#endif /* kcg_copy_array_int_261 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array_int_65
#define kcg_copy_array_int_65(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_65)))
#endif /* kcg_copy_array_int_65 */

#ifndef kcg_copy_array_int_67
#define kcg_copy_array_int_67(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_67)))
#endif /* kcg_copy_array_int_67 */

#ifndef kcg_copy_array_int_129
#define kcg_copy_array_int_129(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_129)))
#endif /* kcg_copy_array_int_129 */

#ifndef kcg_copy_array_int_325
#define kcg_copy_array_int_325(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_325)))
#endif /* kcg_copy_array_int_325 */

#ifndef kcg_copy_array_int_262
#define kcg_copy_array_int_262(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_262)))
#endif /* kcg_copy_array_int_262 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__31745
#define kcg_copy_array__31745(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31745)))
#endif /* kcg_copy_array__31745 */

#ifndef kcg_copy_array_char_30
#define kcg_copy_array_char_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_30)))
#endif /* kcg_copy_array_char_30 */

#ifndef kcg_copy_array_char_30_5
#define kcg_copy_array_char_30_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_30_5)))
#endif /* kcg_copy_array_char_30_5 */

#ifndef kcg_copy_array_real_5
#define kcg_copy_array_real_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_5)))
#endif /* kcg_copy_array_real_5 */

#ifndef kcg_copy_array__31757
#define kcg_copy_array__31757(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31757)))
#endif /* kcg_copy_array__31757 */

#ifndef kcg_copy_array_real_10
#define kcg_copy_array_real_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_10)))
#endif /* kcg_copy_array_real_10 */

#ifndef kcg_copy_array__31763
#define kcg_copy_array__31763(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31763)))
#endif /* kcg_copy_array__31763 */

#ifndef kcg_copy_array__31766
#define kcg_copy_array__31766(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31766)))
#endif /* kcg_copy_array__31766 */

#ifndef kcg_copy_array_bool_15
#define kcg_copy_array_bool_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_15)))
#endif /* kcg_copy_array_bool_15 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_real_9
#define kcg_copy_array_real_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_9)))
#endif /* kcg_copy_array_real_9 */

#ifndef kcg_copy_array_bool_32
#define kcg_copy_array_bool_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_32)))
#endif /* kcg_copy_array_bool_32 */

#ifndef kcg_copy_array_real_4
#define kcg_copy_array_real_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_4)))
#endif /* kcg_copy_array_real_4 */

#ifndef kcg_copy_array_int_10
#define kcg_copy_array_int_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_10)))
#endif /* kcg_copy_array_int_10 */

#ifndef kcg_copy_array_bool_10
#define kcg_copy_array_bool_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_10)))
#endif /* kcg_copy_array_bool_10 */

#ifndef kcg_copy_array_char_12
#define kcg_copy_array_char_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_12)))
#endif /* kcg_copy_array_char_12 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_real_6
#define kcg_copy_array_real_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_6)))
#endif /* kcg_copy_array_real_6 */

#ifndef kcg_copy_array_real_9_6
#define kcg_copy_array_real_9_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_9_6)))
#endif /* kcg_copy_array_real_9_6 */

#ifndef kcg_copy_array_real_10_2
#define kcg_copy_array_real_10_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_10_2)))
#endif /* kcg_copy_array_real_10_2 */

#ifndef kcg_copy_array_bool_12
#define kcg_copy_array_bool_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_12)))
#endif /* kcg_copy_array_bool_12 */

#ifndef kcg_copy_array_int_12
#define kcg_copy_array_int_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_12)))
#endif /* kcg_copy_array_int_12 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array_char_243
#define kcg_copy_array_char_243(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_243)))
#endif /* kcg_copy_array_char_243 */

#ifndef kcg_copy_array__32700
#define kcg_copy_array__32700(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__32700)))
#endif /* kcg_copy_array__32700 */

#ifndef kcg_copy_array__32707
#define kcg_copy_array__32707(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__32707)))
#endif /* kcg_copy_array__32707 */

#ifndef kcg_comp_struct__31251
extern kcg_bool kcg_comp_struct__31251(
  struct__31251 *kcg_c1,
  struct__31251 *kcg_c2);
#endif /* kcg_comp_struct__31251 */

#ifndef kcg_comp_struct__31256
extern kcg_bool kcg_comp_struct__31256(
  struct__31256 *kcg_c1,
  struct__31256 *kcg_c2);
#endif /* kcg_comp_struct__31256 */

#ifndef kcg_comp_struct__31262
extern kcg_bool kcg_comp_struct__31262(
  struct__31262 *kcg_c1,
  struct__31262 *kcg_c2);
#endif /* kcg_comp_struct__31262 */

#ifndef kcg_comp_struct__31268
extern kcg_bool kcg_comp_struct__31268(
  struct__31268 *kcg_c1,
  struct__31268 *kcg_c2);
#endif /* kcg_comp_struct__31268 */

#ifndef kcg_comp_struct__31279
extern kcg_bool kcg_comp_struct__31279(
  struct__31279 *kcg_c1,
  struct__31279 *kcg_c2);
#endif /* kcg_comp_struct__31279 */

#ifndef kcg_comp_struct__31297
extern kcg_bool kcg_comp_struct__31297(
  struct__31297 *kcg_c1,
  struct__31297 *kcg_c2);
#endif /* kcg_comp_struct__31297 */

#ifndef kcg_comp_struct__31302
extern kcg_bool kcg_comp_struct__31302(
  struct__31302 *kcg_c1,
  struct__31302 *kcg_c2);
#endif /* kcg_comp_struct__31302 */

#ifndef kcg_comp_struct__31311
extern kcg_bool kcg_comp_struct__31311(
  struct__31311 *kcg_c1,
  struct__31311 *kcg_c2);
#endif /* kcg_comp_struct__31311 */

#ifndef kcg_comp_struct__31322
extern kcg_bool kcg_comp_struct__31322(
  struct__31322 *kcg_c1,
  struct__31322 *kcg_c2);
#endif /* kcg_comp_struct__31322 */

#ifndef kcg_comp_struct__31331
extern kcg_bool kcg_comp_struct__31331(
  struct__31331 *kcg_c1,
  struct__31331 *kcg_c2);
#endif /* kcg_comp_struct__31331 */

#ifndef kcg_comp_struct__31342
extern kcg_bool kcg_comp_struct__31342(
  struct__31342 *kcg_c1,
  struct__31342 *kcg_c2);
#endif /* kcg_comp_struct__31342 */

#ifndef kcg_comp_struct__31348
extern kcg_bool kcg_comp_struct__31348(
  struct__31348 *kcg_c1,
  struct__31348 *kcg_c2);
#endif /* kcg_comp_struct__31348 */

#ifndef kcg_comp_struct__31353
extern kcg_bool kcg_comp_struct__31353(
  struct__31353 *kcg_c1,
  struct__31353 *kcg_c2);
#endif /* kcg_comp_struct__31353 */

#ifndef kcg_comp_struct__31365
extern kcg_bool kcg_comp_struct__31365(
  struct__31365 *kcg_c1,
  struct__31365 *kcg_c2);
#endif /* kcg_comp_struct__31365 */

#ifndef kcg_comp_struct__31373
extern kcg_bool kcg_comp_struct__31373(
  struct__31373 *kcg_c1,
  struct__31373 *kcg_c2);
#endif /* kcg_comp_struct__31373 */

#ifndef kcg_comp_struct__31383
extern kcg_bool kcg_comp_struct__31383(
  struct__31383 *kcg_c1,
  struct__31383 *kcg_c2);
#endif /* kcg_comp_struct__31383 */

#ifndef kcg_comp_struct__31390
extern kcg_bool kcg_comp_struct__31390(
  struct__31390 *kcg_c1,
  struct__31390 *kcg_c2);
#endif /* kcg_comp_struct__31390 */

#ifndef kcg_comp_struct__31397
extern kcg_bool kcg_comp_struct__31397(
  struct__31397 *kcg_c1,
  struct__31397 *kcg_c2);
#endif /* kcg_comp_struct__31397 */

#ifndef kcg_comp_struct__31403
extern kcg_bool kcg_comp_struct__31403(
  struct__31403 *kcg_c1,
  struct__31403 *kcg_c2);
#endif /* kcg_comp_struct__31403 */

#ifndef kcg_comp_struct__31409
extern kcg_bool kcg_comp_struct__31409(
  struct__31409 *kcg_c1,
  struct__31409 *kcg_c2);
#endif /* kcg_comp_struct__31409 */

#ifndef kcg_comp_struct__31415
extern kcg_bool kcg_comp_struct__31415(
  struct__31415 *kcg_c1,
  struct__31415 *kcg_c2);
#endif /* kcg_comp_struct__31415 */

#ifndef kcg_comp_struct__31424
extern kcg_bool kcg_comp_struct__31424(
  struct__31424 *kcg_c1,
  struct__31424 *kcg_c2);
#endif /* kcg_comp_struct__31424 */

#ifndef kcg_comp_struct__31430
extern kcg_bool kcg_comp_struct__31430(
  struct__31430 *kcg_c1,
  struct__31430 *kcg_c2);
#endif /* kcg_comp_struct__31430 */

#ifndef kcg_comp_struct__31442
extern kcg_bool kcg_comp_struct__31442(
  struct__31442 *kcg_c1,
  struct__31442 *kcg_c2);
#endif /* kcg_comp_struct__31442 */

#ifndef kcg_comp_struct__31458
extern kcg_bool kcg_comp_struct__31458(
  struct__31458 *kcg_c1,
  struct__31458 *kcg_c2);
#endif /* kcg_comp_struct__31458 */

#ifndef kcg_comp_struct__31464
extern kcg_bool kcg_comp_struct__31464(
  struct__31464 *kcg_c1,
  struct__31464 *kcg_c2);
#endif /* kcg_comp_struct__31464 */

#ifndef kcg_comp_struct__31470
extern kcg_bool kcg_comp_struct__31470(
  struct__31470 *kcg_c1,
  struct__31470 *kcg_c2);
#endif /* kcg_comp_struct__31470 */

#ifndef kcg_comp_struct__31476
extern kcg_bool kcg_comp_struct__31476(
  struct__31476 *kcg_c1,
  struct__31476 *kcg_c2);
#endif /* kcg_comp_struct__31476 */

#ifndef kcg_comp_struct__31483
extern kcg_bool kcg_comp_struct__31483(
  struct__31483 *kcg_c1,
  struct__31483 *kcg_c2);
#endif /* kcg_comp_struct__31483 */

#ifndef kcg_comp_struct__31491
extern kcg_bool kcg_comp_struct__31491(
  struct__31491 *kcg_c1,
  struct__31491 *kcg_c2);
#endif /* kcg_comp_struct__31491 */

#ifndef kcg_comp_struct__31500
extern kcg_bool kcg_comp_struct__31500(
  struct__31500 *kcg_c1,
  struct__31500 *kcg_c2);
#endif /* kcg_comp_struct__31500 */

#ifndef kcg_comp_struct__31512
extern kcg_bool kcg_comp_struct__31512(
  struct__31512 *kcg_c1,
  struct__31512 *kcg_c2);
#endif /* kcg_comp_struct__31512 */

#ifndef kcg_comp_struct__31522
extern kcg_bool kcg_comp_struct__31522(
  struct__31522 *kcg_c1,
  struct__31522 *kcg_c2);
#endif /* kcg_comp_struct__31522 */

#ifndef kcg_comp_struct__31530
extern kcg_bool kcg_comp_struct__31530(
  struct__31530 *kcg_c1,
  struct__31530 *kcg_c2);
#endif /* kcg_comp_struct__31530 */

#ifndef kcg_comp_struct__31535
extern kcg_bool kcg_comp_struct__31535(
  struct__31535 *kcg_c1,
  struct__31535 *kcg_c2);
#endif /* kcg_comp_struct__31535 */

#ifndef kcg_comp_struct__31545
extern kcg_bool kcg_comp_struct__31545(
  struct__31545 *kcg_c1,
  struct__31545 *kcg_c2);
#endif /* kcg_comp_struct__31545 */

#ifndef kcg_comp_struct__31550
extern kcg_bool kcg_comp_struct__31550(
  struct__31550 *kcg_c1,
  struct__31550 *kcg_c2);
#endif /* kcg_comp_struct__31550 */

#ifndef kcg_comp_struct__31560
extern kcg_bool kcg_comp_struct__31560(
  struct__31560 *kcg_c1,
  struct__31560 *kcg_c2);
#endif /* kcg_comp_struct__31560 */

#ifndef kcg_comp_struct__31565
extern kcg_bool kcg_comp_struct__31565(
  struct__31565 *kcg_c1,
  struct__31565 *kcg_c2);
#endif /* kcg_comp_struct__31565 */

#ifndef kcg_comp_struct__31573
extern kcg_bool kcg_comp_struct__31573(
  struct__31573 *kcg_c1,
  struct__31573 *kcg_c2);
#endif /* kcg_comp_struct__31573 */

#ifndef kcg_comp_struct__31584
extern kcg_bool kcg_comp_struct__31584(
  struct__31584 *kcg_c1,
  struct__31584 *kcg_c2);
#endif /* kcg_comp_struct__31584 */

#ifndef kcg_comp_struct__31610
extern kcg_bool kcg_comp_struct__31610(
  struct__31610 *kcg_c1,
  struct__31610 *kcg_c2);
#endif /* kcg_comp_struct__31610 */

#ifndef kcg_comp_struct__31622
extern kcg_bool kcg_comp_struct__31622(
  struct__31622 *kcg_c1,
  struct__31622 *kcg_c2);
#endif /* kcg_comp_struct__31622 */

#ifndef kcg_comp_struct__31655
extern kcg_bool kcg_comp_struct__31655(
  struct__31655 *kcg_c1,
  struct__31655 *kcg_c2);
#endif /* kcg_comp_struct__31655 */

#ifndef kcg_comp_struct__31661
extern kcg_bool kcg_comp_struct__31661(
  struct__31661 *kcg_c1,
  struct__31661 *kcg_c2);
#endif /* kcg_comp_struct__31661 */

#ifndef kcg_comp_struct__31670
extern kcg_bool kcg_comp_struct__31670(
  struct__31670 *kcg_c1,
  struct__31670 *kcg_c2);
#endif /* kcg_comp_struct__31670 */

#ifndef kcg_comp_struct__31675
extern kcg_bool kcg_comp_struct__31675(
  struct__31675 *kcg_c1,
  struct__31675 *kcg_c2);
#endif /* kcg_comp_struct__31675 */

#ifndef kcg_comp_struct__31681
extern kcg_bool kcg_comp_struct__31681(
  struct__31681 *kcg_c1,
  struct__31681 *kcg_c2);
#endif /* kcg_comp_struct__31681 */

#ifndef kcg_comp_struct__31740
extern kcg_bool kcg_comp_struct__31740(
  struct__31740 *kcg_c1,
  struct__31740 *kcg_c2);
#endif /* kcg_comp_struct__31740 */

#ifndef kcg_comp_struct__31772
extern kcg_bool kcg_comp_struct__31772(
  struct__31772 *kcg_c1,
  struct__31772 *kcg_c2);
#endif /* kcg_comp_struct__31772 */

#ifndef kcg_comp_struct__31779
extern kcg_bool kcg_comp_struct__31779(
  struct__31779 *kcg_c1,
  struct__31779 *kcg_c2);
#endif /* kcg_comp_struct__31779 */

#ifndef kcg_comp_array__31273
extern kcg_bool kcg_comp_array__31273(
  array__31273 *kcg_c1,
  array__31273 *kcg_c2);
#endif /* kcg_comp_array__31273 */

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

#ifndef kcg_comp_array_real_32
extern kcg_bool kcg_comp_array_real_32(
  array_real_32 *kcg_c1,
  array_real_32 *kcg_c2);
#endif /* kcg_comp_array_real_32 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

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

#ifndef kcg_comp_array__31527
extern kcg_bool kcg_comp_array__31527(
  array__31527 *kcg_c1,
  array__31527 *kcg_c2);
#endif /* kcg_comp_array__31527 */

#ifndef kcg_comp_array__31542
extern kcg_bool kcg_comp_array__31542(
  array__31542 *kcg_c1,
  array__31542 *kcg_c2);
#endif /* kcg_comp_array__31542 */

#ifndef kcg_comp_array__31557
extern kcg_bool kcg_comp_array__31557(
  array__31557 *kcg_c1,
  array__31557 *kcg_c2);
#endif /* kcg_comp_array__31557 */

#ifndef kcg_comp_array__31667
extern kcg_bool kcg_comp_array__31667(
  array__31667 *kcg_c1,
  array__31667 *kcg_c2);
#endif /* kcg_comp_array__31667 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

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

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__31745
extern kcg_bool kcg_comp_array__31745(
  array__31745 *kcg_c1,
  array__31745 *kcg_c2);
#endif /* kcg_comp_array__31745 */

#ifndef kcg_comp_array_char_30
extern kcg_bool kcg_comp_array_char_30(
  array_char_30 *kcg_c1,
  array_char_30 *kcg_c2);
#endif /* kcg_comp_array_char_30 */

#ifndef kcg_comp_array_char_30_5
extern kcg_bool kcg_comp_array_char_30_5(
  array_char_30_5 *kcg_c1,
  array_char_30_5 *kcg_c2);
#endif /* kcg_comp_array_char_30_5 */

#ifndef kcg_comp_array_real_5
extern kcg_bool kcg_comp_array_real_5(
  array_real_5 *kcg_c1,
  array_real_5 *kcg_c2);
#endif /* kcg_comp_array_real_5 */

#ifndef kcg_comp_array__31757
extern kcg_bool kcg_comp_array__31757(
  array__31757 *kcg_c1,
  array__31757 *kcg_c2);
#endif /* kcg_comp_array__31757 */

#ifndef kcg_comp_array_real_10
extern kcg_bool kcg_comp_array_real_10(
  array_real_10 *kcg_c1,
  array_real_10 *kcg_c2);
#endif /* kcg_comp_array_real_10 */

#ifndef kcg_comp_array__31763
extern kcg_bool kcg_comp_array__31763(
  array__31763 *kcg_c1,
  array__31763 *kcg_c2);
#endif /* kcg_comp_array__31763 */

#ifndef kcg_comp_array__31766
extern kcg_bool kcg_comp_array__31766(
  array__31766 *kcg_c1,
  array__31766 *kcg_c2);
#endif /* kcg_comp_array__31766 */

#ifndef kcg_comp_array_bool_15
extern kcg_bool kcg_comp_array_bool_15(
  array_bool_15 *kcg_c1,
  array_bool_15 *kcg_c2);
#endif /* kcg_comp_array_bool_15 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array_real_9
extern kcg_bool kcg_comp_array_real_9(
  array_real_9 *kcg_c1,
  array_real_9 *kcg_c2);
#endif /* kcg_comp_array_real_9 */

#ifndef kcg_comp_array_bool_32
extern kcg_bool kcg_comp_array_bool_32(
  array_bool_32 *kcg_c1,
  array_bool_32 *kcg_c2);
#endif /* kcg_comp_array_bool_32 */

#ifndef kcg_comp_array_real_4
extern kcg_bool kcg_comp_array_real_4(
  array_real_4 *kcg_c1,
  array_real_4 *kcg_c2);
#endif /* kcg_comp_array_real_4 */

#ifndef kcg_comp_array_int_10
extern kcg_bool kcg_comp_array_int_10(
  array_int_10 *kcg_c1,
  array_int_10 *kcg_c2);
#endif /* kcg_comp_array_int_10 */

#ifndef kcg_comp_array_bool_10
extern kcg_bool kcg_comp_array_bool_10(
  array_bool_10 *kcg_c1,
  array_bool_10 *kcg_c2);
#endif /* kcg_comp_array_bool_10 */

#ifndef kcg_comp_array_char_12
extern kcg_bool kcg_comp_array_char_12(
  array_char_12 *kcg_c1,
  array_char_12 *kcg_c2);
#endif /* kcg_comp_array_char_12 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_real_6
extern kcg_bool kcg_comp_array_real_6(
  array_real_6 *kcg_c1,
  array_real_6 *kcg_c2);
#endif /* kcg_comp_array_real_6 */

#ifndef kcg_comp_array_real_9_6
extern kcg_bool kcg_comp_array_real_9_6(
  array_real_9_6 *kcg_c1,
  array_real_9_6 *kcg_c2);
#endif /* kcg_comp_array_real_9_6 */

#ifndef kcg_comp_array_real_10_2
extern kcg_bool kcg_comp_array_real_10_2(
  array_real_10_2 *kcg_c1,
  array_real_10_2 *kcg_c2);
#endif /* kcg_comp_array_real_10_2 */

#ifndef kcg_comp_array_bool_12
extern kcg_bool kcg_comp_array_bool_12(
  array_bool_12 *kcg_c1,
  array_bool_12 *kcg_c2);
#endif /* kcg_comp_array_bool_12 */

#ifndef kcg_comp_array_int_12
extern kcg_bool kcg_comp_array_int_12(
  array_int_12 *kcg_c1,
  array_int_12 *kcg_c2);
#endif /* kcg_comp_array_int_12 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_real_1
extern kcg_bool kcg_comp_array_real_1(
  array_real_1 *kcg_c1,
  array_real_1 *kcg_c2);
#endif /* kcg_comp_array_real_1 */

#ifndef kcg_comp_array_char_243
extern kcg_bool kcg_comp_array_char_243(
  array_char_243 *kcg_c1,
  array_char_243 *kcg_c2);
#endif /* kcg_comp_array_char_243 */

#ifndef kcg_comp_array__32700
extern kcg_bool kcg_comp_array__32700(
  array__32700 *kcg_c1,
  array__32700 *kcg_c2);
#endif /* kcg_comp_array__32700 */

#ifndef kcg_comp_array__32707
extern kcg_bool kcg_comp_array__32707(
  array__32707 *kcg_c1,
  array__32707 *kcg_c2);
#endif /* kcg_comp_array__32707 */

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__31251

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__31251

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct__31251

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct__31251

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__31251

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__31251

#define kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_comp_struct__31256

#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_copy_struct__31256

#define kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_comp_struct__31262

#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_copy_struct__31262

#define kcg_comp_trainData_T_TIU_Types_Pkg kcg_comp_struct__31279

#define kcg_copy_trainData_T_TIU_Types_Pkg kcg_copy_struct__31279

#define kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg kcg_comp_struct__31297

#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg kcg_copy_struct__31297

#define kcg_comp_Brake_status_T_TIU_Types_Pkg kcg_comp_struct__31302

#define kcg_copy_Brake_status_T_TIU_Types_Pkg kcg_copy_struct__31302

#define kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg kcg_comp_struct__31622

#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg kcg_copy_struct__31622

#define kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_comp_struct__31311

#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_copy_struct__31311

#define kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_comp_struct__31322

#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_copy_struct__31322

#define kcg_comp_DMI_level_array_T_DMI_Types_Pkg kcg_comp_array__31667

#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg kcg_copy_array__31667

#define kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg kcg_comp_struct__31772

#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg kcg_copy_struct__31772

#define kcg_comp_DMI_LevelList_T_DMI_Types_Pkg kcg_comp_struct__31670

#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg kcg_copy_struct__31670

#define kcg_comp_DMI_level_T_DMI_Types_Pkg kcg_comp_struct__31348

#define kcg_copy_DMI_level_T_DMI_Types_Pkg kcg_copy_struct__31348

#define kcg_comp_DMI_Track_Description_int_array_T kcg_comp_array_int_325

#define kcg_copy_DMI_Track_Description_int_array_T kcg_copy_array_int_325

#define kcg_comp_DMI_trackCondition_int_array_T kcg_comp_array_int_65

#define kcg_copy_DMI_trackCondition_int_array_T kcg_copy_array_int_65

#define kcg_comp_DMI_gradientProfile_int_arrayT kcg_comp_array_int_129

#define kcg_copy_DMI_gradientProfile_int_arrayT kcg_copy_array_int_129

#define kcg_comp_V5 kcg_comp_array_int_5

#define kcg_copy_V5 kcg_copy_array_int_5

#define kcg_comp_tSpeedPoints kcg_comp_array_real_10_2

#define kcg_copy_tSpeedPoints kcg_copy_array_real_10_2

#define kcg_comp_tPASP_Array kcg_comp_array_real_10

#define kcg_copy_tPASP_Array kcg_copy_array_real_10

#define kcg_comp_tPASPOutput_Array kcg_comp_array_real_4

#define kcg_copy_tPASPOutput_Array kcg_copy_array_real_4

#define kcg_comp_tScale kcg_comp_array_real_9

#define kcg_copy_tScale kcg_copy_array_real_9

#define kcg_comp_Array_DMI_Q_Text kcg_comp_array__31745

#define kcg_copy_Array_DMI_Q_Text kcg_copy_array__31745

#define kcg_comp_MsgStructure kcg_comp_struct__31740

#define kcg_copy_MsgStructure kcg_copy_struct__31740

#define kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__31409

#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__31409

#define kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__31353

#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__31353

#define kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__31415

#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__31415

#define kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_comp_array_char_9

#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_copy_array_char_9

#define kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__31424

#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__31424

#define kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__31430

#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__31430

#define kcg_comp_Array_DMI_List_Entry_Request kcg_comp_array__31766

#define kcg_copy_Array_DMI_List_Entry_Request kcg_copy_array__31766

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

#define kcg_comp_DMI_Driver_Identifier_int_array_T_DATA kcg_comp_array_int_11

#define kcg_copy_DMI_Driver_Identifier_int_array_T_DATA kcg_copy_array_int_11

#define kcg_comp_DriverIdentifier_INT_T_DATA kcg_comp_array_int_9

#define kcg_copy_DriverIdentifier_INT_T_DATA kcg_copy_array_int_9

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

#define kcg_comp_DMI_Available_Menu_int_T_DATA kcg_comp_array_bool_30

#define kcg_copy_DMI_Available_Menu_int_T_DATA kcg_copy_array_bool_30

#define kcg_comp_DMI_Menu_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Menu_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Dynamic_int_array_T_DATA kcg_comp_array_int_24

#define kcg_copy_DMI_Dynamic_int_array_T_DATA kcg_copy_array_int_24

#define kcg_comp_GP_DMI_Control_Pkg_Sub_func kcg_comp_struct__31779

#define kcg_copy_GP_DMI_Control_Pkg_Sub_func kcg_copy_struct__31779

#define kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_comp_array_int_311

#define kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_copy_array_int_311

#define kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_comp_struct__31442

#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_copy_struct__31442

#define kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_comp_array_int_999

#define kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_copy_array_int_999

#define kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_comp_struct__31681

#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_copy_struct__31681

#define kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31458

#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31458

#define kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31464

#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31464

#define kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31470

#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31470

#define kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31500

#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31500

#define kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31512

#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31512

#define kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31565

#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31565

#define kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31573

#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31573

#define kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31584

#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31584

#define kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31610

#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31610

#define kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31655

#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31655

#define kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31661

#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31661

#define kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__31675

#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__31675

#define kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__31365

#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__31365

#define kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__31373

#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__31373

#define kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__31383

#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__31383

#define kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__31390

#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__31390

#define kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__31342

#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__31342

#define kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__31397

#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__31397

#define kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__31403

#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__31403

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct__31476

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct__31476

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct__31476

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct__31476

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct__31476

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct__31476

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct__31476

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct__31476

#define kcg_comp_DMI_train_length_T_DMI_Types_Pkg kcg_comp_struct__31483

#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg kcg_copy_struct__31483

#define kcg_comp_DMI_train_id_T_DMI_Types_Pkg kcg_comp_struct__31491

#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg kcg_copy_struct__31491

#define kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_comp_struct__31522

#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_copy_struct__31522

#define kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_comp_array__31527

#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_copy_array__31527

#define kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg kcg_comp_struct__31530

#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg kcg_copy_struct__31530

#define kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg kcg_comp_struct__31545

#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg kcg_copy_struct__31545

#define kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg kcg_comp_struct__31560

#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg kcg_copy_struct__31560

#define kcg_comp_DMI_TEXT_DMI_Types_Pkg kcg_comp_array_char_255

#define kcg_copy_DMI_TEXT_DMI_Types_Pkg kcg_copy_array_char_255

#define kcg_comp_TIU_Input_msg_API_TIU_Pkg kcg_comp_struct__31331

#define kcg_copy_TIU_Input_msg_API_TIU_Pkg kcg_copy_struct__31331

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__31268

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__31268

#define kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_comp_array__31542

#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_copy_array__31542

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__31273

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__31273

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct__31535

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct__31535

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_5

#define kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_comp_array__31557

#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_copy_array__31557

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct__31550

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct__31550

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct__31251

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct__31251

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-30T15:42:56
*************************************************************$ */

