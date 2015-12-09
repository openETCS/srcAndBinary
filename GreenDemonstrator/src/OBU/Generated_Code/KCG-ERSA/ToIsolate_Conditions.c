/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToIsolate_Conditions.h"

/* Conditions::ToIsolate */
kcg_bool ToIsolate_Conditions(
  /* Conditions::ToIsolate::ETCS_Isolation_Status */ kcg_bool ETCS_Isolation_Status)
{
  /* Conditions::ToIsolate::Condition1 */ kcg_bool Condition1;
  
  Condition1 = ETCS_Isolation_Status;
  return Condition1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToIsolate_Conditions.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

