/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_Toolbox_TrainModules.h"

#ifndef KCG_USER_DEFINED_INIT
void TIU_init_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC)
{
  static kcg_int i;
  
  outC->serviceBrakeActivated_To_Enviro = kcg_true;
  outC->emergencyBrakeActivated_To_Envi = kcg_true;
  outC->tractionCutOff_To_Environment = kcg_true;
  outC->powerOn = kcg_true;
  outC->init = kcg_true;
  outC->cutoffCommand = traction_cutoff_command_not_def;
  outC->emergencyBrakeCommandTmp = brake_signal_command_not_define;
  outC->serviceBrakeCommandTmp = brake_signal_command_not_define;
  outC->output_To_EVC.valid = kcg_true;
  outC->output_To_EVC.info.train_status.valid = kcg_true;
  outC->output_To_EVC.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_;
  outC->output_To_EVC.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_;
  outC->output_To_EVC.info.train_status.m_cab_st =
    cab_signal_status_not_defined_T;
  outC->output_To_EVC.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral;
  outC->output_To_EVC.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_;
  outC->output_To_EVC.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.valid = kcg_true;
  outC->output_To_EVC.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->output_To_EVC.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->output_To_EVC.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->output_To_EVC.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->output_To_EVC.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Ty;
  outC->output_To_EVC.info.brake_pressure.valid = kcg_true;
  outC->output_To_EVC.info.brake_pressure.pressure = 0;
  outC->output_To_EVC.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_data_info.valid = kcg_true;
  outC->output_To_EVC.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->output_To_EVC.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_;
  outC->output_To_EVC.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->output_To_EVC.info.train_data_info.trainLength = 0;
  outC->output_To_EVC.info.train_data_info.brakePerctage = 0;
  outC->output_To_EVC.info.train_data_info.maxTrainSpeed = 0;
  outC->output_To_EVC.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_n;
  outC->output_To_EVC.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->output_To_EVC.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  outC->output_To_EVC.info.train_data_info.axleNumber = 0;
  outC->output_To_EVC.info.train_data_info.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->output_To_EVC.info.train_data_info.nationSystems[i] = 0;
  }
  outC->output_To_EVC.info.train_data_info.numberTractionSystems = 0;
  for (i = 0; i < 4; i++) {
    outC->output_To_EVC.info.train_data_info.tractionSystem[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->output_To_EVC.info.train_data_info.tractionSystem[i].nid_ctraction =
      0;
  }
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.valid = kcg_true;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.d_test_trackcond.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.d_test_trackcond.distance =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.l_test_trackcond.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.l_test_trackcond.distance =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.nothing_to_resume_profile_follo.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.empty_profile_initial_state_to_.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibiti.empty_profile_initial_state_to_.distance =
    0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TIU_reset_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::TrainModules::TIU */
void TIU_Toolbox_TrainModules(
  /* Toolbox::TrainModules::TIU::Input_TIU_From_API */ TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* Toolbox::TrainModules::TIU::cabStatus */ M_cab_signal_status_T_TIU_Types cabStatus,
  /* Toolbox::TrainModules::TIU::directionController */ M_directioncontroller_signal_st directionController,
  /* Toolbox::TrainModules::TIU::tractionSwitchedOn */ kcg_bool tractionSwitchedOn,
  /* Toolbox::TrainModules::TIU::brakeAccelerationPercentage */ kcg_int brakeAccelerationPercentage,
  outC_TIU_Toolbox_TrainModules *outC)
{
  /* Toolbox::TrainModules::TIU::_L57 */
  static kcg_bool _L57;
  
  outC->output_To_EVC.valid = kcg_true;
  kcg_copy_Brake_status_T_TIU_Typ(
    &outC->output_To_EVC.info.brake_status,
    (Brake_status_T_TIU_Types_Pkg *) &cEmptyBrakeStatus_Toolbox);
  outC->output_To_EVC.info.brake_pressure.valid = kcg_true;
  outC->output_To_EVC.info.brake_pressure.pressure =
    brakeAccelerationPercentage * 6000;
  outC->output_To_EVC.info.train_data_entry_type = cEmtpyDataEntryType_Toolbox;
  kcg_copy_trainData_T_TIU_Types_(
    &outC->output_To_EVC.info.train_data_info,
    (trainData_T_TIU_Types_Pkg *) &cICE3TrainData_Toolbox);
  kcg_copy_Type_I_train_and_brake(
    &outC->output_To_EVC.info.type_I_train_and_brake_inhibiti,
    (Type_I_train_and_brake_inhibiti *) &cEmptyType_I_train_and_brake_in);
  outC->output_To_EVC.info.train_status.m_sleeping_st =
    signal_not_active_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_passiveshunting_st =
    passive_shunting_not_permitted_;
  outC->output_To_EVC.info.train_status.m_nonleading_st =
    non_leading_not_permitted_TIU_T;
  outC->output_To_EVC.info.train_status.m_cab_st = cabStatus;
  outC->output_To_EVC.info.train_status.m_directioncontroller_st =
    directionController;
  outC->output_To_EVC.info.train_status.m_trainintegrity_st =
    train_is_integer_TIU_Types_Pkg;
  /* last_init_ck_powerOn */ if (outC->init) {
    _L57 = kcg_false;
  }
  else {
    _L57 = outC->powerOn;
  }
  /* 5 */ if (!_L57 & !((cabStatus == both_desks_are_closed_TIU_Types) |
      (cabStatus == cab_signal_status_not_defined_T))) {
    outC->powerOn = kcg_true;
  }
  else {
    outC->powerOn = _L57;
  }
  outC->output_To_EVC.info.train_status.valid = outC->powerOn;
  /* 3 */ if (tractionSwitchedOn) {
    outC->output_To_EVC.info.train_status.m_traction_st =
      traction_on_TIU_Types_Pkg;
  }
  else {
    outC->output_To_EVC.info.train_status.m_traction_st =
      traction_off_TIU_Types_Pkg;
  }
  _L57 = (*Input_TIU_From_API).valid &
    (*Input_TIU_From_API).info.brake_command.valid;
  /* 2 */ if (_L57) {
    outC->serviceBrakeCommandTmp =
      (*Input_TIU_From_API).info.brake_command.m_servicebrake_cm;
    outC->emergencyBrakeCommandTmp =
      (*Input_TIU_From_API).info.brake_command.m_emergencybrake_cm;
  }
  else /* last_init_ck_emergencyBrakeCommandTmp */ if (outC->init) {
    outC->serviceBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbo;
    outC->emergencyBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbo;
  }
  outC->serviceBrakeActivated_To_Enviro = outC->serviceBrakeCommandTmp ==
    apply_brake_TIU_Types_Pkg;
  outC->emergencyBrakeActivated_To_Envi = outC->emergencyBrakeCommandTmp ==
    apply_brake_TIU_Types_Pkg;
  /* 4 */ if ((*Input_TIU_From_API).valid &
    (*Input_TIU_From_API).info.type_I_train_commands.valid) {
    outC->cutoffCommand =
      (*Input_TIU_From_API).info.type_I_train_commands.m_traction_cutoff_cm;
  }
  else /* last_init_ck_cutoffCommand */ if (outC->init) {
    outC->cutoffCommand = apply_traction_cutoff_TIU_Types;
  }
  outC->init = kcg_false;
  outC->tractionCutOff_To_Environment = outC->cutoffCommand ==
    apply_traction_cutoff_TIU_Types;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TIU_Toolbox_TrainModules.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

