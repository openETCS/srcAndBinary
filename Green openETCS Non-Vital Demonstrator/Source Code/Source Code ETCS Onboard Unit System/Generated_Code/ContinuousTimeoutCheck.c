/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck.h"

/* ContinuousTimeoutCheck */
kcg_bool ContinuousTimeoutCheck(
  /* ContinuousTimeoutCheck::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* ContinuousTimeoutCheck::tNvContact */T_NVCONTACT tNvContact,
  /* ContinuousTimeoutCheck::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* ContinuousTimeoutCheck::activateCheck */kcg_bool activateCheck)
{
  /* ContinuousTimeoutCheck::tNvContactError */
  static kcg_bool tNvContactError;
  
  if (activateCheck) {
    tNvContactError = systemTime - lastRelevantEventTimestamp > tNvContact *
      1000;
  }
  else {
    tNvContactError = kcg_false;
  }
  return tNvContactError;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ContinuousTimeoutCheck.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

