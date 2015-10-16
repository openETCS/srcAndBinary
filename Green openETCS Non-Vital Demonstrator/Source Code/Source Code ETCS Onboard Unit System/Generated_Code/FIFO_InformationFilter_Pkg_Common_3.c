/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_InformationFilter_Pkg_Common_3.h"

#ifndef KCG_USER_DEFINED_INIT
void FIFO_init_InformationFilter_Pkg_Common_3(
  outC_FIFO_InformationFilter_Pkg_Common_3 *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->outValid = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->_L50 = 0;
  outC->_L32 = 0;
  for (i1 = 0; i1 < 3; i1++) {
    outC->buffer[i1].valid = kcg_true;
    outC->buffer[i1].source = msrc_undefined_Common_Types_Pkg;
    outC->buffer[i1].radioMetadata.t_train_reference = kcg_true;
    outC->buffer[i1].radioMetadata.nid_em = kcg_true;
    outC->buffer[i1].radioMetadata.q_scale = kcg_true;
    outC->buffer[i1].radioMetadata.d_sr = kcg_true;
    outC->buffer[i1].radioMetadata.t_sh_rqst = kcg_true;
    outC->buffer[i1].radioMetadata.d_ref = kcg_true;
    outC->buffer[i1].radioMetadata.q_dir = kcg_true;
    outC->buffer[i1].radioMetadata.d_emergencystop = kcg_true;
    outC->buffer[i1].radioMetadata.m_version = kcg_true;
    outC->buffer[i1].BG_Common_Header.valid = kcg_true;
    outC->buffer[i1].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->buffer[i1].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i1].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->buffer[i1].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->buffer[i1].BG_Common_Header.m_mcount = 0;
    outC->buffer[i1].BG_Common_Header.nid_c = 0;
    outC->buffer[i1].BG_Common_Header.nid_bg = 0;
    outC->buffer[i1].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->buffer[i1].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->buffer[i1].BG_Common_Header.bgPosition.timestamp = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.odo.o_nominal = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.odo.o_min = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.odo.o_max = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.speed.v_lower = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.speed.v_upper = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.acceleration = 0;
    outC->buffer[i1].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->buffer[i1].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->buffer[i1].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->buffer[i1].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->buffer[i1].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->buffer[i1].BG_Common_Header.q_nvlocacc = 0;
    outC->buffer[i1].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->buffer[i1].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->buffer[i1].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->buffer[i1].Radio_Common_Header.radioDevice = 0;
    outC->buffer[i1].Radio_Common_Header.receivedSystemTime = 0;
    outC->buffer[i1].Radio_Common_Header.nid_message = 0;
    outC->buffer[i1].Radio_Common_Header.t_train = 0;
    outC->buffer[i1].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->buffer[i1].Radio_Common_Header.nid_lrbg = 0;
    outC->buffer[i1].Radio_Common_Header.t_train_reference = 0;
    outC->buffer[i1].Radio_Common_Header.nid_em = 0;
    outC->buffer[i1].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->buffer[i1].Radio_Common_Header.d_sr = 0;
    outC->buffer[i1].Radio_Common_Header.t_sh_rqst = 0;
    outC->buffer[i1].Radio_Common_Header.d_ref = 0;
    outC->buffer[i1].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->buffer[i1].Radio_Common_Header.d_emergencystop = 0;
    outC->buffer[i1].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (i = 0; i < 30; i++) {
      outC->buffer[i1].packets.PacketHeaders[i].nid_packet = 0;
      outC->buffer[i1].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->buffer[i1].packets.PacketHeaders[i].valid = kcg_true;
      outC->buffer[i1].packets.PacketHeaders[i].startAddress = 0;
      outC->buffer[i1].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i = 0; i < 500; i++) {
      outC->buffer[i1].packets.PacketData[i] = 0;
    }
    outC->buffer[i1].sendingRBC.valid = kcg_true;
    outC->buffer[i1].sendingRBC.nid_c = 0;
    outC->buffer[i1].sendingRBC.rbc_id = 0;
    outC->buffer[i1].sendingRBC.device_id = 0;
    outC->_L4_IfBlock1[i1].valid = kcg_true;
    outC->_L4_IfBlock1[i1].source = msrc_undefined_Common_Types_Pkg;
    outC->_L4_IfBlock1[i1].radioMetadata.t_train_reference = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.nid_em = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.q_scale = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.d_sr = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.d_ref = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.q_dir = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.d_emergencystop = kcg_true;
    outC->_L4_IfBlock1[i1].radioMetadata.m_version = kcg_true;
    outC->_L4_IfBlock1[i1].BG_Common_Header.valid = kcg_true;
    outC->_L4_IfBlock1[i1].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4_IfBlock1[i1].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_IfBlock1[i1].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L4_IfBlock1[i1].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4_IfBlock1[i1].BG_Common_Header.m_mcount = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.nid_c = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.nid_bg = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.timestamp = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.odo.o_nominal = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.odo.o_min = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.odo.o_max = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.speed.v_lower = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.speed.v_upper = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.acceleration = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i1].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i1].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.q_nvlocacc = 0;
    outC->_L4_IfBlock1[i1].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L4_IfBlock1[i1].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L4_IfBlock1[i1].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.radioDevice = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.receivedSystemTime = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.nid_message = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.t_train = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.nid_lrbg = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.t_train_reference = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.nid_em = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.d_sr = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.t_sh_rqst = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.d_ref = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.d_emergencystop = 0;
    outC->_L4_IfBlock1[i1].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (i = 0; i < 30; i++) {
      outC->_L4_IfBlock1[i1].packets.PacketHeaders[i].nid_packet = 0;
      outC->_L4_IfBlock1[i1].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->_L4_IfBlock1[i1].packets.PacketHeaders[i].valid = kcg_true;
      outC->_L4_IfBlock1[i1].packets.PacketHeaders[i].startAddress = 0;
      outC->_L4_IfBlock1[i1].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i = 0; i < 500; i++) {
      outC->_L4_IfBlock1[i1].packets.PacketData[i] = 0;
    }
    outC->_L4_IfBlock1[i1].sendingRBC.valid = kcg_true;
    outC->_L4_IfBlock1[i1].sendingRBC.nid_c = 0;
    outC->_L4_IfBlock1[i1].sendingRBC.rbc_id = 0;
    outC->_L4_IfBlock1[i1].sendingRBC.device_id = 0;
  }
  outC->_L20_IfBlock1 = 0;
  outC->size = 0;
  outC->outData.valid = kcg_true;
  outC->outData.source = msrc_undefined_Common_Types_Pkg;
  outC->outData.radioMetadata.t_train_reference = kcg_true;
  outC->outData.radioMetadata.nid_em = kcg_true;
  outC->outData.radioMetadata.q_scale = kcg_true;
  outC->outData.radioMetadata.d_sr = kcg_true;
  outC->outData.radioMetadata.t_sh_rqst = kcg_true;
  outC->outData.radioMetadata.d_ref = kcg_true;
  outC->outData.radioMetadata.q_dir = kcg_true;
  outC->outData.radioMetadata.d_emergencystop = kcg_true;
  outC->outData.radioMetadata.m_version = kcg_true;
  outC->outData.BG_Common_Header.valid = kcg_true;
  outC->outData.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outData.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outData.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outData.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outData.BG_Common_Header.m_mcount = 0;
  outC->outData.BG_Common_Header.nid_c = 0;
  outC->outData.BG_Common_Header.nid_bg = 0;
  outC->outData.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outData.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outData.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outData.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outData.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outData.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outData.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outData.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outData.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outData.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outData.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outData.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outData.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outData.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outData.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->outData.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->outData.BG_Common_Header.q_nvlocacc = 0;
  outC->outData.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->outData.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outData.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->outData.Radio_Common_Header.radioDevice = 0;
  outC->outData.Radio_Common_Header.receivedSystemTime = 0;
  outC->outData.Radio_Common_Header.nid_message = 0;
  outC->outData.Radio_Common_Header.t_train = 0;
  outC->outData.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->outData.Radio_Common_Header.nid_lrbg = 0;
  outC->outData.Radio_Common_Header.t_train_reference = 0;
  outC->outData.Radio_Common_Header.nid_em = 0;
  outC->outData.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outData.Radio_Common_Header.d_sr = 0;
  outC->outData.Radio_Common_Header.t_sh_rqst = 0;
  outC->outData.Radio_Common_Header.d_ref = 0;
  outC->outData.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outData.Radio_Common_Header.d_emergencystop = 0;
  outC->outData.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i1 = 0; i1 < 30; i1++) {
    outC->outData.packets.PacketHeaders[i1].nid_packet = 0;
    outC->outData.packets.PacketHeaders[i1].q_dir = Q_DIR_Reverse;
    outC->outData.packets.PacketHeaders[i1].valid = kcg_true;
    outC->outData.packets.PacketHeaders[i1].startAddress = 0;
    outC->outData.packets.PacketHeaders[i1].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->outData.packets.PacketData[i1] = 0;
  }
  outC->outData.sendingRBC.valid = kcg_true;
  outC->outData.sendingRBC.nid_c = 0;
  outC->outData.sendingRBC.rbc_id = 0;
  outC->outData.sendingRBC.device_id = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FIFO_reset_InformationFilter_Pkg_Common_3(
  outC_FIFO_InformationFilter_Pkg_Common_3 *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::Common::FIFO */
void FIFO_InformationFilter_Pkg_Common_3(
  /* InformationFilter_Pkg::Common::FIFO::inData */ ReceivedMessage_T_Common_Types_Pkg *inData,
  /* InformationFilter_Pkg::Common::FIFO::inValid */ kcg_bool inValid,
  /* InformationFilter_Pkg::Common::FIFO::inReady */ kcg_bool inReady,
  outC_FIFO_InformationFilter_Pkg_Common_3 *outC)
{
  /* InformationFilter_Pkg::Common::FIFO */
  static kcg_int tmp1;
  /* InformationFilter_Pkg::Common::FIFO */
  static kcg_int tmp;
  /* InformationFilter_Pkg::Common::FIFO::entry */
  static kcg_int entry;
  /* InformationFilter_Pkg::Common::FIFO::_L38 */
  static kcg_int _L38;
  /* InformationFilter_Pkg::Common::FIFO::_L44 */
  static kcg_bool _L44;
  
  /* ck_inValid */ if (inValid) {
    /* fby_1_init_8 */ if (outC->init1) {
      entry = 0;
      for (_L38 = 0; _L38 < 3; _L38++) {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L4_IfBlock1[_L38],
          (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
      }
    }
    else {
      entry = outC->_L20_IfBlock1;
    }
    if ((0 <= entry) & (entry < 3)) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L4_IfBlock1[entry],
        inData);
    }
    kcg_copy_array_83505(&outC->buffer, &outC->_L4_IfBlock1);
    outC->_L20_IfBlock1 = (entry + 1) % 3;
    tmp1 = 1;
    outC->init1 = kcg_false;
  }
  else {
    /* last_init_ck_buffer */ if (outC->init) {
      for (_L38 = 0; _L38 < 3; _L38++) {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->buffer[_L38],
          (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
      }
    }
    tmp1 = 0;
  }
  /* fby_1_init_4 */ if (outC->init) {
    entry = 0;
    outC->init = kcg_false;
    _L38 = 0;
  }
  else {
    entry = outC->_L50;
    _L38 = outC->_L32;
  }
  if ((0 <= entry) & (entry < 3)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outData,
      &outC->buffer[entry]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outData,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  /* 1 */ if (_L38 <= 3) {
    outC->size = _L38;
  }
  else {
    outC->size = 3;
  }
  _L44 = inReady & (outC->size > 0);
  /* 8 */ if (_L44) {
    tmp = - 1;
    _L38 = 1;
    outC->outValid = kcg_true;
  }
  else {
    tmp = 0;
    _L38 = 0;
    outC->outValid = kcg_false;
  }
  outC->_L32 = outC->size + tmp1 + tmp;
  /* 7 */ if (inValid & (outC->size == 3)) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  outC->_L50 = (entry + _L38 + tmp) % 3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FIFO_InformationFilter_Pkg_Common_3.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

