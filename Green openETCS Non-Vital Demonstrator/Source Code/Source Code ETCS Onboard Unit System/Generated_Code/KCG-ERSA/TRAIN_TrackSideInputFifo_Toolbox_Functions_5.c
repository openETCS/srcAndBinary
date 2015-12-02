/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h"

#ifndef KCG_USER_DEFINED_INIT
void TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->outValid = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->_L50 = 0;
  outC->_L32 = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->buffer[i1].valid = kcg_true;
    outC->buffer[i1].systemTimeMsgReceived = 0;
    outC->buffer[i1].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->buffer[i1].btm_msg.present = kcg_true;
    outC->buffer[i1].btm_msg.checkResult = kcg_true;
    outC->buffer[i1].btm_msg.api_bad_balise_received = kcg_true;
    outC->buffer[i1].btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->buffer[i1].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i1].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->buffer[i1].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->buffer[i1].btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->buffer[i1].btm_msg.api_header.m_dup = M_DUP_No_duplicates;
    outC->buffer[i1].btm_msg.api_header.m_mcount = 0;
    outC->buffer[i1].btm_msg.api_header.nid_c = 0;
    outC->buffer[i1].btm_msg.api_header.nid_bg = 0;
    outC->buffer[i1].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->buffer[i1].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->buffer[i1].rtm_msg.present = kcg_true;
    outC->buffer[i1].rtm_msg.apiConsistencyError = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.radioDevice = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.nid_message = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.t_train = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.nid_lrbg = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.t_train_reference = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.nid_em = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.d_sr = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.d_ref = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.d_emergencystop = 0;
    outC->buffer[i1].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i1].rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
    outC->buffer[i1].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->buffer[i1].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->buffer[i1].rtm_msg.sendingRBC_Id.nid_c = 0;
    outC->buffer[i1].rtm_msg.sendingRBC_Id.rbc_id = 0;
    outC->buffer[i1].rtm_msg.sendingRBC_Id.device_id = 0;
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
    outC->_L4_IfBlock1[i1].valid = kcg_true;
    outC->_L4_IfBlock1[i1].systemTimeMsgReceived = 0;
    outC->_L4_IfBlock1[i1].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->_L4_IfBlock1[i1].btm_msg.present = kcg_true;
    outC->_L4_IfBlock1[i1].btm_msg.checkResult = kcg_true;
    outC->_L4_IfBlock1[i1].btm_msg.api_bad_balise_received = kcg_true;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.m_dup = M_DUP_No_duplicates;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.m_mcount = 0;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.nid_c = 0;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.nid_bg = 0;
    outC->_L4_IfBlock1[i1].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L4_IfBlock1[i1].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L4_IfBlock1[i1].rtm_msg.present = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.apiConsistencyError = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.radioDevice = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.nid_message = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.t_train = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.nid_lrbg = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.t_train_reference = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.nid_em = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.d_sr = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.d_ref = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.d_emergencystop = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->_L4_IfBlock1[i1].rtm_msg.sendingRBC_Id.nid_c = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.sendingRBC_Id.rbc_id = 0;
    outC->_L4_IfBlock1[i1].rtm_msg.sendingRBC_Id.device_id = 0;
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
  }
  outC->_L20_IfBlock1 = 0;
  outC->size = 0;
  outC->outData.valid = kcg_true;
  outC->outData.systemTimeMsgReceived = 0;
  outC->outData.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outData.btm_msg.present = kcg_true;
  outC->outData.btm_msg.checkResult = kcg_true;
  outC->outData.btm_msg.api_bad_balise_received = kcg_true;
  outC->outData.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outData.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outData.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->outData.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->outData.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outData.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->outData.btm_msg.api_header.m_mcount = 0;
  outC->outData.btm_msg.api_header.nid_c = 0;
  outC->outData.btm_msg.api_header.nid_bg = 0;
  outC->outData.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outData.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outData.rtm_msg.present = kcg_true;
  outC->outData.rtm_msg.apiConsistencyError = kcg_true;
  outC->outData.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->outData.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->outData.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->outData.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->outData.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outData.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->outData.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->outData.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->outData.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outData.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->outData.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->outData.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->outData.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outData.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->outData.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outData.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->outData.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->outData.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->outData.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->outData.rtm_msg.sendingRBC_Id.device_id = 0;
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
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::TRAIN_TrackSideInputFifo */
void TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inData */ API_TrackSideInput_T_API_Msg_Pkg *inData,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inValid */ kcg_bool inValid,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inReady */ kcg_bool inReady,
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo */ kcg_int tmp1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo */ kcg_int tmp;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::entry */ kcg_int entry;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L38 */ kcg_int _L38;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L44 */ kcg_bool _L44;
  
  /* ck_inValid */ if (inValid) {
    /* fby_1_init_8 */ if (outC->init1) {
      entry = 0;
      for (_L38 = 0; _L38 < 5; _L38++) {
        kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
          &outC->_L4_IfBlock1[_L38],
          (API_TrackSideInput_T_API_Msg_Pkg *)
            &cEmtpyTrackSideInputMessage_Toolbox);
      }
    }
    else {
      entry = outC->_L20_IfBlock1;
    }
    if ((0 <= entry) & (entry < 5)) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->_L4_IfBlock1[entry],
        inData);
    }
    kcg_copy_array_122160(&outC->buffer, &outC->_L4_IfBlock1);
    outC->_L20_IfBlock1 = (entry + 1) % 5;
    tmp1 = 1;
    outC->init1 = kcg_false;
  }
  else {
    /* last_init_ck_buffer */ if (outC->init) {
      for (_L38 = 0; _L38 < 5; _L38++) {
        kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
          &outC->buffer[_L38],
          (API_TrackSideInput_T_API_Msg_Pkg *)
            &cEmtpyTrackSideInputMessage_Toolbox);
      }
    }
    tmp1 = 0;
  }
  /* fby_1_init_1 */ if (outC->init) {
    entry = 0;
    outC->init = kcg_false;
    _L38 = 0;
  }
  else {
    entry = outC->_L50;
    _L38 = outC->_L32;
  }
  if ((0 <= entry) & (entry < 5)) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->outData,
      &outC->buffer[entry]);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->outData,
      (API_TrackSideInput_T_API_Msg_Pkg *)
        &cEmtpyTrackSideInputMessage_Toolbox);
  }
  /* 1 */ if (_L38 <= 5) {
    outC->size = _L38;
  }
  else {
    outC->size = 5;
  }
  _L44 = inReady & (outC->size > 0);
  /* 5 */ if (_L44) {
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
  /* 4 */ if (inValid & (outC->size == 5)) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  outC->_L50 = (entry + _L38 + tmp) % 5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_TrackSideInputFifo_Toolbox_Functions_5.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

