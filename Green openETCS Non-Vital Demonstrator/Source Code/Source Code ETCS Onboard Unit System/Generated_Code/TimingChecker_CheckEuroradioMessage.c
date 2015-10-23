/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimingChecker_CheckEuroradioMessage.h"

#ifndef KCG_USER_DEFINED_INIT
void TimingChecker_init_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  outC->tNvContactError = kcg_true;
  outC->sequenceError = kcg_true;
  outC->otherTimingError = kcg_true;
  outC->ignoreTimestamp = kcg_true;
  outC->init = kcg_true;
  outC->lastKnownTTrain = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TimingChecker_reset_CheckEuroradioMessage(
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CheckEuroradioMessage::TimingChecker */
void TimingChecker_CheckEuroradioMessage(
  /* CheckEuroradioMessage::TimingChecker::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroradioMessage::TimingChecker::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::TimingChecker::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::TimingChecker::connectionStatus */ sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* CheckEuroradioMessage::TimingChecker::messageTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg messageTimestamp,
  outC_TimingChecker_CheckEuroradioMessage *outC)
{
  /* CheckEuroradioMessage::TimingChecker */
  static T_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L24 */
  static kcg_bool _L24_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::else::connectingStatusConnecting */
  static kcg_bool _1_connectingStatusConnecting_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1::else::then::connectingStatusConnecting */
  static kcg_bool connectingStatusConnecting_IfBlock1;
  /* CheckEuroradioMessage::TimingChecker::ignoreTimestamp */
  static kcg_bool last_ignoreTimestamp;
  /* CheckEuroradioMessage::TimingChecker::lastKnownTTrain */
  static T_TRAIN last_lastKnownTTrain;
  /* CheckEuroradioMessage::TimingChecker::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckEuroradioMessage::TimingChecker::TimestampKnown */
  static kcg_bool TimestampKnown;
  
  TimestampKnown = (*rtmMessage).Radio_Common_Header.t_train !=
    cTTrainUnknown1_CheckEuroradioMessage;
  /* last_init_ck_ignoreTimestamp */ if (outC->init) {
    last_lastKnownTTrain = cTTrainUnknown1_CheckEuroradioMessage;
    outC->init = kcg_false;
    last_ignoreTimestamp = kcg_false;
  }
  else {
    last_lastKnownTTrain = outC->lastKnownTTrain;
    last_ignoreTimestamp = outC->ignoreTimestamp;
  }
  IfBlock1_clock = TimestampKnown & (last_lastKnownTTrain !=
      cTTrainUnknown1_CheckEuroradioMessage);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 7 */ if (tNvContact == 256000) {
      tmp = messageTimestamp;
    }
    else {
      tmp = tNvContact + lastRelevantEventTimestamp;
    }
    _L9_IfBlock1 = messageTimestamp <= tmp;
    /* 8 */ if (tNvContact > 256000) {
      outC->tNvContactError = kcg_true;
    }
    else {
      outC->tNvContactError = !_L9_IfBlock1;
    }
    outC->otherTimingError = kcg_false;
    /* 6 */ if (last_ignoreTimestamp) {
      _L24_IfBlock1 = kcg_true;
      outC->ignoreTimestamp = kcg_false;
    }
    else {
      _L24_IfBlock1 = (*rtmMessage).Radio_Common_Header.t_train >
        last_lastKnownTTrain;
      outC->ignoreTimestamp = last_ignoreTimestamp;
    }
    outC->sequenceError = !_L24_IfBlock1;
    /* 2 */ if (_L9_IfBlock1 & _L24_IfBlock1) {
      outC->lastKnownTTrain = (*rtmMessage).Radio_Common_Header.t_train;
    }
    else {
      outC->lastKnownTTrain = last_lastKnownTTrain;
    }
  }
  else {
    else_clock_IfBlock1 = TimestampKnown & (last_lastKnownTTrain ==
        cTTrainUnknown1_CheckEuroradioMessage);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      connectingStatusConnecting_IfBlock1 = connectionStatus ==
        cRadioSessionConnecting1_CheckEuroradioMessage;
      /* ck_connectingStatusConnecting */ if (connectingStatusConnecting_IfBlock1) {
        outC->otherTimingError = kcg_false;
        outC->sequenceError = kcg_false;
        outC->ignoreTimestamp = kcg_true;
        outC->lastKnownTTrain = 0;
      }
      else {
        outC->otherTimingError = kcg_false;
        outC->sequenceError = kcg_true;
        outC->ignoreTimestamp = kcg_false;
        outC->lastKnownTTrain = last_lastKnownTTrain;
      }
      outC->tNvContactError = outC->otherTimingError;
    }
    else {
      _1_connectingStatusConnecting_IfBlock1 = connectionStatus ==
        cRadioSessionConnecting1_CheckEuroradioMessage;
      /* ck_connectingStatusConnecting */ if (_1_connectingStatusConnecting_IfBlock1) {
        outC->otherTimingError = kcg_false;
        outC->sequenceError = kcg_false;
        outC->ignoreTimestamp = kcg_true;
        outC->lastKnownTTrain = 0;
      }
      else {
        outC->otherTimingError = kcg_false;
        outC->sequenceError = kcg_true;
        outC->ignoreTimestamp = kcg_false;
        outC->lastKnownTTrain = last_lastKnownTTrain;
      }
      outC->tNvContactError = outC->otherTimingError;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TimingChecker_CheckEuroradioMessage.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

