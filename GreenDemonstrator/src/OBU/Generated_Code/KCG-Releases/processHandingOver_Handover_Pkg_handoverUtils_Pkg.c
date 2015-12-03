/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processHandingOver_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void processHandingOver_init_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_int i;
  
  outC->sendPositionReport_2_handingOverRBC = kcg_true;
  outC->sendPositionReport_2_acceptingRBC = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->handingOverMobile_is_mobile_1 = kcg_true;
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_true;
  outC->notReady = kcg_true;
  outC->handoverInprogress = kcg_true;
  outC->handoverFinished = kcg_true;
  outC->init = kcg_true;
  outC->_L200.valid = kcg_true;
  outC->_L200.source = msrc_undefined_Common_Types_Pkg;
  outC->_L200.nid_lrbg = 0;
  outC->_L200.location.nominal = 0;
  outC->_L200.location.d_min = 0;
  outC->_L200.location.d_max = 0;
  outC->_L200.contactLastKnownRBC = kcg_true;
  outC->_L200.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L200.order.valid = kcg_true;
  outC->_L200.order.q_dir = Q_DIR_Reverse;
  outC->_L200.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L200.order.d_rbctr = 0;
  outC->_L200.order.nid_c = 0;
  outC->_L200.order.nid_rbc = 0;
  outC->_L200.order.nid_radio = 0;
  outC->_L200.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = 0;
  outC->supervisingRBC.nid_c = 0;
  outC->supervisingRBC.nid_RBC = 0;
  outC->supervisingRBC.nid_radio = 0;
  outC->supervisingRBC.nid_mn = 0;
  outC->sessionCmds_2_MoRC_2.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmds_2_MoRC_2.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.nid_em = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.q_scale = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_sr = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_ref = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.q_dir = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.m_version = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.m_mcount = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.nid_c = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.nid_bg = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.timestamp = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.acceleration = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_nvlocacc = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.radioDevice = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.receivedSystemTime = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_message = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_train = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_lrbg = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_train_reference = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_em = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_sr = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_sh_rqst = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_ref = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_emergencystop = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].nid_packet = 0;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].valid = kcg_true;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].startAddress = 0;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->sessionCmds_2_MoRC_2.packets.PacketData[i] = 0;
  }
  outC->sessionCmds_2_MoRC_2.sendingRBC.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.sendingRBC.nid_c = 0;
  outC->sessionCmds_2_MoRC_2.sendingRBC.rbc_id = 0;
  outC->sessionCmds_2_MoRC_2.sendingRBC.device_id = 0;
  outC->sessionCmds_2_MoRC_1.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmds_2_MoRC_1.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.nid_em = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.q_scale = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_sr = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_ref = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.q_dir = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.m_version = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.m_mcount = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.nid_c = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.nid_bg = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_nvlocacc = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.radioDevice = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.receivedSystemTime = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_message = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_train = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_lrbg = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_train_reference = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_em = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_sr = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_sh_rqst = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_ref = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_emergencystop = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i].nid_packet = 0;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i].valid = kcg_true;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i].startAddress = 0;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->sessionCmds_2_MoRC_1.packets.PacketData[i] = 0;
  }
  outC->sessionCmds_2_MoRC_1.sendingRBC.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.sendingRBC.nid_c = 0;
  outC->sessionCmds_2_MoRC_1.sendingRBC.rbc_id = 0;
  outC->sessionCmds_2_MoRC_1.sendingRBC.device_id = 0;
  /* 2 */ EitherEdge_init_digital(&outC->_3_Context_2);
  /* 1 */ EitherEdge_init_digital(&outC->_2_Context_1);
  /* 1 */
  handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(&outC->_1_Context_1);
  /* 2 */ locReachedOrPassed_init_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ locReachedOrPassed_init_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 3 */
  changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  /* 2 */ EitherEdge_reset_digital(&outC->_3_Context_2);
  /* 1 */ EitherEdge_reset_digital(&outC->_2_Context_1);
  /* 1 */
  handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(&outC->_1_Context_1);
  /* 2 */ locReachedOrPassed_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ locReachedOrPassed_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 3 */
  changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::processHandingOver */
void processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_1 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_2 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver */
  static positionedBG_T_TrainPosition_Types_Pck tmp1;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::p131_RBCTransitionOrder_dec */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg p131_RBCTransitionOrder_dec;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::locationOfRBCTransition */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg locationOfRBCTransition;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L38 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L38;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L37 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L37;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L36 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L36;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L35 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L35;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L45 */
  static morcStatus_T_RCM_Session_Types_Pkg _L45;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L44 */
  static morcStatus_T_RCM_Session_Types_Pkg _L44;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L89 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L89;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L174 */
  static kcg_bool _L174;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L173 */
  static kcg_bool _L173;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L172 */
  static kcg_int _L172;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L176 */
  static NID_BG _L176;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L175 */
  static NID_C _L175;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L196 */
  static kcg_bool _L196;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L212 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L212;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L226 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L226;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L228 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L228;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L229 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L229;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L243 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L243;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L246 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L246;
  
  /* last_init_ck_handoverFinished */ if (outC->init) {
    _L196 = kcg_false;
    _L173 = kcg_false;
    _L174 = kcg_false;
  }
  else {
    _L196 = outC->handoverInprogress;
    _L173 = outC->useInformationFromAcceptingRBC;
    _L174 = outC->handoverFinished;
  }
  /* 3 */
  changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
    _L196,
    sessionManagementAbility,
    &outC->Context_3);
  outC->handingOverMobile_is_mobile_1 =
    outC->Context_3.handingOverMobile_is_mobile_1;
  /* 2 */
  splitInputData_Handover_Pkg_handoverUtils_Pkg(
    dataFromTrack_in,
    _L173,
    outC->handingOverMobile_is_mobile_1,
    morcStatus_1,
    morcStatus_2,
    sessionManagementAbility,
    &_L1,
    &_L226,
    &_L243,
    &_L89);
  /* 1 */
  fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
    &_L89,
    &_L1,
    &_L246,
    &p131_RBCTransitionOrder_dec,
    &_L243,
    &_L229,
    &_L226);
  /* 1 */ if (_L174) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L200,
      (p131_q_rbcTransitionOrder_T_Handover_Pkg *)
        &cNoP131_RBCTransitionOrder_Handover_Pkg);
  }
  else /* 4 */ if (p131_RBCTransitionOrder_dec.valid) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L200,
      &p131_RBCTransitionOrder_dec);
  }
  else /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L200,
      (p131_q_rbcTransitionOrder_T_Handover_Pkg *)
        &cNoP131_RBCTransitionOrder_Handover_Pkg);
  }
  outC->init = kcg_false;
  /* 1 */
  radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
    morcStatus_1,
    morcStatus_2,
    outC->handingOverMobile_is_mobile_1,
    sessionManagementAbility,
    &_L44,
    &_L45);
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L200.valid,
    outC->_L200.nid_lrbg,
    &_L175,
    &_L176);
  _L196 = outC->_L200.valid & outC->_L200.order.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp1,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  tmp1.valid = outC->_L200.valid;
  tmp1.nid_c = _L175;
  tmp1.nid_bg = _L176;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp1,
    BGs,
    _L196,
    &_L172,
    &_L173,
    &_L174);
  if ((0 <= _L172) & (_L172 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &(*BGs)[_L172]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L200.order.q_scale,
    outC->_L200.order.d_rbctr,
    0,
    &_L212);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &tmp1.location,
    &_L212,
    &locationOfRBCTransition);
  /* 2 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*trainPosition).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &_L212);
  /* 1 */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &locationOfRBCTransition,
    &_L212,
    &outC->Context_1);
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = (*trainPosition).valid &
    outC->Context_1.hit & _L196 & _L173;
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &_L212,
    &(*trainProperties).d_frontend_2_rearend,
    &tmp);
  /* 2 */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &locationOfRBCTransition,
    &tmp,
    &outC->Context_2);
  /* 1 */
  handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
    &_L246,
    &_L243,
    &_L229,
    &_L44,
    &_L45,
    outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd,
    (kcg_bool) ((*trainPosition).valid & outC->Context_2.hit & _L196 & _L173),
    mode,
    sessionManagementAbility,
    &outC->_1_Context_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L89,
    &outC->_1_Context_1.p42_sessionCmd_for_acceptingRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L1,
    &outC->_1_Context_1.p42_sessionCmd_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L243,
    &outC->_1_Context_1.p45_radioNetworkRegistrationOrder_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L246,
    &outC->_1_Context_1.p45_radioNetworkRegistrationOrder_for_acceptingRBC);
  outC->sendPositionReport_2_handingOverRBC =
    outC->_1_Context_1.sendPositionReport_2_handingOverRBC;
  outC->sendPositionReport_2_acceptingRBC =
    outC->_1_Context_1.sendPositionReport_2_acceptingRBC;
  outC->sendTrainData_2_acceptingRBC =
    outC->_1_Context_1.sendTrainData_2_acceptingRBC;
  outC->useInformationFromAcceptingRBC =
    outC->_1_Context_1.useInformationFromAcceptingRBC;
  outC->bufferInformationFromAcceptingRBC =
    outC->_1_Context_1.bufferInformationFromAcceptingRBC;
  outC->handoverInprogress = outC->_1_Context_1.handoverInprogress;
  outC->handoverFinished = outC->_1_Context_1.handoverFinished;
  /* 1 */ EitherEdge_digital(outC->handoverInprogress, &outC->_2_Context_1);
  /* 2 */ EitherEdge_digital(outC->handoverFinished, &outC->_3_Context_2);
  outC->notReady = outC->_1_Context_1.notReady | outC->_2_Context_1.EE_Output |
    outC->_3_Context_2.EE_Output;
  /* 1 */
  mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &_L226,
    &_L89,
    &_L1,
    &_L243,
    &_L246,
    outC->handingOverMobile_is_mobile_1,
    outC->useInformationFromAcceptingRBC,
    sessionManagementAbility,
    &_L37,
    &_L35,
    &_L228,
    &_L38,
    &_L36,
    &_L229);
  /* 1 */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &_L38,
    &_L36,
    &_L229,
    morcStatus_2,
    cMobileDeviceNo_2_Handover_Pkg,
    &outC->sessionCmds_2_MoRC_2);
  /* 2 */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &_L37,
    &_L35,
    &_L228,
    morcStatus_1,
    cMobileDeviceNo_1_Handover_Pkg,
    &outC->sessionCmds_2_MoRC_1);
  /* 1 */
  determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
    morcStatus_1,
    morcStatus_2,
    outC->handingOverMobile_is_mobile_1,
    outC->useInformationFromAcceptingRBC,
    sessionManagementAbility,
    &outC->supervisingRBC,
    &_L174,
    &_L196);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** processHandingOver_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-03T14:26:15
*************************************************************$ */

