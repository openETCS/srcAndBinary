/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNoPower_Conditions.h"

/* Conditions::ToNoPower */
kcg_bool ToNoPower_Conditions(
  /* Conditions::ToNoPower::OnBoard_Powered */ kcg_bool OnBoard_Powered)
{
  /* Conditions::ToNoPower::Condition29 */ kcg_bool Condition29;
  
  Condition29 = !OnBoard_Powered;
  return Condition29;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToNoPower_Conditions.c
** Generation date: 2015-12-07T14:47:41
*************************************************************$ */

