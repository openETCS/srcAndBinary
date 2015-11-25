/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void TransitionBuffer_init_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->init = kcg_true;
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
  }
  outC->outStacksize = 0;
  outC->Out.valid = kcg_true;
  outC->Out.source = msrc_undefined_Common_Types_Pkg;
  outC->Out.radioMetadata.t_train_reference = kcg_true;
  outC->Out.radioMetadata.nid_em = kcg_true;
  outC->Out.radioMetadata.q_scale = kcg_true;
  outC->Out.radioMetadata.d_sr = kcg_true;
  outC->Out.radioMetadata.t_sh_rqst = kcg_true;
  outC->Out.radioMetadata.d_ref = kcg_true;
  outC->Out.radioMetadata.q_dir = kcg_true;
  outC->Out.radioMetadata.d_emergencystop = kcg_true;
  outC->Out.radioMetadata.m_version = kcg_true;
  outC->Out.BG_Common_Header.valid = kcg_true;
  outC->Out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->Out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Out.BG_Common_Header.m_mcount = 0;
  outC->Out.BG_Common_Header.nid_c = 0;
  outC->Out.BG_Common_Header.nid_bg = 0;
  outC->Out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->Out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->Out.BG_Common_Header.bgPosition.timestamp = 0;
  outC->Out.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->Out.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->Out.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->Out.BG_Common_Header.bgPosition.acceleration = 0;
  outC->Out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->Out.BG_Common_Header.q_nvlocacc = 0;
  outC->Out.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->Out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->Out.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->Out.Radio_Common_Header.radioDevice = 0;
  outC->Out.Radio_Common_Header.receivedSystemTime = 0;
  outC->Out.Radio_Common_Header.nid_message = 0;
  outC->Out.Radio_Common_Header.t_train = 0;
  outC->Out.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->Out.Radio_Common_Header.nid_lrbg = 0;
  outC->Out.Radio_Common_Header.t_train_reference = 0;
  outC->Out.Radio_Common_Header.nid_em = 0;
  outC->Out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->Out.Radio_Common_Header.d_sr = 0;
  outC->Out.Radio_Common_Header.t_sh_rqst = 0;
  outC->Out.Radio_Common_Header.d_ref = 0;
  outC->Out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->Out.Radio_Common_Header.d_emergencystop = 0;
  outC->Out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i1 = 0; i1 < 30; i1++) {
    outC->Out.packets.PacketHeaders[i1].nid_packet = 0;
    outC->Out.packets.PacketHeaders[i1].q_dir = Q_DIR_Reverse;
    outC->Out.packets.PacketHeaders[i1].valid = kcg_true;
    outC->Out.packets.PacketHeaders[i1].startAddress = 0;
    outC->Out.packets.PacketHeaders[i1].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->Out.packets.PacketData[i1] = 0;
  }
  outC->Out.sendingRBC.valid = kcg_true;
  outC->Out.sendingRBC.nid_c = 0;
  outC->Out.sendingRBC.rbc_id = 0;
  outC->Out.sendingRBC.device_id = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransitionBuffer_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::TransitionBuffer */
void TransitionBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer::In */ ReceivedMessage_T_Common_Types_Pkg *In,
  /* InformationFilter_Pkg::TransitionBuffer::Write */ kcg_bool Write,
  /* InformationFilter_Pkg::TransitionBuffer::Reset */ kcg_bool Reset,
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */ TransitionBuffer_T_InformationFilter_Pkg last_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */ kcg_int last_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::c_r */ kcg_bool c_r;
  
  c_r = !(*In).valid & Write;
  /* last_init_ck_stacksize */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &last_buffer,
      (TransitionBuffer_T_InformationFilter_Pkg *)
        &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
    last_stacksize = 0;
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &last_buffer,
      &outC->buffer);
    last_stacksize = outC->outStacksize;
  }
  /* ck_c_r */ if (c_r) {
    /* 2 */
    TransitionBuffer_read_only_InformationFilter_Pkg(
      &last_buffer,
      last_stacksize,
      In,
      Reset,
      &outC->buffer,
      &outC->outStacksize,
      &outC->Out);
  }
  else {
    _1_else_clock_IfBlock1 = (*In).valid & Write;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      /* 1 */
      TransitionBuffer_read_write_InformationFilter_Pkg(
        &last_buffer,
        last_stacksize,
        In,
        Reset,
        &outC->buffer,
        &outC->outStacksize,
        &outC->Out);
    }
    else {
      else_clock_IfBlock1 = !Write & (*In).valid;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        /* 1 */
        TransitionBuffer_write_only_InformationFilter_Pkg(
          &last_buffer,
          last_stacksize,
          In,
          Reset,
          &outC->buffer,
          &outC->outStacksize,
          &outC->Out);
      }
      else {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Out, In);
        /* 1 */ if (Reset) {
          outC->outStacksize = 0;
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &outC->buffer,
            (TransitionBuffer_T_InformationFilter_Pkg *)
              &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
        }
        else {
          outC->outStacksize = last_stacksize;
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &outC->buffer,
            &last_buffer);
        }
      }
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_InformationFilter_Pkg.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

