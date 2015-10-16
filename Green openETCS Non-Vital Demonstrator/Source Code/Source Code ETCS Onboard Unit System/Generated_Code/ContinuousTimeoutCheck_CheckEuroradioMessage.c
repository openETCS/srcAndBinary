/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ContinuousTimeoutCheck */
kcg_bool ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
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
** ContinuousTimeoutCheck_CheckEuroradioMessage.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

