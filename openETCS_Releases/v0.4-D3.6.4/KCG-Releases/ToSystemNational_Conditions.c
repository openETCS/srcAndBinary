/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemNational_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToSystemNational_init_Conditions(outC_ToSystemNational_Conditions *outC)
{
  outC->Condition56 = kcg_true;
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToSystemNational_reset_Conditions(outC_ToSystemNational_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToSystemNational */
void ToSystemNational_Conditions(
  /* Conditions::ToSystemNational::Current_Level */ M_LEVEL Current_Level,
  outC_ToSystemNational_Conditions *outC)
{
  /* Conditions::ToSystemNational */
  static M_LEVEL tmp;
  
  /* last_init_ck_Current_Level */ if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->rem_Current_Level;
  }
  outC->Condition56 = (Current_Level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC) & (Current_Level != tmp);
  outC->rem_Current_Level = Current_Level;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToSystemNational_Conditions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

