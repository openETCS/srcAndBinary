/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFi.h"

#ifndef KCG_USER_DEFINED_INIT
void InformationFilter_init_Informat(outC_InformationFilter_Informat *outC)
{
  static kcg_int i;
  
  outC->outAcceptedMessage = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L40 = kcg_true;
  outC->init = kcg_true;
  outC->_L39.valid = kcg_true;
  outC->_L39.source = msrc_undefined_Common_Types_Pkg;
  outC->_L39.radioMetadata.t_train_reference = kcg_true;
  outC->_L39.radioMetadata.nid_em = kcg_true;
  outC->_L39.radioMetadata.q_scale = kcg_true;
  outC->_L39.radioMetadata.d_sr = kcg_true;
  outC->_L39.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L39.radioMetadata.d_ref = kcg_true;
  outC->_L39.radioMetadata.q_dir = kcg_true;
  outC->_L39.radioMetadata.d_emergencystop = kcg_true;
  outC->_L39.radioMetadata.m_version = kcg_true;
  outC->_L39.BG_Common_Header.valid = kcg_true;
  outC->_L39.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L39.BG_Common_Header.m_version = M_VERSION_Previous_versions_acc;
  outC->_L39.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L39.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L39.BG_Common_Header.m_mcount = 0;
  outC->_L39.BG_Common_Header.nid_c = 0;
  outC->_L39.BG_Common_Header.nid_bg = 0;
  outC->_L39.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L39.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L39.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L39.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L39.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L39.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L39.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L39.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L39.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L39.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L39.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L39.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L39.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_L39.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal = 0;
  outC->_L39.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min = 0;
  outC->_L39.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max = 0;
  outC->_L39.BG_Common_Header.q_nvlocacc = 0;
  outC->_L39.BG_Common_Header.noCoordinateSystemHasBeenAssign = kcg_true;
  outC->_L39.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L39.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L39.Radio_Common_Header.radioDevice = 0;
  outC->_L39.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L39.Radio_Common_Header.nid_message = 0;
  outC->_L39.Radio_Common_Header.t_train = 0;
  outC->_L39.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_requir;
  outC->_L39.Radio_Common_Header.nid_lrbg = 0;
  outC->_L39.Radio_Common_Header.t_train_reference = 0;
  outC->_L39.Radio_Common_Header.nid_em = 0;
  outC->_L39.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L39.Radio_Common_Header.d_sr = 0;
  outC->_L39.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L39.Radio_Common_Header.d_ref = 0;
  outC->_L39.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L39.Radio_Common_Header.d_emergencystop = 0;
  outC->_L39.Radio_Common_Header.m_version = M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->_L39.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L39.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L39.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L39.packets.PacketHeaders[i].startAddress = 0;
    outC->_L39.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->_L39.packets.PacketData[i] = 0;
  }
  outC->_L39.sendingRBC.valid = kcg_true;
  outC->_L39.sendingRBC.nid_c = 0;
  outC->_L39.sendingRBC.rbc_id = 0;
  outC->_L39.sendingRBC.device_id = 0;
  outC->_L37.valid = kcg_true;
  outC->_L37.source = msrc_undefined_Common_Types_Pkg;
  outC->_L37.radioMetadata.t_train_reference = kcg_true;
  outC->_L37.radioMetadata.nid_em = kcg_true;
  outC->_L37.radioMetadata.q_scale = kcg_true;
  outC->_L37.radioMetadata.d_sr = kcg_true;
  outC->_L37.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L37.radioMetadata.d_ref = kcg_true;
  outC->_L37.radioMetadata.q_dir = kcg_true;
  outC->_L37.radioMetadata.d_emergencystop = kcg_true;
  outC->_L37.radioMetadata.m_version = kcg_true;
  outC->_L37.BG_Common_Header.valid = kcg_true;
  outC->_L37.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L37.BG_Common_Header.m_version = M_VERSION_Previous_versions_acc;
  outC->_L37.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L37.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L37.BG_Common_Header.m_mcount = 0;
  outC->_L37.BG_Common_Header.nid_c = 0;
  outC->_L37.BG_Common_Header.nid_bg = 0;
  outC->_L37.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L37.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L37.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L37.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L37.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L37.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L37.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L37.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L37.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L37.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L37.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L37.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L37.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal = 0;
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min = 0;
  outC->_L37.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max = 0;
  outC->_L37.BG_Common_Header.q_nvlocacc = 0;
  outC->_L37.BG_Common_Header.noCoordinateSystemHasBeenAssign = kcg_true;
  outC->_L37.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L37.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L37.Radio_Common_Header.radioDevice = 0;
  outC->_L37.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L37.Radio_Common_Header.nid_message = 0;
  outC->_L37.Radio_Common_Header.t_train = 0;
  outC->_L37.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_requir;
  outC->_L37.Radio_Common_Header.nid_lrbg = 0;
  outC->_L37.Radio_Common_Header.t_train_reference = 0;
  outC->_L37.Radio_Common_Header.nid_em = 0;
  outC->_L37.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L37.Radio_Common_Header.d_sr = 0;
  outC->_L37.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L37.Radio_Common_Header.d_ref = 0;
  outC->_L37.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L37.Radio_Common_Header.d_emergencystop = 0;
  outC->_L37.Radio_Common_Header.m_version = M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->_L37.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L37.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L37.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L37.packets.PacketHeaders[i].startAddress = 0;
    outC->_L37.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->_L37.packets.PacketData[i] = 0;
  }
  outC->_L37.sendingRBC.valid = kcg_true;
  outC->_L37.sendingRBC.nid_c = 0;
  outC->_L37.sendingRBC.rbc_id = 0;
  outC->_L37.sendingRBC.device_id = 0;
  outC->outMessage.valid = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.m_version = M_VERSION_Previous_versions_acc;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.m_mcount = 0;
  outC->outMessage.BG_Common_Header.nid_c = 0;
  outC->outMessage.BG_Common_Header.nid_bg = 0;
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal = 0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min = 0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max = 0;
  outC->outMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssign = kcg_true;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.Radio_Common_Header.radioDevice = 0;
  outC->outMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outMessage.Radio_Common_Header.nid_message = 0;
  outC->outMessage.Radio_Common_Header.t_train = 0;
  outC->outMessage.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_requir;
  outC->outMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outMessage.Radio_Common_Header.t_train_reference = 0;
  outC->outMessage.Radio_Common_Header.nid_em = 0;
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.d_sr = 0;
  outC->outMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->outMessage.Radio_Common_Header.d_ref = 0;
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->outMessage.packets.PacketHeaders[i].nid_packet = 0;
    outC->outMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outMessage.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->outMessage.packets.PacketData[i] = 0;
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = 0;
  outC->outMessage.sendingRBC.rbc_id = 0;
  outC->outMessage.sendingRBC.device_id = 0;
  /* 2 */ TransitionBuffer_init_Informati(&outC->Context_2);
  /* 1 */ RbcTransitionEffective_init_Inf(&outC->_3_Context_1);
  /* 1 */ TransitionBuffer_init_Informati(&outC->_2_Context_1);
  /* 1 */ LevelTransitionEffective_init_I(&outC->_1_Context_1);
  /* 1 */ MessageBuffer_init_InformationF(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InformationFilter_reset_Informa(outC_InformationFilter_Informat *outC)
{
  outC->init = kcg_true;
  /* 2 */ TransitionBuffer_reset_Informat(&outC->Context_2);
  /* 1 */ RbcTransitionEffective_reset_In(&outC->_3_Context_1);
  /* 1 */ TransitionBuffer_reset_Informat(&outC->_2_Context_1);
  /* 1 */ LevelTransitionEffective_reset_(&outC->_1_Context_1);
  /* 1 */ MessageBuffer_reset_Information(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::InformationFilter */
void InformationFilter_InformationFi(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */ M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
  outC_InformationFilter_Informat *outC)
{
  /* InformationFilter_Pkg::InformationFilter */
  static ReceivedMessage_T_Common_Types_ tmp1;
  /* InformationFilter_Pkg::InformationFilter */
  static kcg_bool tmp;
  /* InformationFilter_Pkg::InformationFilter::_L10 */
  static ReceivedMessage_T_Common_Types_ _L10;
  /* InformationFilter_Pkg::InformationFilter::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::InformationFilter::_L59 */
  static kcg_bool _L59;
  
  /* fby_1_init_5 */ if (outC->init) {
    outC->init = kcg_false;
    _L11 = kcg_false;
    _L59 = kcg_false;
    kcg_copy_ReceivedMessage_T_Comm(
      &tmp1,
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
    kcg_copy_ReceivedMessage_T_Comm(
      &_L10,
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    kcg_copy_ReceivedMessage_T_Comm(&tmp1, &outC->_L37);
    _L59 = outC->_L38;
    kcg_copy_ReceivedMessage_T_Comm(&_L10, &outC->_L39);
    _L11 = outC->_L40;
  }
  /* 1 */
  MessageBuffer_InformationFilter(
    inMessage,
    &tmp1,
    _L59,
    &_L10,
    _L11,
    &outC->Context_1);
  /* ck__L42 */ if (outC->Context_1.outMessageValid) {
    /* 1 */
    FirstFilter_InformationFilter_P(
      &outC->Context_1.outMessage,
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
    kcg_copy_ReceivedMessage_T_Comm(
      &_L10,
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  }
  _L59 = outC->Context_1.outMessageValid & !_L11;
  /* ck__L59 */ if (_L59) {
    /* 1 */
    SecondFilter_InformationFilter_(
      &_L10,
      inSupervisingDevice,
      &outC->outAcceptedMessage,
      &tmp);
  }
  else {
    outC->outAcceptedMessage = kcg_false;
    tmp = kcg_false;
  }
  /* ck_outAcceptedMessage */ if (outC->outAcceptedMessage) {
    /* 1 */ ThirdFilter_InformationFilter_P(&_L10, inModus, &outC->outMessage);
  }
  else {
    kcg_copy_ReceivedMessage_T_Comm(
      &outC->outMessage,
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  }
  /* 1 */ LevelTransitionEffective_Inform(inLevel, &outC->_1_Context_1);
  /* 1 */
  TransitionBuffer_InformationFil(
    &_L10,
    _L11,
    outC->_1_Context_1.outLevelTransition,
    &outC->_2_Context_1);
  kcg_copy_ReceivedMessage_T_Comm(&outC->_L37, &outC->_2_Context_1.outMessage);
  outC->_L38 = outC->_2_Context_1.outMessageAvailable;
  /* 1 */
  RbcTransitionEffective_Informat(inSupervisingDevice, &outC->_3_Context_1);
  /* 2 */
  TransitionBuffer_InformationFil(
    &_L10,
    tmp,
    outC->_3_Context_1.outRbcTransition,
    &outC->Context_2);
  kcg_copy_ReceivedMessage_T_Comm(&outC->_L39, &outC->Context_2.outMessage);
  outC->_L40 = outC->Context_2.outMessageAvailable;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InformationFilter_InformationFi.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

