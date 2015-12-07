/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_output_output_to_TIU_.h"

#ifndef KCG_USER_DEFINED_INIT
void manageTIU_output_init_output_to(outC_manageTIU_output_output_to *outC)
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
  /* 1 */ handleBrakeCommand_init_output_(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTIU_output_reset_output_t(outC_manageTIU_output_output_to *outC)
{
  /* 1 */ handleBrakeCommand_reset_output(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::manageTIU_output */
void manageTIU_output_output_to_TIU_(
  /* output_to_TIU_API_Pkg::manageTIU_output::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pk *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_inhibition */ Brake_inhibition_command_T_TIU_ *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_train_commands */ Type_I_train_commands_T_TIU_Typ *in_train_commands,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_traction_system */ Change_traction_system_T_TIU_Ty *in_change_traction_system,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_passenger_door_control_info */ Passenger_door_control_info_T_T *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consu *in_change_of_allowed_current_co,
  outC_manageTIU_output_output_to *outC)
{
  /* 1 */ handleBrakeCommand_output_to_TI(in_brake_command, &outC->Context_1);
  outC->outTIU_to_API.valid = (*in_IsolationStatus).valid |
    outC->Context_1.out_brake_command.valid | (*in_brake_inhibition).valid |
    (*in_train_commands).valid | (*in_change_traction_system).valid |
    (*in_passenger_door_control_info).valid |
    (*in_change_of_allowed_current_co).valid;
  kcg_copy_Isolation_Status_T_TIU(
    &outC->outTIU_to_API.info.isolation_status,
    in_IsolationStatus);
  kcg_copy_Brake_command_T_TIU_Ty(
    &outC->outTIU_to_API.info.brake_command,
    &outC->Context_1.out_brake_command);
  kcg_copy_Brake_inhibition_comma(
    &outC->outTIU_to_API.info.brake_inhibition,
    in_brake_inhibition);
  kcg_copy_Type_I_train_commands_(
    &outC->outTIU_to_API.info.type_I_train_commands,
    in_train_commands);
  kcg_copy_Change_traction_system(
    &outC->outTIU_to_API.info.change_traction_system,
    in_change_traction_system);
  kcg_copy_Passenger_door_control(
    &outC->outTIU_to_API.info.passenger_door_control_info,
    in_passenger_door_control_info);
  kcg_copy_Change_of_allowed_curr(
    &outC->outTIU_to_API.info.change_of_allowed_current_consu,
    in_change_of_allowed_current_co);
  /* 1 */
  getTIUStatusFromCommand_output_(
    in_IsolationStatus,
    in_brake_command,
    &outC->outCommandStatusforEVC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_output_output_to_TIU_.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

