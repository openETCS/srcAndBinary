/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNoPower_Conditions.h"

/* Conditions::ToNoPower */
kcg_bool ToNoPower_Conditions(
  /* Conditions::ToNoPower::OnBoard_Powered */kcg_bool OnBoard_Powered)
{
  /* Conditions::ToNoPower::Condition29 */
  static kcg_bool Condition29;
  
  Condition29 = !OnBoard_Powered;
  return Condition29;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToNoPower_Conditions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

