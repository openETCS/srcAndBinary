/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:10
*************************************************************$ */
#ifndef _sendBrakesToDMI_manage_DMI_Out
#define _sendBrakesToDMI_manage_DMI_Out

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icons_T_DMI_Messages_EVC_to /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */ dmi_iconRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ rem_brakeCommand;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendBrakesToDMI_manage_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendBrakesToDMI */
extern void sendBrakesToDMI_manage_DMI_Outp(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  outC_sendBrakesToDMI_manage_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendBrakesToDMI_reset_manage_DM(
  outC_sendBrakesToDMI_manage_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendBrakesToDMI_init_manage_DMI(
  outC_sendBrakesToDMI_manage_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _sendBrakesToDMI_manage_DMI_Out */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendBrakesToDMI_manage_DMI_Outp.h
** Generation date: 2015-11-03T14:28:10
*************************************************************$ */

