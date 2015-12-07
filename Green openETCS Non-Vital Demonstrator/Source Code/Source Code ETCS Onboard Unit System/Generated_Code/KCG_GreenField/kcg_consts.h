/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* cEmptyChangeTractionSystem */
extern const Change_traction_system_T_TIU_Ty cEmptyChangeTractionSystem;

/* cPassengerDoorControlInfo */
extern const Passenger_door_control_info_T_T cPassengerDoorControlInfo;

/* cEmptyChangeOfAllowedCurrentConsumption */
extern const Change_of_allowed_current_consu cEmptyChangeOfAllowedCurrentCon;

/* cEmptyDMIAdhesionFactorData */
extern const _23_DMI_Adhesion_Factor_Data_T_ cEmptyDMIAdhesionFactorData;

/* cEmptyDMITrainRunningNumber */
extern const _24_DMI_Train_Running_Number_T_ cEmptyDMITrainRunningNumber;

/* cEmptyDMIDriverIdentifier */
extern const _25_DMI_Driver_Identifier_T_DMI cEmptyDMIDriverIdentifier;

/* cEmptyDMIRadioNet */
extern const _26_DMI_EVC_Radio_Net_Data_T_DM cEmptyDMIRadioNet;

/* cEmptyDMIDisplayControl */
extern const DMI_Display_Control_T_DMI_Messa cEmptyDMIDisplayControl;

/* cEmptyDMIEVCcodedTrainData */
extern const _28_DMI_EVC_Coded_Train_Data_T_ cEmptyDMIEVCcodedTrainData;

/* cEmptyDMIMA */
extern const movementAuthorityForDMI_T_DMI_T cEmptyDMIMA;

/* cEmptyLocationBasedEvents */
extern const LocationBasedEvents_T_ProvidePo cEmptyLocationBasedEvents;

/* cEmptyBrakeInhibitionCommand */
extern const Brake_inhibition_command_T_TIU_ cEmptyBrakeInhibitionCommand;

/* cEmptyTrainCommand */
extern const Type_I_train_commands_T_TIU_Typ cEmptyTrainCommand;

/* cOwnVersion */
#define cOwnVersion M_VERSION_Version_2_0_introduce

/* cEmptyPassedBG */
extern const passedBG_T_BG_Types_Pkg cEmptyPassedBG;

/* cEmtpyIsolationStatus */
extern const Isolation_Status_T_TIU_Types_Pk cEmtpyIsolationStatus;

/* cEmptyData_From_STM */
extern const T_Data_From_STM_Level_And_Mode_ cEmptyData_From_STM;

/* cEmptyRadioNetworkIds */
extern const radioNetWorkIDs_T_MoRC_Pck cEmptyRadioNetworkIds;

/* cNoMobileConnectionContext */
extern const mobileConnectionContext_T_RCM_T cNoMobileConnectionContext;

/* cNoMobileRegistrationContext */
extern const mobileRegistrationContext_T_RCM cNoMobileRegistrationContext;

/* cNoPositioningErrors */
extern const positionErrors_T_TrainPosition_ cNoPositioningErrors;

/* cNoMsgErrors */
extern const MSG_Errors_T_Common_Types_Pkg cNoMsgErrors;

/* cNoRadioCmd */
extern const radioManagementMessage_T_Common cNoRadioCmd;

/* cEmptyTrainPosition */
extern const trainPosition_T_TrainPosition_T cEmptyTrainPosition;

/* cEmptyBrakeCommand */
extern const Brake_command_T_TIU_Types_Pkg cEmptyBrakeCommand;

/* cEmptySpeedForDMI */
extern const speedSupervisionForDMI_T_DMI_Ty cEmptySpeedForDMI;

/* cNoSupervisingRBC */
extern const connection_ids_T_Handover_Pkg cNoSupervisingRBC;

/* cEmptyPositionedBGs */
extern const positionedBGs_T_TrainPosition_T cEmptyPositionedBGs;

/* cEmptyTrainProperties */
extern const trainProperties_T_TrainPosition cEmptyTrainProperties;

/* cMLInitialModesAndLevel */
extern const T_Mode_Level_Level_And_Mode_Typ cMLInitialModesAndLevel;

/* cNoPersistentData */
extern const ps_dataForStartOfMission_T_API_ cNoPersistentData;

/* cNo_Levels */
extern const DMI_LevelList_T_DMI_Types_Pkg cNo_Levels;

/* cNoTDEvents */
extern const trainData_Events_T_trainData_Ty cNoTDEvents;

/* cNoP0 */
extern const PT0_PositionReport_T_Packet_Tra cNoP0;

/* cNoP1 */
extern const PT1_PositionReport_2BG_T_Packet cNoP1;

/* cNoPacketsForML */
extern const T_Data_From_Track_Packet_Level_ cNoPacketsForML;

/* Level_And_Mode_Types_Pkg::C_Cycle_Duration */
#define C_Cycle_Duration_Level_And_Mode 300

/* Level_And_Mode_Types_Pkg::C_Driver_Ack_Delay */
#define C_Driver_Ack_Delay_Level_And_Mo 5000

/* InputManagement::cImmediateAck_Distance */
#define cImmediateAck_Distance_InputMan 32767

/* Level_And_Mode_Types_Pkg::M_Max_ModeProfile */
#define M_Max_ModeProfile_Level_And_Mod 3

/* Level_And_Mode_Types_Pkg::M_Max_TransitionInPriorityTable */
#define M_Max_TransitionInPriorityTable 7

/* cEmptyBrakeCmd */
extern const Brake_command_T_TIU_Types_Pkg cEmptyBrakeCmd;

/* manage_DMI_Output_Pkg::cDefaultTrainData */
extern const DMI_Train_Data_T_DMI_Messages_B cDefaultTrainData_manage_DMI_Ou;

/* manage_DMI_Output_Pkg::cDefaultDynamic */
extern const DMI_Dynamic_T_DMI_Messages_EVC_ cDefaultDynamic_manage_DMI_Outp;

/* manage_DMI_Output_Pkg::ctimeInterval */
#define ctimeInterval_manage_DMI_Output 30

/* manage_DMI_Output_Pkg::cOutputStatus */
extern const dmiOutputs_T_manage_DMI_Output_ cOutputStatus_manage_DMI_Output;

/* manage_DMI_Output_Pkg::cEmptyInitRequest */
extern const _27_DMI_Identifier_Request_T_DM cEmptyInitRequest_manage_DMI_Ou;

/* manage_DMI_Output_Pkg::cSendInitRequest */
extern const _27_DMI_Identifier_Request_T_DM cSendInitRequest_manage_DMI_Out;

/* manage_DMI_Output_Pkg::cNoMenu */
extern const DMI_Menu_Request_T_DMI_Messages cNoMenu_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuTrainData */
extern const DMI_Menu_Request_T_DMI_Messages cMenuTrainData_manage_DMI_Outpu;

/* manage_DMI_Output_Pkg::cMenuStart */
extern const DMI_Menu_Request_T_DMI_Messages cMenuStart_manage_DMI_Output_Pk;

/* manage_DMI_Output_Pkg::cMenuLevel */
extern const DMI_Menu_Request_T_DMI_Messages cMenuLevel_manage_DMI_Output_Pk;

/* manage_DMI_Output_Pkg::cEmptyIconRequest */
extern const DMI_Icons_T_DMI_Messages_EVC_to cEmptyIconRequest_manage_DMI_Ou;

/* manage_DMI_Output_Pkg::cIconClearEB */
extern const DMI_Icons_T_DMI_Messages_EVC_to cIconClearEB_manage_DMI_Output_;

/* manage_DMI_Output_Pkg::cIconRequestEB */
extern const DMI_Icons_T_DMI_Messages_EVC_to cIconRequestEB_manage_DMI_Outpu;

/* manage_DMI_Output_Pkg::cInitBrakeCommand */
extern const Brake_command_T_TIU_Types_Pkg cInitBrakeCommand_manage_DMI_Ou;

/* manage_DMI_Output_Pkg::cEmptyVersion */
extern const DMI_System_Version_T_DMI_Messag cEmptyVersion_manage_DMI_Output;

/* manage_DMI_Output_Pkg::cEmptyLevelData */
extern const DMI_EVC_Level_Data_T_DMI_Messag cEmptyLevelData_manage_DMI_Outp;

/* manage_DMI_Output_Pkg::cNoTrackCondition */
extern const DMI_trackCondition_T_DMI_Types_ cNoTrackCondition_manage_DMI_Ou;

/* manage_DMI_Output_Pkg::cEmptySpeedProfileElement */
extern const DMI_speedProfileElement_T_DMI_T cEmptySpeedProfileElement_manag;

/* manage_DMI_Output_Pkg::cEmptyGradientProfileElement */
extern const DMI_gradientProfileElement_T_DM cEmptyGradientProfileElement_ma;

/* manage_DMI_Output_Pkg::cEmptyIdentifierRequest */
extern const _27_DMI_Identifier_Request_T_DM cEmptyIdentifierRequest_manage_;

/* manage_DMI_Output_Pkg::cEVCIdentifierRequest */
extern const _27_DMI_Identifier_Request_T_DM cEVCIdentifierRequest_manage_DM;

/* manage_DMI_Output_Pkg::cTextSpecial_BG */
extern const DMI_Text_Message_T_DMI_Messages cTextSpecial_BG_manage_DMI_Outp;

/* manage_TextMessages_Pkg::cText_Level_0 */
extern const DMI_Text_Message_T_DMI_Messages cText_Level_0_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Level_1 */
extern const DMI_Text_Message_T_DMI_Messages cText_Level_1_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Level_2 */
extern const DMI_Text_Message_T_DMI_Messages cText_Level_2_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Level_3 */
extern const DMI_Text_Message_T_DMI_Messages cText_Level_3_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Level_NTC */
extern const DMI_Text_Message_T_DMI_Messages cText_Level_NTC_manage_TextMess;

/* manage_TextMessages_Pkg::cText_Mode_SR */
extern const DMI_Text_Message_T_DMI_Messages cText_Mode_SR_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Mode_OS */
extern const DMI_Text_Message_T_DMI_Messages cText_Mode_OS_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Mode_SH */
extern const DMI_Text_Message_T_DMI_Messages cText_Mode_SH_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Mode_LS */
extern const DMI_Text_Message_T_DMI_Messages cText_Mode_LS_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Mode_SN */
extern const DMI_Text_Message_T_DMI_Messages cText_Mode_SN_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Mode_UN */
extern const DMI_Text_Message_T_DMI_Messages cText_Mode_UN_manage_TextMessag;

/* manage_TextMessages_Pkg::cText_Mode_TR */
extern const DMI_Text_Message_T_DMI_Messages cText_Mode_TR_manage_TextMessag;

/* manage_DMI_Output_Pkg::cDefaultText */
extern const DMI_Text_Message_T_DMI_Messages cDefaultText_manage_DMI_Output_;

/* Messages::cEVC_DMI_int_array */
extern const EVC_to_DMI_Message_int_T_API_DM cEVC_DMI_int_array_Messages;

/* DATA::cDMI_Dynamic_int_array_size */
#define cDMI_Dynamic_int_array_size_DAT 24

/* ENUM_M_SupervisionDisplay_T_supDis_normal */
#define _111_ENUM_M_SupervisionDisplay_ supDis_normal_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_indication */
#define _110_ENUM_M_SupervisionDisplay_ supDis_indication_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_overspeed */
#define _109_ENUM_M_SupervisionDisplay_ supDis_overspeed_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_warning */
#define _108_ENUM_M_SupervisionDisplay_ supDis_warning_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_intervention */
#define ENUM_M_SupervisionDisplay_T_sup supDis_intervention_DMI_Types_P

/* INT_M_SupervisionDisplay_T_supDis_normal */
#define _107_INT_M_SupervisionDisplay_T 0

/* INT_M_SupervisionDisplay_T_supDis_intervention */
#define _106_INT_M_SupervisionDisplay_T 4

/* INT_M_SupervisionDisplay_T_supDis_warning */
#define _105_INT_M_SupervisionDisplay_T 3

/* INT_M_SupervisionDisplay_T_supDis_overspeed */
#define _104_INT_M_SupervisionDisplay_T 2

/* INT_M_SupervisionDisplay_T_supDis_indication */
#define INT_M_SupervisionDisplay_T_supD 1

/* ENUM_M_SUPERVISION_STATUS_CSM */
#define ENUM_M_SUPERVISION_STATUS_CSM CSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_PIM */
#define ENUM_M_SUPERVISION_STATUS_PIM PIM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_TSM */
#define ENUM_M_SUPERVISION_STATUS_TSM TSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_RSM */
#define ENUM_M_SUPERVISION_STATUS_RSM RSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_supervision_status_unknown */
#define ENUM_M_SUPERVISION_STATUS_super supervision_status_unknown_DMI_

/* INT_M_SUPERVISION_STATUS_CSM */
#define INT_M_SUPERVISION_STATUS_CSM 0

/* INT_M_SUPERVISION_STATUS_supervision_status_unknown */
#define INT_M_SUPERVISION_STATUS_superv 4

/* INT_M_SUPERVISION_STATUS_RSM */
#define INT_M_SUPERVISION_STATUS_RSM 3

/* INT_M_SUPERVISION_STATUS_TSM */
#define INT_M_SUPERVISION_STATUS_TSM 2

/* INT_M_SUPERVISION_STATUS_PIM */
#define INT_M_SUPERVISION_STATUS_PIM 1

/* ENUM_connectionStatusRadioUnit_T_conn_unknown */
#define _103_ENUM_connectionStatusRadio conn_unknown_API_RadioCommunica

/* ENUM_connectionStatusRadioUnit_T_conn_no_connection */
#define _102_ENUM_connectionStatusRadio conn_no_connection_API_RadioCom

/* ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp */
#define _101_ENUM_connectionStatusRadio conn_ConnectionUp_API_RadioComm

/* ENUM_connectionStatusRadioUnit_T_conn_SetupFailed */
#define ENUM_connectionStatusRadioUnit_ conn_SetupFailed_API_RadioCommu

/* INT_connectionStatusRadioUnit_T_conn_unknown */
#define _100_INT_connectionStatusRadioU 0

/* INT_connectionStatusRadioUnit_T_conn_SetupFailed */
#define _99_INT_connectionStatusRadioUn 3

/* INT_connectionStatusRadioUnit_T_conn_ConnectionUp */
#define _98_INT_connectionStatusRadioUn 2

/* INT_connectionStatusRadioUnit_T_conn_no_connection */
#define INT_connectionStatusRadioUnit_T 1

/* DATA::cDMI_Menu_Request_int_array_size */
#define cDMI_Menu_Request_int_array_siz 3

/* DATA::cDMI_Entry_Request_int_array_size */
#define cDMI_Entry_Request_int_array_si 3

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier */
#define _97_ENUM_DMI_List_Entry_Request Enter_revalidate_driver_identif

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number */
#define _96_ENUM_DMI_List_Entry_Request Enter_revalidate_train_running_

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level */
#define _95_ENUM_DMI_List_Entry_Request Enter_revalidate_ETCS_level_DMI

/* ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu */
#define _94_ENUM_DMI_List_Entry_Request Enter_RBC_contact_menu_DMI_Type

/* ENUM_DMI_List_Entry_Request_T_Validate_train_data */
#define ENUM_DMI_List_Entry_Request_T_V Validate_train_data_DMI_Types_P

/* ENUM_DMI_List_Entry_Request_T_Enter_NTC_data */
#define _93_ENUM_DMI_List_Entry_Request Enter_NTC_data_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Spare */
#define _92_ENUM_DMI_List_Entry_Request Spare_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver */
#define ENUM_DMI_List_Entry_Request_T_E Enable_the_track_ahead_free_by_

/* ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page */
#define ENUM_DMI_List_Entry_Request_T_D Disable_the_Track_Ahead_free_pa

/* ENUM_DMI_List_Entry_Request_T_Show_main_window */
#define _91_ENUM_DMI_List_Entry_Request Show_main_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Hide_main_window */
#define _90_ENUM_DMI_List_Entry_Request Hide_main_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window */
#define ENUM_DMI_List_Entry_Request_T_H Hide_adhesion_factor_entry_wind

/* ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window */
#define _89_ENUM_DMI_List_Entry_Request Show_Set_VBC_validation_window_

/* ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window */
#define ENUM_DMI_List_Entry_Request_T_S Show_Remove_VBC_validation_wind

/* INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window */
#define _88_INT_DMI_List_Entry_Request_ 14

/* INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window */
#define _87_INT_DMI_List_Entry_Request_ 13

/* INT_DMI_List_Entry_Request_T_Hide_staff_responsible_entry_window */
#define _86_INT_DMI_List_Entry_Request_ 12

/* INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window */
#define _85_INT_DMI_List_Entry_Request_ 11

/* INT_DMI_List_Entry_Request_T_Hide_main_window */
#define INT_DMI_List_Entry_Request_T_Hi 10

/* INT_DMI_List_Entry_Request_T_Show_main_window */
#define INT_DMI_List_Entry_Request_T_Sh 9

/* INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page */
#define INT_DMI_List_Entry_Request_T_Di 8

/* INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver */
#define _84_INT_DMI_List_Entry_Request_ 7

/* INT_DMI_List_Entry_Request_T_Spare */
#define INT_DMI_List_Entry_Request_T_Sp 6

/* INT_DMI_List_Entry_Request_T_Enter_NTC_data */
#define _83_INT_DMI_List_Entry_Request_ 5

/* INT_DMI_List_Entry_Request_T_Validate_train_data */
#define INT_DMI_List_Entry_Request_T_Va 4

/* INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu */
#define _82_INT_DMI_List_Entry_Request_ 3

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level */
#define _81_INT_DMI_List_Entry_Request_ 2

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number */
#define _80_INT_DMI_List_Entry_Request_ 1

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier */
#define INT_DMI_List_Entry_Request_T_En 0

/* DATA::cDMI_EVC_Coded_Train_Data_int_array_size */
#define cDMI_EVC_Coded_Train_Data_int_a 9

/* ENUM_DMI_Q_TEXT_acknowledgment */
#define ENUM_DMI_Q_TEXT_acknowledgment acknowledgment_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_balise_read_error */
#define ENUM_DMI_Q_TEXT_balise_read_err balise_read_error_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_communication_error */
#define ENUM_DMI_Q_TEXT_communication_e communication_error_DMI_Types_P

/* ENUM_DMI_Q_TEXT_emergency_stop */
#define ENUM_DMI_Q_TEXT_emergency_stop emergency_stop_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_entering_FS */
#define ENUM_DMI_Q_TEXT_entering_FS entering_FS_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_entering_OS */
#define ENUM_DMI_Q_TEXT_entering_OS entering_OS_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_level_crossing_not_protected */
#define ENUM_DMI_Q_TEXT_level_crossing_ level_crossing_not_protected_DM

/* ENUM_DMI_Q_TEXT_no_MA_received_at_level_transition */
#define ENUM_DMI_Q_TEXT_no_MA_received_ no_MA_received_at_level_transit

/* ENUM_DMI_Q_TEXT_no_track_condition_will_be_received */
#define ENUM_DMI_Q_TEXT_no_track_condit no_track_condition_will_be_rece

/* ENUM_DMI_Q_TEXT_no_track_description */
#define ENUM_DMI_Q_TEXT_no_track_descri no_track_description_DMI_Types_

/* ENUM_DMI_Q_TEXT_radio_network_registration_failed */
#define ENUM_DMI_Q_TEXT_radio_network_r radio_network_registration_fail

/* ENUM_DMI_Q_TEXT_route_unsuitable_axle_load_category */
#define _79_ENUM_DMI_Q_TEXT_route_unsui route_unsuitable_axle_load_cate

/* ENUM_DMI_Q_TEXT_route_unsuitable_loading_gauge */
#define _78_ENUM_DMI_Q_TEXT_route_unsui route_unsuitable_loading_gauge_

/* ENUM_DMI_Q_TEXT_route_unsuitable_traction_system */
#define ENUM_DMI_Q_TEXT_route_unsuitabl route_unsuitable_traction_syste

/* ENUM_DMI_Q_TEXT_runaway_movement */
#define ENUM_DMI_Q_TEXT_runaway_movemen runaway_movement_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_RV_distance_esceeded */
#define ENUM_DMI_Q_TEXT_RV_distance_esc RV_distance_esceeded_DMI_Types_

/* ENUM_DMI_Q_TEXT_SH_refused */
#define ENUM_DMI_Q_TEXT_SH_refused SH_refused_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_request_failed */
#define ENUM_DMI_Q_TEXT_SH_request_fail SH_request_failed_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_stop_order */
#define ENUM_DMI_Q_TEXT_SH_stop_order SH_stop_order_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SR_distance_exceeded */
#define ENUM_DMI_Q_TEXT_SR_distance_exc SR_distance_exceeded_DMI_Types_

/* ENUM_DMI_Q_TEXT_SR_stop_order */
#define ENUM_DMI_Q_TEXT_SR_stop_order SR_stop_order_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_STM_brake_Deman */
#define ENUM_DMI_Q_TEXT_STM_brake_Deman STM_brake_Deman_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_trackside_malfunction */
#define ENUM_DMI_Q_TEXT_trackside_malfu trackside_malfunction_DMI_Types

/* ENUM_DMI_Q_TEXT_trackside_not_compatible */
#define ENUM_DMI_Q_TEXT_trackside_not_c trackside_not_compatible_DMI_Ty

/* ENUM_DMI_Q_TEXT_train_data_changed */
#define ENUM_DMI_Q_TEXT_train_data_chan train_data_changed_DMI_Types_Pk

/* ENUM_DMI_Q_TEXT_train_is_rejected */
#define ENUM_DMI_Q_TEXT_train_is_reject train_is_rejected_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA */
#define ENUM_DMI_Q_TEXT_unauthorized_pa unauthorized_passing_of_EOA_LOA

/* INT_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA */
#define INT_DMI_Q_TEXT_unauthorized_pas 10

/* INT_DMI_Q_TEXT_train_is_rejected */
#define INT_DMI_Q_TEXT_train_is_rejecte 9

/* INT_DMI_Q_TEXT_train_data_changed */
#define INT_DMI_Q_TEXT_train_data_chang 8

/* INT_DMI_Q_TEXT_trackside_not_compatible */
#define INT_DMI_Q_TEXT_trackside_not_co 7

/* INT_DMI_Q_TEXT_trackside_malfunction */
#define INT_DMI_Q_TEXT_trackside_malfun 16

/* INT_DMI_Q_TEXT_STM_brake_Deman */
#define INT_DMI_Q_TEXT_STM_brake_Deman 20

/* INT_DMI_Q_TEXT_SR_stop_order */
#define INT_DMI_Q_TEXT_SR_stop_order 14

/* INT_DMI_Q_TEXT_SR_distance_exceeded */
#define INT_DMI_Q_TEXT_SR_distance_exce 12

/* INT_DMI_Q_TEXT_SH_stop_order */
#define INT_DMI_Q_TEXT_SH_stop_order 13

/* INT_DMI_Q_TEXT_SH_request_failed */
#define INT_DMI_Q_TEXT_SH_request_faile 17

/* INT_DMI_Q_TEXT_SH_refused */
#define INT_DMI_Q_TEXT_SH_refused 6

/* INT_DMI_Q_TEXT_RV_distance_esceeded */
#define INT_DMI_Q_TEXT_RV_distance_esce 18

/* INT_DMI_Q_TEXT_runaway_movement */
#define INT_DMI_Q_TEXT_runaway_movement 5

/* INT_DMI_Q_TEXT_route_unsuitable_traction_system */
#define _77_INT_DMI_Q_TEXT_route_unsuit 23

/* INT_DMI_Q_TEXT_route_unsuitable_loading_gauge */
#define _76_INT_DMI_Q_TEXT_route_unsuit 22

/* INT_DMI_Q_TEXT_route_unsuitable_axle_load_category */
#define INT_DMI_Q_TEXT_route_unsuitable 21

/* INT_DMI_Q_TEXT_radio_network_registration_failed */
#define INT_DMI_Q_TEXT_radio_network_re 24

/* INT_DMI_Q_TEXT_no_track_description */
#define INT_DMI_Q_TEXT_no_track_descrip 19

/* INT_DMI_Q_TEXT_no_track_condition_will_be_received */
#define INT_DMI_Q_TEXT_no_track_conditi 4

/* INT_DMI_Q_TEXT_no_MA_received_at_level_transition */
#define INT_DMI_Q_TEXT_no_MA_received_a 11

/* INT_DMI_Q_TEXT_level_crossing_not_protected */
#define INT_DMI_Q_TEXT_level_crossing_n 25

/* INT_DMI_Q_TEXT_entering_OS */
#define INT_DMI_Q_TEXT_entering_OS 3

/* INT_DMI_Q_TEXT_entering_FS */
#define INT_DMI_Q_TEXT_entering_FS 2

/* INT_DMI_Q_TEXT_emergency_stop */
#define INT_DMI_Q_TEXT_emergency_stop 15

/* INT_DMI_Q_TEXT_communication_error */
#define INT_DMI_Q_TEXT_communication_er 1

/* INT_DMI_Q_TEXT_balise_read_error */
#define INT_DMI_Q_TEXT_balise_read_erro 0

/* INT_DMI_Q_TEXT_acknowledgment */
#define INT_DMI_Q_TEXT_acknowledgment 26

/* TM_conversions::ENUM_Q_TEXTCLASS_important */
#define ENUM_Q_TEXTCLASS_important_TM_c Q_TEXTCLASS_Important_Informati

/* TM_conversions::ENUM_Q_TEXTCLASS_aux */
#define ENUM_Q_TEXTCLASS_aux_TM_convers Q_TEXTCLASS_Auxiliary_Informati

/* TM_conversions::INT_Q_TEXTCLASS_important */
#define INT_Q_TEXTCLASS_important_TM_co 1

/* TM_conversions::INT_Q_TEXTCLASS_aux */
#define INT_Q_TEXTCLASS_aux_TM_conversi 0

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation */
#define _20_ENUM_Q_TEXTCONFIRM_confirma _55_Q_TEXTCONFIRM_Confirmation_

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation_EB */
#define _19_ENUM_Q_TEXTCONFIRM_confirma Q_TEXTCONFIRM_Confirmation_requ

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation_SB */
#define ENUM_Q_TEXTCONFIRM_confirmation _54_Q_TEXTCONFIRM_Confirmation_

/* TM_conversions::ENUM_Q_TEXTCONFIRM_no_confirmation */
#define ENUM_Q_TEXTCONFIRM_no_confirmat Q_TEXTCONFIRM_No_confirmation_r

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation */
#define _18_INT_Q_TEXTCONFIRM_confirmat 1

/* TM_conversions::INT_Q_TEXTCONFIRM_no_confirmation */
#define INT_Q_TEXTCONFIRM_no_confirmati 0

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation_SB */
#define _17_INT_Q_TEXTCONFIRM_confirmat 2

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation_EB */
#define INT_Q_TEXTCONFIRM_confirmation_ 3

/* DATA::Packets::EVC_to_DMI::cDMI_Track_Description_in */
extern const _51_DMI_Track_Description_int_a cDMI_Track_Description_in_DATA_;

/* DMI_Types_Pkg::cDMI_maxTrackCondProfile */
#define cDMI_maxTrackCondProfile_DMI_Ty 32

/* TM_conversions::ENUM_M_TRACKCOND_Air_tightness */
#define ENUM_M_TRACKCOND_Air_tightness_ M_TRACKCOND_Switch_off_regenera

/* TM_conversions::ENUM_M_TRACKCOND_Non_stopping_area */
#define ENUM_M_TRACKCOND_Non_stopping_a M_TRACKCOND_Non_stopping_area_I

/* TM_conversions::ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph */
#define _16_ENUM_M_TRACKCOND_Powerless_ M_TRACKCOND_Powerless_section_L

/* TM_conversions::ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch */
#define ENUM_M_TRACKCOND_Powerless_sect M_TRACKCOND_Powerless_section_s

/* TM_conversions::ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT */
#define ENUM_M_TRACKCOND_Radio_hole_sto M_TRACKCOND_Radio_hole_stop_sup

/* TM_conversions::ENUM_M_TRACKCOND_Sound_horn */
#define ENUM_M_TRACKCOND_Sound_horn_TM_ M_TRACKCOND_Sound_horn_Initial_

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake */
#define _15_ENUM_M_TRACKCOND_Switch_off M_TRACKCOND_Switch_off_eddy_cur

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake */
#define ENUM_M_TRACKCOND_Switch_off_edd _53_M_TRACKCOND_Switch_off_eddy

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake */
#define ENUM_M_TRACKCOND_Switch_off_mag M_TRACKCOND_Switch_off_magnetic

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_regenerative_brake */
#define ENUM_M_TRACKCOND_Switch_off_reg M_TRACKCOND_Powerless_section_s

/* TM_conversions::ENUM_M_TRACKCOND_Tunnel_stopping_area */
#define ENUM_M_TRACKCOND_Tunnel_stoppin M_TRACKCOND_Tunnel_stopping_are

/* TM_conversions::INT_M_TRACKCOND_Non_stopping_area */
#define INT_M_TRACKCOND_Non_stopping_ar 0

/* TM_conversions::INT_M_TRACKCOND_Tunnel_stopping_area */
#define INT_M_TRACKCOND_Tunnel_stopping 1

/* TM_conversions::INT_M_TRACKCOND_Switch_off_regenerative_brake */
#define INT_M_TRACKCOND_Switch_off_rege 6

/* TM_conversions::INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake */
#define INT_M_TRACKCOND_Switch_off_magn 8

/* TM_conversions::INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake */
#define _14_INT_M_TRACKCOND_Switch_off_ 7

/* TM_conversions::INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake */
#define INT_M_TRACKCOND_Switch_off_eddy 10

/* TM_conversions::INT_M_TRACKCOND_Sound_horn */
#define INT_M_TRACKCOND_Sound_horn_TM_c 2

/* TM_conversions::INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT */
#define INT_M_TRACKCOND_Radio_hole_stop 4

/* TM_conversions::INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch */
#define _13_INT_M_TRACKCOND_Powerless_s 9

/* TM_conversions::INT_M_TRACKCOND_Powerless_section_Lower_pantograph */
#define INT_M_TRACKCOND_Powerless_secti 3

/* TM_conversions::INT_M_TRACKCOND_Air_tightness */
#define INT_M_TRACKCOND_Air_tightness_T 5

/* DMI_Types_Pkg::cDMI_maxGradientProfile */
#define cDMI_maxGradientProfile_DMI_Typ 32

/* DMI_Types_Pkg::cDMI_maxSpeedProfile */
#define cDMI_maxSpeedProfile_DMI_Types_ 32

/* DATA::cDMI_Identifier_Request_int_array_size */
#define cDMI_Identifier_Request_int_arr 261

/* DATA::cDMI_System_Version_int_array_size */
#define cDMI_System_Version_int_array_s 3

/* DATA::cDMI_Display_Control_int_array_size */
#define cDMI_Display_Control_int_array_ 3

/* ENUM_Icon_control_flag_T_show_icon_in_area */
#define _75_ENUM_Icon_control_flag_T_sh show_icon_in_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_clear_area */
#define ENUM_Icon_control_flag_T_clear_ clear_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_show_icon_flashing_in_area */
#define _74_ENUM_Icon_control_flag_T_sh show_icon_flashing_in_area_DMI_

/* ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area */
#define ENUM_Icon_control_flag_T_show_i show_icon_with_yellow_flashing_

/* INT_Icon_control_flag_T_show_icon_in_area */
#define _73_INT_Icon_control_flag_T_sho 0

/* INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area */
#define _72_INT_Icon_control_flag_T_sho 3

/* INT_Icon_control_flag_T_show_icon_flashing_in_area */
#define INT_Icon_control_flag_T_show_ic 2

/* INT_Icon_control_flag_T_clear_area */
#define INT_Icon_control_flag_T_clear_a 1

/* ENUM_Icon_group_T_level_symbol */
#define ENUM_Icon_group_T_level_symbol level_symbol_DMI_Types_Pkg

/* ENUM_Icon_group_T_mode_symbols */
#define ENUM_Icon_group_T_mode_symbols mode_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_navigation_symbols */
#define ENUM_Icon_group_T_navigation_sy navigation_symbols_DMI_Types_Pk

/* ENUM_Icon_group_T_order_an_announcements_symbols */
#define ENUM_Icon_group_T_order_an_anno order_an_announcements_symbols_

/* ENUM_Icon_group_T_planning_information_symbols */
#define ENUM_Icon_group_T_planning_info planning_information_symbols_DM

/* ENUM_Icon_group_T_settings_symbols */
#define ENUM_Icon_group_T_settings_symb settings_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_status_symbols */
#define ENUM_Icon_group_T_status_symbol status_symbols_DMI_Types_Pkg

/* INT_Icon_group_T_status_symbols */
#define INT_Icon_group_T_status_symbols 2

/* INT_Icon_group_T_settings_symbols */
#define INT_Icon_group_T_settings_symbo 6

/* INT_Icon_group_T_planning_information_symbols */
#define INT_Icon_group_T_planning_infor 4

/* INT_Icon_group_T_order_an_announcements_symbols */
#define INT_Icon_group_T_order_an_annou 3

/* INT_Icon_group_T_navigation_symbols */
#define INT_Icon_group_T_navigation_sym 5

/* INT_Icon_group_T_mode_symbols */
#define INT_Icon_group_T_mode_symbols 1

/* INT_Icon_group_T_level_symbol */
#define INT_Icon_group_T_level_symbol 0

/* ENUM_Area_group_T_A */
#define ENUM_Area_group_T_A A_DMI_Types_Pkg

/* ENUM_Area_group_T_B */
#define ENUM_Area_group_T_B B_DMI_Types_Pkg

/* ENUM_Area_group_T_C */
#define ENUM_Area_group_T_C C_DMI_Types_Pkg

/* ENUM_Area_group_T_D */
#define ENUM_Area_group_T_D D_DMI_Types_Pkg

/* ENUM_Area_group_T_E */
#define ENUM_Area_group_T_E E_DMI_Types_Pkg

/* ENUM_Area_group_T_F */
#define ENUM_Area_group_T_F F_DMI_Types_Pkg

/* ENUM_Area_group_T_G */
#define ENUM_Area_group_T_G G_DMI_Types_Pkg

/* ENUM_Area_group_T_H */
#define ENUM_Area_group_T_H H_DMI_Types_Pkg

/* INT_Area_group_T_H */
#define INT_Area_group_T_H 7

/* INT_Area_group_T_G */
#define INT_Area_group_T_G 6

/* INT_Area_group_T_F */
#define INT_Area_group_T_F 5

/* INT_Area_group_T_E */
#define INT_Area_group_T_E 4

/* INT_Area_group_T_D */
#define INT_Area_group_T_D 3

/* INT_Area_group_T_C */
#define INT_Area_group_T_C 2

/* INT_Area_group_T_B */
#define INT_Area_group_T_B 1

/* INT_Area_group_T_A */
#define INT_Area_group_T_A 0

/* DATA::Packets::Bothways::cDMI_Driver_Identifier_int */
extern const DMI_Driver_Identifier_int_array cDMI_Driver_Identifier_int_DATA;

/* API_DMI_Pkg::cMessage_EVC_to_DMI_size */
#define cMessage_EVC_to_DMI_size_API_DM 999

/* ManageProcedure_Pkg::cNID_BG_Radio_Header */
extern const Radio_TrackTrain_Header_T_Radio cNID_BG_Radio_Header_ManageProc;

/* ManageProcedure_Pkg::cpacket42_to_MoRC */
extern const P42_SessionManagement_T_Packet_ cpacket42_to_MoRC_ManageProcedu;

/* ManageProcedure_Pkg::cpacket45_nid_mn_to_MoRC */
#define cpacket45_nid_mn_to_MoRC_Manage 1234

/* ManageProcedure_Pkg::cpacket45_to_MoRC */
extern const P45_RadioNetworkRegistration_T_ cpacket45_to_MoRC_ManageProcedu;

/* ManageProcedure_Pkg::cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC */
extern const P42_SessionManagement_T_Packet_ cpacket42_q_rbc_ni_rbc_nid_radi;

/* ManageProcedure_Pkg::cdefault_manageT */
extern const radioManagementMessage_T_Common cdefault_manageT_ManageProcedur;

/* ManageProcedure_Pkg::cSendingRBC */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC_ManageProcedure_Pkg;

/* SDM_Commands_Pkg::cSupervisionStatus */
#define cSupervisionStatus_SDM_Commands Undefined_Supervision_SDM_Types

/* SDM_Commands_Pkg::cSDM_Types */
#define cSDM_Types_SDM_Commands_Pkg No_SDM_Type_SDM_Types_Pkg

/* DMI_Types_Pkg::cDMIUnknownSpeed */
#define cDMIUnknownSpeed_DMI_Types_Pkg (- 1)

/* TargetManagement_pkg::emptyMRSPSection */
extern const MRSP_internal_section_T_TargetM emptyMRSPSection_TargetManageme;

/* TargetManagement_pkg::emptyTarget */
extern const Target_real_T_TargetManagement_ emptyTarget_TargetManagement_pk;

/* SDM_Types_Pkg::V_ebi_min */
#define V_ebi_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_ebi_min */
#define dV_ebi_min_SDM_Types_Pkg 2.083333333

/* SDM_Types_Pkg::dV_ebi_max */
#define dV_ebi_max_SDM_Types_Pkg 4.166666667

/* SDM_Types_Pkg::V_ebi_max */
#define V_ebi_max_SDM_Types_Pkg 58.333333333

/* SDM_Types_Pkg::V_warning_min */
#define V_warning_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_warning_min */
#define dV_warning_min_SDM_Types_Pkg 1.111111111

/* SDM_Types_Pkg::dV_warning_max */
#define dV_warning_max_SDM_Types_Pkg 1.388888889

/* SDM_Types_Pkg::V_warning_max */
#define V_warning_max_SDM_Types_Pkg 38.888888889

/* SDM_Types_Pkg::V_sbi_min */
#define V_sbi_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_sbi_min */
#define dV_sbi_min_SDM_Types_Pkg 1.527777778

/* SDM_Types_Pkg::dV_sbi_max */
#define dV_sbi_max_SDM_Types_Pkg 2.777777778

/* SDM_Types_Pkg::V_sbi_max */
#define V_sbi_max_SDM_Types_Pkg 58.333333333

/* SDM_Types_Pkg::T_preindication */
#define T_preindication_SDM_Types_Pkg 7.0

/* TargetLimits_Pkg::cMAX_Onboard_V_Release_Iterations */
#define cMAX_Onboard_V_Release_Iteratio 10

/* SDM_Types_Pkg::T_warning */
#define T_warning_SDM_Types_Pkg 2.0

/* SDM_Types_Pkg::T_driver */
#define T_driver_SDM_Types_Pkg 4.0

/* SDMConversionModelPkg::cBrakePositionGCt */
#define cBrakePositionGCt_SDMConversion 0.16

/* SDMConversionModelPkg::cBrakePositionPCt */
#define cBrakePositionPCt_SDMConversion 0.2

/* SDMConversionModelPkg::cBrakePositionLengthShort */
#define cBrakePositionLengthShort_SDMCo 900.0

/* SDMConversionModelPkg::cBrakePositionGECoeff */
extern const coeff_BrakeBasic_t_SDMConversio cBrakePositionGECoeff_SDMConver;

/* SDMConversionModelPkg::cBrakePositionFreightLongECoeff */
extern const coeff_BrakeBasic_t_SDMConversio cBrakePositionFreightLongECoeff;

/* SDMConversionModelPkg::cBrakePositionFreightLongSCoeff */
extern const coeff_BrakeBasic_t_SDMConversio cBrakePositionFreightLongSCoeff;

/* SDMConversionModelPkg::cBrakePositionPassengerSCoeff */
extern const coeff_BrakeBasic_t_SDMConversio cBrakePositionPassengerSCoeff_S;

/* SDMConversionModelPkg::cBrakePositionFreightShortSCoeff */
extern const coeff_BrakeBasic_t_SDMConversio cBrakePositionFreightShortSCoef;

/* SDMConversionModelPkg::cBrakePositionPECoeff */
extern const coeff_BrakeBasic_t_SDMConversio cBrakePositionPECoeff_SDMConver;

/* SDMConversionModelPkg::cBrakePositionLengthMin */
#define cBrakePositionLengthMin_SDMConv 400.0

/* SDMConversionModelPkg::cLKrIntLookUp */
extern const array_int_32 cLKrIntLookUp_SDMConversionMode;

/* SDMConversionModelPkg::cKvIntSetLength */
#define cKvIntSetLength_SDMConversionMo cNIterMax_Packet_Types_Pkg

/* SDMConversionModelPkg::cEmptyKvIntSet */
extern const nvkvintset_T_Packet_Types_Pkg cEmptyKvIntSet_SDMConversionMod;

/* SDMConversionModelPkg::cBrakePercentServiceMax */
#define cBrakePercentServiceMax_SDMConv 135

/* SDMConversionModelPkg::cBrakePercentALookup */
extern const array_int_6_221 cBrakePercentALookup_SDMConvers;

/* SDMConversionModelPkg::cBrakePercentV_lim */
extern const array_int_4 cBrakePercentV_lim_SDMConversio;

/* SDMConversionModelPkg::cBrakePercentSpeedLookup */
extern const array_int_221 cBrakePercentSpeedLookup_SDMCon;

/* SDMConversionModelPkg::cBrakePercentSteps */
#define cBrakePercentSteps_SDMConversio (cBrakePercentStepsMax_SDMConver - cBrakePercentStepsMin_SDMConver + 1)

/* SDMConversionModelPkg::cBrakePercentStepsMax */
#define cBrakePercentStepsMax_SDMConver 250

/* SDMConversionModelPkg::cBrakePercentStepsMin */
#define cBrakePercentStepsMin_SDMConver 30

/* SDMConversionModelPkg::cKvMergedLength */
#define cKvMergedLength_SDMConversionMo (cBrakePercentSpeedSteps_SDMConv + cKvIntLength_SDMConversionModel)

/* SDMConversionModelPkg::cKvIntLength */
#define cKvIntLength_SDMConversionModel cNIterMax_Packet_Types_Pkg

/* SDMConversionModelPkg::cBrakePercentSpeedSteps */
#define cBrakePercentSpeedSteps_SDMConv 6

/* SDM_Types_Pkg::A_gravity */
#define A_gravity_SDM_Types_Pkg 981

/* SDM_Types_Pkg::M_rotating_max */
#define M_rotating_max_SDM_Types_Pkg 15

/* SDM_Types_Pkg::M_rotating_min */
#define M_rotating_min_SDM_Types_Pkg 2

/* CalcBrakingCurves_types::cMAX_BC_ARCS */
#define cMAX_BC_ARCS_CalcBrakingCurves_ (cMAX_DISTANCE_STEPS_CalcBraking + cMAX_SPEED_VALUE_STEP_CalcBraki)

/* CalcBrakingCurves_types::cMAX_DISTANCE_STEPS */
#define cMAX_DISTANCE_STEPS_CalcBraking GradientMaxSectionsTrainlengthC

/* SDM_GradientAcceleration_types::GradientMaxSectionsTrainlengthCompensated */
#define GradientMaxSectionsTrainlengthC (GradientMaxSections_TrackAtlasT * 2)

/* CalcBrakingCurves_types::cMAX_SPEED_VALUE_STEP */
#define cMAX_SPEED_VALUE_STEP_CalcBraki (cNIterMax_Packet_Types_Pkg + 6 + 1)

/* Level_And_Mode_Types_Pkg::M_Default_Transition */
extern const T_LevelTransition_Level_And_Mod M_Default_Transition_Level_And_;

/* DMI_Types_Pkg::cDMI_EVC_Status_Default */
extern const DMI_EVC_status_T_DMI_Types_Pkg cDMI_EVC_Status_Default_DMI_Typ;

/* DMI_Types_Pkg::cEmptyTestStatusList */
extern const DMI_TXT_MSGList_status_T_DMI_Ty cEmptyTestStatusList_DMI_Types_;

/* Messages::cDMI_EVC_CT */
extern const DMI_to_EVC_Message_T_API_DMI_Pk cDMI_EVC_CT_Messages;

/* API_DMI_Pkg::cMessage_DMI_to_EVC_size */
#define cMessage_DMI_to_EVC_size_API_DM 311

/* DATA::Packets::Bothways::cDMI_Driver_Identifier */
extern const _25_DMI_Driver_Identifier_T_DMI cDMI_Driver_Identifier_DATA_Pac;

/* DATA::cDMI_Driver_Identifier_int_array_size */
#define cDMI_Driver_Identifier_int_arra 11

/* DATA::cDMI_Train_Running_Number_int_array_size */
#define cDMI_Train_Running_Number_int_a 3

/* DATA::cDMI_Adhesion_Factor_Data_int_array_size */
#define cDMI_Adhesion_Factor_Data_int_a 3

/* TM_conversions::ENUM_M_ADHESION_slippery_rail */
#define ENUM_M_ADHESION_slippery_rail_T M_ADHESION_Slippery_rail

/* TM_conversions::ENUM_M_ADHESION_no_slippery_rail */
#define ENUM_M_ADHESION_no_slippery_rai M_ADHESION_Non_slippery_rail

/* TM_conversions::INT_M_ADHESION_slippery_rail */
#define INT_M_ADHESION_slippery_rail_TM 0

/* TM_conversions::INT_M_ADHESION_no_slippery_rail */
#define INT_M_ADHESION_no_slippery_rail 1

/* DATA::cDMI_Train_Data_int_array_size */
#define cDMI_Train_Data_int_array_size_ 9

/* TM_conversions::ENUM_M_AXLELOADCAT_C4 */
#define ENUM_M_AXLELOADCAT_C4_TM_conver M_AXLELOADCAT_C4

/* DATA::cDMI_Level_Data_int_array_size */
#define cDMI_Level_Data_int_array_size_ 4

/* DATA::Packets::DMI_to_EVC::cDMI_Status */
extern const DMI_Status_T_DMI_Messages_DMI_t cDMI_Status_DATA_Packets_DMI_to;

/* DATA::cDMI_Status_int_array_size */
#define cDMI_Status_int_array_size_DATA 4

/* INT_DMI_StatusSet_T_Running_state */
#define INT_DMI_StatusSet_T_Running_sta 0

/* INT_DMI_StatusSet_T_Starting_state */
#define INT_DMI_StatusSet_T_Starting_st 1

/* INT_DMI_StatusSet_T_Failure_state */
#define INT_DMI_StatusSet_T_Failure_sta 2

/* INT_DMI_StatusSet_T_Running_not_active_state */
#define INT_DMI_StatusSet_T_Running_not 3

/* INT_DMI_StatusSet_T_Train_Speed_Overflow */
#define INT_DMI_StatusSet_T_Train_Speed 4

/* INT_DMI_StatusSet_T_Invalid_track_condition */
#define INT_DMI_StatusSet_T_Invalid_tra 5

/* INT_DMI_StatusSet_T_Invalid_predefined_text_message */
#define INT_DMI_StatusSet_T_Invalid_pre 6

/* INT_DMI_StatusSet_T_Invalid_text_message */
#define INT_DMI_StatusSet_T_Invalid_tex 7

/* INT_DMI_StatusSet_T_HW_warning_temp_reached */
#define INT_DMI_StatusSet_T_HW_warning_ 8

/* INT_DMI_StatusSet_T_TFT_OFF_temp_reached */
#define INT_DMI_StatusSet_T_TFT_OFF_tem 9

/* INT_DMI_StatusSet_T_Device_OFF_temp_reached */
#define INT_DMI_StatusSet_T_Device_OFF_ 10

/* INT_DMI_StatusSet_T_Over_temperature */
#define INT_DMI_StatusSet_T_Over_temper 11

/* INT_DMI_StatusSet_T_Backlight_on_off */
#define INT_DMI_StatusSet_T_Backlight_o 12

/* INT_DMI_StatusSet_T_FAN_blocked */
#define INT_DMI_StatusSet_T_FAN_blocked 14

/* INT_DMI_StatusSet_T_Power_supply_key_switch_off */
#define INT_DMI_StatusSet_T_Power_suppl 15

/* INT_DMI_StatusSet_T_Watchdog_not_running */
#define INT_DMI_StatusSet_T_Watchdog_no 16

/* ENUM_DMI_StatusSet_T_Running_state */
#define ENUM_DMI_StatusSet_T_Running_st Running_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Watchdog_not_running */
#define ENUM_DMI_StatusSet_T_Watchdog_n Watchdog_not_running_DMI_Types_

/* ENUM_DMI_StatusSet_T_Power_supply_key_switch_off */
#define ENUM_DMI_StatusSet_T_Power_supp Power_supply_key_switch_off_DMI

/* ENUM_DMI_StatusSet_T_FAN_blocked */
#define ENUM_DMI_StatusSet_T_FAN_blocke FAN_blocked_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Backlight_on_off */
#define ENUM_DMI_StatusSet_T_Backlight_ Backlight_on_off_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Over_temperature */
#define ENUM_DMI_StatusSet_T_Over_tempe Over_temperature_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Device_OFF_temp_reached */
#define ENUM_DMI_StatusSet_T_Device_OFF Device_OFF_temp_reached_DMI_Typ

/* ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached */
#define ENUM_DMI_StatusSet_T_TFT_OFF_te TFT_OFF_temp_reached_DMI_Types_

/* ENUM_DMI_StatusSet_T_HW_warning_temp_reached */
#define ENUM_DMI_StatusSet_T_HW_warning HW_warning_temp_reached_DMI_Typ

/* ENUM_DMI_StatusSet_T_Invalid_text_message */
#define ENUM_DMI_StatusSet_T_Invalid_te Invalid_text_message_DMI_Types_

/* ENUM_DMI_StatusSet_T_Invalid_predefined_text_message */
#define ENUM_DMI_StatusSet_T_Invalid_pr Invalid_predefined_text_message

/* ENUM_DMI_StatusSet_T_Invalid_track_condition */
#define ENUM_DMI_StatusSet_T_Invalid_tr Invalid_track_condition_DMI_Typ

/* ENUM_DMI_StatusSet_T_Train_Speed_Overflow */
#define ENUM_DMI_StatusSet_T_Train_Spee Train_Speed_Overflow_DMI_Types_

/* ENUM_DMI_StatusSet_T_Running_not_active_state */
#define ENUM_DMI_StatusSet_T_Running_no Running_not_active_state_DMI_Ty

/* ENUM_DMI_StatusSet_T_Failure_state */
#define ENUM_DMI_StatusSet_T_Failure_st Failure_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Starting_state */
#define ENUM_DMI_StatusSet_T_Starting_s Starting_state_DMI_Types_Pkg

/* DATA::Packets::DMI_to_EVC::cDMI_Identifier */
extern const DMI_Identifier_T_DMI_Messages_D cDMI_Identifier_DATA_Packets_DM;

/* DATA::cDMI_Identifier_int_array_size */
#define cDMI_Identifier_int_array_size_ 261

/* INT_DMI_DMI_Identifier_T_DMI_1 */
#define INT_DMI_DMI_Identifier_T_DMI_1 0

/* INT_DMI_DMI_Identifier_T_DMI_2 */
#define INT_DMI_DMI_Identifier_T_DMI_2 1

/* ENUM_DMI_DMI_Identifier_T_DMI_1 */
#define ENUM_DMI_DMI_Identifier_T_DMI_1 DMI_1_DMI_Types_Pkg

/* ENUM_DMI_DMI_Identifier_T_DMI_2 */
#define ENUM_DMI_DMI_Identifier_T_DMI_2 DMI_2_DMI_Types_Pkg

/* INT_DMI_Cabin_Identifier_T_cabin_A */
#define _71_INT_DMI_Cabin_Identifier_T_ 0

/* INT_DMI_Cabin_Identifier_T_cabin_B */
#define INT_DMI_Cabin_Identifier_T_cabi 1

/* ENUM_DMI_Cabin_Identifier_T_cabin_A */
#define _70_ENUM_DMI_Cabin_Identifier_T cabin_A_DMI_Types_Pkg

/* ENUM_DMI_Cabin_Identifier_T_cabin_B */
#define ENUM_DMI_Cabin_Identifier_T_cab cabin_B_DMI_Types_Pkg

/* DATA::Packets::DMI_to_EVC::cDMI_Driver_Request */
extern const DMI_Driver_Request_T_DMI_Messag cDMI_Driver_Request_DATA_Packet;

/* DATA::cDMI_Driver_Reqest_int_array_size */
#define cDMI_Driver_Reqest_int_array_si 3

/* INT_DMI_Request_T_End_of_NTC_data_entry */
#define INT_DMI_Request_T_End_of_NTC_da 37

/* INT_DMI_Request_T_Hide_tunnel_stopping_information */
#define INT_DMI_Request_T_Hide_tunnel_s 35

/* INT_DMI_Request_T_Language_changed */
#define INT_DMI_Request_T_Language_chan 17

/* INT_DMI_Request_T_Level_entry_request */
#define INT_DMI_Request_T_Level_entry_r 6

/* INT_DMI_Request_T_Maintain_shunting */
#define INT_DMI_Request_T_Maintain_shun 5

/* INT_DMI_Request_T_Non_leading */
#define INT_DMI_Request_T_Non_leading 3

/* INT_DMI_Request_T_Non_leading_exit */
#define INT_DMI_Request_T_Non_leading_e 4

/* INT_DMI_Request_T_NTC_data_entry_request */
#define INT_DMI_Request_T_NTC_data_entr 36

/* INT_DMI_Request_T_Override_EOA */
#define INT_DMI_Request_T_Override_EOA 7

/* INT_DMI_Request_T_Override_route_unsuitability */
#define INT_DMI_Request_T_Override_rout 8

/* INT_DMI_Request_T_Radio_network_entry_aborted */
#define INT_DMI_Request_T_Radio_network 21

/* INT_DMI_Request_T_Remove_VBC_request */
#define INT_DMI_Request_T_Remove_VBC_re 33

/* INT_DMI_Request_T_Request_for_Adhesion_factor_data */
#define INT_DMI_Request_T_Request_for_A 11

/* INT_DMI_Request_T_Request_for_radio_network_entry */
#define INT_DMI_Request_T_Request_for_r 9

/* INT_DMI_Request_T_Request_for_SR_data */
#define INT_DMI_Request_T_Request_for_S 12

/* INT_DMI_Request_T_Request_for_switching_train_data_entry */
#define _69_INT_DMI_Request_T_Request_f 14

/* INT_DMI_Request_T_Request_for_system_version */
#define INT_DMI_Request_T_Request_for_s 13

/* INT_DMI_Request_T_Request_for_train_data */
#define _68_INT_DMI_Request_T_Request_f 10

/* INT_DMI_Request_T_Request_for_train_data_view */
#define INT_DMI_Request_T_Request_for_t 15

/* INT_DMI_Request_T_Request_isolation */
#define INT_DMI_Request_T_Request_isola 29

/* INT_DMI_Request_T_Request_to_contact_last_known_RBC */
#define INT_DMI_Request_T_Request_to_co 27

/* INT_DMI_Request_T_Request_to_hide_geographical_information */
#define _67_INT_DMI_Request_T_Request_t 22

/* INT_DMI_Request_T_Request_to_hide_supervision_data */
#define INT_DMI_Request_T_Request_to_hi 24

/* INT_DMI_Request_T_Train_running_number_entry_aborted */
#define INT_DMI_Request_T_Train_running 19

/* INT_DMI_Request_T_Train_data_entry_aborted */
#define INT_DMI_Request_T_Train_data_en 18

/* INT_DMI_Request_T_Track_Ahead_Free_is_validated */
#define INT_DMI_Request_T_Track_Ahead_F 30

/* INT_DMI_Request_T_The_Train_Integrity_request */
#define INT_DMI_Request_T_The_Train_Int 31

/* INT_DMI_Request_T_Start_of_mission */
#define INT_DMI_Request_T_Start_of_miss 0

/* INT_DMI_Request_T_SR_data_entry_aborted */
#define INT_DMI_Request_T_SR_data_entry 20

/* INT_DMI_Request_T_Shunting_exit */
#define INT_DMI_Request_T_Shunting_exit 2

/* INT_DMI_Request_T_Shunting_entry */
#define INT_DMI_Request_T_Shunting_entr 1

/* INT_DMI_Request_T_Show_tunnel_stopping_information */
#define INT_DMI_Request_T_Show_tunnel_s 34

/* INT_DMI_Request_T_Set_VBC_request */
#define INT_DMI_Request_T_Set_VBC_reque 32

/* INT_DMI_Request_T_Scroll_text_up */
#define INT_DMI_Request_T_Scroll_text_u 25

/* INT_DMI_Request_T_Scroll_text_down */
#define INT_DMI_Request_T_Scroll_text_d 26

/* INT_DMI_Request_T_Request_to_use_short_number */
#define INT_DMI_Request_T_Request_to_us 28

/* INT_DMI_Request_T_Request_to_show_supervision_data */
#define _66_INT_DMI_Request_T_Request_t 23

/* INT_DMI_Request_T_Request_to_show_geographical_position */
#define INT_DMI_Request_T_Request_to_sh 16

/* ENUM_DMI_Request_T_End_of_NTC_data_entry */
#define ENUM_DMI_Request_T_End_of_NTC_d End_of_NTC_data_entry_DMI_Types

/* ENUM_DMI_Request_T_Request_to_show_geographical_position */
#define _65_ENUM_DMI_Request_T_Request_ Request_to_show_geographical_po

/* ENUM_DMI_Request_T_Request_to_show_supervision_data */
#define ENUM_DMI_Request_T_Request_to_s Request_to_show_supervision_dat

/* ENUM_DMI_Request_T_Request_to_use_short_number */
#define ENUM_DMI_Request_T_Request_to_u Request_to_use_short_number_DMI

/* ENUM_DMI_Request_T_Scroll_text_down */
#define _64_ENUM_DMI_Request_T_Scroll_t Scroll_text_down_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Scroll_text_up */
#define ENUM_DMI_Request_T_Scroll_text_ Scroll_text_up_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Set_VBC_request */
#define ENUM_DMI_Request_T_Set_VBC_requ Set_VBC_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Show_tunnel_stopping_information */
#define ENUM_DMI_Request_T_Show_tunnel_ Show_tunnel_stopping_informatio

/* ENUM_DMI_Request_T_Shunting_entry */
#define ENUM_DMI_Request_T_Shunting_ent Shunting_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Shunting_exit */
#define ENUM_DMI_Request_T_Shunting_exi Shunting_exit_DMI_Types_Pkg

/* ENUM_DMI_Request_T_SR_data_entry_aborted */
#define ENUM_DMI_Request_T_SR_data_entr SR_data_entry_aborted_DMI_Types

/* ENUM_DMI_Request_T_Start_of_mission */
#define ENUM_DMI_Request_T_Start_of_mis Start_of_mission_DMI_Types_Pkg

/* ENUM_DMI_Request_T_The_Train_Integrity_request */
#define ENUM_DMI_Request_T_The_Train_In The_Train_Integrity_request_DMI

/* ENUM_DMI_Request_T_Track_Ahead_Free_is_validated */
#define ENUM_DMI_Request_T_Track_Ahead_ Track_Ahead_Free_is_validated_D

/* ENUM_DMI_Request_T_Train_data_entry_aborted */
#define ENUM_DMI_Request_T_Train_data_e Train_data_entry_aborted_DMI_Ty

/* ENUM_DMI_Request_T_Train_running_number_entry_aborted */
#define ENUM_DMI_Request_T_Train_runnin Train_running_number_entry_abor

/* ENUM_DMI_Request_T_Request_to_hide_supervision_data */
#define _63_ENUM_DMI_Request_T_Request_ Request_to_hide_supervision_dat

/* ENUM_DMI_Request_T_Request_to_hide_geographical_information */
#define ENUM_DMI_Request_T_Request_to_h Request_to_hide_geographical_in

/* ENUM_DMI_Request_T_Request_to_contact_last_known_RBC */
#define ENUM_DMI_Request_T_Request_to_c Request_to_contact_last_known_R

/* ENUM_DMI_Request_T_Request_isolation */
#define ENUM_DMI_Request_T_Request_isol Request_isolation_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_train_data_view */
#define _62_ENUM_DMI_Request_T_Request_ Request_for_train_data_view_DMI

/* ENUM_DMI_Request_T_Request_for_train_data */
#define _61_ENUM_DMI_Request_T_Request_ Request_for_train_data_DMI_Type

/* ENUM_DMI_Request_T_Request_for_system_version */
#define _60_ENUM_DMI_Request_T_Request_ Request_for_system_version_DMI_

/* ENUM_DMI_Request_T_Request_for_switching_train_data_entry */
#define _59_ENUM_DMI_Request_T_Request_ Request_for_switching_train_dat

/* ENUM_DMI_Request_T_Request_for_SR_data */
#define _58_ENUM_DMI_Request_T_Request_ Request_for_SR_data_DMI_Types_P

/* ENUM_DMI_Request_T_Request_for_radio_network_entry */
#define _57_ENUM_DMI_Request_T_Request_ Request_for_radio_network_entry

/* ENUM_DMI_Request_T_Request_for_Adhesion_factor_data */
#define ENUM_DMI_Request_T_Request_for_ Request_for_Adhesion_factor_dat

/* ENUM_DMI_Request_T_Remove_VBC_request */
#define ENUM_DMI_Request_T_Remove_VBC_r Remove_VBC_request_DMI_Types_Pk

/* ENUM_DMI_Request_T_Radio_network_entry_aborted */
#define ENUM_DMI_Request_T_Radio_networ Radio_network_entry_aborted_DMI

/* ENUM_DMI_Request_T_Override_route_unsuitability */
#define ENUM_DMI_Request_T_Override_rou Override_route_unsuitability_DM

/* ENUM_DMI_Request_T_Override_EOA */
#define ENUM_DMI_Request_T_Override_EOA Override_EOA_DMI_Types_Pkg

/* ENUM_DMI_Request_T_NTC_data_entry_request */
#define ENUM_DMI_Request_T_NTC_data_ent NTC_data_entry_request_DMI_Type

/* ENUM_DMI_Request_T_Non_leading_exit */
#define ENUM_DMI_Request_T_Non_leading_ Non_leading_exit_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Non_leading */
#define ENUM_DMI_Request_T_Non_leading Non_leading_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Maintain_shunting */
#define ENUM_DMI_Request_T_Maintain_shu Maintain_shunting_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Level_entry_request */
#define ENUM_DMI_Request_T_Level_entry_ Level_entry_request_DMI_Types_P

/* ENUM_DMI_Request_T_Language_changed */
#define ENUM_DMI_Request_T_Language_cha Language_changed_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Hide_tunnel_stopping_information */
#define ENUM_DMI_Request_T_Hide_tunnel_ Hide_tunnel_stopping_informatio

/* DATA::Packets::DMI_to_EVC::cDMI_Radio_Net_Data */
extern const DMI_Radio_Net_Data_T_DMI_Messag cDMI_Radio_Net_Data_DATA_Packet;

/* DATA::cDMI_Radio_Net_Data_int_array_size */
#define cDMI_Radio_Net_Data_int_array_s 2

/* DATA::Packets::DMI_to_EVC::cDMI_Text_Message_Ack */
extern const DMI_Text_Message_Ack_T_DMI_Mess cDMI_Text_Message_Ack_DATA_Pack;

/* DATA::cDMI_Text_Message_Ack_int_array_size */
#define cDMI_Text_Message_Ack_int_array 4

/* DATA::Packets::DMI_to_EVC::cDMI_Train_Data_Ack */
extern const DMI_Train_Data_Ack_T_DMI_Messag cDMI_Train_Data_Ack_DATA_Packet;

/* DATA::cDMI_Train_Data_Ack_int_array_size */
#define cDMI_Train_Data_Ack_int_array_s 3

/* DATA::Packets::DMI_to_EVC::cDMI_Icon_Ack */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI cDMI_Icon_Ack_DATA_Packets_DMI_;

/* DATA::cDMI_Icon_Ack_int_array_size */
#define cDMI_Icon_Ack_int_array_size_DA 3

/* manage_DMI_Input_Pkg::cDMIIconAckDefault */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI cDMIIconAckDefault_manage_DMI_I;

/* manage_DMI_Input_Pkg::cDMIDriverRequestDefault */
extern const DMI_Driver_Request_T_DMI_Messag cDMIDriverRequestDefault_manage;

/* manage_DMI_Input_Pkg::cDMITextMessageAckDefault */
extern const DMI_Text_Message_Ack_T_DMI_Mess cDMITextMessageAckDefault_manag;

/* manage_DMI_Input_Pkg::cDMIIdentifierDefault */
extern const DMI_Identifier_T_DMI_Messages_D cDMIIdentifierDefault_manage_DM;

/* manage_DMI_Input_Pkg::cDMIDriverIdentifierDefault */
extern const _25_DMI_Driver_Identifier_T_DMI cDMIDriverIdentifierDefault_man;

/* manage_DMI_Input_Pkg::cDMITrainRunningNumberDefault */
extern const _24_DMI_Train_Running_Number_T_ cDMITrainRunningNumberDefault_m;

/* manage_DMI_Input_Pkg::cDMIRadioNetDataDefault */
extern const DMI_Radio_Net_Data_T_DMI_Messag cDMIRadioNetDataDefault_manage_;

/* manage_DMI_Input_Pkg::cDMITrainDataDefault */
extern const DMI_Train_Data_T_DMI_Messages_B cDMITrainDataDefault_manage_DMI;

/* manage_DMI_Input_Pkg::cDMITrainDataAckDefault */
extern const DMI_Train_Data_Ack_T_DMI_Messag cDMITrainDataAckDefault_manage_;

/* manage_DMI_Input_Pkg::cDMIAdhesionFactorDefault */
extern const _23_DMI_Adhesion_Factor_Data_T_ cDMIAdhesionFactorDefault_manag;

/* manage_DMI_Input_Pkg::cAckModesAndLevels */
extern const DMI_To_Modes_T_DMI_Types_Pkg cAckModesAndLevels_manage_DMI_I;

/* DMI_Types_Pkg::cDMI_charsInText */
#define cDMI_charsInText_DMI_Types_Pkg 255

/* DMI_Messages_Bothways_Pkg::cDiverIdentifierLength */
#define cDiverIdentifierLength_DMI_Mess 9

/* manage_TextMessages_Pkg::cNoDMI_ML */
extern const DMI_To_Modes_T_DMI_Types_Pkg cNoDMI_ML_manage_TextMessages_P;

/* DMI_Types_Pkg::cDMI_TextMsgListSize */
#define cDMI_TextMsgListSize_DMI_Types_ 31

/* DMI_Types_Pkg::cFreeTestStatusElement */
extern const DMI_TXT_MSG_status_T_DMI_Types_ cFreeTestStatusElement_DMI_Type;

/* manage_DMI_Input_Pkg::cNoDriverRequestToModes */
extern const DMI_DriverRequest_T_DMI_Types_P cNoDriverRequestToModes_manage_;

/* manage_DMI_Input_Pkg::cNoLevelTransitionInfo */
extern const T_LevelTansitionInfo_Level_And_ cNoLevelTransitionInfo_manage_D;

/* manage_DMI_Input_Pkg::cNo_STM */
#define cNo_STM_manage_DMI_Input_Pkg (- 1)

/* manage_DMI_Input_Pkg::cNoMATrigger */
extern const Driver2MAR_T_MA_Request cNoMATrigger_manage_DMI_Input_P;

/* BG_Types_Pkg::cUnknownBG */
#define cUnknownBG_BG_Types_Pkg 16383

/* Radio_Types_Pkg::cEmptyRadioMsg */
extern const RadioMessage_T_Radio_Types_Pkg cEmptyRadioMsg_Radio_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::cEmptyStore */
extern const TelegramStore_T_Receive_TrackSi cEmptyStore_Receive_TrackSide_M;

/* BG_Types_Pkg::cMaxDistanceBalisesInGroup */
extern const OdometryLocations_T_Obu_BasicTy cMaxDistanceBalisesInGroup_BG_T;

/* BG_Types_Pkg::cEmptyTelegramArray */
extern const TelegramArray_T_BG_Types_Pkg cEmptyTelegramArray_BG_Types_Pk;

/* Receive_TrackSide_Msg_Pkg::cEmptyCollector */
extern const BGCollector_T_Receive_TrackSide cEmptyCollector_Receive_TrackSi;

/* BG_Types_Pkg::cemptyPosition */
extern const centerOfBalisePosition_T_BG_Typ cemptyPosition_BG_Types_Pkg;

/* BG_Types_Pkg::cEmpty_BaliseTlg */
extern const Telegram_T_BG_Types_Pkg cEmpty_BaliseTlg_BG_Types_Pkg;

/* BG_Types_Pkg::cEmptyBGMessages */
extern const BG_Message_T_BG_Types_Pkg cEmptyBGMessages_BG_Types_Pkg;

/* CheckBGConsistency_Pkg::cRecivedMesg_PlaceHolder */
extern const ReceivedMessage_T_Common_Types_ cRecivedMesg_PlaceHolder_CheckB;

/* CheckBGConsistency_Pkg::cTelegram */
extern const Telegram_T_BG_Types_Pkg cTelegram_CheckBGConsistency_Pk;

/* CheckBGConsistency_Pkg::cInConsistentTelegram */
extern const Telegram_T_BG_Types_Pkg cInConsistentTelegram_CheckBGCo;

/* CheckBGConsistency_Pkg::cTheTelegramFitsWithAll */
#define cTheTelegramFitsWithAll_CheckBG 255

/* CheckBGConsistency_Pkg::cTheTelegramNeverFitsAnyMessage */
#define cTheTelegramNeverFitsAnyMessage 254

/* CheckBGConsistency_Pkg::cEurobalise */
#define cEurobalise_CheckBGConsistency_ msrc_Eurobalise_Common_Types_Pk

/* CheckBGConsistency_Pkg::cRadioMetadata */
extern const RadioMetadata_T_Common_Types_Pk cRadioMetadata_CheckBGConsisten;

/* CheckBGConsistency_Pkg::cNoRadioHeader */
extern const Radio_TrackTrain_Header_T_Radio cNoRadioHeader_CheckBGConsisten;

/* CheckBGConsistency_Pkg::cSendingRBC */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC_CheckBGConsistency_;

/* CheckBGConsistency_Pkg::cQDirLRBGunknown */
#define cQDirLRBGunknown_CheckBGConsist Q_DIRLRBG_Unknown

/* CheckBGConsistency_Pkg::cQqDirTrain */
#define cQqDirTrain_CheckBGConsistency_ Q_DIRTRAIN_Unknown

/* CheckBGConsistency_Pkg::cMetaDataElement */
extern const MetadataElement_T_Common_Types_ cMetaDataElement_CheckBGConsist;

/* CheckBGConsistency_Pkg::cMetaData */
extern const Metadata_T_Common_Types_Pkg cMetaData_CheckBGConsistency_Pk;

/* CheckBGConsistency_Pkg::cQDirLrbgNominal */
#define cQDirLrbgNominal_CheckBGConsist Q_DIRLRBG_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainNominal */
#define cQqDirTrainNominal_CheckBGConsi Q_DIRTRAIN_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainRevers */
#define cQqDirTrainRevers_CheckBGConsis Q_DIRTRAIN_Reverse

/* CheckBGConsistency_Pkg::cQDirLrbgRevers */
#define cQDirLrbgRevers_CheckBGConsiste Q_DIRLRBG_Reverse

/* CheckBGConsistency_Pkg::cNoStoredBG */
extern const positionedBG_T_TrainPosition_Ty cNoStoredBG_CheckBGConsistency_;

/* TM_conversions::ENUM_M_VERSION_Previous_versions */
#define ENUM_M_VERSION_Previous_version M_VERSION_Previous_versions_acc

/* TM_conversions::ENUM_M_VERSION_Version_1_0 */
#define ENUM_M_VERSION_Version_1_0_TM_c M_VERSION_Version_1_0_introduce

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_c M_VERSION_Version_1_1_introduce

/* TM_conversions::ENUM_M_VERSION_Version_2_0 */
#define ENUM_M_VERSION_Version_2_0_TM_c M_VERSION_Version_2_0_introduce

/* TM_conversions::INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M_TM_con 15

/* TM_conversions::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM_conversion 32

/* TM_conversions::INT_M_VERSION_1_1 */
#define INT_M_VERSION_1_1_TM_conversion 17

/* TM_conversions::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM_conversion 16

/* ValidateDataDirection_Pkg::cEmptyLRBG */
extern const positionedBG_T_TrainPosition_Ty cEmptyLRBG_ValidateDataDirectio;

/* BG_Types_Pkg::cEmptyBG_Header */
extern const BG_Header_T_BG_Types_Pkg cEmptyBG_Header_BG_Types_Pkg;

/* BG_Types_Pkg::cMaxNoBalises */
#define cMaxNoBalises_BG_Types_Pkg 8

/* CheckEuroradioMessage::cPermittedRadioPackets1 */
extern const MetadataTruthtable_T1_CheckEuro cPermittedRadioPackets1_CheckEu;

/* DataDictionary_Pkg::LevelDecisionTableFromBalise */
extern const LevelDecisionTableType_DataDict LevelDecisionTableFromBalise_Da;

/* DataDictionary_Pkg::LevelDecisionTableFromRBC */
extern const LevelDecisionTableType_DataDict LevelDecisionTableFromRBC_DataD;

/* DataDictionary_Pkg::ModeDecisionTable */
extern const ModeDecisionTableType_DataDicti ModeDecisionTable_DataDictionar;

/* Config_Pkg::MAX_PACKAGES */
#define MAX_PACKAGES_Config_Pkg 30

/* Common_Types_Pkg::cDefaultRM */
extern const ReceivedMessage_T_Common_Types_ cDefaultRM_Common_Types_Pkg;

/* InformationFilter_Pkg::DEFAULT_TransitionBuffer_t */
extern const TransitionBuffer_T_InformationF DEFAULT_TransitionBuffer_t_Info;

/* InformationFilter_Pkg::DIM_TransitionBuffer */
#define DIM_TransitionBuffer_Informatio 3

/* InformationFilter_Pkg::cEmptyEvents */
extern const filterRelatedEvents_T_Common_Ty cEmptyEvents_InformationFilter_;

/* InformationFilter_Pkg::cNoFlagsForML */
extern const T_Data_From_Track_MASSPGradient cNoFlagsForML_InformationFilter;

/* InformationFilter_Pkg::cNoP41Element */
extern const P041_section_enum_T_TM cNoP41Element_InformationFilter;

/* CheckEuroradioMessage::cTTrainUnknown1 */
#define cTTrainUnknown1_CheckEuroradioM (- 1)

/* xdebugSupport_Pkg::cNoPro */
extern const probesBalises_T_xdebugSupport_P cNoPro_xdebugSupport_Pkg;

/* Common_Types_Pkg::cNoMetaDataElement */
extern const MetadataElement_T_Common_Types_ cNoMetaDataElement_Common_Types;

/* TM_conversions::INT_M_LOC_every_LRBG */
#define INT_M_LOC_every_LRBG_TM_convers 1

/* TM_conversions::INT_M_LOC_not_when_LRBG */
#define INT_M_LOC_not_when_LRBG_TM_conv 2

/* TM_conversions::INT_M_LOC_now */
#define INT_M_LOC_now_TM_conversions 0

/* TM_conversions::ENUM_M_LOC_now */
#define ENUM_M_LOC_now_TM_conversions M_LOC_Now

/* TM_conversions::ENUM_M_LOC_not_when_LRBG */
#define ENUM_M_LOC_not_when_LRBG_TM_con M_LOC_Do_not_send_position_repo

/* TM_conversions::ENUM_M_LOC_every_LRBG */
#define ENUM_M_LOC_every_LRBG_TM_conver M_LOC_Every_LRBG_compliant_bali

/* TM::DIM_MaxElementsPacket058 */
#define DIM_MaxElementsPacket058_TM (DIM_N_ITER_TM * 2 + 8)

/* TM::DEFAULT_P058_OBU_section */
extern const P058_section_enum_T_TM DEFAULT_P058_OBU_section_TM;

/* TM_conversions::INT_Q_LGTLOC_max_safe_front_end */
#define INT_Q_LGTLOC_max_safe_front_end 1

/* TM_conversions::INT_Q_LGTLOC_min_safe_rear_end */
#define INT_Q_LGTLOC_min_safe_rear_end_ 0

/* TM_conversions::ENUM_Q_LGTLOC_max_safe_front_end */
#define ENUM_Q_LGTLOC_max_safe_front_en Q_LGTLOC_Max_safe_front_end

/* TM_conversions::ENUM_Q_LGTLOC_min_safe_rear_end */
#define ENUM_Q_LGTLOC_min_safe_rear_end Q_LGTLOC_Min_safe_rear_end

/* TM_lib_internal::DIM_P058_n_sections */
#define DIM_P058_n_sections_TM_lib_inte 2

/* TM_specific::DEFAULT_P058_legacy */
extern const P58_PositionReportParameters_T_ DEFAULT_P058_legacy_TM_specific;

/* ProvidePositionReport_Pkg::emptyPacket58 */
extern const P58_PositionReportParameters_T_ emptyPacket58_ProvidePositionRe;

/* ProvidePositionReport_Pkg::cReportedBGList */
extern const ReportedBGList_T_ProvidePositio cReportedBGList_ProvidePosition;

/* ProvidePositionReport_Pkg::emptyHeader */
extern const _10_Radio_TrainTrack_Header_T_R emptyHeader_ProvidePositionRepo;

/* ProvidePositionReport_Pkg::emptyPacket5 */
extern const PT5_TrainRunningNumber_Packet_T emptyPacket5_ProvidePositionRep;

/* ProvidePositionReport_Pkg::emptyPacket4 */
extern const PT4_ErrorReporting_T_Packet_Tra emptyPacket4_ProvidePositionRep;

/* ProvidePositionReport_Pkg::cxT_TRAIN */
#define cxT_TRAIN_ProvidePositionReport 0

/* ProvidePositionReport_Pkg::cxQ_MARQSTREASON */
#define cxQ_MARQSTREASON_ProvidePositio Q_MARQSTREASON_Start_selected_b

/* ProvidePositionReport_Pkg::cxNID_EM */
#define cxNID_EM_ProvidePositionReport_ 0

/* ProvidePositionReport_Pkg::cxNID_TEXTMESSAGE */
#define cxNID_TEXTMESSAGE_ProvidePositi 0

/* ProvidePositionReport_Pkg::cxQ_EMERGENCYSTOP */
#define cxQ_EMERGENCYSTOP_ProvidePositi _32_Q_EMERGENCYSTOP_Conditional

/* ProvidePositionReport_Pkg::cTimeToElapse */
#define cTimeToElapse_ProvidePositionRe 1000

/* Packet_Types_Pkg::cIterPacket58 */
#define cIterPacket58_Packet_Types_Pkg 2

/* ProvidePositionReport_Pkg::cPositionedBG_T */
extern const positionedBG_T_TrainPosition_Ty cPositionedBG_T_ProvidePosition;

/* ProvidePositionReport_Pkg::cLocationBasedEvents_T */
extern const LocationBasedEvents_T_ProvidePo cLocationBasedEvents_T_ProvideP;

/* ProvidePositionReport_Pkg::cRBC_Communication_T */
extern const RBC_Communication_T_ProvidePosi cRBC_Communication_T_ProvidePos;

/* ProvidePositionReport_Pkg::cTrainToTrackStatus_T */
extern const TrainToTrackStatus_T_BG_Types_P cTrainToTrackStatus_T_ProvidePo;

/* ProvidePositionReport_Pkg::cOdomerty */
extern const odometry_T_Obu_BasicTypes_Pkg cOdomerty_ProvidePositionReport;

/* ProvidePositionReport_Pkg::c_maxReportedBGs */
#define c_maxReportedBGs_ProvidePositio 8

/* ProvidePositionReport_Pkg::cInitPT3 */
extern const PT3_OnboardTelephoneNumbers_T_P cInitPT3_ProvidePositionReport_;

/* ProvidePositionReport_Pkg::cInitPT11 */
extern const PT11_ValidatedTrainData_T_Packe cInitPT11_ProvidePositionReport;

/* ProvidePositionReport_Pkg::cInitPT9 */
extern const PT9_Level23_TransitionInformati cInitPT9_ProvidePositionReport_;

/* ProvidePositionReport_Pkg::emptyPacket0 */
extern const PT0_PositionReport_T_Packet_Tra emptyPacket0_ProvidePositionRep;

/* ProvidePositionReport_Pkg::emptyPacket1 */
extern const PT1_PositionReport_2BG_T_Packet emptyPacket1_ProvidePositionRep;

/* ProvidePositionReport_Pkg::cModeAndLevelStatus */
extern const ModeLevel2PositionReport_T_Prov cModeAndLevelStatus_ProvidePosi;

/* ProvidePositionReport_Pkg::cQ_SCALE */
#define cQ_SCALE_ProvidePositionReport_ Q_SCALE_10_cm_scale

/* ProvidePositionReport_Pkg::cMinSafeRearEnd */
#define cMinSafeRearEnd_ProvidePosition 0

/* ProvidePositionReport_Pkg::cPassedBG */
extern const positionedBG_T_TrainPosition_Ty cPassedBG_ProvidePositionReport;

/* radioOutput_Pkg::noP000 */
extern const P000_TM_TrainToTrack noP000_radioOutput_Pkg;

/* radioOutput_Pkg::noP001 */
extern const P001_TM_TrainToTrack noP001_radioOutput_Pkg;

/* radioOutput_Pkg::noP044 */
extern const P044_TM_TrainToTrack noP044_radioOutput_Pkg;

/* ids::cp004_ErrorReporting */
#define cp004_ErrorReporting_ids 4

/* ids::cp005_TrainRunningNumber */
#define cp005_TrainRunningNumber_ids 5

/* TM_conversions::ENUM_M_ERROR_balise_group_linking_conistency */
#define ENUM_M_ERROR_balise_group_linki M_ERROR_Balise_group_linking_co

/* TM_conversions::ENUM_M_ERROR_Double_linking_error */
#define ENUM_M_ERROR_Double_linking_err M_ERROR_Double_linking_error

/* TM_conversions::ENUM_M_ERROR_Double_repositioning_error */
#define ENUM_M_ERROR_Double_repositioni M_ERROR_Double_repositioning_er

/* TM_conversions::ENUM_M_ERROR_Linked_balise_group_message_consistency_erro */
#define ENUM_M_ERROR_Linked_balise_grou M_ERROR_Linked_balise_group_mes

/* TM_conversions::ENUM_M_ERROR_Radio_message_consistency_error */
#define ENUM_M_ERROR_Radio_message_cons M_ERROR_Radio_message_consisten

/* TM_conversions::ENUM_M_ERROR_Radio_safe_radio_connection_error */
#define ENUM_M_ERROR_Radio_safe_radio_c M_ERROR_Radio_safe_radio_connec

/* TM_conversions::ENUM_M_ERROR_Radio_sequence_error */
#define ENUM_M_ERROR_Radio_sequence_err M_ERROR_Radio_sequence_error

/* TM_conversions::ENUM_M_ERROR_Safety_critical_failure */
#define ENUM_M_ERROR_Safety_critical_fa M_ERROR_Safety_critical_failure

/* TM_conversions::ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define ENUM_M_ERROR_Unlinked_balise_gr M_ERROR_Unlinked_balise_group_m

/* TM_conversions::INT_M_ERROR_Safety_critical_failure */
#define INT_M_ERROR_Safety_critical_fai 6

/* TM_conversions::INT_M_ERROR_Unlinked_balise_group_message_consistency_error */
#define INT_M_ERROR_Unlinked_balise_gro 2

/* TM_conversions::INT_M_ERROR_Radio_sequence_error */
#define INT_M_ERROR_Radio_sequence_erro 4

/* TM_conversions::INT_M_ERROR_Radio_safe_radio_connection_error */
#define INT_M_ERROR_Radio_safe_radio_co 5

/* TM_conversions::INT_M_ERROR_Radio_message_consistency_error */
#define INT_M_ERROR_Radio_message_consi 3

/* TM_conversions::INT_M_ERROR_Linked_balise_group_message_consistency_error */
#define INT_M_ERROR_Linked_balise_group 1

/* TM_conversions::INT_M_ERROR_Double_repositioning_error */
#define INT_M_ERROR_Double_repositionin 8

/* TM_conversions::INT_M_ERROR_Double_linking_error */
#define INT_M_ERROR_Double_linking_erro 7

/* TM_conversions::INT_M_ERROR_balise_group_linking_conistency */
#define INT_M_ERROR_balise_group_linkin 0

/* TM_TrainToTrack::DIM_max_elements_P004 */
#define DIM_max_elements_P004_TM_TrainT 3

/* TM_TrainToTrack::DIM_max_elements_P005 */
#define DIM_max_elements_P005_TM_TrainT 3

/* TM_TrainToTrack::DEFAULT_P044_int */
extern const P044_TrainTrack_int_TM_TrainToT DEFAULT_P044_int_TM_TrainToTrac;

/* TM_TrainToTrack::DIM_max_elements_P044 */
#define DIM_max_elements_P044_TM_TrainT (11 + DIM_voltage_list_TM_TrainToTrac * 2 + 1 + DIM_nid_ntc_list_TM_TrainToTrac)

/* TM_lib_internal::DEFAULT_output_buffer */
extern const M_TrainTrackRadioOutputBuffer_t DEFAULT_output_buffer_TM_lib_in;

/* TM_lib_internal::DIM_FIFO_TrainTrackOutput */
#define DIM_FIFO_TrainTrackOutput_TM_li 100

/* Id_Pkg::co132_MA_Request */
#define co132_MA_Request_Id_Pkg 132

/* TIU_Types_Pkg::emptyTIUInfo */
extern const Message_Train_Interface_to_EVC_ emptyTIUInfo_TIU_Types_Pkg;

/* cEmptyTrainData */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData;

/* cCenterDetectionAccuracyDefault */
extern const LocWithInAcc_T_Obu_BasicTypes_P cCenterDetectionAccuracyDefault;

/* cD_Antenna2FE */
extern const LocWithInAcc_T_Obu_BasicTypes_P cD_Antenna2FE;

/* cD_FE2RE */
extern const LocWithInAcc_T_Obu_BasicTypes_P cD_FE2RE;

/* cLocationAccuracyDefault */
extern const LocWithInAcc_T_Obu_BasicTypes_P cLocationAccuracyDefault;

/* EVC_MEM_Support_Pkg::cNoML */
extern const dataCollectionForLevelTransitio cNoML_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::Default_P135_legacy */
extern const P135_StopShuntingOnDeskOpening_ Default_P135_legacy_EVC_MEM_Sup;

/* EVC_MEM_Support_Pkg::Default_P63_legacy */
extern const P63_ListofBalisesinSRAuthority_ Default_P63_legacy_EVC_MEM_Supp;

/* EVC_MEM_Support_Pkg::Default_P12_legacy */
extern const _7_P12_Level1MovementAuthoritie Default_P12_legacy_EVC_MEM_Supp;

/* xdebugSupport_Pkg::cNoP41Element */
extern const P41_LevelTransitionOrder_T_Pack cNoP41Element_xdebugSupport_Pkg;

/* EVC_MEM_Support_Pkg::Default_P80_legacy */
extern const P80_ModeProfiles_T_Packet_Types Default_P80_legacy_EVC_MEM_Supp;

/* EVC_MEM_Support_Pkg::cNoP41 */
extern const P41_LevelTransistionOrders_T_Pa cNoP41_EVC_MEM_Support_Pkg;

/* EVC_MEM_Support_Pkg::Default_P80_element */
extern const P80_ModeProfile_T_Packet_Types_ Default_P80_element_EVC_MEM_Sup;

/* Id_Pkg::cp041_Level_Transition_Order */
#define cp041_Level_Transition_Order_Id 41

/* Id_Pkg::cp046_Conditional_Level_Transition_Order */
#define cp046_Conditional_Level_Transit 46

/* TM::DIM_MaxElementsPacket080 */
#define DIM_MaxElementsPacket080_TM (DIM_N_ITER_TM * 6 + 4 + 1 + 6)

/* TM::DEFAULT_P080_OBU_section */
extern const P080_section_enum_T_TM DEFAULT_P080_OBU_section_TM;

/* TM_conversions::INT_M_MAMODE_on_sight */
#define INT_M_MAMODE_on_sight_TM_conver 0

/* TM_conversions::INT_M_MAMODE_limited_supervision */
#define INT_M_MAMODE_limited_supervisio 2

/* TM_conversions::INT_M_MAMODE_shunting */
#define INT_M_MAMODE_shunting_TM_conver 1

/* TM_conversions::ENUM_M_MAMODE_on_sight */
#define ENUM_M_MAMODE_on_sight_TM_conve M_MAMODE_On_Sight

/* TM_conversions::ENUM_M_MAMODE_shunting */
#define ENUM_M_MAMODE_shunting_TM_conve M_MAMODE_Shunting

/* TM_conversions::ENUM_M_MAMODE_limited_supervision */
#define ENUM_M_MAMODE_limited_supervisi M_MAMODE_Limited_Supervision

/* TM_conversions::INT_Q_MAMODE_as_EOA */
#define INT_Q_MAMODE_as_EOA_TM_conversi 0

/* TM_conversions::INT_Q_MAMODE_as_SvL_and_EOA */
#define INT_Q_MAMODE_as_SvL_and_EOA_TM_ 1

/* TM_conversions::ENUM_Q_MAMODE_as_EOA */
#define ENUM_Q_MAMODE_as_EOA_TM_convers Q_MAMODE_as_the_EOA

/* TM_conversions::ENUM_Q_MAMODE_as_SvL_and_EOA */
#define ENUM_Q_MAMODE_as_SvL_and_EOA_TM Q_MAMODE_as_both_the_EOA_and_Sv

/* TM_lib_internal::DIM_P080_n_sections */
#define DIM_P080_n_sections_TM_lib_inte 6

/* TM::DIM_MaxElementsPacket065 */
#define DIM_MaxElementsPacket065_TM 9

/* trainData_pkg::cNoBus */
extern const M_TrainTrackMessageBus_t_TM_Tra cNoBus_trainData_pkg;

/* TM_conversions::ENUM_M_AXLELOADCAT_A */
#define ENUM_M_AXLELOADCAT_A_TM_convers M_AXLELOADCAT_A

/* TM_conversions::ENUM_M_AXLELOADCAT_B1 */
#define ENUM_M_AXLELOADCAT_B1_TM_conver M_AXLELOADCAT_B1

/* TM_conversions::ENUM_M_AXLELOADCAT_B2 */
#define ENUM_M_AXLELOADCAT_B2_TM_conver M_AXLELOADCAT_B2

/* TM_conversions::ENUM_M_AXLELOADCAT_C2 */
#define ENUM_M_AXLELOADCAT_C2_TM_conver M_AXLELOADCAT_C2

/* TM_conversions::ENUM_M_AXLELOADCAT_C3 */
#define ENUM_M_AXLELOADCAT_C3_TM_conver M_AXLELOADCAT_C3

/* TM_conversions::ENUM_M_AXLELOADCAT_D2 */
#define ENUM_M_AXLELOADCAT_D2_TM_conver M_AXLELOADCAT_D2

/* TM_conversions::ENUM_M_AXLELOADCAT_D3 */
#define ENUM_M_AXLELOADCAT_D3_TM_conver M_AXLELOADCAT_D3

/* TM_conversions::ENUM_M_AXLELOADCAT_D4 */
#define ENUM_M_AXLELOADCAT_D4_TM_conver M_AXLELOADCAT_D4

/* TM_conversions::ENUM_M_AXLELOADCAT_D4XL */
#define ENUM_M_AXLELOADCAT_D4XL_TM_conv M_AXLELOADCAT_D4XL

/* TM_conversions::ENUM_M_AXLELOADCAT_E4 */
#define ENUM_M_AXLELOADCAT_E4_TM_conver M_AXLELOADCAT_E4

/* TM_conversions::ENUM_M_AXLELOADCAT_E5 */
#define ENUM_M_AXLELOADCAT_E5_TM_conver M_AXLELOADCAT_E5

/* TM_conversions::ENUM_M_AXLELOADCAT_HS17 */
#define ENUM_M_AXLELOADCAT_HS17_TM_conv M_AXLELOADCAT_HS17

/* TM_conversions::INT_M_AXLELOADCAT_E5 */
#define INT_M_AXLELOADCAT_E5_TM_convers 12

/* TM_conversions::INT_M_AXLELOADCAT_HS17 */
#define INT_M_AXLELOADCAT_HS17_TM_conve 1

/* TM_conversions::INT_M_AXLELOADCAT_E4 */
#define INT_M_AXLELOADCAT_E4_TM_convers 11

/* TM_conversions::INT_M_AXLELOADCAT_D4XL */
#define INT_M_AXLELOADCAT_D4XL_TM_conve 10

/* TM_conversions::INT_M_AXLELOADCAT_D4 */
#define INT_M_AXLELOADCAT_D4_TM_convers 9

/* TM_conversions::INT_M_AXLELOADCAT_D3 */
#define INT_M_AXLELOADCAT_D3_TM_convers 8

/* TM_conversions::INT_M_AXLELOADCAT_D2 */
#define INT_M_AXLELOADCAT_D2_TM_convers 7

/* TM_conversions::INT_M_AXLELOADCAT_C4 */
#define INT_M_AXLELOADCAT_C4_TM_convers 6

/* TM_conversions::INT_M_AXLELOADCAT_C3 */
#define INT_M_AXLELOADCAT_C3_TM_convers 5

/* TM_conversions::INT_M_AXLELOADCAT_C2 */
#define INT_M_AXLELOADCAT_C2_TM_convers 4

/* TM_conversions::INT_M_AXLELOADCAT_B2 */
#define INT_M_AXLELOADCAT_B2_TM_convers 3

/* TM_conversions::INT_M_AXLELOADCAT_B1 */
#define INT_M_AXLELOADCAT_B1_TM_convers 2

/* TM_conversions::INT_M_AXLELOADCAT_A */
#define INT_M_AXLELOADCAT_A_TM_conversi 0

/* TM_conversions::ENUM_NC_TRAIN_no_train_categroy */
#define ENUM_NC_TRAIN_no_train_categroy NC_TRAIN_Train_does_not_belong_

/* TM_conversions::ENUM_NC_TRAIN_freight_P */
#define ENUM_NC_TRAIN_freight_P_TM_conv _52_NC_TRAIN_Freight_train_brak

/* TM_conversions::ENUM_NC_TRAIN_freight_G */
#define ENUM_NC_TRAIN_freight_G_TM_conv NC_TRAIN_Freight_train_braked_i

/* TM_conversions::ENUM_NC_TRAIN_passenger */
#define ENUM_NC_TRAIN_passenger_TM_conv NC_TRAIN_Passenger_train

/* TM_conversions::INT_NC_TRAIN_no_train_categroy */
#define INT_NC_TRAIN_no_train_categroy_ 0

/* TM_conversions::INT_NC_TRAIN_passenger */
#define INT_NC_TRAIN_passenger_TM_conve 3

/* TM_conversions::INT_NC_TRAIN_freight_G */
#define INT_NC_TRAIN_freight_G_TM_conve 2

/* TM_conversions::INT_NC_TRAIN_freight_P */
#define INT_NC_TRAIN_freight_P_TM_conve 1

/* TM_conversions::ENUM_M_AIRTIGHT_fitted */
#define ENUM_M_AIRTIGHT_fitted_TM_conve M_AIRTIGHT_Fitted

/* TM_conversions::ENUM_M_AIRTIGHT_not_fitted */
#define ENUM_M_AIRTIGHT_not_fitted_TM_c M_AIRTIGHT_Not_fitted

/* TM_conversions::INT_M_AIRTIGHT_not_fitted */
#define INT_M_AIRTIGHT_not_fitted_TM_co 0

/* TM_conversions::INT_M_AIRTIGHT_fitted */
#define INT_M_AIRTIGHT_fitted_TM_conver 1

/* TM_conversions::ENUM_M_LOADINGGAUGE_G1 */
#define ENUM_M_LOADINGGAUGE_G1_TM_conve M_LOADINGGAUGE_G1

/* TM_conversions::ENUM_M_LOADINGGAUGE_GA */
#define ENUM_M_LOADINGGAUGE_GA_TM_conve M_LOADINGGAUGE_GA

/* TM_conversions::ENUM_M_LOADINGGAUGE_GB */
#define ENUM_M_LOADINGGAUGE_GB_TM_conve M_LOADINGGAUGE_GB

/* TM_conversions::ENUM_M_LOADINGGAUGE_GC */
#define ENUM_M_LOADINGGAUGE_GC_TM_conve M_LOADINGGAUGE_GC

/* TM_conversions::ENUM_M_LOADINGGAUGE_does_not_fit */
#define ENUM_M_LOADINGGAUGE_does_not_fi M_LOADINGGAUGE_The_train_does_n

/* TM_conversions::INT_M_LOADINGGAUGE_does_not_fit */
#define INT_M_LOADINGGAUGE_does_not_fit 0

/* TM_conversions::INT_M_LOADINGGAUGE_GC */
#define INT_M_LOADINGGAUGE_GC_TM_conver 4

/* TM_conversions::INT_M_LOADINGGAUGE_GB */
#define INT_M_LOADINGGAUGE_GB_TM_conver 3

/* TM_conversions::INT_M_LOADINGGAUGE_GA */
#define INT_M_LOADINGGAUGE_GA_TM_conver 2

/* TM_conversions::INT_M_LOADINGGAUGE_G1 */
#define INT_M_LOADINGGAUGE_G1_TM_conver 1

/* TM_conversions::ENUM_NC_CDTRAIN_080mm */
#define ENUM_NC_CDTRAIN_080mm_TM_conver NC_CDTRAIN_Cant_Deficiency_80_m

/* TM_conversions::ENUM_NC_CDTRAIN_100mm */
#define ENUM_NC_CDTRAIN_100mm_TM_conver NC_CDTRAIN_Cant_Deficiency_100_

/* TM_conversions::ENUM_NC_CDTRAIN_130mm */
#define ENUM_NC_CDTRAIN_130mm_TM_conver NC_CDTRAIN_Cant_Deficiency_130_

/* TM_conversions::ENUM_NC_CDTRAIN_150mm */
#define ENUM_NC_CDTRAIN_150mm_TM_conver NC_CDTRAIN_Cant_Deficiency_150_

/* TM_conversions::ENUM_NC_CDTRAIN_165mm */
#define ENUM_NC_CDTRAIN_165mm_TM_conver NC_CDTRAIN_Cant_Deficiency_165_

/* TM_conversions::ENUM_NC_CDTRAIN_180mm */
#define ENUM_NC_CDTRAIN_180mm_TM_conver NC_CDTRAIN_Cant_Deficiency_180_

/* TM_conversions::ENUM_NC_CDTRAIN_210mm */
#define ENUM_NC_CDTRAIN_210mm_TM_conver NC_CDTRAIN_Cant_Deficiency_210_

/* TM_conversions::ENUM_NC_CDTRAIN_225mm */
#define ENUM_NC_CDTRAIN_225mm_TM_conver NC_CDTRAIN_Cant_Deficiency_225_

/* TM_conversions::ENUM_NC_CDTRAIN_245mm */
#define ENUM_NC_CDTRAIN_245mm_TM_conver NC_CDTRAIN_Cant_Deficiency_245_

/* TM_conversions::ENUM_NC_CDTRAIN_275mm */
#define ENUM_NC_CDTRAIN_275mm_TM_conver NC_CDTRAIN_Cant_Deficiency_275_

/* TM_conversions::ENUM_NC_CDTRAIN_300mm */
#define ENUM_NC_CDTRAIN_300mm_TM_conver NC_CDTRAIN_Cant_Deficiency_300_

/* TM_conversions::INT_NC_CDTRAIN_300mm */
#define INT_NC_CDTRAIN_300mm_TM_convers 10

/* TM_conversions::INT_NC_CDTRAIN_275mm */
#define INT_NC_CDTRAIN_275mm_TM_convers 9

/* TM_conversions::INT_NC_CDTRAIN_245mm */
#define INT_NC_CDTRAIN_245mm_TM_convers 8

/* TM_conversions::INT_NC_CDTRAIN_225mm */
#define INT_NC_CDTRAIN_225mm_TM_convers 7

/* TM_conversions::INT_NC_CDTRAIN_210mm */
#define INT_NC_CDTRAIN_210mm_TM_convers 6

/* TM_conversions::INT_NC_CDTRAIN_180mm */
#define INT_NC_CDTRAIN_180mm_TM_convers 5

/* TM_conversions::INT_NC_CDTRAIN_165mm */
#define INT_NC_CDTRAIN_165mm_TM_convers 4

/* TM_conversions::INT_NC_CDTRAIN_150mm */
#define INT_NC_CDTRAIN_150mm_TM_convers 3

/* TM_conversions::INT_NC_CDTRAIN_130mm */
#define INT_NC_CDTRAIN_130mm_TM_convers 2

/* TM_conversions::INT_NC_CDTRAIN_100mm */
#define INT_NC_CDTRAIN_100mm_TM_convers 1

/* TM_conversions::INT_NC_CDTRAIN_080mm */
#define INT_NC_CDTRAIN_080mm_TM_convers 0

/* TM_conversions::DIM_L_TRAIN_max */
#define DIM_L_TRAIN_max_TM_conversions 4095

/* TM_conversions::DIM_L_TRAIN_min */
#define DIM_L_TRAIN_min_TM_conversions 0

/* TM_TrainToTrack::DIM_max_elements_P011 */
#define DIM_max_elements_P011_TM_TrainT (11 + DIM_voltage_list_TM_TrainToTrac * 2 + 1 + DIM_nid_ntc_list_TM_TrainToTrac)

/* TM_TrainToTrack::DEFAULT_P011_voltage_sections_array_flat */
extern const P011_voltage_sections_array_fla DEFAULT_P011_voltage_sections_a;

/* TM_conversions::ENUM_M_VOLTAGE_Line_not_fitted */
#define ENUM_M_VOLTAGE_Line_not_fitted_ M_VOLTAGE_Line_not_fitted_with_

/* TM_conversions::ENUM_M_VOLTAGE_AC_25_kV_50_Hz */
#define ENUM_M_VOLTAGE_AC_25_kV_50_Hz_T M_VOLTAGE_AC_25_kV_50_Hz

/* TM_conversions::ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz */
#define ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz M_VOLTAGE_AC_15_kV_16_7_Hz

/* TM_conversions::ENUM_M_VOLTAGE_DC_3_kV */
#define ENUM_M_VOLTAGE_DC_3_kV_TM_conve M_VOLTAGE_DC_3_kV

/* TM_conversions::ENUM_M_VOLTAGE_DC_1_5_kV */
#define ENUM_M_VOLTAGE_DC_1_5_kV_TM_con M_VOLTAGE_DC_1_5_kV

/* TM_conversions::ENUM_M_VOLTAGE_DC_600_or_750_V */
#define ENUM_M_VOLTAGE_DC_600_or_750_V_ M_VOLTAGE_DC_600_or_750_V

/* TM_conversions::INT_M_VOLTAGE_Line_not_fitted */
#define INT_M_VOLTAGE_Line_not_fitted_T 0

/* TM_conversions::INT_M_VOLTAGE_DC_600_or_750_V */
#define INT_M_VOLTAGE_DC_600_or_750_V_T 5

/* TM_conversions::INT_M_VOLTAGE_DC_1_5_kV */
#define INT_M_VOLTAGE_DC_1_5_kV_TM_conv 4

/* TM_conversions::INT_M_VOLTAGE_DC_3_kV */
#define INT_M_VOLTAGE_DC_3_kV_TM_conver 3

/* TM_conversions::INT_M_VOLTAGE_AC_15_kV_16_7_Hz */
#define INT_M_VOLTAGE_AC_15_kV_16_7_Hz_ 2

/* TM_conversions::INT_M_VOLTAGE_AC_25_kV_50_Hz */
#define INT_M_VOLTAGE_AC_25_kV_50_Hz_TM 1

/* Id_Pkg::co129_Validated_Train_Data */
#define co129_Validated_Train_Data_Id_P 129

/* TM_TrainToTrack::DIM_voltage_list */
#define DIM_voltage_list_TM_TrainToTrac 4

/* TM_TrainToTrack::DIM_nid_ntc_list */
#define DIM_nid_ntc_list_TM_TrainToTrac 5

/* ids::cp011_ValidatedTrainData */
#define cp011_ValidatedTrainData_ids 11

/* Id_Pkg::co146_Acknowledgement */
#define co146_Acknowledgement_Id_Pkg 146

/* Id_Pkg::cm08_Acknowledgement_of_Train_Data */
#define cm08_Acknowledgement_of_Train_D 8

/* Id_Pkg::cm03_Movement_Authority */
#define cm03_Movement_Authority_Id_Pkg 3

/* trainData_Types_pkg::cNoTrigger */
extern const trainData_Trigger_T_trainData_T cNoTrigger_trainData_Types_pkg;

/* Id_Pkg::cm24_General_Message */
#define cm24_General_Message_Id_Pkg 24

/* trainData_Types_pkg::cNoStates */
extern const trainDataStatus_T_trainData_Typ cNoStates_trainData_Types_pkg;

/* trainData_Types_pkg::cEmptyTrainData */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData_trainData_Types;

/* RadioSupport_Pkg::cEmptyMsg */
extern const M_TrainTrack_Message_T_TM_radio cEmptyMsg_RadioSupport_Pkg;

/* Id_Pkg::co136_Train_Position_Report */
#define co136_Train_Position_Report_Id_ 136

/* DMI_Types_Pkg::cDMI_maxLevels */
#define cDMI_maxLevels_DMI_Types_Pkg 32

/* TrackAtlas::Mode_NTC */
#define Mode_NTC_TrackAtlas M_MODE_National_System

/* TrackAtlas::NTC_values_to_supervision */
extern const DataForSupervision_nextGen_t_Tr NTC_values_to_supervision_Track;

/* TrackAtlasTypes::DEFAULT_Endtimer */
extern const Endtimer_t_TrackAtlasTypes DEFAULT_Endtimer_TrackAtlasType;

/* TA_MA_new::DEFAULT_AccuDistanceProfileMA */
extern const AccuDistanceProfileMA_TA_MA_new DEFAULT_AccuDistanceProfileMA_T;

/* TA_MA_new::MA_level23 */
#define MA_level23_TA_MA_new MA_L23_TrackAtlasTypes

/* TA_MA_new::DEFAULT_v_main */
#define DEFAULT_v_main_TA_MA_new 0

/* TM::ENUM_Q_SCALE_10cm_QSCALE */
#define ENUM_Q_SCALE_10cm_QSCALE_TM Q_SCALE_10_cm_scale

/* TM::ENUM_Q_SCALE_10m_QSCALE */
#define ENUM_Q_SCALE_10m_QSCALE_TM Q_SCALE_10_m_scale

/* TrackAtlasTypes::DEFAULT_OL */
extern const DP_or_OL_t_TrackAtlasTypes DEFAULT_OL_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_DP */
extern const DP_or_OL_t_TrackAtlasTypes DEFAULT_DP_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_MA_section */
extern const _21_MovementAuthoritySection_t_ DEFAULT_MA_section_TrackAtlasTy;

/* TrackAtlasTypes::DEFAULT_MovementAuthority */
extern const MovementAuthority_t_TrackAtlasT DEFAULT_MovementAuthority_Track;

/* TA_MA_new::replace_MA */
#define replace_MA_TA_MA_new replace_TA_MA_new

/* TA_MA_new::delete_MA */
#define delete_MA_TA_MA_new replace_TA_MA_new

/* TA_MA_new::keep_MA */
#define keep_MA_TA_MA_new replace_TA_MA_new

/* TA_MA_new::DefaultMA_section */
extern const _21_MovementAuthoritySection_t_ DefaultMA_section_TA_MA_new;

/* TA_MA_new::DEFAULT_loc */
#define DEFAULT_loc_TA_MA_new 0

/* TA_MRSP::DEFAULT_MRSP_Profile */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP;

/* TA_MRSP_new::XSSPold */
extern const SSP_cat_t_TA_MRSP_new XSSPold_TA_MRSP_new;

/* TA_MRSP_new::DEFAULT_MRSP_Profile */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP_ne;

/* TA_MRSP_new::DIM_maxSSP_individual_sections */
#define DIM_maxSSP_individual_sections_ 33

/* TA_MRSP::SP_NTC */
extern const SSP_cat_t_TA_MRSP SP_NTC_TA_MRSP;

/* TA_MRSP::TOP_SSP_cat */
extern const SSP_cat_t_TA_MRSP TOP_SSP_cat_TA_MRSP;

/* TM_baseline2::DEFAULT_P027v1_OBU_section */
extern const P027V1_section_enum_T_TM_baseli DEFAULT_P027v1_OBU_section_TM_b;

/* TA_SSP::DEFAULT_SSP_section */
extern const StaticSpeedSection_t_TrackAtlas DEFAULT_SSP_section_TA_SSP;

/* TA_SSP_new::DEFAULT_SSP_section */
extern const StaticSpeedSection_t_TrackAtlas DEFAULT_SSP_section_TA_SSP_new;

/* TrackAtlasTypes::DEFAULT_StaticSpeedProfile */
extern const StaticSpeedProfile_t_TrackAtlas DEFAULT_StaticSpeedProfile_Trac;

/* TrackAtlasTypes::DIM_SSP */
#define DIM_SSP_TrackAtlasTypes 50

/* TM_conversions::INT_Q_NVSBTSMPERM_Yes */
#define INT_Q_NVSBTSMPERM_Yes_TM_conver 1

/* TM_conversions::INT_Q_NVSBTSMPERM_No */
#define INT_Q_NVSBTSMPERM_No_TM_convers 0

/* TM_conversions::ENUM_Q_NVSBTSMPERM_No */
#define ENUM_Q_NVSBTSMPERM_No_TM_conver Q_NVSBTSMPERM_No

/* TM_conversions::ENUM_Q_NVSBTSMPERM_Yes */
#define ENUM_Q_NVSBTSMPERM_Yes_TM_conve Q_NVSBTSMPERM_Yes

/* TM_conversions::INT_Q_NVEMRRLS_revoke_at_standstill */
#define INT_Q_NVEMRRLS_revoke_at_stands 0

/* TM_conversions::INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define INT_Q_NVEMRRLS_revoke_when_no_s 1

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_at_standstill */
#define ENUM_Q_NVEMRRLS_revoke_at_stand _50_Q_NVEMRRLS_Revoke_emergency

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define ENUM_Q_NVEMRRLS_revoke_when_no_ Q_NVEMRRLS_Revoke_emergency_bra

/* TM_conversions::INT_M_NVCONTACT_Apply_service_brake */
#define INT_M_NVCONTACT_Apply_service_b 1

/* TM_conversions::INT_M_NVCONTACT_No_Reaction */
#define INT_M_NVCONTACT_No_Reaction_TM_ 2

/* TM_conversions::INT_M_NVCONTACT_Train_trip */
#define INT_M_NVCONTACT_Train_trip_TM_c 0

/* TM_conversions::ENUM_M_NVCONTACT_Train_trip */
#define ENUM_M_NVCONTACT_Train_trip_TM_ M_NVCONTACT_Train_trip

/* TM_conversions::ENUM_M_NVCONTACT_No_Reaction */
#define ENUM_M_NVCONTACT_No_Reaction_TM M_NVCONTACT_No_Reaction

/* TM_conversions::ENUM_M_NVCONTACT_Apply_service_brake */
#define ENUM_M_NVCONTACT_Apply_service_ M_NVCONTACT_Apply_service_brake

/* TM_conversions::INT_M_NVDERUN_no */
#define INT_M_NVDERUN_no_TM_conversions 0

/* TM_conversions::INT_M_NVDERUN_yes */
#define INT_M_NVDERUN_yes_TM_conversion 1

/* TM_conversions::ENUM_M_NVDERUN_yes */
#define ENUM_M_NVDERUN_yes_TM_conversio M_NVDERUN_Yes

/* TM_conversions::ENUM_M_NVDERUN_no */
#define ENUM_M_NVDERUN_no_TM_conversion M_NVDERUN_No

/* TM_conversions::INT_Q_NVDRIVER_ADHES_Allowed */
#define INT_Q_NVDRIVER_ADHES_Allowed_TM 1

/* TM_conversions::INT_Q_NVDRIVER_ADHES_NotAllowed */
#define INT_Q_NVDRIVER_ADHES_NotAllowed 0

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_NotAllowed */
#define ENUM_Q_NVDRIVER_ADHES_NotAllowe Q_NVDRIVER_ADHES_Not_allowed

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_Allowed */
#define ENUM_Q_NVDRIVER_ADHES_Allowed_T Q_NVDRIVER_ADHES_Allowed

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
extern const P003V1_section_enum_T_TM_baseli DEFAULT_P003V1_OBU_section_TM_b;

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_b (DIM_N_ITER_TM * 1 + 6 + 18)

/* TA_Storage::INIT_P3V1 */
extern const P003V1_OBU_T_TM_baseline2 INIT_P3V1_TA_Storage;

/* TA_Export::ZERO */
#define ZERO_TA_Export 0

/* TrackAtlasTypes::DEFAULT_LRBG */
#define DEFAULT_LRBG_TrackAtlasTypes 354

/* TrackAtlasTypes::DEFAULT_Location_T */
#define DEFAULT_Location_T_TrackAtlasTy 0

/* TM::DIM_MaxElementsPacket012 */
#define DIM_MaxElementsPacket012_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 7)

/* TM_lib_internal::DIM_P012_n_sections */
#define DIM_P012_n_sections_TM_lib_inte 4

/* TM::DIM_MaxElementsPacket135 */
#define DIM_MaxElementsPacket135_TM 3

/* TM_baseline2::NID_META_P027V1_body */
#define NID_META_P027V1_body_TM_baselin 27016000

/* TM_baseline2::DEFAULT_P027V1_section_enum */
extern const P027V1_section_enum_T_TM_baseli DEFAULT_P027V1_section_enum_TM_;

/* TM_conversions::INT_Q_FRONT_train_length_delay */
#define INT_Q_FRONT_train_length_delay_ 0

/* TM_conversions::INT_Q_FRONT_no_train_length_delay */
#define INT_Q_FRONT_no_train_length_del 1

/* TM_conversions::ENUM_Q_FRONT_train_length_delay */
#define ENUM_Q_FRONT_train_length_delay Q_FRONT_Train_length_delay_on_v

/* TM_conversions::ENUM_Q_FRONT_no_train_length_delay */
#define ENUM_Q_FRONT_no_train_length_de Q_FRONT_No_train_length_delay_o

/* TM::DIM_MaxElementsPacket027v1_section */
#define DIM_MaxElementsPacket027v1_sect (DIM_N_ITER_TM * 2 + 4)

/* TM_lib_internal::DIM_P027V1_n_sections_qdiff */
#define DIM_P027V1_n_sections_qdiff_TM_ 7

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff */
extern const P027V1_section_enum_qdiff_T_TM_ DEFAULT_P027v1_OBU_section_qdif;

/* TM_baseline2::DEFAULT_P027V1_legacy */
extern const P27_InternationalStaticSpeedPro DEFAULT_P027V1_legacy_TM_baseli;

/* TM_conversions::INT_Q_SRSTOP_go */
#define INT_Q_SRSTOP_go_TM_conversions 1

/* TM_conversions::INT_Q_SRSTOP_stop */
#define INT_Q_SRSTOP_stop_TM_conversion 0

/* TM_conversions::ENUM_Q_SRSTOP_stop */
#define ENUM_Q_SRSTOP_stop_TM_conversio Q_SRSTOP_Stop_if_in_SR_mode

/* TM_conversions::ENUM_Q_SRSTOP_go */
#define ENUM_Q_SRSTOP_go_TM_conversions Q_SRSTOP_Go_if_in_SR_mode

/* TM::DEFAULT_P138_legacy */
extern const P138_ReversingAreaInformation_T DEFAULT_P138_legacy_TM;

/* TM::DIM_MaxElementsPacket138 */
#define DIM_MaxElementsPacket138_TM 6

/* TM::DEFAULT_P139_legacy */
extern const P139_ReversingSupervisionInform DEFAULT_P139_legacy_TM;

/* TM::DIM_MaxElementsPacket136 */
#define DIM_MaxElementsPacket136_TM 6

/* TM::DIM_MaxElementsPacket139 */
#define DIM_MaxElementsPacket139_TM 6

/* TM_specific::DEFAULT_P015_legacy */
extern const _6_P15_Level23MovementAuthoriti DEFAULT_P015_legacy_TM_specific;

/* TM_specific::DEFAULT_P021_legacy */
extern const P21_GradientProfiles_T_Packet_T DEFAULT_P021_legacy_TM_specific;

/* TM::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM;

/* TM::DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041_TM ((DIM_N_ITER_TM + 1) * 3 + 6)

/* TM_lib_internal::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib;

/* TM_lib_internal::DIM_P041_n_sections */
#define DIM_P041_n_sections_TM_lib_inte 3

/* TM_specific::DEFAULT_P041_legacy */
extern const P41_LevelTransistionOrders_T_Pa DEFAULT_P041_legacy_TM_specific;

/* TM::DIM_MaxElementsPacket046 */
#define DIM_MaxElementsPacket046_TM ((DIM_N_ITER_TM + 1) * 2 + 4)

/* TM::DEFAULT_P046_OBU_section */
extern const P046_section_enum_T_TM DEFAULT_P046_OBU_section_TM;

/* TM_conversions::INT_M_LEVELTR_Level_0 */
#define INT_M_LEVELTR_Level_0_TM_conver 0

/* TM_conversions::INT_M_LEVELTR_Level_1 */
#define INT_M_LEVELTR_Level_1_TM_conver 2

/* TM_conversions::INT_M_LEVELTR_Level_2 */
#define INT_M_LEVELTR_Level_2_TM_conver 3

/* TM_conversions::INT_M_LEVELTR_Level_3 */
#define INT_M_LEVELTR_Level_3_TM_conver 4

/* TM_conversions::INT_M_LEVELTR_Level_NTC */
#define INT_M_LEVELTR_Level_NTC_TM_conv 1

/* TM_conversions::ENUM_M_LEVELTR_Level_NTC */
#define ENUM_M_LEVELTR_Level_NTC_TM_con M_LEVELTR_Level_NTC_specified_b

/* TM_conversions::ENUM_M_LEVELTR_Level_3 */
#define ENUM_M_LEVELTR_Level_3_TM_conve M_LEVELTR_Level_3

/* TM_conversions::ENUM_M_LEVELTR_Level_2 */
#define ENUM_M_LEVELTR_Level_2_TM_conve M_LEVELTR_Level_2

/* TM_conversions::ENUM_M_LEVELTR_Level_1 */
#define ENUM_M_LEVELTR_Level_1_TM_conve M_LEVELTR_Level_1

/* TM_conversions::ENUM_M_LEVELTR_Level_0 */
#define ENUM_M_LEVELTR_Level_0_TM_conve M_LEVELTR_Level_0

/* TM_lib_internal::DIM_P046_n_sections */
#define DIM_P046_n_sections_TM_lib_inte 2

/* TM_specific::DEFAULT_P046_legacy */
extern const P46_ConditionalLevelTransitionO DEFAULT_P046_legacy_TM_specific;

/* TM_radio_messages::nid_message_TrackTrain_015 */
#define nid_message_TrackTrain_015_TM_r 15

/* TM_radio_messages::nid_message_TrackTrain_016 */
#define nid_message_TrackTrain_016_TM_r 16

/* TM_radio_messages::nid_message_TrackTrain_002 */
#define nid_message_TrackTrain_002_TM_r 2

/* TM_radio_messages::nid_message_TrackTrain_027 */
#define nid_message_TrackTrain_027_TM_r 27

/* TM_radio_messages::nid_message_TrackTrain_028 */
#define nid_message_TrackTrain_028_TM_r 28

/* TM_radio_messages::nid_message_TrackTrain_006 */
#define nid_message_TrackTrain_006_TM_r 6

/* TA_Export::Default_P63_legacy */
extern const P63_ListofBalisesinSRAuthority_ Default_P63_legacy_TA_Export;

/* TA_Export::Default_P80_legacy */
extern const P80_ModeProfiles_T_Packet_Types Default_P80_legacy_TA_Export;

/* Packet_Types_Pkg::cNIterMaxModeProfiles */
#define cNIterMaxModeProfiles_Packet_Ty 3

/* TA_Export::Default_P12_legacy */
extern const _7_P12_Level1MovementAuthoritie Default_P12_legacy_TA_Export;

/* Packet_Types_Pkg::cNIterMaxMA */
#define cNIterMaxMA_Packet_Types_Pkg 5

/* TA_Export::Default_P135_legacy */
extern const P135_StopShuntingOnDeskOpening_ Default_P135_legacy_TA_Export;

/* TrackAtlasTypes::DEFAULT_StaticSpeedSection */
extern const StaticSpeedSection_t_TrackAtlas DEFAULT_StaticSpeedSection_Trac;

/* TA_Export::DEFAULT_MRSP_reduction_acc */
extern const MRSP_reduction_acc_TA_Export DEFAULT_MRSP_reduction_acc_TA_E;

/* TrackAtlasTypes::MRSPMaxSections */
#define MRSPMaxSections_TrackAtlasTypes 110

/* TA_Export::DEFAULT_MRSP_section */
extern const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_Export;

/* TA_Export::END_OF_SSP */
#define END_OF_SSP_TA_Export 635

/* TA_Export::END_OF_SSP_encoding */
#define END_OF_SSP_encoding_TA_Export (- 1)

/* MA_Request::cM_version */
#define cM_version_MA_Request M_VERSION_Version_1_1_introduce

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update */
#define _12_ENUM_Q_EMERGENCYSTOP_cond_a _32_Q_EMERGENCYSTOP_Conditional

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update */
#define ENUM_Q_EMERGENCYSTOP_cond_accep Q_EMERGENCYSTOP_Conditional_Eme

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_uncond_accepted */
#define ENUM_Q_EMERGENCYSTOP_uncond_acc Q_EMERGENCYSTOP_Unconditional_E

/* TM_conversions::ENUM_Q_EMERGENCYSTOP_rejected */
#define ENUM_Q_EMERGENCYSTOP_rejected_T Q_EMERGENCYSTOP_Emergency_stop

/* TM_conversions::INT_Q_EMERGENCYSTOP_rejected */
#define INT_Q_EMERGENCYSTOP_rejected_TM 3

/* TM_conversions::INT_Q_EMERGENCYSTOP_uncond_accepted */
#define INT_Q_EMERGENCYSTOP_uncond_acce 2

/* TM_conversions::INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update */
#define _11_INT_Q_EMERGENCYSTOP_cond_ac 1

/* TM_conversions::INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update */
#define INT_Q_EMERGENCYSTOP_cond_accept 0

/* TA_EmergencyStop::cMSG147_NONE */
extern const _9_Radio_TrainTrack_Message_T_R cMSG147_NONE_TA_EmergencyStop;

/* TA_EmergencyStop::DEFAULT_M147 */
extern const M_147_T_TM_radio_messages DEFAULT_M147_TA_EmergencyStop;

/* Id_Pkg::cm15_Conditional_Emergency_Stop */
#define cm15_Conditional_Emergency_Stop 15

/* Id_Pkg::cm16_Unconditional_Emergency_Stop */
#define cm16_Unconditional_Emergency_St 16

/* Id_Pkg::cm18_Revocation_of_Emergency_Stop */
#define cm18_Revocation_of_Emergency_St 18

/* TA_EmergencyStop::cNID_EM_NONE */
#define cNID_EM_NONE_TA_EmergencyStop 0

/* MA_Request::cPT11_ValidateTrainData */
extern const PT11_ValidatedTrainData_T_Packe cPT11_ValidateTrainData_MA_Requ;

/* MA_Request::cPT3_OBUTelephoneNumber */
extern const PT3_OnboardTelephoneNumbers_T_P cPT3_OBUTelephoneNumber_MA_Requ;

/* MA_Request::cPT4_ErrorReporting */
extern const PT4_ErrorReporting_T_Packet_Tra cPT4_ErrorReporting_MA_Request;

/* MA_Request::cPT5_TrainRunningNumber */
extern const PT5_TrainRunningNumber_Packet_T cPT5_TrainRunningNumber_MA_Requ;

/* MA_Request::cPT9_Level23 */
extern const PT9_Level23_TransitionInformati cPT9_Level23_MA_Request;

/* TA_EmergencyStop::cQ_MARQSREASON_NONE */
#define cQ_MARQSREASON_NONE_TA_Emergenc Q_MARQSTREASON_Start_selected_b

/* TA_EmergencyStop::cNID_TEXTMESSAGE_NONE */
#define cNID_TEXTMESSAGE_NONE_TA_Emerge 0

/* TA_EmergencyStop::cEOA_NONE */
#define cEOA_NONE_TA_EmergencyStop 0

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_EMPTY */
extern const NID_EM_Store_T_TA_EmergencyStop cNID_EM_STORE_EMPTY_TA_Emergenc;

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_SIZE */
#define cNID_EM_STORE_SIZE_TA_Emergency 8

/* TM::DIM_MaxElementsPacket021 */
#define DIM_MaxElementsPacket021_TM ((DIM_N_ITER_TM + 1) * 3 + 4 + 1)

/* TM_conversions::DIM_G_max */
#define DIM_G_max_TM_conversions 255

/* TM_conversions::DIM_G_min */
#define DIM_G_min_TM_conversions 0

/* TM_conversions::INT_Q_GDIR_downhill */
#define INT_Q_GDIR_downhill_TM_conversi 0

/* TM_conversions::INT_Q_GDIR_uphill */
#define INT_Q_GDIR_uphill_TM_conversion 1

/* TM_conversions::ENUM_Q_GDIR_downhill */
#define ENUM_Q_GDIR_downhill_TM_convers Q_GDIR_downhill

/* TM_lib_internal::DIM_P021_n_sections */
#define DIM_P021_n_sections_TM_lib_inte 3

/* TA_Lib_internal::DEFAULT_q_link */
#define DEFAULT_q_link_TA_Lib_internal Q_LINK_Unlinked

/* TA_Lib_internal::DEFAULT_location */
extern const LocWithInAcc_T_Obu_BasicTypes_P DEFAULT_location_TA_Lib_interna;

/* TA_Lib_internal::DEFAULT_InfoFromLinking */
extern const infoFromLinking_T_TrainPosition DEFAULT_InfoFromLinking_TA_Lib_;

/* TA_Lib_internal::DEFAULT_InfoFromPassing */
extern const passedBG_T_BG_Types_Pkg DEFAULT_InfoFromPassing_TA_Lib_;

/* TA_Lib_internal::DEFAULT_positioned_BG */
extern const positionedBG_T_TrainPosition_Ty DEFAULT_positioned_BG_TA_Lib_in;

/* TA_Lib_internal::ENUM_MsgSource_Balise */
#define ENUM_MsgSource_Balise_TA_Lib_in msrc_Eurobalise_Common_Types_Pk

/* TA_Lib_internal::ENUM_MsgSource_Euroradio */
#define ENUM_MsgSource_Euroradio_TA_Lib msrc_Euroradio_Common_Types_Pkg

/* TA_MRSP::DIM_maxSSP_individual_sections */
#define _2_DIM_maxSSP_individual_sectio 33

/* TM::DEFAULT_P021_OBU_section */
extern const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM;

/* TM_conversions::ENUM_Q_GDIR_uphill */
#define ENUM_Q_GDIR_uphill_TM_conversio Q_GDIR_uphill

/* TrackAtlasTypes::DEFAULT_GradientSection */
extern const Gradient_section_t_TrackAtlasTy DEFAULT_GradientSection_TrackAt;

/* TrackAtlasTypes::DEFAULT_GradientProfile */
extern const GradientProfile_t_TrackAtlasTyp DEFAULT_GradientProfile_TrackAt;

/* TA_Gradient_new::DEFAULT_GP_Section */
extern const Gradient_section_t_TrackAtlasTy DEFAULT_GP_Section_TA_Gradient_;

/* TrackAtlasTypes::GradientMaxSections */
#define GradientMaxSections_TrackAtlasT DIM_GP_TrackAtlasTypes

/* TrackAtlasTypes::DIM_GP */
#define DIM_GP_TrackAtlasTypes 50

/* TM_conversions::INT_Q_OVERLAP_overlap_info */
#define INT_Q_OVERLAP_overlap_info_TM_c 1

/* TM_conversions::INT_Q_OVERLAP_no_overlap_info */
#define INT_Q_OVERLAP_no_overlap_info_T 0

/* TM_conversions::ENUM_Q_OVERLAP_overlap_info */
#define ENUM_Q_OVERLAP_overlap_info_TM_ Q_OVERLAP_Overlap_information_t

/* TM_conversions::ENUM_Q_OVERLAP_no_overlap_info */
#define ENUM_Q_OVERLAP_no_overlap_info_ Q_OVERLAP_No_overlap_informatio

/* TM_conversions::INT_Q_DANGERPOINT_no_dangerpoint_info */
#define INT_Q_DANGERPOINT_no_dangerpoin 0

/* TM_conversions::INT_Q_DANGERPOINT_dangerpoint_info */
#define INT_Q_DANGERPOINT_dangerpoint_i 1

/* TM_conversions::ENUM_Q_DANGERPOINT_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_dangerpoint_ Q_DANGERPOINT_Danger_point_info

/* TM_conversions::ENUM_Q_DANGERPOINT_no_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_no_dangerpoi Q_DANGERPOINT_No_danger_point_i

/* TM_conversions::INT_Q_ENDTIMER_no_endsection_timer_info */
#define INT_Q_ENDTIMER_no_endsection_ti 0

/* TM_conversions::INT_Q_ENDTIMER_endsection_timer_info_follows */
#define INT_Q_ENDTIMER_endsection_timer 1

/* TM_conversions::ENUM_Q_ENDTIMER_endsection_timer_info_follows */
#define ENUM_Q_ENDTIMER_endsection_time Q_ENDTIMER_End_section_timer_in

/* TM_conversions::ENUM_Q_ENDTIMER_no_endsection_timer_info */
#define ENUM_Q_ENDTIMER_no_endsection_t Q_ENDTIMER_No_End_section_timer

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 6)

/* TM::DEFAULT_P015_OBU_section */
extern const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM;

/* TM_conversions::INT_Q_SECTIONTIMER_sectiontimer */
#define INT_Q_SECTIONTIMER_sectiontimer 1

/* TM_conversions::INT_Q_SECTIONTIMER_no_sectiontimer */
#define INT_Q_SECTIONTIMER_no_sectionti 0

/* TM_conversions::ENUM_Q_SECTIONTIMER_sectiontimer */
#define ENUM_Q_SECTIONTIMER_sectiontime Q_SECTIONTIMER_Section_Timer_in

/* TM_conversions::ENUM_Q_SECTIONTIMER_no_sectiontimer */
#define ENUM_Q_SECTIONTIMER_no_sectiont Q_SECTIONTIMER_No_Section_Timer

/* TM_lib_internal::DIM_P015_n_sections */
#define DIM_P015_n_sections_TM_lib_inte 4

/* TA_MA_Request::cMA_RequestParam */
extern const P57_MovementAuthorityRequestPar cMA_RequestParam_TA_MA_Request;

/* TM_TrainToTrack::DIM_max_elements_P001 */
#define DIM_max_elements_P001_TM_TrainT 17

/* TM_conversions::ENUM_M_MODE_Full_Supervision */
#define ENUM_M_MODE_Full_Supervision_TM M_MODE_Full_Supervision

/* TM_conversions::ENUM_M_MODE_Isolation */
#define ENUM_M_MODE_Isolation_TM_conver M_MODE_Isolation

/* TM_conversions::ENUM_M_MODE_Limited_Supervision */
#define ENUM_M_MODE_Limited_Supervision M_MODE_Limited_Supervision

/* TM_conversions::ENUM_M_MODE_National_System */
#define ENUM_M_MODE_National_System_TM_ M_MODE_National_System

/* TM_conversions::ENUM_M_MODE_Non_Leading */
#define ENUM_M_MODE_Non_Leading_TM_conv M_MODE_Non_Leading

/* TM_conversions::ENUM_M_MODE_On_Sight */
#define ENUM_M_MODE_On_Sight_TM_convers M_MODE_On_Sight

/* TM_conversions::ENUM_M_MODE_Passive_Shunting */
#define ENUM_M_MODE_Passive_Shunting_TM M_MODE_No_Power

/* TM_conversions::ENUM_M_MODE_Post_Trip */
#define ENUM_M_MODE_Post_Trip_TM_conver M_MODE_Post_Trip

/* TM_conversions::ENUM_M_MODE_Reversing */
#define ENUM_M_MODE_Reversing_TM_conver M_MODE_Reversing

/* TM_conversions::ENUM_M_MODE_Shunting */
#define ENUM_M_MODE_Shunting_TM_convers M_MODE_Shunting

/* TM_conversions::ENUM_M_MODE_Sleeping */
#define ENUM_M_MODE_Sleeping_TM_convers M_MODE_Sleeping

/* TM_conversions::ENUM_M_MODE_Staff_Responsible */
#define ENUM_M_MODE_Staff_Responsible_T M_MODE_Staff_Responsible

/* TM_conversions::ENUM_M_MODE_Stand_By */
#define ENUM_M_MODE_Stand_By_TM_convers M_MODE_Stand_By

/* TM_conversions::ENUM_M_MODE_System_Failure */
#define ENUM_M_MODE_System_Failure_TM_c M_MODE_System_Failure

/* TM_conversions::ENUM_M_MODE_Trip */
#define ENUM_M_MODE_Trip_TM_conversions M_MODE_Trip

/* TM_conversions::ENUM_M_MODE_Unfitted */
#define ENUM_M_MODE_Unfitted_TM_convers M_MODE_Unfitted

/* TM_conversions::INT_M_MODE_System_Failure */
#define INT_M_MODE_System_Failure_TM_co 9

/* TM_conversions::INT_M_MODE_Unfitted */
#define INT_M_MODE_Unfitted_TM_conversi 4

/* TM_conversions::INT_M_MODE_Trip */
#define INT_M_MODE_Trip_TM_conversions 7

/* TM_conversions::INT_M_MODE_Stand_By */
#define INT_M_MODE_Stand_By_TM_conversi 6

/* TM_conversions::INT_M_MODE_Staff_Responsible */
#define INT_M_MODE_Staff_Responsible_TM 2

/* TM_conversions::INT_M_MODE_Sleeping */
#define INT_M_MODE_Sleeping_TM_conversi 5

/* TM_conversions::INT_M_MODE_Shunting */
#define INT_M_MODE_Shunting_TM_conversi 3

/* TM_conversions::INT_M_MODE_Reversing */
#define INT_M_MODE_Reversing_TM_convers 14

/* TM_conversions::INT_M_MODE_Post_Trip */
#define INT_M_MODE_Post_Trip_TM_convers 8

/* TM_conversions::INT_M_MODE_Passive_Shunting */
#define INT_M_MODE_Passive_Shunting_TM_ 15

/* TM_conversions::INT_M_MODE_On_Sight */
#define INT_M_MODE_On_Sight_TM_conversi 1

/* TM_conversions::INT_M_MODE_Non_Leading */
#define INT_M_MODE_Non_Leading_TM_conve 11

/* TM_conversions::INT_M_MODE_National_System */
#define INT_M_MODE_National_System_TM_c 13

/* TM_conversions::INT_M_MODE_Limited_Supervision */
#define INT_M_MODE_Limited_Supervision_ 12

/* TM_conversions::INT_M_MODE_Isolation */
#define INT_M_MODE_Isolation_TM_convers 10

/* TM_conversions::INT_M_MODE_Full_Supervision */
#define INT_M_MODE_Full_Supervision_TM_ 0

/* TM_conversions::ENUM_M_LEVEL_Level_0 */
#define ENUM_M_LEVEL_Level_0_TM_convers M_LEVEL_Level_0

/* TM_conversions::ENUM_M_LEVEL_Level_1 */
#define ENUM_M_LEVEL_Level_1_TM_convers M_LEVEL_Level_1

/* TM_conversions::ENUM_M_LEVEL_Level_2 */
#define ENUM_M_LEVEL_Level_2_TM_convers M_LEVEL_Level_2

/* TM_conversions::ENUM_M_LEVEL_Level_3 */
#define ENUM_M_LEVEL_Level_3_TM_convers M_LEVEL_Level_3

/* TM_conversions::ENUM_M_LEVEL_Level_NTC */
#define ENUM_M_LEVEL_Level_NTC_TM_conve M_LEVEL_Level_NTC_specified_by_

/* TM_conversions::INT_M_LEVEL_Level_NTC */
#define INT_M_LEVEL_Level_NTC_TM_conver 1

/* TM_conversions::INT_M_LEVEL_Level_3 */
#define INT_M_LEVEL_Level_3_TM_conversi 4

/* TM_conversions::INT_M_LEVEL_Level_2 */
#define INT_M_LEVEL_Level_2_TM_conversi 3

/* TM_conversions::INT_M_LEVEL_Level_1 */
#define INT_M_LEVEL_Level_1_TM_conversi 2

/* TM_conversions::INT_M_LEVEL_Level_0 */
#define INT_M_LEVEL_Level_0_TM_conversi 0

/* TM_conversions::ENUM_Q_DIRLRBG_nominal */
#define ENUM_Q_DIRLRBG_nominal_TM_conve Q_DIRLRBG_Nominal

/* TM_conversions::ENUM_Q_DIRLRBG_reverse */
#define ENUM_Q_DIRLRBG_reverse_TM_conve Q_DIRLRBG_Reverse

/* TM_conversions::ENUM_Q_DIRLRBG_unknown */
#define ENUM_Q_DIRLRBG_unknown_TM_conve Q_DIRLRBG_Unknown

/* TM_conversions::INT_Q_DIRLRBG_unknown */
#define INT_Q_DIRLRBG_unknown_TM_conver 2

/* TM_conversions::INT_Q_DIRLRBG_reverse */
#define INT_Q_DIRLRBG_reverse_TM_conver 0

/* TM_conversions::INT_Q_DIRLRBG_nominal */
#define INT_Q_DIRLRBG_nominal_TM_conver 1

/* TM_conversions::ENUM_Q_DLRBG_nominal */
#define ENUM_Q_DLRBG_nominal_TM_convers Q_DLRBG_Nominal

/* TM_conversions::ENUM_Q_DLRBG_reverse */
#define ENUM_Q_DLRBG_reverse_TM_convers Q_DLRBG_Reverse

/* TM_conversions::ENUM_Q_DLRBG_unknown */
#define ENUM_Q_DLRBG_unknown_TM_convers Q_DLRBG_Unknown

/* TM_conversions::INT_Q_DLRBG_unknown */
#define INT_Q_DLRBG_unknown_TM_conversi 2

/* TM_conversions::INT_Q_DLRBG_reverse */
#define INT_Q_DLRBG_reverse_TM_conversi 0

/* TM_conversions::INT_Q_DLRBG_nominal */
#define INT_Q_DLRBG_nominal_TM_conversi 1

/* TM_conversions::DIM_L_max */
#define DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define DIM_L_min_TM_conversions 0

/* TM_conversions::ENUM_Q_LENGTH_no_info_available */
#define ENUM_Q_LENGTH_no_info_available Q_LENGTH_No_train_integrity_inf

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_device */
#define ENUM_Q_LENGTH_confimed_by_devic _31_Q_LENGTH_Train_integrity_co

/* TM_conversions::ENUM_Q_LENGTH_confimed_by_driver */
#define ENUM_Q_LENGTH_confimed_by_drive Q_LENGTH_Train_integrity_confir

/* TM_conversions::ENUM_Q_LENGTH_integrity_lost */
#define ENUM_Q_LENGTH_integrity_lost_TM Q_LENGTH_Train_integrity_lost

/* TM_conversions::INT_Q_LENGTH_integrity_lost */
#define INT_Q_LENGTH_integrity_lost_TM_ 3

/* TM_conversions::INT_Q_LENGTH_confimed_by_driver */
#define INT_Q_LENGTH_confimed_by_driver 2

/* TM_conversions::INT_Q_LENGTH_confimed_by_device */
#define INT_Q_LENGTH_confimed_by_device 1

/* TM_conversions::INT_Q_LENGTH_no_info_available */
#define INT_Q_LENGTH_no_info_available_ 0

/* TM_conversions::DIM_L_TRAININT_min */
#define DIM_L_TRAININT_min_TM_conversio 0

/* TM_conversions::DIM_L_TRAININT_max */
#define DIM_L_TRAININT_max_TM_conversio 32767

/* TM_conversions::ENUM_Q_DIRTRAIN_nominal */
#define ENUM_Q_DIRTRAIN_nominal_TM_conv Q_DIRTRAIN_Nominal

/* TM_conversions::ENUM_Q_DIRTRAIN_reverse */
#define ENUM_Q_DIRTRAIN_reverse_TM_conv Q_DIRTRAIN_Reverse

/* TM_conversions::ENUM_Q_DIRTRAIN_unknown */
#define ENUM_Q_DIRTRAIN_unknown_TM_conv Q_DIRTRAIN_Unknown

/* TM_conversions::INT_Q_DIRTRAIN_unknown */
#define INT_Q_DIRTRAIN_unknown_TM_conve 2

/* TM_conversions::INT_Q_DIRTRAIN_reverse */
#define INT_Q_DIRTRAIN_reverse_TM_conve 0

/* TM_conversions::INT_Q_DIRTRAIN_nominal */
#define INT_Q_DIRTRAIN_nominal_TM_conve 1

/* TM_TrainToTrack::DIM_max_elements_P000 */
#define DIM_max_elements_P000_TM_TrainT 17

/* TM_TrainToTrack::DIM_max_elements_P009 */
#define DIM_max_elements_P009_TM_TrainT 3

/* TM_conversions::ENUM_Q_MARQSTREASON_driver */
#define ENUM_Q_MARQSTREASON_driver_TM_c Q_MARQSTREASON_Start_selected_b

/* TM_conversions::ENUM_Q_MARQSTREASON_timer_preindication_LOA */
#define ENUM_Q_MARQSTREASON_timer_prein Q_MARQSTREASON_Time_before_reac

/* TM_conversions::ENUM_Q_MARQSTREASON_section_timer */
#define ENUM_Q_MARQSTREASON_section_tim Q_MARQSTREASON_Time_before_a_se

/* TM_conversions::ENUM_Q_MARQSTREASON_track_description_deleted */
#define ENUM_Q_MARQSTREASON_track_descr Q_MARQSTREASON_Track_descriptio

/* TM_conversions::ENUM_Q_MARQSTREASON_TAF */
#define ENUM_Q_MARQSTREASON_TAF_TM_conv Q_MARQSTREASON_TAF_up_to_level_

/* TM_conversions::INT_Q_MARQSTREASON_driver */
#define INT_Q_MARQSTREASON_driver_TM_co 0

/* TM_conversions::INT_Q_MARQSTREASON_track_description_deleted */
#define INT_Q_MARQSTREASON_track_descri 3

/* TM_conversions::INT_Q_MARQSTREASON_section_timer */
#define INT_Q_MARQSTREASON_section_time 2

/* TM_conversions::INT_Q_MARQSTREASON_timer_preindication_LOA */
#define INT_Q_MARQSTREASON_timer_preind 1

/* TA_MA_Request::cM_version */
#define cM_version_TA_MA_Request M_VERSION_Version_1_1_introduce

/* TA_MA_Request::DEFAULT_P009 */
extern const P009_TM_TrainToTrack DEFAULT_P009_TA_MA_Request;

/* TA_MA_Request::cLocation */
#define cLocation_TA_MA_Request 0

/* XCP_numeric::ZERO_real */
#define ZERO_real_XCP_numeric 0.0

/* TrackAtlasTypes::MAsMaxSections */
#define MAsMaxSections_TrackAtlasTypes 10

/* TA_MA_Request::cCycleTime */
#define cCycleTime_TA_MA_Request 20

/* CalculateTrainPosition_Pkg::cNoPositionErrors */
extern const positionErrors_T_TrainPosition_ cNoPositionErrors_CalculateTrai;

/* CalculateTrainPosition_Pkg::cNoPositionedBGs */
extern const positionedBGs_T_TrainPosition_T cNoPositionedBGs_CalculateTrain;

/* Obu_BasicTypes_Pkg::cOdometryInitialValue */
extern const OdometryLocations_T_Obu_BasicTy cOdometryInitialValue_Obu_Basic;

/* CalculateTrainPosition_Pkg::cNoPassedBG */
extern const passedBG_T_BG_Types_Pkg cNoPassedBG_CalculateTrainPosit;

/* CalculateTrainPosition_Pkg::cNoInfoFromLinking */
extern const infoFromLinking_T_TrainPosition cNoInfoFromLinking_CalculateTra;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoRefPrevBGs */
extern const refBGs_T_CalculateTrainPosition cNoRefPrevBGs_CalculateTrainPos;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoLinkedBG_index */
extern const linkedBG_index_T_CalculateTrain cNoLinkedBG_index_CalculateTrai;

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::noValidIndex */
#define noValidIndex_CalculateTrainPosi (- 1)

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_x_unlinkedBGs */
#define cNoOfAtLeast_x_unlinkedBGs_Calc 2

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_8_LRBGs */
#define cNoOfAtLeast_8_LRBGs_CalculateT 3

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBGCounters_0 */
extern const BG_counters_T_CalculateTrainPos cBGCounters_0_CalculateTrainPos;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBG_find_0 */
extern const BG_find_T_CalculateTrainPositio cBG_find_0_CalculateTrainPositi;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cEmptyPositionedBG */
extern const positionedBG_T_TrainPosition_Ty cEmptyPositionedBG_CalculateTra;

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

/* TM_lib_internal::DEFAULT_P005_OBU_section */
extern const P005_section_enum_T_TM DEFAULT_P005_OBU_section_TM_lib;

/* TM_conversions::INT_Q_NEWCOUNTRY_same */
#define INT_Q_NEWCOUNTRY_same_TM_conver 0

/* TM_conversions::INT_Q_NEWCOUNTRY_not_same */
#define INT_Q_NEWCOUNTRY_not_same_TM_co 1

/* TM_conversions::ENUM_Q_NEWCOUNTRY_not_same */
#define ENUM_Q_NEWCOUNTRY_not_same_TM_c Q_NEWCOUNTRY_Not_the_same_count

/* TM_conversions::ENUM_Q_NEWCOUNTRY_same */
#define ENUM_Q_NEWCOUNTRY_same_TM_conve Q_NEWCOUNTRY_Same_country__or__

/* TM_conversions::INT_Q_LINKREACTION_Apply_servicebrake */
#define INT_Q_LINKREACTION_Apply_servic 1

/* TM_conversions::INT_Q_LINKREACTION_Train_trip */
#define INT_Q_LINKREACTION_Train_trip_T 0

/* TM_conversions::INT_Q_LINKREACTION_No_Reaction */
#define INT_Q_LINKREACTION_No_Reaction_ 2

/* TM_conversions::ENUM_Q_LINKREACTION_Train_trip */
#define ENUM_Q_LINKREACTION_Train_trip_ Q_LINKREACTION_Train_trip

/* TM_conversions::ENUM_Q_LINKREACTION_No_Reaction */
#define ENUM_Q_LINKREACTION_No_Reaction Q_LINKREACTION_No_Reaction

/* TM_conversions::ENUM_Q_LINKREACTION_Apply_servicebrake */
#define ENUM_Q_LINKREACTION_Apply_servi Q_LINKREACTION_Apply_service_br

/* TM_conversions::INT_Q_LINKORIENTATION_nominal */
#define INT_Q_LINKORIENTATION_nominal_T 1

/* TM_conversions::INT_Q_LINKORIENTATION_reverse */
#define INT_Q_LINKORIENTATION_reverse_T 0

/* TM_conversions::ENUM_Q_LINKORIENTATION_reverse */
#define ENUM_Q_LINKORIENTATION_reverse_ _56_Q_LINKORIENTATION_The_balis

/* TM_conversions::ENUM_Q_LINKORIENTATION_nominal */
#define ENUM_Q_LINKORIENTATION_nominal_ Q_LINKORIENTATION_The_balise_gr

/* TM_lib_internal::DIM_P005_n_sections */
#define DIM_P005_n_sections_TM_lib_inte 7

/* TM_specific::DEFAULT_LinkedBGs_T */
extern const LinkedBGs_T_BG_Types_Pkg DEFAULT_LinkedBGs_T_TM_specific;

/* EVC_PermanentData_Pkg::cP3NationalValuesUtrechtAmsterdam */
extern const P3_NationalValues_T_Packet_Type cP3NationalValuesUtrechtAmsterd;

/* Packet_Types_Pkg::cNIterMax */
#define cNIterMax_Packet_Types_Pkg 7

/* EVC_PermanentData_Pkg::cP003_PermanentData */
extern const P003_permanent_data_T_TM_baseli cP003_PermanentData_EVC_Permane;

/* EVC_PermanentData_Pkg::cP203_PermanentData */
extern const P203V1_OBU_T_TM_baseline2 cP203_PermanentData_EVC_Permane;

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* EVC_PermanentData_Pkg::cMoRC_own_P3ng */
extern const P003_TM_TrainToTrack cMoRC_own_P3ng_EVC_PermanentDat;

/* EVC_PermanentData_Pkg::cMoRC_ConfigData */
extern const morc_configData_T_RCM_Session_T cMoRC_ConfigData_EVC_PermanentD;

/* RCM_Session_Types_Pkg::cNoMoRCStatus */
extern const morcStatus_T_RCM_Session_Types_ cNoMoRCStatus_RCM_Session_Types;

/* TrainPosition_Types_Pck::cQ_SCALE_10_cm_resolution */
#define cQ_SCALE_10_cm_resolution_Train 10

/* TrainPosition_Types_Pck::cQ_SCALE_1_m_resolution */
#define cQ_SCALE_1_m_resolution_TrainPo 100

/* TrainPosition_Types_Pck::cQ_SCALE_10_m_resolution */
#define cQ_SCALE_10_m_resolution_TrainP 1000

/* TrainPosition_Types_Pck::cQLOCACC_resolution */
#define cQLOCACC_resolution_TrainPositi 100

/* Handover_Pkg::cMobileDeviceNo_1 */
#define cMobileDeviceNo_1_Handover_Pkg 1

/* Handover_Pkg::cMobileDeviceNo_2 */
#define cMobileDeviceNo_2_Handover_Pkg 2

/* Handover_Pkg::cNoP131_RBCTransitionOrder */
extern const p131_q_rbcTransitionOrder_T_Han cNoP131_RBCTransitionOrder_Hand;

/* TM::DEFAULT_BaliseData */
extern const CompressedPackets_T_Common_Type DEFAULT_BaliseData_TM;

/* TM::DIM_MaxElementsPacket042 */
#define DIM_MaxElementsPacket042_TM 8

/* TM::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM 32

/* TM::ERROR_nid_packet */
#define ERROR_nid_packet_TM (- 1)

/* TM::DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* Obu_BasicTypes_Pkg::cLocWithInAcc_0 */
extern const LocWithInAcc_T_Obu_BasicTypes_P cLocWithInAcc_0_Obu_BasicTypes_;

/* TM_conversions::INT_Q_SCALE_10cm */
#define INT_Q_SCALE_10cm_TM_conversions 0

/* TM_conversions::INT_Q_SCALE_1m */
#define INT_Q_SCALE_1m_TM_conversions 1

/* TM_conversions::INT_Q_SCALE_10m */
#define INT_Q_SCALE_10m_TM_conversions 2

/* TM_conversions::ENUM_Q_SCALE_10cm */
#define ENUM_Q_SCALE_10cm_TM_conversion Q_SCALE_10_cm_scale

/* TM_conversions::ENUM_Q_SCALE_10m */
#define ENUM_Q_SCALE_10m_TM_conversions Q_SCALE_10_m_scale

/* TM_conversions::ENUM_Q_SCALE_1m */
#define ENUM_Q_SCALE_1m_TM_conversions Q_SCALE_1_m_scale

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM::DIM_MaxElementsPacket131 */
#define DIM_MaxElementsPacket131_TM 9

/* MoRC_Pck::Coder_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard */
#define _1_cNID_RADIO_useTheShortNumber 0xFFFFFFFF

/* MoRC_Pck::Coder_Pkg::cNID_RBC_contactLastKnownRBC */
#define cNID_RBC_contactLastKnownRBC_Mo 16383

/* Handover_Pkg::cNoMessageFromTrack */
extern const msgFromTrack_T_RCM_MsgTypes_Pkg cNoMessageFromTrack_Handover_Pk;

/* TrainPosition_Types_Pck::cMaxNoOfStoredBGs */
#define cMaxNoOfStoredBGs_TrainPosition (1 * cMaxNoOfLinkedBGs_BG_Types_Pkg + 8)

/* CalculateTrainPosition_Pkg::cNoValidIndex */
#define cNoValidIndex_CalculateTrainPos (- 1)

/* CalculateTrainPosition_Pkg::cNoPositionedBG */
extern const positionedBG_T_TrainPosition_Ty cNoPositionedBG_CalculateTrainP;

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 33

/* BG_Types_Pkg::cNID_LRBG_unknown */
#define cNID_LRBG_unknown_BG_Types_Pkg 16777215

/* BG_Types_Pkg::cNID_LRBG_14Bits_Multiplicator */
#define cNID_LRBG_14Bits_Multiplicator_ 16384

/* BG_Types_Pkg::cNID_BG_unknown */
#define cNID_BG_unknown_BG_Types_Pkg 16383

/* Handover_Pkg::handoverUtils_Pkg::cIdleBus */
extern const M_TrainTrackMessageBus_t_TM_Tra cIdleBus_Handover_Pkg_handoverU;

/* TM_TrainToTrack::DIM_max_elements_P003 */
#define DIM_max_elements_P003_TM_TrainT (3 + DIM_nid_radio_list_TM_TrainToTr)

/* TM_TrainToTrack::INVALID_NID_PACKET */
#define INVALID_NID_PACKET_TM_TrainToTr 999

/* TM_lib_internal::DEFAULT_M_TrainTrackMessage_buffer */
extern const M_TrainTrackMessage_buffer_t_TM DEFAULT_M_TrainTrackMessage_buf;

/* TM_lib_internal::DIM_FIFO_demo */
#define DIM_FIFO_demo_TM_lib_internal 5

/* TM_lib_internal::EMPTY_TrainTrackMessage */
extern const M_TrainTrack_Message_T_TM_radio EMPTY_TrainTrackMessage_TM_lib_;

/* TM_lib_internal::DIM_FIFO_TrainTrackMessage */
#define DIM_FIFO_TrainTrackMessage_TM_l 5

/* TM_radio_messages::nid_meta_p000 */
#define nid_meta_p000_TM_radio_messages 998

/* TM_radio_messages::nid_meta_p001 */
#define nid_meta_p001_TM_radio_messages 1

/* TM_radio_messages::DEFAULT_TrainToTrackMessage */
extern const M_TrainTrack_Message_T_TM_radio DEFAULT_TrainToTrackMessage_TM_;

/* TM_TrainTrack_Bus::BusWidth */
#define BusWidth_TM_TrainTrack_Bus (CycleTime_TM_TrainTrack_Bus / Time_10ms_TM_TrainTrack_Bus)

/* TM_TrainTrack_Bus::CycleTime */
#define CycleTime_TM_TrainTrack_Bus 50

/* TM_TrainTrack_Bus::Time_10ms */
#define Time_10ms_TM_TrainTrack_Bus 10

/* TM_radio_messages::DIM_max_payload */
#define DIM_max_payload_TM_radio_messag 50

/* TM_TrainToTrack::DIM_nid_radio_list */
#define DIM_nid_radio_list_TM_TrainToTr 5

/* RCM_Types_Pkg::cNoConnectionContext */
extern const mobileConnectionContext_T_RCM_T cNoConnectionContext_RCM_Types_;

/* RCM_Types_Pkg::cNoMobileRegistrationContext */
extern const mobileRegistrationContext_T_RCM cNoMobileRegistrationContext_RC;

/* Id_Pkg::co154_No_Compatible_Version_Support */
#define co154_No_Compatible_Version_Sup 154

/* Id_Pkg::co159_Session_established */
#define co159_Session_established_Id_Pk 159

/* Id_Pkg::co156_Termination_of_a_communication_session */
#define co156_Termination_of_a_communic 156

/* Id_Pkg::co155_Initiation_of_a_communication_session */
#define co155_Initiation_of_a_communica 155

/* MoRC_Pck::cNoMessageToRBC */
extern const _9_Radio_TrainTrack_Message_T_R cNoMessageToRBC_MoRC_Pck;

/* MoRC_Pck::Subfunc_Pkg::cNoOrigin */
extern const RBC_Id_T_Common_Types_Pkg cNoOrigin_MoRC_Pck_Subfunc_Pkg;

/* RCM_MsgTypes_Pkg::c_nid_RBC_contactLastKnownRBC_ */
#define c_nid_RBC_contactLastKnownRBC__ 16383

/* RCM_MsgTypes_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard */
#define cNID_RADIO_useTheShortNumberSto 4294967295

/* RCM_Types_Pkg::cNoP45_RadioNetworkRegistration */
extern const P45_RadioNetworkRegistration_T_ cNoP45_RadioNetworkRegistration;

/* RCM_Session_Types_Pkg::cInitialSessionStatus */
extern const sessionStatus_T_RCM_Session_Typ cInitialSessionStatus_RCM_Sessi;

/* RCM_Session_Types_Pkg::cNoSessionStatus */
extern const sessionStatus_T_RCM_Session_Typ cNoSessionStatus_RCM_Session_Ty;

/* RCM_Session_Types_Pkg::cNoSessionCmd */
extern const sessionCmd_T_RCM_Session_Types_ cNoSessionCmd_RCM_Session_Types;

/* RCM_MsgTypes_Pkg::cNo_p42_SessionManagement */
extern const p42_sessionManagement_T_RCM_Msg cNo_p42_SessionManagement_RCM_M;

/* MoRC_Pck::Coder_Pkg::cEmptyOutPackets */
extern const outPackets_T_Common_Types_Pkg cEmptyOutPackets_MoRC_Pck_Coder;

/* Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers */
#define cmaxNumberTelephoneNumbers_Pack 1

/* Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber */
#define cDigitsInTelephoneNumber_Packet 15

/* Packet_TrainTypes_Pkg::cMaxNationalSystem */
#define cMaxNationalSystem_Packet_Train 5

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity */
#define cMaxTractionIdentity_Packet_Tra 4

/* Id_Pkg::cm32_RBC_RIU_System_Version */
#define cm32_RBC_RIU_System_Version_Id_ 32

/* Id_Pkg::cm38_Initiation_of_a_Communication_Session */
#define cm38_Initiation_of_a_Communicat 38

/* Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session */
#define cm39_Acknowledgement_of_termina 39

/* TM_conversions::INT_Q_RBC_establish */
#define INT_Q_RBC_establish_TM_conversi 1

/* TM_conversions::INT_Q_RBC_terminate */
#define INT_Q_RBC_terminate_TM_conversi 0

/* TM_conversions::ENUM_Q_RBC_terminate */
#define ENUM_Q_RBC_terminate_TM_convers Q_RBC_Terminate_communication_s

/* TM_conversions::ENUM_Q_RBC_establish */
#define ENUM_Q_RBC_establish_TM_convers Q_RBC_Establish_communication_s

/* TM_conversions::INT_Q_SLEEPSESSION_execute */
#define INT_Q_SLEEPSESSION_execute_TM_c 1

/* TM_conversions::INT_Q_SLEEPSESSION_ignore */
#define INT_Q_SLEEPSESSION_ignore_TM_co 0

/* TM_conversions::ENUM_Q_SLEEPSESSION_execute */
#define ENUM_Q_SLEEPSESSION_execute_TM_ Q_SLEEPSESSION_Execute_session_

/* TM_conversions::ENUM_Q_SLEEPSESSION_ignore */
#define ENUM_Q_SLEEPSESSION_ignore_TM_c Q_SLEEPSESSION_Ignore_session_e

/* TM_conversions::INT_Q_DIR_nomiinal */
#define INT_Q_DIR_nomiinal_TM_conversio 1

/* TM_conversions::INT_Q_DIR_reverse */
#define INT_Q_DIR_reverse_TM_conversion 0

/* TM_conversions::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM_conversions 2

/* TM_conversions::ENUM_Q_DIR_both */
#define ENUM_Q_DIR_both_TM_conversions Q_DIR_Both_directions

/* TM_conversions::ENUM_Q_DIR_reverse */
#define ENUM_Q_DIR_reverse_TM_conversio Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_nominal */
#define ENUM_Q_DIR_nominal_TM_conversio Q_DIR_Nominal

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_T DEFAULT_CompressedPackets_TM;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_ DEFAULT_PHeader_TM;

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_ 1000000

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_li 100000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_T 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_i 1

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types cDIM_MaxRMessages_Common_Types_

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_ 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_ 500

#endif /* _KCG_CONSTS_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_consts.h
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */

