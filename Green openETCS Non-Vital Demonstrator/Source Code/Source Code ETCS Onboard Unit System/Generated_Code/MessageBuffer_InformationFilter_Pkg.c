/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MessageBuffer_InformationFilter_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void MessageBuffer_init_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  static kcg_int i;
  
  outC->outMessageValid = kcg_true;
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
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
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
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.Radio_Common_Header.radioDevice = 0;
  outC->outMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outMessage.Radio_Common_Header.nid_message = 0;
  outC->outMessage.Radio_Common_Header.t_train = 0;
  outC->outMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
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
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
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
  /* 2 */ FIFO_init_InformationFilter_Pkg_Common_3(&outC->Context_2);
  /* 3 */ FIFO_init_InformationFilter_Pkg_Common_3(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MessageBuffer_reset_InformationFilter_Pkg(
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  /* 2 */ FIFO_reset_InformationFilter_Pkg_Common_3(&outC->Context_2);
  /* 3 */ FIFO_reset_InformationFilter_Pkg_Common_3(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::MessageBuffer */
void MessageBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromTrain */ ReceivedMessage_T_Common_Types_Pkg *inMessageFromTrain,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBuffer */ ReceivedMessage_T_Common_Types_Pkg *inMessageFromLevelTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromLevelTransitionBufferValid */ kcg_bool inMessageFromLevelTransitionBufferValid,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBuffer */ ReceivedMessage_T_Common_Types_Pkg *inMessageFromRBCTransitionBuffer,
  /* InformationFilter_Pkg::MessageBuffer::inMessageFromRBCTransitionBufferValid */ kcg_bool inMessageFromRBCTransitionBufferValid,
  outC_MessageBuffer_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::MessageBuffer::_L36 */
  static kcg_bool _L36;
  
  /* 3 */
  FIFO_InformationFilter_Pkg_Common_3(
    inMessageFromLevelTransitionBuffer,
    inMessageFromLevelTransitionBufferValid,
    (kcg_bool) !(*inMessageFromTrain).valid,
    &outC->Context_3);
  _L36 = (*inMessageFromTrain).valid | outC->Context_3.outValid;
  /* 2 */
  FIFO_InformationFilter_Pkg_Common_3(
    inMessageFromRBCTransitionBuffer,
    inMessageFromRBCTransitionBufferValid,
    (kcg_bool) !_L36,
    &outC->Context_2);
  /* 1 */ if ((*inMessageFromTrain).valid) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      inMessageFromTrain);
  }
  else /* 5 */ if (outC->Context_3.outValid) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &outC->Context_3.outData);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &outC->Context_2.outData);
  }
  outC->outMessageValid = _L36 | outC->Context_2.outValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MessageBuffer_InformationFilter_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

