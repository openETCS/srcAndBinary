/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_output_output_to_TIU_.h"

/* output_to_TIU_API_Pkg::manageTIU_output */
void manageTIU_output_output_to_TIU_(
  /* output_to_TIU_API_Pkg::manageTIU_output::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pk *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_inhibition */ Brake_inhibition_command_T_TIU_ *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_train_commands */ Type_I_train_commands_T_TIU_Typ *in_train_commands,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_traction_system */ Change_traction_system_T_TIU_Ty *in_change_traction_system,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_passenger_door_control_info */ Passenger_door_control_info_T_T *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consu *in_change_of_allowed_current_co,
  /* output_to_TIU_API_Pkg::manageTIU_output::outTIU_to_API */ TIU_Output_msg_API_TIU_Pkg *outTIU_to_API,
  /* output_to_TIU_API_Pkg::manageTIU_output::outCommandStatusforEVC */ TIU_commandStatus_T_TIU_Types_P *outCommandStatusforEVC)
{
  (*outTIU_to_API).valid = (*in_IsolationStatus).valid |
    (*in_brake_command).valid | (*in_brake_inhibition).valid |
    (*in_train_commands).valid | (*in_change_traction_system).valid |
    (*in_passenger_door_control_info).valid |
    (*in_change_of_allowed_current_co).valid;
  kcg_copy_Isolation_Status_T_TIU(
    &(*outTIU_to_API).info.isolation_status,
    in_IsolationStatus);
  kcg_copy_Brake_command_T_TIU_Ty(
    &(*outTIU_to_API).info.brake_command,
    in_brake_command);
  kcg_copy_Brake_inhibition_comma(
    &(*outTIU_to_API).info.brake_inhibition,
    in_brake_inhibition);
  kcg_copy_Type_I_train_commands_(
    &(*outTIU_to_API).info.type_I_train_commands,
    in_train_commands);
  kcg_copy_Change_traction_system(
    &(*outTIU_to_API).info.change_traction_system,
    in_change_traction_system);
  kcg_copy_Passenger_door_control(
    &(*outTIU_to_API).info.passenger_door_control_info,
    in_passenger_door_control_info);
  kcg_copy_Change_of_allowed_curr(
    &(*outTIU_to_API).info.change_of_allowed_current_consu,
    in_change_of_allowed_current_co);
  /* 1 */
  getTIUStatusFromCommand_output_(
    in_IsolationStatus,
    in_brake_command,
    outCommandStatusforEVC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_output_output_to_TIU_.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

