/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemFailure_Conditions.h"

/* Conditions::ToSystemFailure */
kcg_bool ToSystemFailure_Conditions(
  /* Conditions::ToSystemFailure::Safety_Failure_Occured */ kcg_bool Safety_Failure_Occured)
{
  /* Conditions::ToSystemFailure::Condition13 */ kcg_bool Condition13;
  
  Condition13 = Safety_Failure_Occured;
  return Condition13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToSystemFailure_Conditions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

