/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck_CheckEur.h"

/* CheckEuroradioMessage::ContinuousTimeoutCheck */
kcg_bool ContinuousTimeoutCheck_CheckEur(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_ lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::activateCheck */ kcg_bool activateCheck)
{
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContactError */
  static kcg_bool tNvContactError;
  
  /* ck_activateCheck */ if (activateCheck) {
    tNvContactError = systemTime - lastRelevantEventTimestamp > tNvContact *
      1000;
  }
  else {
    tNvContactError = kcg_false;
  }
  return tNvContactError;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ContinuousTimeoutCheck_CheckEur.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

