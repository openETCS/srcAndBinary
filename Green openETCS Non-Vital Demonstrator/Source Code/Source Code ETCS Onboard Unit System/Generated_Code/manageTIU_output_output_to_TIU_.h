/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _manageTIU_output_output_to_TIU
#define _manageTIU_output_output_to_TIU

#include "kcg_types.h"
#include "getTIUStatusFromCommand_output_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* output_to_TIU_API_Pkg::manageTIU_output */
extern void manageTIU_output_output_to_TIU_(
  /* output_to_TIU_API_Pkg::manageTIU_output::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pk *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_brake_inhibition */ Brake_inhibition_command_T_TIU_ *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_train_commands */ Type_I_train_commands_T_TIU_Typ *in_train_commands,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_traction_system */ Change_traction_system_T_TIU_Ty *in_change_traction_system,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_passenger_door_control_info */ Passenger_door_control_info_T_T *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::manageTIU_output::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consu *in_change_of_allowed_current_co,
  /* output_to_TIU_API_Pkg::manageTIU_output::outTIU_to_API */ TIU_Output_msg_API_TIU_Pkg *outTIU_to_API,
  /* output_to_TIU_API_Pkg::manageTIU_output::outCommandStatusforEVC */ TIU_commandStatus_T_TIU_Types_P *outCommandStatusforEVC);

#endif /* _manageTIU_output_output_to_TIU */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_output_output_to_TIU_.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

