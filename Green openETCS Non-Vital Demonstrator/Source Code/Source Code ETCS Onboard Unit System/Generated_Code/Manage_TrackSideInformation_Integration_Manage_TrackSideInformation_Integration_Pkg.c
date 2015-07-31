/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 2 */ CheckEuroRadioMessage_reset(&outC->Context_2);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
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
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  static ReceivedMessage_T_Common_Types_Pkg tmp6;
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
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L21 */
  static ReceivedMessage_T_Common_Types_Pkg _L21;
  
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    reset,
    API_trackSide_Message,
    ActualOdometry,
    &outC->Context_1);
  doBaliseBranch = outC->Context_1.outTrackMessage_for_check.valid &
    (msrc_Eurobalise_Common_Types_Pkg ==
      outC->Context_1.outTrackMessage_for_check.msg_type);
  doRadio = outC->Context_1.outTrackMessage_for_check.msg_type ==
    msrc_Euroradio_Common_Types_Pkg;
  if (doRadio) {
    /* 2 */
    CheckEuroRadioMessage(
      &outC->Context_1.outTrackMessage_for_check,
      tNvContact,
      lastRelevantEventTimestamp,
      connectionStatus,
      fullChecks,
      &outC->Context_2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L21,
      &outC->Context_2.checkedMessage);
    tmp2 = outC->Context_2.radioSequenceError;
    tmp1 = outC->Context_2.tNvContactError;
    tmp8 = outC->Context_2.otherTimingError;
    tmp7 = outC->Context_2.radioMessageConsistencyError;
  }
  if (doBaliseBranch) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      inAnnouncedBGs,
      trainPosition,
      (*modeAndLevel).Mode,
      &outC->Context_1.outTrackMessage_for_check,
      q_nvlocacc,
      intrainVersion,
      &tmp6,
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
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp6, &_L21);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &tmp6,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
    tmp4 = kcg_false;
    tmp5 = kcg_false;
    outC->outCheckErrors.linkedBGError = kcg_false;
  }
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &tmp6,
    &(*trainPosition).LRBG,
    inAnnouncedBGs,
    trainPosition,
    &_L21);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &outC->outBG_MessageForCalcTrainPosition,
    &_L21.BG_Common_Header);
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
    ContinuousTimeoutCheck(
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
  /* 3 */
  InformationFilter_InformationFilter_Pkg(
    &_L21,
    (*modeAndLevel).level,
    (*modeAndLevel).Mode,
    inSupervisingRbcId,
    inFilterEvents,
    inActiveCab,
    inTrainDataValid,
    &outC->Context_3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessage,
    &outC->Context_3.outMessage);
  /* 3 */
  getRadioManagement_packagesSupport_Pkg(
    &outC->outputMessage,
    &outC->outRadioManagement);
  /* 3 */
  getParameterPositionReport_packagesSupport_Pkg(
    &outC->outputMessage,
    &outC->outPositionParams);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

