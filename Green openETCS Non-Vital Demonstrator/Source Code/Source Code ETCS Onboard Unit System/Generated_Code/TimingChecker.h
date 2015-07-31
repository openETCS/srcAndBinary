/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _TimingChecker_H_
#define _TimingChecker_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TimingChecker::tNvContactError */ tNvContactError;
  kcg_bool /* TimingChecker::sequenceError */ sequenceError;
  kcg_bool /* TimingChecker::otherTimingError */ otherTimingError;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* TimingChecker::lastKnownTTrain */ lastKnownTTrain;
  kcg_bool /* TimingChecker::ignoreTimestamp */ ignoreTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TimingChecker;

/* ===========  node initialization and cycle functions  =========== */
/* TimingChecker */
extern void TimingChecker(
  /* TimingChecker::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* TimingChecker::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* TimingChecker::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* TimingChecker::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* TimingChecker::messageTimestamp */T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker *outC);

extern void TimingChecker_reset(outC_TimingChecker *outC);

#endif /* _TimingChecker_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TimingChecker.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

