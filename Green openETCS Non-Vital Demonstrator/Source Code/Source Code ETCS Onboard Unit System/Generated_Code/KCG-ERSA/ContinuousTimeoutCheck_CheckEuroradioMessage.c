/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ContinuousTimeoutCheck */
kcg_bool ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::activateCheck */ kcg_bool activateCheck,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus)
{
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::doCheck */ kcg_bool doCheck;
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContactError */ kcg_bool tNvContactError;
  
  doCheck = ((*radioStatus).session.phase ==
      sp_maintaining_RCM_Session_Types_Pkg) & activateCheck;
  /* ck_doCheck */ if (doCheck) {
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
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

