/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _ContinuousTimeoutCheck_CheckEu
#define _ContinuousTimeoutCheck_CheckEu

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckEuroradioMessage::ContinuousTimeoutCheck */
extern kcg_bool ContinuousTimeoutCheck_CheckEur(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_ lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::activateCheck */ kcg_bool activateCheck,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::radioStatus */ morcStatus_T_RCM_Session_Types_ *radioStatus);

#endif /* _ContinuousTimeoutCheck_CheckEu */
/* $**************** KCG Version 6.4 (build i21) ****************
** ContinuousTimeoutCheck_CheckEur.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

