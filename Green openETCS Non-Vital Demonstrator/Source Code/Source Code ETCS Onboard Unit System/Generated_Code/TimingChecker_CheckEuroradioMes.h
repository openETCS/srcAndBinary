/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _TimingChecker_CheckEuroradioMe
#define _TimingChecker_CheckEuroradioMe

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckEuroradioMessage::TimingChecker::tNvContactError */ tNvContactError;
  kcg_bool /* CheckEuroradioMessage::TimingChecker::sequenceError */ sequenceError;
  kcg_bool /* CheckEuroradioMessage::TimingChecker::otherTimingError */ otherTimingError;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */ lastKnownTTrain;
  kcg_bool /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */ ignoreTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TimingChecker_CheckEurorad;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::TimingChecker */
extern void TimingChecker_CheckEuroradioMes(
  /* CheckEuroradioMessage::TimingChecker::tNvContact */ T_internal_Type_Obu_BasicTypes_ tNvContact,
  /* CheckEuroradioMessage::TimingChecker::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_ lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::TimingChecker::rtmMessage */ ReceivedMessage_T_Common_Types_ *rtmMessage,
  /* CheckEuroradioMessage::TimingChecker::radioStatus */ morcStatus_T_RCM_Session_Types_ *radioStatus,
  /* CheckEuroradioMessage::TimingChecker::messageTimestamp */ T_internal_Type_Obu_BasicTypes_ messageTimestamp,
  outC_TimingChecker_CheckEurorad *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TimingChecker_reset_CheckEurora(
  outC_TimingChecker_CheckEurorad *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TimingChecker_init_CheckEurorad(
  outC_TimingChecker_CheckEurorad *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TimingChecker_CheckEuroradioMe */
/* $**************** KCG Version 6.4 (build i21) ****************
** TimingChecker_CheckEuroradioMes.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

