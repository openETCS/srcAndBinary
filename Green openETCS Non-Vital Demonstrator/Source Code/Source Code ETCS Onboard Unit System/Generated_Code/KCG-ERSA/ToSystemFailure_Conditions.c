/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemFailure_Conditions.h"

/* Conditions::ToSystemFailure */
kcg_bool ToSystemFailure_Conditions(
  /* Conditions::ToSystemFailure::Safety_Failure_Occured */kcg_bool Safety_Failure_Occured)
{
  /* Conditions::ToSystemFailure::Condition13 */
  static kcg_bool Condition13;
  
  Condition13 = Safety_Failure_Occured;
  return Condition13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToSystemFailure_Conditions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */
