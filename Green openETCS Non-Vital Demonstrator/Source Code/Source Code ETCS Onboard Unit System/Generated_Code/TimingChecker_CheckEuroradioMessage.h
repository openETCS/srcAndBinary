/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _TimingChecker_CheckEuroradioMessage_H_
#define _TimingChecker_CheckEuroradioMessage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
} outC_TimingChecker_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::TimingChecker */
extern void TimingChecker_CheckEuroradioMessage(
  /* CheckEuroradioMessage::TimingChecker::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroradioMessage::TimingChecker::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::TimingChecker::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::TimingChecker::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* CheckEuroradioMessage::TimingChecker::messageTimestamp */T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker_CheckEuroradioMessage *outC);

extern void TimingChecker_reset_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC);

#endif /* _TimingChecker_CheckEuroradioMessage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TimingChecker_CheckEuroradioMessage.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

