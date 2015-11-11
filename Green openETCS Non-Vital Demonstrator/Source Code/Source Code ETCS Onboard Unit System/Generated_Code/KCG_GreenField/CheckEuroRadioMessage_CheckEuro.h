/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _CheckEuroRadioMessage_CheckEur
#define _CheckEuroRadioMessage_CheckEur

#include "kcg_types.h"
#include "ConvertTrackSideMessageToRadioM.h"
#include "CheckAllowedPacketsRadio_CheckE.h"
#include "CheckMandatoryVariablesAndMA_Ch.h"
#include "BuildOutput_CheckEuroradioMessa.h"
#include "TimingChecker_CheckEuroradioMes.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_ /* CheckEuroradioMessage::CheckEuroRadioMessage::checkedMessage */ checkedMessage;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::radioSequenceError */ radioSequenceError;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContactError */ tNvContactError;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::otherTimingError */ otherTimingError;
  kcg_bool /* CheckEuroradioMessage::CheckEuroRadioMessage::radioMessageConsistencyError */ radioMessageConsistencyError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TimingChecker_CheckEurorad /* 6 */ Context_6;
  /* ----------------- no clocks of observable data ------------------ */
} outC_CheckEuroRadioMessage_Chec;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::CheckEuroRadioMessage */
extern void CheckEuroRadioMessage_CheckEuro(
  /* CheckEuroradioMessage::CheckEuroRadioMessage::rtmMessage */ TrackSide_ForCheck_T_Common_Typ *rtmMessage,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_ lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioStatus */ morcStatus_T_RCM_Session_Types_ *radioStatus,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::activateCheck */ kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_Chec *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckEuroRadioMessage_reset_Che(
  outC_CheckEuroRadioMessage_Chec *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckEuroRadioMessage_init_Chec(
  outC_CheckEuroRadioMessage_Chec *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckEuroRadioMessage_CheckEur */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckEuroRadioMessage_CheckEuro.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

