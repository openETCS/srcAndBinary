/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  static kcg_int i;
  
  outC->ApplyServiceBrake = kcg_true;
  outC->BadBaliseMessageToDMI = kcg_true;
  outC->debug_ErrorMSG = kcg_true;
  outC->errorBG = kcg_true;
  outC->countPackets = 0;
  outC->positionM = 0.0;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outCheckErrors.linkedBGError = kcg_true;
  outC->outCheckErrors.unlinkedBGError = kcg_true;
  outC->outCheckErrors.BG_versionIncompatible = kcg_true;
  outC->outCheckErrors.radioSequenceError = kcg_true;
  outC->outCheckErrors.tNvContactError = kcg_true;
  outC->outCheckErrors.otherTimingError = kcg_true;
  outC->outCheckErrors.radioMessageConsistencyError = kcg_true;
  outC->outCheckErrors.nid_c = 0;
  outC->outCheckErrors.nid_errorbg = 0;
  outC->outputMessage.valid = kcg_true;
  outC->outputMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessage.radioMetadata.nid_em = kcg_true;
  outC->outputMessage.radioMetadata.q_scale = kcg_true;
  outC->outputMessage.radioMetadata.d_sr = kcg_true;
  outC->outputMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessage.radioMetadata.d_ref = kcg_true;
  outC->outputMessage.radioMetadata.q_dir = kcg_true;
  outC->outputMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessage.radioMetadata.m_version = kcg_true;
  outC->outputMessage.BG_Common_Header.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outputMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outputMessage.BG_Common_Header.m_mcount = 0;
  outC->outputMessage.BG_Common_Header.nid_c = 0;
  outC->outputMessage.BG_Common_Header.nid_bg = 0;
  outC->outputMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outputMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outputMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outputMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessage.Radio_Common_Header.radioDevice = 0;
  outC->outputMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outputMessage.Radio_Common_Header.nid_message = 0;
  outC->outputMessage.Radio_Common_Header.t_train = 0;
  outC->outputMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outputMessage.Radio_Common_Header.t_train_reference = 0;
  outC->outputMessage.Radio_Common_Header.nid_em = 0;
  outC->outputMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outputMessage.Radio_Common_Header.d_sr = 0;
  outC->outputMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->outputMessage.Radio_Common_Header.d_ref = 0;
  outC->outputMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outputMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->outputMessage.packets.PacketHeaders[i].nid_packet = 0;
    outC->outputMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outputMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outputMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outputMessage.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->outputMessage.packets.PacketData[i] = 0;
  }
  outC->outputMessage.sendingRBC.valid = kcg_true;
  outC->outputMessage.sendingRBC.nid_c = 0;
  outC->outputMessage.sendingRBC.rbc_id = 0;
  outC->outputMessage.sendingRBC.device_id = 0;
  /* 3 */ InformationFilter_init_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */ CheckEuroRadioMessage_init_CheckEuroradioMessage(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */
  CheckEuroRadioMessage_reset_CheckEuroradioMessage(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */ kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */ kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::intrainVersion */ M_VERSION intrainVersion,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */ connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */ kcg_bool inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static ReceivedMessage_T_Common_Types_Pkg tmp5;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static ReceivedMessage_T_Common_Types_Pkg tmp4;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static positionedBG_T_TrainPosition_Types_Pck tmp3;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool tmp2;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool tmp1;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_ERRORBG_BG_Types_Pkg tmp;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _7_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _8_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _9_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _10_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_C op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_ERRORBG_BG_Types_Pkg _6_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doBaliseBranch */
  static kcg_bool doBaliseBranch;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doRadio */
  static kcg_bool doRadio;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPositionTest */
  static trainPosition_T_TrainPosition_Types_Pck trainPositionTest;
  
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    reset,
    API_trackSide_Message,
    ActualOdometry,
    &outC->Context_1);
  doRadio = outC->Context_1.outTrackMessage_for_check.msg_type ==
    msrc_Euroradio_Common_Types_Pkg;
  /* ck_doRadio */ if (doRadio) {
    /* 1 */
    CheckEuroRadioMessage_CheckEuroradioMessage(
      &outC->Context_1.outTrackMessage_for_check,
      tNvContact,
      lastRelevantEventTimestamp,
      radioStatus,
      fullChecks,
      &outC->_1_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp5,
      &outC->_1_Context_1.checkedMessage);
    _10_op_call = outC->_1_Context_1.radioSequenceError;
    _9_op_call = outC->_1_Context_1.tNvContactError;
    _8_op_call = outC->_1_Context_1.otherTimingError;
    _7_op_call = outC->_1_Context_1.radioMessageConsistencyError;
  }
  doBaliseBranch = outC->Context_1.outTrackMessage_for_check.valid &
    (msrc_Eurobalise_Common_Types_Pkg ==
      outC->Context_1.outTrackMessage_for_check.msg_type);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &trainPositionTest,
    trainPosition);
  trainPositionTest.trainPositionIsUnknown = kcg_false;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp3,
    &(*trainPosition).LRBG);
  tmp3.valid = kcg_true;
  /* ck_doBaliseBranch */ if (doBaliseBranch) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      inAnnouncedBGs,
      &trainPositionTest,
      (*modeAndLevel).Mode,
      &outC->Context_1.outTrackMessage_for_check,
      q_nvlocacc,
      intrainVersion,
      &tmp4,
      &outC->ApplyServiceBrake,
      &outC->BadBaliseMessageToDMI,
      &outC->outCheckErrors.linkedBGError,
      &tmp2,
      &tmp1,
      &_6_op_call,
      &op_call);
  }
  else {
    outC->ApplyServiceBrake = kcg_false;
    outC->BadBaliseMessageToDMI = kcg_false;
    /* ck_doRadio */ if (doRadio) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp4, &tmp5);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &tmp4,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
    tmp1 = kcg_false;
    tmp2 = kcg_false;
    outC->outCheckErrors.linkedBGError = kcg_false;
  }
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &tmp4,
    &tmp3,
    inAnnouncedBGs,
    &trainPositionTest,
    &tmp5);
  /* 3 */
  InformationFilter_InformationFilter_Pkg(
    &tmp5,
    modeAndLevel,
    0,
    inFilterEvents,
    inActiveCab,
    inTrainDataValid,
    radioStatus,
    &outC->Context_3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessage,
    &outC->Context_3.outMessage);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->IF_toML,
    &outC->Context_3.IF_toML);
  outC->outCheckErrors.unlinkedBGError = tmp2;
  outC->outCheckErrors.BG_versionIncompatible = tmp1;
  /* ck_doRadio */ if (doRadio) {
    outC->outCheckErrors.radioSequenceError = _10_op_call;
    tmp2 = _9_op_call;
  }
  else {
    tmp2 = kcg_false;
    outC->outCheckErrors.radioSequenceError = kcg_false;
  }
  outC->outCheckErrors.tNvContactError = tmp2 | /* 1 */
    ContinuousTimeoutCheck_CheckEuroradioMessage(
      (*ActualOdometry).timestamp,
      tNvContact,
      lastRelevantEventTimestamp,
      fullChecks,
      radioStatus);
  /* ck_doRadio */ if (doRadio) {
    outC->outCheckErrors.otherTimingError = _8_op_call;
    tmp1 = _7_op_call;
  }
  else {
    tmp1 = kcg_false;
    outC->outCheckErrors.otherTimingError = kcg_false;
  }
  outC->outCheckErrors.radioMessageConsistencyError = tmp1;
  /* ck_doBaliseBranch */ if (doBaliseBranch) {
    outC->outCheckErrors.nid_c = op_call;
    tmp = _6_op_call;
  }
  else {
    outC->outCheckErrors.nid_c = 0;
    tmp = cUnknownBG_BG_Types_Pkg;
  }
  outC->outCheckErrors.nid_errorbg = tmp;
  outC->positionM = (kcg_real) (*ActualOdometry).odo.o_nominal / 100.0;
  /* 1 */
  checkOnErrors_xdebugSupport_Pkg(
    &outC->outCheckErrors,
    &outC->debug_ErrorMSG,
    &outC->errorBG);
  outC->countPackets = /* 1 */
    countPackets_xdebugSupport_Pkg(API_trackSide_Message);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

