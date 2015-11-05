/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "keepP42_EVC_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void keepP42_init_EVC_Support_Pkg(outC_keepP42_EVC_Support_Pkg *outC)
{
  static kcg_int i;
  
  outC->storeMsg = kcg_true;
  outC->init = kcg_true;
  outC->store.valid = kcg_true;
  outC->store.source = msrc_undefined_Common_Types_Pkg;
  outC->store.radioMetadata.t_train_reference = kcg_true;
  outC->store.radioMetadata.nid_em = kcg_true;
  outC->store.radioMetadata.q_scale = kcg_true;
  outC->store.radioMetadata.d_sr = kcg_true;
  outC->store.radioMetadata.t_sh_rqst = kcg_true;
  outC->store.radioMetadata.d_ref = kcg_true;
  outC->store.radioMetadata.q_dir = kcg_true;
  outC->store.radioMetadata.d_emergencystop = kcg_true;
  outC->store.radioMetadata.m_version = kcg_true;
  outC->store.BG_Common_Header.valid = kcg_true;
  outC->store.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->store.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->store.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->store.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->store.BG_Common_Header.m_mcount = 0;
  outC->store.BG_Common_Header.nid_c = 0;
  outC->store.BG_Common_Header.nid_bg = 0;
  outC->store.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->store.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->store.BG_Common_Header.bgPosition.timestamp = 0;
  outC->store.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->store.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->store.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->store.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->store.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->store.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->store.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->store.BG_Common_Header.bgPosition.acceleration = 0;
  outC->store.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->store.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->store.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->store.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->store.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->store.BG_Common_Header.q_nvlocacc = 0;
  outC->store.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->store.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->store.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->store.Radio_Common_Header.radioDevice = 0;
  outC->store.Radio_Common_Header.receivedSystemTime = 0;
  outC->store.Radio_Common_Header.nid_message = 0;
  outC->store.Radio_Common_Header.t_train = 0;
  outC->store.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->store.Radio_Common_Header.nid_lrbg = 0;
  outC->store.Radio_Common_Header.t_train_reference = 0;
  outC->store.Radio_Common_Header.nid_em = 0;
  outC->store.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->store.Radio_Common_Header.d_sr = 0;
  outC->store.Radio_Common_Header.t_sh_rqst = 0;
  outC->store.Radio_Common_Header.d_ref = 0;
  outC->store.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->store.Radio_Common_Header.d_emergencystop = 0;
  outC->store.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->store.packets.PacketHeaders[i].nid_packet = 0;
    outC->store.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->store.packets.PacketHeaders[i].valid = kcg_true;
    outC->store.packets.PacketHeaders[i].startAddress = 0;
    outC->store.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->store.packets.PacketData[i] = 0;
  }
  outC->store.sendingRBC.valid = kcg_true;
  outC->store.sendingRBC.nid_c = 0;
  outC->store.sendingRBC.rbc_id = 0;
  outC->store.sendingRBC.device_id = 0;
  outC->toMoRC.valid = kcg_true;
  outC->toMoRC.source = msrc_undefined_Common_Types_Pkg;
  outC->toMoRC.radioMetadata.t_train_reference = kcg_true;
  outC->toMoRC.radioMetadata.nid_em = kcg_true;
  outC->toMoRC.radioMetadata.q_scale = kcg_true;
  outC->toMoRC.radioMetadata.d_sr = kcg_true;
  outC->toMoRC.radioMetadata.t_sh_rqst = kcg_true;
  outC->toMoRC.radioMetadata.d_ref = kcg_true;
  outC->toMoRC.radioMetadata.q_dir = kcg_true;
  outC->toMoRC.radioMetadata.d_emergencystop = kcg_true;
  outC->toMoRC.radioMetadata.m_version = kcg_true;
  outC->toMoRC.BG_Common_Header.valid = kcg_true;
  outC->toMoRC.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->toMoRC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->toMoRC.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->toMoRC.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->toMoRC.BG_Common_Header.m_mcount = 0;
  outC->toMoRC.BG_Common_Header.nid_c = 0;
  outC->toMoRC.BG_Common_Header.nid_bg = 0;
  outC->toMoRC.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->toMoRC.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->toMoRC.BG_Common_Header.bgPosition.timestamp = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.acceleration = 0;
  outC->toMoRC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->toMoRC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->toMoRC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->toMoRC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->toMoRC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->toMoRC.BG_Common_Header.q_nvlocacc = 0;
  outC->toMoRC.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->toMoRC.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->toMoRC.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->toMoRC.Radio_Common_Header.radioDevice = 0;
  outC->toMoRC.Radio_Common_Header.receivedSystemTime = 0;
  outC->toMoRC.Radio_Common_Header.nid_message = 0;
  outC->toMoRC.Radio_Common_Header.t_train = 0;
  outC->toMoRC.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->toMoRC.Radio_Common_Header.nid_lrbg = 0;
  outC->toMoRC.Radio_Common_Header.t_train_reference = 0;
  outC->toMoRC.Radio_Common_Header.nid_em = 0;
  outC->toMoRC.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->toMoRC.Radio_Common_Header.d_sr = 0;
  outC->toMoRC.Radio_Common_Header.t_sh_rqst = 0;
  outC->toMoRC.Radio_Common_Header.d_ref = 0;
  outC->toMoRC.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->toMoRC.Radio_Common_Header.d_emergencystop = 0;
  outC->toMoRC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->toMoRC.packets.PacketHeaders[i].nid_packet = 0;
    outC->toMoRC.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->toMoRC.packets.PacketHeaders[i].valid = kcg_true;
    outC->toMoRC.packets.PacketHeaders[i].startAddress = 0;
    outC->toMoRC.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->toMoRC.packets.PacketData[i] = 0;
  }
  outC->toMoRC.sendingRBC.valid = kcg_true;
  outC->toMoRC.sendingRBC.nid_c = 0;
  outC->toMoRC.sendingRBC.rbc_id = 0;
  outC->toMoRC.sendingRBC.device_id = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void keepP42_reset_EVC_Support_Pkg(outC_keepP42_EVC_Support_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_Support_Pkg::keepP42 */
void keepP42_EVC_Support_Pkg(
  /* EVC_Support_Pkg::keepP42::fromTrack */ ReceivedMessage_T_Common_Types_Pkg *fromTrack,
  outC_keepP42_EVC_Support_Pkg *outC)
{
  /* EVC_Support_Pkg::keepP42::_L3 */
  static kcg_bool _L3;
  /* EVC_Support_Pkg::keepP42::_L6 */
  static kcg_bool _L6;
  
  _L3 = (*fromTrack).BG_Common_Header.nid_bg == 353;
  /* last_init_ck_storeMsg */ if (outC->init) {
    _L6 = kcg_false;
  }
  else {
    _L6 = outC->storeMsg;
  }
  /* 2 */ if ((*fromTrack).valid & !_L3 & _L6) {
    outC->storeMsg = kcg_false;
  }
  else /* 1 */ if (_L3) {
    outC->storeMsg = kcg_true;
  }
  else {
    outC->storeMsg = _L6;
  }
  /* 3 */ if (_L3) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->store, fromTrack);
  }
  else /* last_init_ck_store */ if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->store,
      (ReceivedMessage_T_Common_Types_Pkg *) &cNoTrackMsg_EVC_Support_Pkg);
  }
  outC->init = kcg_false;
  /* 4 */ if (outC->storeMsg) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->toMoRC, &outC->store);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->toMoRC, fromTrack);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** keepP42_EVC_Support_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

