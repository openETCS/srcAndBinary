/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
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
typedef enum kcg_tag_T_Mode_Level_And_Mode_T {
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
typedef enum kcg_tag_T_MA_Level_And_Mode_Typ {
  Profile_OS_Level_And_Mode_Types,
  Profile_LS_Level_And_Mode_Types,
  Profile_SH_Level_And_Mode_Types,
  No_Profile_Level_And_Mode_Types
} T_MA_Level_And_Mode_Types_Pkg;
/* TIU_Types_Pkg::M_Isolation_status_T */
typedef enum kcg_tag_M_Isolation_status_T_TI {
  on_board_equipment_is_isolated_,
  on_board_equipement_is_not_isol,
  isolation_status_not_defined_TI
} M_Isolation_status_T_TIU_Types_;
/* TIU_Types_Pkg::M_brake_inhibit_command_T */
typedef enum kcg_tag_M_brake_inhibit_command {
  brake_inhibit_not_defined_TIU_T,
  inhibit_brake_TIU_Types_Pkg,
  do_not_inhibit_brake_TIU_Types_
} M_brake_inhibit_command_T_TIU_T;
/* TIU_Types_Pkg::M_eddy_current_brake_inhibition_T */
typedef enum kcg_tag_M_eddy_current_brake_in {
  eddy_current_brake_inhibition_n,
  inhibit_for_service_brake_TIU_T,
  inhibit_for_emergency_brake_TIU,
  inhibit_for_both_service_emerge,
  do_not_inhibit_for_service_brak,
  do_not_inhibit_for_emergency_br,
  do_not_inhibit_for_both_service
} M_eddy_current_brake_inhibition;
/* TIU_Types_Pkg::M_pantograph_command_T */
typedef enum kcg_tag_M_pantograph_command_T_ {
  pantograph_command_not_defined_,
  lower_pantograph_TIU_Types_Pkg,
  raise_pantograph_TIU_Types_Pkg
} M_pantograph_command_T_TIU_Type;
/* TIU_Types_Pkg::M_airtightness_command_T */
typedef enum kcg_tag_M_airtightness_command_ {
  airtightness_command_not_define,
  tunnel_condition_active_TIU_Typ,
  tunnel_condition_not_active_TIU
} M_airtightness_command_T_TIU_Ty;
/* TIU_Types_Pkg::M_mainpowerswitch_command_T */
typedef enum kcg_tag_M_mainpowerswitch_comma {
  open_main_power_swicth_TIU_Type,
  close_main_power_switch_TIU_Typ
} M_mainpowerswitch_command_T_TIU;
/* TIU_Types_Pkg::M_traction_cutoff_command_T */
typedef enum kcg_tag_M_traction_cutoff_comma {
  traction_cutoff_command_not_def,
  apply_traction_cutoff_TIU_Types,
  release_traction_cutoff_TIU_Typ
} M_traction_cutoff_command_T_TIU;
/* TIU_Types_Pkg::M_voltage_types_T */
typedef enum kcg_tag_M_voltage_types_T_TIU_T {
  line_not_fitted_with_any_tracti,
  ac_25kV_50Hz_TIU_Types_Pkg,
  ac_15kV_16_7Hz_TIU_Types_Pkg,
  dc_3kV_TIU_Types_Pkg,
  dc_1_5kV_TIU_Types_Pkg,
  dc_600_750kV_TIU_Types_Pkg
} M_voltage_types_T_TIU_Types_Pkg;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum kcg_tag_connectionStatusRadioUn {
  conn_unknown_API_RadioCommunica,
  conn_no_connection_API_RadioCom,
  conn_ConnectionUp_API_RadioComm,
  conn_SetupFailed_API_RadioCommu
} connectionStatusRadioUnit_T_API;
/* DMI_Types_Pkg::DMI_Q_TEXT */
typedef enum kcg_tag_DMI_Q_TEXT_DMI_Types_Pk {
  balise_read_error_DMI_Types_Pkg,
  communication_error_DMI_Types_P,
  entering_FS_DMI_Types_Pkg,
  entering_OS_DMI_Types_Pkg,
  no_track_condition_will_be_rece,
  runaway_movement_DMI_Types_Pkg,
  SH_refused_DMI_Types_Pkg,
  trackside_not_compatible_DMI_Ty,
  train_data_changed_DMI_Types_Pk,
  train_is_rejected_DMI_Types_Pkg,
  unauthorized_passing_of_EOA_LOA,
  no_MA_received_at_level_transit,
  SR_distance_exceeded_DMI_Types_,
  SH_stop_order_DMI_Types_Pkg,
  SR_stop_order_DMI_Types_Pkg,
  emergency_stop_DMI_Types_Pkg,
  trackside_malfunction_DMI_Types,
  SH_request_failed_DMI_Types_Pkg,
  RV_distance_esceeded_DMI_Types_,
  no_track_description_DMI_Types_,
  STM_brake_Deman_DMI_Types_Pkg,
  route_unsuitable_axle_load_cate,
  route_unsuitable_loading_gauge_,
  route_unsuitable_traction_syste,
  radio_network_registration_fail,
  level_crossing_not_protected_DM,
  acknowledgment_DMI_Types_Pkg
} DMI_Q_TEXT_DMI_Types_Pkg;
/* Q_TEXTCLASS */
typedef enum kcg_tag_Q_TEXTCLASS {
  Q_TEXTCLASS_Auxiliary_Informati = 0,
  Q_TEXTCLASS_Important_Informati = 1
} Q_TEXTCLASS;
/* Q_TEXTCONFIRM */
typedef enum kcg_tag_Q_TEXTCONFIRM {
  Q_TEXTCONFIRM_No_confirmation_r = 0,
  _54_Q_TEXTCONFIRM_Confirmation_ = 1,
  _53_Q_TEXTCONFIRM_Confirmation_ = 2,
  Q_TEXTCONFIRM_Confirmation_requ = 3
} Q_TEXTCONFIRM;
/* M_TRACKCOND */
typedef enum kcg_tag_M_TRACKCOND {
  M_TRACKCOND_Non_stopping_area_I = 0,
  M_TRACKCOND_Tunnel_stopping_are = 1,
  M_TRACKCOND_Sound_horn_Initial_ = 2,
  M_TRACKCOND_Powerless_section_L = 3,
  M_TRACKCOND_Radio_hole_stop_sup = 4,
  M_TRACKCOND_Air_tightness_Initi = 5,
  M_TRACKCOND_Switch_off_regenera = 6,
  _52_M_TRACKCOND_Switch_off_eddy = 7,
  M_TRACKCOND_Switch_off_magnetic = 8,
  M_TRACKCOND_Powerless_section_s = 9,
  M_TRACKCOND_Switch_off_eddy_cur = 10
} M_TRACKCOND;
/* DMI_Types_Pkg::Icon_control_flag_T */
typedef enum kcg_tag_Icon_control_flag_T_DMI {
  show_icon_in_area_DMI_Types_Pkg,
  clear_area_DMI_Types_Pkg,
  show_icon_flashing_in_area_DMI_,
  show_icon_with_yellow_flashing_
} Icon_control_flag_T_DMI_Types_P;
/* DMI_Types_Pkg::Icon_group_T */
typedef enum kcg_tag_Icon_group_T_DMI_Types_ {
  level_symbol_DMI_Types_Pkg,
  mode_symbols_DMI_Types_Pkg,
  status_symbols_DMI_Types_Pkg,
  order_an_announcements_symbols_,
  planning_information_symbols_DM,
  navigation_symbols_DMI_Types_Pk,
  settings_symbols_DMI_Types_Pkg
} Icon_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Area_group_T */
typedef enum kcg_tag_Area_group_T_DMI_Types_ {
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
typedef enum kcg_tag_DMI_List_Entry_Request_ {
  Enter_revalidate_driver_identif,
  Enter_revalidate_train_running_,
  Enter_revalidate_ETCS_level_DMI,
  Enter_RBC_contact_menu_DMI_Type,
  Validate_train_data_DMI_Types_P,
  Enter_NTC_data_DMI_Types_Pkg,
  Spare_DMI_Types_Pkg,
  Enable_the_track_ahead_free_by_,
  Disable_the_Track_Ahead_free_pa,
  Show_main_window_DMI_Types_Pkg,
  Hide_main_window_DMI_Types_Pkg,
  Hide_adhesion_factor_entry_wind,
  Hide_staff_responsible_entry_wi,
  Show_Set_VBC_validation_window_,
  Show_Remove_VBC_validation_wind
} DMI_List_Entry_Request_T_DMI_Ty;
/* DMI_Types_Pkg::M_SupervisionDisplay_T */
typedef enum kcg_tag_M_SupervisionDisplay_T_ {
  supDis_normal_DMI_Types_Pkg,
  supDis_indication_DMI_Types_Pkg,
  supDis_overspeed_DMI_Types_Pkg,
  supDis_warning_DMI_Types_Pkg,
  supDis_intervention_DMI_Types_P
} M_SupervisionDisplay_T_DMI_Type;
/* DMI_Types_Pkg::M_SUPERVISION_STATUS */
typedef enum kcg_tag_M_SUPERVISION_STATUS_DM {
  CSM_DMI_Types_Pkg,
  PIM_DMI_Types_Pkg,
  TSM_DMI_Types_Pkg,
  RSM_DMI_Types_Pkg,
  supervision_status_unknown_DMI_
} M_SUPERVISION_STATUS_DMI_Types_;
/* TIU_Types_Pkg::M_brake_signal_command_T */
typedef enum kcg_tag_M_brake_signal_command_ {
  brake_signal_command_not_define,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Ty;
/* SDM_Types_Pkg::SupervisionStatus_T */
typedef enum kcg_tag_SupervisionStatus_T_SDM {
  Normal_Supervision_SDM_Types_Pk,
  Indication_Supervision_SDM_Type,
  Overspeed_Supervision_SDM_Types,
  Warning_Supervision_SDM_Types_P,
  Intervention_Supervision_SDM_Ty,
  Undefined_Supervision_SDM_Types
} SupervisionStatus_T_SDM_Types_P;
/* SDM_Types_Pkg::SDM_Types_T */
typedef enum kcg_tag_SDM_Types_T_SDM_Types_P {
  CSM_SDM_Types_Pkg,
  TSM_SDM_Types_Pkg,
  RSM_SDM_Types_Pkg,
  No_SDM_Type_SDM_Types_Pkg
} SDM_Types_T_SDM_Types_Pkg;
/* TargetManagement_types::TargetType_T */
typedef enum kcg_tag_TargetType_T_TargetMana {
  EoA_TargetManagement_types,
  SvL_TargetManagement_types,
  MRSP_TargetManagement_types,
  invalid_TargetManagement_types,
  LoA_TargetManagement_types
} TargetType_T_TargetManagement_t;
/* DMI_Types_Pkg::DMI_DMI_Identifier_T */
typedef enum kcg_tag_DMI_DMI_Identifier_T_DM {
  DMI_1_DMI_Types_Pkg,
  DMI_2_DMI_Types_Pkg
} DMI_DMI_Identifier_T_DMI_Types_;
/* DMI_Types_Pkg::DMI_Cabin_Identifier_T */
typedef enum kcg_tag_DMI_Cabin_Identifier_T_ {
  cabin_A_DMI_Types_Pkg,
  cabin_B_DMI_Types_Pkg
} DMI_Cabin_Identifier_T_DMI_Type;
/* DMI_Types_Pkg::DMI_StatusSet_T */
typedef enum kcg_tag_DMI_StatusSet_T_DMI_Typ {
  Running_state_DMI_Types_Pkg,
  Starting_state_DMI_Types_Pkg,
  Failure_state_DMI_Types_Pkg,
  Running_not_active_state_DMI_Ty,
  Train_Speed_Overflow_DMI_Types_,
  Invalid_track_condition_DMI_Typ,
  Invalid_predefined_text_message,
  Invalid_text_message_DMI_Types_,
  HW_warning_temp_reached_DMI_Typ,
  TFT_OFF_temp_reached_DMI_Types_,
  Device_OFF_temp_reached_DMI_Typ,
  Over_temperature_DMI_Types_Pkg,
  Backlight_on_off_DMI_Types_Pkg,
  FAN_blocked_DMI_Types_Pkg,
  Power_supply_key_switch_off_DMI,
  Watchdog_not_running_DMI_Types_
} DMI_StatusSet_T_DMI_Types_Pkg;
/* M_ADHESION */
typedef enum kcg_tag_M_ADHESION {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
/* Q_TEXTREPORT */
typedef enum kcg_tag_Q_TEXTREPORT {
  Q_TEXTREPORT_No_driver_acknowle = 0,
  Q_TEXTREPORT_Driver_acknowledge = 1
} Q_TEXTREPORT;
/* DMI_Types_Pkg::DMI_context_TXT_MSG_T */
typedef enum kcg_tag_DMI_context_TXT_MSG_T_D {
  con_undefined_DMI_Types_Pkg,
  con_levelMgmt_DMI_Types_Pkg,
  con_modeChange_DMI_Types_Pkg,
  con_trackRequest_DMI_Types_Pkg
} DMI_context_TXT_MSG_T_DMI_Types;
/* Level_And_Mode_Types_Pkg::T_TransitionType */
typedef enum kcg_tag_T_TransitionType_Level_ {
  M_TransitionType_Conditional_Le,
  M_TransitionType_DriverInit_Lev,
  M_TransitionType_Normal_Level_A
} T_TransitionType_Level_And_Mode;
/* DMI_Types_Pkg::DMI_Request_T */
typedef enum kcg_tag_DMI_Request_T_DMI_Types {
  Start_of_mission_DMI_Types_Pkg,
  Shunting_entry_DMI_Types_Pkg,
  Shunting_exit_DMI_Types_Pkg,
  Non_leading_DMI_Types_Pkg,
  Non_leading_exit_DMI_Types_Pkg,
  Maintain_shunting_DMI_Types_Pkg,
  Level_entry_request_DMI_Types_P,
  Override_EOA_DMI_Types_Pkg,
  Override_route_unsuitability_DM,
  Request_for_radio_network_entry,
  Request_for_train_data_DMI_Type,
  Request_for_Adhesion_factor_dat,
  Request_for_SR_data_DMI_Types_P,
  Request_for_system_version_DMI_,
  Request_for_switching_train_dat,
  Request_for_train_data_view_DMI,
  Request_to_show_geographical_po,
  Language_changed_DMI_Types_Pkg,
  Train_data_entry_aborted_DMI_Ty,
  Train_running_number_entry_abor,
  SR_data_entry_aborted_DMI_Types,
  Radio_network_entry_aborted_DMI,
  Request_to_hide_geographical_in,
  Request_to_show_supervision_dat,
  Request_to_hide_supervision_dat,
  Scroll_text_up_DMI_Types_Pkg,
  Scroll_text_down_DMI_Types_Pkg,
  Request_to_contact_last_known_R,
  Request_to_use_short_number_DMI,
  Request_isolation_DMI_Types_Pkg,
  Track_Ahead_Free_is_validated_D,
  The_Train_Integrity_request_DMI,
  Set_VBC_request_DMI_Types_Pkg,
  Remove_VBC_request_DMI_Types_Pk,
  Show_tunnel_stopping_informatio,
  Hide_tunnel_stopping_informatio,
  NTC_data_entry_request_DMI_Type,
  End_of_NTC_data_entry_DMI_Types
} DMI_Request_T_DMI_Types_Pkg;
/* DataDictionary_Pkg::LevelDecisionTableActionKind */
typedef enum kcg_tag_LevelDecisionTableActio {
  LD_Invalid_DataDictionary_Pkg,
  LD_Accept_DataDictionary_Pkg,
  LD_Reject_DataDictionary_Pkg,
  LD_NotRelevant_DataDictionary_P,
  LD_01StoreIfPendingL1Transition,
  LD_02StoreIfPendingL2L3Transiti,
  LD_03RejectIfPendingAckOfTrainD,
  LD_04RejectIfSPPAndGradientOnBo,
  LD_05RejectIfEmergencyBrakeActi,
  LD_06StoreIfPendingNTCTransitio,
  LD_07RejectIfNoPendingNTCTransi,
  LD_08InhibitionOfRevocableTSR_D,
  LD_09RejectIfNoL2L3TransitionSt,
  LD_10ReferredLRBGWithDifferentP,
  LD_11LevelTransitionOrderInSame,
  LD_12RejectIfSameMessageWithDri,
  LD_13RejectIfNotTogetherWithImm,
  LD_0102StoreIfPendingLevelTrans,
  LD_030405Reject_DataDictionary_
} LevelDecisionTableActionKind_Da;
/* DataDictionary_Pkg::ModeDecisionTableActionKind */
typedef enum kcg_tag_ModeDecisionTableAction {
  MD_Invalid_DataDictionary_Pkg,
  MD_Accept_DataDictionary_Pkg,
  MD_Reject_DataDictionary_Pkg,
  MD_NotRelevant_DataDictionary_P,
  MD_01IfFollowingExitTRMode_Data,
  MD_02IfCabActive_DataDictionary,
  MD_03StoreRBCIDAndPhone_DataDic,
  MD_04IfValidTrainDataStored_Dat,
  MD_05OnlyLevelTransitionAnnounc,
  MD_06RejectIfOverrideActive_Dat,
  MD_07AcceptImmediateAndConditio,
  MD_08NullDistanceRBCTransition_,
  MD_09MaxSafeFrontWithinSupervis,
  MD_0204Accept_DataDictionary_Pk,
  MD_0105Accept_DataDictionary_Pk
} ModeDecisionTableActionKind_Dat;
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
  _43_M_DUP_This_balise_is_a_dupl = 1,
  M_DUP_This_balise_is_a_duplicat = 2
} M_DUP;
/* Q_LGTLOC */
typedef enum kcg_tag_Q_LGTLOC {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* M_LOC */
typedef enum kcg_tag_M_LOC {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_bali = 1,
  M_LOC_Do_not_send_position_repo = 2
} M_LOC;
/* API_RadioCommunication_Pkg::cmdRadioUnit_T */
typedef enum kcg_tag_cmdRadioUnit_T_API_Radi {
  cmdr_not_relevant_API_RadioComm,
  cmdr_connection_request_API_Rad,
  cmdr_disconnection_request_API_,
  cmdr_reset_connection_API_Radio,
  cmdr_networkUnregister_API_Radi,
  cmdr_networkRegister_API_RadioC
} cmdRadioUnit_T_API_RadioCommuni;
/* TIU_Types_Pkg::cab_ID_T */
typedef enum kcg_tag_cab_ID_T_TIU_Types_Pkg {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_cab_signal_status_T */
typedef enum kcg_tag_M_cab_signal_status_T_T {
  cab_signal_status_not_defined_T,
  both_desks_are_closed_TIU_Types,
  desk_A_is_open_TIU_Types_Pkg,
  desk_B_is_open_TIU_Types_Pkg,
  both_desks_are_open_TIU_Types_P
} M_cab_signal_status_T_TIU_Types;
/* TIU_Types_Pkg::M_sleeping_signal_status_T */
typedef enum kcg_tag_M_sleeping_signal_statu {
  signal_active_TIU_Types_Pkg,
  signal_not_active_TIU_Types_Pkg
} M_sleeping_signal_status_T_TIU_;
/* TIU_Types_Pkg::M_passiveshunting_signal_status_T */
typedef enum kcg_tag_M_passiveshunting_signa {
  passive_shunting_permitted_TIU_,
  passive_shunting_not_permitted_
} M_passiveshunting_signal_status;
/* TIU_Types_Pkg::M_nonleading_signal_status_T */
typedef enum kcg_tag_M_nonleading_signal_sta {
  non_leading_signall_status_not_,
  non_leading_permitted_TIU_Types,
  non_leading_not_permitted_TIU_T
} M_nonleading_signal_status_T_TI;
/* TIU_Types_Pkg::M_directioncontroller_signal_status_T */
typedef enum kcg_tag_M_directioncontroller_s {
  direction_controller_in_neutral,
  direction_controller_in_forward,
  direction_controller_in_backwar
} M_directioncontroller_signal_st;
/* TIU_Types_Pkg::M_trainintegrity_signal_status_T */
typedef enum kcg_tag_M_trainintegrity_signal {
  train_is_not_integer_TIU_Types_,
  train_is_integer_TIU_Types_Pkg
} M_trainintegrity_signal_status_;
/* TIU_Types_Pkg::M_traction_signal_status_T */
typedef enum kcg_tag_M_traction_signal_statu {
  traction_on_TIU_Types_Pkg,
  traction_off_TIU_Types_Pkg
} M_traction_signal_status_T_TIU_;
/* TIU_Types_Pkg::M_brake_status_T */
typedef enum kcg_tag_M_brake_status_T_TIU_Ty {
  brake_status_not_defined_TIU_Ty,
  is_active_TIU_Types_Pkg,
  is_not_active_TIU_Types_Pkg
} M_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_train_data_entry_type_T */
typedef enum kcg_tag_M_train_data_entry_type {
  fixed_entry_type_TIU_Types_Pkg,
  flexible_entry_type_TIU_Types_P,
  switchable_entry_type_TIU_Types,
  no_entry_type_TIU_Types_Pkg
} M_train_data_entry_type_T_TIU_T;
/* TIU_Types_Pkg::M_trackcond_T */
typedef enum kcg_tag_M_trackcond_T_TIU_Types {
  non_stopping_area_TIU_Types_Pkg,
  tunnel_stopping_area_TIU_Types_,
  sound_horn_TIU_Types_Pkg,
  powerless_section_lower_pantogr,
  radio_hole_TIU_Types_Pkg,
  air_tightness_TIU_Types_Pkg,
  switch_off_regenerative_brake_T,
  _28_switch_off_eddy_current_bra,
  switch_off_magnetic_shoe_brake_,
  powerless_section_switch_off_ma,
  switch_off_eddy_current_brake_f
} M_trackcond_T_TIU_Types_Pkg;
/* TA_MA::ActionType */
typedef enum kcg_tag_ActionType_TA_MA {
  replace_TA_MA,
  hold_TA_MA,
  delete_TA_MA
} ActionType_TA_MA;
/* M_LEVELTR */
typedef enum kcg_tag_M_LEVELTR {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_b = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_DIFF */
typedef enum kcg_tag_Q_DIFF {
  Q_DIFF_Cant_Deficiency_specific = 0,
  _42_Q_DIFF_Other_specific_categ = 1,
  Q_DIFF_Other_specific_category_ = 2
} Q_DIFF;
/* NC_CDDIFF */
typedef enum kcg_tag_NC_CDDIFF {
  _41_NC_CDDIFF_Specific_SSP_appl = 0,
  _40_NC_CDDIFF_Specific_SSP_appl = 1,
  _39_NC_CDDIFF_Specific_SSP_appl = 2,
  _38_NC_CDDIFF_Specific_SSP_appl = 3,
  _37_NC_CDDIFF_Specific_SSP_appl = 4,
  _36_NC_CDDIFF_Specific_SSP_appl = 5,
  _35_NC_CDDIFF_Specific_SSP_appl = 6,
  _34_NC_CDDIFF_Specific_SSP_appl = 7,
  _33_NC_CDDIFF_Specific_SSP_appl = 8,
  _32_NC_CDDIFF_Specific_SSP_appl = 9,
  NC_CDDIFF_Specific_SSP_applicab = 10
} NC_CDDIFF;
/* Q_FRONT */
typedef enum kcg_tag_Q_FRONT {
  Q_FRONT_Train_length_delay_on_v = 0,
  Q_FRONT_No_train_length_delay_o = 1
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
  Q_MAMODE_as_both_the_EOA_and_Sv = 1
} Q_MAMODE;
/* Q_GDIR */
typedef enum kcg_tag_Q_GDIR { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_OVERLAP */
typedef enum kcg_tag_Q_OVERLAP {
  Q_OVERLAP_No_overlap_informatio = 0,
  Q_OVERLAP_Overlap_information_t = 1
} Q_OVERLAP;
/* Q_DANGERPOINT */
typedef enum kcg_tag_Q_DANGERPOINT {
  Q_DANGERPOINT_No_danger_point_i = 0,
  Q_DANGERPOINT_Danger_point_info = 1
} Q_DANGERPOINT;
/* Q_ENDTIMER */
typedef enum kcg_tag_Q_ENDTIMER {
  Q_ENDTIMER_No_End_section_timer = 0,
  Q_ENDTIMER_End_section_timer_in = 1
} Q_ENDTIMER;
/* Q_SECTIONTIMER */
typedef enum kcg_tag_Q_SECTIONTIMER {
  Q_SECTIONTIMER_No_Section_Timer = 0,
  Q_SECTIONTIMER_Section_Timer_in = 1
} Q_SECTIONTIMER;
/* TrackAtlasTypes::MA_Level_t */
typedef enum kcg_tag_MA_Level_t_TrackAtlasTy {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* Q_NVEMRRLS */
typedef enum kcg_tag_Q_NVEMRRLS {
  _49_Q_NVEMRRLS_Revoke_emergency = 0,
  Q_NVEMRRLS_Revoke_emergency_bra = 1
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
  _48_M_NVEBCL_Confidence_level_9 = 4,
  _47_M_NVEBCL_Confidence_level_9 = 5,
  _46_M_NVEBCL_Confidence_level_9 = 6,
  _45_M_NVEBCL_Confidence_level_9 = 7,
  _44_M_NVEBCL_Confidence_level_9 = 8,
  M_NVEBCL_Confidence_level_99_99 = 9
} M_NVEBCL;
/* Q_NVKINT */
typedef enum kcg_tag_Q_NVKINT {
  Q_NVKINT_No_integrated_correcti = 0,
  Q_NVKINT_Integrated_correction_ = 1
} Q_NVKINT;
/* Q_NVKVINTSET */
typedef enum kcg_tag_Q_NVKVINTSET {
  Q_NVKVINTSET_Freight_trains = 0,
  Q_NVKVINTSET_Conventional_passe = 1
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
/* MoRC_Pck::mobileHWConnectionStatus_Type */
typedef enum kcg_tag_mobileHWConnectionStatu {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_M;
/* Q_NEWCOUNTRY */
typedef enum kcg_tag_Q_NEWCOUNTRY {
  Q_NEWCOUNTRY_Same_country__or__ = 0,
  Q_NEWCOUNTRY_Not_the_same_count = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum kcg_tag_Q_LINKORIENTATION {
  _55_Q_LINKORIENTATION_The_balis = 0,
  Q_LINKORIENTATION_The_balise_gr = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum kcg_tag_Q_LINKREACTION {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_br = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Handover_Pkg::abilityToHandleCommunicationSessions */
typedef enum kcg_tag_abilityToHandleCommunic {
  isAbleToManageOneSession_Handov,
  isAbleToManageTwoSessions_Hando
} abilityToHandleCommunicationSes;
/* RCM_Types_Pkg::mobileHealthStatus_T */
typedef enum kcg_tag_mobileHealthStatus_T_RC {
  mhs_nok_RCM_Types_Pkg,
  mhs_ok_RCM_Types_Pkg
} mobileHealthStatus_T_RCM_Types_;
/* RCM_Types_Pkg::mobileRegistrationStatus_T */
typedef enum kcg_tag_mobileRegistrationStatu {
  mrs_unregistered_RCM_Types_Pkg,
  mrs_registering_RCM_Types_Pkg,
  mrs_registered_RCM_Types_Pkg
} mobileRegistrationStatus_T_RCM_;
/* RCM_Types_Pkg::mobileRegistrationAction_T */
typedef enum kcg_tag_mobileRegistrationActio {
  mra_nop_RCM_Types_Pkg,
  mra_register_RCM_Types_Pkg,
  mra_unregister_RCM_Types_Pkg
} mobileRegistrationAction_T_RCM_;
/* RCM_Session_Types_Pkg::sessionPhase_T */
typedef enum kcg_tag_sessionPhase_T_RCM_Sess {
  sp_terminated_RCM_Session_Types,
  sp_establishing_RCM_Session_Typ,
  sp_maintaining_RCM_Session_Type,
  sp_terminating_RCM_Session_Type
} sessionPhase_T_RCM_Session_Type;
/* RCM_Types_Pkg::mobileConnectionStatus_T */
typedef enum kcg_tag_mobileConnectionStatus_ {
  mcs_disconnected_RCM_Types_Pkg,
  mcs_connecting_RCM_Types_Pkg,
  mcs_connected_RCM_Types_Pkg
} mobileConnectionStatus_T_RCM_Ty;
/* RCM_Types_Pkg::mobileConnetionAction_T */
typedef enum kcg_tag_mobileConnetionAction_T {
  mca_nop_RCM_Types_Pkg,
  mca_connect_RCM_Types_Pkg,
  mca_disconnect_RCM_Types_Pkg,
  mca_expectRadioHole_RCM_Types_P,
  mca_unexpectRadioHole_RCM_Types
} mobileConnetionAction_T_RCM_Typ;
/* RCM_Session_Types_Pkg::safeRadioConnnectionIndicator_T */
typedef enum kcg_tag_safeRadioConnnectionInd {
  srci_noConnection_RCM_Session_T,
  srci_connectionLost_setupFailed,
  srci_connectionUp_RCM_Session_T
} safeRadioConnnectionIndicator_T;
/* Q_RBC */
typedef enum kcg_tag_Q_RBC {
  Q_RBC_Terminate_communication_s = 0,
  Q_RBC_Establish_communication_s = 1
} Q_RBC;
/* Q_SLEEPSESSION */
typedef enum kcg_tag_Q_SLEEPSESSION {
  Q_SLEEPSESSION_Ignore_session_e = 0,
  Q_SLEEPSESSION_Execute_session_ = 1
} Q_SLEEPSESSION;
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
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum kcg_tag_odoMotionState_T_Obu_Ba {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum kcg_tag_odoMotionDirection_T_Ob {
  unknownDirection_Obu_BasicTypes,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicT;
/* Common_Types_Pkg::MsgSource_T */
typedef enum kcg_tag_MsgSource_T_Common_Type {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pk,
  msrc_RadioInfillUnit_Common_Typ,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* M_VERSION */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_acc = 0,
  M_VERSION_Version_1_0_introduce = 16,
  M_VERSION_Version_1_1_introduce = 17,
  M_VERSION_Version_2_0_introduce = 32
} M_VERSION;
/* Q_DIR */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
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
/* Q_DIRTRAIN */
typedef enum kcg_tag_Q_DIRTRAIN {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* Q_DLRBG */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LENGTH */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_inf = 0,
  _30_Q_LENGTH_Train_integrity_co = 1,
  Q_LENGTH_Train_integrity_confir = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
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
  NC_TRAIN_Train_does_not_belong_ = 0,
  _51_NC_TRAIN_Freight_train_brak = 1,
  NC_TRAIN_Freight_train_braked_i = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_AIRTIGHT */
typedef enum kcg_tag_M_AIRTIGHT {
  M_AIRTIGHT_Not_fitted = 0,
  M_AIRTIGHT_Fitted = 1
} M_AIRTIGHT;
/* M_LOADINGGAUGE */
typedef enum kcg_tag_M_LOADINGGAUGE {
  M_LOADINGGAUGE_The_train_does_n = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
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
/* M_VOLTAGE */
typedef enum kcg_tag_M_VOLTAGE {
  M_VOLTAGE_Line_not_fitted_with_ = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
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
  _31_Q_EMERGENCYSTOP_Conditional = 0,
  Q_EMERGENCYSTOP_Conditional_Eme = 1,
  Q_EMERGENCYSTOP_Unconditional_E = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum kcg_tag__198_SSM_TR_SM1 {
  _197_SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or,
  SSM_TR_Wait_for_Acknowledgment_
} _198_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum kcg_tag__196_SSM_ST_SM1 {
  SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or,
  SSM_st_Wait_for_Acknowledgment_,
  SSM_st_FS_Mode_SM1
} _196_SSM_ST_SM1;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum kcg_tag_SSM_TR_Level_NTC_and_Mo {
  SSM_TR_no_trans_Level_NTC_and_M,
  SSM_TR_State1_1_Level_NTC_and_M,
  SSM_TR_Waiting_for_Ack_of_propo
} SSM_TR_Level_NTC_and_Mode_SN;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum kcg_tag_SSM_ST_Level_NTC_and_Mo {
  SSM_st_State1_Level_NTC_and_Mod,
  SSM_st_Waiting_for_Ack_of_propo,
  SSM_st_Level_NTC_andMode_SN_Lev
} SSM_ST_Level_NTC_and_Mode_SN;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum kcg_tag__195_SSM_TR_SM1 {
  _194_SSM_TR_no_trans_SM1,
  SSM_TR_NP_1_SM1,
  SSM_TR_Awakness_of_Train_1_SM1,
  SSM_TR_Awakness_of_Train_2_SM1,
  SSM_TR_Awakness_of_Train_3_SM1
} _195_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum kcg_tag__193_SSM_ST_SM1 {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_,
  SSM_st_SoM_NTC_SN_SM1
} _193_SSM_ST_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum kcg_tag_SSM_TR_SM3_SM1_Awakness {
  SSM_TR_no_trans_SM3_SM1_Awaknes,
  SSM_TR_Waition_for_Driver_ID_1_,
  _192_SSM_TR_first_Validation_fo,
  _191_SSM_TR_first_Validation_fo,
  SSM_TR_first_Validation_for_Tra,
  SSM_TR_request_Level_1_SM3_SM1_,
  SSM_TR_Waiting_for_RBC_Establis,
  SSM_TR_Acknowlege_of_Position_f,
  SSM_TR_Validation_of_Train_Data,
  _190_SSM_TR_Second_Validation_o,
  SSM_TR_Second_Validation_of_Tra,
  SSM_TR_Waiting_for_Acknowledgem,
  SSM_TR_SB_1_SM3_SM1_Awakness_of,
  SSM_TR_Waiting_for_Mobile_termi,
  SSM_TR_Waiting_for_driver_selec
} SSM_TR_SM3_SM1_Awakness_of_Trai;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum kcg_tag_SSM_ST_SM3_SM1_Awakness {
  SSM_st_Waition_for_Driver_ID_SM,
  SSM_st_first_Validation_for_Tra,
  SSM_st_request_Level_SM1_Awakne,
  SSM_st_Waiting_for_RBC_Establis,
  SSM_st_Acknowlege_of_Position_f,
  SSM_st_Validation_of_Train_Data,
  SSM_st_Second_Validation_of_Tra,
  SSM_st_Waiting_for_Acknowledgem,
  SSM_st_Waiting_of_Start_from_Dr,
  SSM_st_SB_SM1_Awakness_of_Train,
  SSM_st_Waiting_for_Mobile_termi,
  SSM_st_Waiting_for_driver_selec
} SSM_ST_SM3_SM1_Awakness_of_Trai;
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
typedef enum kcg_tag_SSM_TR_CSM_modeInterpla {
  SSM_TR_no_trans_CSM_modeInterpl,
  SSM_TR_Init_1_CSM_modeInterplay,
  SSM_TR_Init_2_CSM_modeInterplay,
  SSM_TR_Init_3_CSM_modeInterplay,
  SSM_TR_Init_4_CSM_modeInterplay,
  SSM_TR_Init_5_CSM_modeInterplay,
  SSM_TR_Init_6_CSM_modeInterplay,
  SSM_TR_Init_7_CSM_modeInterplay,
  SSM_TR_Init_8_CSM_modeInterplay,
  SSM_TR_Init_9_CSM_modeInterplay,
  SSM_TR_NormalStatus_1_CSM_modeI,
  SSM_TR_NormalStatus_2_CSM_modeI,
  SSM_TR_NormalStatus_3_CSM_modeI,
  SSM_TR_OverspeedStatus_1_CSM_mo,
  SSM_TR_OverspeedStatus_2_CSM_mo,
  SSM_TR_OverspeedStatus_3_CSM_mo,
  SSM_TR_WarningStatus_1_CSM_mode,
  SSM_TR_WarningStatus_2_CSM_mode,
  SSM_TR_InterventionStatus_1_CSM,
  SSM_TR_InterventionStatus_2_CSM
} SSM_TR_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
typedef enum kcg_tag_SSM_ST_CSM_modeInterpla {
  SSM_st_Init_modeInterplay_CSM_C,
  SSM_st_NormalStatus_modeInterpl,
  SSM_st_OverspeedStatus_modeInte,
  SSM_st_WarningStatus_modeInterp,
  _189_SSM_st_InterventionStatus_
} SSM_ST_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum kcg_tag_SSM_TR_SM4_modeInterpla {
  SSM_TR_no_trans_SM4_modeInterpl,
  SSM_TR_init_1_SM4_modeInterplay,
  SSM_TR_init_2_SM4_modeInterplay,
  SSM_TR_init_3_SM4_modeInterplay,
  SSM_TR_init_4_SM4_modeInterplay,
  SSM_TR_init_5_SM4_modeInterplay,
  SSM_TR_init_6_SM4_modeInterplay,
  SSM_TR_Normal_1_SM4_modeInterpl,
  SSM_TR_Normal_2_SM4_modeInterpl,
  SSM_TR_Normal_3_SM4_modeInterpl,
  SSM_TR_Normal_4_SM4_modeInterpl,
  SSM_TR_Normal_5_SM4_modeInterpl,
  SSM_TR_Indication_1_SM4_modeInt,
  SSM_TR_Indication_2_SM4_modeInt,
  SSM_TR_Indication_3_SM4_modeInt,
  SSM_TR_Indication_4_SM4_modeInt,
  SSM_TR_Indication_5_SM4_modeInt,
  SSM_TR_Overspeed_1_SM4_modeInte,
  SSM_TR_Overspeed_2_SM4_modeInte,
  SSM_TR_Overspeed_3_SM4_modeInte,
  SSM_TR_Overspeed_4_SM4_modeInte,
  SSM_TR_Overspeed_5_SM4_modeInte,
  SSM_TR_Warning_1_SM4_modeInterp,
  SSM_TR_Warning_2_SM4_modeInterp,
  SSM_TR_Warning_3_SM4_modeInterp,
  SSM_TR_Warning_4_SM4_modeInterp,
  SSM_TR_Intervention_1_SM4_modeI,
  SSM_TR_Intervention_2_SM4_modeI,
  SSM_TR_Intervention_3_SM4_modeI
} SSM_TR_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum kcg_tag_SSM_ST_SM4_modeInterpla {
  SSM_st_init_modeInterplay_TSM_S,
  SSM_st_Normal_modeInterplay_TSM,
  SSM_st_Indication_modeInterplay,
  SSM_st_Overspeed_modeInterplay_,
  SSM_st_Warning_modeInterplay_TS,
  SSM_st_Intervention_modeInterpl
} SSM_ST_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum kcg_tag_SSM_TR_RSM_modeInterpla {
  SSM_TR_no_trans_RSM_modeInterpl,
  SSM_TR_Init_1_RSM_modeInterplay,
  SSM_TR_Init_2_RSM_modeInterplay,
  SSM_TR_Init_3_RSM_modeInterplay,
  SSM_TR_Init_4_RSM_modeInterplay,
  SSM_TR_Init_5_RSM_modeInterplay,
  SSM_TR_IndicationStatus_1_RSM_m,
  SSM_TR_InterventionStatus_1_RSM
} SSM_TR_RSM_modeInterplay_RSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum kcg_tag_SSM_ST_RSM_modeInterpla {
  SSM_st_Init_modeInterplay_RSM_R,
  SSM_st_IndicationStatus_modeInt,
  SSM_st_InterventionStatus_modeI
} SSM_ST_RSM_modeInterplay_RSM;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_TR_SM_SH_Initiated_ {
  SSM_TR_no_trans_SM_SH_Initiated,
  _188_SSM_TR_SH_procedure_possib,
  SSM_TR_SH_procedure_possible_1_,
  SSM_TR_Issue_SH_Request_L2_L3_1,
  SSM_TR_Issue_SH_Request_L2_L3_2
} SSM_TR_SM_SH_Initiated_By_Drive;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_ST_SM_SH_Initiated_ {
  SSM_st_SH_procedure_possible_SM,
  SSM_st_Issue_SH_Request_L2_L3_S,
  SSM_st_SH_Authorized_L0_L1_LNTC,
  SSM_st_SH_Authorized_L2_L3_SM_S
} SSM_ST_SM_SH_Initiated_By_Drive;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_TR_SH_Initiated_By_ {
  SSM_TR_no_trans_SH_Initiated_By,
  SSM_TR_SH_initiated_by_driver_p,
  SSM_TR_S0_SH_initiated_by_drive
} SSM_TR_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_ST_SH_Initiated_By_ {
  SSM_st_SH_initiated_by_driver_p,
  SSM_st_S0_SH_initiated_by_drive
} SSM_ST_SH_Initiated_By_Driver;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum kcg_tag_SSM_TR_SM_Mode_Profile_ {
  SSM_TR_no_trans_SM_Mode_Profile,
  SSM_TR_Procedure_Off_1_1_SM_Mod,
  SSM_TR_Procedure_Off_1_2_SM_Mod,
  SSM_TR_Futher_location_1_SM_Mod,
  SSM_TR_Futher_location_2_SM_Mod,
  SSM_TR_Current_Location_1_SM_Mo
} SSM_TR_SM_Mode_Profile_By_Track;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum kcg_tag_SSM_ST_SM_Mode_Profile_ {
  SSM_st_Procedure_Off_SM_Mode_Pr,
  SSM_st_Futher_location_SM_Mode_,
  SSM_st_Current_Location_SM_Mode
} SSM_ST_SM_Mode_Profile_By_Track;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum kcg_tag_SSM_TR_SM_Futher_Locati {
  SSM_TR_no_trans_SM_Futher_Locat,
  SSM_TR_Req_Futher_Location_1_SM,
  SSM_TR_Start_Supervision_1_SM_F,
  SSM_TR_Waiting_Ack_1_SM_Futher_
} SSM_TR_SM_Futher_Location_SM_Mo;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum kcg_tag_SSM_ST_SM_Futher_Locati {
  SSM_st_Req_Futher_Location_SM_M,
  SSM_st_Start_Supervision_SM_Mod,
  _187_SSM_st_Waiting_Ack_SM_Mode,
  _186_SSM_st_Switch_Mode_Confirm
} SSM_ST_SM_Futher_Location_SM_Mo;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum kcg_tag_SSM_TR_SM_Current_Locat {
  SSM_TR_no_trans_SM_Current_Loca,
  SSM_TR_Req_Current_Location_1_S,
  SSM_TR_Req_Current_Location_2_S,
  _185_SSM_TR_Switch_Autorized_Wa,
  SSM_TR_Switch_Autorized_Waiting,
  SSM_TR_Waiting_Ack_1_SM_Current,
  SSM_TR_Ack_Not_Received_1_SM_Cu
} SSM_TR_SM_Current_Location_SM_M;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum kcg_tag_SSM_ST_SM_Current_Locat {
  SSM_st_Req_Current_Location_SM_,
  SSM_st_Switch_Autorized_Waiting,
  SSM_st_Waiting_Ack_SM_Mode_Prof,
  SSM_st_Switch_Mode_Confirmed_SM,
  SSM_st_Ack_Not_Received_SM_Mode
} SSM_ST_SM_Current_Location_SM_M;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum kcg_tag_SSM_TR_SM_Start_L1_L2_L {
  SSM_TR_no_trans_SM_Start_L1_L2_,
  _184_SSM_TR_Waiting_Driver_Star,
  SSM_TR_Waiting_Driver_Starting_,
  SSM_TR_Level_1_1_SM_Start_L1_L2,
  SSM_TR_Level_2_3_1_SM_Start_L1_,
  SSM_TR_Level_2_3_2_SM_Start_L1_,
  SSM_TR_Level_2_3_3_SM_Start_L1_,
  SSM_TR_Level_2_3_4_SM_Start_L1_,
  SSM_TR_Level_2_3_5_SM_Start_L1_,
  SSM_TR_Wait_For_OS_1_SM_Start_L,
  SSM_TR_Wait_For_SH_1_SM_Start_L,
  SSM_TR_Wait_For_LS_1_SM_Start_L
} SSM_TR_SM_Start_L1_L2_L3;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum kcg_tag_SSM_ST_SM_Start_L1_L2_L {
  SSM_st_Waiting_Driver_Starting_,
  SSM_st_Level_1_SM_Start_L1_L2_L,
  SSM_st_Level_2_3_SM_Start_L1_L2,
  SSM_st_SR_Mode_SM_Start_L1_L2_L,
  SSM_st_FS_Mode_SM_Start_L1_L2_L,
  SSM_st_OS_Mode_SM_Start_L1_L2_L,
  SSM_st_SH_Mode_SM_Start_L1_L2_L,
  SSM_st_LS_Mode_SM_Start_L1_L2_L,
  SSM_st_Wait_For_OS_SM_Start_L1_,
  SSM_st_Wait_For_SH_SM_Start_L1_,
  SSM_st_Wait_For_LS_SM_Start_L1_
} SSM_ST_SM_Start_L1_L2_L3;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum kcg_tag_SSM_TR_SM_StartOfMissio {
  SSM_TR_no_trans_SM_StartOfMissi,
  SSM_TR_Procedure_Off_1_SM_Start,
  SSM_TR_Procedure_On_1_SM_StartO,
  SSM_TR_Procedure_On_2_SM_StartO,
  SSM_TR_EB_Requested_1_SM_StartO
} SSM_TR_SM_StartOfMissionProcedu;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum kcg_tag_SSM_ST_SM_StartOfMissio {
  SSM_st_Procedure_Off_SM_StartOf,
  SSM_st_Procedure_On_SM_StartOfM,
  SSM_st_EB_Requested_SM_StartOfM
} SSM_ST_SM_StartOfMissionProcedu;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum kcg_tag_SSM_TR_SM_SoM_On_SM_Sta {
  SSM_TR_no_trans_SM_SoM_On_SM_St,
  SSM_TR_Waiting_Driver_Command_1,
  SSM_TR_Waiting_Driver_Command_2,
  SSM_TR_Waiting_Driver_Command_3,
  _183_SSM_TR_Waiting_Driver_Stra,
  _182_SSM_TR_Waiting_Driver_Stra,
  SSM_TR_Waiting_Driver_Strating_,
  SSM_TR_Level_0_1_SM_SoM_On_SM_S,
  SSM_TR_Level_NTC_1_SM_SoM_On_SM
} SSM_TR_SM_SoM_On_SM_StartOfMiss;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum kcg_tag_SSM_ST_SM_SoM_On_SM_Sta {
  SSM_st_Waiting_Driver_Command_S,
  SSM_st_NL_Mode_SM_StartOfMissio,
  _181_SSM_st_Procedure_SH_Initia,
  SSM_st_Waiting_Driver_Strating_,
  SSM_st_Level_0_SM_StartOfMissio,
  SSM_st_Level_NTC_SM_StartOfMiss,
  SSM_st_SN_Mode_SM_StartOfMissio,
  SSM_st_UN_Mode_SM_StartOfMissio,
  _180_SSM_st_Waiting_Driver_Sele
} SSM_ST_SM_SoM_On_SM_StartOfMiss;
/* Procedures::Procedure_Train_Trip::SM_Train_Trip */
typedef enum kcg_tag_SSM_TR_SM_Train_Trip {
  SSM_TR_no_trans_SM_Train_Trip,
  SSM_TR_Train_Trip_procedure_off,
  SSM_TR_Trip_Mode_1_SM_Train_Tri,
  _179_SSM_TR_Trip_Mode_Waiting_A,
  _178_SSM_TR_Trip_Mode_Waiting_A,
  _177_SSM_TR_Trip_Mode_Waiting_A,
  SSM_TR_Trip_Mode_Waiting_Ack_1_,
  SSM_TR_Post_Trip_Mode_1_SM_Trai,
  SSM_TR_Post_Trip_Mode_2_SM_Trai,
  SSM_TR_Post_Trip_Mode_3_SM_Trai,
  SSM_TR_Waiting_Driver_Selection,
  SSM_TR_Wait_RBC_Ack_1_SM_Train_
} SSM_TR_SM_Train_Trip;
/* Procedures::Procedure_Train_Trip::SM_Train_Trip */
typedef enum kcg_tag_SSM_ST_SM_Train_Trip {
  SSM_st_Train_Trip_procedure_off,
  SSM_st_Trip_Mode_SM_Train_Trip,
  SSM_st_Trip_Mode_Waiting_Ack_SM,
  SSM_st_Post_Trip_Mode_SM_Train_,
  SSM_st_SH_Mode_SM_Train_Trip,
  SSM_st_UN_Mode_SM_Train_Trip,
  SSM_st_SN_Mode_SM_Train_Trip,
  SSM_st_Waiting_Driver_Selection,
  SSM_st_Wait_RBC_Ack_SM_Train_Tr,
  SSM_st_Procedure_SH_Initiated_B
} SSM_ST_SM_Train_Trip;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum kcg_tag_SSM_TR_SM_Train_Reversi {
  SSM_TR_no_trans_SM_Train_Revers,
  SSM_TR_Reversing_Procedure_Off_,
  SSM_TR_Reversing_Condition_1_SM,
  SSM_TR_Reversing_Condition_2_SM,
  SSM_TR_Reversing_Condition_3_SM,
  _176_SSM_TR_Reversing_Data_Avai,
  SSM_TR_Reversing_Data_Available
} SSM_TR_SM_Train_Reversing;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum kcg_tag_SSM_ST_SM_Train_Reversi {
  SSM_st_Reversing_Procedure_Off_,
  SSM_st_Reversing_Condition_SM_T,
  SSM_st_RV_Mode_SM_Train_Reversi,
  SSM_st_Reversing_Data_Available
} SSM_ST_SM_Train_Reversing;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum kcg_tag__175_SSM_TR_SM1 {
  _174_SSM_TR_no_trans_SM1,
  SSM_TR_BeforeChange_1_SM1,
  SSM_TR_State2_1_SM1
} _175_SSM_TR_SM1;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum kcg_tag__173_SSM_ST_SM1 {
  SSM_st_BeforeChange_SM1,
  SSM_st_State2_SM1
} _173_SSM_ST_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum kcg_tag__172_SSM_TR_SM1 {
  _171_SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_1_SM1,
  SSM_TR_LaunchRequest_1_SM1,
  SSM_TR_LaunchRequest_2_SM1,
  SSM_TR_AckReceived_1_SM1
} _172_SSM_TR_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum kcg_tag__170_SSM_ST_SM1 {
  SSM_st_Waiting_SM1,
  SSM_st_LaunchRequest_SM1,
  SSM_st_AckReceived_SM1
} _170_SSM_ST_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum kcg_tag__169_SSM_TR_SM1 {
  _168_SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} _169_SSM_TR_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum kcg_tag__167_SSM_ST_SM1 {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} _167_SSM_ST_SM1;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum kcg_tag_SSM_TR_TimerStatus_SM {
  SSM_TR_no_trans_TimerStatus_SM,
  SSM_TR_Stopped_1_TimerStatus_SM,
  SSM_TR_Stopped_2_TimerStatus_SM,
  SSM_TR_Counting_1_TimerStatus_S,
  SSM_TR_Counting_2_TimerStatus_S,
  SSM_TR_Counting_3_TimerStatus_S,
  SSM_TR_Counting_4_TimerStatus_S,
  SSM_TR_Expired_1_TimerStatus_SM,
  SSM_TR_Expired_2_TimerStatus_SM
} SSM_TR_TimerStatus_SM;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum kcg_tag_SSM_ST_TimerStatus_SM {
  SSM_st_Stopped_TimerStatus_SM,
  SSM_st_Counting_TimerStatus_SM,
  SSM_st_Expired_TimerStatus_SM
} SSM_ST_TimerStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum kcg_tag_SSM_TR_repeat_SM {
  SSM_TR_no_trans_repeat_SM,
  SSM_TR_rep_inactive_1_repeat_SM,
  SSM_TR_rep_inactive_2_repeat_SM,
  _166_SSM_TR_rep_repeatUntilSucc,
  SSM_TR_rep_repeatUntilSuccessfu,
  _165_SSM_TR_rep_repeatUntilStop,
  SSM_TR_rep_repeatUntilStopCondi
} SSM_TR_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum kcg_tag_SSM_ST_repeat_SM {
  SSM_st_rep_inactive_repeat_SM,
  SSM_st_rep_repeatUntilSuccessfu,
  SSM_st_rep_repeatUntilStopCondi
} SSM_ST_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
typedef enum kcg_tag_SSM_TR_Register_SM {
  SSM_TR_no_trans_Register_SM,
  SSM_TR_Unregistered_1_Register_,
  SSM_TR_Unregistered_2_Register_,
  SSM_TR_Unregistered_3_Register_,
  SSM_TR_Registering_1_Register_S,
  SSM_TR_Registering_2_Register_S,
  SSM_TR_Registered_1_Register_SM,
  SSM_TR_Registered_2_Register_SM,
  SSM_TR_Registered_3_Register_SM,
  SSM_TR_Reregistering_1_Register
} SSM_TR_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
typedef enum kcg_tag_SSM_ST_Register_SM {
  SSM_st_Unregistered_Register_SM,
  SSM_st_Registering_Register_SM,
  SSM_st_Registered_Register_SM,
  SSM_st_Reregistering_Register_S
} SSM_ST_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum kcg_tag__164_SSM_TR_SM1 {
  _163_SSM_TR_no_trans_SM1,
  _162_SSM_TR_idle_1_SM1,
  _161_SSM_TR_waitForSafeRadioCon,
  SSM_TR_waitForSafeRadioConnecti,
  SSM_TR_waitForSystemVersion_1_S,
  SSM_TR_waitForSystemVersion_2_S,
  SSM_TR_waitForSystemVersion_3_S,
  _160_SSM_TR_sessionEstablished_
} _164_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum kcg_tag__159_SSM_ST_SM1 {
  _158_SSM_st_idle_SM1,
  SSM_st_waitForSafeRadioConnecti,
  SSM_st_waitForSystemVersion_SM1,
  _157_SSM_st_sessionEstablished_
} _159_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum kcg_tag__156_SSM_TR_SM1 {
  _155_SSM_TR_no_trans_SM1,
  _154_SSM_TR_idle_1_SM1,
  SSM_TR_sessionEstablished_1_SM1
} _156_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum kcg_tag__153_SSM_ST_SM1 {
  _152_SSM_st_idle_SM1,
  SSM_st_sessionEstablished_SM1
} _153_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum kcg_tag__151_SSM_TR_SM1 {
  _150_SSM_TR_no_trans_SM1,
  _149_SSM_TR_idle_1_SM1,
  SSM_TR_idle_2_SM1,
  SSM_TR_establishingByOBU_1_SM1,
  SSM_TR_establishingByRBC_1_SM1
} _151_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum kcg_tag__148_SSM_ST_SM1 {
  _147_SSM_st_idle_SM1,
  SSM_st_establishingByOBU_SM1,
  SSM_st_establishingByRBC_SM1
} _148_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum kcg_tag__146_SSM_TR_SM1 {
  _145_SSM_TR_no_trans_SM1,
  SSM_TR_idle_1_SM1,
  _144_SSM_TR_waitForAckTerminati,
  SSM_TR_waitForAckTerminationOfC,
  SSM_TR_terminated_1_SM1
} _146_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum kcg_tag__143_SSM_ST_SM1 {
  SSM_st_idle_SM1,
  SSM_st_waitForAckTerminationOfC,
  SSM_st_terminated_SM1
} _143_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum kcg_tag_SSM_TR_Session_SM {
  SSM_TR_no_trans_Session_SM,
  SSM_TR_sessionTerminated_1_Sess,
  SSM_TR_establishingSession_1_Se,
  SSM_TR_establishingSession_2_Se,
  SSM_TR_maintainingSession_1_Ses,
  SSM_TR_terminatingSession_1_Ses
} SSM_TR_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum kcg_tag_SSM_ST_Session_SM {
  SSM_st_sessionTerminated_Sessio,
  SSM_st_establishingSession_Sess,
  SSM_st_maintainingSession_Sessi,
  SSM_st_terminatingSession_Sessi
} SSM_ST_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum kcg_tag_SSM_TR_TrainExitedFromR {
  SSM_TR_no_trans_TrainExitedFrom,
  SSM_TR_Idle_1_TrainExitedFromRB,
  SSM_TR_Idle_2_TrainExitedFromRB,
  _142_SSM_TR_WaitForOrderToTermi,
  SSM_TR_WaitForOrderToTerminateT
} SSM_TR_TrainExitedFromRBCArea_S;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum kcg_tag_SSM_ST_TrainExitedFromR {
  SSM_st_Idle_TrainExitedFromRBCA,
  SSM_st_WaitForOrderToTerminateT
} SSM_ST_TrainExitedFromRBCArea_S;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum kcg_tag_SSM_TR_connectionStatus {
  SSM_TR_no_trans_connectionStatu,
  SSM_TR_NoConnection_1_connectio,
  SSM_TR_NoConnection_2_connectio,
  _141_SSM_TR_ConnectionLost_Setu,
  SSM_TR_ConnectionLost_SetupFail,
  SSM_TR_ConnectionUp_1_connectio,
  SSM_TR_ConnectionUp_2_connectio
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum kcg_tag_SSM_ST_connectionStatus {
  SSM_st_NoConnection_connectionS,
  SSM_st_ConnectionLost_SetupFail,
  SSM_st_ConnectionUp_connectionS
} SSM_ST_connectionStatus_SM;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
typedef enum kcg_tag_SSM_TR_handOver_with_1_ {
  SSM_TR_no_trans_handOver_with_1,
  _140_SSM_TR_WaitForTransitionOr,
  _139_SSM_TR_WaitForMaxSafeFront,
  _138_SSM_TR_WaitForMaxSafeFront,
  _137_SSM_TR_WaitForMinSafeRearE,
  _136_SSM_TR_WaitForMinSafeRearE,
  _135_SSM_TR_WaitForSessionWithA,
  _134_SSM_TR_WaitForSessionWithA,
  _133_SSM_TR_WaitForTerminationO,
  _132_SSM_TR_WaitForTerminationO,
  _131_SSM_TR_WaitForHandingOverR,
  _130_SSM_TR_WaitForHandingOverR,
  SSM_TR_RegisterAcceptingRBC_1_h,
  SSM_TR_RegisterAcceptingRBC_2_h,
  _129_SSM_TR_WaitForHandingOverR,
  _128_SSM_TR_WaitForHandingOverR,
  _127_SSM_TR_EstablishSessionWit,
  SSM_TR_EstablishSessionWithAcce
} SSM_TR_handOver_with_1_Session_;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
typedef enum kcg_tag_SSM_ST_handOver_with_1_ {
  _126_SSM_st_WaitForTransitionOr,
  _125_SSM_st_WaitForMaxSafeFront,
  _124_SSM_st_WaitForMinSafeRearE,
  _123_SSM_st_WaitForSessionWithA,
  _122_SSM_st_WaitForTerminationO,
  _121_SSM_st_WaitForHandingOverR,
  SSM_st_RegisterAcceptingRBC_IfB,
  _120_SSM_st_WaitForHandingOverR,
  SSM_st_EstablishSessionWithAcce
} SSM_ST_handOver_with_1_Session_;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
typedef enum kcg_tag_SSM_TR_handOver_with_2_ {
  SSM_TR_no_trans_handOver_with_2,
  SSM_TR_WaitForTransitionOrder_1,
  _119_SSM_TR_WaitForMaxSafeFront,
  SSM_TR_WaitForMaxSafeFrontEndPa,
  _118_SSM_TR_WaitForMinSafeRearE,
  SSM_TR_WaitForMinSafeRearEndPas,
  SSM_TR_WaitForSessionWithAccept,
  _117_SSM_TR_WaitForTerminationO,
  SSM_TR_WaitForTerminationOrderF,
  _116_SSM_TR_WaitForHandingOverR,
  SSM_TR_WaitForHandingOverRBCTer,
  _115_SSM_TR_ReregisterHandingOv,
  SSM_TR_ReregisterHandingOverRBC,
  _114_SSM_TR_WaitForHandingOverR,
  SSM_TR_WaitForHandingOverRBCReg
} SSM_TR_handOver_with_2_Sessions;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
typedef enum kcg_tag_SSM_ST_handOver_with_2_ {
  SSM_st_WaitForTransitionOrder_I,
  SSM_st_WaitForMaxSafeFrontEndPa,
  SSM_st_WaitForMinSafeRearEndPas,
  SSM_st_WaitForSessionWithAccept,
  SSM_st_WaitForTerminationOrderF,
  SSM_st_WaitForHandingOverRBCTer,
  SSM_st_ReregisterHandingOverRBC,
  SSM_st_WaitForHandingOverRBCReg
} SSM_ST_handOver_with_2_Sessions;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum kcg_tag__113_SSM_TR_SM1 {
  _112_SSM_TR_no_trans_SM1,
  SSM_TR_mobile_1_1_SM1,
  SSM_TR_mobile_2_1_SM1
} _113_SSM_TR_SM1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum kcg_tag__111_SSM_ST_SM1 {
  SSM_st_mobile_1_SM1,
  SSM_st_mobile_2_SM1
} _111_SSM_ST_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_notRequested_1_SM1,
  SSM_TR_notRequested_2_SM1,
  SSM_TR_requested_1_SM1
} SSM_TR_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_notRequested_SM1,
  SSM_st_requested_SM1
} SSM_ST_SM1;
/* ProvidePositionReport_Pkg::BG_Orientation_T */
typedef Q_DIRLRBG BG_Orientation_T_ProvidePositio;

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
typedef kcg_real L_internal_real_Type_SDM_Types_;

/* SDM_Types_Pkg::V_internal_real_Type */
typedef kcg_real V_internal_real_Type_SDM_Types_;

/* TargetManagement_types::Target_real_T */
typedef struct kcg_tag_Target_real_T_TargetMan {
  TargetType_T_TargetManagement_t targetType;
  L_internal_real_Type_SDM_Types_ distance;
  V_internal_real_Type_SDM_Types_ speed;
} Target_real_T_TargetManagement_;

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef Target_real_T_TargetManagement_ Target_list_MRSP_real_T_TargetM[200];

/* TargetManagement_types::EOA_real_T */
typedef struct kcg_tag_EOA_real_T_TargetManage {
  L_internal_real_Type_SDM_Types_ Location;
  V_internal_real_Type_SDM_Types_ TargetSpeed;
} EOA_real_T_TargetManagement_typ;

/* CalcBrakingCurves_types::ASafeSpeedDefinition_T */
typedef V_internal_real_Type_SDM_Types_ ASafeSpeedDefinition_T_CalcBrak[14];

/* TargetLimits_Pkg::bec_t */
typedef struct kcg_tag_bec_t_TargetLimits_Pkg {
  V_internal_real_Type_SDM_Types_ v;
  L_internal_real_Type_SDM_Types_ d;
} bec_t_TargetLimits_Pkg;

/* SDM_Types_Pkg::A_internal_real_Type */
typedef kcg_real A_internal_real_Type_SDM_Types_;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct kcg_tag_ParabolaArc_T_CalcBraki {
  L_internal_real_Type_SDM_Types_ distance;
  V_internal_real_Type_SDM_Types_ speed;
  A_internal_real_Type_SDM_Types_ acceleration;
} ParabolaArc_T_CalcBrakingCurves;

/* SDM_Types_Pkg::T_internal_real_Type */
typedef kcg_real T_internal_real_Type_SDM_Types_;

/* SDMModelPkg::t_BrakeVt_t */
typedef T_internal_real_Type_SDM_Types_ t_BrakeVt_t_SDMModelPkg[2];

/* SDMModelPkg::t_Brake_t */
typedef struct kcg_tag_t_Brake_t_SDMModelPkg {
  t_BrakeVt_t_SDMModelPkg emergency;
  t_BrakeVt_t_SDMModelPkg service;
} t_Brake_t_SDMModelPkg;

/* SDM_GradientAcceleration_types::Gradient_real_t */
typedef kcg_real Gradient_real_t_SDM_GradientAcc;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct kcg_tag_Isolation_Status_T_TIU_ {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_ isolation_status;
} Isolation_Status_T_TIU_Types_Pk;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct kcg_tag_Brake_command_T_TIU_Typ {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Ty m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Ty m_emergencybrake_cm;
} Brake_command_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct kcg_tag_Brake_inhibition_comman {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_T m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_T m_magneticshoebrake_cm;
} Brake_inhibition_command_T_TIU_;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct kcg_tag_Type_I_train_commands_T {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Type m_pantograph_cm;
  M_airtightness_command_T_TIU_Ty m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU m_traction_cutoff_cm;
} Type_I_train_commands_T_TIU_Typ;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct kcg_tag_TIU_commandStatus_T_TIU {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} TIU_commandStatus_T_TIU_Types_P;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct kcg_tag_TIU_trainStatus_T_TIU_T {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} TIU_trainStatus_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct kcg_tag_Mode_control_and_train_ {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_ m_sleeping_st;
  M_passiveshunting_signal_status m_passiveshunting_st;
  M_nonleading_signal_status_T_TI m_nonleading_st;
  M_cab_signal_status_T_TIU_Types m_cab_st;
  M_directioncontroller_signal_st m_directioncontroller_st;
  M_trainintegrity_signal_status_ m_trainintegrity_st;
  M_traction_signal_status_T_TIU_ m_traction_st;
} Mode_control_and_train_status_T;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct kcg_tag_Brake_status_T_TIU_Type {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} Brake_status_T_TIU_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct kcg_tag_T_Mode_Level_Level_And_ {
  kcg_bool compatibleModeAndLevel;
  M_LEVEL level;
  kcg_bool newLevel;
  M_MODE Mode;
  kcg_bool newMode;
} T_Mode_Level_Level_And_Mode_Typ;

/* Level_And_Mode_Types_Pkg::T_AcknoledgementRequest */
typedef struct kcg_tag_T_AcknoledgementRequest {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
} T_AcknoledgementRequest_Level_A;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_MASSPGradient_Available */
typedef struct kcg_tag_T_Data_From_Track_MASSP {
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} T_Data_From_Track_MASSPGradient;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct kcg_tag_T_Data_From_Speed_Super {
  kcg_bool Estim_front_End_overpass_SR_Dis;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} T_Data_From_Speed_Supervision_L;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct kcg_tag_T_Data_To_DMI_Level_And {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool SH_Refused_By_RBC;
} T_Data_To_DMI_Level_And_Mode_Ty;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct kcg_tag_T_Data_To_BG_Management {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
  kcg_bool Connection_to_RBC_req;
  kcg_bool Position_Repport_Needed;
} T_Data_To_BG_Management_Level_A;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct kcg_tag_T_Data_From_DMI_Level_A {
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
} T_Data_From_DMI_Level_And_Mode_;

/* Level_And_Mode_Types_Pkg::T_Data_From_STM */
typedef struct kcg_tag_T_Data_From_STM_Level_A {
  kcg_bool Interface_To_National_System;
  kcg_bool National_trip_Order;
} T_Data_From_STM_Level_And_Mode_;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct kcg_tag_T_ERTMS_capabilities_Le {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} T_ERTMS_capabilities_Level_And_;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct kcg_tag_T_Data_From_Track_Mess_ {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
} T_Data_From_Track_Mess_Level_An;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct kcg_tag_dmiOutputs_T_manage_DMI {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} dmiOutputs_T_manage_DMI_Output_;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct kcg_tag_DMI_Available_Menu_T_DM {
  kcg_bool Menu_button_start_of_mission;
  kcg_bool Menu_button_shunting;
  kcg_bool Menu_button_shunting_exit;
  kcg_bool Menu_button_non_leading;
  kcg_bool Menu_button_exit_non_leading;
  kcg_bool Menu_button_maintain_shunting;
  kcg_bool Menu_button_driver_ID;
  kcg_bool Menu_button_train_running_numbe;
  kcg_bool Menu_button_ETCS_level;
  kcg_bool Menu_button_train_data_modifica;
  kcg_bool Menu_button_train_data_view;
  kcg_bool Menu_button_staff_responsible_d;
  kcg_bool Menu_button_language_selection;
  kcg_bool Menu_button_override_EOA;
  kcg_bool Menu_button_override_route_suit;
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
} DMI_Available_Menu_T_DMI_Types_;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct kcg_tag_DMI_DriverAck_T_DMI_Typ {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} DMI_DriverAck_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct kcg_tag_DMI_DriverRequest_T_DMI {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} DMI_DriverRequest_T_DMI_Types_P;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct kcg_tag_DMI_To_Modes_T_DMI_Type {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_P DriverRequest;
  kcg_bool LevelAck;
} DMI_To_Modes_T_DMI_Types_Pkg;

/* RCM_Session_Types_Pkg::obuEventsAndPhases_T */
typedef struct kcg_tag_obuEventsAndPhases_T_RC {
  kcg_bool atPowerUp;
  kcg_bool atPowerDown;
  kcg_bool atStartOfMission;
  kcg_bool modeChangeHasToBeReportedToRBC;
  kcg_bool driverHasManuallyChangedLevel_t;
  kcg_bool trainFrontPassesStartOfAnnounce;
  kcg_bool trainFrontReachesEndOfAnnounced;
  kcg_bool trainFrontInsideInAnAnnouncedRa;
  kcg_bool trainFrontPassesALevelTransitio;
  kcg_bool trainFrontPassesA_RBC_RBC_borde;
  kcg_bool startOfMissionProcedureComplete;
  kcg_bool isPartOfAnOngoingStartOfMission;
  kcg_bool startOfMissionProcedureIsGoingO;
  kcg_bool endOfMissionIsExecuted;
  kcg_bool triggerDecisionThatNoRadioNetwo;
  kcg_bool errorConditionRequiringTerminat;
  kcg_bool trainIsRejectedByRBC_duringStar;
  kcg_bool driverClosesTheDeskduringStartO;
  kcg_bool trainExitedFromAnRBCArea;
  kcg_bool isInCommunicationSessionWithAnR;
  kcg_bool level_1_isLeft;
} obuEventsAndPhases_T_RCM_Sessio;

/* RCM_Session_Types_Pkg::safeRadioConnectionIndication_T */
typedef struct kcg_tag_safeRadioConnectionIndi {
  kcg_bool valid;
  safeRadioConnnectionIndicator_T indicator;
} safeRadioConnectionIndication_T;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct kcg_tag_PT4_ErrorReporting_T_Pa {
  kcg_bool valid;
  M_ERROR m_error;
} PT4_ErrorReporting_T_Packet_Tra;

/* TrackAtlasTypes::FromTIU_t */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct kcg_tag_RadioMetadata_T_Common_ {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} RadioMetadata_T_Common_Types_Pk;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct kcg_tag_nvkrint_T_Packet_Types_ {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} nvkrint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkrintArray_T */
typedef nvkrint_T_Packet_Types_Pkg nvkrintArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct kcg_tag_P137_StopIfInStaffRespo {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} P137_StopIfInStaffResponsible_T;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct kcg_tag_TSM_revokeCond_T_SDM_Co {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} TSM_revokeCond_T_SDM_Commands_P;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct kcg_tag_TSM_triggerCond_T_SDM_C {
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
} TSM_triggerCond_T_SDM_Commands_;

/* SDM_Commands_Pkg::MyArray */
typedef kcg_bool MyArray_SDM_Commands_Pkg[14];

/* SDM_Commands_Pkg::EB_command_T */
typedef kcg_bool EB_command_T_SDM_Commands_Pkg;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct kcg_tag_TrainLocations_real_T_S {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_ d_est_frontendPos;
  L_internal_real_Type_SDM_Types_ d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_ d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_ d_LRBG;
  L_internal_real_Type_SDM_Types_ d_accLRBG;
} TrainLocations_real_T_SDM_Types;

/* TargetManagement_types::TargetCollection_T */
typedef struct kcg_tag_TargetCollection_T_Targ {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetM MRSP_targetList;
  Target_real_T_TargetManagement_ EOA_target;
  Target_real_T_TargetManagement_ SvL_LoA_target;
} TargetCollection_T_TargetManage;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct kcg_tag_MRSP_internal_section_T {
  L_internal_real_Type_SDM_Types_ Loc_Abs;
  V_internal_real_Type_SDM_Types_ MRS;
  kcg_bool valid;
} MRSP_internal_section_T_TargetM;

/* TargetManagement_types::MRSP_internal_T */
typedef MRSP_internal_section_T_TargetM MRSP_internal_T_TargetManagemen[200];

/* TargetManagement_types::MA_section_real_T */
typedef struct kcg_tag_MA_section_real_T_Targe {
  kcg_bool valid;
  V_internal_real_Type_SDM_Types_ v_main;
  EOA_real_T_TargetManagement_typ EOA;
  kcg_bool DP_valid;
  L_internal_real_Type_SDM_Types_ DangerPoint;
  kcg_bool OL_valid;
  L_internal_real_Type_SDM_Types_ Overlap;
  kcg_bool q_calculate_release;
  V_internal_real_Type_SDM_Types_ ReleaseSpeed;
  MA_Level_t_TrackAtlasTypes level;
} MA_section_real_T_TargetManagem;

/* SDM_GradientAcceleration_types::Gradient_section_real_t */
typedef struct kcg_tag_Gradient_section_real_t {
  L_internal_real_Type_SDM_Types_ location;
  Gradient_real_t_SDM_GradientAcc gradient;
  kcg_bool valid;
} Gradient_section_real_t_SDM_Gra;

/* SDM_GradientAcceleration_types::GradientProfile_real_t */
typedef Gradient_section_real_t_SDM_Gra GradientProfile_real_t_SDM_Grad[50];

/* SDM_GradientAcceleration_types::GradientProfile_real_compensated_t */
typedef Gradient_section_real_t_SDM_Gra GradientProfile_real_compensate[100];

/* SDM_GradientAcceleration_types::A_gradient_element_t */
typedef struct kcg_tag_A_gradient_element_t_SD {
  L_internal_real_Type_SDM_Types_ position;
  A_internal_real_Type_SDM_Types_ gradient_acceleration;
  kcg_bool valid;
} A_gradient_element_t_SDM_Gradie;

/* SDM_GradientAcceleration_types::A_gradient_t */
typedef A_gradient_element_t_SDM_Gradie A_gradient_t_SDM_GradientAccele[100];

/* CalcBrakingCurves_types::ParabolaCurveValid_T */
typedef kcg_bool ParabolaCurveValid_T_CalcBrakin[114];

/* TargetLimits_Pkg::T_trac_t */
typedef struct kcg_tag_T_trac_t_TargetLimits_P {
  T_internal_real_Type_SDM_Types_ Traction;
  T_internal_real_Type_SDM_Types_ berem;
  T_internal_real_Type_SDM_Types_ bs;
  T_internal_real_Type_SDM_Types_ bs1;
  T_internal_real_Type_SDM_Types_ bs2;
  kcg_bool inhComp;
  T_internal_real_Type_SDM_Types_ indication;
} T_trac_t_TargetLimits_Pkg;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct kcg_tag_P027V1_OBU_body_enum_T_ {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
} P027V1_OBU_body_enum_T_TM_basel;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct kcg_tag_ErrorMessage_T_ProvideP {
  kcg_bool present;
  M_ERROR errorType;
} ErrorMessage_T_ProvidePositionR;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct kcg_tag_ModeLevel2PositionRepor {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} ModeLevel2PositionReport_T_Prov;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct kcg_tag_LocationBasedEvents_T_P {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} LocationBasedEvents_T_ProvidePo;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct kcg_tag_RBC_Communication_T_Pro {
  kcg_bool newSessionEstablished;
} RBC_Communication_T_ProvidePosi;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct kcg_tag_trainData_Trigger_T_tra {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} trainData_Trigger_T_trainData_T;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct kcg_tag_trainData_Events_T_trai {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} trainData_Events_T_trainData_Ty;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct kcg_tag_mobileHWStatus_Type_MoR {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_M connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} mobileHWStatus_Type_MoRC_Pck;

/* RCM_MsgTypes_Pkg::msgToTrackTriggers_T */
typedef struct kcg_tag_msgToTrackTriggers_T_RC {
  kcg_bool m155_initiationOfACommunication;
  kcg_bool m156_terminationOfACommunicatio;
  kcg_bool m159_sessionEstablished;
  kcg_bool m154_noCompatibleVersionSupport;
} msgToTrackTriggers_T_RCM_MsgTyp;

/* DMI_Types_Pkg::DMI_TEXT */
typedef kcg_char DMI_TEXT_DMI_Types_Pkg[255];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef kcg_char driverIdentifier_T_DMI_Messages[9];

/* L_TEXT */
typedef kcg_int L_TEXT;

/* NID_C */
typedef kcg_int NID_C;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct kcg_tag_nationValuesForDMI_T_DM {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} nationValuesForDMI_T_DMI_Types_;

/* NID_MN */
typedef kcg_int NID_MN;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct kcg_tag_RadioManagement_T_API_R {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommuni cmd;
  NID_MN networkID;
} RadioManagement_T_API_RadioComm;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct kcg_tag_P45_RadioNetworkRegistr {
  kcg_bool valid;
  Q_DIR q_dir;
  NID_MN nid_mn;
} P45_RadioNetworkRegistration_T_;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct kcg_tag_radioNetWorkIDs_T_MoRC_ {
  P45_RadioNetworkRegistration_T_ defaultID;
  P45_RadioNetworkRegistration_T_ memorizedID;
  P45_RadioNetworkRegistration_T_ ID_fromDriver;
} radioNetWorkIDs_T_MoRC_Pck;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* RCM_Session_Types_Pkg::sessionStatus_T */
typedef struct kcg_tag_sessionStatus_T_RCM_Ses {
  kcg_bool valid;
  sessionPhase_T_RCM_Session_Type phase;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
} sessionStatus_T_RCM_Session_Typ;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct kcg_tag_P42_SessionManagement_T {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} P42_SessionManagement_T_Packet_;

/* NID_BG */
typedef kcg_int NID_BG;

/* Packet_Types_Pkg::P63_BaliseInSRAuthority_T */
typedef struct kcg_tag_P63_BaliseInSRAuthority {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} P63_BaliseInSRAuthority_T_Packe;

/* Packet_Types_Pkg::P63_ListofBalisesinSRAuthority_T */
typedef P63_BaliseInSRAuthority_T_Packe P63_ListofBalisesinSRAuthority_[7];

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

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct kcg_tag_TrainToTrackStatus_T_BG {
  NID_NTC nid_ntc;
  Q_LENGTH q_length;
} TrainToTrackStatus_T_BG_Types_P;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct kcg_tag_P46_ConditionalLevelTra {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} P46_ConditionalLevelTransitionO;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef P46_ConditionalLevelTransitionO _7_P46_ConditionalLevelTransiti[7];

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
typedef struct kcg_tag_DMI_trackConditionEleme {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} DMI_trackConditionElement_T_DMI;

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef DMI_trackConditionElement_T_DMI DMI_trackConditionArray_T_DMI_T[32];

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct kcg_tag_PT5_TrainRunningNumber_ {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} PT5_TrainRunningNumber_Packet_T;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* M_POSITION */
typedef kcg_int M_POSITION;

/* DMI_Track_Description_int_array_T */
typedef kcg_int _50_DMI_Track_Description_int_a[325];

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct kcg_tag_trainDataStatus_T_train {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool RBCsystemVersionOnboard;
  kcg_bool validatedbyRBC;
  kcg_bool waitingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} trainDataStatus_T_trainData_Typ;

/* NID_EM */
typedef kcg_int NID_EM;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct kcg_tag_NID_EM_Store_Item_T_TA_ {
  NID_EM nid_em;
  kcg_bool valid;
} NID_EM_Store_Item_T_TA_Emergenc;

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

/* TM_baseline2::P003_permanent_data_T */
typedef struct kcg_tag_P003_permanent_data_T_T {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} P003_permanent_data_T_TM_baseli;

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
typedef struct kcg_tag_nvkvint_T_Packet_Types_ {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} nvkvint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintArray_T */
typedef nvkvint_T_Packet_Types_Pkg nvkvintArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct kcg_tag_nvkvintset_T_Packet_Typ {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} nvkvintset_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef nvkvintset_T_Packet_Types_Pkg nvkvintsetArray_T_Packet_Types_[7];

/* N_ITER */
typedef kcg_int N_ITER;

/* TM::P046_OBU_T */
typedef struct kcg_tag_P046_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} P046_OBU_T_TM;

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

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct kcg_tag_P41_LevelTransitionOrde {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} P41_LevelTransitionOrder_T_Pack;

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef P41_LevelTransitionOrder_T_Pack P41_LevelTransistionOrders_T_Pa[7];

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
typedef struct kcg_tag_P15_Level23MovementAuth {
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
} P15_Level23MovementAuthority_T_;

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef P15_Level23MovementAuthority_T_ _5_P15_Level23MovementAuthoriti[5];

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct kcg_tag_P21_GradientProfile_T_P {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} P21_GradientProfile_T_Packet_Ty;

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef P21_GradientProfile_T_Packet_Ty P21_GradientProfiles_T_Packet_T[7];

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
typedef struct kcg_tag_P27_InternationalStatic {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} P27_InternationalStaticSpeedPro;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct kcg_tag_P027V1_section_enum_qdi {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} P027V1_section_enum_qdiff_T_TM_;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef P027V1_section_enum_qdiff_T_TM_ _3_P027V1_OBU_sectionlist_enum_[32];

/* TM_baseline2::P027V1_section_enum_T */
typedef struct kcg_tag_P027V1_section_enum_T_T {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _3_P027V1_OBU_sectionlist_enum_ SECTIONS_q_diff;
} P027V1_section_enum_T_TM_baseli;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef P027V1_section_enum_T_TM_baseli P027V1_OBU_sectionlist_enum_T_T[33];

/* TM_baseline2::P027V1_OBU_T */
typedef struct kcg_tag_P027V1_OBU_T_TM_baselin {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_T sections;
} P027V1_OBU_T_TM_baseline2;

/* V_MAIN */
typedef kcg_int V_MAIN;

/* Packet_Types_Pkg::P12_Level1MovementAuthority_T */
typedef struct kcg_tag_P12_Level1MovementAutho {
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
} P12_Level1MovementAuthority_T_P;

/* Packet_Types_Pkg::P12_Level1MovementAuthorities_T */
typedef P12_Level1MovementAuthority_T_P _6_P12_Level1MovementAuthoritie[5];

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct kcg_tag_P80_ModeProfile_T_Packe {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_MAMODE d_mamode;
  M_MAMODE m_mamode;
  V_MAMODE v_mamode;
  L_MAMODE l_mamode;
  L_ACKMAMODE l_ackmamode;
  Q_MAMODE q_mamode;
} P80_ModeProfile_T_Packet_Types_;

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef P80_ModeProfile_T_Packet_Types_ P80_ModeProfiles_T_Packet_Types[3];

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

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* D_LOC */
typedef kcg_int D_LOC;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct kcg_tag_IterPacket58_T_Packet_T {
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} IterPacket58_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::IterPacket58List_T */
typedef IterPacket58_T_Packet_Types_Pkg IterPacket58List_T_Packet_Types[2];

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct kcg_tag_P58_PositionReportParam {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  IterPacket58List_T_Packet_Types iterPacket58List;
} P58_PositionReportParameters_T_;

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

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct kcg_tag_PT9_Level23_TransitionI {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} PT9_Level23_TransitionInformati;

/* TM_TrainToTrack::P009 */
typedef struct kcg_tag_P009_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} P009_TM_TrainToTrack;

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

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* TM_radio_messages::M_146_T */
typedef struct kcg_tag_M_146_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  T_TRAIN t_train_req;
} M_146_T_TM_radio_messages;

/* TM_radio_messages::M_147_T */
typedef struct kcg_tag_M_147_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  NID_EM nid_em;
  Q_EMERGENCYSTOP q_emergencystop;
} M_147_T_TM_radio_messages;

/* TM_radio_messages::M_132_T */
typedef struct kcg_tag_M_132_T_TM_radio_messag {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON q_marqstreason;
} M_132_T_TM_radio_messages;

/* V_MAXTRAIN */
typedef kcg_int V_MAXTRAIN;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct kcg_tag_P57_MovementAuthorityRe {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} P57_MovementAuthorityRequestPar;

/* D_RBCTR */
typedef kcg_int D_RBCTR;

/* TIU_Types_Pkg::NID_ctraction_T */
typedef kcg_int NID_ctraction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct kcg_tag_M_voltage_T_TIU_Types_P {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} M_voltage_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct kcg_tag_Passenger_door_control_ {
  kcg_bool valid;
  kcg_int door_control_info;
} Passenger_door_control_info_T_T;

/* TIU_Types_Pkg::M_current_T */
typedef struct kcg_tag_M_current_T_TIU_Types_P {
  kcg_bool no_restriction;
  kcg_int restriction;
} M_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct kcg_tag_Brake_pressure_value_T_ {
  kcg_bool valid;
  kcg_int pressure;
} Brake_pressure_value_T_TIU_Type;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct kcg_tag_DMI_Identifier_T_DMI_Me {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  DMI_DMI_Identifier_T_DMI_Types_ DMI_Identifier;
  DMI_Cabin_Identifier_T_DMI_Type Cabin_Identifier;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg DMI_name;
  M_VERSION m_version;
} DMI_Identifier_T_DMI_Messages_D;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct kcg_tag_DMI_EVC_status_T_DMI_Ty {
  kcg_bool DMI_Active;
  kcg_bool DMI_Error;
  kcg_bool DMI_DriverIdValidated;
  kcg_bool DMI_LevelSelectedByDirver;
  kcg_bool DMI_TrainRunningNumberFirstVali;
  kcg_bool DMI_TrainRunningNumberValidated;
  kcg_bool DMI_TrainDataValidated;
  kcg_bool DMI_StartReceived;
  DMI_Identifier_T_DMI_Messages_D DMI_Identifier;
} DMI_EVC_status_T_DMI_Types_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct kcg_tag_DMI_Driver_Request_T_DM {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} DMI_Driver_Request_T_DMI_Messag;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct kcg_tag_DMI_Radio_Net_Data_T_DM {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
} DMI_Radio_Net_Data_T_DMI_Messag;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct kcg_tag_DMI_Train_Data_Ack_T_DM {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  kcg_bool acknowledged;
} DMI_Train_Data_Ack_T_DMI_Messag;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct kcg_tag_DMI_Menu_Request_T_DMI_ {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  DMI_Available_Menu_T_DMI_Types_ available_menu;
} DMI_Menu_Request_T_DMI_Messages;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct kcg_tag_DMI_Entry_Request_T_DMI {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  DMI_List_Entry_Request_T_DMI_Ty entry_request;
} DMI_Entry_Request_T_DMI_Message;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct kcg_tag__26_DMI_Identifier_Requ {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} _26_DMI_Identifier_Request_T_DM;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct kcg_tag_DMI_System_Version_T_DM {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  M_VERSION system_version;
} DMI_System_Version_T_DMI_Messag;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct kcg_tag_DMI_Display_Control_T_D {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_ system_clock;
} DMI_Display_Control_T_DMI_Messa;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct kcg_tag__25_DMI_EVC_Radio_Net_D {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  NID_MN nid_mn;
} _25_DMI_EVC_Radio_Net_Data_T_DM;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct kcg_tag__24_DMI_Driver_Identifi {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  driverIdentifier_T_DMI_Messages driverIdentifier;
} _24_DMI_Driver_Identifier_T_DMI;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct kcg_tag__23_DMI_Train_Running_N {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  NID_OPERATIONAL trainRunningNumber;
} _23_DMI_Train_Running_Number_T_;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct kcg_tag__22_DMI_Adhesion_Factor {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  M_ADHESION adhesionFactor;
} _22_DMI_Adhesion_Factor_Data_T_;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct kcg_tag_LocWithInAcc_T_Obu_Basi {
  L_internal_Type_Obu_BasicTypes_ nominal;
  L_internal_Type_Obu_BasicTypes_ d_min;
  L_internal_Type_Obu_BasicTypes_ d_max;
} LocWithInAcc_T_Obu_BasicTypes_P;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct kcg_tag_infoFromLinking_T_Train {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_P expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_P d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} infoFromLinking_T_TrainPosition;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct kcg_tag_trainProperties_T_Train {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_P d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_P d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_P locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_P centerDetectionAcc_DefaultValue;
} trainProperties_T_TrainPosition;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct kcg_tag_ReportedBG_T_ProvidePos {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_P location;
} ReportedBG_T_ProvidePositionRep;

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef ReportedBG_T_ProvidePositionRep ReportedBGList_T_ProvidePositio[8];

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct kcg_tag_OdometryLocations_T_Obu {
  L_internal_Type_Obu_BasicTypes_ o_nominal;
  L_internal_Type_Obu_BasicTypes_ o_min;
  L_internal_Type_Obu_BasicTypes_ o_max;
} OdometryLocations_T_Obu_BasicTy;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct kcg_tag_speedSupervisionForDMI_ {
  kcg_bool valid;
  V_internal_Type_Obu_BasicTypes_ targetSpeed;
  V_internal_Type_Obu_BasicTypes_ permittedSpeed;
  V_internal_Type_Obu_BasicTypes_ releaseSpeed;
  L_internal_Type_Obu_BasicTypes_ locationBrakeTarget;
  L_internal_Type_Obu_BasicTypes_ location_brake_curve_starting_p;
  V_internal_Type_Obu_BasicTypes_ interventionSpeed;
  M_SUPERVISION_STATUS_DMI_Types_ sup_status;
  M_SupervisionDisplay_T_DMI_Type supervisionDisplay;
  L_internal_Type_Obu_BasicTypes_ distanceIndicationPoint;
} speedSupervisionForDMI_T_DMI_Ty;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct kcg_tag_movementAuthorityForDMI {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_ location_LOA;
  V_internal_Type_Obu_BasicTypes_ v_LOA;
} movementAuthorityForDMI_T_DMI_T;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct kcg_tag__20_MovementAuthoritySe {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_ l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_ t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_ d_sectiontimerstoploc;
} _20_MovementAuthoritySection_t_;

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef _20_MovementAuthoritySection_t_ MovementAuthoritySectionlist_t_[10];

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct kcg_tag_DP_or_OL_t_TrackAtlasTy {
  L_internal_Type_Obu_BasicTypes_ d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_ v_release;
  kcg_bool calc_v_release_onboard;
} DP_or_OL_t_TrackAtlasTypes;

/* TrackAtlasTypes::Endtimer_t */
typedef struct kcg_tag_Endtimer_t_TrackAtlasTy {
  T_internal_Type_Obu_BasicTypes_ t_endtimer;
  L_internal_Type_Obu_BasicTypes_ d_endtimerstoploc;
} Endtimer_t_TrackAtlasTypes;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct kcg_tag_MovementAuthority_t_Tra {
  kcg_bool valid;
  MA_Level_t_TrackAtlasTypes Level;
  Q_DIR q_dir;
  V_internal_Type_Obu_BasicTypes_ v_main;
  V_internal_Type_Obu_BasicTypes_ v_loa;
  kcg_bool t_loa_unlimited;
  T_internal_Type_Obu_BasicTypes_ t_loa;
  N_ITER n_iter;
  MovementAuthoritySectionlist_t_ sections;
  kcg_bool q_dangerpoint;
  DP_or_OL_t_TrackAtlasTypes dangerpoint;
  kcg_bool q_overlap;
  DP_or_OL_t_TrackAtlasTypes overlap;
  kcg_bool q_endtimer;
  Endtimer_t_TrackAtlasTypes endtimer_t;
} MovementAuthority_t_TrackAtlasT;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct kcg_tag_StaticSpeedSection_t_Tr {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_ d_static_abs;
  L_internal_Type_Obu_BasicTypes_ d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_ v_static;
} StaticSpeedSection_t_TrackAtlas;

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef StaticSpeedSection_t_TrackAtlas StaticSpeedProfile_t_TrackAtlas[50];

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct kcg_tag_SDM_Locations_T_SDM_Typ {
  L_internal_Type_Obu_BasicTypes_ SBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_ EBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_ EBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_ SBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_ d_I_of_V_est;
  L_internal_Type_Obu_BasicTypes_ d_I_of_V_MRSP;
  L_internal_Type_Obu_BasicTypes_ d_P_of_V_est;
  L_internal_Type_Obu_BasicTypes_ d_W_of_V_est;
  L_internal_Type_Obu_BasicTypes_ d_FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_ d_EBI_of_V_est;
  L_internal_Type_Obu_BasicTypes_ FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_ SBI1_of_V_est;
  L_internal_Type_Obu_BasicTypes_ SBI2_of_V_est;
  L_internal_Type_Obu_BasicTypes_ d_target;
  L_internal_Type_Obu_BasicTypes_ d_eoa;
  L_internal_Type_Obu_BasicTypes_ d_svl;
  kcg_bool Preindication_EBD_location_vali;
  kcg_bool Preindication_SBD_location_vali;
  kcg_bool RSM_start_location_EBD_valid;
  kcg_bool RSM_start_location_SBD_valid;
} SDM_Locations_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct kcg_tag_trainData_internal_t_SD {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  T_internal_Type_Obu_BasicTypes_ T_traction_cut_off;
  L_internal_Type_Obu_BasicTypes_ offsetAntennaL1;
} trainData_internal_t_SDM_Types_;

/* TargetManagement_types::Target_T */
typedef struct kcg_tag_Target_T_TargetManageme {
  TargetType_T_TargetManagement_t targetType;
  L_internal_Type_Obu_BasicTypes_ distance;
  V_internal_Type_Obu_BasicTypes_ speed;
  kcg_bool valid;
} Target_T_TargetManagement_types;

/* xdebugSupport_Pkg::dataCollectionForLevelTransition_T */
typedef struct kcg_tag_dataCollectionForLevelT {
  P41_LevelTransistionOrders_T_Pa p41;
  _7_P46_ConditionalLevelTransiti p46;
  kcg_bool p12_received;
  kcg_bool p15_received;
  kcg_bool p21_received;
  kcg_bool p27_received;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_ referenceLocation;
} dataCollectionForLevelTransitio;

/* TA_MA::AccuDistanceProfileMA */
typedef struct kcg_tag_AccuDistanceProfileMA_T {
  MovementAuthoritySectionlist_t_ sections;
  L_internal_Type_Obu_BasicTypes_ d_endsection;
} AccuDistanceProfileMA_TA_MA;

/* Obu_BasicTypes_Pkg::Location_T */
typedef kcg_int Location_T_Obu_BasicTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct kcg_tag_T_LevelTansitionInfo_Le {
  M_LEVEL level;
  M_POSITION position;
  T_TransitionType_Level_And_Mode transitionType;
  kcg_bool immediateAck;
  Location_T_Obu_BasicTypes_Pkg AckLength;
} T_LevelTansitionInfo_Level_And_;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct kcg_tag_T_LevelTransition_Level {
  kcg_bool is_set;
  T_LevelTansitionInfo_Level_And_ transition;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_ referenceLocation;
} T_LevelTransition_Level_And_Mod;

/* Level_And_Mode_Types_Pkg::T_AnnouncedLevel */
typedef struct kcg_tag_T_AnnouncedLevel_Level_ {
  T_LevelTransition_Level_And_Mod LevelTransition;
  kcg_bool IsAvailableForUse;
} T_AnnouncedLevel_Level_And_Mode;

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef T_LevelTransition_Level_And_Mod T_LevelTransition_PriorityTable[7];

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Level */
typedef struct kcg_tag_T_Data_From_Track_To_Le {
  T_LevelTransition_PriorityTable level_transition_priority_table;
  T_LevelTransition_PriorityTable conditionnalTransition;
  kcg_bool receivedL2L3MA_track;
  kcg_bool receivedL1MA_track;
} T_Data_From_Track_To_Level_Leve;

/* Obu_BasicTypes_Pkg::V_odometry_Type */
typedef kcg_int V_odometry_Type_Obu_BasicTypes_;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct kcg_tag_OdometrySpeeds_T_Obu_Ba {
  V_odometry_Type_Obu_BasicTypes_ v_safeNominal;
  V_odometry_Type_Obu_BasicTypes_ v_rawNominal;
  V_odometry_Type_Obu_BasicTypes_ v_lower;
  V_odometry_Type_Obu_BasicTypes_ v_upper;
} OdometrySpeeds_T_Obu_BasicTypes;

/* SDM_Types_Pkg::Speeds_T */
typedef struct kcg_tag_Speeds_T_SDM_Types_Pkg {
  V_odometry_Type_Obu_BasicTypes_ V_est;
  V_odometry_Type_Obu_BasicTypes_ V_MRSP;
  V_odometry_Type_Obu_BasicTypes_ V_release;
  V_odometry_Type_Obu_BasicTypes_ V_target;
  V_odometry_Type_Obu_BasicTypes_ v_p_mrdt;
  V_odometry_Type_Obu_BasicTypes_ v_p_dmi;
  V_odometry_Type_Obu_BasicTypes_ v_sbi_mrdt;
  V_odometry_Type_Obu_BasicTypes_ v_FLOI_dmi;
  V_odometry_Type_Obu_BasicTypes_ dV_warning_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_ dV_warning_V_target;
  V_odometry_Type_Obu_BasicTypes_ dV_sbi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_ dV_sbi_V_target;
  V_odometry_Type_Obu_BasicTypes_ dV_ebi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_ dV_ebi_V_target;
  kcg_bool OdoStandStill;
} Speeds_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct kcg_tag_SDM_Commands_T_SDM_Type {
  kcg_bool valid;
  V_odometry_Type_Obu_BasicTypes_ estimatedSpeed;
  kcg_bool valid_v_est;
  V_odometry_Type_Obu_BasicTypes_ permittedSpeed;
  kcg_bool valid_v_permitted;
  V_odometry_Type_Obu_BasicTypes_ releaseSpeed;
  kcg_bool valid_v_release;
  V_odometry_Type_Obu_BasicTypes_ mrdtSpeed;
  kcg_bool valid_v_mrdt;
  V_odometry_Type_Obu_BasicTypes_ sbiSpeed;
  kcg_bool valid_v_sbi;
  L_internal_Type_Obu_BasicTypes_ targetDistance;
  kcg_bool valid_targetDistance;
  SupervisionStatus_T_SDM_Types_P supervisionStatus;
  SDM_Types_T_SDM_Types_Pkg sdmType;
  SupervisionStatus_T_SDM_Types_P revokedSupervisionStatus;
  SupervisionStatus_T_SDM_Types_P triggeredSupervisionStatus;
  kcg_bool revokedSB;
  kcg_bool triggeredSB;
  kcg_bool revokedEB;
  kcg_bool triggeredEB;
  kcg_bool revokedTCO;
  kcg_bool triggeredTCO;
  kcg_bool ebCmd;
} SDM_Commands_T_SDM_Types_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct kcg_tag_odometry_T_Obu_BasicTyp {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ timestamp;
  OdometryLocations_T_Obu_BasicTy odo;
  OdometrySpeeds_T_Obu_BasicTypes speed;
  A_internal_Type_Obu_BasicTypes_ acceleration;
  odoMotionState_T_Obu_BasicTypes motionState;
  odoMotionDirection_T_Obu_BasicT motionDirection;
} odometry_T_Obu_BasicTypes_Pkg;

/* BG_Types_Pkg::BG_Header_T */
typedef struct kcg_tag_BG_Header_T_BG_Types_Pk {
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
  LocWithInAcc_T_Obu_BasicTypes_P BG_centerDetectionInaccuraccura;
  Q_NVLOCACC q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssign;
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
typedef struct kcg_tag_centerOfBalisePosition_ {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_P BG_centerDetectionInaccuraccura;
} centerOfBalisePosition_T_BG_Typ;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct kcg_tag_API_TelegramHeader_T_AP {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Typ centerOfBalisePosition;
} API_TelegramHeader_T_API_Msg_Pk;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct kcg_tag_Gradient_section_t_Trac {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_ Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_ Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_ Gradient;
  L_internal_Type_Obu_BasicTypes_ L_Gradient;
} Gradient_section_t_TrackAtlasTy;

/* TrackAtlasTypes::GradientProfile_t */
typedef Gradient_section_t_TrackAtlasTy GradientProfile_t_TrackAtlasTyp[50];

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef kcg_int Speed_T_Obu_BasicTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct kcg_tag_T_Mode_Profile_Level_An {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} T_Mode_Profile_Level_And_Mode_T;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef T_Mode_Profile_Level_And_Mode_T T_Mode_Profile_Table_Level_And_[3];

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct kcg_tag_T_Reversing_Data_Level_ {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} T_Reversing_Data_Level_And_Mode;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Mode */
typedef struct kcg_tag_T_Data_From_Track_To_Mo {
  kcg_bool MA_SSP_Gradient_Available;
  T_Mode_Profile_Table_Level_And_ Mode_Profile_On_Board;
  kcg_bool Shunting_granted_By_RBC;
  kcg_bool Trip_Order_Given_By_Balise;
  kcg_bool List_Bg_Related_To_SR_Empty;
  kcg_bool Stop_If_In_shunting;
  kcg_bool Stop_If_In_SR;
  kcg_bool RBC_Ack_TR_EB_Revocked;
  kcg_bool RBC_Authorized_SR;
  T_Reversing_Data_Level_And_Mode Reversing_Data;
  kcg_bool Emergency_Stop_Message_Received;
} T_Data_From_Track_To_Mode_Level;

/* DMI_Types_Pkg::NID_STM */
typedef kcg_int NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct kcg_tag_DMI_level_T_DMI_Types_P {
  M_LEVEL level;
  NID_STM_DMI_Types_Pkg nid_stm;
} DMI_level_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_array_T */
typedef DMI_level_T_DMI_Types_Pkg DMI_level_array_T_DMI_Types_Pkg[32];

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct kcg_tag_DMI_Dynamic_T_DMI_Messa {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  V_internal_Type_Obu_BasicTypes_ v_train;
  L_internal_Type_Obu_BasicTypes_ location_front_train;
  L_internal_Type_Obu_BasicTypes_ location_brake_target;
  V_internal_Type_Obu_BasicTypes_ v_target;
  V_internal_Type_Obu_BasicTypes_ v_permitted;
  V_internal_Type_Obu_BasicTypes_ v_release;
  L_internal_Type_Obu_BasicTypes_ location_brake_curve_starting_p;
  V_internal_Type_Obu_BasicTypes_ v_intervention;
  M_MODE mode;
  DMI_level_T_DMI_Types_Pkg level;
  NID_C nid_c;
  kcg_bool nid_c_valid;
  M_SupervisionDisplay_T_DMI_Type m_warning;
  M_SUPERVISION_STATUS_DMI_Types_ sup_status;
  L_internal_Type_Obu_BasicTypes_ location_LOA;
  V_internal_Type_Obu_BasicTypes_ v_LOA;
  L_internal_Type_Obu_BasicTypes_ location_KP_Balise_Track;
  L_internal_Type_Obu_BasicTypes_ distance_KP_Balise;
  L_internal_Type_Obu_BasicTypes_ distance_to_TSA;
  connectionStatusRadioUnit_T_API radioConnectionStatus;
  L_internal_Type_Obu_BasicTypes_ distanceIndicationPoint;
} DMI_Dynamic_T_DMI_Messages_EVC_;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct kcg_tag_DMI_Level_Data_T_DMI_Me {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} DMI_Level_Data_T_DMI_Messages_B;

/* DMI_Types_Pkg::BCD */
typedef kcg_int BCD_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct kcg_tag_DMI_train_id_T_DMI_Type {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} DMI_train_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct kcg_tag_DMI_train_length_T_DMI_ {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} DMI_train_length_T_DMI_Types_Pk;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T */
typedef kcg_int DMI_TextMessage_ID_T_DMI_Types_;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct kcg_tag_DMI_TXT_MSG_status_T_DM {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_ dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_ timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} DMI_TXT_MSG_status_T_DMI_Types_;

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef DMI_TXT_MSG_status_T_DMI_Types_ DMI_TXT_MSGList_status_T_DMI_Ty[31];

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct kcg_tag_DMI_Text_Message_Ack_T_ {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  DMI_TextMessage_ID_T_DMI_Types_ textMessage_ID;
  kcg_bool acknowledged;
} DMI_Text_Message_Ack_T_DMI_Mess;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct kcg_tag_DMI_Text_Message_T_DMI_ {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  DMI_TextMessage_ID_T_DMI_Types_ textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} DMI_Text_Message_T_DMI_Messages;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct kcg_tag_DMI_trackCondition_T_DM {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_T trackCondition;
} DMI_trackCondition_T_DMI_Types_;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct kcg_tag_DMI_LevelList_T_DMI_Typ {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} DMI_LevelList_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct kcg_tag_DMI_EVC_Level_Data_T_DM {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} DMI_EVC_Level_Data_T_DMI_Messag;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct kcg_tag_ps_dataForStartOfMissio {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} ps_dataForStartOfMission_T_API_;

/* DMI_Types_Pkg::M_BRAKEPERCT */
typedef kcg_int M_BRAKEPERCT_DMI_Types_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct kcg_tag_DMI_Train_Data_T_DMI_Me {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  NC_TRAIN trainCategory;
  L_internal_Type_Obu_BasicTypes_ l_train;
  M_BRAKEPERCT_DMI_Types_Pkg m_brakeperct;
  V_internal_Type_Obu_BasicTypes_ v_maxTrain;
  M_AXLELOADCAT m_axleLoad;
  M_AIRTIGHT m_airTight;
  M_LOADINGGAUGE m_loadingGauge;
} DMI_Train_Data_T_DMI_Messages_B;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct kcg_tag_DMI_Icon_Ack_T_DMI_Mess {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  kcg_int DMI_nid_icon_identifier;
} DMI_Icon_Ack_T_DMI_Messages_DMI;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct kcg_tag_DMI_Status_T_DMI_Messag {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} DMI_Status_T_DMI_Messages_DMI_t;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct kcg_tag_DMI_to_EVC_Message_T_AP {
  kcg_bool present;
  DMI_Status_T_DMI_Messages_DMI_t status;
  DMI_Identifier_T_DMI_Messages_D identifier;
  DMI_Driver_Request_T_DMI_Messag driverRequest;
  _24_DMI_Driver_Identifier_T_DMI driverIdentifier;
  _23_DMI_Train_Running_Number_T_ trainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messag radioNetData;
  DMI_Text_Message_Ack_T_DMI_Mess textMessageAck;
  DMI_Train_Data_Ack_T_DMI_Messag trainDataAck;
  DMI_Train_Data_T_DMI_Messages_B trainData;
  _22_DMI_Adhesion_Factor_Data_T_ adhesionFactor;
  DMI_Icon_Ack_T_DMI_Messages_DMI iconAck;
  DMI_Level_Data_T_DMI_Messages_B selectedLevel;
} DMI_to_EVC_Message_T_API_DMI_Pk;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct kcg_tag_DMI_Icons_T_DMI_Message {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  Icon_control_flag_T_DMI_Types_P DMI_m_icon_control_flag;
  kcg_real DMI_m_icon_flashing_freq;
  Icon_group_T_DMI_Types_Pkg DMI_nid_icon_group;
  kcg_int DMI_nid_icon_rank;
  Area_group_T_DMI_Types_Pkg DMI_nid_area_group;
  kcg_int DMI_nid_area_rank;
  kcg_int DMI_nid_icon_identifier;
} DMI_Icons_T_DMI_Messages_EVC_to;

/* RCM_Types_Pkg::mobileRegistrationContext_T */
typedef struct kcg_tag_mobileRegistrationConte {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileHealthStatus_T_RCM_Types_ healthStatus;
  mobileRegistrationStatus_T_RCM_ status;
  NID_MN nid_mn;
} mobileRegistrationContext_T_RCM;

/* RCM_Types_Pkg::mobileConnectionContext_T */
typedef struct kcg_tag_mobileConnectionContext {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnectionStatus_T_RCM_Ty status;
  NID_RADIO nid_radio;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
  kcg_bool isInRadioHole;
} mobileConnectionContext_T_RCM_T;

/* RCM_Session_Types_Pkg::morcStatus_T */
typedef struct kcg_tag_morcStatus_T_RCM_Sessio {
  mobileRegistrationContext_T_RCM registration;
  mobileConnectionContext_T_RCM_T connection;
  sessionStatus_T_RCM_Session_Typ session;
} morcStatus_T_RCM_Session_Types_;

/* RCM_Types_Pkg::mobileConnectionCmd_T */
typedef struct kcg_tag_mobileConnectionCmd_T_R {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnetionAction_T_RCM_Typ action;
  NID_RADIO nid_radio;
} mobileConnectionCmd_T_RCM_Types;

/* RCM_Types_Pkg::mobileRegistrationCmd_T */
typedef struct kcg_tag_mobileRegistrationCmd_T {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileRegistrationAction_T_RCM_ action;
  NID_MN network_id;
} mobileRegistrationCmd_T_RCM_Typ;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct kcg_tag_positionedBG_T_TrainPos {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_P location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
  kcg_bool missed;
} positionedBG_T_TrainPosition_Ty;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct kcg_tag_trainPosition_T_TrainPo {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssign;
  LocWithInAcc_T_Obu_BasicTypes_P trainPosition;
  Location_T_Obu_BasicTypes_Pkg estimatedFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeFrontEndPostion;
  positionedBG_T_TrainPosition_Ty LRBG;
  positionedBG_T_TrainPosition_Ty prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
  Location_T_Obu_BasicTypes_Pkg estimatedRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeRearEndPosition;
} trainPosition_T_TrainPosition_T;

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef positionedBG_T_TrainPosition_Ty positionedBGs_T_TrainPosition_T[41];

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct kcg_tag_positionedBGs_w_overrun {
  positionedBGs_T_TrainPosition_T BGs;
  kcg_bool overrun;
} positionedBGs_w_overrun_T_Calcu;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct kcg_tag_positionErrors_T_TrainP {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsisten;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  positionedBG_T_TrainPosition_Ty bg;
} positionErrors_T_TrainPosition_;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct kcg_tag_T_Data_From_Localisatio {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  positionErrors_T_TrainPosition_ PositionErrors;
  trainPosition_T_TrainPosition_T Train_Position;
  Speed_T_Obu_BasicTypes_Pkg Train_Speed;
  kcg_bool Train_Standstill;
} T_Data_From_Localisation_Level_;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct kcg_tag_trainPositionInfo_T_Tra {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ timestamp;
  LocWithInAcc_T_Obu_BasicTypes_P trainPosition;
  LocWithInAcc_T_Obu_BasicTypes_P trainPositionDerivedFromLastLin;
  LocWithInAcc_T_Obu_BasicTypes_P trainPositionDerivedFromLastUnl;
  positionedBG_T_TrainPosition_Ty prevPassedLinkedBG;
  positionedBG_T_TrainPosition_Ty lastPassedLinkedBG;
  positionedBG_T_TrainPosition_Ty lastPassedUnlinkedBG;
  Speed_T_Obu_BasicTypes_Pkg speed;
  kcg_bool linkingIsUsedOnboard;
} trainPositionInfo_T_TrainPositi;

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef positionedBG_T_TrainPosition_Ty linkedBGs_asPositionedBGs_T_Tra[33];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct kcg_tag_refBGs_T_CalculateTrain {
  positionedBG_T_TrainPosition_Ty refBG;
  positionedBG_T_TrainPosition_Ty prevLinkedBG;
  positionedBG_T_TrainPosition_Ty prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_P sumOfBestDistances;
} refBGs_T_CalculateTrainPosition;

/* BG_Types_Pkg::NID_ERRORBG */
typedef kcg_int NID_ERRORBG_BG_Types_Pkg;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct kcg_tag_MSG_Errors_T_Common_Typ {
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
typedef struct kcg_tag_T_Data_From_F2_function {
  MSG_Errors_T_Common_Types_Pkg Common_Errors;
  kcg_bool Failure_Occured;
  kcg_bool Continue_Shunting_Active;
  kcg_bool Stop_Shunting_Stored;
} T_Data_From_F2_functions_Level_;

/* xdebugSupport_Pkg::probesBalises_T */
typedef struct kcg_tag_probesBalises_T_xdebugS {
  kcg_bool isChanged;
  NID_BG bg_id;
  NID_C nid_c;
  MSG_Errors_T_Common_Types_Pkg errors;
} probesBalises_T_xdebugSupport_P;

/* API_DMI_Pkg::EVC_to_DMI_Message_int_T */
typedef kcg_int EVC_to_DMI_Message_int_T_API_DM[999];

/* API_DMI_Pkg::DMI_to_EVC_Message_int_T */
typedef kcg_int DMI_to_EVC_Message_int_T_API_DM[311];

/* DATA::M_SupervisionDisplay_INT_T */
typedef kcg_int M_SupervisionDisplay_INT_T_DATA;

/* DATA::M_SUPERVISION_STATUS_INT_T */
typedef kcg_int M_SUPERVISION_STATUS_INT_T_DATA;

/* DATA::connectionStatusRadioUnit_INT_T */
typedef kcg_int connectionStatusRadioUnit_INT_T;

/* DATA::DMI_Available_Menu_INT_T */
typedef kcg_int DMI_Available_Menu_INT_T_DATA;

/* DATA::DMI_List_Entry_Request_INT_T */
typedef kcg_int DMI_List_Entry_Request_INT_T_DA;

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

/* DATA::DMI_TEXT_INT_Array_T */
typedef kcg_int DMI_TEXT_INT_Array_T_DATA[255];

/* DATA::DMI_Text_Message_int_array_T */
typedef kcg_int DMI_Text_Message_int_array_T_DA[262];

/* DATA::DMI_EVC_Level_Data_int_array_T */
typedef kcg_int DMI_EVC_Level_Data_int_array_T_[67];

/* DATA::Icon_control_flag_INT_T */
typedef kcg_int Icon_control_flag_INT_T_DATA;

/* DATA::DMI_m_icon_flashing_freq_INT_T */
typedef kcg_int DMI_m_icon_flashing_freq_INT_T_;

/* DATA::Icon_group_INT_T */
typedef kcg_int Icon_group_INT_T_DATA;

/* DATA::Area_group_INT_T */
typedef kcg_int Area_group_INT_T_DATA;

/* DATA::DMI_Driver_Identifier_int_array_T */
typedef kcg_int DMI_Driver_Identifier_int_array[11];

/* Common_Types_Pkg::RBC_Id_T */
typedef struct kcg_tag_RBC_Id_T_Common_Types_P {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} RBC_Id_T_Common_Types_Pkg;

/* RCM_MsgTypes_Pkg::p42_sessionManagement_T */
typedef struct kcg_tag_p42_sessionManagement_T {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
  RBC_Id_T_Common_Types_Pkg origin;
} p42_sessionManagement_T_RCM_Msg;

/* RCM_MsgTypes_Pkg::m38_initiationOfACommunicationSession_T */
typedef struct kcg_tag_m38_initiationOfACommun {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
} m38_initiationOfACommunicationS;

/* RCM_Session_Types_Pkg::sessionCmd_T */
typedef struct kcg_tag_sessionCmd_T_RCM_Sessio {
  kcg_bool valid;
  kcg_bool initiatedByOBU;
  kcg_bool initiatedByRBC;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  RBC_Id_T_Common_Types_Pkg origin;
  m38_initiationOfACommunicationS m38;
  p42_sessionManagement_T_RCM_Msg p42;
} sessionCmd_T_RCM_Session_Types_;

/* RCM_MsgTypes_Pkg::m32_RBC_RIU_SystemVersion_T */
typedef struct kcg_tag_m32_RBC_RIU_SystemVersi {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  kcg_bool versionSupported;
  RBC_Id_T_Common_Types_Pkg origin;
  M_VERSION m_version;
} m32_RBC_RIU_SystemVersion_T_RCM;

/* RCM_MsgTypes_Pkg::m39_AckOfTerminationOfACommunicationSession_T */
typedef struct kcg_tag_m39_AckOfTerminationOfA {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
  NID_LRBG lrbg;
} m39_AckOfTerminationOfACommunic;

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

/* BG_Types_Pkg::Telegram_T */
typedef struct kcg_tag_Telegram_T_BG_Types_Pkg {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Type packets;
} Telegram_T_BG_Types_Pkg;

/* BG_Types_Pkg::TelegramArray_T */
typedef Telegram_T_BG_Types_Pkg TelegramArray_T_BG_Types_Pkg[8];

/* BG_Types_Pkg::BG_Message_T */
typedef struct kcg_tag_BG_Message_T_BG_Types_P {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Typ centerOfBalisePosition;
} BG_Message_T_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct kcg_tag_TelegramStore_T_Receive {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Typ position;
} TelegramStore_T_Receive_TrackSi;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct kcg_tag_filterRelatedEvents_T_C {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} filterRelatedEvents_T_Common_Ty;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct kcg_tag_Radio_TrackTrain_Header {
  kcg_int radioDevice;
  T_internal_Type_Obu_BasicTypes_ receivedSystemTime;
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
} Radio_TrackTrain_Header_T_Radio;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct kcg_tag_radioManagementMessage_ {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio Radio_Common_Header;
  P42_SessionManagement_T_Packet_ p42;
  P45_RadioNetworkRegistration_T_ p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} radioManagementMessage_T_Common;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct kcg_tag_RadioMessage_T_Radio_Ty {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio header;
  RadioMetadata_T_Common_Types_Pk radioMetadata;
  CompressedPackets_T_Common_Type packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} RadioMessage_T_Radio_Types_Pkg;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct kcg_tag_TrackSide_ForCheck_T_Co {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} TrackSide_ForCheck_T_Common_Typ;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct kcg_tag_API_RadioMsgHeader_T_AP {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pk Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_RadioMsgHeader_T_API_Msg_Pk;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct kcg_tag_API_TrackSideInput_T_AP {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pk btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pk rtm_msg;
  CompressedPackets_T_Common_Type packets;
} API_TrackSideInput_T_API_Msg_Pk;

/* SDM_Types_Pkg::Percentage_T */
typedef kcg_int Percentage_T_SDM_Types_Pkg;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct kcg_tag_extractTargetsMRSPACC_T {
  Target_list_MRSP_real_T_TargetM targetList;
  kcg_int lastInsertedTargetIndex;
} extractTargetsMRSPACC_TargetMan;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct kcg_tag_TargetIteratorAkku_Targ {
  L_internal_real_Type_SDM_Types_ SBI2;
  kcg_int index;
  TargetType_T_TargetManagement_t ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_ V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_ V_ura;
  V_internal_real_Type_SDM_Types_ V_P_MRDT_ebd;
  kcg_int V_P_MRDT_index;
} TargetIteratorAkku_TargetLimits;

/* SDM_GradientAcceleration_Pkg::ACC */
typedef struct kcg_tag_ACC_SDM_GradientAcceler {
  L_internal_real_Type_SDM_Types_ frontPos;
  kcg_int frontIndex;
  L_internal_real_Type_SDM_Types_ rearPos;
  kcg_int rearIndex;
  GradientProfile_real_compensate compensatedGradientProfile;
} ACC_SDM_GradientAcceleration_Pk;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct kcg_tag_BGCollector_T_Receive_T {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Typ balisePosition;
  centerOfBalisePosition_T_BG_Typ positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} BGCollector_T_Receive_TrackSide;

/* TM::P046_sections_array_flat_T */
typedef kcg_int P046_sections_array_flat_T_TM[66];

/* TM::P005_sections_array_flat_T */
typedef kcg_int P005_sections_array_flat_T_TM[231];

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

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* Handover_Pkg::connection_ids_T */
typedef struct kcg_tag_connection_ids_T_Handov {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  NID_MN nid_mn;
} connection_ids_T_Handover_Pkg;

/* ProvidePositionReport_Pkg::SystemTime_T */
typedef kcg_int SystemTime_T_ProvidePositionRep;

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

/* TM_lib_internal::M_TrainTrackRadioOutputBuffer_t */
typedef M_TrainTrack_Message_T_TM_radio M_TrainTrackRadioOutputBuffer_t[100];

/* TM_TrainToTrack::P044_other_data */
typedef kcg_int P044_other_data_TM_TrainToTrack[1];

/* TM_TrainToTrack::P044 */
typedef struct kcg_tag_P044_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} P044_TM_TrainToTrack;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

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

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct kcg_tag_NID_EM_STORE_Acc_T_TA_E {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} NID_EM_STORE_Acc_T_TA_Emergency;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct kcg_tag_BG_counters_T_Calculate {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} BG_counters_T_CalculateTrainPos;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct kcg_tag_BG_find_T_CalculateTrai {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} BG_find_T_CalculateTrainPositio;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct kcg_tag_linkedBG_index_T_Calcul {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} linkedBG_index_T_CalculateTrain;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef linkedBG_index_T_CalculateTrain linkedBGs_indices_T_CalculateTr[41];

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

typedef kcg_bool array_bool_4[4];

typedef kcg_int array_int_4[4];

/* DATA::DMI_Status_int_array_T */
typedef array_int_4 DMI_Status_int_array_T_DATA;

/* DATA::DMI_Text_Message_Ack_int_array_T */
typedef array_int_4 DMI_Text_Message_Ack_int_array_;

/* DATA::DMI_Level_Data_int_array_T */
typedef array_int_4 DMI_Level_Data_int_array_T_DATA;

/* TM::Array04 */
typedef array_int_4 Array04_TM;

typedef kcg_int array_int_492[492];

typedef M_TrainTrack_Message_T_TM_radio array_96787[2];

typedef Target_real_T_TargetManagement_ array_96794[1];

typedef kcg_int array_int_894[894];

typedef struct kcg_tag_struct_96805 {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct_96805;

/* MA_Request::Driver2MAR_T */
typedef struct_96805 Driver2MAR_T_MA_Request;

/* TA_MA_Request::Driver2MAR_T */
typedef struct_96805 Driver2MAR_T_TA_MA_Request;

typedef struct kcg_tag_struct_96819 {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct_96819;

/* TM::P003_OBU_l_section_enum_T */
typedef struct_96819 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct_96819 P203V1_OBU_l_section_enum_T_TM_;

typedef M_TrainTrack_Message_T_TM_radio array_96846[98];

typedef kcg_bool array_bool_113[113];

typedef kcg_real array_real_113[113];

typedef kcg_int array_int_31[31];

typedef kcg_int array_int_964[964];

typedef struct kcg_tag_struct_96969 {
  M_VOLTAGE m_voltage;
  kcg_int nid_ctraction;
} struct_96969;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct_96969 sTractionIdentity_T_Packet_Trai;

/* TM_TrainToTrack::P011_voltage */
typedef struct_96969 P011_voltage_TM_TrainToTrack;

typedef kcg_int array_int_23[23];

typedef Target_real_T_TargetManagement_ array_97069[199];

typedef M_TrainTrack_Message_T_TM_radio array_97076[3];

typedef kcg_int array_int_261[261];

/* DATA::DMI_Identifier_Request_int_array_T */
typedef array_int_261 DMI_Identifier_Request_int_arra;

/* DATA::DMI_Identifier_int_array_T */
typedef array_int_261 DMI_Identifier_int_array_T_DATA;

typedef kcg_int array_int_97[97];

typedef kcg_int array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainT;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct kcg_tag_sNID_RADIO_T_Packet_Tra {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainT telephoneNumber;
} sNID_RADIO_T_Packet_TrainTypes_;

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef sNID_RADIO_T_Packet_TrainTypes_ aNID_RADIO_T_Packet_TrainTypes_[1];

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct kcg_tag_PT3_OnboardTelephoneNum {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_ aNID_RADIO;
} PT3_OnboardTelephoneNumbers_T_P;

/* RCM_Session_Types_Pkg::morc_configData_T */
typedef struct kcg_tag_morc_configData_T_RCM_S {
  P45_RadioNetworkRegistration_T_ radioNetworkID_Default;
  NID_RADIO nid_radio_shortNumberStoredOnbo;
  kcg_int noOfRetriesOfSendingTermination;
  T_internal_Type_Obu_BasicTypes_ maxWaitingTimeForAckMessageRece;
  T_internal_Type_Obu_BasicTypes_ maxWaitingTimeUntilTerminationO;
  kcg_int noOfRetriesUntilTerminationOrde;
  T_internal_Type_Obu_BasicTypes_ connectionStatusTimerInterval;
  PT3_OnboardTelephoneNumbers_T_P onboardPhoneNumbers;
  NID_ENGINE nid_engine;
  T_internal_Type_Obu_BasicTypes_ maxTimeToMaintainCommSession;
  kcg_int noOfTriesToEstablishASafeRadioC;
} morc_configData_T_RCM_Session_T;

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef M_TrainTrack_Message_T_TM_radio array_97162[99];

typedef kcg_int array_int_987[987];

typedef kcg_int array_int_7[7];

/* SDMConversionModelPkg::m_KvSteps_t */
typedef array_int_7 m_KvSteps_t_SDMConversionModelP;

/* SDMConversionModelPkg::v_KvSteps_t */
typedef array_int_7 v_KvSteps_t_SDMConversionModelP;

/* SDMConversionModelPkg::mv_Map_t */
typedef struct kcg_tag_mv_Map_t_SDMConversionM {
  m_KvSteps_t_SDMConversionModelP m;
  v_KvSteps_t_SDMConversionModelP v;
} mv_Map_t_SDMConversionModelPkg;

/* TM::Array07 */
typedef array_int_7 Array07_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef kcg_int array_int_3[3];

/* DATA::DMI_Menu_Request_int_array_T */
typedef array_int_3 DMI_Menu_Request_int_array_T_DA;

/* DATA::DMI_Entry_Request_int_array_T */
typedef array_int_3 DMI_Entry_Request_int_array_T_D;

/* DATA::DMI_System_Version_int_array_T */
typedef array_int_3 DMI_System_Version_int_array_T_;

/* DATA::DMI_Display_Control_int_array_T */
typedef array_int_3 DMI_Display_Control_int_array_T;

/* DATA::DMI_EVC_Radio_Net_Data_int_array_T */
typedef array_int_3 DMI_EVC_Radio_Net_Data_int_arra;

/* DATA::DMI_Train_Running_Number_int_array_T */
typedef array_int_3 DMI_Train_Running_Number_int_ar;

/* DATA::DMI_Adhesion_Factor_Data_int_array_T */
typedef array_int_3 DMI_Adhesion_Factor_Data_int_ar;

/* DATA::DMI_Driver_Request_int_array_T */
typedef array_int_3 DMI_Driver_Request_int_array_T_;

/* DATA::DMI_Train_Data_Ack_int_array_T */
typedef array_int_3 DMI_Train_Data_Ack_int_array_T_;

/* DATA::DMI_Icon_Ack_int_array_T */
typedef array_int_3 DMI_Icon_Ack_int_array_T_DATA;

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::P009_TrainTrack_int */
typedef array_int_3 P009_TrainTrack_int_TM_TrainToT;

typedef kcg_real array_real_3[3];

/* TargetLimits_Pkg::TractionDeltaTriple */
typedef array_real_3 TractionDeltaTriple_TargetLimit;

/* SDMConversionModelPkg::coeff_BrakeBasic_t */
typedef array_real_3 coeff_BrakeBasic_t_SDMConversio;

typedef kcg_int array_int_42[42];

typedef positionedBG_T_TrainPosition_Ty array_97349[40];

typedef struct kcg_tag_struct_97368 {
  kcg_bool valid;
  kcg_int l_section;
  Q_SECTIONTIMER q_sectiontimer;
  kcg_int t_sectiontimer;
  kcg_int d_sectiontimerstoploc;
} struct_97368;

/* TM::P015_section_enum_T */
typedef struct_97368 P015_section_enum_T_TM;

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
typedef struct_97368 P012_section_enum_T_TM;

typedef kcg_int array_int_975[975];

typedef struct kcg_tag_struct_97386 {
  kcg_bool valid;
  kcg_int Loc_Abs;
  kcg_int Loc_LRBG;
  kcg_int MRS;
} struct_97386;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct_97386 DMI_speedProfileElement_T_DMI_T;

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef DMI_speedProfileElement_T_DMI_T DMI_SpeedProfileArray_T_DMI_Typ[32];

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct kcg_tag_DMI_speedProfile_T_DMI_ {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Typ speedProfiles;
} DMI_speedProfile_T_DMI_Types_Pk;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct_97386 MRSP_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::MRSP_Profile_t */
typedef MRSP_section_t_TrackAtlasTypes MRSP_Profile_t_TrackAtlasTypes[200];

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct kcg_tag_DataForSupervision_next {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasT MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTyp GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} DataForSupervision_nextGen_t_Tr;

typedef M_TrainTrack_Message_T_TM_radio array_97397[4];

typedef struct kcg_tag_struct_97455 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_startreverse;
  kcg_int l_reversearea;
} struct_97455;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct_97455 P138_ReversingAreaInformation_T;

/* TM::P138_OBU_T */
typedef struct_97455 P138_OBU_T_TM;

typedef struct kcg_tag_struct_97464 {
  kcg_int number;
  kcg_int dig1;
  kcg_int dig2;
  kcg_int dig3;
} struct_97464;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct_97464 DMI_brakeModel_id_T_DMI_Types_P;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct_97464 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct_97464 DMI_airtightSystem_T_DMI_Types_;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct_97464 DMI_loadingGauge_T_DMI_Types_Pk;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct kcg_tag__27_DMI_EVC_Coded_Train {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  DMI_train_id_T_DMI_Types_Pkg trainID;
  DMI_train_length_T_DMI_Types_Pk trainLength;
  DMI_brakeModel_id_T_DMI_Types_P brakeModel;
  DMI_vMax_id_T_DMI_Types_Pkg vmax;
  M_AXLELOADCAT mAxleLoad;
  DMI_airtightSystem_T_DMI_Types_ airTightSystem;
  DMI_loadingGauge_T_DMI_Types_Pk mLoadingGauge;
} _27_DMI_EVC_Coded_Train_Data_T_;

typedef kcg_bool array_bool_30[30];

typedef kcg_int array_int_30[30];

typedef struct_96819 array_97512[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array_97512 P003_OBU_l_sectionlist_enum_T_T;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array_97512 P203V1_OBU_l_sectionlist_enum_T;

typedef ModeDecisionTableActionKind_Dat array_97516[17];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array_97516 ModeDecisionTableType_DataDicti[256];

typedef struct kcg_tag_struct_97530 {
  kcg_int idx;
  array_bool_4 items;
} struct_97530;

typedef kcg_int array_int_65[65];

/* DMI_trackCondition_int_array_T */
typedef array_int_65 DMI_trackCondition_int_array_T;

/* DATA::DMI_LevelList_int_array_T */
typedef array_int_65 DMI_LevelList_int_array_T_DATA;

typedef struct_96969 array_97554[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array_97554 aTractionIdentity_T_Packet_Trai;

/* TM_TrainToTrack::P011_voltage_list */
typedef array_97554 P011_voltage_list_TM_TrainToTra;

typedef kcg_real array_real_100[100];

/* CalcBrakingCurves_types::ASafeDistanceDefinition_T */
typedef array_real_100 ASafeDistanceDefinition_T_CalcB;

/* CalcBrakingCurves_types::ASafeRow_T */
typedef array_real_100 ASafeRow_T_CalcBrakingCurves_ty;

/* CalcBrakingCurves_types::ASafe_Data_T */
typedef ASafeRow_T_CalcBrakingCurves_ty ASafe_Data_T_CalcBrakingCurves_[14];

/* CalcBrakingCurves_types::ASafe_T */
typedef struct kcg_tag_ASafe_T_CalcBrakingCurv {
  ASafeDistanceDefinition_T_CalcB distance_definition;
  ASafeSpeedDefinition_T_CalcBrak speed_definition;
  ASafe_Data_T_CalcBrakingCurves_ data;
} ASafe_T_CalcBrakingCurves_types;

typedef ASafeRow_T_CalcBrakingCurves_ty array_real_100_8[8];

typedef ASafeRow_T_CalcBrakingCurves_ty array_real_100_13[13];

typedef ASafeRow_T_CalcBrakingCurves_ty array_real_100_1[1];

typedef ASafeRow_T_CalcBrakingCurves_ty array_real_100_6[6];

typedef kcg_int array_int_221[221];

typedef kcg_int array_int_627[627];

typedef kcg_int array_int_260[260];

typedef M_TrainTrack_Message_T_TM_radio array_97600[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t */
typedef array_97600 M_TrainTrackMessage_buffer_t_TM;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t */
typedef array_97600 M_TrainTrackMessageBus_t_TM_Tra;

typedef kcg_bool array_bool_256[256];

/* CheckEuroradioMessage::MetadataTruthtable_T1 */
typedef array_bool_256 MetadataTruthtable_T1_CheckEuro[46];

typedef kcg_int array_int_990[990];

typedef struct kcg_tag_struct_97648 {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct_97648;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct_97648 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct_97648 P203V1_OBU_k_m_section_enum_T_T;

typedef struct kcg_tag_struct_97663 {
  kcg_bool valid;
  Q_DIR q_dir;
} struct_97663;

/* Packet_Types_Pkg::P135_StopShuntingOnDeskOpening_T */
typedef struct_97663 P135_StopShuntingOnDeskOpening_;

/* TM::P135_OBU_T */
typedef struct_97663 P135_OBU_T_TM;

typedef kcg_int array_int_131[131];

typedef kcg_int array_int_6[6];

/* SDMConversionModelPkg::a_BrakeSteps_t */
typedef array_int_6 a_BrakeSteps_t_SDMConversionMod;

/* SDMConversionModelPkg::v_BrakeSteps_t */
typedef array_int_6 v_BrakeSteps_t_SDMConversionMod;

/* SDMConversionModelPkg::av_Map_t */
typedef struct kcg_tag_av_Map_t_SDMConversionM {
  a_BrakeSteps_t_SDMConversionMod a;
  v_BrakeSteps_t_SDMConversionMod v;
} av_Map_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::a_Brake_t */
typedef struct kcg_tag_a_Brake_t_SDMConversion {
  av_Map_t_SDMConversionModelPkg emergency;
  av_Map_t_SDMConversionModelPkg service;
} a_Brake_t_SDMConversionModelPkg;

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef V_internal_real_Type_SDM_Types_ array_real_6[6];

typedef struct kcg_tag_struct_97749 {
  kcg_int now;
  kcg_int distance;
} struct_97749;

/* TIU_Types_Pkg::D_test_traction_T */
typedef struct_97749 D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct kcg_tag_Change_traction_system_ {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} Change_traction_system_T_TIU_Ty;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct_97749 D_test_distance_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_current_T */
typedef struct_97749 D_test_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct kcg_tag_Change_of_allowed_curre {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} Change_of_allowed_current_consu;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct kcg_tag_Message_EVC_to_Train_In {
  Isolation_Status_T_TIU_Types_Pk isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_ brake_inhibition;
  Type_I_train_commands_T_TIU_Typ type_I_train_commands;
  Change_traction_system_T_TIU_Ty change_traction_system;
  Passenger_door_control_info_T_T passenger_door_control_info;
  Change_of_allowed_current_consu change_of_allowed_current_consu;
} Message_EVC_to_Train_Interface_;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct kcg_tag_TIU_Output_msg_API_TIU_ {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_ info;
} TIU_Output_msg_API_TIU_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T */
typedef struct_97749 D_test_trackcond_T_TIU_Types_Pk;

/* TIU_Types_Pkg::L_test_trackcond_T */
typedef struct_97749 L_test_trackcond_T_TIU_Types_Pk;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct kcg_tag_nothing_to_resume_profi {
  D_test_trackcond_T_TIU_Types_Pk d_test_trackcond;
  L_test_trackcond_T_TIU_Types_Pk l_test_trackcond;
  M_trackcond_T_TIU_Types_Pkg m_trackcond;
} nothing_to_resume_profile_follo;

/* TIU_Types_Pkg::D_test_trackinit_T */
typedef struct_97749 D_test_trackinit_T_TIU_Types_Pk;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct kcg_tag_Type_I_train_and_brake_ {
  kcg_bool valid;
  nothing_to_resume_profile_follo nothing_to_resume_profile_follo;
  D_test_trackinit_T_TIU_Types_Pk empty_profile_initial_state_to_;
} Type_I_train_and_brake_inhibiti;

typedef struct kcg_tag_struct_97809 {
  kcg_bool valid;
  kcg_int begin_section;
  kcg_int end_section;
  kcg_int gradient;
} struct_97809;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct_97809 DMI_gradientProfileElement_T_DM;

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef DMI_gradientProfileElement_T_DM DMI_gradientProfileArray_T_DMI_[32];

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct kcg_tag_DMI_gradientProfile_T_D {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_ gradientProfiles;
} DMI_gradientProfile_T_DMI_Types;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct kcg_tag_DMI_Track_Description_T {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_ system_clock;
  DMI_speedProfile_T_DMI_Types_Pk speedProfiles;
  DMI_gradientProfile_T_DMI_Types gradientProfiles;
  DMI_trackCondition_T_DMI_Types_ trackConditions;
} DMI_Track_Description_T_DMI_Mes;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct kcg_tag_EVC_to_DMI_Message_T_AP {
  kcg_bool present;
  DMI_Dynamic_T_DMI_Messages_EVC_ dynamic;
  DMI_Menu_Request_T_DMI_Messages menu_request;
  DMI_Entry_Request_T_DMI_Message entry_request;
  _27_DMI_EVC_Coded_Train_Data_T_ evc_coded_train_data;
  DMI_Text_Message_T_DMI_Messages textMessage;
  DMI_Track_Description_T_DMI_Mes trackDescription;
  _26_DMI_Identifier_Request_T_DM identifierRequest;
  DMI_System_Version_T_DMI_Messag systemVersion;
  DMI_Display_Control_T_DMI_Messa displayControl;
  DMI_EVC_Level_Data_T_DMI_Messag EVC_levelData;
  _25_DMI_EVC_Radio_Net_Data_T_DM EVC_radioNetData;
  _24_DMI_Driver_Identifier_T_DMI driverIdentifier;
  _23_DMI_Train_Running_Number_T_ trainRunningNumber;
  DMI_Train_Data_T_DMI_Messages_B trainData;
  _22_DMI_Adhesion_Factor_Data_T_ adhesionFactor;
  DMI_Icons_T_DMI_Messages_EVC_to iconRequest;
} EVC_to_DMI_Message_T_API_DMI_Pk;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct_97809 _21_GradientProfile_for_DMI_sec;

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef _21_GradientProfile_for_DMI_sec GradientProfile_for_DMI_t_Track[50];

/* TrackAtlasTypes::DataForDMI_t */
typedef struct kcg_tag_DataForDMI_t_TrackAtlas {
  GradientProfile_for_DMI_t_Track GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} DataForDMI_t_TrackAtlasTypes;

typedef kcg_int array_int_2[2];

/* DATA::DMI_Radio_Net_Data_int_array_T */
typedef array_int_2 DMI_Radio_Net_Data_int_array_T_;

/* TM_TrainToTrack::P011_voltage_section_array_T */
typedef array_int_2 P011_voltage_section_array_T_TM;

/* TM_TrainToTrack::P011_voltage_sectionlist_array_T */
typedef P011_voltage_section_array_T_TM P011_voltage_sectionlist_array_[4];

typedef array_int_6 array_int_6_221[221];

typedef kcg_int array_int_978[978];

typedef struct kcg_tag_struct_97872 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
} struct_97872;

/* TM_radio_messages::M_136_T */
typedef struct_97872 M_136_T_TM_radio_messages;

/* TM_radio_messages::M_129_T */
typedef struct_97872 M_129_T_TM_radio_messages;

/* TM_radio_messages::M_154_T */
typedef struct_97872 M_154_T_TM_radio_messages;

/* TM_radio_messages::M_159_T */
typedef struct_97872 M_159_T_TM_radio_messages;

/* TM_radio_messages::M_156_T */
typedef struct_97872 M_156_T_TM_radio_messages;

/* TM_radio_messages::M_155_T */
typedef struct_97872 M_155_T_TM_radio_messages;

typedef struct kcg_tag_struct_97900 {
  kcg_bool valid;
  kcg_int nid_c;
} struct_97900;

/* Packet_Types_Pkg::nidC_T */
typedef struct_97900 nidC_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nidCArray_T */
typedef nidC_T_Packet_Types_Pkg nidCArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct kcg_tag_P3_NationalValues_T_Pac {
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
  nvkvintsetArray_T_Packet_Types_ nvkvintsetArray;
  nvkrintArray_T_Packet_Types_Pkg nvkrintArray;
  M_NVKTINT m_nvktint;
} P3_NationalValues_T_Packet_Type;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct_97900 P003_OBU_nid_c_section_enum_T_T;

typedef P003_OBU_nid_c_section_enum_T_T array_97187[1];

/* TM_baseline2::P003V1_section_enum_T */
typedef struct_97900 P003V1_section_enum_T_TM_baseli;

typedef struct_97900 array_96889[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array_96889 _4_P003_OBU_nid_c_sectionlist_e;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array_96889 P003V1_sectionlist_enum_T_TM_ba;

/* TM_baseline2::P003V1_OBU_T */
typedef struct kcg_tag_P003V1_OBU_T_TM_baselin {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  N_ITER n_iter;
  P003V1_sectionlist_enum_T_TM_ba SECTIONS;
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

typedef struct_97900 array_97140[31];

typedef struct_97648 array_97910[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array_97910 P003_OBU_k_m_sectionlist_enum_T;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array_97910 _2_P203V1_OBU_k_m_sectionlist_e;

typedef struct kcg_tag_struct_97938 {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct_97938;

/* TM::P003_OBU_n_section_enum_T */
typedef struct_97938 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct_97938 P203V1_OBU_n_section_enum_T_TM_;

typedef struct_97938 array_97906[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array_97906 P003_OBU_n_sectionlist_enum_T_T;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array_97906 P203V1_OBU_n_sectionlist_enum_T;

typedef kcg_int array_int_33[33];

typedef kcg_int array_int_888[888];

typedef NID_EM_Store_Item_T_TA_Emergenc array_98011[8];

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct kcg_tag_NID_EM_Store_T_TA_Emerg {
  kcg_int nfree;
  array_98011 items;
} NID_EM_Store_T_TA_EmergencyStop;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::P011_TrainTrack_int */
typedef array_int_25 P011_TrainTrack_int_TM_TrainToT;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdif;

typedef M_TrainTrack_Message_T_TM_radio array_98073[95];

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToT;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToT;

typedef kcg_int array_int_302[302];

typedef kcg_int array_int_13[13];

/* SDMConversionModelPkg::a_MergedSteps_t */
typedef array_int_13 a_MergedSteps_t_SDMConversionMo;

/* SDMConversionModelPkg::v_MergedSteps_t */
typedef array_int_13 v_MergedSteps_t_SDMConversionMo;

/* SDMConversionModelPkg::av_MergedMap_t */
typedef struct kcg_tag_av_MergedMap_t_SDMConve {
  a_MergedSteps_t_SDMConversionMo a;
  v_MergedSteps_t_SDMConversionMo v;
} av_MergedMap_t_SDMConversionMod;

typedef V_internal_real_Type_SDM_Types_ array_real_13[13];

typedef LevelDecisionTableActionKind_Da array_98127[5];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array_98127 LevelDecisionTableType_DataDict[256];

typedef struct kcg_tag_struct_98165 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_reverse;
  kcg_int v_reverse;
} struct_98165;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct_98165 P139_ReversingSupervisionInform;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct kcg_tag_T_Data_From_Track_Packe {
  _6_P12_Level1MovementAuthoritie P_12;
  P135_StopShuntingOnDeskOpening_ P_135;
  P137_StopIfInStaffResponsible_T P_137;
  P138_ReversingAreaInformation_T P_138;
  P139_ReversingSupervisionInform P_139;
  _5_P15_Level23MovementAuthoriti P_15;
  P21_GradientProfiles_T_Packet_T P_21;
  P27_InternationalStaticSpeedPro P_27;
  P41_LevelTransistionOrders_T_Pa P_41;
  _7_P46_ConditionalLevelTransiti P_46;
  P63_ListofBalisesinSRAuthority_ P_63;
  P80_ModeProfiles_T_Packet_Types P_80;
  NID_LRBG LRBG;
  Location_T_Obu_BasicTypes_Pkg referenceLocation;
} T_Data_From_Track_Packet_Level_;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct kcg_tag_DataForModeAndLevel_t_T {
  T_Data_From_Track_Packet_Level_ train_packets;
  T_Data_From_Track_Mess_Level_An train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} DataForModeAndLevel_t_TrackAtla;

/* TM::P139_OBU_T */
typedef struct_98165 P139_OBU_T_TM;

typedef kcg_int array_int_9[9];

/* DATA::DMI_EVC_Coded_Train_Data_int_array_T */
typedef array_int_9 DMI_EVC_Coded_Train_Data_int_ar;

/* DATA::DMI_Train_Data_int_array_T */
typedef array_int_9 DMI_Train_Data_int_array_T_DATA;

/* DATA::DMI_Icons_int_array_T */
typedef array_int_9 DMI_Icons_int_array_T_DATA;

/* DATA::DriverIdentifier_INT_T */
typedef array_int_9 DriverIdentifier_INT_T_DATA;

/* TM::Array09 */
typedef array_int_9 Array09_TM;

typedef kcg_int array_int_48[48];

typedef positionedBG_T_TrainPosition_Ty array_98206[1];

typedef kcg_int array_int_5[5];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_5 aNID_NTC_T_Packet_TrainTypes_Pk;

/* TIU_Types_Pkg::trainData_T */
typedef struct kcg_tag_trainData_T_TIU_Types_P {
  kcg_bool valid;
  kcg_bool acknowledgedByDriver;
  NC_TRAIN trainCategory;
  NC_CDTRAIN cantDeficientcy;
  L_internal_Type_Obu_BasicTypes_ trainLength;
  kcg_int brakePerctage;
  V_internal_Type_Obu_BasicTypes_ maxTrainSpeed;
  M_LOADINGGAUGE loadingGauge;
  M_AXLELOADCAT axleLoadCategory;
  M_AIRTIGHT airtightSystem;
  kcg_int axleNumber;
  kcg_int numberNationalSystems;
  aNID_NTC_T_Packet_TrainTypes_Pk nationSystems;
  kcg_int numberTractionSystems;
  aTractionIdentity_T_Packet_Trai tractionSystem;
} trainData_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct kcg_tag_Message_Train_Interface {
  Mode_control_and_train_status_T train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Type brake_pressure;
  M_train_data_entry_type_T_TIU_T train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibiti type_I_train_and_brake_inhibiti;
} Message_Train_Interface_to_EVC_;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct kcg_tag_TIU_Input_msg_API_TIU_P {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_ info;
} TIU_Input_msg_API_TIU_Pkg;

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

/* TM::Array05 */
typedef array_int_5 Array05_TM;

/* TM_TrainToTrack::P011_ntc_list */
typedef array_int_5 P011_ntc_list_TM_TrainToTrack;

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

typedef kcg_bool array_bool_1[1];

typedef kcg_real array_real_1[1];

typedef kcg_int array_int_40[40];

typedef M_TrainTrack_Message_T_TM_radio array_98282[96];

typedef ErrorMessage_T_ProvidePositionR array_98286[9];

typedef kcg_int array_int_891[891];

typedef kcg_real array_real_114[114];

/* CalcBrakingCurves_types::ParabolaCurveDistances_T */
typedef array_real_114 ParabolaCurveDistances_T_CalcBr;

/* CalcBrakingCurves_types::ParabolaCurveSpeeds_T */
typedef array_real_114 ParabolaCurveSpeeds_T_CalcBraki;

/* CalcBrakingCurves_types::ParabolaCurveAccelerations_T */
typedef array_real_114 ParabolaCurveAccelerations_T_Ca;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct kcg_tag_ParabolaCurve_T_CalcBra {
  ParabolaCurveDistances_T_CalcBr distances;
  ParabolaCurveSpeeds_T_CalcBraki speeds;
  ParabolaCurveAccelerations_T_Ca accelerations;
  ParabolaCurveValid_T_CalcBrakin valid;
} ParabolaCurve_T_CalcBrakingCurv;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct kcg_tag_BCAccumulator_type_Calc {
  L_internal_real_Type_SDM_Types_ distance;
  V_internal_real_Type_SDM_Types_ speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurv BC;
} BCAccumulator_type_CalcBrakingC;

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef ParabolaCurve_T_CalcBrakingCurv ParabolaCurve_list_MRSP_T_CalcB[200];

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct kcg_tag_CurveCollection_T_CalcB {
  ParabolaCurve_list_MRSP_T_CalcB MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurv EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurv SvL_LoA_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurv GUI_curve;
  kcg_bool GUI_curve_enabled;
} CurveCollection_T_CalcBrakingCu;

typedef kcg_int array_int_32[32];

/* SDMConversionModelPkg::LKrIntLookUp_t */
typedef array_int_32 LKrIntLookUp_t_SDMConversionMod;

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_28[28];

typedef struct kcg_tag_struct_99510 {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array_97910 n_iter_k_m_list;
} struct_99510;

/* TM::P003_OBU_k_section_enum_T */
typedef struct_99510 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct_99510 P203V1_OBU_k_section_enum_T_TM_;

typedef struct_99510 array_97133[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array_97133 P003_OBU_k_sectionlist_enum_T_T;

/* TM::P003_OBU_T */
typedef struct kcg_tag_P003_OBU_T_TM {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  NID_C nid_c;
  N_ITER n_iter_nid_c;
  _4_P003_OBU_nid_c_sectionlist_e nid_c_list;
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
  P003_OBU_n_sectionlist_enum_T_T n_iter_n_list;
  N_ITER n_iter_k;
  P003_OBU_k_sectionlist_enum_T_T n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P003_OBU_l_sectionlist_enum_T_T n_iter_l_list;
  M_NVKTINT m_nvktint;
} P003_OBU_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array_97133 P203V1_OBU_k_sectionlist_enum_T;

/* TM_baseline2::P203V1_OBU_T */
typedef struct kcg_tag_P203V1_OBU_T_TM_baselin {
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
  P203V1_OBU_n_sectionlist_enum_T n_iter_n_list;
  N_ITER n_iter_k;
  P203V1_OBU_k_sectionlist_enum_T n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P203V1_OBU_l_sectionlist_enum_T n_iter_l_list;
  M_NVKTINT m_nvktint;
} P203V1_OBU_T_TM_baseline2;

typedef struct kcg_tag_struct_99535 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_rbctr;
  kcg_int nid_c;
  kcg_int nid_rbc;
  kcg_int nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct_99535;

/* Packet_Types_Pkg::P131_RBCTransitionOrder_T */
typedef struct_99535 P131_RBCTransitionOrder_T_Packe;

/* Handover_Pkg::p131_q_rbcTransitionOrder_T */
typedef struct kcg_tag_p131_q_rbcTransitionOrd {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  NID_LRBG nid_lrbg;
  LocWithInAcc_T_Obu_BasicTypes_P location;
  kcg_bool contactLastKnownRBC;
  kcg_bool useTheShortNumberStoredOnboard;
  P131_RBCTransitionOrder_T_Packe order;
} p131_q_rbcTransitionOrder_T_Han;

/* TM::P131_OBU_T */
typedef struct_99535 P131_OBU_T_TM;

typedef struct kcg_tag_struct_99614 {
  kcg_bool present;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  kcg_int xT_TRAIN;
  kcg_int xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  kcg_int xNID_TEXTMESSAGE;
} struct_99614;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct_99614 _9_Radio_TrainTrack_Header_T_Ra;

/* TM_transitional::Radio_TrainTrack_Header_T */
typedef struct_99614 Radio_TrainTrack_Header_T_TM_tr;

typedef struct kcg_tag_struct_96876 {
  kcg_bool present;
  struct_99614 header;
  outPackets_T_Common_Types_Pkg packets;
} struct_96876;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct_96876 _8_Radio_TrainTrack_Message_T_R;

/* TM_transitional::Radio_TrainTrack_Message_T */
typedef struct_96876 Radio_TrainTrack_Message_T_TM_t;

/* RCM_MsgTypes_Pkg::msgToTrack_T */
typedef struct_96876 msgToTrack_T_RCM_MsgTypes_Pkg;

typedef struct kcg_tag_struct_99662 {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pk radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio Radio_Common_Header;
  CompressedPackets_T_Common_Type packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct_99662;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct_99662 ReceivedMessage_T_Common_Types_;

typedef ReceivedMessage_T_Common_Types_ array_97859[3];

/* RCM_MsgTypes_Pkg::msgFromTrack_T */
typedef struct_99662 msgFromTrack_T_RCM_MsgTypes_Pkg;

typedef kcg_int array_int_24[24];

/* DATA::DMI_Dynamic_int_array_T */
typedef array_int_24 DMI_Dynamic_int_array_T_DATA;

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef kcg_int array_int_961[961];

typedef kcg_int array_int_20[20];

typedef M_TrainTrack_Message_T_TM_radio array_99745[1];

typedef M_TrainTrack_Message_T_TM_radio array_99768[97];

typedef positionedBG_T_TrainPosition_Ty array_99815[8];

typedef kcg_bool array_bool_8[8];

typedef kcg_int array_int_8[8];

/* TM::Array08 */
typedef array_int_8 Array08_TM;

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t */
typedef array_int_8 P011_voltage_sections_array_fla;

/* TM_TrainToTrack::P003_TrainTrack_int */
typedef array_int_8 P003_TrainTrack_int_TM_TrainToT;

typedef V_internal_real_Type_SDM_Types_ array_real_8[8];

typedef kcg_int array_int_129[129];

/* DMI_gradientProfile_int_arrayT */
typedef array_int_129 DMI_gradientProfile_int_arrayT;

/* DATA::DMI_speedProfile_int_array_T */
typedef array_int_129 DMI_speedProfile_int_array_T_DA;

#ifndef kcg_copy_P21_GradientProfile_T_
#define kcg_copy_P21_GradientProfile_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P21_GradientProfile_T_Packet_Ty)))
#endif /* kcg_copy_P21_GradientProfile_T_ */

#ifndef kcg_copy__24_DMI_Driver_Identif
#define kcg_copy__24_DMI_Driver_Identif(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_24_DMI_Driver_Identifier_T_DMI)))
#endif /* kcg_copy__24_DMI_Driver_Identif */

#ifndef kcg_copy_DMI_Train_Data_Ack_T_D
#define kcg_copy_DMI_Train_Data_Ack_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Data_Ack_T_DMI_Messag)))
#endif /* kcg_copy_DMI_Train_Data_Ack_T_D */

#ifndef kcg_copy__25_DMI_EVC_Radio_Net_
#define kcg_copy__25_DMI_EVC_Radio_Net_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_25_DMI_EVC_Radio_Net_Data_T_DM)))
#endif /* kcg_copy__25_DMI_EVC_Radio_Net_ */

#ifndef kcg_copy_T_Data_From_Track_MASS
#define kcg_copy_T_Data_From_Track_MASS(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_MASSPGradient)))
#endif /* kcg_copy_T_Data_From_Track_MASS */

#ifndef kcg_copy_PT9_Level23_Transition
#define kcg_copy_PT9_Level23_Transition(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT9_Level23_TransitionInformati)))
#endif /* kcg_copy_PT9_Level23_Transition */

#ifndef kcg_copy_DataForSupervision_nex
#define kcg_copy_DataForSupervision_nex(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForSupervision_nextGen_t_Tr)))
#endif /* kcg_copy_DataForSupervision_nex */

#ifndef kcg_copy_P041_OBU_T_TM
#define kcg_copy_P041_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_OBU_T_TM)))
#endif /* kcg_copy_P041_OBU_T_TM */

#ifndef kcg_copy_P027V1_section_enum_T_
#define kcg_copy_P027V1_section_enum_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_enum_T_TM_baseli)))
#endif /* kcg_copy_P027V1_section_enum_T_ */

#ifndef kcg_copy_P005_OBU_T_TM
#define kcg_copy_P005_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_OBU_T_TM)))
#endif /* kcg_copy_P005_OBU_T_TM */

#ifndef kcg_copy_P027V1_section_enum_qd
#define kcg_copy_P027V1_section_enum_qd(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_enum_qdiff_T_TM_)))
#endif /* kcg_copy_P027V1_section_enum_qd */

#ifndef kcg_copy_BG_find_T_CalculateTra
#define kcg_copy_BG_find_T_CalculateTra(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_find_T_CalculateTrainPositio)))
#endif /* kcg_copy_BG_find_T_CalculateTra */

#ifndef kcg_copy_Endtimer_t_TrackAtlasT
#define kcg_copy_Endtimer_t_TrackAtlasT(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Endtimer_t_TrackAtlasTypes)))
#endif /* kcg_copy_Endtimer_t_TrackAtlasT */

#ifndef kcg_copy_A_gradient_element_t_S
#define kcg_copy_A_gradient_element_t_S(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (A_gradient_element_t_SDM_Gradie)))
#endif /* kcg_copy_A_gradient_element_t_S */

#ifndef kcg_copy_struct_96805
#define kcg_copy_struct_96805(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_96805)))
#endif /* kcg_copy_struct_96805 */

#ifndef kcg_copy_centerOfBalisePosition
#define kcg_copy_centerOfBalisePosition(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (centerOfBalisePosition_T_BG_Typ)))
#endif /* kcg_copy_centerOfBalisePosition */

#ifndef kcg_copy_struct_96819
#define kcg_copy_struct_96819(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_96819)))
#endif /* kcg_copy_struct_96819 */

#ifndef kcg_copy_DMI_Driver_Request_T_D
#define kcg_copy_DMI_Driver_Request_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Driver_Request_T_DMI_Messag)))
#endif /* kcg_copy_DMI_Driver_Request_T_D */

#ifndef kcg_copy_a_Brake_t_SDMConversio
#define kcg_copy_a_Brake_t_SDMConversio(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (a_Brake_t_SDMConversionModelPkg)))
#endif /* kcg_copy_a_Brake_t_SDMConversio */

#ifndef kcg_copy_mobileRegistrationCont
#define kcg_copy_mobileRegistrationCont(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileRegistrationContext_T_RCM)))
#endif /* kcg_copy_mobileRegistrationCont */

#ifndef kcg_copy_DMI_Menu_Request_T_DMI
#define kcg_copy_DMI_Menu_Request_T_DMI(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Menu_Request_T_DMI_Messages)))
#endif /* kcg_copy_DMI_Menu_Request_T_DMI */

#ifndef kcg_copy_morcStatus_T_RCM_Sessi
#define kcg_copy_morcStatus_T_RCM_Sessi(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (morcStatus_T_RCM_Session_Types_)))
#endif /* kcg_copy_morcStatus_T_RCM_Sessi */

#ifndef kcg_copy_m38_initiationOfACommu
#define kcg_copy_m38_initiationOfACommu(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (m38_initiationOfACommunicationS)))
#endif /* kcg_copy_m38_initiationOfACommu */

#ifndef kcg_copy_struct_96876
#define kcg_copy_struct_96876(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_96876)))
#endif /* kcg_copy_struct_96876 */

#ifndef kcg_copy_DMI_System_Version_T_D
#define kcg_copy_DMI_System_Version_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_System_Version_T_DMI_Messag)))
#endif /* kcg_copy_DMI_System_Version_T_D */

#ifndef kcg_copy_TrainLocations_real_T_
#define kcg_copy_TrainLocations_real_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainLocations_real_T_SDM_Types)))
#endif /* kcg_copy_TrainLocations_real_T_ */

#ifndef kcg_copy_M_132_T_TM_radio_messa
#define kcg_copy_M_132_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_132_T_TM_radio_messages)))
#endif /* kcg_copy_M_132_T_TM_radio_messa */

#ifndef kcg_copy__23_DMI_Train_Running_
#define kcg_copy__23_DMI_Train_Running_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_23_DMI_Train_Running_Number_T_)))
#endif /* kcg_copy__23_DMI_Train_Running_ */

#ifndef kcg_copy_mv_Map_t_SDMConversion
#define kcg_copy_mv_Map_t_SDMConversion(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mv_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_mv_Map_t_SDMConversion */

#ifndef kcg_copy_DMI_trackConditionElem
#define kcg_copy_DMI_trackConditionElem(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_trackConditionElement_T_DMI)))
#endif /* kcg_copy_DMI_trackConditionElem */

#ifndef kcg_copy_sNID_RADIO_T_Packet_Tr
#define kcg_copy_sNID_RADIO_T_Packet_Tr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sNID_RADIO_T_Packet_TrainTypes_)))
#endif /* kcg_copy_sNID_RADIO_T_Packet_Tr */

#ifndef kcg_copy_MetadataElement_T_Comm
#define kcg_copy_MetadataElement_T_Comm(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MetadataElement_T_Common_Types_)))
#endif /* kcg_copy_MetadataElement_T_Comm */

#ifndef kcg_copy_Brake_inhibition_comma
#define kcg_copy_Brake_inhibition_comma(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_inhibition_command_T_TIU_)))
#endif /* kcg_copy_Brake_inhibition_comma */

#ifndef kcg_copy_struct_96969
#define kcg_copy_struct_96969(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_96969)))
#endif /* kcg_copy_struct_96969 */

#ifndef kcg_copy_T_Data_From_Localisati
#define kcg_copy_T_Data_From_Localisati(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Localisation_Level_)))
#endif /* kcg_copy_T_Data_From_Localisati */

#ifndef kcg_copy_DMI_DriverRequest_T_DM
#define kcg_copy_DMI_DriverRequest_T_DM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_DriverRequest_T_DMI_Types_P)))
#endif /* kcg_copy_DMI_DriverRequest_T_DM */

#ifndef kcg_copy_mobileConnectionContex
#define kcg_copy_mobileConnectionContex(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileConnectionContext_T_RCM_T)))
#endif /* kcg_copy_mobileConnectionContex */

#ifndef kcg_copy__26_DMI_Identifier_Req
#define kcg_copy__26_DMI_Identifier_Req(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_26_DMI_Identifier_Request_T_DM)))
#endif /* kcg_copy__26_DMI_Identifier_Req */

#ifndef kcg_copy_trainDataStatus_T_trai
#define kcg_copy_trainDataStatus_T_trai(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainDataStatus_T_trainData_Typ)))
#endif /* kcg_copy_trainDataStatus_T_trai */

#ifndef kcg_copy_P41_LevelTransitionOrd
#define kcg_copy_P41_LevelTransitionOrd(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P41_LevelTransitionOrder_T_Pack)))
#endif /* kcg_copy_P41_LevelTransitionOrd */

#ifndef kcg_copy_T_trac_t_TargetLimits_
#define kcg_copy_T_trac_t_TargetLimits_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_trac_t_TargetLimits_Pkg)))
#endif /* kcg_copy_T_trac_t_TargetLimits_ */

#ifndef kcg_copy_P137_StopIfInStaffResp
#define kcg_copy_P137_StopIfInStaffResp(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P137_StopIfInStaffResponsible_T)))
#endif /* kcg_copy_P137_StopIfInStaffResp */

#ifndef kcg_copy_TIU_commandStatus_T_TI
#define kcg_copy_TIU_commandStatus_T_TI(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_commandStatus_T_TIU_Types_P)))
#endif /* kcg_copy_TIU_commandStatus_T_TI */

#ifndef kcg_copy_P046_section_enum_T_TM
#define kcg_copy_P046_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_section_enum_T_TM)))
#endif /* kcg_copy_P046_section_enum_T_TM */

#ifndef kcg_copy_DMI_To_Modes_T_DMI_Typ
#define kcg_copy_DMI_To_Modes_T_DMI_Typ(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_To_Modes_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_To_Modes_T_DMI_Typ */

#ifndef kcg_copy_NID_EM_Store_Item_T_TA
#define kcg_copy_NID_EM_Store_Item_T_TA(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_Store_Item_T_TA_Emergenc)))
#endif /* kcg_copy_NID_EM_Store_Item_T_TA */

#ifndef kcg_copy_positionedBGs_w_overru
#define kcg_copy_positionedBGs_w_overru(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBGs_w_overrun_T_Calcu)))
#endif /* kcg_copy_positionedBGs_w_overru */

#ifndef kcg_copy_T_Data_From_Speed_Supe
#define kcg_copy_T_Data_From_Speed_Supe(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Speed_Supervision_L)))
#endif /* kcg_copy_T_Data_From_Speed_Supe */

#ifndef kcg_copy_Target_real_T_TargetMa
#define kcg_copy_Target_real_T_TargetMa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Target_real_T_TargetManagement_)))
#endif /* kcg_copy_Target_real_T_TargetMa */

#ifndef kcg_copy_RadioManagement_T_API_
#define kcg_copy_RadioManagement_T_API_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioManagement_T_API_RadioComm)))
#endif /* kcg_copy_RadioManagement_T_API_ */

#ifndef kcg_copy_DMI_Icon_Ack_T_DMI_Mes
#define kcg_copy_DMI_Icon_Ack_T_DMI_Mes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Icon_Ack_T_DMI_Messages_DMI)))
#endif /* kcg_copy_DMI_Icon_Ack_T_DMI_Mes */

#ifndef kcg_copy_T_Data_From_Track_Mess
#define kcg_copy_T_Data_From_Track_Mess(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_Mess_Level_An)))
#endif /* kcg_copy_T_Data_From_Track_Mess */

#ifndef kcg_copy_T_Data_To_BG_Managemen
#define kcg_copy_T_Data_To_BG_Managemen(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_To_BG_Management_Level_A)))
#endif /* kcg_copy_T_Data_To_BG_Managemen */

#ifndef kcg_copy_m32_RBC_RIU_SystemVers
#define kcg_copy_m32_RBC_RIU_SystemVers(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (m32_RBC_RIU_SystemVersion_T_RCM)))
#endif /* kcg_copy_m32_RBC_RIU_SystemVers */

#ifndef kcg_copy_T_LevelTansitionInfo_L
#define kcg_copy_T_LevelTansitionInfo_L(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_LevelTansitionInfo_Level_And_)))
#endif /* kcg_copy_T_LevelTansitionInfo_L */

#ifndef kcg_copy_BG_Message_T_BG_Types_
#define kcg_copy_BG_Message_T_BG_Types_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Message_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Message_T_BG_Types_ */

#ifndef kcg_copy_Telegram_T_BG_Types_Pk
#define kcg_copy_Telegram_T_BG_Types_Pk(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Telegram_T_BG_Types_Pkg)))
#endif /* kcg_copy_Telegram_T_BG_Types_Pk */

#ifndef kcg_copy_ps_dataForStartOfMissi
#define kcg_copy_ps_dataForStartOfMissi(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ps_dataForStartOfMission_T_API_)))
#endif /* kcg_copy_ps_dataForStartOfMissi */

#ifndef kcg_copy_DMI_Radio_Net_Data_T_D
#define kcg_copy_DMI_Radio_Net_Data_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Radio_Net_Data_T_DMI_Messag)))
#endif /* kcg_copy_DMI_Radio_Net_Data_T_D */

#ifndef kcg_copy_ParabolaArc_T_CalcBrak
#define kcg_copy_ParabolaArc_T_CalcBrak(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ParabolaArc_T_CalcBrakingCurves)))
#endif /* kcg_copy_ParabolaArc_T_CalcBrak */

#ifndef kcg_copy_DMI_train_length_T_DMI
#define kcg_copy_DMI_train_length_T_DMI(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_train_length_T_DMI_Types_Pk)))
#endif /* kcg_copy_DMI_train_length_T_DMI */

#ifndef kcg_copy_TargetCollection_T_Tar
#define kcg_copy_TargetCollection_T_Tar(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TargetCollection_T_TargetManage)))
#endif /* kcg_copy_TargetCollection_T_Tar */

#ifndef kcg_copy_probesBalises_T_xdebug
#define kcg_copy_probesBalises_T_xdebug(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (probesBalises_T_xdebugSupport_P)))
#endif /* kcg_copy_probesBalises_T_xdebug */

#ifndef kcg_copy__22_DMI_Adhesion_Facto
#define kcg_copy__22_DMI_Adhesion_Facto(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_22_DMI_Adhesion_Factor_Data_T_)))
#endif /* kcg_copy__22_DMI_Adhesion_Facto */

#ifndef kcg_copy_T_Data_From_Track_To_L
#define kcg_copy_T_Data_From_Track_To_L(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_To_Level_Leve)))
#endif /* kcg_copy_T_Data_From_Track_To_L */

#ifndef kcg_copy_nationValuesForDMI_T_D
#define kcg_copy_nationValuesForDMI_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nationValuesForDMI_T_DMI_Types_)))
#endif /* kcg_copy_nationValuesForDMI_T_D */

#ifndef kcg_copy_DMI_Text_Message_Ack_T
#define kcg_copy_DMI_Text_Message_Ack_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_Ack_T_DMI_Mess)))
#endif /* kcg_copy_DMI_Text_Message_Ack_T */

#ifndef kcg_copy_Target_T_TargetManagem
#define kcg_copy_Target_T_TargetManagem(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Target_T_TargetManagement_types)))
#endif /* kcg_copy_Target_T_TargetManagem */

#ifndef kcg_copy_DMI_Status_T_DMI_Messa
#define kcg_copy_DMI_Status_T_DMI_Messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Status_T_DMI_Messages_DMI_t)))
#endif /* kcg_copy_DMI_Status_T_DMI_Messa */

#ifndef kcg_copy_T_AcknoledgementReques
#define kcg_copy_T_AcknoledgementReques(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_AcknoledgementRequest_Level_A)))
#endif /* kcg_copy_T_AcknoledgementReques */

#ifndef kcg_copy_passedBG_T_BG_Types_Pk
#define kcg_copy_passedBG_T_BG_Types_Pk(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (passedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_passedBG_T_BG_Types_Pk */

#ifndef kcg_copy_trainData_Events_T_tra
#define kcg_copy_trainData_Events_T_tra(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_Events_T_trainData_Ty)))
#endif /* kcg_copy_trainData_Events_T_tra */

#ifndef kcg_copy_struct_97368
#define kcg_copy_struct_97368(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97368)))
#endif /* kcg_copy_struct_97368 */

#ifndef kcg_copy_IterPacket58_T_Packet_
#define kcg_copy_IterPacket58_T_Packet_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (IterPacket58_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58_T_Packet_ */

#ifndef kcg_copy_struct_97386
#define kcg_copy_struct_97386(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97386)))
#endif /* kcg_copy_struct_97386 */

#ifndef kcg_copy_DP_or_OL_t_TrackAtlasT
#define kcg_copy_DP_or_OL_t_TrackAtlasT(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DP_or_OL_t_TrackAtlasTypes)))
#endif /* kcg_copy_DP_or_OL_t_TrackAtlasT */

#ifndef kcg_copy_P46_ConditionalLevelTr
#define kcg_copy_P46_ConditionalLevelTr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P46_ConditionalLevelTransitionO)))
#endif /* kcg_copy_P46_ConditionalLevelTr */

#ifndef kcg_copy_Diff_T_Packet_Types_Pk
#define kcg_copy_Diff_T_Packet_Types_Pk(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Diff_T_Packet_Types_Pkg)))
#endif /* kcg_copy_Diff_T_Packet_Types_Pk */

#ifndef kcg_copy_av_MergedMap_t_SDMConv
#define kcg_copy_av_MergedMap_t_SDMConv(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (av_MergedMap_t_SDMConversionMod)))
#endif /* kcg_copy_av_MergedMap_t_SDMConv */

#ifndef kcg_copy_CompressedPackets_T_Co
#define kcg_copy_CompressedPackets_T_Co(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedPackets_T_Common_Type)))
#endif /* kcg_copy_CompressedPackets_T_Co */

#ifndef kcg_copy_msgToTrackTriggers_T_R
#define kcg_copy_msgToTrackTriggers_T_R(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (msgToTrackTriggers_T_RCM_MsgTyp)))
#endif /* kcg_copy_msgToTrackTriggers_T_R */

#ifndef kcg_copy_Gradient_section_real_
#define kcg_copy_Gradient_section_real_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Gradient_section_real_t_SDM_Gra)))
#endif /* kcg_copy_Gradient_section_real_ */

#ifndef kcg_copy_struct_97455
#define kcg_copy_struct_97455(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97455)))
#endif /* kcg_copy_struct_97455 */

#ifndef kcg_copy_struct_97464
#define kcg_copy_struct_97464(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97464)))
#endif /* kcg_copy_struct_97464 */

#ifndef kcg_copy_connection_ids_T_Hando
#define kcg_copy_connection_ids_T_Hando(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (connection_ids_T_Handover_Pkg)))
#endif /* kcg_copy_connection_ids_T_Hando */

#ifndef kcg_copy_nothing_to_resume_prof
#define kcg_copy_nothing_to_resume_prof(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nothing_to_resume_profile_follo)))
#endif /* kcg_copy_nothing_to_resume_prof */

#ifndef kcg_copy_TrainToTrackStatus_T_B
#define kcg_copy_TrainToTrackStatus_T_B(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainToTrackStatus_T_BG_Types_P)))
#endif /* kcg_copy_TrainToTrackStatus_T_B */

#ifndef kcg_copy_linkedBG_index_T_Calcu
#define kcg_copy_linkedBG_index_T_Calcu(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (linkedBG_index_T_CalculateTrain)))
#endif /* kcg_copy_linkedBG_index_T_Calcu */

#ifndef kcg_copy_struct_97530
#define kcg_copy_struct_97530(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97530)))
#endif /* kcg_copy_struct_97530 */

#ifndef kcg_copy_CurveCollection_T_Calc
#define kcg_copy_CurveCollection_T_Calc(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CurveCollection_T_CalcBrakingCu)))
#endif /* kcg_copy_CurveCollection_T_Calc */

#ifndef kcg_copy_SSP_section_t_TA_MRSP
#define kcg_copy_SSP_section_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_section_t_TA_MRSP)))
#endif /* kcg_copy_SSP_section_t_TA_MRSP */

#ifndef kcg_copy_mobileRegistrationCmd_
#define kcg_copy_mobileRegistrationCmd_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileRegistrationCmd_T_RCM_Typ)))
#endif /* kcg_copy_mobileRegistrationCmd_ */

#ifndef kcg_copy_T_AnnouncedLevel_Level
#define kcg_copy_T_AnnouncedLevel_Level(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_AnnouncedLevel_Level_And_Mode)))
#endif /* kcg_copy_T_AnnouncedLevel_Level */

#ifndef kcg_copy_T_Data_From_STM_Level_
#define kcg_copy_T_Data_From_STM_Level_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_STM_Level_And_Mode_)))
#endif /* kcg_copy_T_Data_From_STM_Level_ */

#ifndef kcg_copy_AccuDistanceProfileMA_
#define kcg_copy_AccuDistanceProfileMA_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (AccuDistanceProfileMA_TA_MA)))
#endif /* kcg_copy_AccuDistanceProfileMA_ */

#ifndef kcg_copy_extractTargetsMRSPACC_
#define kcg_copy_extractTargetsMRSPACC_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (extractTargetsMRSPACC_TargetMan)))
#endif /* kcg_copy_extractTargetsMRSPACC_ */

#ifndef kcg_copy_P041_section_enum_T_TM
#define kcg_copy_P041_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_enum_T_TM)))
#endif /* kcg_copy_P041_section_enum_T_TM */

#ifndef kcg_copy_P57_MovementAuthorityR
#define kcg_copy_P57_MovementAuthorityR(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P57_MovementAuthorityRequestPar)))
#endif /* kcg_copy_P57_MovementAuthorityR */

#ifndef kcg_copy_struct_97648
#define kcg_copy_struct_97648(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97648)))
#endif /* kcg_copy_struct_97648 */

#ifndef kcg_copy_nvkvint_T_Packet_Types
#define kcg_copy_nvkvint_T_Packet_Types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvint_T_Packet_Types */

#ifndef kcg_copy_struct_97663
#define kcg_copy_struct_97663(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97663)))
#endif /* kcg_copy_struct_97663 */

#ifndef kcg_copy_DMI_Entry_Request_T_DM
#define kcg_copy_DMI_Entry_Request_T_DM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Entry_Request_T_DMI_Message)))
#endif /* kcg_copy_DMI_Entry_Request_T_DM */

#ifndef kcg_copy_P046_OBU_T_TM
#define kcg_copy_P046_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_OBU_T_TM)))
#endif /* kcg_copy_P046_OBU_T_TM */

#ifndef kcg_copy_P027V1_OBU_T_TM_baseli
#define kcg_copy_P027V1_OBU_T_TM_baseli(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_T_TM_baseli */

#ifndef kcg_copy_Brake_status_T_TIU_Typ
#define kcg_copy_Brake_status_T_TIU_Typ(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_status_T_TIU_Typ */

#ifndef kcg_copy_bec_t_TargetLimits_Pkg
#define kcg_copy_bec_t_TargetLimits_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (bec_t_TargetLimits_Pkg)))
#endif /* kcg_copy_bec_t_TargetLimits_Pkg */

#ifndef kcg_copy_BG_counters_T_Calculat
#define kcg_copy_BG_counters_T_Calculat(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_counters_T_CalculateTrainPos)))
#endif /* kcg_copy_BG_counters_T_Calculat */

#ifndef kcg_copy_mobileHWStatus_Type_Mo
#define kcg_copy_mobileHWStatus_Type_Mo(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileHWStatus_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileHWStatus_Type_Mo */

#ifndef kcg_copy_TIU_trainStatus_T_TIU_
#define kcg_copy_TIU_trainStatus_T_TIU_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_trainStatus_T_TIU_Types_Pkg)))
#endif /* kcg_copy_TIU_trainStatus_T_TIU_ */

#ifndef kcg_copy_DMI_level_T_DMI_Types_
#define kcg_copy_DMI_level_T_DMI_Types_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_level_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_T_DMI_Types_ */

#ifndef kcg_copy_struct_97749
#define kcg_copy_struct_97749(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97749)))
#endif /* kcg_copy_struct_97749 */

#ifndef kcg_copy_Change_traction_system
#define kcg_copy_Change_traction_system(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Change_traction_system_T_TIU_Ty)))
#endif /* kcg_copy_Change_traction_system */

#ifndef kcg_copy_Change_of_allowed_curr
#define kcg_copy_Change_of_allowed_curr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Change_of_allowed_current_consu)))
#endif /* kcg_copy_Change_of_allowed_curr */

#ifndef kcg_copy_DMI_EVC_Level_Data_T_D
#define kcg_copy_DMI_EVC_Level_Data_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Level_Data_T_DMI_Messag)))
#endif /* kcg_copy_DMI_EVC_Level_Data_T_D */

#ifndef kcg_copy_DMI_Level_Data_T_DMI_M
#define kcg_copy_DMI_Level_Data_T_DMI_M(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Level_Data_T_DMI_Messages_B)))
#endif /* kcg_copy_DMI_Level_Data_T_DMI_M */

#ifndef kcg_copy_TelegramStore_T_Receiv
#define kcg_copy_TelegramStore_T_Receiv(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramStore_T_Receive_TrackSi)))
#endif /* kcg_copy_TelegramStore_T_Receiv */

#ifndef kcg_copy_ReportedBG_T_ProvidePo
#define kcg_copy_ReportedBG_T_ProvidePo(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ReportedBG_T_ProvidePositionRep)))
#endif /* kcg_copy_ReportedBG_T_ProvidePo */

#ifndef kcg_copy_Type_I_train_and_brake
#define kcg_copy_Type_I_train_and_brake(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Type_I_train_and_brake_inhibiti)))
#endif /* kcg_copy_Type_I_train_and_brake */

#ifndef kcg_copy_radioNetWorkIDs_T_MoRC
#define kcg_copy_radioNetWorkIDs_T_MoRC(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (radioNetWorkIDs_T_MoRC_Pck)))
#endif /* kcg_copy_radioNetWorkIDs_T_MoRC */

#ifndef kcg_copy_ModeLevel2PositionRepo
#define kcg_copy_ModeLevel2PositionRepo(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ModeLevel2PositionReport_T_Prov)))
#endif /* kcg_copy_ModeLevel2PositionRepo */

#ifndef kcg_copy_struct_97809
#define kcg_copy_struct_97809(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97809)))
#endif /* kcg_copy_struct_97809 */

#ifndef kcg_copy_P005_TM_TrainToTrack
#define kcg_copy_P005_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_TM_TrainToTrack)))
#endif /* kcg_copy_P005_TM_TrainToTrack */

#ifndef kcg_copy_DMI_trackCondition_T_D
#define kcg_copy_DMI_trackCondition_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_trackCondition_T_DMI_Types_)))
#endif /* kcg_copy_DMI_trackCondition_T_D */

#ifndef kcg_copy_DMI_gradientProfile_T_
#define kcg_copy_DMI_gradientProfile_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_gradientProfile_T_DMI_Types)))
#endif /* kcg_copy_DMI_gradientProfile_T_ */

#ifndef kcg_copy_DMI_speedProfile_T_DMI
#define kcg_copy_DMI_speedProfile_T_DMI(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_speedProfile_T_DMI_Types_Pk)))
#endif /* kcg_copy_DMI_speedProfile_T_DMI */

#ifndef kcg_copy_DMI_LevelList_T_DMI_Ty
#define kcg_copy_DMI_LevelList_T_DMI_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_LevelList_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_LevelList_T_DMI_Ty */

#ifndef kcg_copy_MRSP_internal_section_
#define kcg_copy_MRSP_internal_section_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MRSP_internal_section_T_TargetM)))
#endif /* kcg_copy_MRSP_internal_section_ */

#ifndef kcg_copy_struct_97872
#define kcg_copy_struct_97872(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97872)))
#endif /* kcg_copy_struct_97872 */

#ifndef kcg_copy_P044_TM_TrainToTrack
#define kcg_copy_P044_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P044_TM_TrainToTrack)))
#endif /* kcg_copy_P044_TM_TrainToTrack */

#ifndef kcg_copy_av_Map_t_SDMConversion
#define kcg_copy_av_Map_t_SDMConversion(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (av_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_av_Map_t_SDMConversion */

#ifndef kcg_copy_struct_97900
#define kcg_copy_struct_97900(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97900)))
#endif /* kcg_copy_struct_97900 */

#ifndef kcg_copy_P003_TM_TrainToTrack
#define kcg_copy_P003_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_TM_TrainToTrack)))
#endif /* kcg_copy_P003_TM_TrainToTrack */

#ifndef kcg_copy_SSP_T_Packet_Types_Pkg
#define kcg_copy_SSP_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSP_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkvintset_T_Packet_Ty
#define kcg_copy_nvkvintset_T_Packet_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvintset_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintset_T_Packet_Ty */

#ifndef kcg_copy_struct_97938
#define kcg_copy_struct_97938(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_97938)))
#endif /* kcg_copy_struct_97938 */

#ifndef kcg_copy_t_Brake_t_SDMModelPkg
#define kcg_copy_t_Brake_t_SDMModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (t_Brake_t_SDMModelPkg)))
#endif /* kcg_copy_t_Brake_t_SDMModelPkg */

#ifndef kcg_copy_M_current_T_TIU_Types_
#define kcg_copy_M_current_T_TIU_Types_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_current_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_current_T_TIU_Types_ */

#ifndef kcg_copy_P009_TM_TrainToTrack
#define kcg_copy_P009_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P009_TM_TrainToTrack)))
#endif /* kcg_copy_P009_TM_TrainToTrack */

#ifndef kcg_copy_TIU_Output_msg_API_TIU
#define kcg_copy_TIU_Output_msg_API_TIU(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Output_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Output_msg_API_TIU */

#ifndef kcg_copy_TIU_Input_msg_API_TIU_
#define kcg_copy_TIU_Input_msg_API_TIU_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Input_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Input_msg_API_TIU_ */

#ifndef kcg_copy_PT0_PositionReport_T_P
#define kcg_copy_PT0_PositionReport_T_P(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT0_PositionReport_T_Packet_Tra)))
#endif /* kcg_copy_PT0_PositionReport_T_P */

#ifndef kcg_copy_PT1_PositionReport_2BG
#define kcg_copy_PT1_PositionReport_2BG(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT1_PositionReport_2BG_T_Packet)))
#endif /* kcg_copy_PT1_PositionReport_2BG */

#ifndef kcg_copy_Passenger_door_control
#define kcg_copy_Passenger_door_control(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Passenger_door_control_info_T_T)))
#endif /* kcg_copy_Passenger_door_control */

#ifndef kcg_copy_DMI_Display_Control_T_
#define kcg_copy_DMI_Display_Control_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Display_Control_T_DMI_Messa)))
#endif /* kcg_copy_DMI_Display_Control_T_ */

#ifndef kcg_copy_Brake_command_T_TIU_Ty
#define kcg_copy_Brake_command_T_TIU_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_command_T_TIU_Ty */

#ifndef kcg_copy_nvkrint_T_Packet_Types
#define kcg_copy_nvkrint_T_Packet_Types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkrint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrint_T_Packet_Types */

#ifndef kcg_copy_safeRadioConnectionInd
#define kcg_copy_safeRadioConnectionInd(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (safeRadioConnectionIndication_T)))
#endif /* kcg_copy_safeRadioConnectionInd */

#ifndef kcg_copy_ASafe_T_CalcBrakingCur
#define kcg_copy_ASafe_T_CalcBrakingCur(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ASafe_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafe_T_CalcBrakingCur */

#ifndef kcg_copy_P021_OBU_T_TM
#define kcg_copy_P021_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_OBU_T_TM)))
#endif /* kcg_copy_P021_OBU_T_TM */

#ifndef kcg_copy_PT5_TrainRunningNumber
#define kcg_copy_PT5_TrainRunningNumber(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT5_TrainRunningNumber_Packet_T)))
#endif /* kcg_copy_PT5_TrainRunningNumber */

#ifndef kcg_copy_M_TrainTrack_Message_T
#define kcg_copy_M_TrainTrack_Message_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_Message_T_TM_radio)))
#endif /* kcg_copy_M_TrainTrack_Message_T */

#ifndef kcg_copy_T_Reversing_Data_Level
#define kcg_copy_T_Reversing_Data_Level(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Reversing_Data_Level_And_Mode)))
#endif /* kcg_copy_T_Reversing_Data_Level */

#ifndef kcg_copy_ErrorMessage_T_Provide
#define kcg_copy_ErrorMessage_T_Provide(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ErrorMessage_T_ProvidePositionR)))
#endif /* kcg_copy_ErrorMessage_T_Provide */

#ifndef kcg_copy_P021_section_enum_T_TM
#define kcg_copy_P021_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_enum_T_TM)))
#endif /* kcg_copy_P021_section_enum_T_TM */

#ifndef kcg_copy_TSM_revokeCond_T_SDM_C
#define kcg_copy_TSM_revokeCond_T_SDM_C(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TSM_revokeCond_T_SDM_Commands_P)))
#endif /* kcg_copy_TSM_revokeCond_T_SDM_C */

#ifndef kcg_copy_ParabolaCurve_T_CalcBr
#define kcg_copy_ParabolaCurve_T_CalcBr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ParabolaCurve_T_CalcBrakingCurv)))
#endif /* kcg_copy_ParabolaCurve_T_CalcBr */

#ifndef kcg_copy_movementAuthorityForDM
#define kcg_copy_movementAuthorityForDM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (movementAuthorityForDMI_T_DMI_T)))
#endif /* kcg_copy_movementAuthorityForDM */

#ifndef kcg_copy_DataForModeAndLevel_t_
#define kcg_copy_DataForModeAndLevel_t_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForModeAndLevel_t_TrackAtla)))
#endif /* kcg_copy_DataForModeAndLevel_t_ */

#ifndef kcg_copy_M_146_T_TM_radio_messa
#define kcg_copy_M_146_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_146_T_TM_radio_messages)))
#endif /* kcg_copy_M_146_T_TM_radio_messa */

#ifndef kcg_copy_struct_98165
#define kcg_copy_struct_98165(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_98165)))
#endif /* kcg_copy_struct_98165 */

#ifndef kcg_copy__20_MovementAuthorityS
#define kcg_copy__20_MovementAuthorityS(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_20_MovementAuthoritySection_t_)))
#endif /* kcg_copy__20_MovementAuthorityS */

#ifndef kcg_copy_T_Mode_Level_Level_And
#define kcg_copy_T_Mode_Level_Level_And(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Mode_Level_Level_And_Mode_Typ)))
#endif /* kcg_copy_T_Mode_Level_Level_And */

#ifndef kcg_copy_T_Mode_Profile_Level_A
#define kcg_copy_T_Mode_Profile_Level_A(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Mode_Profile_Level_And_Mode_T)))
#endif /* kcg_copy_T_Mode_Profile_Level_A */

#ifndef kcg_copy_trainData_internal_t_S
#define kcg_copy_trainData_internal_t_S(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_internal_t_SDM_Types_)))
#endif /* kcg_copy_trainData_internal_t_S */

#ifndef kcg_copy_P058_section_enum_T_TM
#define kcg_copy_P058_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_section_enum_T_TM)))
#endif /* kcg_copy_P058_section_enum_T_TM */

#ifndef kcg_copy_EOA_real_T_TargetManag
#define kcg_copy_EOA_real_T_TargetManag(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (EOA_real_T_TargetManagement_typ)))
#endif /* kcg_copy_EOA_real_T_TargetManag */

#ifndef kcg_copy_P027V1_OBU_body_enum_T
#define kcg_copy_P027V1_OBU_body_enum_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_body_enum_T_TM_basel)))
#endif /* kcg_copy_P027V1_OBU_body_enum_T */

#ifndef kcg_copy_PT3_OnboardTelephoneNu
#define kcg_copy_PT3_OnboardTelephoneNu(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT3_OnboardTelephoneNumbers_T_P)))
#endif /* kcg_copy_PT3_OnboardTelephoneNu */

#ifndef kcg_copy_trainData_Trigger_T_tr
#define kcg_copy_trainData_Trigger_T_tr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_Trigger_T_trainData_T)))
#endif /* kcg_copy_trainData_Trigger_T_tr */

#ifndef kcg_copy_T_Data_From_F2_functio
#define kcg_copy_T_Data_From_F2_functio(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_F2_functions_Level_)))
#endif /* kcg_copy_T_Data_From_F2_functio */

#ifndef kcg_copy_ACC_SDM_GradientAccele
#define kcg_copy_ACC_SDM_GradientAccele(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ACC_SDM_GradientAcceleration_Pk)))
#endif /* kcg_copy_ACC_SDM_GradientAccele */

#ifndef kcg_copy_sessionStatus_T_RCM_Se
#define kcg_copy_sessionStatus_T_RCM_Se(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sessionStatus_T_RCM_Session_Typ)))
#endif /* kcg_copy_sessionStatus_T_RCM_Se */

#ifndef kcg_copy_PT4_ErrorReporting_T_P
#define kcg_copy_PT4_ErrorReporting_T_P(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT4_ErrorReporting_T_Packet_Tra)))
#endif /* kcg_copy_PT4_ErrorReporting_T_P */

#ifndef kcg_copy_M_voltage_T_TIU_Types_
#define kcg_copy_M_voltage_T_TIU_Types_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_voltage_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_voltage_T_TIU_Types_ */

#ifndef kcg_copy_P45_RadioNetworkRegist
#define kcg_copy_P45_RadioNetworkRegist(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P45_RadioNetworkRegistration_T_)))
#endif /* kcg_copy_P45_RadioNetworkRegist */

#ifndef kcg_copy_DMI_Track_Description_
#define kcg_copy_DMI_Track_Description_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Track_Description_T_DMI_Mes)))
#endif /* kcg_copy_DMI_Track_Description_ */

#ifndef kcg_copy_BCAccumulator_type_Cal
#define kcg_copy_BCAccumulator_type_Cal(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BCAccumulator_type_CalcBrakingC)))
#endif /* kcg_copy_BCAccumulator_type_Cal */

#ifndef kcg_copy_TrackSide_ForCheck_T_C
#define kcg_copy_TrackSide_ForCheck_T_C(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrackSide_ForCheck_T_Common_Typ)))
#endif /* kcg_copy_TrackSide_ForCheck_T_C */

#ifndef kcg_copy_API_TelegramHeader_T_A
#define kcg_copy_API_TelegramHeader_T_A(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TelegramHeader_T_API_Msg_Pk)))
#endif /* kcg_copy_API_TelegramHeader_T_A */

#ifndef kcg_copy_API_RadioMsgHeader_T_A
#define kcg_copy_API_RadioMsgHeader_T_A(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_RadioMsgHeader_T_API_Msg_Pk)))
#endif /* kcg_copy_API_RadioMsgHeader_T_A */

#ifndef kcg_copy_refBGs_T_CalculateTrai
#define kcg_copy_refBGs_T_CalculateTrai(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (refBGs_T_CalculateTrainPosition)))
#endif /* kcg_copy_refBGs_T_CalculateTrai */

#ifndef kcg_copy_OdometrySpeeds_T_Obu_B
#define kcg_copy_OdometrySpeeds_T_Obu_B(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometrySpeeds_T_Obu_BasicTypes)))
#endif /* kcg_copy_OdometrySpeeds_T_Obu_B */

#ifndef kcg_copy_Gradient_section_t_Tra
#define kcg_copy_Gradient_section_t_Tra(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Gradient_section_t_TrackAtlasTy)))
#endif /* kcg_copy_Gradient_section_t_Tra */

#ifndef kcg_copy_dmiOutputs_T_manage_DM
#define kcg_copy_dmiOutputs_T_manage_DM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (dmiOutputs_T_manage_DMI_Output_)))
#endif /* kcg_copy_dmiOutputs_T_manage_DM */

#ifndef kcg_copy_OdometryLocations_T_Ob
#define kcg_copy_OdometryLocations_T_Ob(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometryLocations_T_Obu_BasicTy)))
#endif /* kcg_copy_OdometryLocations_T_Ob */

#ifndef kcg_copy_Type_I_train_commands_
#define kcg_copy_Type_I_train_commands_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Type_I_train_commands_T_TIU_Typ)))
#endif /* kcg_copy_Type_I_train_commands_ */

#ifndef kcg_copy_T_Data_From_Track_To_M
#define kcg_copy_T_Data_From_Track_To_M(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_To_Mode_Level)))
#endif /* kcg_copy_T_Data_From_Track_To_M */

#ifndef kcg_copy_T_Data_From_DMI_Level_
#define kcg_copy_T_Data_From_DMI_Level_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_DMI_Level_And_Mode_)))
#endif /* kcg_copy_T_Data_From_DMI_Level_ */

#ifndef kcg_copy_EVC_to_DMI_Message_T_A
#define kcg_copy_EVC_to_DMI_Message_T_A(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (EVC_to_DMI_Message_T_API_DMI_Pk)))
#endif /* kcg_copy_EVC_to_DMI_Message_T_A */

#ifndef kcg_copy_DMI_Dynamic_T_DMI_Mess
#define kcg_copy_DMI_Dynamic_T_DMI_Mess(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Dynamic_T_DMI_Messages_EVC_)))
#endif /* kcg_copy_DMI_Dynamic_T_DMI_Mess */

#ifndef kcg_copy_DMI_Available_Menu_T_D
#define kcg_copy_DMI_Available_Menu_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Available_Menu_T_DMI_Types_)))
#endif /* kcg_copy_DMI_Available_Menu_T_D */

#ifndef kcg_copy_TSM_triggerCond_T_SDM_
#define kcg_copy_TSM_triggerCond_T_SDM_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TSM_triggerCond_T_SDM_Commands_)))
#endif /* kcg_copy_TSM_triggerCond_T_SDM_ */

#ifndef kcg_copy_speedSupervisionForDMI
#define kcg_copy_speedSupervisionForDMI(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (speedSupervisionForDMI_T_DMI_Ty)))
#endif /* kcg_copy_speedSupervisionForDMI */

#ifndef kcg_copy_Speeds_T_SDM_Types_Pkg
#define kcg_copy_Speeds_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Speeds_T_SDM_Types_Pkg)))
#endif /* kcg_copy_Speeds_T_SDM_Types_Pkg */

#ifndef kcg_copy_SDM_Locations_T_SDM_Ty
#define kcg_copy_SDM_Locations_T_SDM_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Locations_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Locations_T_SDM_Ty */

#ifndef kcg_copy_MA_section_real_T_Targ
#define kcg_copy_MA_section_real_T_Targ(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MA_section_real_T_TargetManagem)))
#endif /* kcg_copy_MA_section_real_T_Targ */

#ifndef kcg_copy_SDM_Commands_T_SDM_Typ
#define kcg_copy_SDM_Commands_T_SDM_Typ(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Commands_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Commands_T_SDM_Typ */

#ifndef kcg_copy_DMI_to_EVC_Message_T_A
#define kcg_copy_DMI_to_EVC_Message_T_A(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_to_EVC_Message_T_API_DMI_Pk)))
#endif /* kcg_copy_DMI_to_EVC_Message_T_A */

#ifndef kcg_copy_TelegramHeader_T_BG_Ty
#define kcg_copy_TelegramHeader_T_BG_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeader_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeader_T_BG_Ty */

#ifndef kcg_copy_P58_PositionReportPara
#define kcg_copy_P58_PositionReportPara(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P58_PositionReportParameters_T_)))
#endif /* kcg_copy_P58_PositionReportPara */

#ifndef kcg_copy_P011_TM_TrainToTrack
#define kcg_copy_P011_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P011_TM_TrainToTrack)))
#endif /* kcg_copy_P011_TM_TrainToTrack */

#ifndef kcg_copy_trainData_T_TIU_Types_
#define kcg_copy_trainData_T_TIU_Types_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_T_TIU_Types_Pkg)))
#endif /* kcg_copy_trainData_T_TIU_Types_ */

#ifndef kcg_copy_P003_OBU_T_TM
#define kcg_copy_P003_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_OBU_T_TM)))
#endif /* kcg_copy_P003_OBU_T_TM */

#ifndef kcg_copy_P003V1_OBU_T_TM_baseli
#define kcg_copy_P003V1_OBU_T_TM_baseli(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P003V1_OBU_T_TM_baseli */

#ifndef kcg_copy_T_Data_From_Track_Pack
#define kcg_copy_T_Data_From_Track_Pack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_Packet_Level_)))
#endif /* kcg_copy_T_Data_From_Track_Pack */

#ifndef kcg_copy_P012_OBU_T_TM
#define kcg_copy_P012_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P012_OBU_T_TM)))
#endif /* kcg_copy_P012_OBU_T_TM */

#ifndef kcg_copy_P15_Level23MovementAut
#define kcg_copy_P15_Level23MovementAut(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P15_Level23MovementAuthority_T_)))
#endif /* kcg_copy_P15_Level23MovementAut */

#ifndef kcg_copy_P12_Level1MovementAuth
#define kcg_copy_P12_Level1MovementAuth(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P12_Level1MovementAuthority_T_P)))
#endif /* kcg_copy_P12_Level1MovementAuth */

#ifndef kcg_copy_P015_OBU_T_TM
#define kcg_copy_P015_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_OBU_T_TM)))
#endif /* kcg_copy_P015_OBU_T_TM */

#ifndef kcg_copy_P001_TM_TrainToTrack
#define kcg_copy_P001_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P001_TM_TrainToTrack)))
#endif /* kcg_copy_P001_TM_TrainToTrack */

#ifndef kcg_copy_P000_TM_TrainToTrack
#define kcg_copy_P000_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P000_TM_TrainToTrack)))
#endif /* kcg_copy_P000_TM_TrainToTrack */

#ifndef kcg_copy_MovementAuthority_t_Tr
#define kcg_copy_MovementAuthority_t_Tr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MovementAuthority_t_TrackAtlasT)))
#endif /* kcg_copy_MovementAuthority_t_Tr */

#ifndef kcg_copy_trainPositionInfo_T_Tr
#define kcg_copy_trainPositionInfo_T_Tr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPositionInfo_T_TrainPositi)))
#endif /* kcg_copy_trainPositionInfo_T_Tr */

#ifndef kcg_copy_P3_NationalValues_T_Pa
#define kcg_copy_P3_NationalValues_T_Pa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P3_NationalValues_T_Packet_Type)))
#endif /* kcg_copy_P3_NationalValues_T_Pa */

#ifndef kcg_copy_P203V1_OBU_T_TM_baseli
#define kcg_copy_P203V1_OBU_T_TM_baseli(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P203V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P203V1_OBU_T_TM_baseli */

#ifndef kcg_copy_trainPosition_T_TrainP
#define kcg_copy_trainPosition_T_TrainP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPosition_T_TrainPosition_T)))
#endif /* kcg_copy_trainPosition_T_TrainP */

#ifndef kcg_copy_LinkedBG_T_BG_Types_Pk
#define kcg_copy_LinkedBG_T_BG_Types_Pk(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LinkedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBG_T_BG_Types_Pk */

#ifndef kcg_copy_morc_configData_T_RCM_
#define kcg_copy_morc_configData_T_RCM_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (morc_configData_T_RCM_Session_T)))
#endif /* kcg_copy_morc_configData_T_RCM_ */

#ifndef kcg_copy_sessionCmd_T_RCM_Sessi
#define kcg_copy_sessionCmd_T_RCM_Sessi(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sessionCmd_T_RCM_Session_Types_)))
#endif /* kcg_copy_sessionCmd_T_RCM_Sessi */

#ifndef kcg_copy_obuEventsAndPhases_T_R
#define kcg_copy_obuEventsAndPhases_T_R(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (obuEventsAndPhases_T_RCM_Sessio)))
#endif /* kcg_copy_obuEventsAndPhases_T_R */

#ifndef kcg_copy_BG_Header_T_BG_Types_P
#define kcg_copy_BG_Header_T_BG_Types_P(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Header_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Header_T_BG_Types_P */

#ifndef kcg_copy_Radio_TrackTrain_Heade
#define kcg_copy_Radio_TrackTrain_Heade(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrackTrain_Header_T_Radio)))
#endif /* kcg_copy_Radio_TrackTrain_Heade */

#ifndef kcg_copy_Position_Report_TrainT
#define kcg_copy_Position_Report_TrainT(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_TrainToTrack)))
#endif /* kcg_copy_Position_Report_TrainT */

#ifndef kcg_copy_Position_Report_based_
#define kcg_copy_Position_Report_based_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_based_on_two_ba)))
#endif /* kcg_copy_Position_Report_based_ */

#ifndef kcg_copy_PT11_ValidatedTrainDat
#define kcg_copy_PT11_ValidatedTrainDat(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT11_ValidatedTrainData_T_Packe)))
#endif /* kcg_copy_PT11_ValidatedTrainDat */

#ifndef kcg_copy_RBC_Communication_T_Pr
#define kcg_copy_RBC_Communication_T_Pr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Communication_T_ProvidePosi)))
#endif /* kcg_copy_RBC_Communication_T_Pr */

#ifndef kcg_copy_T_Data_To_DMI_Level_An
#define kcg_copy_T_Data_To_DMI_Level_An(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_To_DMI_Level_And_Mode_Ty)))
#endif /* kcg_copy_T_Data_To_DMI_Level_An */

#ifndef kcg_copy_mobileConnectionCmd_T_
#define kcg_copy_mobileConnectionCmd_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileConnectionCmd_T_RCM_Types)))
#endif /* kcg_copy_mobileConnectionCmd_T_ */

#ifndef kcg_copy_DMI_Text_Message_T_DMI
#define kcg_copy_DMI_Text_Message_T_DMI(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_T_DMI_Messages)))
#endif /* kcg_copy_DMI_Text_Message_T_DMI */

#ifndef kcg_copy_DMI_Icons_T_DMI_Messag
#define kcg_copy_DMI_Icons_T_DMI_Messag(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Icons_T_DMI_Messages_EVC_to)))
#endif /* kcg_copy_DMI_Icons_T_DMI_Messag */

#ifndef kcg_copy__27_DMI_EVC_Coded_Trai
#define kcg_copy__27_DMI_EVC_Coded_Trai(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (_27_DMI_EVC_Coded_Train_Data_T_)))
#endif /* kcg_copy__27_DMI_EVC_Coded_Trai */

#ifndef kcg_copy_TargetIteratorAkku_Tar
#define kcg_copy_TargetIteratorAkku_Tar(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TargetIteratorAkku_TargetLimits)))
#endif /* kcg_copy_TargetIteratorAkku_Tar */

#ifndef kcg_copy_DMI_EVC_status_T_DMI_T
#define kcg_copy_DMI_EVC_status_T_DMI_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_EVC_status_T_DMI_T */

#ifndef kcg_copy_DMI_Identifier_T_DMI_M
#define kcg_copy_DMI_Identifier_T_DMI_M(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Identifier_T_DMI_Messages_D)))
#endif /* kcg_copy_DMI_Identifier_T_DMI_M */

#ifndef kcg_copy_DMI_TXT_MSG_status_T_D
#define kcg_copy_DMI_TXT_MSG_status_T_D(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_TXT_MSG_status_T_DMI_Types_)))
#endif /* kcg_copy_DMI_TXT_MSG_status_T_D */

#ifndef kcg_copy_BGCollector_T_Receive_
#define kcg_copy_BGCollector_T_Receive_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BGCollector_T_Receive_TrackSide)))
#endif /* kcg_copy_BGCollector_T_Receive_ */

#ifndef kcg_copy_filterRelatedEvents_T_
#define kcg_copy_filterRelatedEvents_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (filterRelatedEvents_T_Common_Ty)))
#endif /* kcg_copy_filterRelatedEvents_T_ */

#ifndef kcg_copy_dataCollectionForLevel
#define kcg_copy_dataCollectionForLevel(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (dataCollectionForLevelTransitio)))
#endif /* kcg_copy_dataCollectionForLevel */

#ifndef kcg_copy_MSG_Errors_T_Common_Ty
#define kcg_copy_MSG_Errors_T_Common_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MSG_Errors_T_Common_Types_Pkg)))
#endif /* kcg_copy_MSG_Errors_T_Common_Ty */

#ifndef kcg_copy_P058_OBU_T_TM
#define kcg_copy_P058_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_OBU_T_TM)))
#endif /* kcg_copy_P058_OBU_T_TM */

#ifndef kcg_copy_Mode_control_and_train
#define kcg_copy_Mode_control_and_train(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Mode_control_and_train_status_T)))
#endif /* kcg_copy_Mode_control_and_train */

#ifndef kcg_copy_DMI_Train_Data_T_DMI_M
#define kcg_copy_DMI_Train_Data_T_DMI_M(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Data_T_DMI_Messages_B)))
#endif /* kcg_copy_DMI_Train_Data_T_DMI_M */

#ifndef kcg_copy_P27_InternationalStati
#define kcg_copy_P27_InternationalStati(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P27_InternationalStaticSpeedPro)))
#endif /* kcg_copy_P27_InternationalStati */

#ifndef kcg_copy_P80_ModeProfile_T_Pack
#define kcg_copy_P80_ModeProfile_T_Pack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P80_ModeProfile_T_Packet_Types_)))
#endif /* kcg_copy_P80_ModeProfile_T_Pack */

#ifndef kcg_copy_M_147_T_TM_radio_messa
#define kcg_copy_M_147_T_TM_radio_messa(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_147_T_TM_radio_messages)))
#endif /* kcg_copy_M_147_T_TM_radio_messa */

#ifndef kcg_copy_positionErrors_T_Train
#define kcg_copy_positionErrors_T_Train(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionErrors_T_TrainPosition_)))
#endif /* kcg_copy_positionErrors_T_Train */

#ifndef kcg_copy_P005_section_enum_T_TM
#define kcg_copy_P005_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_section_enum_T_TM)))
#endif /* kcg_copy_P005_section_enum_T_TM */

#ifndef kcg_copy_struct_99510
#define kcg_copy_struct_99510(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_99510)))
#endif /* kcg_copy_struct_99510 */

#ifndef kcg_copy_P042_trackside_int_T_T
#define kcg_copy_P042_trackside_int_T_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P042_trackside_int_T_TM)))
#endif /* kcg_copy_P042_trackside_int_T_T */

#ifndef kcg_copy_struct_99535
#define kcg_copy_struct_99535(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_99535)))
#endif /* kcg_copy_struct_99535 */

#ifndef kcg_copy_positionedBG_T_TrainPo
#define kcg_copy_positionedBG_T_TrainPo(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBG_T_TrainPosition_Ty)))
#endif /* kcg_copy_positionedBG_T_TrainPo */

#ifndef kcg_copy_M_TrainTrack_MessageHd
#define kcg_copy_M_TrainTrack_MessageHd(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_MessageHd_T_TM_rad)))
#endif /* kcg_copy_M_TrainTrack_MessageHd */

#ifndef kcg_copy_P42_SessionManagement_
#define kcg_copy_P42_SessionManagement_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P42_SessionManagement_T_Packet_)))
#endif /* kcg_copy_P42_SessionManagement_ */

#ifndef kcg_copy_p42_sessionManagement_
#define kcg_copy_p42_sessionManagement_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (p42_sessionManagement_T_RCM_Msg)))
#endif /* kcg_copy_p42_sessionManagement_ */

#ifndef kcg_copy_odometry_T_Obu_BasicTy
#define kcg_copy_odometry_T_Obu_BasicTy(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometry_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_odometry_T_Obu_BasicTy */

#ifndef kcg_copy_RadioMetadata_T_Common
#define kcg_copy_RadioMetadata_T_Common(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMetadata_T_Common_Types_Pk)))
#endif /* kcg_copy_RadioMetadata_T_Common */

#ifndef kcg_copy_struct_99614
#define kcg_copy_struct_99614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_99614)))
#endif /* kcg_copy_struct_99614 */

#ifndef kcg_copy_Isolation_Status_T_TIU
#define kcg_copy_Isolation_Status_T_TIU(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Isolation_Status_T_TIU_Types_Pk)))
#endif /* kcg_copy_Isolation_Status_T_TIU */

#ifndef kcg_copy_Message_EVC_to_Train_I
#define kcg_copy_Message_EVC_to_Train_I(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Message_EVC_to_Train_Interface_)))
#endif /* kcg_copy_Message_EVC_to_Train_I */

#ifndef kcg_copy_trainProperties_T_Trai
#define kcg_copy_trainProperties_T_Trai(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainProperties_T_TrainPosition)))
#endif /* kcg_copy_trainProperties_T_Trai */

#ifndef kcg_copy_p131_q_rbcTransitionOr
#define kcg_copy_p131_q_rbcTransitionOr(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (p131_q_rbcTransitionOrder_T_Han)))
#endif /* kcg_copy_p131_q_rbcTransitionOr */

#ifndef kcg_copy_struct_99662
#define kcg_copy_struct_99662(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_99662)))
#endif /* kcg_copy_struct_99662 */

#ifndef kcg_copy_outPackets_T_Common_Ty
#define kcg_copy_outPackets_T_Common_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (outPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_outPackets_T_Common_Ty */

#ifndef kcg_copy_Brake_pressure_value_T
#define kcg_copy_Brake_pressure_value_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_pressure_value_T_TIU_Type)))
#endif /* kcg_copy_Brake_pressure_value_T */

#ifndef kcg_copy_P63_BaliseInSRAuthorit
#define kcg_copy_P63_BaliseInSRAuthorit(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P63_BaliseInSRAuthority_T_Packe)))
#endif /* kcg_copy_P63_BaliseInSRAuthorit */

#ifndef kcg_copy_DMI_DriverAck_T_DMI_Ty
#define kcg_copy_DMI_DriverAck_T_DMI_Ty(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_DriverAck_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_DriverAck_T_DMI_Ty */

#ifndef kcg_copy_LocWithInAcc_T_Obu_Bas
#define kcg_copy_LocWithInAcc_T_Obu_Bas(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocWithInAcc_T_Obu_BasicTypes_P)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_Bas */

#ifndef kcg_copy_DataForDMI_t_TrackAtla
#define kcg_copy_DataForDMI_t_TrackAtla(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForDMI_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForDMI_t_TrackAtla */

#ifndef kcg_copy_T_LevelTransition_Leve
#define kcg_copy_T_LevelTransition_Leve(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_LevelTransition_Level_And_Mod)))
#endif /* kcg_copy_T_LevelTransition_Leve */

#ifndef kcg_copy_NID_EM_STORE_Acc_T_TA_
#define kcg_copy_NID_EM_STORE_Acc_T_TA_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_STORE_Acc_T_TA_Emergency)))
#endif /* kcg_copy_NID_EM_STORE_Acc_T_TA_ */

#ifndef kcg_copy_P004_TM_TrainToTrack
#define kcg_copy_P004_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P004_TM_TrainToTrack)))
#endif /* kcg_copy_P004_TM_TrainToTrack */

#ifndef kcg_copy_LocationBasedEvents_T_
#define kcg_copy_LocationBasedEvents_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocationBasedEvents_T_ProvidePo)))
#endif /* kcg_copy_LocationBasedEvents_T_ */

#ifndef kcg_copy_T_ERTMS_capabilities_L
#define kcg_copy_T_ERTMS_capabilities_L(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_ERTMS_capabilities_Level_And_)))
#endif /* kcg_copy_T_ERTMS_capabilities_L */

#ifndef kcg_copy_m39_AckOfTerminationOf
#define kcg_copy_m39_AckOfTerminationOf(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (m39_AckOfTerminationOfACommunic)))
#endif /* kcg_copy_m39_AckOfTerminationOf */

#ifndef kcg_copy_StaticSpeedSection_t_T
#define kcg_copy_StaticSpeedSection_t_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (StaticSpeedSection_t_TrackAtlas)))
#endif /* kcg_copy_StaticSpeedSection_t_T */

#ifndef kcg_copy_P003_permanent_data_T_
#define kcg_copy_P003_permanent_data_T_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_permanent_data_T_TM_baseli)))
#endif /* kcg_copy_P003_permanent_data_T_ */

#ifndef kcg_copy_DMI_train_id_T_DMI_Typ
#define kcg_copy_DMI_train_id_T_DMI_Typ(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_train_id_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_train_id_T_DMI_Typ */

#ifndef kcg_copy_radioManagementMessage
#define kcg_copy_radioManagementMessage(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (radioManagementMessage_T_Common)))
#endif /* kcg_copy_radioManagementMessage */

#ifndef kcg_copy_RadioMessage_T_Radio_T
#define kcg_copy_RadioMessage_T_Radio_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMessage_T_Radio_Types_Pkg)))
#endif /* kcg_copy_RadioMessage_T_Radio_T */

#ifndef kcg_copy_API_TrackSideInput_T_A
#define kcg_copy_API_TrackSideInput_T_A(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TrackSideInput_T_API_Msg_Pk)))
#endif /* kcg_copy_API_TrackSideInput_T_A */

#ifndef kcg_copy_Message_Train_Interfac
#define kcg_copy_Message_Train_Interfac(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Message_Train_Interface_to_EVC_)))
#endif /* kcg_copy_Message_Train_Interfac */

#ifndef kcg_copy_infoFromLinking_T_Trai
#define kcg_copy_infoFromLinking_T_Trai(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (infoFromLinking_T_TrainPosition)))
#endif /* kcg_copy_infoFromLinking_T_Trai */

#ifndef kcg_copy_RBC_Id_T_Common_Types_
#define kcg_copy_RBC_Id_T_Common_Types_(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Id_T_Common_Types_Pkg)))
#endif /* kcg_copy_RBC_Id_T_Common_Types_ */

#ifndef kcg_copy_NID_EM_Store_T_TA_Emer
#define kcg_copy_NID_EM_Store_T_TA_Emer(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_Store_T_TA_EmergencyStop)))
#endif /* kcg_copy_NID_EM_Store_T_TA_Emer */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_linkedBGs_indices_T_Ca
#define kcg_copy_linkedBGs_indices_T_Ca(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (linkedBGs_indices_T_CalculateTr)))
#endif /* kcg_copy_linkedBGs_indices_T_Ca */

#ifndef kcg_copy_array_int_492
#define kcg_copy_array_int_492(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_492)))
#endif /* kcg_copy_array_int_492 */

#ifndef kcg_copy_StaticSpeedProfile_t_T
#define kcg_copy_StaticSpeedProfile_t_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (StaticSpeedProfile_t_TrackAtlas)))
#endif /* kcg_copy_StaticSpeedProfile_t_T */

#ifndef kcg_copy_GradientProfile_t_Trac
#define kcg_copy_GradientProfile_t_Trac(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_t_TrackAtlasTyp)))
#endif /* kcg_copy_GradientProfile_t_Trac */

#ifndef kcg_copy_GradientProfile_for_DM
#define kcg_copy_GradientProfile_for_DM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_for_DMI_t_Track)))
#endif /* kcg_copy_GradientProfile_for_DM */

#ifndef kcg_copy_array_96787
#define kcg_copy_array_96787(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_96787)))
#endif /* kcg_copy_array_96787 */

#ifndef kcg_copy_TelegramArray_T_BG_Typ
#define kcg_copy_TelegramArray_T_BG_Typ(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (TelegramArray_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramArray_T_BG_Typ */

#ifndef kcg_copy_array_96794
#define kcg_copy_array_96794(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_96794)))
#endif /* kcg_copy_array_96794 */

#ifndef kcg_copy_array_int_894
#define kcg_copy_array_int_894(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_894)))
#endif /* kcg_copy_array_int_894 */

#ifndef kcg_copy_P41_LevelTransistionOr
#define kcg_copy_P41_LevelTransistionOr(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P41_LevelTransistionOrders_T_Pa)))
#endif /* kcg_copy_P41_LevelTransistionOr */

#ifndef kcg_copy_Target_list_MRSP_real_
#define kcg_copy_Target_list_MRSP_real_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Target_list_MRSP_real_T_TargetM)))
#endif /* kcg_copy_Target_list_MRSP_real_ */

#ifndef kcg_copy_linkedBGs_asPositioned
#define kcg_copy_linkedBGs_asPositioned(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (linkedBGs_asPositionedBGs_T_Tra)))
#endif /* kcg_copy_linkedBGs_asPositioned */

#ifndef kcg_copy_P005_OBU_sectionlist_e
#define kcg_copy_P005_OBU_sectionlist_e(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_e */

#ifndef kcg_copy_LinkedBGs_T_BG_Types_P
#define kcg_copy_LinkedBGs_T_BG_Types_P(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LinkedBGs_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBGs_T_BG_Types_P */

#ifndef kcg_copy_array_96846
#define kcg_copy_array_96846(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_96846)))
#endif /* kcg_copy_array_96846 */

#ifndef kcg_copy_array_96889
#define kcg_copy_array_96889(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_96889)))
#endif /* kcg_copy_array_96889 */

#ifndef kcg_copy_array_bool_113
#define kcg_copy_array_bool_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_113)))
#endif /* kcg_copy_array_bool_113 */

#ifndef kcg_copy_array_real_113
#define kcg_copy_array_real_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_113)))
#endif /* kcg_copy_array_real_113 */

#ifndef kcg_copy_array_int_31
#define kcg_copy_array_int_31(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_31)))
#endif /* kcg_copy_array_int_31 */

#ifndef kcg_copy_DMI_level_array_T_DMI_
#define kcg_copy_DMI_level_array_T_DMI_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_level_array_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_array_T_DMI_ */

#ifndef kcg_copy_array_int_964
#define kcg_copy_array_int_964(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_964)))
#endif /* kcg_copy_array_int_964 */

#ifndef kcg_copy_P046_sections_array_fl
#define kcg_copy_P046_sections_array_fl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_sections_array_flat_T_TM)))
#endif /* kcg_copy_P046_sections_array_fl */

#ifndef kcg_copy_array_int_23
#define kcg_copy_array_int_23(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_23)))
#endif /* kcg_copy_array_int_23 */

#ifndef kcg_copy_ReportedBGList_T_Provi
#define kcg_copy_ReportedBGList_T_Provi(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ReportedBGList_T_ProvidePositio)))
#endif /* kcg_copy_ReportedBGList_T_Provi */

#ifndef kcg_copy_EVC_to_DMI_Message_int
#define kcg_copy_EVC_to_DMI_Message_int(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (EVC_to_DMI_Message_int_T_API_DM)))
#endif /* kcg_copy_EVC_to_DMI_Message_int */

#ifndef kcg_copy_positionedBGs_T_TrainP
#define kcg_copy_positionedBGs_T_TrainP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (positionedBGs_T_TrainPosition_T)))
#endif /* kcg_copy_positionedBGs_T_TrainP */

#ifndef kcg_copy_array_97069
#define kcg_copy_array_97069(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97069)))
#endif /* kcg_copy_array_97069 */

#ifndef kcg_copy_Metadata_T_Common_Type
#define kcg_copy_Metadata_T_Common_Type(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Type */

#ifndef kcg_copy_array_97076
#define kcg_copy_array_97076(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97076)))
#endif /* kcg_copy_array_97076 */

#ifndef kcg_copy_T_LevelTransition_Prio
#define kcg_copy_T_LevelTransition_Prio(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_LevelTransition_PriorityTable)))
#endif /* kcg_copy_T_LevelTransition_Prio */

#ifndef kcg_copy_array_int_261
#define kcg_copy_array_int_261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_261)))
#endif /* kcg_copy_array_int_261 */

#ifndef kcg_copy__7_P46_ConditionalLeve
#define kcg_copy__7_P46_ConditionalLeve(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_7_P46_ConditionalLevelTransiti)))
#endif /* kcg_copy__7_P46_ConditionalLeve */

#ifndef kcg_copy_nvkvintArray_T_Packet_
#define kcg_copy_nvkvintArray_T_Packet_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkvintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintArray_T_Packet_ */

#ifndef kcg_copy_array_int_97
#define kcg_copy_array_int_97(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_97)))
#endif /* kcg_copy_array_int_97 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_97133
#define kcg_copy_array_97133(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97133)))
#endif /* kcg_copy_array_97133 */

#ifndef kcg_copy_IterPacket58List_T_Pac
#define kcg_copy_IterPacket58List_T_Pac(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (IterPacket58List_T_Packet_Types)))
#endif /* kcg_copy_IterPacket58List_T_Pac */

#ifndef kcg_copy_array_97140
#define kcg_copy_array_97140(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97140)))
#endif /* kcg_copy_array_97140 */

#ifndef kcg_copy_array_97162
#define kcg_copy_array_97162(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97162)))
#endif /* kcg_copy_array_97162 */

#ifndef kcg_copy_DMI_Driver_Identifier_
#define kcg_copy_DMI_Driver_Identifier_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_Driver_Identifier_int_array)))
#endif /* kcg_copy_DMI_Driver_Identifier_ */

#ifndef kcg_copy_array_97187
#define kcg_copy_array_97187(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97187)))
#endif /* kcg_copy_array_97187 */

#ifndef kcg_copy_array_real_100_8
#define kcg_copy_array_real_100_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_8)))
#endif /* kcg_copy_array_real_100_8 */

#ifndef kcg_copy_M_TrainTrack_compresse
#define kcg_copy_M_TrainTrack_compresse(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_compressed_packets)))
#endif /* kcg_copy_M_TrainTrack_compresse */

#ifndef kcg_copy_array_int_987
#define kcg_copy_array_int_987(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_987)))
#endif /* kcg_copy_array_int_987 */

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

#ifndef kcg_copy_array_int_42
#define kcg_copy_array_int_42(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_42)))
#endif /* kcg_copy_array_int_42 */

#ifndef kcg_copy_array_97349
#define kcg_copy_array_97349(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97349)))
#endif /* kcg_copy_array_97349 */

#ifndef kcg_copy__5_P15_Level23Movement
#define kcg_copy__5_P15_Level23Movement(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_5_P15_Level23MovementAuthoriti)))
#endif /* kcg_copy__5_P15_Level23Movement */

#ifndef kcg_copy__6_P12_Level1MovementA
#define kcg_copy__6_P12_Level1MovementA(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_6_P12_Level1MovementAuthoritie)))
#endif /* kcg_copy__6_P12_Level1MovementA */

#ifndef kcg_copy_array_int_975
#define kcg_copy_array_int_975(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_975)))
#endif /* kcg_copy_array_int_975 */

#ifndef kcg_copy_DMI_TXT_MSGList_status
#define kcg_copy_DMI_TXT_MSGList_status(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TXT_MSGList_status_T_DMI_Ty)))
#endif /* kcg_copy_DMI_TXT_MSGList_status */

#ifndef kcg_copy_array_97397
#define kcg_copy_array_97397(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97397)))
#endif /* kcg_copy_array_97397 */

#ifndef kcg_copy_MovementAuthoritySecti
#define kcg_copy_MovementAuthoritySecti(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MovementAuthoritySectionlist_t_)))
#endif /* kcg_copy_MovementAuthoritySecti */

#ifndef kcg_copy_array_real_100_1
#define kcg_copy_array_real_100_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_1)))
#endif /* kcg_copy_array_real_100_1 */

#ifndef kcg_copy_M_TrainTrackRadioOutpu
#define kcg_copy_M_TrainTrackRadioOutpu(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (M_TrainTrackRadioOutputBuffer_t)))
#endif /* kcg_copy_M_TrainTrackRadioOutpu */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_T_Mode_Profile_Table_L
#define kcg_copy_T_Mode_Profile_Table_L(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_Mode_Profile_Table_Level_And_)))
#endif /* kcg_copy_T_Mode_Profile_Table_L */

#ifndef kcg_copy_P046_OBU_sectionlist_e
#define kcg_copy_P046_OBU_sectionlist_e(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_e */

#ifndef kcg_copy_array_97512
#define kcg_copy_array_97512(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97512)))
#endif /* kcg_copy_array_97512 */

#ifndef kcg_copy_array_97516
#define kcg_copy_array_97516(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97516)))
#endif /* kcg_copy_array_97516 */

#ifndef kcg_copy_MRSP_internal_T_Target
#define kcg_copy_MRSP_internal_T_Target(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MRSP_internal_T_TargetManagemen)))
#endif /* kcg_copy_MRSP_internal_T_Target */

#ifndef kcg_copy_DMI_to_EVC_Message_int
#define kcg_copy_DMI_to_EVC_Message_int(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_to_EVC_Message_int_T_API_DM)))
#endif /* kcg_copy_DMI_to_EVC_Message_int */

#ifndef kcg_copy_array_real_100_6
#define kcg_copy_array_real_100_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_6)))
#endif /* kcg_copy_array_real_100_6 */

#ifndef kcg_copy_array_int_65
#define kcg_copy_array_int_65(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_65)))
#endif /* kcg_copy_array_int_65 */

#ifndef kcg_copy_MRSP_Profile_t_TrackAt
#define kcg_copy_MRSP_Profile_t_TrackAt(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MRSP_Profile_t_TrackAtlasTypes)))
#endif /* kcg_copy_MRSP_Profile_t_TrackAt */

#ifndef kcg_copy_ParabolaCurve_list_MRS
#define kcg_copy_ParabolaCurve_list_MRS(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ParabolaCurve_list_MRSP_T_CalcB)))
#endif /* kcg_copy_ParabolaCurve_list_MRS */

#ifndef kcg_copy_array_97554
#define kcg_copy_array_97554(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97554)))
#endif /* kcg_copy_array_97554 */

#ifndef kcg_copy_array_real_100
#define kcg_copy_array_real_100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100)))
#endif /* kcg_copy_array_real_100 */

#ifndef kcg_copy_array_int_221
#define kcg_copy_array_int_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_221)))
#endif /* kcg_copy_array_int_221 */

#ifndef kcg_copy_A_gradient_t_SDM_Gradi
#define kcg_copy_A_gradient_t_SDM_Gradi(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (A_gradient_t_SDM_GradientAccele)))
#endif /* kcg_copy_A_gradient_t_SDM_Gradi */

#ifndef kcg_copy_GradientProfile_real_c
#define kcg_copy_GradientProfile_real_c(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_real_compensate)))
#endif /* kcg_copy_GradientProfile_real_c */

#ifndef kcg_copy_array_int_627
#define kcg_copy_array_int_627(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_627)))
#endif /* kcg_copy_array_int_627 */

#ifndef kcg_copy_array_int_260
#define kcg_copy_array_int_260(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_260)))
#endif /* kcg_copy_array_int_260 */

#ifndef kcg_copy_MyArray_SDM_Commands_P
#define kcg_copy_MyArray_SDM_Commands_P(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MyArray_SDM_Commands_Pkg)))
#endif /* kcg_copy_MyArray_SDM_Commands_P */

#ifndef kcg_copy_array_97600
#define kcg_copy_array_97600(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97600)))
#endif /* kcg_copy_array_97600 */

#ifndef kcg_copy_ASafeSpeedDefinition_T
#define kcg_copy_ASafeSpeedDefinition_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ASafeSpeedDefinition_T_CalcBrak)))
#endif /* kcg_copy_ASafeSpeedDefinition_T */

#ifndef kcg_copy_GradientProfile_real_t
#define kcg_copy_GradientProfile_real_t(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_real_t_SDM_Grad)))
#endif /* kcg_copy_GradientProfile_real_t */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_int_990
#define kcg_copy_array_int_990(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_990)))
#endif /* kcg_copy_array_int_990 */

#ifndef kcg_copy_P015_OBU_sectionlist_e
#define kcg_copy_P015_OBU_sectionlist_e(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P015_OBU_sectionlist_e */

#ifndef kcg_copy_array_int_131
#define kcg_copy_array_int_131(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_131)))
#endif /* kcg_copy_array_int_131 */

#ifndef kcg_copy_P058_OBU_sectionlist_e
#define kcg_copy_P058_OBU_sectionlist_e(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P058_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P058_OBU_sectionlist_e */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_real_6
#define kcg_copy_array_real_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_6)))
#endif /* kcg_copy_array_real_6 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_t_BrakeVt_t_SDMModelPk
#define kcg_copy_t_BrakeVt_t_SDMModelPk(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (t_BrakeVt_t_SDMModelPkg)))
#endif /* kcg_copy_t_BrakeVt_t_SDMModelPk */

#ifndef kcg_copy_array_int_6_221
#define kcg_copy_array_int_6_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_221)))
#endif /* kcg_copy_array_int_6_221 */

#ifndef kcg_copy_array_int_978
#define kcg_copy_array_int_978(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_978)))
#endif /* kcg_copy_array_int_978 */

#ifndef kcg_copy_array_97859
#define kcg_copy_array_97859(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97859)))
#endif /* kcg_copy_array_97859 */

#ifndef kcg_copy_P80_ModeProfiles_T_Pac
#define kcg_copy_P80_ModeProfiles_T_Pac(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P80_ModeProfiles_T_Packet_Types)))
#endif /* kcg_copy_P80_ModeProfiles_T_Pac */

#ifndef kcg_copy_DMI_gradientProfileArr
#define kcg_copy_DMI_gradientProfileArr(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_gradientProfileArray_T_DMI_)))
#endif /* kcg_copy_DMI_gradientProfileArr */

#ifndef kcg_copy_DMI_SpeedProfileArray_
#define kcg_copy_DMI_SpeedProfileArray_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_SpeedProfileArray_T_DMI_Typ)))
#endif /* kcg_copy_DMI_SpeedProfileArray_ */

#ifndef kcg_copy_array_97906
#define kcg_copy_array_97906(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97906)))
#endif /* kcg_copy_array_97906 */

#ifndef kcg_copy_array_97910
#define kcg_copy_array_97910(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_97910)))
#endif /* kcg_copy_array_97910 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_888
#define kcg_copy_array_int_888(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_888)))
#endif /* kcg_copy_array_int_888 */

#ifndef kcg_copy_ModeDecisionTableType_
#define kcg_copy_ModeDecisionTableType_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ModeDecisionTableType_DataDicti)))
#endif /* kcg_copy_ModeDecisionTableType_ */

#ifndef kcg_copy_P027V1_OBU_sectionlist
#define kcg_copy_P027V1_OBU_sectionlist(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_sectionlist_enum_T_T)))
#endif /* kcg_copy_P027V1_OBU_sectionlist */

#ifndef kcg_copy_nidCArray_T_Packet_Typ
#define kcg_copy_nidCArray_T_Packet_Typ(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nidCArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nidCArray_T_Packet_Typ */

#ifndef kcg_copy_array_98011
#define kcg_copy_array_98011(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_98011)))
#endif /* kcg_copy_array_98011 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_SSP_cat_t_TA_MRSP
#define kcg_copy_SSP_cat_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_cat_t_TA_MRSP)))
#endif /* kcg_copy_SSP_cat_t_TA_MRSP */

#ifndef kcg_copy_nvkrintArray_T_Packet_
#define kcg_copy_nvkrintArray_T_Packet_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkrintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrintArray_T_Packet_ */

#ifndef kcg_copy_ASafe_Data_T_CalcBraki
#define kcg_copy_ASafe_Data_T_CalcBraki(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ASafe_Data_T_CalcBrakingCurves_)))
#endif /* kcg_copy_ASafe_Data_T_CalcBraki */

#ifndef kcg_copy_array_98073
#define kcg_copy_array_98073(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_98073)))
#endif /* kcg_copy_array_98073 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_P011_voltage_sectionli
#define kcg_copy_P011_voltage_sectionli(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P011_voltage_sectionlist_array_)))
#endif /* kcg_copy_P011_voltage_sectionli */

#ifndef kcg_copy_array_int_302
#define kcg_copy_array_int_302(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_302)))
#endif /* kcg_copy_array_int_302 */

#ifndef kcg_copy_array_int_13
#define kcg_copy_array_int_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_13)))
#endif /* kcg_copy_array_int_13 */

#ifndef kcg_copy_array_real_13
#define kcg_copy_array_real_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_13)))
#endif /* kcg_copy_array_real_13 */

#ifndef kcg_copy_array_98127
#define kcg_copy_array_98127(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_98127)))
#endif /* kcg_copy_array_98127 */

#ifndef kcg_copy_DMI_TEXT_INT_Array_T_D
#define kcg_copy_DMI_TEXT_INT_Array_T_D(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TEXT_INT_Array_T_DATA)))
#endif /* kcg_copy_DMI_TEXT_INT_Array_T_D */

#ifndef kcg_copy_DMI_TEXT_DMI_Types_Pkg
#define kcg_copy_DMI_TEXT_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TEXT_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TEXT_DMI_Types_Pkg */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy__3_P027V1_OBU_sectionl
#define kcg_copy__3_P027V1_OBU_sectionl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_3_P027V1_OBU_sectionlist_enum_)))
#endif /* kcg_copy__3_P027V1_OBU_sectionl */

#ifndef kcg_copy_driverIdentifier_T_DMI
#define kcg_copy_driverIdentifier_T_DMI(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (driverIdentifier_T_DMI_Messages)))
#endif /* kcg_copy_driverIdentifier_T_DMI */

#ifndef kcg_copy_P041_OBU_sectionlist_e
#define kcg_copy_P041_OBU_sectionlist_e(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_e */

#ifndef kcg_copy_P021_OBU_sectionlist_e
#define kcg_copy_P021_OBU_sectionlist_e(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_e */

#ifndef kcg_copy_array_int_48
#define kcg_copy_array_int_48(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_48)))
#endif /* kcg_copy_array_int_48 */

#ifndef kcg_copy_array_98206
#define kcg_copy_array_98206(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_98206)))
#endif /* kcg_copy_array_98206 */

#ifndef kcg_copy_SSP_matrix_t_TA_MRSP
#define kcg_copy_SSP_matrix_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_matrix_t_TA_MRSP)))
#endif /* kcg_copy_SSP_matrix_t_TA_MRSP */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_P044_other_data_TM_Tra
#define kcg_copy_P044_other_data_TM_Tra(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P044_other_data_TM_TrainToTrack)))
#endif /* kcg_copy_P044_other_data_TM_Tra */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array_int_40
#define kcg_copy_array_int_40(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_40)))
#endif /* kcg_copy_array_int_40 */

#ifndef kcg_copy__50_DMI_Track_Descript
#define kcg_copy__50_DMI_Track_Descript(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_50_DMI_Track_Description_int_a)))
#endif /* kcg_copy__50_DMI_Track_Descript */

#ifndef kcg_copy_array_98282
#define kcg_copy_array_98282(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_98282)))
#endif /* kcg_copy_array_98282 */

#ifndef kcg_copy_array_98286
#define kcg_copy_array_98286(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_98286)))
#endif /* kcg_copy_array_98286 */

#ifndef kcg_copy_MetadataTruthtable_T1_
#define kcg_copy_MetadataTruthtable_T1_(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MetadataTruthtable_T1_CheckEuro)))
#endif /* kcg_copy_MetadataTruthtable_T1_ */

#ifndef kcg_copy_array_int_891
#define kcg_copy_array_int_891(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_891)))
#endif /* kcg_copy_array_int_891 */

#ifndef kcg_copy_aNID_RADIO_T_Packet_Tr
#define kcg_copy_aNID_RADIO_T_Packet_Tr(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (aNID_RADIO_T_Packet_TrainTypes_)))
#endif /* kcg_copy_aNID_RADIO_T_Packet_Tr */

#ifndef kcg_copy_ParabolaCurveValid_T_C
#define kcg_copy_ParabolaCurveValid_T_C(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ParabolaCurveValid_T_CalcBrakin)))
#endif /* kcg_copy_ParabolaCurveValid_T_C */

#ifndef kcg_copy_array_real_114
#define kcg_copy_array_real_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_114)))
#endif /* kcg_copy_array_real_114 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_28
#define kcg_copy_array_int_28(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_28)))
#endif /* kcg_copy_array_int_28 */

#ifndef kcg_copy_P005_sections_array_fl
#define kcg_copy_P005_sections_array_fl(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_sections_array_flat_T_TM)))
#endif /* kcg_copy_P005_sections_array_fl */

#ifndef kcg_copy_DMI_EVC_Level_Data_int
#define kcg_copy_DMI_EVC_Level_Data_int(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Level_Data_int_array_T_)))
#endif /* kcg_copy_DMI_EVC_Level_Data_int */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array_int_961
#define kcg_copy_array_int_961(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_961)))
#endif /* kcg_copy_array_int_961 */

#ifndef kcg_copy_DMI_trackConditionArra
#define kcg_copy_DMI_trackConditionArra(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_trackConditionArray_T_DMI_T)))
#endif /* kcg_copy_DMI_trackConditionArra */

#ifndef kcg_copy_SSPArray_T_Packet_Type
#define kcg_copy_SSPArray_T_Packet_Type(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSPArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSPArray_T_Packet_Type */

#ifndef kcg_copy_DiffArray_T_Packet_Typ
#define kcg_copy_DiffArray_T_Packet_Typ(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DiffArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_DiffArray_T_Packet_Typ */

#ifndef kcg_copy_P21_GradientProfiles_T
#define kcg_copy_P21_GradientProfiles_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P21_GradientProfiles_T_Packet_T)))
#endif /* kcg_copy_P21_GradientProfiles_T */

#ifndef kcg_copy_P63_ListofBalisesinSRA
#define kcg_copy_P63_ListofBalisesinSRA(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P63_ListofBalisesinSRAuthority_)))
#endif /* kcg_copy_P63_ListofBalisesinSRA */

#ifndef kcg_copy_nvkvintsetArray_T_Pack
#define kcg_copy_nvkvintsetArray_T_Pack(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkvintsetArray_T_Packet_Types_)))
#endif /* kcg_copy_nvkvintsetArray_T_Pack */

#ifndef kcg_copy_array_int_20
#define kcg_copy_array_int_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_20)))
#endif /* kcg_copy_array_int_20 */

#ifndef kcg_copy_array_99745
#define kcg_copy_array_99745(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_99745)))
#endif /* kcg_copy_array_99745 */

#ifndef kcg_copy_DMI_Text_Message_int_a
#define kcg_copy_DMI_Text_Message_int_a(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_int_array_T_DA)))
#endif /* kcg_copy_DMI_Text_Message_int_a */

#ifndef kcg_copy_LevelDecisionTableType
#define kcg_copy_LevelDecisionTableType(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LevelDecisionTableType_DataDict)))
#endif /* kcg_copy_LevelDecisionTableType */

#ifndef kcg_copy_array_99768
#define kcg_copy_array_99768(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_99768)))
#endif /* kcg_copy_array_99768 */

#ifndef kcg_copy_CompressedPacketData_T
#define kcg_copy_CompressedPacketData_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (CompressedPacketData_T_Common_T)))
#endif /* kcg_copy_CompressedPacketData_T */

#ifndef kcg_copy_array_99815
#define kcg_copy_array_99815(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_99815)))
#endif /* kcg_copy_array_99815 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_real_8
#define kcg_copy_array_real_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_8)))
#endif /* kcg_copy_array_real_8 */

#ifndef kcg_copy_array_int_129
#define kcg_copy_array_int_129(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_129)))
#endif /* kcg_copy_array_int_129 */

#ifdef kcg_use_P21_GradientProfile_T_P
#ifndef kcg_comp_P21_GradientProfile_T_
extern kcg_bool kcg_comp_P21_GradientProfile_T_(
  P21_GradientProfile_T_Packet_Ty *kcg_c1,
  P21_GradientProfile_T_Packet_Ty *kcg_c2);
#endif /* kcg_comp_P21_GradientProfile_T_ */
#endif /* kcg_use_P21_GradientProfile_T_P */

#ifdef kcg_use__24_DMI_Driver_Identifi
#ifndef kcg_comp__24_DMI_Driver_Identif
extern kcg_bool kcg_comp__24_DMI_Driver_Identif(
  _24_DMI_Driver_Identifier_T_DMI *kcg_c1,
  _24_DMI_Driver_Identifier_T_DMI *kcg_c2);
#endif /* kcg_comp__24_DMI_Driver_Identif */
#endif /* kcg_use__24_DMI_Driver_Identifi */

#ifdef kcg_use_DMI_Train_Data_Ack_T_DM
#ifndef kcg_comp_DMI_Train_Data_Ack_T_D
extern kcg_bool kcg_comp_DMI_Train_Data_Ack_T_D(
  DMI_Train_Data_Ack_T_DMI_Messag *kcg_c1,
  DMI_Train_Data_Ack_T_DMI_Messag *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_Ack_T_D */
#endif /* kcg_use_DMI_Train_Data_Ack_T_DM */

#ifdef kcg_use__25_DMI_EVC_Radio_Net_D
#ifndef kcg_comp__25_DMI_EVC_Radio_Net_
extern kcg_bool kcg_comp__25_DMI_EVC_Radio_Net_(
  _25_DMI_EVC_Radio_Net_Data_T_DM *kcg_c1,
  _25_DMI_EVC_Radio_Net_Data_T_DM *kcg_c2);
#endif /* kcg_comp__25_DMI_EVC_Radio_Net_ */
#endif /* kcg_use__25_DMI_EVC_Radio_Net_D */

#ifdef kcg_use_T_Data_From_Track_MASSP
#ifndef kcg_comp_T_Data_From_Track_MASS
extern kcg_bool kcg_comp_T_Data_From_Track_MASS(
  T_Data_From_Track_MASSPGradient *kcg_c1,
  T_Data_From_Track_MASSPGradient *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_MASS */
#endif /* kcg_use_T_Data_From_Track_MASSP */

#ifdef kcg_use_PT9_Level23_TransitionI
#ifndef kcg_comp_PT9_Level23_Transition
extern kcg_bool kcg_comp_PT9_Level23_Transition(
  PT9_Level23_TransitionInformati *kcg_c1,
  PT9_Level23_TransitionInformati *kcg_c2);
#endif /* kcg_comp_PT9_Level23_Transition */
#endif /* kcg_use_PT9_Level23_TransitionI */

#ifdef kcg_use_DataForSupervision_next
#ifndef kcg_comp_DataForSupervision_nex
extern kcg_bool kcg_comp_DataForSupervision_nex(
  DataForSupervision_nextGen_t_Tr *kcg_c1,
  DataForSupervision_nextGen_t_Tr *kcg_c2);
#endif /* kcg_comp_DataForSupervision_nex */
#endif /* kcg_use_DataForSupervision_next */

#ifdef kcg_use_P041_OBU_T_TM
#ifndef kcg_comp_P041_OBU_T_TM
extern kcg_bool kcg_comp_P041_OBU_T_TM(
  P041_OBU_T_TM *kcg_c1,
  P041_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_T_TM */
#endif /* kcg_use_P041_OBU_T_TM */

#ifdef kcg_use_P027V1_section_enum_T_T
#ifndef kcg_comp_P027V1_section_enum_T_
extern kcg_bool kcg_comp_P027V1_section_enum_T_(
  P027V1_section_enum_T_TM_baseli *kcg_c1,
  P027V1_section_enum_T_TM_baseli *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_T_ */
#endif /* kcg_use_P027V1_section_enum_T_T */

#ifdef kcg_use_P005_OBU_T_TM
#ifndef kcg_comp_P005_OBU_T_TM
extern kcg_bool kcg_comp_P005_OBU_T_TM(
  P005_OBU_T_TM *kcg_c1,
  P005_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_T_TM */
#endif /* kcg_use_P005_OBU_T_TM */

#ifdef kcg_use_P027V1_section_enum_qdi
#ifndef kcg_comp_P027V1_section_enum_qd
extern kcg_bool kcg_comp_P027V1_section_enum_qd(
  P027V1_section_enum_qdiff_T_TM_ *kcg_c1,
  P027V1_section_enum_qdiff_T_TM_ *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_qd */
#endif /* kcg_use_P027V1_section_enum_qdi */

#ifdef kcg_use_BG_find_T_CalculateTrai
#ifndef kcg_comp_BG_find_T_CalculateTra
extern kcg_bool kcg_comp_BG_find_T_CalculateTra(
  BG_find_T_CalculateTrainPositio *kcg_c1,
  BG_find_T_CalculateTrainPositio *kcg_c2);
#endif /* kcg_comp_BG_find_T_CalculateTra */
#endif /* kcg_use_BG_find_T_CalculateTrai */

#ifdef kcg_use_Endtimer_t_TrackAtlasTy
#ifndef kcg_comp_Endtimer_t_TrackAtlasT
extern kcg_bool kcg_comp_Endtimer_t_TrackAtlasT(
  Endtimer_t_TrackAtlasTypes *kcg_c1,
  Endtimer_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_Endtimer_t_TrackAtlasT */
#endif /* kcg_use_Endtimer_t_TrackAtlasTy */

#ifdef kcg_use_A_gradient_element_t_SD
#ifndef kcg_comp_A_gradient_element_t_S
extern kcg_bool kcg_comp_A_gradient_element_t_S(
  A_gradient_element_t_SDM_Gradie *kcg_c1,
  A_gradient_element_t_SDM_Gradie *kcg_c2);
#endif /* kcg_comp_A_gradient_element_t_S */
#endif /* kcg_use_A_gradient_element_t_SD */

#ifdef kcg_use_struct_96805
#ifndef kcg_comp_struct_96805
extern kcg_bool kcg_comp_struct_96805(
  struct_96805 *kcg_c1,
  struct_96805 *kcg_c2);
#endif /* kcg_comp_struct_96805 */
#endif /* kcg_use_struct_96805 */

#ifdef kcg_use_centerOfBalisePosition_
#ifndef kcg_comp_centerOfBalisePosition
extern kcg_bool kcg_comp_centerOfBalisePosition(
  centerOfBalisePosition_T_BG_Typ *kcg_c1,
  centerOfBalisePosition_T_BG_Typ *kcg_c2);
#endif /* kcg_comp_centerOfBalisePosition */
#endif /* kcg_use_centerOfBalisePosition_ */

#ifdef kcg_use_struct_96819
#ifndef kcg_comp_struct_96819
extern kcg_bool kcg_comp_struct_96819(
  struct_96819 *kcg_c1,
  struct_96819 *kcg_c2);
#endif /* kcg_comp_struct_96819 */
#endif /* kcg_use_struct_96819 */

#ifdef kcg_use_DMI_Driver_Request_T_DM
#ifndef kcg_comp_DMI_Driver_Request_T_D
extern kcg_bool kcg_comp_DMI_Driver_Request_T_D(
  DMI_Driver_Request_T_DMI_Messag *kcg_c1,
  DMI_Driver_Request_T_DMI_Messag *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Request_T_D */
#endif /* kcg_use_DMI_Driver_Request_T_DM */

#ifdef kcg_use_a_Brake_t_SDMConversion
#ifndef kcg_comp_a_Brake_t_SDMConversio
extern kcg_bool kcg_comp_a_Brake_t_SDMConversio(
  a_Brake_t_SDMConversionModelPkg *kcg_c1,
  a_Brake_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_a_Brake_t_SDMConversio */
#endif /* kcg_use_a_Brake_t_SDMConversion */

#ifndef kcg_comp_mobileRegistrationCont
extern kcg_bool kcg_comp_mobileRegistrationCont(
  mobileRegistrationContext_T_RCM *kcg_c1,
  mobileRegistrationContext_T_RCM *kcg_c2);
#define kcg_use_mobileRegistrationConte
#endif /* kcg_comp_mobileRegistrationCont */

#ifdef kcg_use_DMI_Menu_Request_T_DMI_
#ifndef kcg_comp_DMI_Menu_Request_T_DMI
extern kcg_bool kcg_comp_DMI_Menu_Request_T_DMI(
  DMI_Menu_Request_T_DMI_Messages *kcg_c1,
  DMI_Menu_Request_T_DMI_Messages *kcg_c2);
#endif /* kcg_comp_DMI_Menu_Request_T_DMI */
#endif /* kcg_use_DMI_Menu_Request_T_DMI_ */

#ifdef kcg_use_morcStatus_T_RCM_Sessio
#ifndef kcg_comp_morcStatus_T_RCM_Sessi
extern kcg_bool kcg_comp_morcStatus_T_RCM_Sessi(
  morcStatus_T_RCM_Session_Types_ *kcg_c1,
  morcStatus_T_RCM_Session_Types_ *kcg_c2);
#endif /* kcg_comp_morcStatus_T_RCM_Sessi */
#endif /* kcg_use_morcStatus_T_RCM_Sessio */

#ifdef kcg_use_m38_initiationOfACommun
#ifndef kcg_comp_m38_initiationOfACommu
extern kcg_bool kcg_comp_m38_initiationOfACommu(
  m38_initiationOfACommunicationS *kcg_c1,
  m38_initiationOfACommunicationS *kcg_c2);
#endif /* kcg_comp_m38_initiationOfACommu */
#endif /* kcg_use_m38_initiationOfACommun */

#ifdef kcg_use_struct_96876
#ifndef kcg_comp_struct_96876
extern kcg_bool kcg_comp_struct_96876(
  struct_96876 *kcg_c1,
  struct_96876 *kcg_c2);
#endif /* kcg_comp_struct_96876 */
#endif /* kcg_use_struct_96876 */

#ifdef kcg_use_DMI_System_Version_T_DM
#ifndef kcg_comp_DMI_System_Version_T_D
extern kcg_bool kcg_comp_DMI_System_Version_T_D(
  DMI_System_Version_T_DMI_Messag *kcg_c1,
  DMI_System_Version_T_DMI_Messag *kcg_c2);
#endif /* kcg_comp_DMI_System_Version_T_D */
#endif /* kcg_use_DMI_System_Version_T_DM */

#ifdef kcg_use_TrainLocations_real_T_S
#ifndef kcg_comp_TrainLocations_real_T_
extern kcg_bool kcg_comp_TrainLocations_real_T_(
  TrainLocations_real_T_SDM_Types *kcg_c1,
  TrainLocations_real_T_SDM_Types *kcg_c2);
#endif /* kcg_comp_TrainLocations_real_T_ */
#endif /* kcg_use_TrainLocations_real_T_S */

#ifdef kcg_use_M_132_T_TM_radio_messag
#ifndef kcg_comp_M_132_T_TM_radio_messa
extern kcg_bool kcg_comp_M_132_T_TM_radio_messa(
  M_132_T_TM_radio_messages *kcg_c1,
  M_132_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_132_T_TM_radio_messa */
#endif /* kcg_use_M_132_T_TM_radio_messag */

#ifdef kcg_use__23_DMI_Train_Running_N
#ifndef kcg_comp__23_DMI_Train_Running_
extern kcg_bool kcg_comp__23_DMI_Train_Running_(
  _23_DMI_Train_Running_Number_T_ *kcg_c1,
  _23_DMI_Train_Running_Number_T_ *kcg_c2);
#endif /* kcg_comp__23_DMI_Train_Running_ */
#endif /* kcg_use__23_DMI_Train_Running_N */

#ifdef kcg_use_mv_Map_t_SDMConversionM
#ifndef kcg_comp_mv_Map_t_SDMConversion
extern kcg_bool kcg_comp_mv_Map_t_SDMConversion(
  mv_Map_t_SDMConversionModelPkg *kcg_c1,
  mv_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_mv_Map_t_SDMConversion */
#endif /* kcg_use_mv_Map_t_SDMConversionM */

#ifdef kcg_use_DMI_trackConditionEleme
#ifndef kcg_comp_DMI_trackConditionElem
extern kcg_bool kcg_comp_DMI_trackConditionElem(
  DMI_trackConditionElement_T_DMI *kcg_c1,
  DMI_trackConditionElement_T_DMI *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionElem */
#endif /* kcg_use_DMI_trackConditionEleme */

#ifdef kcg_use_sNID_RADIO_T_Packet_Tra
#ifndef kcg_comp_sNID_RADIO_T_Packet_Tr
extern kcg_bool kcg_comp_sNID_RADIO_T_Packet_Tr(
  sNID_RADIO_T_Packet_TrainTypes_ *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_ *kcg_c2);
#endif /* kcg_comp_sNID_RADIO_T_Packet_Tr */
#endif /* kcg_use_sNID_RADIO_T_Packet_Tra */

#ifndef kcg_comp_MetadataElement_T_Comm
extern kcg_bool kcg_comp_MetadataElement_T_Comm(
  MetadataElement_T_Common_Types_ *kcg_c1,
  MetadataElement_T_Common_Types_ *kcg_c2);
#define kcg_use_MetadataElement_T_Commo
#endif /* kcg_comp_MetadataElement_T_Comm */

#ifdef kcg_use_Brake_inhibition_comman
#ifndef kcg_comp_Brake_inhibition_comma
extern kcg_bool kcg_comp_Brake_inhibition_comma(
  Brake_inhibition_command_T_TIU_ *kcg_c1,
  Brake_inhibition_command_T_TIU_ *kcg_c2);
#endif /* kcg_comp_Brake_inhibition_comma */
#endif /* kcg_use_Brake_inhibition_comman */

#ifdef kcg_use_struct_96969
#ifndef kcg_comp_struct_96969
extern kcg_bool kcg_comp_struct_96969(
  struct_96969 *kcg_c1,
  struct_96969 *kcg_c2);
#endif /* kcg_comp_struct_96969 */
#endif /* kcg_use_struct_96969 */

#ifdef kcg_use_T_Data_From_Localisatio
#ifndef kcg_comp_T_Data_From_Localisati
extern kcg_bool kcg_comp_T_Data_From_Localisati(
  T_Data_From_Localisation_Level_ *kcg_c1,
  T_Data_From_Localisation_Level_ *kcg_c2);
#endif /* kcg_comp_T_Data_From_Localisati */
#endif /* kcg_use_T_Data_From_Localisatio */

#ifdef kcg_use_DMI_DriverRequest_T_DMI
#ifndef kcg_comp_DMI_DriverRequest_T_DM
extern kcg_bool kcg_comp_DMI_DriverRequest_T_DM(
  DMI_DriverRequest_T_DMI_Types_P *kcg_c1,
  DMI_DriverRequest_T_DMI_Types_P *kcg_c2);
#endif /* kcg_comp_DMI_DriverRequest_T_DM */
#endif /* kcg_use_DMI_DriverRequest_T_DMI */

#ifndef kcg_comp_mobileConnectionContex
extern kcg_bool kcg_comp_mobileConnectionContex(
  mobileConnectionContext_T_RCM_T *kcg_c1,
  mobileConnectionContext_T_RCM_T *kcg_c2);
#define kcg_use_mobileConnectionContext
#endif /* kcg_comp_mobileConnectionContex */

#ifdef kcg_use__26_DMI_Identifier_Requ
#ifndef kcg_comp__26_DMI_Identifier_Req
extern kcg_bool kcg_comp__26_DMI_Identifier_Req(
  _26_DMI_Identifier_Request_T_DM *kcg_c1,
  _26_DMI_Identifier_Request_T_DM *kcg_c2);
#endif /* kcg_comp__26_DMI_Identifier_Req */
#endif /* kcg_use__26_DMI_Identifier_Requ */

#ifdef kcg_use_trainDataStatus_T_train
#ifndef kcg_comp_trainDataStatus_T_trai
extern kcg_bool kcg_comp_trainDataStatus_T_trai(
  trainDataStatus_T_trainData_Typ *kcg_c1,
  trainDataStatus_T_trainData_Typ *kcg_c2);
#endif /* kcg_comp_trainDataStatus_T_trai */
#endif /* kcg_use_trainDataStatus_T_train */

#ifdef kcg_use_P41_LevelTransitionOrde
#ifndef kcg_comp_P41_LevelTransitionOrd
extern kcg_bool kcg_comp_P41_LevelTransitionOrd(
  P41_LevelTransitionOrder_T_Pack *kcg_c1,
  P41_LevelTransitionOrder_T_Pack *kcg_c2);
#endif /* kcg_comp_P41_LevelTransitionOrd */
#endif /* kcg_use_P41_LevelTransitionOrde */

#ifdef kcg_use_T_trac_t_TargetLimits_P
#ifndef kcg_comp_T_trac_t_TargetLimits_
extern kcg_bool kcg_comp_T_trac_t_TargetLimits_(
  T_trac_t_TargetLimits_Pkg *kcg_c1,
  T_trac_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_T_trac_t_TargetLimits_ */
#endif /* kcg_use_T_trac_t_TargetLimits_P */

#ifdef kcg_use_P137_StopIfInStaffRespo
#ifndef kcg_comp_P137_StopIfInStaffResp
extern kcg_bool kcg_comp_P137_StopIfInStaffResp(
  P137_StopIfInStaffResponsible_T *kcg_c1,
  P137_StopIfInStaffResponsible_T *kcg_c2);
#endif /* kcg_comp_P137_StopIfInStaffResp */
#endif /* kcg_use_P137_StopIfInStaffRespo */

#ifdef kcg_use_TIU_commandStatus_T_TIU
#ifndef kcg_comp_TIU_commandStatus_T_TI
extern kcg_bool kcg_comp_TIU_commandStatus_T_TI(
  TIU_commandStatus_T_TIU_Types_P *kcg_c1,
  TIU_commandStatus_T_TIU_Types_P *kcg_c2);
#endif /* kcg_comp_TIU_commandStatus_T_TI */
#endif /* kcg_use_TIU_commandStatus_T_TIU */

#ifdef kcg_use_P046_section_enum_T_TM
#ifndef kcg_comp_P046_section_enum_T_TM
extern kcg_bool kcg_comp_P046_section_enum_T_TM(
  P046_section_enum_T_TM *kcg_c1,
  P046_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_section_enum_T_TM */
#endif /* kcg_use_P046_section_enum_T_TM */

#ifdef kcg_use_DMI_To_Modes_T_DMI_Type
#ifndef kcg_comp_DMI_To_Modes_T_DMI_Typ
extern kcg_bool kcg_comp_DMI_To_Modes_T_DMI_Typ(
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c1,
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_To_Modes_T_DMI_Typ */
#endif /* kcg_use_DMI_To_Modes_T_DMI_Type */

#ifdef kcg_use_NID_EM_Store_Item_T_TA_
#ifndef kcg_comp_NID_EM_Store_Item_T_TA
extern kcg_bool kcg_comp_NID_EM_Store_Item_T_TA(
  NID_EM_Store_Item_T_TA_Emergenc *kcg_c1,
  NID_EM_Store_Item_T_TA_Emergenc *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_Item_T_TA */
#endif /* kcg_use_NID_EM_Store_Item_T_TA_ */

#ifdef kcg_use_positionedBGs_w_overrun
#ifndef kcg_comp_positionedBGs_w_overru
extern kcg_bool kcg_comp_positionedBGs_w_overru(
  positionedBGs_w_overrun_T_Calcu *kcg_c1,
  positionedBGs_w_overrun_T_Calcu *kcg_c2);
#endif /* kcg_comp_positionedBGs_w_overru */
#endif /* kcg_use_positionedBGs_w_overrun */

#ifdef kcg_use_T_Data_From_Speed_Super
#ifndef kcg_comp_T_Data_From_Speed_Supe
extern kcg_bool kcg_comp_T_Data_From_Speed_Supe(
  T_Data_From_Speed_Supervision_L *kcg_c1,
  T_Data_From_Speed_Supervision_L *kcg_c2);
#endif /* kcg_comp_T_Data_From_Speed_Supe */
#endif /* kcg_use_T_Data_From_Speed_Super */

#ifdef kcg_use_Target_real_T_TargetMan
#ifndef kcg_comp_Target_real_T_TargetMa
extern kcg_bool kcg_comp_Target_real_T_TargetMa(
  Target_real_T_TargetManagement_ *kcg_c1,
  Target_real_T_TargetManagement_ *kcg_c2);
#endif /* kcg_comp_Target_real_T_TargetMa */
#endif /* kcg_use_Target_real_T_TargetMan */

#ifdef kcg_use_RadioManagement_T_API_R
#ifndef kcg_comp_RadioManagement_T_API_
extern kcg_bool kcg_comp_RadioManagement_T_API_(
  RadioManagement_T_API_RadioComm *kcg_c1,
  RadioManagement_T_API_RadioComm *kcg_c2);
#endif /* kcg_comp_RadioManagement_T_API_ */
#endif /* kcg_use_RadioManagement_T_API_R */

#ifdef kcg_use_DMI_Icon_Ack_T_DMI_Mess
#ifndef kcg_comp_DMI_Icon_Ack_T_DMI_Mes
extern kcg_bool kcg_comp_DMI_Icon_Ack_T_DMI_Mes(
  DMI_Icon_Ack_T_DMI_Messages_DMI *kcg_c1,
  DMI_Icon_Ack_T_DMI_Messages_DMI *kcg_c2);
#endif /* kcg_comp_DMI_Icon_Ack_T_DMI_Mes */
#endif /* kcg_use_DMI_Icon_Ack_T_DMI_Mess */

#ifdef kcg_use_T_Data_From_Track_Mess_
#ifndef kcg_comp_T_Data_From_Track_Mess
extern kcg_bool kcg_comp_T_Data_From_Track_Mess(
  T_Data_From_Track_Mess_Level_An *kcg_c1,
  T_Data_From_Track_Mess_Level_An *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Mess */
#endif /* kcg_use_T_Data_From_Track_Mess_ */

#ifdef kcg_use_T_Data_To_BG_Management
#ifndef kcg_comp_T_Data_To_BG_Managemen
extern kcg_bool kcg_comp_T_Data_To_BG_Managemen(
  T_Data_To_BG_Management_Level_A *kcg_c1,
  T_Data_To_BG_Management_Level_A *kcg_c2);
#endif /* kcg_comp_T_Data_To_BG_Managemen */
#endif /* kcg_use_T_Data_To_BG_Management */

#ifdef kcg_use_m32_RBC_RIU_SystemVersi
#ifndef kcg_comp_m32_RBC_RIU_SystemVers
extern kcg_bool kcg_comp_m32_RBC_RIU_SystemVers(
  m32_RBC_RIU_SystemVersion_T_RCM *kcg_c1,
  m32_RBC_RIU_SystemVersion_T_RCM *kcg_c2);
#endif /* kcg_comp_m32_RBC_RIU_SystemVers */
#endif /* kcg_use_m32_RBC_RIU_SystemVersi */

#ifdef kcg_use_T_LevelTansitionInfo_Le
#ifndef kcg_comp_T_LevelTansitionInfo_L
extern kcg_bool kcg_comp_T_LevelTansitionInfo_L(
  T_LevelTansitionInfo_Level_And_ *kcg_c1,
  T_LevelTansitionInfo_Level_And_ *kcg_c2);
#endif /* kcg_comp_T_LevelTansitionInfo_L */
#endif /* kcg_use_T_LevelTansitionInfo_Le */

#ifdef kcg_use_BG_Message_T_BG_Types_P
#ifndef kcg_comp_BG_Message_T_BG_Types_
extern kcg_bool kcg_comp_BG_Message_T_BG_Types_(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_BG_Message_T_BG_Types_ */
#endif /* kcg_use_BG_Message_T_BG_Types_P */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
#ifndef kcg_comp_Telegram_T_BG_Types_Pk
extern kcg_bool kcg_comp_Telegram_T_BG_Types_Pk(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Telegram_T_BG_Types_Pk */
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_ps_dataForStartOfMissio
#ifndef kcg_comp_ps_dataForStartOfMissi
extern kcg_bool kcg_comp_ps_dataForStartOfMissi(
  ps_dataForStartOfMission_T_API_ *kcg_c1,
  ps_dataForStartOfMission_T_API_ *kcg_c2);
#endif /* kcg_comp_ps_dataForStartOfMissi */
#endif /* kcg_use_ps_dataForStartOfMissio */

#ifdef kcg_use_DMI_Radio_Net_Data_T_DM
#ifndef kcg_comp_DMI_Radio_Net_Data_T_D
extern kcg_bool kcg_comp_DMI_Radio_Net_Data_T_D(
  DMI_Radio_Net_Data_T_DMI_Messag *kcg_c1,
  DMI_Radio_Net_Data_T_DMI_Messag *kcg_c2);
#endif /* kcg_comp_DMI_Radio_Net_Data_T_D */
#endif /* kcg_use_DMI_Radio_Net_Data_T_DM */

#ifdef kcg_use_ParabolaArc_T_CalcBraki
#ifndef kcg_comp_ParabolaArc_T_CalcBrak
extern kcg_bool kcg_comp_ParabolaArc_T_CalcBrak(
  ParabolaArc_T_CalcBrakingCurves *kcg_c1,
  ParabolaArc_T_CalcBrakingCurves *kcg_c2);
#endif /* kcg_comp_ParabolaArc_T_CalcBrak */
#endif /* kcg_use_ParabolaArc_T_CalcBraki */

#ifdef kcg_use_DMI_train_length_T_DMI_
#ifndef kcg_comp_DMI_train_length_T_DMI
extern kcg_bool kcg_comp_DMI_train_length_T_DMI(
  DMI_train_length_T_DMI_Types_Pk *kcg_c1,
  DMI_train_length_T_DMI_Types_Pk *kcg_c2);
#endif /* kcg_comp_DMI_train_length_T_DMI */
#endif /* kcg_use_DMI_train_length_T_DMI_ */

#ifdef kcg_use_TargetCollection_T_Targ
#ifndef kcg_comp_TargetCollection_T_Tar
extern kcg_bool kcg_comp_TargetCollection_T_Tar(
  TargetCollection_T_TargetManage *kcg_c1,
  TargetCollection_T_TargetManage *kcg_c2);
#endif /* kcg_comp_TargetCollection_T_Tar */
#endif /* kcg_use_TargetCollection_T_Targ */

#ifdef kcg_use_probesBalises_T_xdebugS
#ifndef kcg_comp_probesBalises_T_xdebug
extern kcg_bool kcg_comp_probesBalises_T_xdebug(
  probesBalises_T_xdebugSupport_P *kcg_c1,
  probesBalises_T_xdebugSupport_P *kcg_c2);
#endif /* kcg_comp_probesBalises_T_xdebug */
#endif /* kcg_use_probesBalises_T_xdebugS */

#ifdef kcg_use__22_DMI_Adhesion_Factor
#ifndef kcg_comp__22_DMI_Adhesion_Facto
extern kcg_bool kcg_comp__22_DMI_Adhesion_Facto(
  _22_DMI_Adhesion_Factor_Data_T_ *kcg_c1,
  _22_DMI_Adhesion_Factor_Data_T_ *kcg_c2);
#endif /* kcg_comp__22_DMI_Adhesion_Facto */
#endif /* kcg_use__22_DMI_Adhesion_Factor */

#ifdef kcg_use_T_Data_From_Track_To_Le
#ifndef kcg_comp_T_Data_From_Track_To_L
extern kcg_bool kcg_comp_T_Data_From_Track_To_L(
  T_Data_From_Track_To_Level_Leve *kcg_c1,
  T_Data_From_Track_To_Level_Leve *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_L */
#endif /* kcg_use_T_Data_From_Track_To_Le */

#ifdef kcg_use_nationValuesForDMI_T_DM
#ifndef kcg_comp_nationValuesForDMI_T_D
extern kcg_bool kcg_comp_nationValuesForDMI_T_D(
  nationValuesForDMI_T_DMI_Types_ *kcg_c1,
  nationValuesForDMI_T_DMI_Types_ *kcg_c2);
#endif /* kcg_comp_nationValuesForDMI_T_D */
#endif /* kcg_use_nationValuesForDMI_T_DM */

#ifdef kcg_use_DMI_Text_Message_Ack_T_
#ifndef kcg_comp_DMI_Text_Message_Ack_T
extern kcg_bool kcg_comp_DMI_Text_Message_Ack_T(
  DMI_Text_Message_Ack_T_DMI_Mess *kcg_c1,
  DMI_Text_Message_Ack_T_DMI_Mess *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_Ack_T */
#endif /* kcg_use_DMI_Text_Message_Ack_T_ */

#ifdef kcg_use_Target_T_TargetManageme
#ifndef kcg_comp_Target_T_TargetManagem
extern kcg_bool kcg_comp_Target_T_TargetManagem(
  Target_T_TargetManagement_types *kcg_c1,
  Target_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_T_TargetManagem */
#endif /* kcg_use_Target_T_TargetManageme */

#ifdef kcg_use_DMI_Status_T_DMI_Messag
#ifndef kcg_comp_DMI_Status_T_DMI_Messa
extern kcg_bool kcg_comp_DMI_Status_T_DMI_Messa(
  DMI_Status_T_DMI_Messages_DMI_t *kcg_c1,
  DMI_Status_T_DMI_Messages_DMI_t *kcg_c2);
#endif /* kcg_comp_DMI_Status_T_DMI_Messa */
#endif /* kcg_use_DMI_Status_T_DMI_Messag */

#ifdef kcg_use_T_AcknoledgementRequest
#ifndef kcg_comp_T_AcknoledgementReques
extern kcg_bool kcg_comp_T_AcknoledgementReques(
  T_AcknoledgementRequest_Level_A *kcg_c1,
  T_AcknoledgementRequest_Level_A *kcg_c2);
#endif /* kcg_comp_T_AcknoledgementReques */
#endif /* kcg_use_T_AcknoledgementRequest */

#ifndef kcg_comp_passedBG_T_BG_Types_Pk
extern kcg_bool kcg_comp_passedBG_T_BG_Types_Pk(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_passedBG_T_BG_Types_Pkg
#endif /* kcg_comp_passedBG_T_BG_Types_Pk */

#ifdef kcg_use_trainData_Events_T_trai
#ifndef kcg_comp_trainData_Events_T_tra
extern kcg_bool kcg_comp_trainData_Events_T_tra(
  trainData_Events_T_trainData_Ty *kcg_c1,
  trainData_Events_T_trainData_Ty *kcg_c2);
#endif /* kcg_comp_trainData_Events_T_tra */
#endif /* kcg_use_trainData_Events_T_trai */

#ifdef kcg_use_struct_97368
#ifndef kcg_comp_struct_97368
extern kcg_bool kcg_comp_struct_97368(
  struct_97368 *kcg_c1,
  struct_97368 *kcg_c2);
#endif /* kcg_comp_struct_97368 */
#endif /* kcg_use_struct_97368 */

#ifdef kcg_use_IterPacket58_T_Packet_T
#ifndef kcg_comp_IterPacket58_T_Packet_
extern kcg_bool kcg_comp_IterPacket58_T_Packet_(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58_T_Packet_ */
#endif /* kcg_use_IterPacket58_T_Packet_T */

#ifdef kcg_use_struct_97386
#ifndef kcg_comp_struct_97386
extern kcg_bool kcg_comp_struct_97386(
  struct_97386 *kcg_c1,
  struct_97386 *kcg_c2);
#endif /* kcg_comp_struct_97386 */
#endif /* kcg_use_struct_97386 */

#ifdef kcg_use_DP_or_OL_t_TrackAtlasTy
#ifndef kcg_comp_DP_or_OL_t_TrackAtlasT
extern kcg_bool kcg_comp_DP_or_OL_t_TrackAtlasT(
  DP_or_OL_t_TrackAtlasTypes *kcg_c1,
  DP_or_OL_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DP_or_OL_t_TrackAtlasT */
#endif /* kcg_use_DP_or_OL_t_TrackAtlasTy */

#ifdef kcg_use_P46_ConditionalLevelTra
#ifndef kcg_comp_P46_ConditionalLevelTr
extern kcg_bool kcg_comp_P46_ConditionalLevelTr(
  P46_ConditionalLevelTransitionO *kcg_c1,
  P46_ConditionalLevelTransitionO *kcg_c2);
#endif /* kcg_comp_P46_ConditionalLevelTr */
#endif /* kcg_use_P46_ConditionalLevelTra */

#ifdef kcg_use_Diff_T_Packet_Types_Pkg
#ifndef kcg_comp_Diff_T_Packet_Types_Pk
extern kcg_bool kcg_comp_Diff_T_Packet_Types_Pk(
  Diff_T_Packet_Types_Pkg *kcg_c1,
  Diff_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Diff_T_Packet_Types_Pk */
#endif /* kcg_use_Diff_T_Packet_Types_Pkg */

#ifdef kcg_use_av_MergedMap_t_SDMConve
#ifndef kcg_comp_av_MergedMap_t_SDMConv
extern kcg_bool kcg_comp_av_MergedMap_t_SDMConv(
  av_MergedMap_t_SDMConversionMod *kcg_c1,
  av_MergedMap_t_SDMConversionMod *kcg_c2);
#endif /* kcg_comp_av_MergedMap_t_SDMConv */
#endif /* kcg_use_av_MergedMap_t_SDMConve */

#ifndef kcg_comp_CompressedPackets_T_Co
extern kcg_bool kcg_comp_CompressedPackets_T_Co(
  CompressedPackets_T_Common_Type *kcg_c1,
  CompressedPackets_T_Common_Type *kcg_c2);
#define kcg_use_CompressedPackets_T_Com
#endif /* kcg_comp_CompressedPackets_T_Co */

#ifdef kcg_use_msgToTrackTriggers_T_RC
#ifndef kcg_comp_msgToTrackTriggers_T_R
extern kcg_bool kcg_comp_msgToTrackTriggers_T_R(
  msgToTrackTriggers_T_RCM_MsgTyp *kcg_c1,
  msgToTrackTriggers_T_RCM_MsgTyp *kcg_c2);
#endif /* kcg_comp_msgToTrackTriggers_T_R */
#endif /* kcg_use_msgToTrackTriggers_T_RC */

#ifdef kcg_use_Gradient_section_real_t
#ifndef kcg_comp_Gradient_section_real_
extern kcg_bool kcg_comp_Gradient_section_real_(
  Gradient_section_real_t_SDM_Gra *kcg_c1,
  Gradient_section_real_t_SDM_Gra *kcg_c2);
#endif /* kcg_comp_Gradient_section_real_ */
#endif /* kcg_use_Gradient_section_real_t */

#ifdef kcg_use_struct_97455
#ifndef kcg_comp_struct_97455
extern kcg_bool kcg_comp_struct_97455(
  struct_97455 *kcg_c1,
  struct_97455 *kcg_c2);
#endif /* kcg_comp_struct_97455 */
#endif /* kcg_use_struct_97455 */

#ifdef kcg_use_struct_97464
#ifndef kcg_comp_struct_97464
extern kcg_bool kcg_comp_struct_97464(
  struct_97464 *kcg_c1,
  struct_97464 *kcg_c2);
#endif /* kcg_comp_struct_97464 */
#endif /* kcg_use_struct_97464 */

#ifdef kcg_use_connection_ids_T_Handov
#ifndef kcg_comp_connection_ids_T_Hando
extern kcg_bool kcg_comp_connection_ids_T_Hando(
  connection_ids_T_Handover_Pkg *kcg_c1,
  connection_ids_T_Handover_Pkg *kcg_c2);
#endif /* kcg_comp_connection_ids_T_Hando */
#endif /* kcg_use_connection_ids_T_Handov */

#ifdef kcg_use_nothing_to_resume_profi
#ifndef kcg_comp_nothing_to_resume_prof
extern kcg_bool kcg_comp_nothing_to_resume_prof(
  nothing_to_resume_profile_follo *kcg_c1,
  nothing_to_resume_profile_follo *kcg_c2);
#endif /* kcg_comp_nothing_to_resume_prof */
#endif /* kcg_use_nothing_to_resume_profi */

#ifdef kcg_use_TrainToTrackStatus_T_BG
#ifndef kcg_comp_TrainToTrackStatus_T_B
extern kcg_bool kcg_comp_TrainToTrackStatus_T_B(
  TrainToTrackStatus_T_BG_Types_P *kcg_c1,
  TrainToTrackStatus_T_BG_Types_P *kcg_c2);
#endif /* kcg_comp_TrainToTrackStatus_T_B */
#endif /* kcg_use_TrainToTrackStatus_T_BG */

#ifdef kcg_use_linkedBG_index_T_Calcul
#ifndef kcg_comp_linkedBG_index_T_Calcu
extern kcg_bool kcg_comp_linkedBG_index_T_Calcu(
  linkedBG_index_T_CalculateTrain *kcg_c1,
  linkedBG_index_T_CalculateTrain *kcg_c2);
#endif /* kcg_comp_linkedBG_index_T_Calcu */
#endif /* kcg_use_linkedBG_index_T_Calcul */

#ifdef kcg_use_struct_97530
#ifndef kcg_comp_struct_97530
extern kcg_bool kcg_comp_struct_97530(
  struct_97530 *kcg_c1,
  struct_97530 *kcg_c2);
#endif /* kcg_comp_struct_97530 */
#endif /* kcg_use_struct_97530 */

#ifdef kcg_use_CurveCollection_T_CalcB
#ifndef kcg_comp_CurveCollection_T_Calc
extern kcg_bool kcg_comp_CurveCollection_T_Calc(
  CurveCollection_T_CalcBrakingCu *kcg_c1,
  CurveCollection_T_CalcBrakingCu *kcg_c2);
#endif /* kcg_comp_CurveCollection_T_Calc */
#endif /* kcg_use_CurveCollection_T_CalcB */

#ifdef kcg_use_SSP_section_t_TA_MRSP
#ifndef kcg_comp_SSP_section_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_section_t_TA_MRSP(
  SSP_section_t_TA_MRSP *kcg_c1,
  SSP_section_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_section_t_TA_MRSP */
#endif /* kcg_use_SSP_section_t_TA_MRSP */

#ifdef kcg_use_mobileRegistrationCmd_T
#ifndef kcg_comp_mobileRegistrationCmd_
extern kcg_bool kcg_comp_mobileRegistrationCmd_(
  mobileRegistrationCmd_T_RCM_Typ *kcg_c1,
  mobileRegistrationCmd_T_RCM_Typ *kcg_c2);
#endif /* kcg_comp_mobileRegistrationCmd_ */
#endif /* kcg_use_mobileRegistrationCmd_T */

#ifdef kcg_use_T_AnnouncedLevel_Level_
#ifndef kcg_comp_T_AnnouncedLevel_Level
extern kcg_bool kcg_comp_T_AnnouncedLevel_Level(
  T_AnnouncedLevel_Level_And_Mode *kcg_c1,
  T_AnnouncedLevel_Level_And_Mode *kcg_c2);
#endif /* kcg_comp_T_AnnouncedLevel_Level */
#endif /* kcg_use_T_AnnouncedLevel_Level_ */

#ifdef kcg_use_T_Data_From_STM_Level_A
#ifndef kcg_comp_T_Data_From_STM_Level_
extern kcg_bool kcg_comp_T_Data_From_STM_Level_(
  T_Data_From_STM_Level_And_Mode_ *kcg_c1,
  T_Data_From_STM_Level_And_Mode_ *kcg_c2);
#endif /* kcg_comp_T_Data_From_STM_Level_ */
#endif /* kcg_use_T_Data_From_STM_Level_A */

#ifdef kcg_use_AccuDistanceProfileMA_T
#ifndef kcg_comp_AccuDistanceProfileMA_
extern kcg_bool kcg_comp_AccuDistanceProfileMA_(
  AccuDistanceProfileMA_TA_MA *kcg_c1,
  AccuDistanceProfileMA_TA_MA *kcg_c2);
#endif /* kcg_comp_AccuDistanceProfileMA_ */
#endif /* kcg_use_AccuDistanceProfileMA_T */

#ifdef kcg_use_extractTargetsMRSPACC_T
#ifndef kcg_comp_extractTargetsMRSPACC_
extern kcg_bool kcg_comp_extractTargetsMRSPACC_(
  extractTargetsMRSPACC_TargetMan *kcg_c1,
  extractTargetsMRSPACC_TargetMan *kcg_c2);
#endif /* kcg_comp_extractTargetsMRSPACC_ */
#endif /* kcg_use_extractTargetsMRSPACC_T */

#ifdef kcg_use_P041_section_enum_T_TM
#ifndef kcg_comp_P041_section_enum_T_TM
extern kcg_bool kcg_comp_P041_section_enum_T_TM(
  P041_section_enum_T_TM *kcg_c1,
  P041_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_enum_T_TM */
#endif /* kcg_use_P041_section_enum_T_TM */

#ifdef kcg_use_P57_MovementAuthorityRe
#ifndef kcg_comp_P57_MovementAuthorityR
extern kcg_bool kcg_comp_P57_MovementAuthorityR(
  P57_MovementAuthorityRequestPar *kcg_c1,
  P57_MovementAuthorityRequestPar *kcg_c2);
#endif /* kcg_comp_P57_MovementAuthorityR */
#endif /* kcg_use_P57_MovementAuthorityRe */

#ifdef kcg_use_struct_97648
#ifndef kcg_comp_struct_97648
extern kcg_bool kcg_comp_struct_97648(
  struct_97648 *kcg_c1,
  struct_97648 *kcg_c2);
#endif /* kcg_comp_struct_97648 */
#endif /* kcg_use_struct_97648 */

#ifdef kcg_use_nvkvint_T_Packet_Types_
#ifndef kcg_comp_nvkvint_T_Packet_Types
extern kcg_bool kcg_comp_nvkvint_T_Packet_Types(
  nvkvint_T_Packet_Types_Pkg *kcg_c1,
  nvkvint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvint_T_Packet_Types */
#endif /* kcg_use_nvkvint_T_Packet_Types_ */

#ifdef kcg_use_struct_97663
#ifndef kcg_comp_struct_97663
extern kcg_bool kcg_comp_struct_97663(
  struct_97663 *kcg_c1,
  struct_97663 *kcg_c2);
#endif /* kcg_comp_struct_97663 */
#endif /* kcg_use_struct_97663 */

#ifdef kcg_use_DMI_Entry_Request_T_DMI
#ifndef kcg_comp_DMI_Entry_Request_T_DM
extern kcg_bool kcg_comp_DMI_Entry_Request_T_DM(
  DMI_Entry_Request_T_DMI_Message *kcg_c1,
  DMI_Entry_Request_T_DMI_Message *kcg_c2);
#endif /* kcg_comp_DMI_Entry_Request_T_DM */
#endif /* kcg_use_DMI_Entry_Request_T_DMI */

#ifdef kcg_use_P046_OBU_T_TM
#ifndef kcg_comp_P046_OBU_T_TM
extern kcg_bool kcg_comp_P046_OBU_T_TM(
  P046_OBU_T_TM *kcg_c1,
  P046_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_T_TM */
#endif /* kcg_use_P046_OBU_T_TM */

#ifdef kcg_use_P027V1_OBU_T_TM_baselin
#ifndef kcg_comp_P027V1_OBU_T_TM_baseli
extern kcg_bool kcg_comp_P027V1_OBU_T_TM_baseli(
  P027V1_OBU_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_T_TM_baseli */
#endif /* kcg_use_P027V1_OBU_T_TM_baselin */

#ifdef kcg_use_Brake_status_T_TIU_Type
#ifndef kcg_comp_Brake_status_T_TIU_Typ
extern kcg_bool kcg_comp_Brake_status_T_TIU_Typ(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_status_T_TIU_Typ */
#endif /* kcg_use_Brake_status_T_TIU_Type */

#ifdef kcg_use_bec_t_TargetLimits_Pkg
#ifndef kcg_comp_bec_t_TargetLimits_Pkg
extern kcg_bool kcg_comp_bec_t_TargetLimits_Pkg(
  bec_t_TargetLimits_Pkg *kcg_c1,
  bec_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_bec_t_TargetLimits_Pkg */
#endif /* kcg_use_bec_t_TargetLimits_Pkg */

#ifdef kcg_use_BG_counters_T_Calculate
#ifndef kcg_comp_BG_counters_T_Calculat
extern kcg_bool kcg_comp_BG_counters_T_Calculat(
  BG_counters_T_CalculateTrainPos *kcg_c1,
  BG_counters_T_CalculateTrainPos *kcg_c2);
#endif /* kcg_comp_BG_counters_T_Calculat */
#endif /* kcg_use_BG_counters_T_Calculate */

#ifdef kcg_use_mobileHWStatus_Type_MoR
#ifndef kcg_comp_mobileHWStatus_Type_Mo
extern kcg_bool kcg_comp_mobileHWStatus_Type_Mo(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_mobileHWStatus_Type_Mo */
#endif /* kcg_use_mobileHWStatus_Type_MoR */

#ifdef kcg_use_TIU_trainStatus_T_TIU_T
#ifndef kcg_comp_TIU_trainStatus_T_TIU_
extern kcg_bool kcg_comp_TIU_trainStatus_T_TIU_(
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_trainStatus_T_TIU_ */
#endif /* kcg_use_TIU_trainStatus_T_TIU_T */

#ifdef kcg_use_DMI_level_T_DMI_Types_P
#ifndef kcg_comp_DMI_level_T_DMI_Types_
extern kcg_bool kcg_comp_DMI_level_T_DMI_Types_(
  DMI_level_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_T_DMI_Types_ */
#endif /* kcg_use_DMI_level_T_DMI_Types_P */

#ifdef kcg_use_struct_97749
#ifndef kcg_comp_struct_97749
extern kcg_bool kcg_comp_struct_97749(
  struct_97749 *kcg_c1,
  struct_97749 *kcg_c2);
#endif /* kcg_comp_struct_97749 */
#endif /* kcg_use_struct_97749 */

#ifdef kcg_use_Change_traction_system_
#ifndef kcg_comp_Change_traction_system
extern kcg_bool kcg_comp_Change_traction_system(
  Change_traction_system_T_TIU_Ty *kcg_c1,
  Change_traction_system_T_TIU_Ty *kcg_c2);
#endif /* kcg_comp_Change_traction_system */
#endif /* kcg_use_Change_traction_system_ */

#ifdef kcg_use_Change_of_allowed_curre
#ifndef kcg_comp_Change_of_allowed_curr
extern kcg_bool kcg_comp_Change_of_allowed_curr(
  Change_of_allowed_current_consu *kcg_c1,
  Change_of_allowed_current_consu *kcg_c2);
#endif /* kcg_comp_Change_of_allowed_curr */
#endif /* kcg_use_Change_of_allowed_curre */

#ifdef kcg_use_DMI_EVC_Level_Data_T_DM
#ifndef kcg_comp_DMI_EVC_Level_Data_T_D
extern kcg_bool kcg_comp_DMI_EVC_Level_Data_T_D(
  DMI_EVC_Level_Data_T_DMI_Messag *kcg_c1,
  DMI_EVC_Level_Data_T_DMI_Messag *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Level_Data_T_D */
#endif /* kcg_use_DMI_EVC_Level_Data_T_DM */

#ifdef kcg_use_DMI_Level_Data_T_DMI_Me
#ifndef kcg_comp_DMI_Level_Data_T_DMI_M
extern kcg_bool kcg_comp_DMI_Level_Data_T_DMI_M(
  DMI_Level_Data_T_DMI_Messages_B *kcg_c1,
  DMI_Level_Data_T_DMI_Messages_B *kcg_c2);
#endif /* kcg_comp_DMI_Level_Data_T_DMI_M */
#endif /* kcg_use_DMI_Level_Data_T_DMI_Me */

#ifdef kcg_use_TelegramStore_T_Receive
#ifndef kcg_comp_TelegramStore_T_Receiv
extern kcg_bool kcg_comp_TelegramStore_T_Receiv(
  TelegramStore_T_Receive_TrackSi *kcg_c1,
  TelegramStore_T_Receive_TrackSi *kcg_c2);
#endif /* kcg_comp_TelegramStore_T_Receiv */
#endif /* kcg_use_TelegramStore_T_Receive */

#ifdef kcg_use_ReportedBG_T_ProvidePos
#ifndef kcg_comp_ReportedBG_T_ProvidePo
extern kcg_bool kcg_comp_ReportedBG_T_ProvidePo(
  ReportedBG_T_ProvidePositionRep *kcg_c1,
  ReportedBG_T_ProvidePositionRep *kcg_c2);
#endif /* kcg_comp_ReportedBG_T_ProvidePo */
#endif /* kcg_use_ReportedBG_T_ProvidePos */

#ifdef kcg_use_Type_I_train_and_brake_
#ifndef kcg_comp_Type_I_train_and_brake
extern kcg_bool kcg_comp_Type_I_train_and_brake(
  Type_I_train_and_brake_inhibiti *kcg_c1,
  Type_I_train_and_brake_inhibiti *kcg_c2);
#endif /* kcg_comp_Type_I_train_and_brake */
#endif /* kcg_use_Type_I_train_and_brake_ */

#ifdef kcg_use_radioNetWorkIDs_T_MoRC_
#ifndef kcg_comp_radioNetWorkIDs_T_MoRC
extern kcg_bool kcg_comp_radioNetWorkIDs_T_MoRC(
  radioNetWorkIDs_T_MoRC_Pck *kcg_c1,
  radioNetWorkIDs_T_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_radioNetWorkIDs_T_MoRC */
#endif /* kcg_use_radioNetWorkIDs_T_MoRC_ */

#ifdef kcg_use_ModeLevel2PositionRepor
#ifndef kcg_comp_ModeLevel2PositionRepo
extern kcg_bool kcg_comp_ModeLevel2PositionRepo(
  ModeLevel2PositionReport_T_Prov *kcg_c1,
  ModeLevel2PositionReport_T_Prov *kcg_c2);
#endif /* kcg_comp_ModeLevel2PositionRepo */
#endif /* kcg_use_ModeLevel2PositionRepor */

#ifdef kcg_use_struct_97809
#ifndef kcg_comp_struct_97809
extern kcg_bool kcg_comp_struct_97809(
  struct_97809 *kcg_c1,
  struct_97809 *kcg_c2);
#endif /* kcg_comp_struct_97809 */
#endif /* kcg_use_struct_97809 */

#ifdef kcg_use_P005_TM_TrainToTrack
#ifndef kcg_comp_P005_TM_TrainToTrack
extern kcg_bool kcg_comp_P005_TM_TrainToTrack(
  P005_TM_TrainToTrack *kcg_c1,
  P005_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P005_TM_TrainToTrack */
#endif /* kcg_use_P005_TM_TrainToTrack */

#ifdef kcg_use_DMI_trackCondition_T_DM
#ifndef kcg_comp_DMI_trackCondition_T_D
extern kcg_bool kcg_comp_DMI_trackCondition_T_D(
  DMI_trackCondition_T_DMI_Types_ *kcg_c1,
  DMI_trackCondition_T_DMI_Types_ *kcg_c2);
#endif /* kcg_comp_DMI_trackCondition_T_D */
#endif /* kcg_use_DMI_trackCondition_T_DM */

#ifdef kcg_use_DMI_gradientProfile_T_D
#ifndef kcg_comp_DMI_gradientProfile_T_
extern kcg_bool kcg_comp_DMI_gradientProfile_T_(
  DMI_gradientProfile_T_DMI_Types *kcg_c1,
  DMI_gradientProfile_T_DMI_Types *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfile_T_ */
#endif /* kcg_use_DMI_gradientProfile_T_D */

#ifdef kcg_use_DMI_speedProfile_T_DMI_
#ifndef kcg_comp_DMI_speedProfile_T_DMI
extern kcg_bool kcg_comp_DMI_speedProfile_T_DMI(
  DMI_speedProfile_T_DMI_Types_Pk *kcg_c1,
  DMI_speedProfile_T_DMI_Types_Pk *kcg_c2);
#endif /* kcg_comp_DMI_speedProfile_T_DMI */
#endif /* kcg_use_DMI_speedProfile_T_DMI_ */

#ifdef kcg_use_DMI_LevelList_T_DMI_Typ
#ifndef kcg_comp_DMI_LevelList_T_DMI_Ty
extern kcg_bool kcg_comp_DMI_LevelList_T_DMI_Ty(
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c1,
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_LevelList_T_DMI_Ty */
#endif /* kcg_use_DMI_LevelList_T_DMI_Typ */

#ifdef kcg_use_MRSP_internal_section_T
#ifndef kcg_comp_MRSP_internal_section_
extern kcg_bool kcg_comp_MRSP_internal_section_(
  MRSP_internal_section_T_TargetM *kcg_c1,
  MRSP_internal_section_T_TargetM *kcg_c2);
#endif /* kcg_comp_MRSP_internal_section_ */
#endif /* kcg_use_MRSP_internal_section_T */

#ifdef kcg_use_struct_97872
#ifndef kcg_comp_struct_97872
extern kcg_bool kcg_comp_struct_97872(
  struct_97872 *kcg_c1,
  struct_97872 *kcg_c2);
#endif /* kcg_comp_struct_97872 */
#endif /* kcg_use_struct_97872 */

#ifdef kcg_use_P044_TM_TrainToTrack
#ifndef kcg_comp_P044_TM_TrainToTrack
extern kcg_bool kcg_comp_P044_TM_TrainToTrack(
  P044_TM_TrainToTrack *kcg_c1,
  P044_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P044_TM_TrainToTrack */
#endif /* kcg_use_P044_TM_TrainToTrack */

#ifdef kcg_use_av_Map_t_SDMConversionM
#ifndef kcg_comp_av_Map_t_SDMConversion
extern kcg_bool kcg_comp_av_Map_t_SDMConversion(
  av_Map_t_SDMConversionModelPkg *kcg_c1,
  av_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_av_Map_t_SDMConversion */
#endif /* kcg_use_av_Map_t_SDMConversionM */

#ifdef kcg_use_struct_97900
#ifndef kcg_comp_struct_97900
extern kcg_bool kcg_comp_struct_97900(
  struct_97900 *kcg_c1,
  struct_97900 *kcg_c2);
#endif /* kcg_comp_struct_97900 */
#endif /* kcg_use_struct_97900 */

#ifdef kcg_use_P003_TM_TrainToTrack
#ifndef kcg_comp_P003_TM_TrainToTrack
extern kcg_bool kcg_comp_P003_TM_TrainToTrack(
  P003_TM_TrainToTrack *kcg_c1,
  P003_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P003_TM_TrainToTrack */
#endif /* kcg_use_P003_TM_TrainToTrack */

#ifdef kcg_use_SSP_T_Packet_Types_Pkg
#ifndef kcg_comp_SSP_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_SSP_T_Packet_Types_Pkg(
  SSP_T_Packet_Types_Pkg *kcg_c1,
  SSP_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSP_T_Packet_Types_Pkg */
#endif /* kcg_use_SSP_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintset_T_Packet_Typ
#ifndef kcg_comp_nvkvintset_T_Packet_Ty
extern kcg_bool kcg_comp_nvkvintset_T_Packet_Ty(
  nvkvintset_T_Packet_Types_Pkg *kcg_c1,
  nvkvintset_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintset_T_Packet_Ty */
#endif /* kcg_use_nvkvintset_T_Packet_Typ */

#ifdef kcg_use_struct_97938
#ifndef kcg_comp_struct_97938
extern kcg_bool kcg_comp_struct_97938(
  struct_97938 *kcg_c1,
  struct_97938 *kcg_c2);
#endif /* kcg_comp_struct_97938 */
#endif /* kcg_use_struct_97938 */

#ifdef kcg_use_t_Brake_t_SDMModelPkg
#ifndef kcg_comp_t_Brake_t_SDMModelPkg
extern kcg_bool kcg_comp_t_Brake_t_SDMModelPkg(
  t_Brake_t_SDMModelPkg *kcg_c1,
  t_Brake_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_Brake_t_SDMModelPkg */
#endif /* kcg_use_t_Brake_t_SDMModelPkg */

#ifdef kcg_use_M_current_T_TIU_Types_P
#ifndef kcg_comp_M_current_T_TIU_Types_
extern kcg_bool kcg_comp_M_current_T_TIU_Types_(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_current_T_TIU_Types_ */
#endif /* kcg_use_M_current_T_TIU_Types_P */

#ifdef kcg_use_P009_TM_TrainToTrack
#ifndef kcg_comp_P009_TM_TrainToTrack
extern kcg_bool kcg_comp_P009_TM_TrainToTrack(
  P009_TM_TrainToTrack *kcg_c1,
  P009_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P009_TM_TrainToTrack */
#endif /* kcg_use_P009_TM_TrainToTrack */

#ifdef kcg_use_TIU_Output_msg_API_TIU_
#ifndef kcg_comp_TIU_Output_msg_API_TIU
extern kcg_bool kcg_comp_TIU_Output_msg_API_TIU(
  TIU_Output_msg_API_TIU_Pkg *kcg_c1,
  TIU_Output_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Output_msg_API_TIU */
#endif /* kcg_use_TIU_Output_msg_API_TIU_ */

#ifdef kcg_use_TIU_Input_msg_API_TIU_P
#ifndef kcg_comp_TIU_Input_msg_API_TIU_
extern kcg_bool kcg_comp_TIU_Input_msg_API_TIU_(
  TIU_Input_msg_API_TIU_Pkg *kcg_c1,
  TIU_Input_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Input_msg_API_TIU_ */
#endif /* kcg_use_TIU_Input_msg_API_TIU_P */

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

#ifdef kcg_use_Passenger_door_control_
#ifndef kcg_comp_Passenger_door_control
extern kcg_bool kcg_comp_Passenger_door_control(
  Passenger_door_control_info_T_T *kcg_c1,
  Passenger_door_control_info_T_T *kcg_c2);
#endif /* kcg_comp_Passenger_door_control */
#endif /* kcg_use_Passenger_door_control_ */

#ifdef kcg_use_DMI_Display_Control_T_D
#ifndef kcg_comp_DMI_Display_Control_T_
extern kcg_bool kcg_comp_DMI_Display_Control_T_(
  DMI_Display_Control_T_DMI_Messa *kcg_c1,
  DMI_Display_Control_T_DMI_Messa *kcg_c2);
#endif /* kcg_comp_DMI_Display_Control_T_ */
#endif /* kcg_use_DMI_Display_Control_T_D */

#ifdef kcg_use_Brake_command_T_TIU_Typ
#ifndef kcg_comp_Brake_command_T_TIU_Ty
extern kcg_bool kcg_comp_Brake_command_T_TIU_Ty(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_command_T_TIU_Ty */
#endif /* kcg_use_Brake_command_T_TIU_Typ */

#ifdef kcg_use_nvkrint_T_Packet_Types_
#ifndef kcg_comp_nvkrint_T_Packet_Types
extern kcg_bool kcg_comp_nvkrint_T_Packet_Types(
  nvkrint_T_Packet_Types_Pkg *kcg_c1,
  nvkrint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrint_T_Packet_Types */
#endif /* kcg_use_nvkrint_T_Packet_Types_ */

#ifdef kcg_use_safeRadioConnectionIndi
#ifndef kcg_comp_safeRadioConnectionInd
extern kcg_bool kcg_comp_safeRadioConnectionInd(
  safeRadioConnectionIndication_T *kcg_c1,
  safeRadioConnectionIndication_T *kcg_c2);
#endif /* kcg_comp_safeRadioConnectionInd */
#endif /* kcg_use_safeRadioConnectionIndi */

#ifdef kcg_use_ASafe_T_CalcBrakingCurv
#ifndef kcg_comp_ASafe_T_CalcBrakingCur
extern kcg_bool kcg_comp_ASafe_T_CalcBrakingCur(
  ASafe_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafe_T_CalcBrakingCur */
#endif /* kcg_use_ASafe_T_CalcBrakingCurv */

#ifdef kcg_use_P021_OBU_T_TM
#ifndef kcg_comp_P021_OBU_T_TM
extern kcg_bool kcg_comp_P021_OBU_T_TM(
  P021_OBU_T_TM *kcg_c1,
  P021_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_T_TM */
#endif /* kcg_use_P021_OBU_T_TM */

#ifdef kcg_use_PT5_TrainRunningNumber_
#ifndef kcg_comp_PT5_TrainRunningNumber
extern kcg_bool kcg_comp_PT5_TrainRunningNumber(
  PT5_TrainRunningNumber_Packet_T *kcg_c1,
  PT5_TrainRunningNumber_Packet_T *kcg_c2);
#endif /* kcg_comp_PT5_TrainRunningNumber */
#endif /* kcg_use_PT5_TrainRunningNumber_ */

#ifdef kcg_use_M_TrainTrack_Message_T_
#ifndef kcg_comp_M_TrainTrack_Message_T
extern kcg_bool kcg_comp_M_TrainTrack_Message_T(
  M_TrainTrack_Message_T_TM_radio *kcg_c1,
  M_TrainTrack_Message_T_TM_radio *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_Message_T */
#endif /* kcg_use_M_TrainTrack_Message_T_ */

#ifdef kcg_use_T_Reversing_Data_Level_
#ifndef kcg_comp_T_Reversing_Data_Level
extern kcg_bool kcg_comp_T_Reversing_Data_Level(
  T_Reversing_Data_Level_And_Mode *kcg_c1,
  T_Reversing_Data_Level_And_Mode *kcg_c2);
#endif /* kcg_comp_T_Reversing_Data_Level */
#endif /* kcg_use_T_Reversing_Data_Level_ */

#ifdef kcg_use_ErrorMessage_T_ProvideP
#ifndef kcg_comp_ErrorMessage_T_Provide
extern kcg_bool kcg_comp_ErrorMessage_T_Provide(
  ErrorMessage_T_ProvidePositionR *kcg_c1,
  ErrorMessage_T_ProvidePositionR *kcg_c2);
#endif /* kcg_comp_ErrorMessage_T_Provide */
#endif /* kcg_use_ErrorMessage_T_ProvideP */

#ifdef kcg_use_P021_section_enum_T_TM
#ifndef kcg_comp_P021_section_enum_T_TM
extern kcg_bool kcg_comp_P021_section_enum_T_TM(
  P021_section_enum_T_TM *kcg_c1,
  P021_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_enum_T_TM */
#endif /* kcg_use_P021_section_enum_T_TM */

#ifdef kcg_use_TSM_revokeCond_T_SDM_Co
#ifndef kcg_comp_TSM_revokeCond_T_SDM_C
extern kcg_bool kcg_comp_TSM_revokeCond_T_SDM_C(
  TSM_revokeCond_T_SDM_Commands_P *kcg_c1,
  TSM_revokeCond_T_SDM_Commands_P *kcg_c2);
#endif /* kcg_comp_TSM_revokeCond_T_SDM_C */
#endif /* kcg_use_TSM_revokeCond_T_SDM_Co */

#ifdef kcg_use_ParabolaCurve_T_CalcBra
#ifndef kcg_comp_ParabolaCurve_T_CalcBr
extern kcg_bool kcg_comp_ParabolaCurve_T_CalcBr(
  ParabolaCurve_T_CalcBrakingCurv *kcg_c1,
  ParabolaCurve_T_CalcBrakingCurv *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_T_CalcBr */
#endif /* kcg_use_ParabolaCurve_T_CalcBra */

#ifdef kcg_use_movementAuthorityForDMI
#ifndef kcg_comp_movementAuthorityForDM
extern kcg_bool kcg_comp_movementAuthorityForDM(
  movementAuthorityForDMI_T_DMI_T *kcg_c1,
  movementAuthorityForDMI_T_DMI_T *kcg_c2);
#endif /* kcg_comp_movementAuthorityForDM */
#endif /* kcg_use_movementAuthorityForDMI */

#ifdef kcg_use_DataForModeAndLevel_t_T
#ifndef kcg_comp_DataForModeAndLevel_t_
extern kcg_bool kcg_comp_DataForModeAndLevel_t_(
  DataForModeAndLevel_t_TrackAtla *kcg_c1,
  DataForModeAndLevel_t_TrackAtla *kcg_c2);
#endif /* kcg_comp_DataForModeAndLevel_t_ */
#endif /* kcg_use_DataForModeAndLevel_t_T */

#ifdef kcg_use_M_146_T_TM_radio_messag
#ifndef kcg_comp_M_146_T_TM_radio_messa
extern kcg_bool kcg_comp_M_146_T_TM_radio_messa(
  M_146_T_TM_radio_messages *kcg_c1,
  M_146_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_146_T_TM_radio_messa */
#endif /* kcg_use_M_146_T_TM_radio_messag */

#ifdef kcg_use_struct_98165
#ifndef kcg_comp_struct_98165
extern kcg_bool kcg_comp_struct_98165(
  struct_98165 *kcg_c1,
  struct_98165 *kcg_c2);
#endif /* kcg_comp_struct_98165 */
#endif /* kcg_use_struct_98165 */

#ifdef kcg_use__20_MovementAuthoritySe
#ifndef kcg_comp__20_MovementAuthorityS
extern kcg_bool kcg_comp__20_MovementAuthorityS(
  _20_MovementAuthoritySection_t_ *kcg_c1,
  _20_MovementAuthoritySection_t_ *kcg_c2);
#endif /* kcg_comp__20_MovementAuthorityS */
#endif /* kcg_use__20_MovementAuthoritySe */

#ifdef kcg_use_T_Mode_Level_Level_And_
#ifndef kcg_comp_T_Mode_Level_Level_And
extern kcg_bool kcg_comp_T_Mode_Level_Level_And(
  T_Mode_Level_Level_And_Mode_Typ *kcg_c1,
  T_Mode_Level_Level_And_Mode_Typ *kcg_c2);
#endif /* kcg_comp_T_Mode_Level_Level_And */
#endif /* kcg_use_T_Mode_Level_Level_And_ */

#ifdef kcg_use_T_Mode_Profile_Level_An
#ifndef kcg_comp_T_Mode_Profile_Level_A
extern kcg_bool kcg_comp_T_Mode_Profile_Level_A(
  T_Mode_Profile_Level_And_Mode_T *kcg_c1,
  T_Mode_Profile_Level_And_Mode_T *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Level_A */
#endif /* kcg_use_T_Mode_Profile_Level_An */

#ifdef kcg_use_trainData_internal_t_SD
#ifndef kcg_comp_trainData_internal_t_S
extern kcg_bool kcg_comp_trainData_internal_t_S(
  trainData_internal_t_SDM_Types_ *kcg_c1,
  trainData_internal_t_SDM_Types_ *kcg_c2);
#endif /* kcg_comp_trainData_internal_t_S */
#endif /* kcg_use_trainData_internal_t_SD */

#ifdef kcg_use_P058_section_enum_T_TM
#ifndef kcg_comp_P058_section_enum_T_TM
extern kcg_bool kcg_comp_P058_section_enum_T_TM(
  P058_section_enum_T_TM *kcg_c1,
  P058_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_section_enum_T_TM */
#endif /* kcg_use_P058_section_enum_T_TM */

#ifdef kcg_use_EOA_real_T_TargetManage
#ifndef kcg_comp_EOA_real_T_TargetManag
extern kcg_bool kcg_comp_EOA_real_T_TargetManag(
  EOA_real_T_TargetManagement_typ *kcg_c1,
  EOA_real_T_TargetManagement_typ *kcg_c2);
#endif /* kcg_comp_EOA_real_T_TargetManag */
#endif /* kcg_use_EOA_real_T_TargetManage */

#ifdef kcg_use_P027V1_OBU_body_enum_T_
#ifndef kcg_comp_P027V1_OBU_body_enum_T
extern kcg_bool kcg_comp_P027V1_OBU_body_enum_T(
  P027V1_OBU_body_enum_T_TM_basel *kcg_c1,
  P027V1_OBU_body_enum_T_TM_basel *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_body_enum_T */
#endif /* kcg_use_P027V1_OBU_body_enum_T_ */

#ifdef kcg_use_PT3_OnboardTelephoneNum
#ifndef kcg_comp_PT3_OnboardTelephoneNu
extern kcg_bool kcg_comp_PT3_OnboardTelephoneNu(
  PT3_OnboardTelephoneNumbers_T_P *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_P *kcg_c2);
#endif /* kcg_comp_PT3_OnboardTelephoneNu */
#endif /* kcg_use_PT3_OnboardTelephoneNum */

#ifdef kcg_use_trainData_Trigger_T_tra
#ifndef kcg_comp_trainData_Trigger_T_tr
extern kcg_bool kcg_comp_trainData_Trigger_T_tr(
  trainData_Trigger_T_trainData_T *kcg_c1,
  trainData_Trigger_T_trainData_T *kcg_c2);
#endif /* kcg_comp_trainData_Trigger_T_tr */
#endif /* kcg_use_trainData_Trigger_T_tra */

#ifdef kcg_use_T_Data_From_F2_function
#ifndef kcg_comp_T_Data_From_F2_functio
extern kcg_bool kcg_comp_T_Data_From_F2_functio(
  T_Data_From_F2_functions_Level_ *kcg_c1,
  T_Data_From_F2_functions_Level_ *kcg_c2);
#endif /* kcg_comp_T_Data_From_F2_functio */
#endif /* kcg_use_T_Data_From_F2_function */

#ifdef kcg_use_ACC_SDM_GradientAcceler
#ifndef kcg_comp_ACC_SDM_GradientAccele
extern kcg_bool kcg_comp_ACC_SDM_GradientAccele(
  ACC_SDM_GradientAcceleration_Pk *kcg_c1,
  ACC_SDM_GradientAcceleration_Pk *kcg_c2);
#endif /* kcg_comp_ACC_SDM_GradientAccele */
#endif /* kcg_use_ACC_SDM_GradientAcceler */

#ifndef kcg_comp_sessionStatus_T_RCM_Se
extern kcg_bool kcg_comp_sessionStatus_T_RCM_Se(
  sessionStatus_T_RCM_Session_Typ *kcg_c1,
  sessionStatus_T_RCM_Session_Typ *kcg_c2);
#define kcg_use_sessionStatus_T_RCM_Ses
#endif /* kcg_comp_sessionStatus_T_RCM_Se */

#ifdef kcg_use_PT4_ErrorReporting_T_Pa
#ifndef kcg_comp_PT4_ErrorReporting_T_P
extern kcg_bool kcg_comp_PT4_ErrorReporting_T_P(
  PT4_ErrorReporting_T_Packet_Tra *kcg_c1,
  PT4_ErrorReporting_T_Packet_Tra *kcg_c2);
#endif /* kcg_comp_PT4_ErrorReporting_T_P */
#endif /* kcg_use_PT4_ErrorReporting_T_Pa */

#ifdef kcg_use_M_voltage_T_TIU_Types_P
#ifndef kcg_comp_M_voltage_T_TIU_Types_
extern kcg_bool kcg_comp_M_voltage_T_TIU_Types_(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_voltage_T_TIU_Types_ */
#endif /* kcg_use_M_voltage_T_TIU_Types_P */

#ifdef kcg_use_P45_RadioNetworkRegistr
#ifndef kcg_comp_P45_RadioNetworkRegist
extern kcg_bool kcg_comp_P45_RadioNetworkRegist(
  P45_RadioNetworkRegistration_T_ *kcg_c1,
  P45_RadioNetworkRegistration_T_ *kcg_c2);
#endif /* kcg_comp_P45_RadioNetworkRegist */
#endif /* kcg_use_P45_RadioNetworkRegistr */

#ifdef kcg_use_DMI_Track_Description_T
#ifndef kcg_comp_DMI_Track_Description_
extern kcg_bool kcg_comp_DMI_Track_Description_(
  DMI_Track_Description_T_DMI_Mes *kcg_c1,
  DMI_Track_Description_T_DMI_Mes *kcg_c2);
#endif /* kcg_comp_DMI_Track_Description_ */
#endif /* kcg_use_DMI_Track_Description_T */

#ifdef kcg_use_BCAccumulator_type_Calc
#ifndef kcg_comp_BCAccumulator_type_Cal
extern kcg_bool kcg_comp_BCAccumulator_type_Cal(
  BCAccumulator_type_CalcBrakingC *kcg_c1,
  BCAccumulator_type_CalcBrakingC *kcg_c2);
#endif /* kcg_comp_BCAccumulator_type_Cal */
#endif /* kcg_use_BCAccumulator_type_Calc */

#ifdef kcg_use_TrackSide_ForCheck_T_Co
#ifndef kcg_comp_TrackSide_ForCheck_T_C
extern kcg_bool kcg_comp_TrackSide_ForCheck_T_C(
  TrackSide_ForCheck_T_Common_Typ *kcg_c1,
  TrackSide_ForCheck_T_Common_Typ *kcg_c2);
#endif /* kcg_comp_TrackSide_ForCheck_T_C */
#endif /* kcg_use_TrackSide_ForCheck_T_Co */

#ifdef kcg_use_API_TelegramHeader_T_AP
#ifndef kcg_comp_API_TelegramHeader_T_A
extern kcg_bool kcg_comp_API_TelegramHeader_T_A(
  API_TelegramHeader_T_API_Msg_Pk *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pk *kcg_c2);
#endif /* kcg_comp_API_TelegramHeader_T_A */
#endif /* kcg_use_API_TelegramHeader_T_AP */

#ifdef kcg_use_API_RadioMsgHeader_T_AP
#ifndef kcg_comp_API_RadioMsgHeader_T_A
extern kcg_bool kcg_comp_API_RadioMsgHeader_T_A(
  API_RadioMsgHeader_T_API_Msg_Pk *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pk *kcg_c2);
#endif /* kcg_comp_API_RadioMsgHeader_T_A */
#endif /* kcg_use_API_RadioMsgHeader_T_AP */

#ifdef kcg_use_refBGs_T_CalculateTrain
#ifndef kcg_comp_refBGs_T_CalculateTrai
extern kcg_bool kcg_comp_refBGs_T_CalculateTrai(
  refBGs_T_CalculateTrainPosition *kcg_c1,
  refBGs_T_CalculateTrainPosition *kcg_c2);
#endif /* kcg_comp_refBGs_T_CalculateTrai */
#endif /* kcg_use_refBGs_T_CalculateTrain */

#ifndef kcg_comp_OdometrySpeeds_T_Obu_B
extern kcg_bool kcg_comp_OdometrySpeeds_T_Obu_B(
  OdometrySpeeds_T_Obu_BasicTypes *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes *kcg_c2);
#define kcg_use_OdometrySpeeds_T_Obu_Ba
#endif /* kcg_comp_OdometrySpeeds_T_Obu_B */

#ifdef kcg_use_Gradient_section_t_Trac
#ifndef kcg_comp_Gradient_section_t_Tra
extern kcg_bool kcg_comp_Gradient_section_t_Tra(
  Gradient_section_t_TrackAtlasTy *kcg_c1,
  Gradient_section_t_TrackAtlasTy *kcg_c2);
#endif /* kcg_comp_Gradient_section_t_Tra */
#endif /* kcg_use_Gradient_section_t_Trac */

#ifdef kcg_use_dmiOutputs_T_manage_DMI
#ifndef kcg_comp_dmiOutputs_T_manage_DM
extern kcg_bool kcg_comp_dmiOutputs_T_manage_DM(
  dmiOutputs_T_manage_DMI_Output_ *kcg_c1,
  dmiOutputs_T_manage_DMI_Output_ *kcg_c2);
#endif /* kcg_comp_dmiOutputs_T_manage_DM */
#endif /* kcg_use_dmiOutputs_T_manage_DMI */

#ifndef kcg_comp_OdometryLocations_T_Ob
extern kcg_bool kcg_comp_OdometryLocations_T_Ob(
  OdometryLocations_T_Obu_BasicTy *kcg_c1,
  OdometryLocations_T_Obu_BasicTy *kcg_c2);
#define kcg_use_OdometryLocations_T_Obu
#endif /* kcg_comp_OdometryLocations_T_Ob */

#ifdef kcg_use_Type_I_train_commands_T
#ifndef kcg_comp_Type_I_train_commands_
extern kcg_bool kcg_comp_Type_I_train_commands_(
  Type_I_train_commands_T_TIU_Typ *kcg_c1,
  Type_I_train_commands_T_TIU_Typ *kcg_c2);
#endif /* kcg_comp_Type_I_train_commands_ */
#endif /* kcg_use_Type_I_train_commands_T */

#ifdef kcg_use_T_Data_From_Track_To_Mo
#ifndef kcg_comp_T_Data_From_Track_To_M
extern kcg_bool kcg_comp_T_Data_From_Track_To_M(
  T_Data_From_Track_To_Mode_Level *kcg_c1,
  T_Data_From_Track_To_Mode_Level *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_M */
#endif /* kcg_use_T_Data_From_Track_To_Mo */

#ifdef kcg_use_T_Data_From_DMI_Level_A
#ifndef kcg_comp_T_Data_From_DMI_Level_
extern kcg_bool kcg_comp_T_Data_From_DMI_Level_(
  T_Data_From_DMI_Level_And_Mode_ *kcg_c1,
  T_Data_From_DMI_Level_And_Mode_ *kcg_c2);
#endif /* kcg_comp_T_Data_From_DMI_Level_ */
#endif /* kcg_use_T_Data_From_DMI_Level_A */

#ifdef kcg_use_EVC_to_DMI_Message_T_AP
#ifndef kcg_comp_EVC_to_DMI_Message_T_A
extern kcg_bool kcg_comp_EVC_to_DMI_Message_T_A(
  EVC_to_DMI_Message_T_API_DMI_Pk *kcg_c1,
  EVC_to_DMI_Message_T_API_DMI_Pk *kcg_c2);
#endif /* kcg_comp_EVC_to_DMI_Message_T_A */
#endif /* kcg_use_EVC_to_DMI_Message_T_AP */

#ifdef kcg_use_DMI_Dynamic_T_DMI_Messa
#ifndef kcg_comp_DMI_Dynamic_T_DMI_Mess
extern kcg_bool kcg_comp_DMI_Dynamic_T_DMI_Mess(
  DMI_Dynamic_T_DMI_Messages_EVC_ *kcg_c1,
  DMI_Dynamic_T_DMI_Messages_EVC_ *kcg_c2);
#endif /* kcg_comp_DMI_Dynamic_T_DMI_Mess */
#endif /* kcg_use_DMI_Dynamic_T_DMI_Messa */

#ifdef kcg_use_DMI_Available_Menu_T_DM
#ifndef kcg_comp_DMI_Available_Menu_T_D
extern kcg_bool kcg_comp_DMI_Available_Menu_T_D(
  DMI_Available_Menu_T_DMI_Types_ *kcg_c1,
  DMI_Available_Menu_T_DMI_Types_ *kcg_c2);
#endif /* kcg_comp_DMI_Available_Menu_T_D */
#endif /* kcg_use_DMI_Available_Menu_T_DM */

#ifdef kcg_use_TSM_triggerCond_T_SDM_C
#ifndef kcg_comp_TSM_triggerCond_T_SDM_
extern kcg_bool kcg_comp_TSM_triggerCond_T_SDM_(
  TSM_triggerCond_T_SDM_Commands_ *kcg_c1,
  TSM_triggerCond_T_SDM_Commands_ *kcg_c2);
#endif /* kcg_comp_TSM_triggerCond_T_SDM_ */
#endif /* kcg_use_TSM_triggerCond_T_SDM_C */

#ifdef kcg_use_speedSupervisionForDMI_
#ifndef kcg_comp_speedSupervisionForDMI
extern kcg_bool kcg_comp_speedSupervisionForDMI(
  speedSupervisionForDMI_T_DMI_Ty *kcg_c1,
  speedSupervisionForDMI_T_DMI_Ty *kcg_c2);
#endif /* kcg_comp_speedSupervisionForDMI */
#endif /* kcg_use_speedSupervisionForDMI_ */

#ifdef kcg_use_Speeds_T_SDM_Types_Pkg
#ifndef kcg_comp_Speeds_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_Speeds_T_SDM_Types_Pkg(
  Speeds_T_SDM_Types_Pkg *kcg_c1,
  Speeds_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Speeds_T_SDM_Types_Pkg */
#endif /* kcg_use_Speeds_T_SDM_Types_Pkg */

#ifdef kcg_use_SDM_Locations_T_SDM_Typ
#ifndef kcg_comp_SDM_Locations_T_SDM_Ty
extern kcg_bool kcg_comp_SDM_Locations_T_SDM_Ty(
  SDM_Locations_T_SDM_Types_Pkg *kcg_c1,
  SDM_Locations_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Locations_T_SDM_Ty */
#endif /* kcg_use_SDM_Locations_T_SDM_Typ */

#ifdef kcg_use_MA_section_real_T_Targe
#ifndef kcg_comp_MA_section_real_T_Targ
extern kcg_bool kcg_comp_MA_section_real_T_Targ(
  MA_section_real_T_TargetManagem *kcg_c1,
  MA_section_real_T_TargetManagem *kcg_c2);
#endif /* kcg_comp_MA_section_real_T_Targ */
#endif /* kcg_use_MA_section_real_T_Targe */

#ifdef kcg_use_SDM_Commands_T_SDM_Type
#ifndef kcg_comp_SDM_Commands_T_SDM_Typ
extern kcg_bool kcg_comp_SDM_Commands_T_SDM_Typ(
  SDM_Commands_T_SDM_Types_Pkg *kcg_c1,
  SDM_Commands_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Commands_T_SDM_Typ */
#endif /* kcg_use_SDM_Commands_T_SDM_Type */

#ifdef kcg_use_DMI_to_EVC_Message_T_AP
#ifndef kcg_comp_DMI_to_EVC_Message_T_A
extern kcg_bool kcg_comp_DMI_to_EVC_Message_T_A(
  DMI_to_EVC_Message_T_API_DMI_Pk *kcg_c1,
  DMI_to_EVC_Message_T_API_DMI_Pk *kcg_c2);
#endif /* kcg_comp_DMI_to_EVC_Message_T_A */
#endif /* kcg_use_DMI_to_EVC_Message_T_AP */

#ifndef kcg_comp_TelegramHeader_T_BG_Ty
extern kcg_bool kcg_comp_TelegramHeader_T_BG_Ty(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_TelegramHeader_T_BG_Typ
#endif /* kcg_comp_TelegramHeader_T_BG_Ty */

#ifdef kcg_use_P58_PositionReportParam
#ifndef kcg_comp_P58_PositionReportPara
extern kcg_bool kcg_comp_P58_PositionReportPara(
  P58_PositionReportParameters_T_ *kcg_c1,
  P58_PositionReportParameters_T_ *kcg_c2);
#endif /* kcg_comp_P58_PositionReportPara */
#endif /* kcg_use_P58_PositionReportParam */

#ifdef kcg_use_P011_TM_TrainToTrack
#ifndef kcg_comp_P011_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_TM_TrainToTrack(
  P011_TM_TrainToTrack *kcg_c1,
  P011_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_TM_TrainToTrack */
#endif /* kcg_use_P011_TM_TrainToTrack */

#ifdef kcg_use_trainData_T_TIU_Types_P
#ifndef kcg_comp_trainData_T_TIU_Types_
extern kcg_bool kcg_comp_trainData_T_TIU_Types_(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_T_TIU_Types_ */
#endif /* kcg_use_trainData_T_TIU_Types_P */

#ifdef kcg_use_P003_OBU_T_TM
#ifndef kcg_comp_P003_OBU_T_TM
extern kcg_bool kcg_comp_P003_OBU_T_TM(
  P003_OBU_T_TM *kcg_c1,
  P003_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P003_OBU_T_TM */
#endif /* kcg_use_P003_OBU_T_TM */

#ifdef kcg_use_P003V1_OBU_T_TM_baselin
#ifndef kcg_comp_P003V1_OBU_T_TM_baseli
extern kcg_bool kcg_comp_P003V1_OBU_T_TM_baseli(
  P003V1_OBU_T_TM_baseline2 *kcg_c1,
  P003V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003V1_OBU_T_TM_baseli */
#endif /* kcg_use_P003V1_OBU_T_TM_baselin */

#ifdef kcg_use_T_Data_From_Track_Packe
#ifndef kcg_comp_T_Data_From_Track_Pack
extern kcg_bool kcg_comp_T_Data_From_Track_Pack(
  T_Data_From_Track_Packet_Level_ *kcg_c1,
  T_Data_From_Track_Packet_Level_ *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Pack */
#endif /* kcg_use_T_Data_From_Track_Packe */

#ifdef kcg_use_P012_OBU_T_TM
#ifndef kcg_comp_P012_OBU_T_TM
extern kcg_bool kcg_comp_P012_OBU_T_TM(
  P012_OBU_T_TM *kcg_c1,
  P012_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P012_OBU_T_TM */
#endif /* kcg_use_P012_OBU_T_TM */

#ifdef kcg_use_P15_Level23MovementAuth
#ifndef kcg_comp_P15_Level23MovementAut
extern kcg_bool kcg_comp_P15_Level23MovementAut(
  P15_Level23MovementAuthority_T_ *kcg_c1,
  P15_Level23MovementAuthority_T_ *kcg_c2);
#endif /* kcg_comp_P15_Level23MovementAut */
#endif /* kcg_use_P15_Level23MovementAuth */

#ifdef kcg_use_P12_Level1MovementAutho
#ifndef kcg_comp_P12_Level1MovementAuth
extern kcg_bool kcg_comp_P12_Level1MovementAuth(
  P12_Level1MovementAuthority_T_P *kcg_c1,
  P12_Level1MovementAuthority_T_P *kcg_c2);
#endif /* kcg_comp_P12_Level1MovementAuth */
#endif /* kcg_use_P12_Level1MovementAutho */

#ifdef kcg_use_P015_OBU_T_TM
#ifndef kcg_comp_P015_OBU_T_TM
extern kcg_bool kcg_comp_P015_OBU_T_TM(
  P015_OBU_T_TM *kcg_c1,
  P015_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_T_TM */
#endif /* kcg_use_P015_OBU_T_TM */

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

#ifdef kcg_use_MovementAuthority_t_Tra
#ifndef kcg_comp_MovementAuthority_t_Tr
extern kcg_bool kcg_comp_MovementAuthority_t_Tr(
  MovementAuthority_t_TrackAtlasT *kcg_c1,
  MovementAuthority_t_TrackAtlasT *kcg_c2);
#endif /* kcg_comp_MovementAuthority_t_Tr */
#endif /* kcg_use_MovementAuthority_t_Tra */

#ifdef kcg_use_trainPositionInfo_T_Tra
#ifndef kcg_comp_trainPositionInfo_T_Tr
extern kcg_bool kcg_comp_trainPositionInfo_T_Tr(
  trainPositionInfo_T_TrainPositi *kcg_c1,
  trainPositionInfo_T_TrainPositi *kcg_c2);
#endif /* kcg_comp_trainPositionInfo_T_Tr */
#endif /* kcg_use_trainPositionInfo_T_Tra */

#ifdef kcg_use_P3_NationalValues_T_Pac
#ifndef kcg_comp_P3_NationalValues_T_Pa
extern kcg_bool kcg_comp_P3_NationalValues_T_Pa(
  P3_NationalValues_T_Packet_Type *kcg_c1,
  P3_NationalValues_T_Packet_Type *kcg_c2);
#endif /* kcg_comp_P3_NationalValues_T_Pa */
#endif /* kcg_use_P3_NationalValues_T_Pac */

#ifdef kcg_use_P203V1_OBU_T_TM_baselin
#ifndef kcg_comp_P203V1_OBU_T_TM_baseli
extern kcg_bool kcg_comp_P203V1_OBU_T_TM_baseli(
  P203V1_OBU_T_TM_baseline2 *kcg_c1,
  P203V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P203V1_OBU_T_TM_baseli */
#endif /* kcg_use_P203V1_OBU_T_TM_baselin */

#ifdef kcg_use_trainPosition_T_TrainPo
#ifndef kcg_comp_trainPosition_T_TrainP
extern kcg_bool kcg_comp_trainPosition_T_TrainP(
  trainPosition_T_TrainPosition_T *kcg_c1,
  trainPosition_T_TrainPosition_T *kcg_c2);
#endif /* kcg_comp_trainPosition_T_TrainP */
#endif /* kcg_use_trainPosition_T_TrainPo */

#ifndef kcg_comp_LinkedBG_T_BG_Types_Pk
extern kcg_bool kcg_comp_LinkedBG_T_BG_Types_Pk(
  LinkedBG_T_BG_Types_Pkg *kcg_c1,
  LinkedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBG_T_BG_Types_Pkg
#endif /* kcg_comp_LinkedBG_T_BG_Types_Pk */

#ifdef kcg_use_morc_configData_T_RCM_S
#ifndef kcg_comp_morc_configData_T_RCM_
extern kcg_bool kcg_comp_morc_configData_T_RCM_(
  morc_configData_T_RCM_Session_T *kcg_c1,
  morc_configData_T_RCM_Session_T *kcg_c2);
#endif /* kcg_comp_morc_configData_T_RCM_ */
#endif /* kcg_use_morc_configData_T_RCM_S */

#ifdef kcg_use_sessionCmd_T_RCM_Sessio
#ifndef kcg_comp_sessionCmd_T_RCM_Sessi
extern kcg_bool kcg_comp_sessionCmd_T_RCM_Sessi(
  sessionCmd_T_RCM_Session_Types_ *kcg_c1,
  sessionCmd_T_RCM_Session_Types_ *kcg_c2);
#endif /* kcg_comp_sessionCmd_T_RCM_Sessi */
#endif /* kcg_use_sessionCmd_T_RCM_Sessio */

#ifdef kcg_use_obuEventsAndPhases_T_RC
#ifndef kcg_comp_obuEventsAndPhases_T_R
extern kcg_bool kcg_comp_obuEventsAndPhases_T_R(
  obuEventsAndPhases_T_RCM_Sessio *kcg_c1,
  obuEventsAndPhases_T_RCM_Sessio *kcg_c2);
#endif /* kcg_comp_obuEventsAndPhases_T_R */
#endif /* kcg_use_obuEventsAndPhases_T_RC */

#ifndef kcg_comp_BG_Header_T_BG_Types_P
extern kcg_bool kcg_comp_BG_Header_T_BG_Types_P(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_BG_Header_T_BG_Types_Pk
#endif /* kcg_comp_BG_Header_T_BG_Types_P */

#ifdef kcg_use_Radio_TrackTrain_Header
#ifndef kcg_comp_Radio_TrackTrain_Heade
extern kcg_bool kcg_comp_Radio_TrackTrain_Heade(
  Radio_TrackTrain_Header_T_Radio *kcg_c1,
  Radio_TrackTrain_Header_T_Radio *kcg_c2);
#endif /* kcg_comp_Radio_TrackTrain_Heade */
#endif /* kcg_use_Radio_TrackTrain_Header */

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

#ifdef kcg_use_RBC_Communication_T_Pro
#ifndef kcg_comp_RBC_Communication_T_Pr
extern kcg_bool kcg_comp_RBC_Communication_T_Pr(
  RBC_Communication_T_ProvidePosi *kcg_c1,
  RBC_Communication_T_ProvidePosi *kcg_c2);
#endif /* kcg_comp_RBC_Communication_T_Pr */
#endif /* kcg_use_RBC_Communication_T_Pro */

#ifdef kcg_use_T_Data_To_DMI_Level_And
#ifndef kcg_comp_T_Data_To_DMI_Level_An
extern kcg_bool kcg_comp_T_Data_To_DMI_Level_An(
  T_Data_To_DMI_Level_And_Mode_Ty *kcg_c1,
  T_Data_To_DMI_Level_And_Mode_Ty *kcg_c2);
#endif /* kcg_comp_T_Data_To_DMI_Level_An */
#endif /* kcg_use_T_Data_To_DMI_Level_And */

#ifdef kcg_use_mobileConnectionCmd_T_R
#ifndef kcg_comp_mobileConnectionCmd_T_
extern kcg_bool kcg_comp_mobileConnectionCmd_T_(
  mobileConnectionCmd_T_RCM_Types *kcg_c1,
  mobileConnectionCmd_T_RCM_Types *kcg_c2);
#endif /* kcg_comp_mobileConnectionCmd_T_ */
#endif /* kcg_use_mobileConnectionCmd_T_R */

#ifdef kcg_use_DMI_Text_Message_T_DMI_
#ifndef kcg_comp_DMI_Text_Message_T_DMI
extern kcg_bool kcg_comp_DMI_Text_Message_T_DMI(
  DMI_Text_Message_T_DMI_Messages *kcg_c1,
  DMI_Text_Message_T_DMI_Messages *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_T_DMI */
#endif /* kcg_use_DMI_Text_Message_T_DMI_ */

#ifdef kcg_use_DMI_Icons_T_DMI_Message
#ifndef kcg_comp_DMI_Icons_T_DMI_Messag
extern kcg_bool kcg_comp_DMI_Icons_T_DMI_Messag(
  DMI_Icons_T_DMI_Messages_EVC_to *kcg_c1,
  DMI_Icons_T_DMI_Messages_EVC_to *kcg_c2);
#endif /* kcg_comp_DMI_Icons_T_DMI_Messag */
#endif /* kcg_use_DMI_Icons_T_DMI_Message */

#ifdef kcg_use__27_DMI_EVC_Coded_Train
#ifndef kcg_comp__27_DMI_EVC_Coded_Trai
extern kcg_bool kcg_comp__27_DMI_EVC_Coded_Trai(
  _27_DMI_EVC_Coded_Train_Data_T_ *kcg_c1,
  _27_DMI_EVC_Coded_Train_Data_T_ *kcg_c2);
#endif /* kcg_comp__27_DMI_EVC_Coded_Trai */
#endif /* kcg_use__27_DMI_EVC_Coded_Train */

#ifdef kcg_use_TargetIteratorAkku_Targ
#ifndef kcg_comp_TargetIteratorAkku_Tar
extern kcg_bool kcg_comp_TargetIteratorAkku_Tar(
  TargetIteratorAkku_TargetLimits *kcg_c1,
  TargetIteratorAkku_TargetLimits *kcg_c2);
#endif /* kcg_comp_TargetIteratorAkku_Tar */
#endif /* kcg_use_TargetIteratorAkku_Targ */

#ifdef kcg_use_DMI_EVC_status_T_DMI_Ty
#ifndef kcg_comp_DMI_EVC_status_T_DMI_T
extern kcg_bool kcg_comp_DMI_EVC_status_T_DMI_T(
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_status_T_DMI_T */
#endif /* kcg_use_DMI_EVC_status_T_DMI_Ty */

#ifdef kcg_use_DMI_Identifier_T_DMI_Me
#ifndef kcg_comp_DMI_Identifier_T_DMI_M
extern kcg_bool kcg_comp_DMI_Identifier_T_DMI_M(
  DMI_Identifier_T_DMI_Messages_D *kcg_c1,
  DMI_Identifier_T_DMI_Messages_D *kcg_c2);
#endif /* kcg_comp_DMI_Identifier_T_DMI_M */
#endif /* kcg_use_DMI_Identifier_T_DMI_Me */

#ifdef kcg_use_DMI_TXT_MSG_status_T_DM
#ifndef kcg_comp_DMI_TXT_MSG_status_T_D
extern kcg_bool kcg_comp_DMI_TXT_MSG_status_T_D(
  DMI_TXT_MSG_status_T_DMI_Types_ *kcg_c1,
  DMI_TXT_MSG_status_T_DMI_Types_ *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSG_status_T_D */
#endif /* kcg_use_DMI_TXT_MSG_status_T_DM */

#ifdef kcg_use_BGCollector_T_Receive_T
#ifndef kcg_comp_BGCollector_T_Receive_
extern kcg_bool kcg_comp_BGCollector_T_Receive_(
  BGCollector_T_Receive_TrackSide *kcg_c1,
  BGCollector_T_Receive_TrackSide *kcg_c2);
#endif /* kcg_comp_BGCollector_T_Receive_ */
#endif /* kcg_use_BGCollector_T_Receive_T */

#ifdef kcg_use_filterRelatedEvents_T_C
#ifndef kcg_comp_filterRelatedEvents_T_
extern kcg_bool kcg_comp_filterRelatedEvents_T_(
  filterRelatedEvents_T_Common_Ty *kcg_c1,
  filterRelatedEvents_T_Common_Ty *kcg_c2);
#endif /* kcg_comp_filterRelatedEvents_T_ */
#endif /* kcg_use_filterRelatedEvents_T_C */

#ifdef kcg_use_dataCollectionForLevelT
#ifndef kcg_comp_dataCollectionForLevel
extern kcg_bool kcg_comp_dataCollectionForLevel(
  dataCollectionForLevelTransitio *kcg_c1,
  dataCollectionForLevelTransitio *kcg_c2);
#endif /* kcg_comp_dataCollectionForLevel */
#endif /* kcg_use_dataCollectionForLevelT */

#ifdef kcg_use_MSG_Errors_T_Common_Typ
#ifndef kcg_comp_MSG_Errors_T_Common_Ty
extern kcg_bool kcg_comp_MSG_Errors_T_Common_Ty(
  MSG_Errors_T_Common_Types_Pkg *kcg_c1,
  MSG_Errors_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_MSG_Errors_T_Common_Ty */
#endif /* kcg_use_MSG_Errors_T_Common_Typ */

#ifdef kcg_use_P058_OBU_T_TM
#ifndef kcg_comp_P058_OBU_T_TM
extern kcg_bool kcg_comp_P058_OBU_T_TM(
  P058_OBU_T_TM *kcg_c1,
  P058_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_T_TM */
#endif /* kcg_use_P058_OBU_T_TM */

#ifdef kcg_use_Mode_control_and_train_
#ifndef kcg_comp_Mode_control_and_train
extern kcg_bool kcg_comp_Mode_control_and_train(
  Mode_control_and_train_status_T *kcg_c1,
  Mode_control_and_train_status_T *kcg_c2);
#endif /* kcg_comp_Mode_control_and_train */
#endif /* kcg_use_Mode_control_and_train_ */

#ifdef kcg_use_DMI_Train_Data_T_DMI_Me
#ifndef kcg_comp_DMI_Train_Data_T_DMI_M
extern kcg_bool kcg_comp_DMI_Train_Data_T_DMI_M(
  DMI_Train_Data_T_DMI_Messages_B *kcg_c1,
  DMI_Train_Data_T_DMI_Messages_B *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_T_DMI_M */
#endif /* kcg_use_DMI_Train_Data_T_DMI_Me */

#ifdef kcg_use_P27_InternationalStatic
#ifndef kcg_comp_P27_InternationalStati
extern kcg_bool kcg_comp_P27_InternationalStati(
  P27_InternationalStaticSpeedPro *kcg_c1,
  P27_InternationalStaticSpeedPro *kcg_c2);
#endif /* kcg_comp_P27_InternationalStati */
#endif /* kcg_use_P27_InternationalStatic */

#ifdef kcg_use_P80_ModeProfile_T_Packe
#ifndef kcg_comp_P80_ModeProfile_T_Pack
extern kcg_bool kcg_comp_P80_ModeProfile_T_Pack(
  P80_ModeProfile_T_Packet_Types_ *kcg_c1,
  P80_ModeProfile_T_Packet_Types_ *kcg_c2);
#endif /* kcg_comp_P80_ModeProfile_T_Pack */
#endif /* kcg_use_P80_ModeProfile_T_Packe */

#ifdef kcg_use_M_147_T_TM_radio_messag
#ifndef kcg_comp_M_147_T_TM_radio_messa
extern kcg_bool kcg_comp_M_147_T_TM_radio_messa(
  M_147_T_TM_radio_messages *kcg_c1,
  M_147_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_147_T_TM_radio_messa */
#endif /* kcg_use_M_147_T_TM_radio_messag */

#ifdef kcg_use_positionErrors_T_TrainP
#ifndef kcg_comp_positionErrors_T_Train
extern kcg_bool kcg_comp_positionErrors_T_Train(
  positionErrors_T_TrainPosition_ *kcg_c1,
  positionErrors_T_TrainPosition_ *kcg_c2);
#endif /* kcg_comp_positionErrors_T_Train */
#endif /* kcg_use_positionErrors_T_TrainP */

#ifdef kcg_use_P005_section_enum_T_TM
#ifndef kcg_comp_P005_section_enum_T_TM
extern kcg_bool kcg_comp_P005_section_enum_T_TM(
  P005_section_enum_T_TM *kcg_c1,
  P005_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_enum_T_TM */
#endif /* kcg_use_P005_section_enum_T_TM */

#ifdef kcg_use_struct_99510
#ifndef kcg_comp_struct_99510
extern kcg_bool kcg_comp_struct_99510(
  struct_99510 *kcg_c1,
  struct_99510 *kcg_c2);
#endif /* kcg_comp_struct_99510 */
#endif /* kcg_use_struct_99510 */

#ifdef kcg_use_P042_trackside_int_T_TM
#ifndef kcg_comp_P042_trackside_int_T_T
extern kcg_bool kcg_comp_P042_trackside_int_T_T(
  P042_trackside_int_T_TM *kcg_c1,
  P042_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P042_trackside_int_T_T */
#endif /* kcg_use_P042_trackside_int_T_TM */

#ifdef kcg_use_struct_99535
#ifndef kcg_comp_struct_99535
extern kcg_bool kcg_comp_struct_99535(
  struct_99535 *kcg_c1,
  struct_99535 *kcg_c2);
#endif /* kcg_comp_struct_99535 */
#endif /* kcg_use_struct_99535 */

#ifndef kcg_comp_positionedBG_T_TrainPo
extern kcg_bool kcg_comp_positionedBG_T_TrainPo(
  positionedBG_T_TrainPosition_Ty *kcg_c1,
  positionedBG_T_TrainPosition_Ty *kcg_c2);
#define kcg_use_positionedBG_T_TrainPos
#endif /* kcg_comp_positionedBG_T_TrainPo */

#ifdef kcg_use_M_TrainTrack_MessageHd_
#ifndef kcg_comp_M_TrainTrack_MessageHd
extern kcg_bool kcg_comp_M_TrainTrack_MessageHd(
  M_TrainTrack_MessageHd_T_TM_rad *kcg_c1,
  M_TrainTrack_MessageHd_T_TM_rad *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_MessageHd */
#endif /* kcg_use_M_TrainTrack_MessageHd_ */

#ifdef kcg_use_P42_SessionManagement_T
#ifndef kcg_comp_P42_SessionManagement_
extern kcg_bool kcg_comp_P42_SessionManagement_(
  P42_SessionManagement_T_Packet_ *kcg_c1,
  P42_SessionManagement_T_Packet_ *kcg_c2);
#endif /* kcg_comp_P42_SessionManagement_ */
#endif /* kcg_use_P42_SessionManagement_T */

#ifdef kcg_use_p42_sessionManagement_T
#ifndef kcg_comp_p42_sessionManagement_
extern kcg_bool kcg_comp_p42_sessionManagement_(
  p42_sessionManagement_T_RCM_Msg *kcg_c1,
  p42_sessionManagement_T_RCM_Msg *kcg_c2);
#endif /* kcg_comp_p42_sessionManagement_ */
#endif /* kcg_use_p42_sessionManagement_T */

#ifndef kcg_comp_odometry_T_Obu_BasicTy
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTy(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_odometry_T_Obu_BasicTyp
#endif /* kcg_comp_odometry_T_Obu_BasicTy */

#ifdef kcg_use_RadioMetadata_T_Common_
#ifndef kcg_comp_RadioMetadata_T_Common
extern kcg_bool kcg_comp_RadioMetadata_T_Common(
  RadioMetadata_T_Common_Types_Pk *kcg_c1,
  RadioMetadata_T_Common_Types_Pk *kcg_c2);
#endif /* kcg_comp_RadioMetadata_T_Common */
#endif /* kcg_use_RadioMetadata_T_Common_ */

#ifdef kcg_use_struct_99614
#ifndef kcg_comp_struct_99614
extern kcg_bool kcg_comp_struct_99614(
  struct_99614 *kcg_c1,
  struct_99614 *kcg_c2);
#endif /* kcg_comp_struct_99614 */
#endif /* kcg_use_struct_99614 */

#ifdef kcg_use_Isolation_Status_T_TIU_
#ifndef kcg_comp_Isolation_Status_T_TIU
extern kcg_bool kcg_comp_Isolation_Status_T_TIU(
  Isolation_Status_T_TIU_Types_Pk *kcg_c1,
  Isolation_Status_T_TIU_Types_Pk *kcg_c2);
#endif /* kcg_comp_Isolation_Status_T_TIU */
#endif /* kcg_use_Isolation_Status_T_TIU_ */

#ifdef kcg_use_Message_EVC_to_Train_In
#ifndef kcg_comp_Message_EVC_to_Train_I
extern kcg_bool kcg_comp_Message_EVC_to_Train_I(
  Message_EVC_to_Train_Interface_ *kcg_c1,
  Message_EVC_to_Train_Interface_ *kcg_c2);
#endif /* kcg_comp_Message_EVC_to_Train_I */
#endif /* kcg_use_Message_EVC_to_Train_In */

#ifdef kcg_use_trainProperties_T_Train
#ifndef kcg_comp_trainProperties_T_Trai
extern kcg_bool kcg_comp_trainProperties_T_Trai(
  trainProperties_T_TrainPosition *kcg_c1,
  trainProperties_T_TrainPosition *kcg_c2);
#endif /* kcg_comp_trainProperties_T_Trai */
#endif /* kcg_use_trainProperties_T_Train */

#ifdef kcg_use_p131_q_rbcTransitionOrd
#ifndef kcg_comp_p131_q_rbcTransitionOr
extern kcg_bool kcg_comp_p131_q_rbcTransitionOr(
  p131_q_rbcTransitionOrder_T_Han *kcg_c1,
  p131_q_rbcTransitionOrder_T_Han *kcg_c2);
#endif /* kcg_comp_p131_q_rbcTransitionOr */
#endif /* kcg_use_p131_q_rbcTransitionOrd */

#ifdef kcg_use_struct_99662
#ifndef kcg_comp_struct_99662
extern kcg_bool kcg_comp_struct_99662(
  struct_99662 *kcg_c1,
  struct_99662 *kcg_c2);
#endif /* kcg_comp_struct_99662 */
#endif /* kcg_use_struct_99662 */

#ifdef kcg_use_outPackets_T_Common_Typ
#ifndef kcg_comp_outPackets_T_Common_Ty
extern kcg_bool kcg_comp_outPackets_T_Common_Ty(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_outPackets_T_Common_Ty */
#endif /* kcg_use_outPackets_T_Common_Typ */

#ifdef kcg_use_Brake_pressure_value_T_
#ifndef kcg_comp_Brake_pressure_value_T
extern kcg_bool kcg_comp_Brake_pressure_value_T(
  Brake_pressure_value_T_TIU_Type *kcg_c1,
  Brake_pressure_value_T_TIU_Type *kcg_c2);
#endif /* kcg_comp_Brake_pressure_value_T */
#endif /* kcg_use_Brake_pressure_value_T_ */

#ifdef kcg_use_P63_BaliseInSRAuthority
#ifndef kcg_comp_P63_BaliseInSRAuthorit
extern kcg_bool kcg_comp_P63_BaliseInSRAuthorit(
  P63_BaliseInSRAuthority_T_Packe *kcg_c1,
  P63_BaliseInSRAuthority_T_Packe *kcg_c2);
#endif /* kcg_comp_P63_BaliseInSRAuthorit */
#endif /* kcg_use_P63_BaliseInSRAuthority */

#ifdef kcg_use_DMI_DriverAck_T_DMI_Typ
#ifndef kcg_comp_DMI_DriverAck_T_DMI_Ty
extern kcg_bool kcg_comp_DMI_DriverAck_T_DMI_Ty(
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_DriverAck_T_DMI_Ty */
#endif /* kcg_use_DMI_DriverAck_T_DMI_Typ */

#ifndef kcg_comp_LocWithInAcc_T_Obu_Bas
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_Bas(
  LocWithInAcc_T_Obu_BasicTypes_P *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_P *kcg_c2);
#define kcg_use_LocWithInAcc_T_Obu_Basi
#endif /* kcg_comp_LocWithInAcc_T_Obu_Bas */

#ifdef kcg_use_DataForDMI_t_TrackAtlas
#ifndef kcg_comp_DataForDMI_t_TrackAtla
extern kcg_bool kcg_comp_DataForDMI_t_TrackAtla(
  DataForDMI_t_TrackAtlasTypes *kcg_c1,
  DataForDMI_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForDMI_t_TrackAtla */
#endif /* kcg_use_DataForDMI_t_TrackAtlas */

#ifdef kcg_use_T_LevelTransition_Level
#ifndef kcg_comp_T_LevelTransition_Leve
extern kcg_bool kcg_comp_T_LevelTransition_Leve(
  T_LevelTransition_Level_And_Mod *kcg_c1,
  T_LevelTransition_Level_And_Mod *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_Leve */
#endif /* kcg_use_T_LevelTransition_Level */

#ifdef kcg_use_NID_EM_STORE_Acc_T_TA_E
#ifndef kcg_comp_NID_EM_STORE_Acc_T_TA_
extern kcg_bool kcg_comp_NID_EM_STORE_Acc_T_TA_(
  NID_EM_STORE_Acc_T_TA_Emergency *kcg_c1,
  NID_EM_STORE_Acc_T_TA_Emergency *kcg_c2);
#endif /* kcg_comp_NID_EM_STORE_Acc_T_TA_ */
#endif /* kcg_use_NID_EM_STORE_Acc_T_TA_E */

#ifdef kcg_use_P004_TM_TrainToTrack
#ifndef kcg_comp_P004_TM_TrainToTrack
extern kcg_bool kcg_comp_P004_TM_TrainToTrack(
  P004_TM_TrainToTrack *kcg_c1,
  P004_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P004_TM_TrainToTrack */
#endif /* kcg_use_P004_TM_TrainToTrack */

#ifdef kcg_use_LocationBasedEvents_T_P
#ifndef kcg_comp_LocationBasedEvents_T_
extern kcg_bool kcg_comp_LocationBasedEvents_T_(
  LocationBasedEvents_T_ProvidePo *kcg_c1,
  LocationBasedEvents_T_ProvidePo *kcg_c2);
#endif /* kcg_comp_LocationBasedEvents_T_ */
#endif /* kcg_use_LocationBasedEvents_T_P */

#ifdef kcg_use_T_ERTMS_capabilities_Le
#ifndef kcg_comp_T_ERTMS_capabilities_L
extern kcg_bool kcg_comp_T_ERTMS_capabilities_L(
  T_ERTMS_capabilities_Level_And_ *kcg_c1,
  T_ERTMS_capabilities_Level_And_ *kcg_c2);
#endif /* kcg_comp_T_ERTMS_capabilities_L */
#endif /* kcg_use_T_ERTMS_capabilities_Le */

#ifdef kcg_use_m39_AckOfTerminationOfA
#ifndef kcg_comp_m39_AckOfTerminationOf
extern kcg_bool kcg_comp_m39_AckOfTerminationOf(
  m39_AckOfTerminationOfACommunic *kcg_c1,
  m39_AckOfTerminationOfACommunic *kcg_c2);
#endif /* kcg_comp_m39_AckOfTerminationOf */
#endif /* kcg_use_m39_AckOfTerminationOfA */

#ifdef kcg_use_StaticSpeedSection_t_Tr
#ifndef kcg_comp_StaticSpeedSection_t_T
extern kcg_bool kcg_comp_StaticSpeedSection_t_T(
  StaticSpeedSection_t_TrackAtlas *kcg_c1,
  StaticSpeedSection_t_TrackAtlas *kcg_c2);
#endif /* kcg_comp_StaticSpeedSection_t_T */
#endif /* kcg_use_StaticSpeedSection_t_Tr */

#ifdef kcg_use_P003_permanent_data_T_T
#ifndef kcg_comp_P003_permanent_data_T_
extern kcg_bool kcg_comp_P003_permanent_data_T_(
  P003_permanent_data_T_TM_baseli *kcg_c1,
  P003_permanent_data_T_TM_baseli *kcg_c2);
#endif /* kcg_comp_P003_permanent_data_T_ */
#endif /* kcg_use_P003_permanent_data_T_T */

#ifdef kcg_use_DMI_train_id_T_DMI_Type
#ifndef kcg_comp_DMI_train_id_T_DMI_Typ
extern kcg_bool kcg_comp_DMI_train_id_T_DMI_Typ(
  DMI_train_id_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_id_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_train_id_T_DMI_Typ */
#endif /* kcg_use_DMI_train_id_T_DMI_Type */

#ifdef kcg_use_radioManagementMessage_
#ifndef kcg_comp_radioManagementMessage
extern kcg_bool kcg_comp_radioManagementMessage(
  radioManagementMessage_T_Common *kcg_c1,
  radioManagementMessage_T_Common *kcg_c2);
#endif /* kcg_comp_radioManagementMessage */
#endif /* kcg_use_radioManagementMessage_ */

#ifdef kcg_use_RadioMessage_T_Radio_Ty
#ifndef kcg_comp_RadioMessage_T_Radio_T
extern kcg_bool kcg_comp_RadioMessage_T_Radio_T(
  RadioMessage_T_Radio_Types_Pkg *kcg_c1,
  RadioMessage_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMessage_T_Radio_T */
#endif /* kcg_use_RadioMessage_T_Radio_Ty */

#ifdef kcg_use_API_TrackSideInput_T_AP
#ifndef kcg_comp_API_TrackSideInput_T_A
extern kcg_bool kcg_comp_API_TrackSideInput_T_A(
  API_TrackSideInput_T_API_Msg_Pk *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pk *kcg_c2);
#endif /* kcg_comp_API_TrackSideInput_T_A */
#endif /* kcg_use_API_TrackSideInput_T_AP */

#ifdef kcg_use_Message_Train_Interface
#ifndef kcg_comp_Message_Train_Interfac
extern kcg_bool kcg_comp_Message_Train_Interfac(
  Message_Train_Interface_to_EVC_ *kcg_c1,
  Message_Train_Interface_to_EVC_ *kcg_c2);
#endif /* kcg_comp_Message_Train_Interfac */
#endif /* kcg_use_Message_Train_Interface */

#ifndef kcg_comp_infoFromLinking_T_Trai
extern kcg_bool kcg_comp_infoFromLinking_T_Trai(
  infoFromLinking_T_TrainPosition *kcg_c1,
  infoFromLinking_T_TrainPosition *kcg_c2);
#define kcg_use_infoFromLinking_T_Train
#endif /* kcg_comp_infoFromLinking_T_Trai */

#ifdef kcg_use_RBC_Id_T_Common_Types_P
#ifndef kcg_comp_RBC_Id_T_Common_Types_
extern kcg_bool kcg_comp_RBC_Id_T_Common_Types_(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Id_T_Common_Types_ */
#endif /* kcg_use_RBC_Id_T_Common_Types_P */

#ifdef kcg_use_NID_EM_Store_T_TA_Emerg
#ifndef kcg_comp_NID_EM_Store_T_TA_Emer
extern kcg_bool kcg_comp_NID_EM_Store_T_TA_Emer(
  NID_EM_Store_T_TA_EmergencyStop *kcg_c1,
  NID_EM_Store_T_TA_EmergencyStop *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_T_TA_Emer */
#endif /* kcg_use_NID_EM_Store_T_TA_Emerg */

#ifdef kcg_use_array_bool_4
#ifndef kcg_comp_array_bool_4
extern kcg_bool kcg_comp_array_bool_4(
  array_bool_4 *kcg_c1,
  array_bool_4 *kcg_c2);
#endif /* kcg_comp_array_bool_4 */
#endif /* kcg_use_array_bool_4 */

#ifdef kcg_use_array_int_4
#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */
#endif /* kcg_use_array_int_4 */

#ifdef kcg_use_linkedBGs_indices_T_Cal
#ifndef kcg_comp_linkedBGs_indices_T_Ca
extern kcg_bool kcg_comp_linkedBGs_indices_T_Ca(
  linkedBGs_indices_T_CalculateTr *kcg_c1,
  linkedBGs_indices_T_CalculateTr *kcg_c2);
#endif /* kcg_comp_linkedBGs_indices_T_Ca */
#endif /* kcg_use_linkedBGs_indices_T_Cal */

#ifdef kcg_use_array_int_492
#ifndef kcg_comp_array_int_492
extern kcg_bool kcg_comp_array_int_492(
  array_int_492 *kcg_c1,
  array_int_492 *kcg_c2);
#endif /* kcg_comp_array_int_492 */
#endif /* kcg_use_array_int_492 */

#ifdef kcg_use_StaticSpeedProfile_t_Tr
#ifndef kcg_comp_StaticSpeedProfile_t_T
extern kcg_bool kcg_comp_StaticSpeedProfile_t_T(
  StaticSpeedProfile_t_TrackAtlas *kcg_c1,
  StaticSpeedProfile_t_TrackAtlas *kcg_c2);
#endif /* kcg_comp_StaticSpeedProfile_t_T */
#endif /* kcg_use_StaticSpeedProfile_t_Tr */

#ifdef kcg_use_GradientProfile_t_Track
#ifndef kcg_comp_GradientProfile_t_Trac
extern kcg_bool kcg_comp_GradientProfile_t_Trac(
  GradientProfile_t_TrackAtlasTyp *kcg_c1,
  GradientProfile_t_TrackAtlasTyp *kcg_c2);
#endif /* kcg_comp_GradientProfile_t_Trac */
#endif /* kcg_use_GradientProfile_t_Track */

#ifdef kcg_use_GradientProfile_for_DMI
#ifndef kcg_comp_GradientProfile_for_DM
extern kcg_bool kcg_comp_GradientProfile_for_DM(
  GradientProfile_for_DMI_t_Track *kcg_c1,
  GradientProfile_for_DMI_t_Track *kcg_c2);
#endif /* kcg_comp_GradientProfile_for_DM */
#endif /* kcg_use_GradientProfile_for_DMI */

#ifdef kcg_use_array_96787
#ifndef kcg_comp_array_96787
extern kcg_bool kcg_comp_array_96787(array_96787 *kcg_c1, array_96787 *kcg_c2);
#endif /* kcg_comp_array_96787 */
#endif /* kcg_use_array_96787 */

#ifdef kcg_use_TelegramArray_T_BG_Type
#ifndef kcg_comp_TelegramArray_T_BG_Typ
extern kcg_bool kcg_comp_TelegramArray_T_BG_Typ(
  TelegramArray_T_BG_Types_Pkg *kcg_c1,
  TelegramArray_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramArray_T_BG_Typ */
#endif /* kcg_use_TelegramArray_T_BG_Type */

#ifdef kcg_use_array_96794
#ifndef kcg_comp_array_96794
extern kcg_bool kcg_comp_array_96794(array_96794 *kcg_c1, array_96794 *kcg_c2);
#endif /* kcg_comp_array_96794 */
#endif /* kcg_use_array_96794 */

#ifdef kcg_use_array_int_894
#ifndef kcg_comp_array_int_894
extern kcg_bool kcg_comp_array_int_894(
  array_int_894 *kcg_c1,
  array_int_894 *kcg_c2);
#endif /* kcg_comp_array_int_894 */
#endif /* kcg_use_array_int_894 */

#ifdef kcg_use_P41_LevelTransistionOrd
#ifndef kcg_comp_P41_LevelTransistionOr
extern kcg_bool kcg_comp_P41_LevelTransistionOr(
  P41_LevelTransistionOrders_T_Pa *kcg_c1,
  P41_LevelTransistionOrders_T_Pa *kcg_c2);
#endif /* kcg_comp_P41_LevelTransistionOr */
#endif /* kcg_use_P41_LevelTransistionOrd */

#ifdef kcg_use_Target_list_MRSP_real_T
#ifndef kcg_comp_Target_list_MRSP_real_
extern kcg_bool kcg_comp_Target_list_MRSP_real_(
  Target_list_MRSP_real_T_TargetM *kcg_c1,
  Target_list_MRSP_real_T_TargetM *kcg_c2);
#endif /* kcg_comp_Target_list_MRSP_real_ */
#endif /* kcg_use_Target_list_MRSP_real_T */

#ifdef kcg_use_linkedBGs_asPositionedB
#ifndef kcg_comp_linkedBGs_asPositioned
extern kcg_bool kcg_comp_linkedBGs_asPositioned(
  linkedBGs_asPositionedBGs_T_Tra *kcg_c1,
  linkedBGs_asPositionedBGs_T_Tra *kcg_c2);
#endif /* kcg_comp_linkedBGs_asPositioned */
#endif /* kcg_use_linkedBGs_asPositionedB */

#ifdef kcg_use_P005_OBU_sectionlist_en
#ifndef kcg_comp_P005_OBU_sectionlist_e
extern kcg_bool kcg_comp_P005_OBU_sectionlist_e(
  P005_OBU_sectionlist_enum_T_TM *kcg_c1,
  P005_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_e */
#endif /* kcg_use_P005_OBU_sectionlist_en */

#ifndef kcg_comp_LinkedBGs_T_BG_Types_P
extern kcg_bool kcg_comp_LinkedBGs_T_BG_Types_P(
  LinkedBGs_T_BG_Types_Pkg *kcg_c1,
  LinkedBGs_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBGs_T_BG_Types_Pk
#endif /* kcg_comp_LinkedBGs_T_BG_Types_P */

#ifdef kcg_use_array_96846
#ifndef kcg_comp_array_96846
extern kcg_bool kcg_comp_array_96846(array_96846 *kcg_c1, array_96846 *kcg_c2);
#endif /* kcg_comp_array_96846 */
#endif /* kcg_use_array_96846 */

#ifdef kcg_use_array_96889
#ifndef kcg_comp_array_96889
extern kcg_bool kcg_comp_array_96889(array_96889 *kcg_c1, array_96889 *kcg_c2);
#endif /* kcg_comp_array_96889 */
#endif /* kcg_use_array_96889 */

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

#ifdef kcg_use_array_int_31
#ifndef kcg_comp_array_int_31
extern kcg_bool kcg_comp_array_int_31(
  array_int_31 *kcg_c1,
  array_int_31 *kcg_c2);
#endif /* kcg_comp_array_int_31 */
#endif /* kcg_use_array_int_31 */

#ifdef kcg_use_DMI_level_array_T_DMI_T
#ifndef kcg_comp_DMI_level_array_T_DMI_
extern kcg_bool kcg_comp_DMI_level_array_T_DMI_(
  DMI_level_array_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_array_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_array_T_DMI_ */
#endif /* kcg_use_DMI_level_array_T_DMI_T */

#ifdef kcg_use_array_int_964
#ifndef kcg_comp_array_int_964
extern kcg_bool kcg_comp_array_int_964(
  array_int_964 *kcg_c1,
  array_int_964 *kcg_c2);
#endif /* kcg_comp_array_int_964 */
#endif /* kcg_use_array_int_964 */

#ifdef kcg_use_P046_sections_array_fla
#ifndef kcg_comp_P046_sections_array_fl
extern kcg_bool kcg_comp_P046_sections_array_fl(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P046_sections_array_fl */
#endif /* kcg_use_P046_sections_array_fla */

#ifdef kcg_use_array_int_23
#ifndef kcg_comp_array_int_23
extern kcg_bool kcg_comp_array_int_23(
  array_int_23 *kcg_c1,
  array_int_23 *kcg_c2);
#endif /* kcg_comp_array_int_23 */
#endif /* kcg_use_array_int_23 */

#ifdef kcg_use_ReportedBGList_T_Provid
#ifndef kcg_comp_ReportedBGList_T_Provi
extern kcg_bool kcg_comp_ReportedBGList_T_Provi(
  ReportedBGList_T_ProvidePositio *kcg_c1,
  ReportedBGList_T_ProvidePositio *kcg_c2);
#endif /* kcg_comp_ReportedBGList_T_Provi */
#endif /* kcg_use_ReportedBGList_T_Provid */

#ifdef kcg_use_EVC_to_DMI_Message_int_
#ifndef kcg_comp_EVC_to_DMI_Message_int
extern kcg_bool kcg_comp_EVC_to_DMI_Message_int(
  EVC_to_DMI_Message_int_T_API_DM *kcg_c1,
  EVC_to_DMI_Message_int_T_API_DM *kcg_c2);
#endif /* kcg_comp_EVC_to_DMI_Message_int */
#endif /* kcg_use_EVC_to_DMI_Message_int_ */

#ifdef kcg_use_positionedBGs_T_TrainPo
#ifndef kcg_comp_positionedBGs_T_TrainP
extern kcg_bool kcg_comp_positionedBGs_T_TrainP(
  positionedBGs_T_TrainPosition_T *kcg_c1,
  positionedBGs_T_TrainPosition_T *kcg_c2);
#endif /* kcg_comp_positionedBGs_T_TrainP */
#endif /* kcg_use_positionedBGs_T_TrainPo */

#ifdef kcg_use_array_97069
#ifndef kcg_comp_array_97069
extern kcg_bool kcg_comp_array_97069(array_97069 *kcg_c1, array_97069 *kcg_c2);
#endif /* kcg_comp_array_97069 */
#endif /* kcg_use_array_97069 */

#ifndef kcg_comp_Metadata_T_Common_Type
extern kcg_bool kcg_comp_Metadata_T_Common_Type(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_Metadata_T_Common_Types
#endif /* kcg_comp_Metadata_T_Common_Type */

#ifdef kcg_use_array_97076
#ifndef kcg_comp_array_97076
extern kcg_bool kcg_comp_array_97076(array_97076 *kcg_c1, array_97076 *kcg_c2);
#endif /* kcg_comp_array_97076 */
#endif /* kcg_use_array_97076 */

#ifdef kcg_use_T_LevelTransition_Prior
#ifndef kcg_comp_T_LevelTransition_Prio
extern kcg_bool kcg_comp_T_LevelTransition_Prio(
  T_LevelTransition_PriorityTable *kcg_c1,
  T_LevelTransition_PriorityTable *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_Prio */
#endif /* kcg_use_T_LevelTransition_Prior */

#ifdef kcg_use_array_int_261
#ifndef kcg_comp_array_int_261
extern kcg_bool kcg_comp_array_int_261(
  array_int_261 *kcg_c1,
  array_int_261 *kcg_c2);
#endif /* kcg_comp_array_int_261 */
#endif /* kcg_use_array_int_261 */

#ifdef kcg_use__7_P46_ConditionalLevel
#ifndef kcg_comp__7_P46_ConditionalLeve
extern kcg_bool kcg_comp__7_P46_ConditionalLeve(
  _7_P46_ConditionalLevelTransiti *kcg_c1,
  _7_P46_ConditionalLevelTransiti *kcg_c2);
#endif /* kcg_comp__7_P46_ConditionalLeve */
#endif /* kcg_use__7_P46_ConditionalLevel */

#ifdef kcg_use_nvkvintArray_T_Packet_T
#ifndef kcg_comp_nvkvintArray_T_Packet_
extern kcg_bool kcg_comp_nvkvintArray_T_Packet_(
  nvkvintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintArray_T_Packet_ */
#endif /* kcg_use_nvkvintArray_T_Packet_T */

#ifdef kcg_use_array_int_97
#ifndef kcg_comp_array_int_97
extern kcg_bool kcg_comp_array_int_97(
  array_int_97 *kcg_c1,
  array_int_97 *kcg_c2);
#endif /* kcg_comp_array_int_97 */
#endif /* kcg_use_array_int_97 */

#ifdef kcg_use_array_int_15
#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */
#endif /* kcg_use_array_int_15 */

#ifdef kcg_use_array_97133
#ifndef kcg_comp_array_97133
extern kcg_bool kcg_comp_array_97133(array_97133 *kcg_c1, array_97133 *kcg_c2);
#endif /* kcg_comp_array_97133 */
#endif /* kcg_use_array_97133 */

#ifdef kcg_use_IterPacket58List_T_Pack
#ifndef kcg_comp_IterPacket58List_T_Pac
extern kcg_bool kcg_comp_IterPacket58List_T_Pac(
  IterPacket58List_T_Packet_Types *kcg_c1,
  IterPacket58List_T_Packet_Types *kcg_c2);
#endif /* kcg_comp_IterPacket58List_T_Pac */
#endif /* kcg_use_IterPacket58List_T_Pack */

#ifdef kcg_use_array_97140
#ifndef kcg_comp_array_97140
extern kcg_bool kcg_comp_array_97140(array_97140 *kcg_c1, array_97140 *kcg_c2);
#endif /* kcg_comp_array_97140 */
#endif /* kcg_use_array_97140 */

#ifdef kcg_use_array_97162
#ifndef kcg_comp_array_97162
extern kcg_bool kcg_comp_array_97162(array_97162 *kcg_c1, array_97162 *kcg_c2);
#endif /* kcg_comp_array_97162 */
#endif /* kcg_use_array_97162 */

#ifdef kcg_use_DMI_Driver_Identifier_i
#ifndef kcg_comp_DMI_Driver_Identifier_
extern kcg_bool kcg_comp_DMI_Driver_Identifier_(
  DMI_Driver_Identifier_int_array *kcg_c1,
  DMI_Driver_Identifier_int_array *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Identifier_ */
#endif /* kcg_use_DMI_Driver_Identifier_i */

#ifdef kcg_use_array_97187
#ifndef kcg_comp_array_97187
extern kcg_bool kcg_comp_array_97187(array_97187 *kcg_c1, array_97187 *kcg_c2);
#endif /* kcg_comp_array_97187 */
#endif /* kcg_use_array_97187 */

#ifdef kcg_use_array_real_100_8
#ifndef kcg_comp_array_real_100_8
extern kcg_bool kcg_comp_array_real_100_8(
  array_real_100_8 *kcg_c1,
  array_real_100_8 *kcg_c2);
#endif /* kcg_comp_array_real_100_8 */
#endif /* kcg_use_array_real_100_8 */

#ifdef kcg_use_M_TrainTrack_compressed
#ifndef kcg_comp_M_TrainTrack_compresse
extern kcg_bool kcg_comp_M_TrainTrack_compresse(
  M_TrainTrack_compressed_packets *kcg_c1,
  M_TrainTrack_compressed_packets *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_compresse */
#endif /* kcg_use_M_TrainTrack_compressed */

#ifdef kcg_use_array_int_987
#ifndef kcg_comp_array_int_987
extern kcg_bool kcg_comp_array_int_987(
  array_int_987 *kcg_c1,
  array_int_987 *kcg_c2);
#endif /* kcg_comp_array_int_987 */
#endif /* kcg_use_array_int_987 */

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

#ifdef kcg_use_array_int_42
#ifndef kcg_comp_array_int_42
extern kcg_bool kcg_comp_array_int_42(
  array_int_42 *kcg_c1,
  array_int_42 *kcg_c2);
#endif /* kcg_comp_array_int_42 */
#endif /* kcg_use_array_int_42 */

#ifdef kcg_use_array_97349
#ifndef kcg_comp_array_97349
extern kcg_bool kcg_comp_array_97349(array_97349 *kcg_c1, array_97349 *kcg_c2);
#endif /* kcg_comp_array_97349 */
#endif /* kcg_use_array_97349 */

#ifdef kcg_use__5_P15_Level23MovementA
#ifndef kcg_comp__5_P15_Level23Movement
extern kcg_bool kcg_comp__5_P15_Level23Movement(
  _5_P15_Level23MovementAuthoriti *kcg_c1,
  _5_P15_Level23MovementAuthoriti *kcg_c2);
#endif /* kcg_comp__5_P15_Level23Movement */
#endif /* kcg_use__5_P15_Level23MovementA */

#ifdef kcg_use__6_P12_Level1MovementAu
#ifndef kcg_comp__6_P12_Level1MovementA
extern kcg_bool kcg_comp__6_P12_Level1MovementA(
  _6_P12_Level1MovementAuthoritie *kcg_c1,
  _6_P12_Level1MovementAuthoritie *kcg_c2);
#endif /* kcg_comp__6_P12_Level1MovementA */
#endif /* kcg_use__6_P12_Level1MovementAu */

#ifdef kcg_use_array_int_975
#ifndef kcg_comp_array_int_975
extern kcg_bool kcg_comp_array_int_975(
  array_int_975 *kcg_c1,
  array_int_975 *kcg_c2);
#endif /* kcg_comp_array_int_975 */
#endif /* kcg_use_array_int_975 */

#ifdef kcg_use_DMI_TXT_MSGList_status_
#ifndef kcg_comp_DMI_TXT_MSGList_status
extern kcg_bool kcg_comp_DMI_TXT_MSGList_status(
  DMI_TXT_MSGList_status_T_DMI_Ty *kcg_c1,
  DMI_TXT_MSGList_status_T_DMI_Ty *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSGList_status */
#endif /* kcg_use_DMI_TXT_MSGList_status_ */

#ifdef kcg_use_array_97397
#ifndef kcg_comp_array_97397
extern kcg_bool kcg_comp_array_97397(array_97397 *kcg_c1, array_97397 *kcg_c2);
#endif /* kcg_comp_array_97397 */
#endif /* kcg_use_array_97397 */

#ifdef kcg_use_MovementAuthoritySectio
#ifndef kcg_comp_MovementAuthoritySecti
extern kcg_bool kcg_comp_MovementAuthoritySecti(
  MovementAuthoritySectionlist_t_ *kcg_c1,
  MovementAuthoritySectionlist_t_ *kcg_c2);
#endif /* kcg_comp_MovementAuthoritySecti */
#endif /* kcg_use_MovementAuthoritySectio */

#ifdef kcg_use_array_real_100_1
#ifndef kcg_comp_array_real_100_1
extern kcg_bool kcg_comp_array_real_100_1(
  array_real_100_1 *kcg_c1,
  array_real_100_1 *kcg_c2);
#endif /* kcg_comp_array_real_100_1 */
#endif /* kcg_use_array_real_100_1 */

#ifdef kcg_use_M_TrainTrackRadioOutput
#ifndef kcg_comp_M_TrainTrackRadioOutpu
extern kcg_bool kcg_comp_M_TrainTrackRadioOutpu(
  M_TrainTrackRadioOutputBuffer_t *kcg_c1,
  M_TrainTrackRadioOutputBuffer_t *kcg_c2);
#endif /* kcg_comp_M_TrainTrackRadioOutpu */
#endif /* kcg_use_M_TrainTrackRadioOutput */

#ifdef kcg_use_array_bool_30
#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */
#endif /* kcg_use_array_bool_30 */

#ifdef kcg_use_array_int_30
#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */
#endif /* kcg_use_array_int_30 */

#ifdef kcg_use_T_Mode_Profile_Table_Le
#ifndef kcg_comp_T_Mode_Profile_Table_L
extern kcg_bool kcg_comp_T_Mode_Profile_Table_L(
  T_Mode_Profile_Table_Level_And_ *kcg_c1,
  T_Mode_Profile_Table_Level_And_ *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Table_L */
#endif /* kcg_use_T_Mode_Profile_Table_Le */

#ifdef kcg_use_P046_OBU_sectionlist_en
#ifndef kcg_comp_P046_OBU_sectionlist_e
extern kcg_bool kcg_comp_P046_OBU_sectionlist_e(
  P046_OBU_sectionlist_enum_T_TM *kcg_c1,
  P046_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_e */
#endif /* kcg_use_P046_OBU_sectionlist_en */

#ifdef kcg_use_array_97512
#ifndef kcg_comp_array_97512
extern kcg_bool kcg_comp_array_97512(array_97512 *kcg_c1, array_97512 *kcg_c2);
#endif /* kcg_comp_array_97512 */
#endif /* kcg_use_array_97512 */

#ifdef kcg_use_array_97516
#ifndef kcg_comp_array_97516
extern kcg_bool kcg_comp_array_97516(array_97516 *kcg_c1, array_97516 *kcg_c2);
#endif /* kcg_comp_array_97516 */
#endif /* kcg_use_array_97516 */

#ifdef kcg_use_MRSP_internal_T_TargetM
#ifndef kcg_comp_MRSP_internal_T_Target
extern kcg_bool kcg_comp_MRSP_internal_T_Target(
  MRSP_internal_T_TargetManagemen *kcg_c1,
  MRSP_internal_T_TargetManagemen *kcg_c2);
#endif /* kcg_comp_MRSP_internal_T_Target */
#endif /* kcg_use_MRSP_internal_T_TargetM */

#ifdef kcg_use_DMI_to_EVC_Message_int_
#ifndef kcg_comp_DMI_to_EVC_Message_int
extern kcg_bool kcg_comp_DMI_to_EVC_Message_int(
  DMI_to_EVC_Message_int_T_API_DM *kcg_c1,
  DMI_to_EVC_Message_int_T_API_DM *kcg_c2);
#endif /* kcg_comp_DMI_to_EVC_Message_int */
#endif /* kcg_use_DMI_to_EVC_Message_int_ */

#ifdef kcg_use_array_real_100_6
#ifndef kcg_comp_array_real_100_6
extern kcg_bool kcg_comp_array_real_100_6(
  array_real_100_6 *kcg_c1,
  array_real_100_6 *kcg_c2);
#endif /* kcg_comp_array_real_100_6 */
#endif /* kcg_use_array_real_100_6 */

#ifdef kcg_use_array_int_65
#ifndef kcg_comp_array_int_65
extern kcg_bool kcg_comp_array_int_65(
  array_int_65 *kcg_c1,
  array_int_65 *kcg_c2);
#endif /* kcg_comp_array_int_65 */
#endif /* kcg_use_array_int_65 */

#ifdef kcg_use_MRSP_Profile_t_TrackAtl
#ifndef kcg_comp_MRSP_Profile_t_TrackAt
extern kcg_bool kcg_comp_MRSP_Profile_t_TrackAt(
  MRSP_Profile_t_TrackAtlasTypes *kcg_c1,
  MRSP_Profile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MRSP_Profile_t_TrackAt */
#endif /* kcg_use_MRSP_Profile_t_TrackAtl */

#ifdef kcg_use_ParabolaCurve_list_MRSP
#ifndef kcg_comp_ParabolaCurve_list_MRS
extern kcg_bool kcg_comp_ParabolaCurve_list_MRS(
  ParabolaCurve_list_MRSP_T_CalcB *kcg_c1,
  ParabolaCurve_list_MRSP_T_CalcB *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_list_MRS */
#endif /* kcg_use_ParabolaCurve_list_MRSP */

#ifdef kcg_use_array_97554
#ifndef kcg_comp_array_97554
extern kcg_bool kcg_comp_array_97554(array_97554 *kcg_c1, array_97554 *kcg_c2);
#endif /* kcg_comp_array_97554 */
#endif /* kcg_use_array_97554 */

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

#ifdef kcg_use_A_gradient_t_SDM_Gradie
#ifndef kcg_comp_A_gradient_t_SDM_Gradi
extern kcg_bool kcg_comp_A_gradient_t_SDM_Gradi(
  A_gradient_t_SDM_GradientAccele *kcg_c1,
  A_gradient_t_SDM_GradientAccele *kcg_c2);
#endif /* kcg_comp_A_gradient_t_SDM_Gradi */
#endif /* kcg_use_A_gradient_t_SDM_Gradie */

#ifdef kcg_use_GradientProfile_real_co
#ifndef kcg_comp_GradientProfile_real_c
extern kcg_bool kcg_comp_GradientProfile_real_c(
  GradientProfile_real_compensate *kcg_c1,
  GradientProfile_real_compensate *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_c */
#endif /* kcg_use_GradientProfile_real_co */

#ifdef kcg_use_array_int_627
#ifndef kcg_comp_array_int_627
extern kcg_bool kcg_comp_array_int_627(
  array_int_627 *kcg_c1,
  array_int_627 *kcg_c2);
#endif /* kcg_comp_array_int_627 */
#endif /* kcg_use_array_int_627 */

#ifdef kcg_use_array_int_260
#ifndef kcg_comp_array_int_260
extern kcg_bool kcg_comp_array_int_260(
  array_int_260 *kcg_c1,
  array_int_260 *kcg_c2);
#endif /* kcg_comp_array_int_260 */
#endif /* kcg_use_array_int_260 */

#ifdef kcg_use_MyArray_SDM_Commands_Pk
#ifndef kcg_comp_MyArray_SDM_Commands_P
extern kcg_bool kcg_comp_MyArray_SDM_Commands_P(
  MyArray_SDM_Commands_Pkg *kcg_c1,
  MyArray_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_MyArray_SDM_Commands_P */
#endif /* kcg_use_MyArray_SDM_Commands_Pk */

#ifdef kcg_use_array_97600
#ifndef kcg_comp_array_97600
extern kcg_bool kcg_comp_array_97600(array_97600 *kcg_c1, array_97600 *kcg_c2);
#endif /* kcg_comp_array_97600 */
#endif /* kcg_use_array_97600 */

#ifdef kcg_use_ASafeSpeedDefinition_T_
#ifndef kcg_comp_ASafeSpeedDefinition_T
extern kcg_bool kcg_comp_ASafeSpeedDefinition_T(
  ASafeSpeedDefinition_T_CalcBrak *kcg_c1,
  ASafeSpeedDefinition_T_CalcBrak *kcg_c2);
#endif /* kcg_comp_ASafeSpeedDefinition_T */
#endif /* kcg_use_ASafeSpeedDefinition_T_ */

#ifdef kcg_use_GradientProfile_real_t_
#ifndef kcg_comp_GradientProfile_real_t
extern kcg_bool kcg_comp_GradientProfile_real_t(
  GradientProfile_real_t_SDM_Grad *kcg_c1,
  GradientProfile_real_t_SDM_Grad *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_t */
#endif /* kcg_use_GradientProfile_real_t_ */

#ifdef kcg_use_array_bool_256
#ifndef kcg_comp_array_bool_256
extern kcg_bool kcg_comp_array_bool_256(
  array_bool_256 *kcg_c1,
  array_bool_256 *kcg_c2);
#endif /* kcg_comp_array_bool_256 */
#endif /* kcg_use_array_bool_256 */

#ifdef kcg_use_array_int_990
#ifndef kcg_comp_array_int_990
extern kcg_bool kcg_comp_array_int_990(
  array_int_990 *kcg_c1,
  array_int_990 *kcg_c2);
#endif /* kcg_comp_array_int_990 */
#endif /* kcg_use_array_int_990 */

#ifdef kcg_use_P015_OBU_sectionlist_en
#ifndef kcg_comp_P015_OBU_sectionlist_e
extern kcg_bool kcg_comp_P015_OBU_sectionlist_e(
  P015_OBU_sectionlist_enum_T_TM *kcg_c1,
  P015_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_sectionlist_e */
#endif /* kcg_use_P015_OBU_sectionlist_en */

#ifdef kcg_use_array_int_131
#ifndef kcg_comp_array_int_131
extern kcg_bool kcg_comp_array_int_131(
  array_int_131 *kcg_c1,
  array_int_131 *kcg_c2);
#endif /* kcg_comp_array_int_131 */
#endif /* kcg_use_array_int_131 */

#ifdef kcg_use_P058_OBU_sectionlist_en
#ifndef kcg_comp_P058_OBU_sectionlist_e
extern kcg_bool kcg_comp_P058_OBU_sectionlist_e(
  P058_OBU_sectionlist_enum_T_TM *kcg_c1,
  P058_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_sectionlist_e */
#endif /* kcg_use_P058_OBU_sectionlist_en */

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
#ifndef kcg_comp_t_BrakeVt_t_SDMModelPk
extern kcg_bool kcg_comp_t_BrakeVt_t_SDMModelPk(
  t_BrakeVt_t_SDMModelPkg *kcg_c1,
  t_BrakeVt_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_BrakeVt_t_SDMModelPk */
#endif /* kcg_use_t_BrakeVt_t_SDMModelPkg */

#ifdef kcg_use_array_int_6_221
#ifndef kcg_comp_array_int_6_221
extern kcg_bool kcg_comp_array_int_6_221(
  array_int_6_221 *kcg_c1,
  array_int_6_221 *kcg_c2);
#endif /* kcg_comp_array_int_6_221 */
#endif /* kcg_use_array_int_6_221 */

#ifdef kcg_use_array_int_978
#ifndef kcg_comp_array_int_978
extern kcg_bool kcg_comp_array_int_978(
  array_int_978 *kcg_c1,
  array_int_978 *kcg_c2);
#endif /* kcg_comp_array_int_978 */
#endif /* kcg_use_array_int_978 */

#ifdef kcg_use_array_97859
#ifndef kcg_comp_array_97859
extern kcg_bool kcg_comp_array_97859(array_97859 *kcg_c1, array_97859 *kcg_c2);
#endif /* kcg_comp_array_97859 */
#endif /* kcg_use_array_97859 */

#ifdef kcg_use_P80_ModeProfiles_T_Pack
#ifndef kcg_comp_P80_ModeProfiles_T_Pac
extern kcg_bool kcg_comp_P80_ModeProfiles_T_Pac(
  P80_ModeProfiles_T_Packet_Types *kcg_c1,
  P80_ModeProfiles_T_Packet_Types *kcg_c2);
#endif /* kcg_comp_P80_ModeProfiles_T_Pac */
#endif /* kcg_use_P80_ModeProfiles_T_Pack */

#ifdef kcg_use_DMI_gradientProfileArra
#ifndef kcg_comp_DMI_gradientProfileArr
extern kcg_bool kcg_comp_DMI_gradientProfileArr(
  DMI_gradientProfileArray_T_DMI_ *kcg_c1,
  DMI_gradientProfileArray_T_DMI_ *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfileArr */
#endif /* kcg_use_DMI_gradientProfileArra */

#ifdef kcg_use_DMI_SpeedProfileArray_T
#ifndef kcg_comp_DMI_SpeedProfileArray_
extern kcg_bool kcg_comp_DMI_SpeedProfileArray_(
  DMI_SpeedProfileArray_T_DMI_Typ *kcg_c1,
  DMI_SpeedProfileArray_T_DMI_Typ *kcg_c2);
#endif /* kcg_comp_DMI_SpeedProfileArray_ */
#endif /* kcg_use_DMI_SpeedProfileArray_T */

#ifdef kcg_use_array_97906
#ifndef kcg_comp_array_97906
extern kcg_bool kcg_comp_array_97906(array_97906 *kcg_c1, array_97906 *kcg_c2);
#endif /* kcg_comp_array_97906 */
#endif /* kcg_use_array_97906 */

#ifdef kcg_use_array_97910
#ifndef kcg_comp_array_97910
extern kcg_bool kcg_comp_array_97910(array_97910 *kcg_c1, array_97910 *kcg_c2);
#endif /* kcg_comp_array_97910 */
#endif /* kcg_use_array_97910 */

#ifdef kcg_use_array_int_33
#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */
#endif /* kcg_use_array_int_33 */

#ifdef kcg_use_array_int_888
#ifndef kcg_comp_array_int_888
extern kcg_bool kcg_comp_array_int_888(
  array_int_888 *kcg_c1,
  array_int_888 *kcg_c2);
#endif /* kcg_comp_array_int_888 */
#endif /* kcg_use_array_int_888 */

#ifdef kcg_use_ModeDecisionTableType_D
#ifndef kcg_comp_ModeDecisionTableType_
extern kcg_bool kcg_comp_ModeDecisionTableType_(
  ModeDecisionTableType_DataDicti *kcg_c1,
  ModeDecisionTableType_DataDicti *kcg_c2);
#endif /* kcg_comp_ModeDecisionTableType_ */
#endif /* kcg_use_ModeDecisionTableType_D */

#ifdef kcg_use_P027V1_OBU_sectionlist_
#ifndef kcg_comp_P027V1_OBU_sectionlist
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist(
  P027V1_OBU_sectionlist_enum_T_T *kcg_c1,
  P027V1_OBU_sectionlist_enum_T_T *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist */
#endif /* kcg_use_P027V1_OBU_sectionlist_ */

#ifdef kcg_use_nidCArray_T_Packet_Type
#ifndef kcg_comp_nidCArray_T_Packet_Typ
extern kcg_bool kcg_comp_nidCArray_T_Packet_Typ(
  nidCArray_T_Packet_Types_Pkg *kcg_c1,
  nidCArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nidCArray_T_Packet_Typ */
#endif /* kcg_use_nidCArray_T_Packet_Type */

#ifdef kcg_use_array_98011
#ifndef kcg_comp_array_98011
extern kcg_bool kcg_comp_array_98011(array_98011 *kcg_c1, array_98011 *kcg_c2);
#endif /* kcg_comp_array_98011 */
#endif /* kcg_use_array_98011 */

#ifdef kcg_use_array_int_25
#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */
#endif /* kcg_use_array_int_25 */

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

#ifdef kcg_use_nvkrintArray_T_Packet_T
#ifndef kcg_comp_nvkrintArray_T_Packet_
extern kcg_bool kcg_comp_nvkrintArray_T_Packet_(
  nvkrintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkrintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrintArray_T_Packet_ */
#endif /* kcg_use_nvkrintArray_T_Packet_T */

#ifdef kcg_use_ASafe_Data_T_CalcBrakin
#ifndef kcg_comp_ASafe_Data_T_CalcBraki
extern kcg_bool kcg_comp_ASafe_Data_T_CalcBraki(
  ASafe_Data_T_CalcBrakingCurves_ *kcg_c1,
  ASafe_Data_T_CalcBrakingCurves_ *kcg_c2);
#endif /* kcg_comp_ASafe_Data_T_CalcBraki */
#endif /* kcg_use_ASafe_Data_T_CalcBrakin */

#ifdef kcg_use_array_98073
#ifndef kcg_comp_array_98073
extern kcg_bool kcg_comp_array_98073(array_98073 *kcg_c1, array_98073 *kcg_c2);
#endif /* kcg_comp_array_98073 */
#endif /* kcg_use_array_98073 */

#ifdef kcg_use_array_int_99
#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */
#endif /* kcg_use_array_int_99 */

#ifdef kcg_use_array_int_17
#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */
#endif /* kcg_use_array_int_17 */

#ifdef kcg_use_P011_voltage_sectionlis
#ifndef kcg_comp_P011_voltage_sectionli
extern kcg_bool kcg_comp_P011_voltage_sectionli(
  P011_voltage_sectionlist_array_ *kcg_c1,
  P011_voltage_sectionlist_array_ *kcg_c2);
#endif /* kcg_comp_P011_voltage_sectionli */
#endif /* kcg_use_P011_voltage_sectionlis */

#ifdef kcg_use_array_int_302
#ifndef kcg_comp_array_int_302
extern kcg_bool kcg_comp_array_int_302(
  array_int_302 *kcg_c1,
  array_int_302 *kcg_c2);
#endif /* kcg_comp_array_int_302 */
#endif /* kcg_use_array_int_302 */

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

#ifdef kcg_use_array_98127
#ifndef kcg_comp_array_98127
extern kcg_bool kcg_comp_array_98127(array_98127 *kcg_c1, array_98127 *kcg_c2);
#endif /* kcg_comp_array_98127 */
#endif /* kcg_use_array_98127 */

#ifdef kcg_use_DMI_TEXT_INT_Array_T_DA
#ifndef kcg_comp_DMI_TEXT_INT_Array_T_D
extern kcg_bool kcg_comp_DMI_TEXT_INT_Array_T_D(
  DMI_TEXT_INT_Array_T_DATA *kcg_c1,
  DMI_TEXT_INT_Array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_TEXT_INT_Array_T_D */
#endif /* kcg_use_DMI_TEXT_INT_Array_T_DA */

#ifdef kcg_use_DMI_TEXT_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TEXT_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TEXT_DMI_Types_Pkg(
  DMI_TEXT_DMI_Types_Pkg *kcg_c1,
  DMI_TEXT_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TEXT_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TEXT_DMI_Types_Pkg */

#ifdef kcg_use_array_int_9
#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */
#endif /* kcg_use_array_int_9 */

#ifdef kcg_use__3_P027V1_OBU_sectionli
#ifndef kcg_comp__3_P027V1_OBU_sectionl
extern kcg_bool kcg_comp__3_P027V1_OBU_sectionl(
  _3_P027V1_OBU_sectionlist_enum_ *kcg_c1,
  _3_P027V1_OBU_sectionlist_enum_ *kcg_c2);
#endif /* kcg_comp__3_P027V1_OBU_sectionl */
#endif /* kcg_use__3_P027V1_OBU_sectionli */

#ifdef kcg_use_driverIdentifier_T_DMI_
#ifndef kcg_comp_driverIdentifier_T_DMI
extern kcg_bool kcg_comp_driverIdentifier_T_DMI(
  driverIdentifier_T_DMI_Messages *kcg_c1,
  driverIdentifier_T_DMI_Messages *kcg_c2);
#endif /* kcg_comp_driverIdentifier_T_DMI */
#endif /* kcg_use_driverIdentifier_T_DMI_ */

#ifdef kcg_use_P041_OBU_sectionlist_en
#ifndef kcg_comp_P041_OBU_sectionlist_e
extern kcg_bool kcg_comp_P041_OBU_sectionlist_e(
  P041_OBU_sectionlist_enum_T_TM *kcg_c1,
  P041_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_e */
#endif /* kcg_use_P041_OBU_sectionlist_en */

#ifdef kcg_use_P021_OBU_sectionlist_en
#ifndef kcg_comp_P021_OBU_sectionlist_e
extern kcg_bool kcg_comp_P021_OBU_sectionlist_e(
  P021_OBU_sectionlist_enum_T_TM *kcg_c1,
  P021_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_e */
#endif /* kcg_use_P021_OBU_sectionlist_en */

#ifdef kcg_use_array_int_48
#ifndef kcg_comp_array_int_48
extern kcg_bool kcg_comp_array_int_48(
  array_int_48 *kcg_c1,
  array_int_48 *kcg_c2);
#endif /* kcg_comp_array_int_48 */
#endif /* kcg_use_array_int_48 */

#ifdef kcg_use_array_98206
#ifndef kcg_comp_array_98206
extern kcg_bool kcg_comp_array_98206(array_98206 *kcg_c1, array_98206 *kcg_c2);
#endif /* kcg_comp_array_98206 */
#endif /* kcg_use_array_98206 */

#ifdef kcg_use_SSP_matrix_t_TA_MRSP
#ifndef kcg_comp_SSP_matrix_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_matrix_t_TA_MRSP(
  SSP_matrix_t_TA_MRSP *kcg_c1,
  SSP_matrix_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_matrix_t_TA_MRSP */
#endif /* kcg_use_SSP_matrix_t_TA_MRSP */

#ifdef kcg_use_array_int_5
#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */
#endif /* kcg_use_array_int_5 */

#ifdef kcg_use_array_bool_1
#ifndef kcg_comp_array_bool_1
extern kcg_bool kcg_comp_array_bool_1(
  array_bool_1 *kcg_c1,
  array_bool_1 *kcg_c2);
#endif /* kcg_comp_array_bool_1 */
#endif /* kcg_use_array_bool_1 */

#ifdef kcg_use_P044_other_data_TM_Trai
#ifndef kcg_comp_P044_other_data_TM_Tra
extern kcg_bool kcg_comp_P044_other_data_TM_Tra(
  P044_other_data_TM_TrainToTrack *kcg_c1,
  P044_other_data_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P044_other_data_TM_Tra */
#endif /* kcg_use_P044_other_data_TM_Trai */

#ifdef kcg_use_array_real_1
#ifndef kcg_comp_array_real_1
extern kcg_bool kcg_comp_array_real_1(
  array_real_1 *kcg_c1,
  array_real_1 *kcg_c2);
#endif /* kcg_comp_array_real_1 */
#endif /* kcg_use_array_real_1 */

#ifdef kcg_use_array_int_40
#ifndef kcg_comp_array_int_40
extern kcg_bool kcg_comp_array_int_40(
  array_int_40 *kcg_c1,
  array_int_40 *kcg_c2);
#endif /* kcg_comp_array_int_40 */
#endif /* kcg_use_array_int_40 */

#ifdef kcg_use__50_DMI_Track_Descripti
#ifndef kcg_comp__50_DMI_Track_Descript
extern kcg_bool kcg_comp__50_DMI_Track_Descript(
  _50_DMI_Track_Description_int_a *kcg_c1,
  _50_DMI_Track_Description_int_a *kcg_c2);
#endif /* kcg_comp__50_DMI_Track_Descript */
#endif /* kcg_use__50_DMI_Track_Descripti */

#ifdef kcg_use_array_98282
#ifndef kcg_comp_array_98282
extern kcg_bool kcg_comp_array_98282(array_98282 *kcg_c1, array_98282 *kcg_c2);
#endif /* kcg_comp_array_98282 */
#endif /* kcg_use_array_98282 */

#ifdef kcg_use_array_98286
#ifndef kcg_comp_array_98286
extern kcg_bool kcg_comp_array_98286(array_98286 *kcg_c1, array_98286 *kcg_c2);
#endif /* kcg_comp_array_98286 */
#endif /* kcg_use_array_98286 */

#ifdef kcg_use_MetadataTruthtable_T1_C
#ifndef kcg_comp_MetadataTruthtable_T1_
extern kcg_bool kcg_comp_MetadataTruthtable_T1_(
  MetadataTruthtable_T1_CheckEuro *kcg_c1,
  MetadataTruthtable_T1_CheckEuro *kcg_c2);
#endif /* kcg_comp_MetadataTruthtable_T1_ */
#endif /* kcg_use_MetadataTruthtable_T1_C */

#ifdef kcg_use_array_int_891
#ifndef kcg_comp_array_int_891
extern kcg_bool kcg_comp_array_int_891(
  array_int_891 *kcg_c1,
  array_int_891 *kcg_c2);
#endif /* kcg_comp_array_int_891 */
#endif /* kcg_use_array_int_891 */

#ifdef kcg_use_aNID_RADIO_T_Packet_Tra
#ifndef kcg_comp_aNID_RADIO_T_Packet_Tr
extern kcg_bool kcg_comp_aNID_RADIO_T_Packet_Tr(
  aNID_RADIO_T_Packet_TrainTypes_ *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_ *kcg_c2);
#endif /* kcg_comp_aNID_RADIO_T_Packet_Tr */
#endif /* kcg_use_aNID_RADIO_T_Packet_Tra */

#ifdef kcg_use_ParabolaCurveValid_T_Ca
#ifndef kcg_comp_ParabolaCurveValid_T_C
extern kcg_bool kcg_comp_ParabolaCurveValid_T_C(
  ParabolaCurveValid_T_CalcBrakin *kcg_c1,
  ParabolaCurveValid_T_CalcBrakin *kcg_c2);
#endif /* kcg_comp_ParabolaCurveValid_T_C */
#endif /* kcg_use_ParabolaCurveValid_T_Ca */

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

#ifdef kcg_use_array_int_28
#ifndef kcg_comp_array_int_28
extern kcg_bool kcg_comp_array_int_28(
  array_int_28 *kcg_c1,
  array_int_28 *kcg_c2);
#endif /* kcg_comp_array_int_28 */
#endif /* kcg_use_array_int_28 */

#ifdef kcg_use_P005_sections_array_fla
#ifndef kcg_comp_P005_sections_array_fl
extern kcg_bool kcg_comp_P005_sections_array_fl(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P005_sections_array_fl */
#endif /* kcg_use_P005_sections_array_fla */

#ifdef kcg_use_DMI_EVC_Level_Data_int_
#ifndef kcg_comp_DMI_EVC_Level_Data_int
extern kcg_bool kcg_comp_DMI_EVC_Level_Data_int(
  DMI_EVC_Level_Data_int_array_T_ *kcg_c1,
  DMI_EVC_Level_Data_int_array_T_ *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Level_Data_int */
#endif /* kcg_use_DMI_EVC_Level_Data_int_ */

#ifdef kcg_use_array_int_24
#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */
#endif /* kcg_use_array_int_24 */

#ifdef kcg_use_array_int_961
#ifndef kcg_comp_array_int_961
extern kcg_bool kcg_comp_array_int_961(
  array_int_961 *kcg_c1,
  array_int_961 *kcg_c2);
#endif /* kcg_comp_array_int_961 */
#endif /* kcg_use_array_int_961 */

#ifdef kcg_use_DMI_trackConditionArray
#ifndef kcg_comp_DMI_trackConditionArra
extern kcg_bool kcg_comp_DMI_trackConditionArra(
  DMI_trackConditionArray_T_DMI_T *kcg_c1,
  DMI_trackConditionArray_T_DMI_T *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionArra */
#endif /* kcg_use_DMI_trackConditionArray */

#ifdef kcg_use_SSPArray_T_Packet_Types
#ifndef kcg_comp_SSPArray_T_Packet_Type
extern kcg_bool kcg_comp_SSPArray_T_Packet_Type(
  SSPArray_T_Packet_Types_Pkg *kcg_c1,
  SSPArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSPArray_T_Packet_Type */
#endif /* kcg_use_SSPArray_T_Packet_Types */

#ifdef kcg_use_DiffArray_T_Packet_Type
#ifndef kcg_comp_DiffArray_T_Packet_Typ
extern kcg_bool kcg_comp_DiffArray_T_Packet_Typ(
  DiffArray_T_Packet_Types_Pkg *kcg_c1,
  DiffArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DiffArray_T_Packet_Typ */
#endif /* kcg_use_DiffArray_T_Packet_Type */

#ifdef kcg_use_P21_GradientProfiles_T_
#ifndef kcg_comp_P21_GradientProfiles_T
extern kcg_bool kcg_comp_P21_GradientProfiles_T(
  P21_GradientProfiles_T_Packet_T *kcg_c1,
  P21_GradientProfiles_T_Packet_T *kcg_c2);
#endif /* kcg_comp_P21_GradientProfiles_T */
#endif /* kcg_use_P21_GradientProfiles_T_ */

#ifdef kcg_use_P63_ListofBalisesinSRAu
#ifndef kcg_comp_P63_ListofBalisesinSRA
extern kcg_bool kcg_comp_P63_ListofBalisesinSRA(
  P63_ListofBalisesinSRAuthority_ *kcg_c1,
  P63_ListofBalisesinSRAuthority_ *kcg_c2);
#endif /* kcg_comp_P63_ListofBalisesinSRA */
#endif /* kcg_use_P63_ListofBalisesinSRAu */

#ifdef kcg_use_nvkvintsetArray_T_Packe
#ifndef kcg_comp_nvkvintsetArray_T_Pack
extern kcg_bool kcg_comp_nvkvintsetArray_T_Pack(
  nvkvintsetArray_T_Packet_Types_ *kcg_c1,
  nvkvintsetArray_T_Packet_Types_ *kcg_c2);
#endif /* kcg_comp_nvkvintsetArray_T_Pack */
#endif /* kcg_use_nvkvintsetArray_T_Packe */

#ifdef kcg_use_array_int_20
#ifndef kcg_comp_array_int_20
extern kcg_bool kcg_comp_array_int_20(
  array_int_20 *kcg_c1,
  array_int_20 *kcg_c2);
#endif /* kcg_comp_array_int_20 */
#endif /* kcg_use_array_int_20 */

#ifdef kcg_use_array_99745
#ifndef kcg_comp_array_99745
extern kcg_bool kcg_comp_array_99745(array_99745 *kcg_c1, array_99745 *kcg_c2);
#endif /* kcg_comp_array_99745 */
#endif /* kcg_use_array_99745 */

#ifdef kcg_use_DMI_Text_Message_int_ar
#ifndef kcg_comp_DMI_Text_Message_int_a
extern kcg_bool kcg_comp_DMI_Text_Message_int_a(
  DMI_Text_Message_int_array_T_DA *kcg_c1,
  DMI_Text_Message_int_array_T_DA *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_int_a */
#endif /* kcg_use_DMI_Text_Message_int_ar */

#ifdef kcg_use_LevelDecisionTableType_
#ifndef kcg_comp_LevelDecisionTableType
extern kcg_bool kcg_comp_LevelDecisionTableType(
  LevelDecisionTableType_DataDict *kcg_c1,
  LevelDecisionTableType_DataDict *kcg_c2);
#endif /* kcg_comp_LevelDecisionTableType */
#endif /* kcg_use_LevelDecisionTableType_ */

#ifdef kcg_use_array_99768
#ifndef kcg_comp_array_99768
extern kcg_bool kcg_comp_array_99768(array_99768 *kcg_c1, array_99768 *kcg_c2);
#endif /* kcg_comp_array_99768 */
#endif /* kcg_use_array_99768 */

#ifndef kcg_comp_CompressedPacketData_T
extern kcg_bool kcg_comp_CompressedPacketData_T(
  CompressedPacketData_T_Common_T *kcg_c1,
  CompressedPacketData_T_Common_T *kcg_c2);
#define kcg_use_CompressedPacketData_T_
#endif /* kcg_comp_CompressedPacketData_T */

#ifdef kcg_use_array_99815
#ifndef kcg_comp_array_99815
extern kcg_bool kcg_comp_array_99815(array_99815 *kcg_c1, array_99815 *kcg_c2);
#endif /* kcg_comp_array_99815 */
#endif /* kcg_use_array_99815 */

#ifdef kcg_use_array_bool_8
#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */
#endif /* kcg_use_array_bool_8 */

#ifdef kcg_use_array_int_8
#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */
#endif /* kcg_use_array_int_8 */

#ifdef kcg_use_array_real_8
#ifndef kcg_comp_array_real_8
extern kcg_bool kcg_comp_array_real_8(
  array_real_8 *kcg_c1,
  array_real_8 *kcg_c2);
#endif /* kcg_comp_array_real_8 */
#endif /* kcg_use_array_real_8 */

#ifdef kcg_use_array_int_129
#ifndef kcg_comp_array_int_129
extern kcg_bool kcg_comp_array_int_129(
  array_int_129 *kcg_c1,
  array_int_129 *kcg_c2);
#endif /* kcg_comp_array_int_129 */
#endif /* kcg_use_array_int_129 */

#define kcg_comp__9_Radio_TrainTrack_He kcg_comp_struct_99614

#define kcg_copy__9_Radio_TrainTrack_He kcg_copy_struct_99614

#define kcg_comp_sTractionIdentity_T_Pa kcg_comp_struct_96969

#define kcg_copy_sTractionIdentity_T_Pa kcg_copy_struct_96969

#define kcg_comp_aTractionIdentity_T_Pa kcg_comp_array_97554

#define kcg_copy_aTractionIdentity_T_Pa kcg_copy_array_97554

#define kcg_comp_aNID_NTC_T_Packet_Trai kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_Trai kcg_copy_array_int_5

#define kcg_comp_telephoneNumber_T_Pack kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Pack kcg_copy_array_int_15

#define kcg_comp__8_Radio_TrainTrack_Me kcg_comp_struct_96876

#define kcg_copy__8_Radio_TrainTrack_Me kcg_copy_struct_96876

#define kcg_comp_msgToTrack_T_RCM_MsgTy kcg_comp_struct_96876

#define kcg_copy_msgToTrack_T_RCM_MsgTy kcg_copy_struct_96876

#define kcg_comp_ReceivedMessage_T_Comm kcg_comp_struct_99662

#define kcg_copy_ReceivedMessage_T_Comm kcg_copy_struct_99662

#define kcg_comp_msgFromTrack_T_RCM_Msg kcg_comp_struct_99662

#define kcg_copy_msgFromTrack_T_RCM_Msg kcg_copy_struct_99662

#define kcg_comp_P003_nid_radio_list_t_ kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_t_ kcg_copy_array_int_5

#define kcg_comp_M_TrainTrackMessageBus kcg_comp_array_97600

#define kcg_copy_M_TrainTrackMessageBus kcg_copy_array_97600

#define kcg_comp_M_155_T_TM_radio_messa kcg_comp_struct_97872

#define kcg_copy_M_155_T_TM_radio_messa kcg_copy_struct_97872

#define kcg_comp_M_TrainTrackMessage_bu kcg_comp_array_97600

#define kcg_copy_M_TrainTrackMessage_bu kcg_copy_array_97600

#define kcg_comp_M_156_T_TM_radio_messa kcg_comp_struct_97872

#define kcg_copy_M_156_T_TM_radio_messa kcg_copy_struct_97872

#define kcg_comp_M_159_T_TM_radio_messa kcg_comp_struct_97872

#define kcg_copy_M_159_T_TM_radio_messa kcg_copy_struct_97872

#define kcg_comp_P003_nid_radio_list_in kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_in kcg_copy_array_int_5

#define kcg_comp_P003_TrainTrack_int_TM kcg_comp_array_int_8

#define kcg_copy_P003_TrainTrack_int_TM kcg_copy_array_int_8

#define kcg_comp_M_154_T_TM_radio_messa kcg_comp_struct_97872

#define kcg_copy_M_154_T_TM_radio_messa kcg_copy_struct_97872

#define kcg_comp_P131_RBCTransitionOrde kcg_comp_struct_99535

#define kcg_copy_P131_RBCTransitionOrde kcg_copy_struct_99535

#define kcg_comp_P131_OBU_T_TM kcg_comp_struct_99535

#define kcg_copy_P131_OBU_T_TM kcg_copy_struct_99535

#define kcg_comp_Array09_TM kcg_comp_array_int_9

#define kcg_copy_Array09_TM kcg_copy_array_int_9

#define kcg_comp_P203V1_OBU_l_section_e kcg_comp_struct_96819

#define kcg_copy_P203V1_OBU_l_section_e kcg_copy_struct_96819

#define kcg_comp_P203V1_OBU_l_sectionli kcg_comp_array_97512

#define kcg_copy_P203V1_OBU_l_sectionli kcg_copy_array_97512

#define kcg_comp_P203V1_OBU_k_m_section kcg_comp_struct_97648

#define kcg_copy_P203V1_OBU_k_m_section kcg_copy_struct_97648

#define kcg_comp__2_P203V1_OBU_k_m_sect kcg_comp_array_97910

#define kcg_copy__2_P203V1_OBU_k_m_sect kcg_copy_array_97910

#define kcg_comp_P203V1_OBU_k_section_e kcg_comp_struct_99510

#define kcg_copy_P203V1_OBU_k_section_e kcg_copy_struct_99510

#define kcg_comp_P203V1_OBU_k_sectionli kcg_comp_array_97133

#define kcg_copy_P203V1_OBU_k_sectionli kcg_copy_array_97133

#define kcg_comp_P203V1_OBU_n_section_e kcg_comp_struct_97938

#define kcg_copy_P203V1_OBU_n_section_e kcg_copy_struct_97938

#define kcg_comp_P203V1_OBU_n_sectionli kcg_comp_array_97906

#define kcg_copy_P203V1_OBU_n_sectionli kcg_copy_array_97906

#define kcg_comp_nidC_T_Packet_Types_Pk kcg_comp_struct_97900

#define kcg_copy_nidC_T_Packet_Types_Pk kcg_copy_struct_97900

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Radio_TrainTrack_Heade kcg_comp_struct_99614

#define kcg_copy_Radio_TrainTrack_Heade kcg_copy_struct_99614

#define kcg_comp_Radio_TrainTrack_Messa kcg_comp_struct_96876

#define kcg_copy_Radio_TrainTrack_Messa kcg_copy_struct_96876

#define kcg_comp_Driver2MAR_T_TA_MA_Req kcg_comp_struct_96805

#define kcg_copy_Driver2MAR_T_TA_MA_Req kcg_copy_struct_96805

#define kcg_comp_P009_TrainTrack_int_TM kcg_comp_array_int_3

#define kcg_copy_P009_TrainTrack_int_TM kcg_copy_array_int_3

#define kcg_comp_P000_TrainTrack_int_TM kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM kcg_copy_array_int_17

#define kcg_comp_P001_TrainTrack_int_TM kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM kcg_copy_array_int_17

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct_97368

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct_97368

#define kcg_comp_P015_sections_array_fl kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_fl kcg_copy_array_int_128

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P021_sections_array_fl kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_fl kcg_copy_array_int_99

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_MRSP_section_t_TrackAt kcg_comp_struct_97386

#define kcg_copy_MRSP_section_t_TrackAt kcg_copy_struct_97386

#define kcg_comp_P135_StopShuntingOnDes kcg_comp_struct_97663

#define kcg_copy_P135_StopShuntingOnDes kcg_copy_struct_97663

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct_97455

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct_97455

#define kcg_comp_P138_ReversingAreaInfo kcg_comp_struct_97455

#define kcg_copy_P138_ReversingAreaInfo kcg_copy_struct_97455

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct_98165

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct_98165

#define kcg_comp_P139_ReversingSupervis kcg_comp_struct_98165

#define kcg_copy_P139_ReversingSupervis kcg_copy_struct_98165

#define kcg_comp_P027V1_sections_array_ kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_ kcg_copy_array_int_64

#define kcg_comp_P041_sections_array_fl kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_fl kcg_copy_array_int_99

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct_97663

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct_97663

#define kcg_comp_P012_sections_array_fl kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_fl kcg_copy_array_int_128

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct_97368

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct_97368

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp__21_GradientProfile_fo kcg_comp_struct_97809

#define kcg_copy__21_GradientProfile_fo kcg_copy_struct_97809

#define kcg_comp_P003V1_section_enum_T_ kcg_comp_struct_97900

#define kcg_copy_P003V1_section_enum_T_ kcg_copy_struct_97900

#define kcg_comp_P003V1_sectionlist_enu kcg_comp_array_96889

#define kcg_copy_P003V1_sectionlist_enu kcg_copy_array_96889

#define kcg_comp_P003V1_OBU_sectionlist kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist kcg_copy_array_int_32

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_P003_OBU_nid_c_section kcg_comp_struct_97900

#define kcg_copy_P003_OBU_nid_c_section kcg_copy_struct_97900

#define kcg_comp__4_P003_OBU_nid_c_sect kcg_comp_array_96889

#define kcg_copy__4_P003_OBU_nid_c_sect kcg_copy_array_96889

#define kcg_comp_P003_OBU_l_section_enu kcg_comp_struct_96819

#define kcg_copy_P003_OBU_l_section_enu kcg_copy_struct_96819

#define kcg_comp_P003_OBU_l_sectionlist kcg_comp_array_97512

#define kcg_copy_P003_OBU_l_sectionlist kcg_copy_array_97512

#define kcg_comp_P003_OBU_k_m_section_e kcg_comp_struct_97648

#define kcg_copy_P003_OBU_k_m_section_e kcg_copy_struct_97648

#define kcg_comp_P003_OBU_k_m_sectionli kcg_comp_array_97910

#define kcg_copy_P003_OBU_k_m_sectionli kcg_copy_array_97910

#define kcg_comp_P003_OBU_k_section_enu kcg_comp_struct_99510

#define kcg_copy_P003_OBU_k_section_enu kcg_copy_struct_99510

#define kcg_comp_P003_OBU_k_sectionlist kcg_comp_array_97133

#define kcg_copy_P003_OBU_k_sectionlist kcg_copy_array_97133

#define kcg_comp_P003_OBU_n_section_enu kcg_comp_struct_97938

#define kcg_copy_P003_OBU_n_section_enu kcg_copy_struct_97938

#define kcg_comp_P003_OBU_n_sectionlist kcg_comp_array_97906

#define kcg_copy_P003_OBU_n_sectionlist kcg_copy_array_97906

#define kcg_comp_Driver2MAR_T_MA_Reques kcg_comp_struct_96805

#define kcg_copy_Driver2MAR_T_MA_Reques kcg_copy_struct_96805

#define kcg_comp_P011_ntc_list_TM_Train kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_TM_Train kcg_copy_array_int_5

#define kcg_comp_P011_voltage_TM_TrainT kcg_comp_struct_96969

#define kcg_copy_P011_voltage_TM_TrainT kcg_copy_struct_96969

#define kcg_comp_P011_voltage_list_TM_T kcg_comp_array_97554

#define kcg_copy_P011_voltage_list_TM_T kcg_copy_array_97554

#define kcg_comp_M_129_T_TM_radio_messa kcg_comp_struct_97872

#define kcg_copy_M_129_T_TM_radio_messa kcg_copy_struct_97872

#define kcg_comp_P011_ntc_list_array_T_ kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_array_T_ kcg_copy_array_int_5

#define kcg_comp_P011_voltage_section_a kcg_comp_array_int_2

#define kcg_copy_P011_voltage_section_a kcg_copy_array_int_2

#define kcg_comp_P011_voltage_sections_ kcg_comp_array_int_8

#define kcg_copy_P011_voltage_sections_ kcg_copy_array_int_8

#define kcg_comp_P011_TrainTrack_int_TM kcg_comp_array_int_25

#define kcg_copy_P011_TrainTrack_int_TM kcg_copy_array_int_25

#define kcg_comp_D_test_distance_T_TIU_ kcg_comp_struct_97749

#define kcg_copy_D_test_distance_T_TIU_ kcg_copy_struct_97749

#define kcg_comp_D_test_trackinit_T_TIU kcg_comp_struct_97749

#define kcg_copy_D_test_trackinit_T_TIU kcg_copy_struct_97749

#define kcg_comp_L_test_trackcond_T_TIU kcg_comp_struct_97749

#define kcg_copy_L_test_trackcond_T_TIU kcg_copy_struct_97749

#define kcg_comp_D_test_trackcond_T_TIU kcg_comp_struct_97749

#define kcg_copy_D_test_trackcond_T_TIU kcg_copy_struct_97749

#define kcg_comp_M_136_T_TM_radio_messa kcg_comp_struct_97872

#define kcg_copy_M_136_T_TM_radio_messa kcg_copy_struct_97872

#define kcg_comp_P044_TrainTrack_int_TM kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM kcg_copy_array_int_25

#define kcg_comp_P005_TrainTrack_int_TM kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM kcg_copy_array_int_3

#define kcg_comp_P004_TrainTrack_int_TM kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM kcg_copy_array_int_3

#define kcg_comp_P058_sections_array_fl kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_fl kcg_copy_array_int_64

#define kcg_comp_Array08_TM kcg_comp_array_int_8

#define kcg_copy_Array08_TM kcg_copy_array_int_8

#define kcg_comp_DMI_Icon_Ack_int_array kcg_comp_array_int_3

#define kcg_copy_DMI_Icon_Ack_int_array kcg_copy_array_int_3

#define kcg_comp_DMI_Train_Data_Ack_int kcg_comp_array_int_3

#define kcg_copy_DMI_Train_Data_Ack_int kcg_copy_array_int_3

#define kcg_comp_DMI_Text_Message_Ack_i kcg_comp_array_int_4

#define kcg_copy_DMI_Text_Message_Ack_i kcg_copy_array_int_4

#define kcg_comp_DMI_Radio_Net_Data_int kcg_comp_array_int_2

#define kcg_copy_DMI_Radio_Net_Data_int kcg_copy_array_int_2

#define kcg_comp_DMI_Driver_Request_int kcg_comp_array_int_3

#define kcg_copy_DMI_Driver_Request_int kcg_copy_array_int_3

#define kcg_comp_DMI_Identifier_int_arr kcg_comp_array_int_261

#define kcg_copy_DMI_Identifier_int_arr kcg_copy_array_int_261

#define kcg_comp_DMI_Status_int_array_T kcg_comp_array_int_4

#define kcg_copy_DMI_Status_int_array_T kcg_copy_array_int_4

#define kcg_comp_DMI_Level_Data_int_arr kcg_comp_array_int_4

#define kcg_copy_DMI_Level_Data_int_arr kcg_copy_array_int_4

#define kcg_comp_DMI_Train_Data_int_arr kcg_comp_array_int_9

#define kcg_copy_DMI_Train_Data_int_arr kcg_copy_array_int_9

#define kcg_comp_DMI_Adhesion_Factor_Da kcg_comp_array_int_3

#define kcg_copy_DMI_Adhesion_Factor_Da kcg_copy_array_int_3

#define kcg_comp_DMI_Train_Running_Numb kcg_comp_array_int_3

#define kcg_copy_DMI_Train_Running_Numb kcg_copy_array_int_3

#define kcg_comp_DriverIdentifier_INT_T kcg_comp_array_int_9

#define kcg_copy_DriverIdentifier_INT_T kcg_copy_array_int_9

#define kcg_comp_ASafeRow_T_CalcBraking kcg_comp_array_real_100

#define kcg_copy_ASafeRow_T_CalcBraking kcg_copy_array_real_100

#define kcg_comp_ASafeDistanceDefinitio kcg_comp_array_real_100

#define kcg_copy_ASafeDistanceDefinitio kcg_copy_array_real_100

#define kcg_comp_v_BrakeSteps_t_SDMConv kcg_comp_array_int_6

#define kcg_copy_v_BrakeSteps_t_SDMConv kcg_copy_array_int_6

#define kcg_comp_a_BrakeSteps_t_SDMConv kcg_comp_array_int_6

#define kcg_copy_a_BrakeSteps_t_SDMConv kcg_copy_array_int_6

#define kcg_comp_v_MergedSteps_t_SDMCon kcg_comp_array_int_13

#define kcg_copy_v_MergedSteps_t_SDMCon kcg_copy_array_int_13

#define kcg_comp_a_MergedSteps_t_SDMCon kcg_comp_array_int_13

#define kcg_copy_a_MergedSteps_t_SDMCon kcg_copy_array_int_13

#define kcg_comp_v_KvSteps_t_SDMConvers kcg_comp_array_int_7

#define kcg_copy_v_KvSteps_t_SDMConvers kcg_copy_array_int_7

#define kcg_comp_m_KvSteps_t_SDMConvers kcg_comp_array_int_7

#define kcg_copy_m_KvSteps_t_SDMConvers kcg_copy_array_int_7

#define kcg_comp_LKrIntLookUp_t_SDMConv kcg_comp_array_int_32

#define kcg_copy_LKrIntLookUp_t_SDMConv kcg_copy_array_int_32

#define kcg_comp_coeff_BrakeBasic_t_SDM kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDM kcg_copy_array_real_3

#define kcg_comp_ParabolaCurveAccelerat kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveAccelerat kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveSpeeds_T_ kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveSpeeds_T_ kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveDistances kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveDistances kcg_copy_array_real_114

#define kcg_comp_TractionDeltaTriple_Ta kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_Ta kcg_copy_array_real_3

#define kcg_comp_DMI_loadingGauge_T_DMI kcg_comp_struct_97464

#define kcg_copy_DMI_loadingGauge_T_DMI kcg_copy_struct_97464

#define kcg_comp_DMI_airtightSystem_T_D kcg_comp_struct_97464

#define kcg_copy_DMI_airtightSystem_T_D kcg_copy_struct_97464

#define kcg_comp_DMI_vMax_id_T_DMI_Type kcg_comp_struct_97464

#define kcg_copy_DMI_vMax_id_T_DMI_Type kcg_copy_struct_97464

#define kcg_comp_DMI_brakeModel_id_T_DM kcg_comp_struct_97464

#define kcg_copy_DMI_brakeModel_id_T_DM kcg_copy_struct_97464

#define kcg_comp_DMI_Icons_int_array_T_ kcg_comp_array_int_9

#define kcg_copy_DMI_Icons_int_array_T_ kcg_copy_array_int_9

#define kcg_comp_DMI_EVC_Radio_Net_Data kcg_comp_array_int_3

#define kcg_copy_DMI_EVC_Radio_Net_Data kcg_copy_array_int_3

#define kcg_comp_DMI_LevelList_int_arra kcg_comp_array_int_65

#define kcg_copy_DMI_LevelList_int_arra kcg_copy_array_int_65

#define kcg_comp_DMI_Display_Control_in kcg_comp_array_int_3

#define kcg_copy_DMI_Display_Control_in kcg_copy_array_int_3

#define kcg_comp_DMI_System_Version_int kcg_comp_array_int_3

#define kcg_copy_DMI_System_Version_int kcg_copy_array_int_3

#define kcg_comp_DMI_Identifier_Request kcg_comp_array_int_261

#define kcg_copy_DMI_Identifier_Request kcg_copy_array_int_261

#define kcg_comp_DMI_speedProfileElemen kcg_comp_struct_97386

#define kcg_copy_DMI_speedProfileElemen kcg_copy_struct_97386

#define kcg_comp_DMI_speedProfile_int_a kcg_comp_array_int_129

#define kcg_copy_DMI_speedProfile_int_a kcg_copy_array_int_129

#define kcg_comp_DMI_gradientProfileEle kcg_comp_struct_97809

#define kcg_copy_DMI_gradientProfileEle kcg_copy_struct_97809

#define kcg_comp_DMI_gradientProfile_in kcg_comp_array_int_129

#define kcg_copy_DMI_gradientProfile_in kcg_copy_array_int_129

#define kcg_comp_DMI_trackCondition_int kcg_comp_array_int_65

#define kcg_copy_DMI_trackCondition_int kcg_copy_array_int_65

#define kcg_comp_DMI_EVC_Coded_Train_Da kcg_comp_array_int_9

#define kcg_copy_DMI_EVC_Coded_Train_Da kcg_copy_array_int_9

#define kcg_comp_DMI_Entry_Request_int_ kcg_comp_array_int_3

#define kcg_copy_DMI_Entry_Request_int_ kcg_copy_array_int_3

#define kcg_comp_DMI_Menu_Request_int_a kcg_comp_array_int_3

#define kcg_copy_DMI_Menu_Request_int_a kcg_copy_array_int_3

#define kcg_comp_DMI_Dynamic_int_array_ kcg_comp_array_int_24

#define kcg_copy_DMI_Dynamic_int_array_ kcg_copy_array_int_24

#define kcg_comp_D_test_current_T_TIU_T kcg_comp_struct_97749

#define kcg_copy_D_test_current_T_TIU_T kcg_copy_struct_97749

#define kcg_comp_D_test_traction_T_TIU_ kcg_comp_struct_97749

#define kcg_copy_D_test_traction_T_TIU_ kcg_copy_struct_97749

#endif /* _KCG_TYPES_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

