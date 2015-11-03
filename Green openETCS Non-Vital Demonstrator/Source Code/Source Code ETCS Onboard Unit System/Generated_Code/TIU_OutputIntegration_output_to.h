/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _TIU_OutputIntegration_output_t
#define _TIU_OutputIntegration_output_t

#include "kcg_types.h"
#include "manageTIU_output_output_to_TIU_.h"
#include "handleTraction_output_to_TIU_AP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_Output_msg_API_TIU_Pkg /* output_to_TIU_API_Pkg::TIU_OutputIntegration::outTIU_to_API */ outTIU_to_API;
  TIU_commandStatus_T_TIU_Types_P /* output_to_TIU_API_Pkg::TIU_OutputIntegration::outCommandStatusforEVC */ outCommandStatusforEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_handleTraction_output_to_T /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TIU_OutputIntegration_outp;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::TIU_OutputIntegration */
extern void TIU_OutputIntegration_output_to(
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_IsolationStatus */ Isolation_Status_T_TIU_Types_Pk *in_IsolationStatus,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::SpeedSup_brakeCommand */ Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_brake_inhibition */ Brake_inhibition_command_T_TIU_ *in_brake_inhibition,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_train_commands */ Type_I_train_commands_T_TIU_Typ *in_train_commands,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_traction_system */ Change_traction_system_T_TIU_Ty *in_change_traction_system,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_passenger_door_control_info */ Passenger_door_control_info_T_T *in_passenger_door_control_info,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::in_change_of_allowed_current_consumption */ Change_of_allowed_current_consu *in_change_of_allowed_current_co,
  /* output_to_TIU_API_Pkg::TIU_OutputIntegration::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeAndLevel,
  outC_TIU_OutputIntegration_outp *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TIU_OutputIntegration_reset_out(
  outC_TIU_OutputIntegration_outp *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TIU_OutputIntegration_init_outp(
  outC_TIU_OutputIntegration_outp *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TIU_OutputIntegration_output_t */
/* $**************** KCG Version 6.4 (build i21) ****************
** TIU_OutputIntegration_output_to.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

