/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
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

/* NC_TRAIN */
typedef enum {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
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
/* M_LOADINGGAUGE */
typedef enum {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
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
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
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
/* Q_TEXTCONFIRM */
typedef enum {
  Q_TEXTCONFIRM_No_confirmation_required = 0,
  Q_TEXTCONFIRM_Confirmation_required = 1,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 3
} Q_TEXTCONFIRM;
/* Q_TEXTCLASS */
typedef enum {
  Q_TEXTCLASS_Auxiliary_Information = 0,
  Q_TEXTCLASS_Important_Information = 1
} Q_TEXTCLASS;
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
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
/* TIU_Types_Pkg::cab_ID_T */
typedef enum {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
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
  _2_SSM_TR_no_trans_SM1,
  SSM_TR_stop_1_SM1,
  SSM_TR_start_1_SM1
} _3_SSM_TR_SM1;
/* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
typedef enum { SSM_st_stop_SM1, SSM_st_start_SM1 } _1_SSM_ST_SM1;
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
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM13 */
typedef enum {
  SSM_TR_no_trans_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_State36_1_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_State37_1_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM13 */
typedef enum {
  SSM_st_State36_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13,
  SSM_st_State37_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM13
} SSM_ST_SM13_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
typedef enum {
  SSM_TR_no_trans_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_ReadSpeedSupervisionInfo_1_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_idle_1_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
typedef enum {
  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM,
  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM
} SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11 */
typedef enum {
  SSM_TR_no_trans_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_TextMsgToBeAck_1_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_TextMsgAck_1_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11 */
typedef enum {
  SSM_st_TextMsgToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11,
  SSM_st_TextMsgAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM11
} SSM_ST_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
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
  SSM_TR_DriverID_DMI_controlled_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_DriverID_DMI_controlled_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_TrainDataWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_TrainDataWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_TrainDataValidationWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_TrainDataValidationWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_TrainDataValidationWindow_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_TrainDataValidationWindow_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_Insert_TrainRN_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_Insert_TrainRN_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_WaitingLevelInformation_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_LevelWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_LevelWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu
} SSM_TR_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */
typedef enum {
  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM
} SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
/* float32 */
typedef kcg_real float32;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_C */
typedef kcg_int NID_C;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* int32 */
typedef kcg_int int32;

/* D_TRACKCOND */
typedef kcg_int D_TRACKCOND;

/* DMI_Types_Pkg::NID_STM */
typedef kcg_int NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::M_BRAKEPERCT */
typedef kcg_int M_BRAKEPERCT_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T */
typedef kcg_int DMI_TextMessage_ID_T_DMI_Types_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} struct__15126;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct__15126 TIU_trainStatus_T_TIU_Types_Pkg;

typedef kcg_char array_char_255[255];

/* DMI_Types_Pkg::DMI_TEXT */
typedef array_char_255 DMI_TEXT_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} struct__15136;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct__15136 DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} struct__15146;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct__15146 DMI_trackConditionElement_T_DMI_Types_Pkg;

typedef DMI_trackConditionElement_T_DMI_Types_Pkg array__15151[32];

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef array__15151 DMI_trackConditionArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} struct__15154;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct__15154 DMI_trackCondition_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__15159;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct__15159 DMI_gradientProfileElement_T_DMI_Types_Pkg;

typedef DMI_gradientProfileElement_T_DMI_Types_Pkg array__15166[32];

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef array__15166 DMI_gradientProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} struct__15169;

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct__15169 DMI_gradientProfile_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__15174;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct__15174 DMI_speedProfileElement_T_DMI_Types_Pkg;

typedef DMI_speedProfileElement_T_DMI_Types_Pkg array__15181[32];

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef array__15181 DMI_SpeedProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} struct__15184;

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct__15184 DMI_speedProfile_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} struct__15189;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct__15189 DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} struct__15197;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct__15197 DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct { M_LEVEL level; NID_STM_DMI_Types_Pkg nid_stm; } struct__15208;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct__15208 DMI_level_T_DMI_Types_Pkg;

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
} struct__15213;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct__15213 DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__15239;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct__15239 DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

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
} struct__15251;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct__15251 DMI_Available_Menu_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} struct__15284;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct__15284 DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} struct__15290;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct__15290 DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef DMI_level_T_DMI_Types_Pkg array__15296[32];

/* DMI_Types_Pkg::DMI_level_array_T */
typedef array__15296 DMI_level_array_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} struct__15299;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct__15299 DMI_LevelList_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} struct__15304;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct__15304 DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_DMI_Identifier_T_DMI_Types_Pkg DMI_Identifier;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg Cabin_Identifier;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg DMI_name;
  M_VERSION M_VERSION;
} struct__15310;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct__15310 DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} struct__15320;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct__15320 DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} struct__15327;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct__15327 DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} struct__15334;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct__15334 DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} struct__15340;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct__15340 DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} struct__15346;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct__15346 DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} struct__15352;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct__15352 DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} struct__15358;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct__15358 DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

typedef kcg_char array_char_9[9];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef array_char_9 driverIdentifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} struct__15367;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct__15367 DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

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
} struct__15373;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct__15373 DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool present;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg dmi_msg;
} struct__15385;

/* MsgStructure */
typedef struct__15385 MsgStructure;

typedef kcg_char array_char_30[30];

typedef array_char_30 array_char_30_5[5];

typedef DMI_Q_TEXT_DMI_Types_Pkg array__15396[27];

/* Array_DMI_Q_Text */
typedef array__15396 Array_DMI_Q_Text;

typedef kcg_real array_real_5[5];

typedef MsgStructure array__15402[5];

typedef DMI_List_Entry_Request_T_DMI_Types_Pkg array__15405[15];

/* Array_DMI_List_Entry_Request */
typedef array__15405 Array_DMI_List_Entry_Request;

typedef kcg_bool array_bool_15[15];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_8[8];

typedef kcg_real array_real_12[12];

typedef kcg_real array_real_9[9];

/* tScale */
typedef array_real_9 tScale;

typedef kcg_bool array_bool_12[12];

typedef kcg_real array_real_4[4];

typedef kcg_real array_real_10[10];

/* tPASP_Array */
typedef array_real_10 tPASP_Array;

typedef kcg_int array_int_10[10];

typedef kcg_bool array_bool_10[10];

typedef kcg_int array_int_9[9];

typedef kcg_char array_char_12[12];

typedef kcg_real array_real_32[32];

typedef kcg_int array_int_30[30];

typedef kcg_real array_real_6[6];

typedef tScale array_real_9_6[6];

typedef array_real_10 array_real_10_2[2];

/* tSpeedPoints */
typedef array_real_10_2 tSpeedPoints;

typedef kcg_bool array_bool_30[30];

typedef kcg_int array_int_12[12];

typedef kcg_int array_int_32[32];

typedef kcg_char array_char_243[243];

typedef MsgStructure array__15839[4];

#ifndef kcg_copy_struct__15126
#define kcg_copy_struct__15126(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15126)))
#endif /* kcg_copy_struct__15126 */

#ifndef kcg_copy_struct__15136
#define kcg_copy_struct__15136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15136)))
#endif /* kcg_copy_struct__15136 */

#ifndef kcg_copy_struct__15146
#define kcg_copy_struct__15146(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15146)))
#endif /* kcg_copy_struct__15146 */

#ifndef kcg_copy_struct__15154
#define kcg_copy_struct__15154(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15154)))
#endif /* kcg_copy_struct__15154 */

#ifndef kcg_copy_struct__15159
#define kcg_copy_struct__15159(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15159)))
#endif /* kcg_copy_struct__15159 */

#ifndef kcg_copy_struct__15169
#define kcg_copy_struct__15169(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15169)))
#endif /* kcg_copy_struct__15169 */

#ifndef kcg_copy_struct__15174
#define kcg_copy_struct__15174(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15174)))
#endif /* kcg_copy_struct__15174 */

#ifndef kcg_copy_struct__15184
#define kcg_copy_struct__15184(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15184)))
#endif /* kcg_copy_struct__15184 */

#ifndef kcg_copy_struct__15189
#define kcg_copy_struct__15189(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15189)))
#endif /* kcg_copy_struct__15189 */

#ifndef kcg_copy_struct__15197
#define kcg_copy_struct__15197(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15197)))
#endif /* kcg_copy_struct__15197 */

#ifndef kcg_copy_struct__15208
#define kcg_copy_struct__15208(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15208)))
#endif /* kcg_copy_struct__15208 */

#ifndef kcg_copy_struct__15213
#define kcg_copy_struct__15213(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15213)))
#endif /* kcg_copy_struct__15213 */

#ifndef kcg_copy_struct__15239
#define kcg_copy_struct__15239(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15239)))
#endif /* kcg_copy_struct__15239 */

#ifndef kcg_copy_struct__15251
#define kcg_copy_struct__15251(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15251)))
#endif /* kcg_copy_struct__15251 */

#ifndef kcg_copy_struct__15284
#define kcg_copy_struct__15284(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15284)))
#endif /* kcg_copy_struct__15284 */

#ifndef kcg_copy_struct__15290
#define kcg_copy_struct__15290(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15290)))
#endif /* kcg_copy_struct__15290 */

#ifndef kcg_copy_struct__15299
#define kcg_copy_struct__15299(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15299)))
#endif /* kcg_copy_struct__15299 */

#ifndef kcg_copy_struct__15304
#define kcg_copy_struct__15304(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15304)))
#endif /* kcg_copy_struct__15304 */

#ifndef kcg_copy_struct__15310
#define kcg_copy_struct__15310(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15310)))
#endif /* kcg_copy_struct__15310 */

#ifndef kcg_copy_struct__15320
#define kcg_copy_struct__15320(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15320)))
#endif /* kcg_copy_struct__15320 */

#ifndef kcg_copy_struct__15327
#define kcg_copy_struct__15327(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15327)))
#endif /* kcg_copy_struct__15327 */

#ifndef kcg_copy_struct__15334
#define kcg_copy_struct__15334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15334)))
#endif /* kcg_copy_struct__15334 */

#ifndef kcg_copy_struct__15340
#define kcg_copy_struct__15340(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15340)))
#endif /* kcg_copy_struct__15340 */

#ifndef kcg_copy_struct__15346
#define kcg_copy_struct__15346(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15346)))
#endif /* kcg_copy_struct__15346 */

#ifndef kcg_copy_struct__15352
#define kcg_copy_struct__15352(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15352)))
#endif /* kcg_copy_struct__15352 */

#ifndef kcg_copy_struct__15358
#define kcg_copy_struct__15358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15358)))
#endif /* kcg_copy_struct__15358 */

#ifndef kcg_copy_struct__15367
#define kcg_copy_struct__15367(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15367)))
#endif /* kcg_copy_struct__15367 */

#ifndef kcg_copy_struct__15373
#define kcg_copy_struct__15373(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15373)))
#endif /* kcg_copy_struct__15373 */

#ifndef kcg_copy_struct__15385
#define kcg_copy_struct__15385(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__15385)))
#endif /* kcg_copy_struct__15385 */

#ifndef kcg_copy_array_char_255
#define kcg_copy_array_char_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_255)))
#endif /* kcg_copy_array_char_255 */

#ifndef kcg_copy_array__15151
#define kcg_copy_array__15151(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15151)))
#endif /* kcg_copy_array__15151 */

#ifndef kcg_copy_array__15166
#define kcg_copy_array__15166(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15166)))
#endif /* kcg_copy_array__15166 */

#ifndef kcg_copy_array__15181
#define kcg_copy_array__15181(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15181)))
#endif /* kcg_copy_array__15181 */

#ifndef kcg_copy_array__15296
#define kcg_copy_array__15296(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15296)))
#endif /* kcg_copy_array__15296 */

#ifndef kcg_copy_array_char_9
#define kcg_copy_array_char_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_9)))
#endif /* kcg_copy_array_char_9 */

#ifndef kcg_copy_array_char_30
#define kcg_copy_array_char_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_30)))
#endif /* kcg_copy_array_char_30 */

#ifndef kcg_copy_array_char_30_5
#define kcg_copy_array_char_30_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_30_5)))
#endif /* kcg_copy_array_char_30_5 */

#ifndef kcg_copy_array__15396
#define kcg_copy_array__15396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15396)))
#endif /* kcg_copy_array__15396 */

#ifndef kcg_copy_array_real_5
#define kcg_copy_array_real_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_5)))
#endif /* kcg_copy_array_real_5 */

#ifndef kcg_copy_array__15402
#define kcg_copy_array__15402(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15402)))
#endif /* kcg_copy_array__15402 */

#ifndef kcg_copy_array__15405
#define kcg_copy_array__15405(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15405)))
#endif /* kcg_copy_array__15405 */

#ifndef kcg_copy_array_bool_15
#define kcg_copy_array_bool_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_15)))
#endif /* kcg_copy_array_bool_15 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_real_12
#define kcg_copy_array_real_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_12)))
#endif /* kcg_copy_array_real_12 */

#ifndef kcg_copy_array_real_9
#define kcg_copy_array_real_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_9)))
#endif /* kcg_copy_array_real_9 */

#ifndef kcg_copy_array_bool_12
#define kcg_copy_array_bool_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_12)))
#endif /* kcg_copy_array_bool_12 */

#ifndef kcg_copy_array_real_4
#define kcg_copy_array_real_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_4)))
#endif /* kcg_copy_array_real_4 */

#ifndef kcg_copy_array_real_10
#define kcg_copy_array_real_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_10)))
#endif /* kcg_copy_array_real_10 */

#ifndef kcg_copy_array_int_10
#define kcg_copy_array_int_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_10)))
#endif /* kcg_copy_array_int_10 */

#ifndef kcg_copy_array_bool_10
#define kcg_copy_array_bool_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_10)))
#endif /* kcg_copy_array_bool_10 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_char_12
#define kcg_copy_array_char_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_12)))
#endif /* kcg_copy_array_char_12 */

#ifndef kcg_copy_array_real_32
#define kcg_copy_array_real_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_32)))
#endif /* kcg_copy_array_real_32 */

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

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_12
#define kcg_copy_array_int_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_12)))
#endif /* kcg_copy_array_int_12 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_char_243
#define kcg_copy_array_char_243(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_243)))
#endif /* kcg_copy_array_char_243 */

#ifndef kcg_copy_array__15839
#define kcg_copy_array__15839(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__15839)))
#endif /* kcg_copy_array__15839 */

#ifndef kcg_comp_struct__15126
extern kcg_bool kcg_comp_struct__15126(
  struct__15126 *kcg_c1,
  struct__15126 *kcg_c2);
#endif /* kcg_comp_struct__15126 */

#ifndef kcg_comp_struct__15136
extern kcg_bool kcg_comp_struct__15136(
  struct__15136 *kcg_c1,
  struct__15136 *kcg_c2);
#endif /* kcg_comp_struct__15136 */

#ifndef kcg_comp_struct__15146
extern kcg_bool kcg_comp_struct__15146(
  struct__15146 *kcg_c1,
  struct__15146 *kcg_c2);
#endif /* kcg_comp_struct__15146 */

#ifndef kcg_comp_struct__15154
extern kcg_bool kcg_comp_struct__15154(
  struct__15154 *kcg_c1,
  struct__15154 *kcg_c2);
#endif /* kcg_comp_struct__15154 */

#ifndef kcg_comp_struct__15159
extern kcg_bool kcg_comp_struct__15159(
  struct__15159 *kcg_c1,
  struct__15159 *kcg_c2);
#endif /* kcg_comp_struct__15159 */

#ifndef kcg_comp_struct__15169
extern kcg_bool kcg_comp_struct__15169(
  struct__15169 *kcg_c1,
  struct__15169 *kcg_c2);
#endif /* kcg_comp_struct__15169 */

#ifndef kcg_comp_struct__15174
extern kcg_bool kcg_comp_struct__15174(
  struct__15174 *kcg_c1,
  struct__15174 *kcg_c2);
#endif /* kcg_comp_struct__15174 */

#ifndef kcg_comp_struct__15184
extern kcg_bool kcg_comp_struct__15184(
  struct__15184 *kcg_c1,
  struct__15184 *kcg_c2);
#endif /* kcg_comp_struct__15184 */

#ifndef kcg_comp_struct__15189
extern kcg_bool kcg_comp_struct__15189(
  struct__15189 *kcg_c1,
  struct__15189 *kcg_c2);
#endif /* kcg_comp_struct__15189 */

#ifndef kcg_comp_struct__15197
extern kcg_bool kcg_comp_struct__15197(
  struct__15197 *kcg_c1,
  struct__15197 *kcg_c2);
#endif /* kcg_comp_struct__15197 */

#ifndef kcg_comp_struct__15208
extern kcg_bool kcg_comp_struct__15208(
  struct__15208 *kcg_c1,
  struct__15208 *kcg_c2);
#endif /* kcg_comp_struct__15208 */

#ifndef kcg_comp_struct__15213
extern kcg_bool kcg_comp_struct__15213(
  struct__15213 *kcg_c1,
  struct__15213 *kcg_c2);
#endif /* kcg_comp_struct__15213 */

#ifndef kcg_comp_struct__15239
extern kcg_bool kcg_comp_struct__15239(
  struct__15239 *kcg_c1,
  struct__15239 *kcg_c2);
#endif /* kcg_comp_struct__15239 */

#ifndef kcg_comp_struct__15251
extern kcg_bool kcg_comp_struct__15251(
  struct__15251 *kcg_c1,
  struct__15251 *kcg_c2);
#endif /* kcg_comp_struct__15251 */

#ifndef kcg_comp_struct__15284
extern kcg_bool kcg_comp_struct__15284(
  struct__15284 *kcg_c1,
  struct__15284 *kcg_c2);
#endif /* kcg_comp_struct__15284 */

#ifndef kcg_comp_struct__15290
extern kcg_bool kcg_comp_struct__15290(
  struct__15290 *kcg_c1,
  struct__15290 *kcg_c2);
#endif /* kcg_comp_struct__15290 */

#ifndef kcg_comp_struct__15299
extern kcg_bool kcg_comp_struct__15299(
  struct__15299 *kcg_c1,
  struct__15299 *kcg_c2);
#endif /* kcg_comp_struct__15299 */

#ifndef kcg_comp_struct__15304
extern kcg_bool kcg_comp_struct__15304(
  struct__15304 *kcg_c1,
  struct__15304 *kcg_c2);
#endif /* kcg_comp_struct__15304 */

#ifndef kcg_comp_struct__15310
extern kcg_bool kcg_comp_struct__15310(
  struct__15310 *kcg_c1,
  struct__15310 *kcg_c2);
#endif /* kcg_comp_struct__15310 */

#ifndef kcg_comp_struct__15320
extern kcg_bool kcg_comp_struct__15320(
  struct__15320 *kcg_c1,
  struct__15320 *kcg_c2);
#endif /* kcg_comp_struct__15320 */

#ifndef kcg_comp_struct__15327
extern kcg_bool kcg_comp_struct__15327(
  struct__15327 *kcg_c1,
  struct__15327 *kcg_c2);
#endif /* kcg_comp_struct__15327 */

#ifndef kcg_comp_struct__15334
extern kcg_bool kcg_comp_struct__15334(
  struct__15334 *kcg_c1,
  struct__15334 *kcg_c2);
#endif /* kcg_comp_struct__15334 */

#ifndef kcg_comp_struct__15340
extern kcg_bool kcg_comp_struct__15340(
  struct__15340 *kcg_c1,
  struct__15340 *kcg_c2);
#endif /* kcg_comp_struct__15340 */

#ifndef kcg_comp_struct__15346
extern kcg_bool kcg_comp_struct__15346(
  struct__15346 *kcg_c1,
  struct__15346 *kcg_c2);
#endif /* kcg_comp_struct__15346 */

#ifndef kcg_comp_struct__15352
extern kcg_bool kcg_comp_struct__15352(
  struct__15352 *kcg_c1,
  struct__15352 *kcg_c2);
#endif /* kcg_comp_struct__15352 */

#ifndef kcg_comp_struct__15358
extern kcg_bool kcg_comp_struct__15358(
  struct__15358 *kcg_c1,
  struct__15358 *kcg_c2);
#endif /* kcg_comp_struct__15358 */

#ifndef kcg_comp_struct__15367
extern kcg_bool kcg_comp_struct__15367(
  struct__15367 *kcg_c1,
  struct__15367 *kcg_c2);
#endif /* kcg_comp_struct__15367 */

#ifndef kcg_comp_struct__15373
extern kcg_bool kcg_comp_struct__15373(
  struct__15373 *kcg_c1,
  struct__15373 *kcg_c2);
#endif /* kcg_comp_struct__15373 */

#ifndef kcg_comp_struct__15385
extern kcg_bool kcg_comp_struct__15385(
  struct__15385 *kcg_c1,
  struct__15385 *kcg_c2);
#endif /* kcg_comp_struct__15385 */

#ifndef kcg_comp_array_char_255
extern kcg_bool kcg_comp_array_char_255(
  array_char_255 *kcg_c1,
  array_char_255 *kcg_c2);
#endif /* kcg_comp_array_char_255 */

#ifndef kcg_comp_array__15151
extern kcg_bool kcg_comp_array__15151(
  array__15151 *kcg_c1,
  array__15151 *kcg_c2);
#endif /* kcg_comp_array__15151 */

#ifndef kcg_comp_array__15166
extern kcg_bool kcg_comp_array__15166(
  array__15166 *kcg_c1,
  array__15166 *kcg_c2);
#endif /* kcg_comp_array__15166 */

#ifndef kcg_comp_array__15181
extern kcg_bool kcg_comp_array__15181(
  array__15181 *kcg_c1,
  array__15181 *kcg_c2);
#endif /* kcg_comp_array__15181 */

#ifndef kcg_comp_array__15296
extern kcg_bool kcg_comp_array__15296(
  array__15296 *kcg_c1,
  array__15296 *kcg_c2);
#endif /* kcg_comp_array__15296 */

#ifndef kcg_comp_array_char_9
extern kcg_bool kcg_comp_array_char_9(
  array_char_9 *kcg_c1,
  array_char_9 *kcg_c2);
#endif /* kcg_comp_array_char_9 */

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

#ifndef kcg_comp_array__15396
extern kcg_bool kcg_comp_array__15396(
  array__15396 *kcg_c1,
  array__15396 *kcg_c2);
#endif /* kcg_comp_array__15396 */

#ifndef kcg_comp_array_real_5
extern kcg_bool kcg_comp_array_real_5(
  array_real_5 *kcg_c1,
  array_real_5 *kcg_c2);
#endif /* kcg_comp_array_real_5 */

#ifndef kcg_comp_array__15402
extern kcg_bool kcg_comp_array__15402(
  array__15402 *kcg_c1,
  array__15402 *kcg_c2);
#endif /* kcg_comp_array__15402 */

#ifndef kcg_comp_array__15405
extern kcg_bool kcg_comp_array__15405(
  array__15405 *kcg_c1,
  array__15405 *kcg_c2);
#endif /* kcg_comp_array__15405 */

#ifndef kcg_comp_array_bool_15
extern kcg_bool kcg_comp_array_bool_15(
  array_bool_15 *kcg_c1,
  array_bool_15 *kcg_c2);
#endif /* kcg_comp_array_bool_15 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array_real_12
extern kcg_bool kcg_comp_array_real_12(
  array_real_12 *kcg_c1,
  array_real_12 *kcg_c2);
#endif /* kcg_comp_array_real_12 */

#ifndef kcg_comp_array_real_9
extern kcg_bool kcg_comp_array_real_9(
  array_real_9 *kcg_c1,
  array_real_9 *kcg_c2);
#endif /* kcg_comp_array_real_9 */

#ifndef kcg_comp_array_bool_12
extern kcg_bool kcg_comp_array_bool_12(
  array_bool_12 *kcg_c1,
  array_bool_12 *kcg_c2);
#endif /* kcg_comp_array_bool_12 */

#ifndef kcg_comp_array_real_4
extern kcg_bool kcg_comp_array_real_4(
  array_real_4 *kcg_c1,
  array_real_4 *kcg_c2);
#endif /* kcg_comp_array_real_4 */

#ifndef kcg_comp_array_real_10
extern kcg_bool kcg_comp_array_real_10(
  array_real_10 *kcg_c1,
  array_real_10 *kcg_c2);
#endif /* kcg_comp_array_real_10 */

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

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array_char_12
extern kcg_bool kcg_comp_array_char_12(
  array_char_12 *kcg_c1,
  array_char_12 *kcg_c2);
#endif /* kcg_comp_array_char_12 */

#ifndef kcg_comp_array_real_32
extern kcg_bool kcg_comp_array_real_32(
  array_real_32 *kcg_c1,
  array_real_32 *kcg_c2);
#endif /* kcg_comp_array_real_32 */

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

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

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

#ifndef kcg_comp_array_char_243
extern kcg_bool kcg_comp_array_char_243(
  array_char_243 *kcg_c1,
  array_char_243 *kcg_c2);
#endif /* kcg_comp_array_char_243 */

#ifndef kcg_comp_array__15839
extern kcg_bool kcg_comp_array__15839(
  array__15839 *kcg_c1,
  array__15839 *kcg_c2);
#endif /* kcg_comp_array__15839 */

#define kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15304

#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15304

#define kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__15310

#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__15310

#define kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__15320

#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__15320

#define kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__15327

#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__15327

#define kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__15334

#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__15334

#define kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__15340

#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__15340

#define kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__15346

#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__15346

#define kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_comp_struct__15146

#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_copy_struct__15146

#define kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_comp_array__15151

#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_copy_array__15151

#define kcg_comp_tSpeedPoints kcg_comp_array_real_10_2

#define kcg_copy_tSpeedPoints kcg_copy_array_real_10_2

#define kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg kcg_comp_struct__15154

#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg kcg_copy_struct__15154

#define kcg_comp_tPASP_Array kcg_comp_array_real_10

#define kcg_copy_tPASP_Array kcg_copy_array_real_10

#define kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg kcg_comp_struct__15169

#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg kcg_copy_struct__15169

#define kcg_comp_tScale kcg_comp_array_real_9

#define kcg_copy_tScale kcg_copy_array_real_9

#define kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg kcg_comp_struct__15184

#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg kcg_copy_struct__15184

#define kcg_comp_Array_DMI_Q_Text kcg_comp_array__15396

#define kcg_copy_Array_DMI_Q_Text kcg_copy_array__15396

#define kcg_comp_MsgStructure kcg_comp_struct__15385

#define kcg_copy_MsgStructure kcg_copy_struct__15385

#define kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_comp_array__15181

#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_copy_array__15181

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct__15174

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct__15174

#define kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_comp_array__15166

#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_copy_array__15166

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct__15159

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct__15159

#define kcg_comp_DMI_TEXT_DMI_Types_Pkg kcg_comp_array_char_255

#define kcg_copy_DMI_TEXT_DMI_Types_Pkg kcg_copy_array_char_255

#define kcg_comp_Array_DMI_List_Entry_Request kcg_comp_array__15405

#define kcg_copy_Array_DMI_List_Entry_Request kcg_copy_array__15405

#define kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg kcg_comp_struct__15251

#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg kcg_copy_struct__15251

#define kcg_comp_DMI_level_array_T_DMI_Types_Pkg kcg_comp_array__15296

#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg kcg_copy_array__15296

#define kcg_comp_DMI_LevelList_T_DMI_Types_Pkg kcg_comp_struct__15299

#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg kcg_copy_struct__15299

#define kcg_comp_DMI_level_T_DMI_Types_Pkg kcg_comp_struct__15208

#define kcg_copy_DMI_level_T_DMI_Types_Pkg kcg_copy_struct__15208

#define kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg kcg_comp_struct__15126

#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg kcg_copy_struct__15126

#define kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15136

#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15136

#define kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__15352

#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__15352

#define kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15189

#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15189

#define kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__15358

#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__15358

#define kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15197

#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15197

#define kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15213

#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15213

#define kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_comp_array_char_9

#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_copy_array_char_9

#define kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__15367

#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__15367

#define kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15239

#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15239

#define kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__15373

#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__15373

#define kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15284

#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15284

#define kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__15290

#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__15290

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

