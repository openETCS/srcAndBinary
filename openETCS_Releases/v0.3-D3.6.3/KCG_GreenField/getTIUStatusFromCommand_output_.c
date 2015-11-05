/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromCommand_output_.h"

/* output_to_TIU_API_Pkg::getTIUStatusFromCommand */
void getTIUStatusFromCommand_output_(
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pk *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::in_brake_command */ Brake_command_T_TIU_Types_Pkg *in_brake_command,
  /* output_to_TIU_API_Pkg::getTIUStatusFromCommand::outStatus */ TIU_commandStatus_T_TIU_Types_P *outStatus)
{
  (*outStatus).valid = (*in_brake_command).valid | (*in_IsolationStatus).valid;
  (*outStatus).emergencyBrakeActive = (*in_brake_command).valid &
    ((*in_brake_command).m_emergencybrake_cm == apply_brake_TIU_Types_Pkg);
  (*outStatus).isolationStatus = (*in_IsolationStatus).valid &
    ((*in_IsolationStatus).isolation_status == on_board_equipment_is_isolated_);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getTIUStatusFromCommand_output_.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

