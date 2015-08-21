/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"

void TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
{
  /* 1 */ handleTraction_reset_output_to_TIU_API_Pkg(&outC->Context_1);
}

/* output_to_TIU_API_Pkg::TIU_OutputIntegration */
void TIU_OutputIntegration_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_IsolationStatus */Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::SpeedSup_brakeCommand */Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_brake_inhibition */Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_train_commands */Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_traction_system */Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_passenger_door_control_info */Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_of_allowed_current_consumption */Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
{
  /* 1 */
  handleTraction_output_to_TIU_API_Pkg(
    in_train_commands,
    inModeAndLevel,
    &outC->Context_1);
  /* 1 */
  manageTIU_output_output_to_TIU_API_Pkg(
    in_IsolationStatus,
    SpeedSup_brakeCommand,
    in_brake_inhibition,
    &outC->Context_1.outTrainCommands,
    in_change_traction_system,
    in_passenger_door_control_info,
    in_change_of_allowed_current_consumption,
    &outC->outTIU_to_API,
    &outC->outCommandStatusforEVC);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TIU_OutputIntegration_output_to_TIU_API_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

