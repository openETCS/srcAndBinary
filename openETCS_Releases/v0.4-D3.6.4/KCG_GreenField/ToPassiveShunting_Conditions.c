/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToPassiveShunting_Conditions.h"

/* Conditions::ToPassiveShunting */
kcg_bool ToPassiveShunting_Conditions(
  /* Conditions::ToPassiveShunting::Train_Permitted_PS */ kcg_bool Train_Permitted_PS,
  /* Conditions::ToPassiveShunting::Continue_Shunting_Function_Active */ kcg_bool Continue_Shunting_Function_Acti,
  /* Conditions::ToPassiveShunting::Desks_Closed */ kcg_bool Desks_Closed)
{
  /* Conditions::ToPassiveShunting::Condition26 */
  static kcg_bool Condition26;
  
  Condition26 = Desks_Closed & Train_Permitted_PS &
    Continue_Shunting_Function_Acti;
  return Condition26;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToPassiveShunting_Conditions.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

