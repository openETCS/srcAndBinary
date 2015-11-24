/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToUnfitted_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToUnfitted_init_Conditions(outC_ToUnfitted_Conditions *outC)
{
  outC->Condition21 = kcg_true;
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToUnfitted_reset_Conditions(outC_ToUnfitted_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToUnfitted */
void ToUnfitted_Conditions(
  /* Conditions::ToUnfitted::Current_Level */ M_LEVEL Current_Level,
  outC_ToUnfitted_Conditions *outC)
{
  /* Conditions::ToUnfitted */ M_LEVEL tmp;
  
  /* last_init_ck_Current_Level */ if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->rem_Current_Level;
  }
  outC->Condition21 = (Current_Level == M_LEVEL_Level_0) & (Current_Level !=
      tmp);
  outC->rem_Current_Level = Current_Level;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToUnfitted_Conditions.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

