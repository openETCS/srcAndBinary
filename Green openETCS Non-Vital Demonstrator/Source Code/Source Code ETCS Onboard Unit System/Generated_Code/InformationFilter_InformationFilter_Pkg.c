/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFilter_Pkg.h"

void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ TransitionBuffer_reset_InformationFilter_Pkg_Common(&outC->Context_1);
  /* 1 */
  LevelTransitionEffective_reset_InformationFilter_Pkg(&outC->_1_Context_1);
  /* 2 */ TransitionBuffer_reset_InformationFilter_Pkg_Common(&outC->Context_2);
  /* 1 */
  RbcTransitionEffective_reset_InformationFilter_Pkg(&outC->_2_Context_1);
  /* 1 */ MessageBuffer_reset_InformationFilter_Pkg(&outC->_3_Context_1);
}

/* InformationFilter_Pkg::InformationFilter */
void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */kcg_bool inTrainDataValid,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  static kcg_bool tmp;
  static ReceivedMessage_T_Common_Types_Pkg tmp1;
  /* InformationFilter_Pkg::InformationFilter::_L10 */
  static ReceivedMessage_T_Common_Types_Pkg _L10;
  /* InformationFilter_Pkg::InformationFilter::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::InformationFilter::_L59 */
  static kcg_bool _L59;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L11 = kcg_false;
    _L59 = kcg_false;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L10,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp1,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L10, &outC->_L37);
    _L59 = outC->_L38;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp1, &outC->_L39);
    _L11 = outC->_L40;
  }
  /* 1 */
  MessageBuffer_InformationFilter_Pkg(
    inMessage,
    &_L10,
    _L59,
    &tmp1,
    _L11,
    &outC->_3_Context_1);
  if (outC->_3_Context_1.outMessageValid) {
    /* 1 */
    FirstFilter_InformationFilter_Pkg_FirstFilter(
      &outC->_3_Context_1.outMessage,
      inLevel,
      (*inFilterEvents).pendingL1Transition,
      (*inFilterEvents).pendingL12L3Transition,
      (*inFilterEvents).pendingAckOfTrainDataFromRBC,
      (*inFilterEvents).emergencyStopAccepted,
      (*inFilterEvents).lastAckTextMessageId,
      (*inFilterEvents).pendingNTCTransition,
      (*inFilterEvents).SPPAndGradientOnBoard,
      (*inFilterEvents).MACoverNotFullLength,
      &_L10,
      &_L11);
  }
  else {
    _L11 = kcg_false;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L10,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  _L59 = outC->_3_Context_1.outMessageValid & !_L11;
  /* 1 */
  RbcTransitionEffective_InformationFilter_Pkg(
    inSupervisingDevice,
    &outC->_2_Context_1);
  if (_L59) {
    /* 1 */
    SecondFilter_InformationFilter_Pkg_SecondFilter(
      &_L10,
      inSupervisingDevice,
      &outC->outAcceptedMessage,
      &tmp);
  }
  else {
    tmp = kcg_false;
    outC->outAcceptedMessage = kcg_false;
  }
  /* 2 */
  TransitionBuffer_InformationFilter_Pkg_Common(
    &_L10,
    tmp,
    outC->_2_Context_1.outRbcTransition,
    &outC->Context_2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L39,
    &outC->Context_2.outMessage);
  outC->_L40 = outC->Context_2.outMessageAvailable;
  /* 1 */
  LevelTransitionEffective_InformationFilter_Pkg(inLevel, &outC->_1_Context_1);
  /* 1 */
  TransitionBuffer_InformationFilter_Pkg_Common(
    &_L10,
    _L11,
    outC->_1_Context_1.outLevelTransition,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L37,
    &outC->Context_1.outMessage);
  outC->_L38 = outC->Context_1.outMessageAvailable;
  if (outC->outAcceptedMessage) {
    /* 1 */
    ThirdFilter_InformationFilter_Pkg_ThirdFilter(
      &_L10,
      inModus,
      &outC->outMessage);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InformationFilter_InformationFilter_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

