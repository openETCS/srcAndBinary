/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg_Common.h"

#ifndef KCG_USER_DEFINED_INIT
void TransitionBuffer_init_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  static kcg_int i;
  
  outC->outMessageAvailable = kcg_true;
  outC->init = kcg_true;
  outC->_L10 = 0;
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
  /* 1 */ count_down_init_digital(&outC->_1_Context_1);
  /* 1 */ FIFO_init_InformationFilter_Pkg_Common_3(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransitionBuffer_reset_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  outC->init = kcg_true;
  /* 1 */ count_down_reset_digital(&outC->_1_Context_1);
  /* 1 */ FIFO_reset_InformationFilter_Pkg_Common_3(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::Common::TransitionBuffer */
void TransitionBuffer_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */ kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inFlushMessages */ kcg_bool inFlushMessages,
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  /* InformationFilter_Pkg::Common::TransitionBuffer */
  static kcg_bool tmp1;
  /* InformationFilter_Pkg::Common::TransitionBuffer */
  static kcg_int tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp = outC->_L10;
  }
  /* 2 */ if (tmp > 0) {
    tmp1 = kcg_true;
  }
  else {
    tmp1 = kcg_false;
  }
  /* 1 */
  FIFO_InformationFilter_Pkg_Common_3(
    inMessage,
    inStoreMessage,
    tmp1,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outMessage,
    &outC->Context_1.outData);
  outC->outMessageAvailable = outC->Context_1.outValid;
  /* 1 */
  count_down_digital(
    inFlushMessages,
    outC->Context_1.size,
    &outC->_1_Context_1);
  outC->_L10 = outC->_1_Context_1.cpt;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_InformationFilter_Pkg_Common.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

