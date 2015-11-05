/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSleeping_Conditions.h"

/* Conditions::ToSleeping */
kcg_bool ToSleeping_Conditions(
  /* Conditions::ToSleeping::All_Desks_Closed */ kcg_bool All_Desks_Closed,
  /* Conditions::ToSleeping::Train_Standstill */ kcg_bool Train_Standstill,
  /* Conditions::ToSleeping::Train_Req_SL */ kcg_bool Train_Req_SL)
{
  /* Conditions::ToSleeping::Condition14 */
  static kcg_bool Condition14;
  
  Condition14 = Train_Req_SL & Train_Standstill & All_Desks_Closed;
  return Condition14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToSleeping_Conditions.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

