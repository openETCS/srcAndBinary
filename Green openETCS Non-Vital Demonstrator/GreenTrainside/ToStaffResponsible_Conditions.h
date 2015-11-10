/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _ToStaffResponsible_Conditions_
#define _ToStaffResponsible_Conditions_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToStaffResponsible::Condition44 */ Condition44;
  kcg_bool /* Conditions::ToStaffResponsible::Condition45 */ Condition45;
  kcg_bool /* Conditions::ToStaffResponsible::Condition37 */ Condition37;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Conditions::ToStaffResponsible::Current_Level */ rem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToStaffResponsible_Conditi;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToStaffResponsible */
extern void ToStaffResponsible_Conditions(
  /* Conditions::ToStaffResponsible::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToStaffResponsible::Driver_Req_Override */ kcg_bool Driver_Req_Override,
  /* Conditions::ToStaffResponsible::Train_Speed_Under_Override_Limit */ kcg_bool Train_Speed_Under_Override_Limi,
  /* Conditions::ToStaffResponsible::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* Conditions::ToStaffResponsible::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  outC_ToStaffResponsible_Conditi *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToStaffResponsible_reset_Condit(
  outC_ToStaffResponsible_Conditi *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToStaffResponsible_init_Conditi(
  outC_ToStaffResponsible_Conditi *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToStaffResponsible_Conditions_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToStaffResponsible_Conditions.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

