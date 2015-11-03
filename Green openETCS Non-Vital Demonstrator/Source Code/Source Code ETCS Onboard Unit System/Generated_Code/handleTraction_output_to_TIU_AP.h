/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _handleTraction_output_to_TIU_A
#define _handleTraction_output_to_TIU_A

#include "kcg_types.h"
#include "mapModeToTractionCutOff_output_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Type_I_train_commands_T_TIU_Typ /* output_to_TIU_API_Pkg::handleTraction::outTrainCommands */ outTrainCommands;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_traction_cutoff_command_T_TIU /* output_to_TIU_API_Pkg::handleTraction::tractionCutOffStatus */ tractionCutOffStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_handleTraction_output_to_T;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::handleTraction */
extern void handleTraction_output_to_TIU_AP(
  /* output_to_TIU_API_Pkg::handleTraction::in_train_commands */ Type_I_train_commands_T_TIU_Typ *in_train_commands,
  /* output_to_TIU_API_Pkg::handleTraction::inModeLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeLevel,
  outC_handleTraction_output_to_T *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handleTraction_reset_output_to_(
  outC_handleTraction_output_to_T *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handleTraction_init_output_to_T(
  outC_handleTraction_output_to_T *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _handleTraction_output_to_TIU_A */
/* $**************** KCG Version 6.4 (build i21) ****************
** handleTraction_output_to_TIU_AP.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

