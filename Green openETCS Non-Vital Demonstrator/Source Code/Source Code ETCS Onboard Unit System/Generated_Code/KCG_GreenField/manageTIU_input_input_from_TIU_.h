/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _manageTIU_input_input_from_TIU
#define _manageTIU_input_input_from_TIU

#include "kcg_types.h"
#include "getTIUStatusFromData_input_from.h"
#include "mergeTIU_Info_input_from_TIU_AP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* input_from_TIU_API_Pkg::manageTIU_input::outTIUStatus */ outTIUStatus;
  Message_Train_Interface_to_EVC_ /* input_from_TIU_API_Pkg::manageTIU_input::outTIUCurrentInfo */ outTIUCurrentInfo;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageTIU_input_input_from;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::manageTIU_input */
extern void manageTIU_input_input_from_TIU_(
  /* input_from_TIU_API_Pkg::manageTIU_input::inTIUfromAPI */ TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* input_from_TIU_API_Pkg::manageTIU_input::evc_trainData */ trainData_T_TIU_Types_Pkg *evc_trainData,
  outC_manageTIU_input_input_from *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageTIU_input_reset_input_fro(
  outC_manageTIU_input_input_from *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageTIU_input_init_input_from(
  outC_manageTIU_input_input_from *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _manageTIU_input_input_from_TIU */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_input_input_from_TIU_.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

