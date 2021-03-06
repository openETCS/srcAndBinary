/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_OutputIntegration_output_to.h"

#ifndef KCG_USER_DEFINED_INIT
void TIU_OutputIntegration_init_outp(outC_TIU_OutputIntegration_outp *outC)
{
  outC->outCommandStatusforEVC.valid = kcg_true;
  outC->outCommandStatusforEVC.emergencyBrakeActive = kcg_true;
  outC->outCommandStatusforEVC.isolationStatus = kcg_true;
  outC->outTIU_to_API.valid = kcg_true;
  outC->outTIU_to_API.info.isolation_status.valid = kcg_true;
  outC->outTIU_to_API.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_;
  outC->outTIU_to_API.info.brake_command.valid = kcg_true;
  outC->outTIU_to_API.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_define;
  outC->outTIU_to_API.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_define;
  outC->outTIU_to_API.info.brake_inhibition.valid = kcg_true;
  outC->outTIU_to_API.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_T;
  outC->outTIU_to_API.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_n;
  outC->outTIU_to_API.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_T;
  outC->outTIU_to_API.info.type_I_train_commands.valid = kcg_true;
  outC->outTIU_to_API.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_;
  outC->outTIU_to_API.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_define;
  outC->outTIU_to_API.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Type;
  outC->outTIU_to_API.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_def;
  outC->outTIU_to_API.info.change_traction_system.valid = kcg_true;
  outC->outTIU_to_API.info.change_traction_system.d_test_traction.now = 0;
  outC->outTIU_to_API.info.change_traction_system.d_test_traction.distance = 0;
  outC->outTIU_to_API.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_tracti;
  outC->outTIU_to_API.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->outTIU_to_API.info.passenger_door_control_info.valid = kcg_true;
  outC->outTIU_to_API.info.passenger_door_control_info.door_control_info = 0;
  outC->outTIU_to_API.info.change_of_allowed_current_consu.valid = kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consu.d_test_current.now =
    0;
  outC->outTIU_to_API.info.change_of_allowed_current_consu.d_test_current.distance =
    0;
  outC->outTIU_to_API.info.change_of_allowed_current_consu.m_current.no_restriction =
    kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consu.m_current.restriction =
    0;
  /* 1 */ manageTIU_output_init_output_to(&outC->_1_Context_1);
  /* 1 */ handleTraction_init_output_to_T(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TIU_OutputIntegration_reset_out(outC_TIU_OutputIntegration_outp *outC)
{
  /* 1 */ manageTIU_output_reset_output_t(&outC->_1_Context_1);
  /* 1 */ handleTraction_reset_output_to_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::TIU_OutputIntegration */
void TIU_OutputIntegration_output_to(
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pk *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::SpeedSup_brakeCommand */ Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_brake_inhibition */ Brake_inhibition_command_T_TIU_ *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_train_commands */ Type_I_train_commands_T_TIU_Typ *in_train_commands,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_traction_system */ Change_traction_system_T_TIU_Ty *in_change_traction_system,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_passenger_door_control_info */ Passenger_door_control_info_T_T *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consu *in_change_of_allowed_current_co,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeAndLevel,
  outC_TIU_OutputIntegration_outp *outC)
{
  /* 1 */
  handleTraction_output_to_TIU_AP(
    in_train_commands,
    inModeAndLevel,
    &outC->Context_1);
  /* 1 */
  manageTIU_output_output_to_TIU_(
    in_IsolationStatus,
    SpeedSup_brakeCommand,
    in_brake_inhibition,
    &outC->Context_1.outTrainCommands,
    in_change_traction_system,
    in_passenger_door_control_info,
    in_change_of_allowed_current_co,
    &outC->_1_Context_1);
  kcg_copy_TIU_Output_msg_API_TIU(
    &outC->outTIU_to_API,
    &outC->_1_Context_1.outTIU_to_API);
  kcg_copy_TIU_commandStatus_T_TI(
    &outC->outCommandStatusforEVC,
    &outC->_1_Context_1.outCommandStatusforEVC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TIU_OutputIntegration_output_to.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

