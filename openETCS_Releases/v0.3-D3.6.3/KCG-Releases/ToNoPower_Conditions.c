/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNoPower_Conditions.h"

/* Conditions::ToNoPower */
kcg_bool ToNoPower_Conditions(
  /* Conditions::ToNoPower::OnBoard_Powered */ kcg_bool OnBoard_Powered)
{
  /* Conditions::ToNoPower::Condition29 */
  static kcg_bool Condition29;
  
  Condition29 = !OnBoard_Powered;
  return Condition29;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToNoPower_Conditions.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

