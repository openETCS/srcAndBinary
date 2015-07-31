/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _CheckEuroRadioMessage_H_
#define _CheckEuroRadioMessage_H_

#include "kcg_types.h"
#include "ConvertTrackSideMessageToRadioMessage.h"
#include "CheckAllowedPacketsRadio.h"
#include "CheckMandatoryVariablesAndMA.h"
#include "BuildOutput.h"
#include "TimingChecker.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* CheckEuroRadioMessage::checkedMessage */ checkedMessage;
  kcg_bool /* CheckEuroRadioMessage::radioSequenceError */ radioSequenceError;
  kcg_bool /* CheckEuroRadioMessage::tNvContactError */ tNvContactError;
  kcg_bool /* CheckEuroRadioMessage::otherTimingError */ otherTimingError;
  kcg_bool /* CheckEuroRadioMessage::radioMessageConsistencyError */ radioMessageConsistencyError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TimingChecker /* 6 */ Context_6;
  /* ----------------- no clocks of observable data ------------------ */
} outC_CheckEuroRadioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroRadioMessage */
extern void CheckEuroRadioMessage(
  /* CheckEuroRadioMessage::rtmMessage */TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroRadioMessage::tNvContact */T_NVCONTACT tNvContact,
  /* CheckEuroRadioMessage::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroRadioMessage::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* CheckEuroRadioMessage::activateCheck */kcg_bool activateCheck,
  outC_CheckEuroRadioMessage *outC);

extern void CheckEuroRadioMessage_reset(outC_CheckEuroRadioMessage *outC);

#endif /* _CheckEuroRadioMessage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckEuroRadioMessage.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

