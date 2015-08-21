/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToIsolate_Conditions.h"

/* Conditions::ToIsolate */
kcg_bool ToIsolate_Conditions(
  /* Conditions::ToIsolate::ETCS_Isolation_Status */kcg_bool ETCS_Isolation_Status)
{
  /* Conditions::ToIsolate::Condition1 */
  static kcg_bool Condition1;
  
  Condition1 = ETCS_Isolation_Status;
  return Condition1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToIsolate_Conditions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

