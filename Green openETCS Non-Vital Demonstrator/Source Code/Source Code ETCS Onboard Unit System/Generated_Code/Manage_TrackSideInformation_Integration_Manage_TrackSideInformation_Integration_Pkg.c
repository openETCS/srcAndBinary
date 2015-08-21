/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */ calculatePendingState_reset_xdebugSupport_Pkg(&outC->Context_1);
  /* 1 */ combineForLevelChange_reset_xdebugSupport_Pkg(&outC->_1_Context_1);
  /* 1 */
  CheckEuroRadioMessage_reset_CheckEuroradioMessage(&outC->_2_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->_3_Context_1);
}

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::intrainVersion */M_VERSION intrainVersion,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::connectionStatus */sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */kcg_int inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */kcg_bool inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */kcg_bool inTrainDataValid,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */kcg_bool transitionPositionPassed,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  static positionedBG_T_TrainPosition_Types_Pck tmp6;
  static kcg_bool tmp5;
  static kcg_bool tmp4;
  static kcg_bool tmp3;
  static kcg_bool tmp2;
  static kcg_bool tmp1;
  static NID_ERRORBG_BG_Types_Pkg tmp;
  static NID_C tmp9;
  static NID_ERRORBG_BG_Types_Pkg tmp10;
  static kcg_bool tmp7;
  static kcg_bool tmp8;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doBaliseBranch */
  static kcg_bool doBaliseBranch;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doRadio */
  static kcg_bool doRadio;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPositionTest */
  static trainPosition_T_TrainPosition_Types_Pck trainPositionTest;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L206 */
  static ReceivedMessage_T_Common_Types_Pkg _L206;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L205 */
  static ReceivedMessage_T_Common_Types_Pkg _L205;
  
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    reset,
    API_trackSide_Message,
    ActualOdometry,
    &outC->_3_Context_1);
  doBaliseBranch = outC->_3_Context_1.outTrackMessage_for_check.valid &
    (msrc_Eurobalise_Common_Types_Pkg ==
      outC->_3_Context_1.outTrackMessage_for_check.msg_type);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &trainPositionTest,
    trainPosition);
  trainPositionTest.trainPositionIsUnknown = kcg_false;
  doRadio = outC->_3_Context_1.outTrackMessage_for_check.msg_type ==
    msrc_Euroradio_Common_Types_Pkg;
  if (doRadio) {
    /* 1 */
    CheckEuroRadioMessage_CheckEuroradioMessage(
      &outC->_3_Context_1.outTrackMessage_for_check,
      tNvContact,
      lastRelevantEventTimestamp,
      connectionStatus,
      fullChecks,
      &outC->_2_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L205,
      &outC->_2_Context_1.checkedMessage);
    tmp2 = outC->_2_Context_1.radioSequenceError;
    tmp1 = outC->_2_Context_1.tNvContactError;
    tmp8 = outC->_2_Context_1.otherTimingError;
    tmp7 = outC->_2_Context_1.radioMessageConsistencyError;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp6,
    &(*trainPosition).LRBG);
  tmp6.valid = kcg_true;
  if (doBaliseBranch) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      inAnnouncedBGs,
      &trainPositionTest,
      (*modeAndLevel).Mode,
      &outC->_3_Context_1.outTrackMessage_for_check,
      q_nvlocacc,
      intrainVersion,
      &_L206,
      &outC->ApplyServiceBrake,
      &outC->BadBaliseMessageToDMI,
      &outC->outCheckErrors.linkedBGError,
      &tmp5,
      &tmp3,
      &tmp10,
      &tmp9);
    tmp4 = tmp3;
  }
  else {
    outC->ApplyServiceBrake = kcg_false;
    outC->BadBaliseMessageToDMI = kcg_false;
    if (doRadio) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L206, &_L205);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_L206,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
    tmp4 = kcg_false;
    tmp5 = kcg_false;
    outC->outCheckErrors.linkedBGError = kcg_false;
  }
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &_L206,
    &tmp6,
    inAnnouncedBGs,
    &trainPositionTest,
    &outC->outputMessageForRadioAck);
  /* 1 */
  bypassGeneralMessage_xdebugSupport_Pkg(
    &outC->outputMessageForRadioAck,
    &_L205,
    &_L206);
  /* 1 */
  combineForLevelChange_xdebugSupport_Pkg(
    &outC->outputMessageForRadioAck,
    modeAndLevel,
    kcg_false,
    trainPosition,
    &outC->_1_Context_1);
  kcg_copy_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg(
    &outC->forLevelManagement,
    &outC->_1_Context_1.forLevelManagement);
  outC->outCheckErrors.unlinkedBGError = tmp5;
  outC->outCheckErrors.BG_versionIncompatible = tmp4;
  if (doRadio) {
    outC->outCheckErrors.radioSequenceError = tmp2;
    tmp3 = tmp1;
  }
  else {
    tmp3 = kcg_false;
    outC->outCheckErrors.radioSequenceError = kcg_false;
  }
  outC->outCheckErrors.tNvContactError = tmp3 | /* 1 */
    ContinuousTimeoutCheck_CheckEuroradioMessage(
      (*ActualOdometry).timestamp,
      tNvContact,
      lastRelevantEventTimestamp,
      fullChecks);
  if (doRadio) {
    outC->outCheckErrors.otherTimingError = tmp8;
    tmp1 = tmp7;
  }
  else {
    tmp1 = kcg_false;
    outC->outCheckErrors.otherTimingError = kcg_false;
  }
  outC->outCheckErrors.radioMessageConsistencyError = tmp1;
  if (doBaliseBranch) {
    outC->outCheckErrors.nid_c = tmp9;
    tmp = tmp10;
  }
  else {
    outC->outCheckErrors.nid_c = 0;
    tmp = cUnknownBG_BG_Types_Pkg;
  }
  outC->outCheckErrors.nid_errorbg = tmp;
  /* 1 */
  calculatePendingState_xdebugSupport_Pkg(
    &outC->outputMessageForRadioAck,
    inFilterEvents,
    &outC->Context_1);
  /* 3 */
  InformationFilter_InformationFilter_Pkg(
    &_L205,
    (*modeAndLevel).level,
    (*modeAndLevel).Mode,
    inSupervisingRbcId,
    &outC->Context_1.outFilterEvents,
    inActiveCab,
    inTrainDataValid,
    &outC->Context_3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessage,
    &outC->Context_3.outMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

