/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _ToFullSupervision_Conditions_H
#define _ToFullSupervision_Conditions_H

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToFullSupervision::Condition25 */ Condition25;
  kcg_bool /* Conditions::ToFullSupervision::Condition31 */ Condition31;
  kcg_bool /* Conditions::ToFullSupervision::Condition32 */ Condition32;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Conditions::ToFullSupervision::Current_Level */ rem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToFullSupervision_Conditio;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToFullSupervision */
extern void ToFullSupervision_Conditions(
  /* Conditions::ToFullSupervision::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToFullSupervision::Trip_Order_Given_By_Balise */ kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToFullSupervision::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Conditions::ToFullSupervision::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  outC_ToFullSupervision_Conditio *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToFullSupervision_reset_Conditi(
  outC_ToFullSupervision_Conditio *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToFullSupervision_init_Conditio(
  outC_ToFullSupervision_Conditio *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToFullSupervision_Conditions_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToFullSupervision_Conditions.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

