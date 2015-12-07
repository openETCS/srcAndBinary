/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_EVC_ERSA_EVC_Testrunner.h"

#ifndef KCG_USER_DEFINED_INIT
void ROOT_EVC_init_ERSA_EVC_Testrunner(outC_ROOT_EVC_ERSA_EVC_Testrunner *outC)
{
  kcg_int i;
  
  outC->resetOut = kcg_true;
  outC->EVC_ready = kcg_true;
  outC->init = kcg_true;
  for (i = 0; i < 311; i++) {
    outC->TCP_fromDMI[i] = 0;
  }
  outC->API_RTM_mangement.valid = kcg_true;
  outC->API_RTM_mangement.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_mangement.networkID = 0;
  outC->API_toDMI.present = kcg_true;
  outC->API_toDMI.dynamic.valid = kcg_true;
  outC->API_toDMI.dynamic.system_clock = 0;
  outC->API_toDMI.dynamic.v_train = 0;
  outC->API_toDMI.dynamic.location_front_train = 0;
  outC->API_toDMI.dynamic.location_brake_target = 0;
  outC->API_toDMI.dynamic.v_target = 0;
  outC->API_toDMI.dynamic.v_permitted = 0;
  outC->API_toDMI.dynamic.v_release = 0;
  outC->API_toDMI.dynamic.location_brake_curve_starting_point = 0;
  outC->API_toDMI.dynamic.v_intervention = 0;
  outC->API_toDMI.dynamic.mode = M_MODE_Full_Supervision;
  outC->API_toDMI.dynamic.level.level = M_LEVEL_Level_0;
  outC->API_toDMI.dynamic.level.nid_stm = 0;
  outC->API_toDMI.dynamic.nid_c = 0;
  outC->API_toDMI.dynamic.nid_c_valid = kcg_true;
  outC->API_toDMI.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->API_toDMI.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->API_toDMI.dynamic.location_LOA = 0;
  outC->API_toDMI.dynamic.v_LOA = 0;
  outC->API_toDMI.dynamic.location_KP_Balise_Track = 0;
  outC->API_toDMI.dynamic.distance_KP_Balise = 0;
  outC->API_toDMI.dynamic.distance_to_TSA = 0;
  outC->API_toDMI.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->API_toDMI.dynamic.distanceIndicationPoint = 0;
  outC->API_toDMI.menu_request.valid = kcg_true;
  outC->API_toDMI.menu_request.system_clock = 0;
  outC->API_toDMI.menu_request.available_menu.Menu_button_start_of_mission =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_shunting_exit =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_non_leading =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_exit_non_leading =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_train_data_view =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_override_EOA =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_adhesion_factor =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_system_version =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_train_integrity =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_use_short_number =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_enter_RBC_data =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_radio_network_ID =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_contact_last_RBC =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Button_switch_for_train_data =
    kcg_true;
  outC->API_toDMI.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->API_toDMI.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->API_toDMI.entry_request.valid = kcg_true;
  outC->API_toDMI.entry_request.system_clock = 0;
  outC->API_toDMI.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->API_toDMI.evc_coded_train_data.valid = kcg_true;
  outC->API_toDMI.evc_coded_train_data.system_clock = 0;
  outC->API_toDMI.evc_coded_train_data.trainID.number = 0;
  outC->API_toDMI.evc_coded_train_data.trainID.dig1 = 0;
  outC->API_toDMI.evc_coded_train_data.trainID.dig2 = 0;
  outC->API_toDMI.evc_coded_train_data.trainID.dig3 = 0;
  outC->API_toDMI.evc_coded_train_data.trainID.dig4 = 0;
  outC->API_toDMI.evc_coded_train_data.trainID.dig5 = 0;
  outC->API_toDMI.evc_coded_train_data.trainLength.number = 0;
  outC->API_toDMI.evc_coded_train_data.trainLength.dig1 = 0;
  outC->API_toDMI.evc_coded_train_data.trainLength.dig2 = 0;
  outC->API_toDMI.evc_coded_train_data.trainLength.dig3 = 0;
  outC->API_toDMI.evc_coded_train_data.trainLength.dig4 = 0;
  outC->API_toDMI.evc_coded_train_data.brakeModel.number = 0;
  outC->API_toDMI.evc_coded_train_data.brakeModel.dig1 = 0;
  outC->API_toDMI.evc_coded_train_data.brakeModel.dig2 = 0;
  outC->API_toDMI.evc_coded_train_data.brakeModel.dig3 = 0;
  outC->API_toDMI.evc_coded_train_data.vmax.number = 0;
  outC->API_toDMI.evc_coded_train_data.vmax.dig1 = 0;
  outC->API_toDMI.evc_coded_train_data.vmax.dig2 = 0;
  outC->API_toDMI.evc_coded_train_data.vmax.dig3 = 0;
  outC->API_toDMI.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->API_toDMI.evc_coded_train_data.airTightSystem.number = 0;
  outC->API_toDMI.evc_coded_train_data.airTightSystem.dig1 = 0;
  outC->API_toDMI.evc_coded_train_data.airTightSystem.dig2 = 0;
  outC->API_toDMI.evc_coded_train_data.airTightSystem.dig3 = 0;
  outC->API_toDMI.evc_coded_train_data.mLoadingGauge.number = 0;
  outC->API_toDMI.evc_coded_train_data.mLoadingGauge.dig1 = 0;
  outC->API_toDMI.evc_coded_train_data.mLoadingGauge.dig2 = 0;
  outC->API_toDMI.evc_coded_train_data.mLoadingGauge.dig3 = 0;
  outC->API_toDMI.textMessage.valid = kcg_true;
  outC->API_toDMI.textMessage.system_clock = 0;
  outC->API_toDMI.textMessage.textMessage_ID = 0;
  outC->API_toDMI.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->API_toDMI.textMessage.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->API_toDMI.textMessage.x_text[i] = ' ';
  }
  outC->API_toDMI.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->API_toDMI.textMessage.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->API_toDMI.trackDescription.valid = kcg_true;
  outC->API_toDMI.trackDescription.system_clock = 0;
  outC->API_toDMI.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (i = 0; i < 32; i++) {
    outC->API_toDMI.trackDescription.speedProfiles.speedProfiles[i].valid =
      kcg_true;
    outC->API_toDMI.trackDescription.speedProfiles.speedProfiles[i].Loc_Abs = 0;
    outC->API_toDMI.trackDescription.speedProfiles.speedProfiles[i].Loc_LRBG =
      0;
    outC->API_toDMI.trackDescription.speedProfiles.speedProfiles[i].MRS = 0;
  }
  outC->API_toDMI.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (i = 0; i < 32; i++) {
    outC->API_toDMI.trackDescription.gradientProfiles.gradientProfiles[i].valid =
      kcg_true;
    outC->API_toDMI.trackDescription.gradientProfiles.gradientProfiles[i].begin_section =
      0;
    outC->API_toDMI.trackDescription.gradientProfiles.gradientProfiles[i].end_section =
      0;
    outC->API_toDMI.trackDescription.gradientProfiles.gradientProfiles[i].gradient =
      0;
  }
  outC->API_toDMI.trackDescription.trackConditions.nIter = 0;
  for (i = 0; i < 32; i++) {
    outC->API_toDMI.trackDescription.trackConditions.trackCondition[i].d_trackcond =
      0;
    outC->API_toDMI.trackDescription.trackConditions.trackCondition[i].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->API_toDMI.identifierRequest.valid = kcg_true;
  outC->API_toDMI.identifierRequest.system_clock = 0;
  outC->API_toDMI.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->API_toDMI.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->API_toDMI.identifierRequest.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->API_toDMI.identifierRequest.x_name[i] = ' ';
  }
  outC->API_toDMI.identifierRequest.l_extra = 0;
  outC->API_toDMI.systemVersion.valid = kcg_true;
  outC->API_toDMI.systemVersion.system_clock = 0;
  outC->API_toDMI.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->API_toDMI.displayControl.valid = kcg_true;
  outC->API_toDMI.displayControl.cab_is_active = kcg_true;
  outC->API_toDMI.displayControl.system_clock = 0;
  outC->API_toDMI.EVC_levelData.valid = kcg_true;
  outC->API_toDMI.EVC_levelData.system_clock = 0;
  outC->API_toDMI.EVC_levelData.levelList.number = 0;
  for (i = 0; i < 32; i++) {
    outC->API_toDMI.EVC_levelData.levelList.levelList[i].level =
      M_LEVEL_Level_0;
    outC->API_toDMI.EVC_levelData.levelList.levelList[i].nid_stm = 0;
  }
  outC->API_toDMI.EVC_radioNetData.valid = kcg_true;
  outC->API_toDMI.EVC_radioNetData.system_clock = 0;
  outC->API_toDMI.EVC_radioNetData.nid_mn = 0;
  outC->API_toDMI.driverIdentifier.valid = kcg_true;
  outC->API_toDMI.driverIdentifier.systemTime = 0;
  for (i = 0; i < 9; i++) {
    outC->API_toDMI.driverIdentifier.driverIdentifier[i] = ' ';
  }
  outC->API_toDMI.trainRunningNumber.valid = kcg_true;
  outC->API_toDMI.trainRunningNumber.systemTime = 0;
  outC->API_toDMI.trainRunningNumber.trainRunningNumber = 0;
  outC->API_toDMI.trainData.valid = kcg_true;
  outC->API_toDMI.trainData.systemTime = 0;
  outC->API_toDMI.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->API_toDMI.trainData.l_train = 0;
  outC->API_toDMI.trainData.m_brakeperct = 0;
  outC->API_toDMI.trainData.v_maxTrain = 0;
  outC->API_toDMI.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->API_toDMI.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->API_toDMI.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->API_toDMI.adhesionFactor.valid = kcg_true;
  outC->API_toDMI.adhesionFactor.systemTime = 0;
  outC->API_toDMI.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->API_toDMI.iconRequest.valid = kcg_true;
  outC->API_toDMI.iconRequest.system_clock = 0;
  outC->API_toDMI.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->API_toDMI.iconRequest.DMI_m_icon_flashing_freq = 0.0;
  outC->API_toDMI.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->API_toDMI.iconRequest.DMI_nid_icon_rank = 0;
  outC->API_toDMI.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->API_toDMI.iconRequest.DMI_nid_area_rank = 0;
  outC->API_toDMI.iconRequest.DMI_nid_icon_identifier = 0;
  outC->debugCurrentLevel = M_LEVEL_Level_0;
  outC->debugCurrentMode = M_MODE_Full_Supervision;
  outC->debugIinterventionSpeed = 0.0;
  outC->debugPermittedSpeed = 0.0;
  outC->debugTrainPositionDeltaMin = 0;
  outC->debugTrainPositionDeltaMax = 0;
  outC->debugTrainPositionNominal = 0;
  outC->API_toTIU.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.valid = kcg_true;
  outC->API_toTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.valid = kcg_true;
  outC->API_toTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.valid = kcg_true;
  outC->API_toTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.valid = kcg_true;
  outC->API_toTIU.info.change_traction_system.d_test_traction.now = 0;
  outC->API_toTIU.info.change_traction_system.d_test_traction.distance = 0;
  outC->API_toTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->API_toTIU.info.passenger_door_control_info.valid = kcg_true;
  outC->API_toTIU.info.passenger_door_control_info.door_control_info = 0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  outC->API_toRBC.Message.valid = kcg_true;
  outC->API_toRBC.Message.nid_message = 0;
  outC->API_toRBC.Message.l_message = 0;
  outC->API_toRBC.Message.t_train = 0;
  outC->API_toRBC.Message.nid_engine = 0;
  outC->API_toRBC.Message.field1 = 0;
  outC->API_toRBC.Message.field2 = 0;
  outC->API_toRBC.Message.field3 = 0;
  for (i = 0; i < 50; i++) {
    outC->API_toRBC.OptionalPackets[i] = 0;
  }
  /* 1 */ RemoteDMIBus_init_EnvSim(&outC->_3_Context_1);
  /* 1 */ EVC_init(&outC->_2_Context_1);
  /* 1 */ EVC_InputBuffer_init_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */ RTM_ERSA_init_ERSA_EVC_Testrunner(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ROOT_EVC_reset_ERSA_EVC_Testrunner(outC_ROOT_EVC_ERSA_EVC_Testrunner *outC)
{
  outC->init = kcg_true;
  /* 1 */ RemoteDMIBus_reset_EnvSim(&outC->_3_Context_1);
  /* 1 */ EVC_reset(&outC->_2_Context_1);
  /* 1 */ EVC_InputBuffer_reset_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */ RTM_ERSA_reset_ERSA_EVC_Testrunner(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ERSA_EVC_Testrunner::ROOT_EVC */
void ROOT_EVC_ERSA_EVC_Testrunner(
  inC_ROOT_EVC_ERSA_EVC_Testrunner *inC,
  outC_ROOT_EVC_ERSA_EVC_Testrunner *outC)
{
  /* ERSA_EVC_Testrunner::ROOT_EVC */ API_TrackSideInput_T_API_Msg_Pkg tmp2;
  /* ERSA_EVC_Testrunner::ROOT_EVC */ TelegramHeader_T_BG_Types_Pkg tmp1;
  /* ERSA_EVC_Testrunner::ROOT_EVC */ DMI_to_EVC_Message_int_T_API_DMI_Pkg tmp;
  /* ERSA_EVC_Testrunner::ROOT_EVC::_L4 */ EVC_to_DMI_Message_int_T_API_DMI_Pkg _L4;
  /* ERSA_EVC_Testrunner::ROOT_EVC::_L30 */ CompressedBaliseMessage_TM _L30;
  /* ERSA_EVC_Testrunner::ROOT_EVC::_L33 */ Radio_TrackTrain_Header_T_Radio_Types_Pkg _L33;
  /* ERSA_EVC_Testrunner::ROOT_EVC::_L32 */ CompressedPackets_T_Common_Types_Pkg _L32;
  /* ERSA_EVC_Testrunner::ROOT_EVC::_L31 */ CompressedRadioMessage_TM _L31;
  /* ERSA_EVC_Testrunner::ROOT_EVC::_L174 */ DMI_to_EVC_Message_int_T_API_DMI_Pkg _L174;
  
  /* 1 */
  API_Frontend_balises_prelim_TM_API(
    &inC->Balise_telegram_header,
    &inC->CompressedPackets,
    &inC->PacketStructure.P001,
    &inC->PacketStructure.P002,
    &inC->PacketStructure.P003_baseline2,
    &inC->PacketStructure.P005,
    &inC->PacketStructure.P012,
    &inC->PacketStructure.P015,
    &inC->PacketStructure.P016,
    &inC->PacketStructure.P021,
    &inC->PacketStructure.P027_baseline2,
    &inC->PacketStructure.P039_baseline2,
    &inC->PacketStructure.P040,
    &inC->PacketStructure.P041,
    &inC->PacketStructure.P042,
    &inC->PacketStructure.P045,
    &inC->PacketStructure.P046,
    &inC->PacketStructure.P057,
    &inC->PacketStructure.P058,
    &inC->PacketStructure.P064,
    &inC->PacketStructure.P065,
    &inC->PacketStructure.P066,
    &inC->PacketStructure.P071,
    &inC->PacketStructure.P072_baseline2,
    &inC->PacketStructure.P080,
    &inC->PacketStructure.P131,
    &inC->PacketStructure.P132,
    &inC->PacketStructure.P133,
    &inC->PacketStructure.P134,
    &inC->PacketStructure.P135,
    &inC->PacketStructure.P136,
    &inC->PacketStructure.P137,
    &inC->PacketStructure.P138,
    &inC->PacketStructure.P139,
    &inC->PacketStructure.P140,
    &inC->PacketStructure.P141,
    &inC->PacketStructure.P143,
    &inC->PacketStructure.P145,
    &inC->PacketStructure.P254,
    &inC->PacketStructure.P255,
    &_L30);
  /* 1 */
  API_Frontend_radio_prelim_TM_API(
    &inC->Radio_message_header,
    &inC->CompressedPackets,
    &inC->PacketStructure.P001,
    &inC->PacketStructure.P002,
    &inC->PacketStructure.P003_baseline2,
    &inC->PacketStructure.P005,
    &inC->PacketStructure.P012,
    &inC->PacketStructure.P015,
    &inC->PacketStructure.P016,
    &inC->PacketStructure.P021,
    &inC->PacketStructure.P027_baseline2,
    &inC->PacketStructure.P039_baseline2,
    &inC->PacketStructure.P040,
    &inC->PacketStructure.P041,
    &inC->PacketStructure.P042,
    &inC->PacketStructure.P045,
    &inC->PacketStructure.P046,
    &inC->PacketStructure.P057,
    &inC->PacketStructure.P058,
    &inC->PacketStructure.P064,
    &inC->PacketStructure.P065,
    &inC->PacketStructure.P066,
    &inC->PacketStructure.P071,
    &inC->PacketStructure.P072_baseline2,
    &inC->PacketStructure.P080,
    &inC->PacketStructure.P131,
    &inC->PacketStructure.P132,
    &inC->PacketStructure.P133,
    &inC->PacketStructure.P134,
    &inC->PacketStructure.P135,
    &inC->PacketStructure.P136,
    &inC->PacketStructure.P137,
    &inC->PacketStructure.P138,
    &inC->PacketStructure.P139,
    &inC->PacketStructure.P140,
    &inC->PacketStructure.P141,
    &inC->PacketStructure.P143,
    &inC->PacketStructure.P145,
    &inC->PacketStructure.P254,
    &inC->PacketStructure.P255,
    &_L31,
    &_L32,
    &_L33);
  /* 1 */
  RTM_ERSA_ERSA_EVC_Testrunner(
    inC->API_SystemTime,
    &_L32,
    &_L33,
    (RadioManagement_T_API_RadioCommunication_Pkg *) &cInitRTMManagement,
    &outC->Context_1);
  /* last_init_ck_TCP_fromDMI */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
      &_L174,
      (DMI_to_EVC_Message_int_T_API_DMI_Pkg *) &cEmptyMessageFromTCPDMI);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_L174, &outC->TCP_fromDMI);
  }
  /* 1 */ CASTLIB_BaliseHeaders_TM_conversions(&_L30.Header, &tmp1);
  /* 1 */
  BTM_Toolbox_TrainModules(
    inC->API_SystemTime,
    &inC->API_Odometry,
    &_L30.Messages,
    &tmp1,
    &tmp2);
  /* 1 */
  EVC_InputBuffer_Toolbox_Functions(
    &tmp2,
    &outC->Context_1.TrackMessage,
    &outC->_1_Context_1);
  /* 1 */ if (_L174[0] != 0) {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&tmp, &_L174);
  }
  else {
    /* 1 */ Write_DMI_to_EVC_to_int_Messages(&inC->API_fromDMI, &tmp);
  }
  /* 1 */
  EVC(
    inC->EVC_reset,
    &inC->API_Odometry,
    inC->API_SystemTime,
    &outC->_1_Context_1.TrackMessageToEVC,
    &tmp,
    &inC->API_fromTIU,
    &inC->API_mobileHWStatus,
    &inC->API_persistentData,
    &outC->_2_Context_1);
  outC->resetOut = outC->_2_Context_1.resetOut;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    &outC->_2_Context_1.API_toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_mangement,
    &outC->_2_Context_1.API_RTM_management);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &_L4,
    &outC->_2_Context_1.API_toDMI);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    &outC->_2_Context_1.API_toTIU);
  outC->EVC_ready = outC->_2_Context_1.EVC_ready;
  outC->debugTrainPositionNominal =
    outC->_2_Context_1.debugTrainPositionNominal;
  outC->debugTrainPositionDeltaMax =
    outC->_2_Context_1.debugTrainPositionDeltaMax;
  outC->debugTrainPositionDeltaMin =
    outC->_2_Context_1.debugTrainPositionDeltaMin;
  outC->debugPermittedSpeed = outC->_2_Context_1.debugPermittedSpeed;
  outC->debugIinterventionSpeed = outC->_2_Context_1.debugIinterventionSpeed;
  outC->debugCurrentMode = outC->_2_Context_1.debugCurrentMode;
  outC->debugCurrentLevel = outC->_2_Context_1.debugCurrentLevel;
  /* 1 */ Write_int_to_EVC_to_DMI_Messages(&_L4, &outC->API_toDMI);
  /* 1 */ RemoteDMIBus_EnvSim(&_L4, &inC->API_fromTIU, &outC->_3_Context_1);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->TCP_fromDMI,
    &outC->_3_Context_1.dmiToEVC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ROOT_EVC_ERSA_EVC_Testrunner.c
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

