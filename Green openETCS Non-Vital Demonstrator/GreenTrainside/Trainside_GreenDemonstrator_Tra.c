/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Trainside_GreenDemonstrator_Tra.h"

#ifndef KCG_USER_DEFINED_INIT
void Trainside_init_GreenDemonstrato(outC_Trainside_GreenDemonstrato *outC)
{
  static kcg_int i;
  
  outC->resetOut = kcg_true;
  outC->EVC_ready = kcg_true;
  outC->GUI_emergencyBrake = kcg_true;
  outC->GUI_serviceBrake = kcg_true;
  outC->GUI_TractionCutOff = kcg_true;
  outC->init = kcg_true;
  outC->rem_toTIU.valid = kcg_true;
  outC->rem_toTIU.info.isolation_status.valid = kcg_true;
  outC->rem_toTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_;
  outC->rem_toTIU.info.brake_command.valid = kcg_true;
  outC->rem_toTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_define;
  outC->rem_toTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_define;
  outC->rem_toTIU.info.brake_inhibition.valid = kcg_true;
  outC->rem_toTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_T;
  outC->rem_toTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_n;
  outC->rem_toTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_T;
  outC->rem_toTIU.info.type_I_train_commands.valid = kcg_true;
  outC->rem_toTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_;
  outC->rem_toTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_define;
  outC->rem_toTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Type;
  outC->rem_toTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_def;
  outC->rem_toTIU.info.change_traction_system.valid = kcg_true;
  outC->rem_toTIU.info.change_traction_system.d_test_traction.now = 0;
  outC->rem_toTIU.info.change_traction_system.d_test_traction.distance = 0;
  outC->rem_toTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_tracti;
  outC->rem_toTIU.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->rem_toTIU.info.passenger_door_control_info.valid = kcg_true;
  outC->rem_toTIU.info.passenger_door_control_info.door_control_info = 0;
  outC->rem_toTIU.info.change_of_allowed_current_consu.valid = kcg_true;
  outC->rem_toTIU.info.change_of_allowed_current_consu.d_test_current.now = 0;
  outC->rem_toTIU.info.change_of_allowed_current_consu.d_test_current.distance =
    0;
  outC->rem_toTIU.info.change_of_allowed_current_consu.m_current.no_restriction =
    kcg_true;
  outC->rem_toTIU.info.change_of_allowed_current_consu.m_current.restriction =
    0;
  outC->rem_radioHW_Status.valid = kcg_true;
  outC->rem_radioHW_Status.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->rem_radioHW_Status.settingUpConnectionHasFailed = kcg_true;
  outC->rem_radioHW_Status.connectionLost = kcg_true;
  outC->fromEVC_RadioManagement.valid = kcg_true;
  outC->fromEVC_RadioManagement.cmd = cmdr_not_relevant_API_RadioComm;
  outC->fromEVC_RadioManagement.networkID = 0;
  outC->fromTIU.valid = kcg_true;
  outC->fromTIU.info.train_status.valid = kcg_true;
  outC->fromTIU.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->fromTIU.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_;
  outC->fromTIU.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_;
  outC->fromTIU.info.train_status.m_cab_st = cab_signal_status_not_defined_T;
  outC->fromTIU.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral;
  outC->fromTIU.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_;
  outC->fromTIU.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->fromTIU.info.brake_status.valid = kcg_true;
  outC->fromTIU.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->fromTIU.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->fromTIU.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->fromTIU.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->fromTIU.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->fromTIU.info.brake_pressure.valid = kcg_true;
  outC->fromTIU.info.brake_pressure.pressure = 0;
  outC->fromTIU.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->fromTIU.info.train_data_info.valid = kcg_true;
  outC->fromTIU.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->fromTIU.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_;
  outC->fromTIU.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->fromTIU.info.train_data_info.trainLength = 0;
  outC->fromTIU.info.train_data_info.brakePerctage = 0;
  outC->fromTIU.info.train_data_info.maxTrainSpeed = 0;
  outC->fromTIU.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_n;
  outC->fromTIU.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->fromTIU.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->fromTIU.info.train_data_info.axleNumber = 0;
  outC->fromTIU.info.train_data_info.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->fromTIU.info.train_data_info.nationSystems[i] = 0;
  }
  outC->fromTIU.info.train_data_info.numberTractionSystems = 0;
  for (i = 0; i < 4; i++) {
    outC->fromTIU.info.train_data_info.tractionSystem[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->fromTIU.info.train_data_info.tractionSystem[i].nid_ctraction = 0;
  }
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.valid = kcg_true;
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.d_test_trackcond.now =
    0;
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.d_test_trackcond.distance =
    0;
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.l_test_trackcond.now =
    0;
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.l_test_trackcond.distance =
    0;
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.empty_profile_initial_state_to_.now =
    0;
  outC->fromTIU.info.type_I_train_and_brake_inhibiti.empty_profile_initial_state_to_.distance =
    0;
  for (i = 0; i < 999; i++) {
    outC->API_toDMI[i] = 0;
  }
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
  /* 2 */ TIU_init_Toolbox_TrainModules(&outC->_1_Context_2);
  /* 1 */ EVC_init(&outC->Context_1);
  /* 2 */ RTM_init_Toolbox_TrainModules(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Trainside_reset_GreenDemonstrat(outC_Trainside_GreenDemonstrato *outC)
{
  outC->init = kcg_true;
  /* 2 */ TIU_reset_Toolbox_TrainModules(&outC->_1_Context_2);
  /* 1 */ EVC_reset(&outC->Context_1);
  /* 2 */ RTM_reset_Toolbox_TrainModules(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* GreenDemonstrator::Trainside::Trainside */
void Trainside_GreenDemonstrator_Tra(
  inC_Trainside_GreenDemonstrator *inC,
  outC_Trainside_GreenDemonstrato *outC)
{
  /* GreenDemonstrator::Trainside::Trainside */
  static RadioManagement_T_API_RadioComm tmp5;
  /* GreenDemonstrator::Trainside::Trainside */
  static TIU_Input_msg_API_TIU_Pkg tmp4;
  /* GreenDemonstrator::Trainside::Trainside */
  static mobileHWStatus_Type_MoRC_Pck tmp3;
  /* GreenDemonstrator::Trainside::Trainside */
  static TIU_Output_msg_API_TIU_Pkg tmp2;
  /* GreenDemonstrator::Trainside::Trainside */
  static M_cab_signal_status_T_TIU_Types tmp1;
  /* GreenDemonstrator::Trainside::Trainside */
  static M_directioncontroller_signal_st tmp;
  
  /* last_init_ck_toTIU */ if (outC->init) {
    kcg_copy_RadioManagement_T_API_(
      &tmp5,
      (RadioManagement_T_API_RadioComm *) &cNoRadioManagement_GreenDemonst);
    kcg_copy_TIU_Input_msg_API_TIU_(
      &tmp4,
      (TIU_Input_msg_API_TIU_Pkg *) &cNoTIU_Input_GreenDemonstrator_);
    kcg_copy_mobileHWStatus_Type_Mo(
      &tmp3,
      (mobileHWStatus_Type_MoRC_Pck *) &cNoHWStatus_GreenDemonstrator_T);
    outC->init = kcg_false;
    kcg_copy_TIU_Output_msg_API_TIU(
      &tmp2,
      (TIU_Output_msg_API_TIU_Pkg *) &cNoTIU_Output_GreenDemonstrator);
  }
  else {
    kcg_copy_RadioManagement_T_API_(&tmp5, &outC->fromEVC_RadioManagement);
    kcg_copy_TIU_Input_msg_API_TIU_(&tmp4, &outC->fromTIU);
    kcg_copy_mobileHWStatus_Type_Mo(&tmp3, &outC->rem_radioHW_Status);
    kcg_copy_TIU_Output_msg_API_TIU(&tmp2, &outC->rem_toTIU);
  }
  /* 2 */
  RTM_Toolbox_TrainModules(
    inC->API_SystemTime,
    &inC->API_fromTrack.packets,
    (_4_Radio_TrackTrain_Header_T_TM *) &noHeader_GreenDemonstrator_Trai,
    &tmp5,
    &outC->Context_2);
  /* 1 */
  EVC(
    inC->EVC_reset,
    &inC->API_Odometry,
    inC->API_SystemTime,
    &inC->API_fromTrack,
    &inC->API_fromDMI,
    &tmp4,
    &tmp3,
    (ps_dataForStartOfMission_T_API_ *) &cDataStorage_ForInit_GreenDemon,
    &outC->Context_1);
  outC->resetOut = outC->Context_1.resetOut;
  kcg_copy_M_TrainTrack_Message_T(&outC->API_toRBC, &outC->Context_1.API_toRBC);
  kcg_copy_RadioManagement_T_API_(
    &outC->fromEVC_RadioManagement,
    &outC->Context_1.API_RTM_management);
  kcg_copy_EVC_to_DMI_Message_int(&outC->API_toDMI, &outC->Context_1.API_toDMI);
  outC->EVC_ready = outC->Context_1.EVC_ready;
  /* 1 */ if (inC->GUI_openDesk) {
    tmp1 = desk_A_is_open_TIU_Types_Pkg;
  }
  else {
    tmp1 = both_desks_are_closed_TIU_Types;
  }
  switch (inC->GUIdirectionIn) {
    case 1 :
      tmp = direction_controller_in_neutral;
      break;
    case 2 :
      tmp = direction_controller_in_forward;
      break;
    case 3 :
      tmp = direction_controller_in_backwar;
      break;
    
    default :
      tmp = direction_controller_in_neutral;
  }
  /* 2 */
  TIU_Toolbox_TrainModules(
    &tmp2,
    tmp1,
    tmp,
    (kcg_bool) (inC->GUI_traction > 0.0),
    190,
    &outC->_1_Context_2);
  kcg_copy_TIU_Input_msg_API_TIU_(
    &outC->fromTIU,
    &outC->_1_Context_2.output_To_EVC);
  outC->GUI_emergencyBrake = outC->_1_Context_2.serviceBrakeActivated_To_Enviro;
  outC->GUI_serviceBrake = outC->_1_Context_2.emergencyBrakeActivated_To_Envi;
  outC->GUI_TractionCutOff = outC->_1_Context_2.tractionCutOff_To_Environment;
  kcg_copy_TIU_Output_msg_API_TIU(&outC->rem_toTIU, &outC->Context_1.API_toTIU);
  kcg_copy_mobileHWStatus_Type_Mo(
    &outC->rem_radioHW_Status,
    &outC->Context_2.mobileHWStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Trainside_GreenDemonstrator_Tra.c
** Generation date: 2015-11-10T23:01:13
*************************************************************$ */

