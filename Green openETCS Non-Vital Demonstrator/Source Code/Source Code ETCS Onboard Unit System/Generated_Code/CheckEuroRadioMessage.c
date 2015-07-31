/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckEuroRadioMessage.h"

void CheckEuroRadioMessage_reset(outC_CheckEuroRadioMessage *outC)
{
  /* 6 */ TimingChecker_reset(&outC->Context_6);
}

/* CheckEuroRadioMessage */
void CheckEuroRadioMessage(
  /* CheckEuroRadioMessage::rtmMessage */TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroRadioMessage::tNvContact */T_NVCONTACT tNvContact,
  /* CheckEuroRadioMessage::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroRadioMessage::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* CheckEuroRadioMessage::activateCheck */kcg_bool activateCheck,
  outC_CheckEuroRadioMessage *outC)
{
  /* CheckEuroRadioMessage::IfBlock1::then::_L64 */
  static kcg_bool _L64_IfBlock1;
  /* CheckEuroRadioMessage::IfBlock1::then::_L73 */
  static kcg_bool _L73_IfBlock1;
  /* CheckEuroRadioMessage::IfBlock1::then::_L76 */
  static ReceivedMessage_T_Common_Types_Pkg _L76_IfBlock1;
  
  if (activateCheck) {
    /* 6 */ ConvertTrackSideMessageToRadioMessage(rtmMessage, &_L76_IfBlock1);
    _L73_IfBlock1 = /* 6 */ CheckMandatoryVariablesAndMA(&_L76_IfBlock1);
    /* 6 */
    TimingChecker(
      tNvContact * 1000,
      lastRelevantEventTimestamp,
      &_L76_IfBlock1,
      connectionStatus,
      (*rtmMessage).systemTime,
      &outC->Context_6);
    _L64_IfBlock1 = /* 6 */ CheckAllowedPacketsRadio(&_L76_IfBlock1);
    /* 6 */
    BuildOutput(
      &_L76_IfBlock1,
      (kcg_bool)
        (_L64_IfBlock1 & _L73_IfBlock1 & !(outC->Context_6.tNvContactError |
            outC->Context_6.sequenceError | outC->Context_6.otherTimingError)),
      &outC->checkedMessage);
    outC->radioSequenceError = (*rtmMessage).valid &
      outC->Context_6.sequenceError;
    outC->tNvContactError = (*rtmMessage).valid &
      outC->Context_6.tNvContactError;
    outC->otherTimingError = (*rtmMessage).valid &
      outC->Context_6.otherTimingError;
    outC->radioMessageConsistencyError = (*rtmMessage).valid & (!_L64_IfBlock1 |
        !_L73_IfBlock1);
  }
  else {
    outC->radioMessageConsistencyError = kcg_false;
    outC->otherTimingError = kcg_false;
    outC->tNvContactError = kcg_false;
    outC->radioSequenceError = kcg_false;
    /* 7 */
    ConvertTrackSideMessageToRadioMessage(rtmMessage, &outC->checkedMessage);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckEuroRadioMessage.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

