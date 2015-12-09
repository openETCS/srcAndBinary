/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  kcg_int i;
  
  outC->sendPositionReport_2_handingOverRBC = kcg_true;
  outC->sendPositionReport_2_acceptingRBC = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->handoverInprogress = kcg_true;
  outC->handoverFinished = kcg_true;
  outC->notReady = kcg_true;
  outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
  outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->p131_transitionOrder_mem.valid = kcg_true;
  outC->p131_transitionOrder_mem.source = msrc_undefined_Common_Types_Pkg;
  outC->p131_transitionOrder_mem.radioMetadata.t_train_reference = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.nid_em = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.q_scale = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.d_sr = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.t_sh_rqst = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.d_ref = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.q_dir = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.d_emergencystop = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.m_version = kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.valid = kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p131_transitionOrder_mem.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p131_transitionOrder_mem.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p131_transitionOrder_mem.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p131_transitionOrder_mem.BG_Common_Header.m_mcount = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.nid_c = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.nid_bg = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.timestamp = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.acceleration = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.q_nvlocacc = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p131_transitionOrder_mem.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p131_transitionOrder_mem.Radio_Common_Header.radioDevice = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.receivedSystemTime = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.nid_message = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.t_train = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p131_transitionOrder_mem.Radio_Common_Header.nid_lrbg = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.t_train_reference = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.nid_em = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p131_transitionOrder_mem.Radio_Common_Header.d_sr = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.t_sh_rqst = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.d_ref = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p131_transitionOrder_mem.Radio_Common_Header.d_emergencystop = 0;
  outC->p131_transitionOrder_mem.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p131_transitionOrder_mem.packets.PacketHeaders[i].nid_packet = 0;
    outC->p131_transitionOrder_mem.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p131_transitionOrder_mem.packets.PacketHeaders[i].valid = kcg_true;
    outC->p131_transitionOrder_mem.packets.PacketHeaders[i].startAddress = 0;
    outC->p131_transitionOrder_mem.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->p131_transitionOrder_mem.packets.PacketData[i] = 0;
  }
  outC->p131_transitionOrder_mem.sendingRBC.valid = kcg_true;
  outC->p131_transitionOrder_mem.sendingRBC.nid_c = 0;
  outC->p131_transitionOrder_mem.sendingRBC.rbc_id = 0;
  outC->p131_transitionOrder_mem.sendingRBC.device_id = 0;
  outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
    SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
  outC->p131_transitionOrder_loc_IfBlock1.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.m_mcount = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.nid_c = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.nid_bg = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_nvlocacc = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.radioDevice = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.nid_message = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.t_train = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.nid_lrbg = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.t_train_reference =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.nid_em = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.d_sr = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.t_sh_rqst = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.d_ref = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.d_emergencystop =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].startAddress =
      0;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketData[i] = 0;
  }
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.nid_c = 0;
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.rbc_id = 0;
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.device_id = 0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_mcount =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_c =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_bg =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_nvlocacc =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.radioDevice =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.receivedSystemTime =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_message =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_lrbg =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train_reference =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_em =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_sr =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_sh_rqst =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_ref =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_emergencystop =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].nid_packet =
      0;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].startAddress =
      0;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketData[i] =
      0;
  }
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.nid_c =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.rbc_id =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.device_id =
    0;
  outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
    SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_mcount =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_bg =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_nvlocacc =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.radioDevice =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_message =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_lrbg =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train_reference =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_em =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_sr =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_sh_rqst =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_ref =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_emergencystop =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].startAddress =
      0;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketData[i] =
      0;
  }
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.rbc_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.device_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.nid_em =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.q_scale =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_sr =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_ref =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.q_dir =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.m_version =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.m_mcount =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.nid_bg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_nvlocacc =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.radioDevice =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_message =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_train =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_lrbg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_em =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_sr =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_sh_rqst =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_ref =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_emergencystop =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i].startAddress =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketData[i] =
      0;
  }
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.nid_c = 0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.rbc_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.device_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.nid_em =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.q_scale =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_sr =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_ref =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.q_dir =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.m_version =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.m_mcount =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.nid_bg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_nvlocacc =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.radioDevice =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_message =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_train =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_lrbg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_em =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_sr =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_sh_rqst =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_ref =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_emergencystop =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i].startAddress =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketData[i] =
      0;
  }
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.rbc_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.device_id =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.m_mcount = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.nid_c = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.nid_bg = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_nvlocacc = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.radioDevice = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_message = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_train = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_lrbg = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_em = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_sr = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_sh_rqst = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_ref = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_emergencystop =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i].startAddress =
      0;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketData[i] = 0;
  }
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.nid_c = 0;
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.rbc_id = 0;
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.device_id = 0;
  outC->p42_sessionCmd_for_acceptingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.m_mcount = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.nid_c = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.nid_bg = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_nvlocacc = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.radioDevice = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_message = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_train = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_lrbg = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_em = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_sr = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_sh_rqst = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_ref = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_emergencystop = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i].startAddress =
      0;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketData[i] = 0;
  }
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.nid_c = 0;
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.rbc_id = 0;
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.device_id = 0;
  /* 4 */ RisingEdge_init_digital(&outC->Context_4);
  /* 9 */ RisingEdge_init_digital(&outC->Context_9);
  /* 28 */ RisingEdge_init_digital(&outC->Context_28);
  /* 26 */ RisingEdge_init_digital(&outC->Context_26);
  /* 8 */ RisingEdge_init_digital(&outC->Context_8);
  /* 5 */ RisingEdge_init_digital(&outC->Context_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
  /* 9 */ RisingEdge_reset_digital(&outC->Context_9);
  /* 28 */ RisingEdge_reset_digital(&outC->Context_28);
  /* 26 */ RisingEdge_reset_digital(&outC->Context_26);
  /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
  /* 5 */ RisingEdge_reset_digital(&outC->Context_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
void handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::maxSafeFrontEndPassesHandOverLocation */ kcg_bool maxSafeFrontEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::minSafeReadEndPassesHandOverLocation */ kcg_bool minSafeReadEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */ msgFromTrack_T_RCM_MsgTypes_Pkg tmp3;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */ msgFromTrack_T_RCM_MsgTypes_Pkg tmp2;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */ kcg_bool tmp1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */ kcg_bool tmp;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */ kcg_bool handOver_with_2_Sessions_SM_reset_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */ SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_state_act_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ msgFromTrack_T_RCM_MsgTypes_Pkg _4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */ kcg_bool handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::unregistered_or_noReregisterRequired */ kcg_bool unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L28 */ kcg_bool _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L25 */ kcg_bool _L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L26 */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L21 */ kcg_bool _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L18 */ kcg_bool _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */ kcg_bool sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */ kcg_bool terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */ msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L26 */ kcg_bool _L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L27 */ P42_SessionManagement_T_Packet_Types_Pkg _L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L4 */ msgFromTrack_T_RCM_MsgTypes_Pkg _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */ kcg_bool handOver_with_1_Session_SM_reset_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */ SSM_ST_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_state_act_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */ msgFromTrack_T_RCM_MsgTypes_Pkg last_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ msgFromTrack_T_RCM_MsgTypes_Pkg last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */ kcg_bool handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::unregistered_or_noReregisterRequired */ kcg_bool unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L38 */ kcg_bool _L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L39 */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L44 */ kcg_bool _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L43 */ kcg_bool _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L53 */ kcg_bool _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */ kcg_bool sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */ kcg_bool terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */ msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L28 */ kcg_bool _L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L29 */ P42_SessionManagement_T_Packet_Types_Pkg _L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::sessionWithAcceptingRBCEstablished */ kcg_bool sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageTwoSessions_Handover_Pkg;
  /* last_init_ck_handoverFinished */ if (outC->init) {
    tmp = kcg_false;
  }
  else {
    tmp = outC->handoverFinished;
  }
  /* 1 */ if (tmp) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p131_transitionOrder_mem,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  else /* 4 */ if ((*p131_transitionOrder).valid) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p131_transitionOrder_mem,
      p131_transitionOrder);
  }
  else /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p131_transitionOrder_mem,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  outC->init = kcg_false;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* last_init_ck_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ if (outC->init4) {
      handOver_with_2_Sessions_SM_state_act_IfBlock1 =
        SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
      handOver_with_2_Sessions_SM_reset_sel_IfBlock1 = kcg_false;
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    else {
      handOver_with_2_Sessions_SM_state_act_IfBlock1 =
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
      handOver_with_2_Sessions_SM_reset_sel_IfBlock1 =
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
    }
    outC->init4 = kcg_false;
    /* act_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_state_act_IfBlock1) {
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->handoverFinished = kcg_false;
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          if (handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
            outC->handoverFinished = kcg_true;
            outC->notReady = kcg_true;
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handoverFinished = kcg_false;
            outC->notReady = kcg_false;
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM;
          }
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
        }
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        /* 2 */
        Read_P045_TM(
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets,
          &_L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          &_L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          (*morcStatusFromHandingOverRBC).registration.status ==
          mrs_unregistered_RCM_Types_Pkg;
        _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid &
          _L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          (((_L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.nid_mn !=
                (*morcStatusFromHandingOverRBC).registration.nid_mn) &
              _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) |
            _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          (!_L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
            _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) |
          (_L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
            _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          outC->init3 = kcg_true;
        }
        /* 1 */ if (outC->init3) {
          tmp1 = kcg_true;
        }
        else {
          tmp1 = kcg_false;
        }
        /* 10 */ if (_L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          tmp1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
            &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          if (unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
            outC->notReady = kcg_true;
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->notReady = kcg_false;
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        }
        outC->init3 = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          ((*morcStatusFromHandingOverRBC).connection.status ==
            mcs_disconnected_RCM_Types_Pkg) &
          ((*morcStatusFromHandingOverRBC).session.phase ==
            sp_terminated_RCM_Session_Types_Pkg);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          /* cb_anon_sm */ if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM;
          }
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        /* 3 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          p42_terminateCmd_from_handingOverRBC,
          morcStatusFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        /* 1 */
        Read_P042_TM(
          &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.packets,
          &_L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.valid &
          _L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC &
          (_L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.q_rbc ==
            Q_RBC_Terminate_communication_session);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        /* 1 */ if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          /* cb_anon_sm */ if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          (*morcStatusFromAcceptingRBC).session.phase ==
          sp_maintaining_RCM_Session_Types_Pkg;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendTrainData_2_acceptingRBC =
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 &
          !((M_MODE_Sleeping == mode) | (mode == M_MODE_Non_Leading));
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          outC->notReady = kcg_false;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM;
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
          /* 9 */ RisingEdge_reset_digital(&outC->Context_9);
        }
        /* 8 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              minSafeReadEndPassesHandOverLocation),
          &outC->Context_8);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_8.RE_Output;
        /* 9 */
        RisingEdge_digital(
          (kcg_bool)
            (minSafeReadEndPassesHandOverLocation &
              ((*morcStatusFromAcceptingRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg)),
          &outC->Context_9);
        outC->sendPositionReport_2_acceptingRBC = outC->Context_9.RE_Output;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_8.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_8.RE_Output) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
          }
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            outC->Context_8.RE_Output;
        }
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 5 */ RisingEdge_reset_digital(&outC->Context_5);
          /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
        }
        /* 5 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              maxSafeFrontEndPassesHandOverLocation),
          &outC->Context_5);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingRBC = kcg_true;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_5.RE_Output;
        /* 4 */
        RisingEdge_digital(
          (kcg_bool)
            (maxSafeFrontEndPassesHandOverLocation &
              ((*morcStatusFromAcceptingRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg)),
          &outC->Context_4);
        outC->sendPositionReport_2_acceptingRBC = outC->Context_4.RE_Output;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_5.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_5.RE_Output) {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
          }
          else {
            outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
          }
          outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            outC->Context_5.RE_Output;
        }
        break;
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        /* 2 */
        p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
          &outC->p131_transitionOrder_mem,
          &tmp3);
        /* 2 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &tmp3,
          morcStatusFromAcceptingRBC,
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        outC->bufferInformationFromAcceptingRBC = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        /* 9 */ if ((*p45_radioNetworkRegistrationOrder_in).valid) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
            p45_radioNetworkRegistrationOrder_in);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
            &_4_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        outC->handoverInprogress =
          _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid;
        if (_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          outC->notReady = kcg_false;
          outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid;
        break;
      
    }
  }
  else {
    outC->bufferInformationFromAcceptingRBC = kcg_false;
    outC->useInformationFromAcceptingRBC = kcg_false;
    /* last_init_ck_p131_transitionOrder_loc */ if (outC->init2) {
      handOver_with_1_Session_SM_state_act_IfBlock1 =
        SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
      handOver_with_1_Session_SM_reset_sel_IfBlock1 = kcg_false;
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p131_transitionOrder_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    else {
      handOver_with_1_Session_SM_state_act_IfBlock1 =
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1;
      handOver_with_1_Session_SM_reset_sel_IfBlock1 =
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1;
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p131_transitionOrder_loc_IfBlock1,
        &outC->p131_transitionOrder_loc_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_acceptingRBC,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    outC->init2 = kcg_false;
    /* act_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_state_act_IfBlock1) {
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        /* 8 */
        p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
          &last_p131_transitionOrder_loc_IfBlock1,
          &tmp2);
        /* 12 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &tmp2,
          morcStatusFromHandingOverRBC,
          &outC->p42_sessionCmd_for_handingOverRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM;
        }
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        outC->handoverFinished = kcg_false;
        handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          if (handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
            outC->notReady = kcg_true;
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->notReady = kcg_false;
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM;
          }
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
        }
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        outC->handoverFinished = kcg_false;
        /* 1 */
        Read_P045_TM(
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets,
          &_L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          &_L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          (*morcStatusFromHandingOverRBC).registration.status ==
          mrs_unregistered_RCM_Types_Pkg;
        _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid &
          _L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          (((_L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.nid_mn !=
                (*morcStatusFromHandingOverRBC).registration.nid_mn) &
              _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) |
            _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          (!_L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
            _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) |
          (_L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
            _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          outC->init1 = kcg_true;
        }
        /* 3 */ if (outC->init1) {
          tmp = kcg_true;
        }
        else {
          tmp = kcg_false;
        }
        /* 8 */ if (_L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          tmp) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
            &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          if (unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
            outC->notReady = kcg_true;
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->notReady = kcg_false;
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        }
        outC->init1 = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
          (*morcStatusFromHandingOverRBC).session.phase ==
          sp_terminated_RCM_Session_Types_Pkg;
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          /* cb_anon_sm */ if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM;
          }
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        /* 11 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          p42_terminateCmd_from_handingOverRBC,
          morcStatusFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        /* 2 */
        Read_P042_TM(
          &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.packets,
          &_L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.valid &
          _L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC &
          (_L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.q_rbc ==
            Q_RBC_Terminate_communication_session);
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        /* 5 */ if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p42_sessionCmd_for_handingOverRBC,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pkg);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverInprogress =
          terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          /* cb_anon_sm */ if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          (*morcStatusFromHandingOverRBC).session.phase ==
          sp_maintaining_RCM_Session_Types_Pkg;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_acceptingRBC =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        outC->sendTrainData_2_acceptingRBC =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished &
          !((M_MODE_Sleeping == mode) | (mode == M_MODE_Non_Leading));
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        if ((*p131_transitionOrder).valid) {
          outC->handoverFinished = kcg_false;
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          /* cb_anon_sm */ if (sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
            outC->handoverFinished = kcg_true;
            outC->notReady = kcg_true;
          }
          else {
            outC->handoverFinished = kcg_false;
            outC->notReady = kcg_false;
          }
          if (sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM;
          }
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          /* 28 */ RisingEdge_reset_digital(&outC->Context_28);
        }
        /* 28 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              minSafeReadEndPassesHandOverLocation),
          &outC->Context_28);
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_28.RE_Output;
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_28.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_28.RE_Output) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM;
          }
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            outC->Context_28.RE_Output;
        }
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          /* 26 */ RisingEdge_reset_digital(&outC->Context_26);
        }
        /* 26 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Types_Pkg) &
              maxSafeFrontEndPassesHandOverLocation),
          &outC->Context_26);
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->sendPositionReport_2_handingOverRBC = outC->Context_26.RE_Output;
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_26.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_26.RE_Output) {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM;
          }
          else {
            outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
              SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM;
          }
          outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            outC->Context_26.RE_Output;
        }
        break;
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_handingOverRBC = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          p45_radioNetworkRegistrationOrder_in);
        outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.valid =
          !outC->p131_transitionOrder_mem.valid &
          (*p45_radioNetworkRegistrationOrder_in).valid;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        outC->handoverInprogress = kcg_false;
        /* 6 */ if ((*p45_radioNetworkRegistrationOrder_in).valid) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
            p45_radioNetworkRegistrationOrder_in);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
            &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        }
        if (outC->p131_transitionOrder_mem.valid) {
          outC->notReady = kcg_true;
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p131_transitionOrder_loc_IfBlock1,
            &outC->p131_transitionOrder_mem);
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          outC->notReady = kcg_false;
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->p131_transitionOrder_loc_IfBlock1,
            &last_p131_transitionOrder_loc_IfBlock1);
          outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          outC->p131_transitionOrder_mem.valid;
        break;
      
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** handOverSequencer_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

