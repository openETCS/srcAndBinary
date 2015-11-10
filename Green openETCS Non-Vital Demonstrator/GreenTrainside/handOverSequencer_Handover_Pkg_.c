/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handOverSequencer_Handover_Pkg_.h"

#ifndef KCG_USER_DEFINED_INIT
void handOverSequencer_init_Handover(outC_handOverSequencer_Handover *outC)
{
  static kcg_int i;
  
  outC->sendPositionReport_2_handingOve = kcg_true;
  outC->sendPositionReport_2_acceptingR = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->bufferInformationFromAcceptingR = kcg_true;
  outC->handoverInprogress = kcg_true;
  outC->handoverFinished = kcg_true;
  outC->notReady = kcg_true;
  outC->handOver_with_2_Sessions_SM_res = kcg_true;
  outC->handOver_with_1_Session_SM_rese = kcg_true;
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
    M_VERSION_Previous_versions_acc;
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
    unknownDirection_Obu_BasicTypes;
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->p131_transitionOrder_mem.BG_Common_Header.q_nvlocacc = 0;
  outC->p131_transitionOrder_mem.BG_Common_Header.noCoordinateSystemHasBeenAssign =
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
    M_ACK_No_acknowledgement_requir;
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
    M_VERSION_Previous_versions_acc;
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
  outC->handOver_with_1_Session_SM_stat = _127_SSM_st_WaitForTransitionOr;
  outC->p131_transitionOrder_loc_IfBloc.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.t_train_reference =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.nid_em = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.q_scale = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.d_sr = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.t_sh_rqst = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.d_ref = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.q_dir = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.radioMetadata.m_version = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.m_mcount = 0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.nid_c = 0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.nid_bg = 0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.q_nvlocacc = 0;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p131_transitionOrder_loc_IfBloc.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.radioDevice = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.nid_message = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.t_train = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.nid_lrbg = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.t_train_reference =
    0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.nid_em = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.d_sr = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.t_sh_rqst = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.d_ref = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.d_emergencystop = 0;
  outC->p131_transitionOrder_loc_IfBloc.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->p131_transitionOrder_loc_IfBloc.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p131_transitionOrder_loc_IfBloc.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p131_transitionOrder_loc_IfBloc.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p131_transitionOrder_loc_IfBloc.packets.PacketHeaders[i].startAddress =
      0;
    outC->p131_transitionOrder_loc_IfBloc.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p131_transitionOrder_loc_IfBloc.packets.PacketData[i] = 0;
  }
  outC->p131_transitionOrder_loc_IfBloc.sendingRBC.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBloc.sendingRBC.nid_c = 0;
  outC->p131_transitionOrder_loc_IfBloc.sendingRBC.rbc_id = 0;
  outC->p131_transitionOrder_loc_IfBloc.sendingRBC.device_id = 0;
  outC->_5_p45_radioNetworkRegistration.valid = kcg_true;
  outC->_5_p45_radioNetworkRegistration.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.t_train_reference =
    kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.nid_em = kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.q_scale = kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.d_sr = kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.t_sh_rqst = kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.d_ref = kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.q_dir = kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_5_p45_radioNetworkRegistration.radioMetadata.m_version = kcg_true;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.valid = kcg_true;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.m_mcount = 0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.nid_c = 0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.nid_bg = 0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.q_nvlocacc = 0;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_5_p45_radioNetworkRegistration.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.radioDevice = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.receivedSystemTime =
    0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.nid_message = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.t_train = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.nid_lrbg = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.t_train_reference =
    0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.nid_em = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.d_sr = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.t_sh_rqst = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.d_ref = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.d_emergencystop = 0;
  outC->_5_p45_radioNetworkRegistration.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->_5_p45_radioNetworkRegistration.packets.PacketHeaders[i].nid_packet =
      0;
    outC->_5_p45_radioNetworkRegistration.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->_5_p45_radioNetworkRegistration.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->_5_p45_radioNetworkRegistration.packets.PacketHeaders[i].startAddress =
      0;
    outC->_5_p45_radioNetworkRegistration.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->_5_p45_radioNetworkRegistration.packets.PacketData[i] = 0;
  }
  outC->_5_p45_radioNetworkRegistration.sendingRBC.valid = kcg_true;
  outC->_5_p45_radioNetworkRegistration.sendingRBC.nid_c = 0;
  outC->_5_p45_radioNetworkRegistration.sendingRBC.rbc_id = 0;
  outC->_5_p45_radioNetworkRegistration.sendingRBC.device_id = 0;
  outC->handOver_with_2_Sessions_SM_sta = SSM_st_WaitForTransitionOrder_I;
  outC->p45_radioNetworkRegistrationOrd.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.nid_em = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.q_scale = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.d_sr = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.t_sh_rqst = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.d_ref = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.q_dir = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrd.radioMetadata.m_version = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.m_mcount = 0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.nid_c = 0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.nid_bg = 0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.q_nvlocacc = 0;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrd.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.radioDevice = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.nid_message = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.t_train = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.nid_lrbg = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.t_train_reference =
    0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.nid_em = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.d_sr = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.t_sh_rqst = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.d_ref = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.d_emergencystop = 0;
  outC->p45_radioNetworkRegistrationOrd.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->p45_radioNetworkRegistrationOrd.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p45_radioNetworkRegistrationOrd.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrd.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrd.packets.PacketHeaders[i].startAddress =
      0;
    outC->p45_radioNetworkRegistrationOrd.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p45_radioNetworkRegistrationOrd.packets.PacketData[i] = 0;
  }
  outC->p45_radioNetworkRegistrationOrd.sendingRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrd.sendingRBC.nid_c = 0;
  outC->p45_radioNetworkRegistrationOrd.sendingRBC.rbc_id = 0;
  outC->p45_radioNetworkRegistrationOrd.sendingRBC.device_id = 0;
  outC->_6_p45_radioNetworkRegistration.valid = kcg_true;
  outC->_6_p45_radioNetworkRegistration.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.t_train_reference =
    kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.nid_em = kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.q_scale = kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.d_sr = kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.t_sh_rqst = kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.d_ref = kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.q_dir = kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_6_p45_radioNetworkRegistration.radioMetadata.m_version = kcg_true;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.valid = kcg_true;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.m_mcount = 0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.nid_c = 0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.nid_bg = 0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.q_nvlocacc = 0;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_6_p45_radioNetworkRegistration.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.radioDevice = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.receivedSystemTime =
    0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.nid_message = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.t_train = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.nid_lrbg = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.t_train_reference =
    0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.nid_em = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.d_sr = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.t_sh_rqst = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.d_ref = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.d_emergencystop = 0;
  outC->_6_p45_radioNetworkRegistration.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->_6_p45_radioNetworkRegistration.packets.PacketHeaders[i].nid_packet =
      0;
    outC->_6_p45_radioNetworkRegistration.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->_6_p45_radioNetworkRegistration.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->_6_p45_radioNetworkRegistration.packets.PacketHeaders[i].startAddress =
      0;
    outC->_6_p45_radioNetworkRegistration.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->_6_p45_radioNetworkRegistration.packets.PacketData[i] = 0;
  }
  outC->_6_p45_radioNetworkRegistration.sendingRBC.valid = kcg_true;
  outC->_6_p45_radioNetworkRegistration.sendingRBC.nid_c = 0;
  outC->_6_p45_radioNetworkRegistration.sendingRBC.rbc_id = 0;
  outC->_6_p45_radioNetworkRegistration.sendingRBC.device_id = 0;
  outC->_7_p45_radioNetworkRegistration.valid = kcg_true;
  outC->_7_p45_radioNetworkRegistration.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.t_train_reference =
    kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.nid_em = kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.q_scale = kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.d_sr = kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.t_sh_rqst = kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.d_ref = kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.q_dir = kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_7_p45_radioNetworkRegistration.radioMetadata.m_version = kcg_true;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.valid = kcg_true;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.m_mcount = 0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.nid_c = 0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.nid_bg = 0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.q_nvlocacc = 0;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_7_p45_radioNetworkRegistration.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.radioDevice = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.receivedSystemTime =
    0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.nid_message = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.t_train = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.nid_lrbg = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.t_train_reference =
    0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.nid_em = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.d_sr = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.t_sh_rqst = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.d_ref = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.d_emergencystop = 0;
  outC->_7_p45_radioNetworkRegistration.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->_7_p45_radioNetworkRegistration.packets.PacketHeaders[i].nid_packet =
      0;
    outC->_7_p45_radioNetworkRegistration.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->_7_p45_radioNetworkRegistration.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->_7_p45_radioNetworkRegistration.packets.PacketHeaders[i].startAddress =
      0;
    outC->_7_p45_radioNetworkRegistration.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->_7_p45_radioNetworkRegistration.packets.PacketData[i] = 0;
  }
  outC->_7_p45_radioNetworkRegistration.sendingRBC.valid = kcg_true;
  outC->_7_p45_radioNetworkRegistration.sendingRBC.nid_c = 0;
  outC->_7_p45_radioNetworkRegistration.sendingRBC.rbc_id = 0;
  outC->_7_p45_radioNetworkRegistration.sendingRBC.device_id = 0;
  outC->p42_sessionCmd_for_handingOverR.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverR.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.m_mcount = 0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.nid_c = 0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.nid_bg = 0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.q_nvlocacc = 0;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_handingOverR.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.radioDevice = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.nid_message = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.t_train = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.nid_lrbg = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.t_train_reference =
    0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.nid_em = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.d_sr = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.t_sh_rqst = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.d_ref = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.d_emergencystop = 0;
  outC->p42_sessionCmd_for_handingOverR.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  for (i = 0; i < 30; i++) {
    outC->p42_sessionCmd_for_handingOverR.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p42_sessionCmd_for_handingOverR.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_handingOverR.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p42_sessionCmd_for_handingOverR.packets.PacketHeaders[i].startAddress =
      0;
    outC->p42_sessionCmd_for_handingOverR.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->p42_sessionCmd_for_handingOverR.packets.PacketData[i] = 0;
  }
  outC->p42_sessionCmd_for_handingOverR.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverR.sendingRBC.nid_c = 0;
  outC->p42_sessionCmd_for_handingOverR.sendingRBC.rbc_id = 0;
  outC->p42_sessionCmd_for_handingOverR.sendingRBC.device_id = 0;
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
    M_VERSION_Previous_versions_acc;
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
    unknownDirection_Obu_BasicTypes;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_nvlocacc = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.noCoordinateSystemHasBeenAssign =
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
    M_ACK_No_acknowledgement_requir;
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
    M_VERSION_Previous_versions_acc;
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
void handOverSequencer_reset_Handove(outC_handOverSequencer_Handover *outC)
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
void handOverSequencer_Handover_Pkg_(
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrd,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOv,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_ *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_ *morcStatusFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::maxSafeFrontEndPassesHandOverLocation */ kcg_bool maxSafeFrontEndPassesHandOverLo,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::minSafeReadEndPassesHandOverLocation */ kcg_bool minSafeReadEndPassesHandOverLoc,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  outC_handOverSequencer_Handover *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp3;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp2;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
  static kcg_bool tmp1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
  static kcg_bool tmp;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool handOver_with_2_Sessions_SM_res;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions handOver_with_2_Sessions_SM_sta;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _4_last_p45_radioNetworkRegistr;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */
  static kcg_bool handingOverRBCReregistered_IfBl;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::unregistered_or_noReregisterRequired */
  static kcg_bool unregistered_or_noReregisterReq;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L28 */
  static kcg_bool _L28_IfBlock1_handOver_with_2_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L25 */
  static kcg_bool _L25_IfBlock1_handOver_with_2_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L26 */
  static P45_RadioNetworkRegistration_T_ _L26_IfBlock1_handOver_with_2_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L21 */
  static kcg_bool _L21_IfBlock1_handOver_with_2_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L18 */
  static kcg_bool _L18_IfBlock1_handOver_with_2_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */
  static kcg_bool sessionWithHandingOverRBC_termi;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */
  static kcg_bool terminationWithHandingOverRBCOr;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_2_Se;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L26 */
  static kcg_bool _L265_IfBlock1_handOver_with_2_;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L27 */
  static P42_SessionManagement_T_Packet_ _L27_IfBlock1_handOver_with_2_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L4 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L4_IfBlock1_handOver_with_2_Se;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool handOver_with_1_Session_SM_rese;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_ handOver_with_1_Session_SM_stat;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg last_p131_transitionOrder_loc_I;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg last_p45_radioNetworkRegistrati;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */
  static kcg_bool _6_handingOverRBCReregistered_I;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::unregistered_or_noReregisterRequired */
  static kcg_bool _7_unregistered_or_noReregister;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L38 */
  static kcg_bool _L38_IfBlock1_handOver_with_1_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L39 */
  static P45_RadioNetworkRegistration_T_ _L39_IfBlock1_handOver_with_1_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L44 */
  static kcg_bool _L44_IfBlock1_handOver_with_1_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L43 */
  static kcg_bool _L43_IfBlock1_handOver_with_1_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L53 */
  static kcg_bool _L53_IfBlock1_handOver_with_1_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */
  static kcg_bool _8_sessionWithHandingOverRBC_te;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */
  static kcg_bool _9_terminationWithHandingOverRB;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_1_Se;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L28 */
  static kcg_bool _L28_IfBlock1_handOver_with_1_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L29 */
  static P42_SessionManagement_T_Packet_ _L29_IfBlock1_handOver_with_1_S;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::sessionWithAcceptingRBCEstablished */
  static kcg_bool sessionWithAcceptingRBCEstablis;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility == isAbleToManageTwoSessions_Hando;
  /* last_init_ck_handoverFinished */ if (outC->init) {
    tmp = kcg_false;
  }
  else {
    tmp = outC->handoverFinished;
  }
  /* 1 */ if (tmp) {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      &outC->p131_transitionOrder_mem,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
  else /* 4 */ if ((*p131_transitionOrder).valid) {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      &outC->p131_transitionOrder_mem,
      p131_transitionOrder);
  }
  else /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      &outC->p131_transitionOrder_mem,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
  outC->init = kcg_false;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* last_init_ck_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ if (outC->init4) {
      handOver_with_2_Sessions_SM_sta = SSM_st_WaitForTransitionOrder_I;
      handOver_with_2_Sessions_SM_res = kcg_false;
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_4_last_p45_radioNetworkRegistr,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    else {
      handOver_with_2_Sessions_SM_sta = outC->handOver_with_2_Sessions_SM_sta;
      handOver_with_2_Sessions_SM_res = outC->handOver_with_2_Sessions_SM_res;
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &_4_last_p45_radioNetworkRegistr,
        &outC->p45_radioNetworkRegistrationOrd);
    }
    outC->init4 = kcg_false;
    /* act_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_sta) {
      case SSM_st_WaitForHandingOverRBCReg :
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingR = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        handingOverRBCReregistered_IfBl = mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p45_radioNetworkRegistrationOrd,
          &_4_last_p45_radioNetworkRegistr);
        if ((*p131_transitionOrder).valid) {
          outC->handoverFinished = kcg_false;
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_res = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForTransitionOrder_I;
        }
        else {
          if (handingOverRBCReregistered_IfBl) {
            outC->handoverFinished = kcg_true;
            outC->notReady = kcg_true;
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForTransitionOrder_I;
          }
          else {
            outC->handoverFinished = kcg_false;
            outC->notReady = kcg_false;
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForHandingOverRBCReg;
          }
          outC->handOver_with_2_Sessions_SM_res =
            handingOverRBCReregistered_IfBl;
        }
        break;
      case SSM_st_ReregisterHandingOverRBC :
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingR = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        outC->handoverFinished = kcg_false;
        /* 2 */
        Read_P045_TM(
          &_4_last_p45_radioNetworkRegistr.packets,
          &_L25_IfBlock1_handOver_with_2_S,
          &_L26_IfBlock1_handOver_with_2_S);
        _L21_IfBlock1_handOver_with_2_S = mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        _L18_IfBlock1_handOver_with_2_S =
          (*morcStatusFromHandingOverRBC).registration.status ==
          mrs_unregistered_RCM_Types_Pkg;
        _L28_IfBlock1_handOver_with_2_S =
          _4_last_p45_radioNetworkRegistr.valid &
          _L25_IfBlock1_handOver_with_2_S &
          (((_L26_IfBlock1_handOver_with_2_S.nid_mn !=
                (*morcStatusFromHandingOverRBC).registration.nid_mn) &
              _L21_IfBlock1_handOver_with_2_S) |
            _L18_IfBlock1_handOver_with_2_S);
        unregistered_or_noReregisterReq = (!_L28_IfBlock1_handOver_with_2_S &
            _L21_IfBlock1_handOver_with_2_S) |
          (_L28_IfBlock1_handOver_with_2_S & _L18_IfBlock1_handOver_with_2_S);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        if (handOver_with_2_Sessions_SM_res) {
          outC->init3 = kcg_true;
        }
        /* 1 */ if (outC->init3) {
          tmp1 = kcg_true;
        }
        else {
          tmp1 = kcg_false;
        }
        /* 10 */ if (_L28_IfBlock1_handOver_with_2_S & tmp1) {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->_7_p45_radioNetworkRegistration,
            &_4_last_p45_radioNetworkRegistr);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->_7_p45_radioNetworkRegistration,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pk);
        }
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p45_radioNetworkRegistrationOrd,
          &_4_last_p45_radioNetworkRegistr);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_res = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForTransitionOrder_I;
        }
        else {
          if (unregistered_or_noReregisterReq) {
            outC->notReady = kcg_true;
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForHandingOverRBCReg;
          }
          else {
            outC->notReady = kcg_false;
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_ReregisterHandingOverRBC;
          }
          outC->handOver_with_2_Sessions_SM_res =
            unregistered_or_noReregisterReq;
        }
        outC->init3 = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCTer :
        sessionWithHandingOverRBC_termi =
          ((*morcStatusFromHandingOverRBC).connection.status ==
            mcs_disconnected_RCM_Types_Pkg) &
          ((*morcStatusFromHandingOverRBC).session.phase ==
            sp_terminated_RCM_Session_Types);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingR = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p45_radioNetworkRegistrationOrd,
          &_4_last_p45_radioNetworkRegistr);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_res = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForTransitionOrder_I;
        }
        else {
          /* cb_anon_sm */ if (sessionWithHandingOverRBC_termi) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (sessionWithHandingOverRBC_termi) {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_ReregisterHandingOverRBC;
          }
          else {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForHandingOverRBCTer;
          }
          outC->handOver_with_2_Sessions_SM_res =
            sessionWithHandingOverRBC_termi;
        }
        break;
      case SSM_st_WaitForTerminationOrderF :
        /* 3 */
        checkSessionCmd_Handover_Pkg_ha(
          p42_terminateCmd_from_handingOv,
          morcStatusFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_2_Se);
        /* 1 */
        Read_P042_TM(
          &_L3_IfBlock1_handOver_with_2_Se.packets,
          &_L265_IfBlock1_handOver_with_2_,
          &_L27_IfBlock1_handOver_with_2_S);
        terminationWithHandingOverRBCOr =
          _L3_IfBlock1_handOver_with_2_Se.valid &
          _L265_IfBlock1_handOver_with_2_ &
          (_L27_IfBlock1_handOver_with_2_S.q_rbc ==
            Q_RBC_Terminate_communication_s);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingR = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        /* 1 */ if (terminationWithHandingOverRBCOr) {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p42_sessionCmd_for_handingOverR,
            &_L3_IfBlock1_handOver_with_2_Se);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p42_sessionCmd_for_handingOverR,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pk);
        }
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p45_radioNetworkRegistrationOrd,
          &_4_last_p45_radioNetworkRegistr);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_res = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForTransitionOrder_I;
        }
        else {
          /* cb_anon_sm */ if (terminationWithHandingOverRBCOr) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (terminationWithHandingOverRBCOr) {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForHandingOverRBCTer;
          }
          else {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForTerminationOrderF;
          }
          outC->handOver_with_2_Sessions_SM_res =
            terminationWithHandingOverRBCOr;
        }
        break;
      case SSM_st_WaitForSessionWithAccept :
        outC->handOver_with_2_Sessions_SM_res =
          (*morcStatusFromAcceptingRBC).session.phase ==
          sp_maintaining_RCM_Session_Type;
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingR = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->sendTrainData_2_acceptingRBC =
          outC->handOver_with_2_Sessions_SM_res & !((M_MODE_Sleeping == mode) |
            (mode == M_MODE_Non_Leading));
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p45_radioNetworkRegistrationOrd,
          &_4_last_p45_radioNetworkRegistr);
        if (outC->handOver_with_2_Sessions_SM_res) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForMaxSafeFrontEndPa;
        }
        else {
          outC->notReady = kcg_false;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForSessionWithAccept;
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPas :
        if (handOver_with_2_Sessions_SM_res) {
          /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
          /* 9 */ RisingEdge_reset_digital(&outC->Context_9);
        }
        /* 8 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Type) &
              minSafeReadEndPassesHandOverLoc),
          &outC->Context_8);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingR = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_true;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->sendPositionReport_2_handingOve = outC->Context_8.RE_Output;
        /* 9 */
        RisingEdge_digital(
          (kcg_bool)
            (minSafeReadEndPassesHandOverLoc &
              ((*morcStatusFromAcceptingRBC).session.phase ==
                sp_maintaining_RCM_Session_Type)),
          &outC->Context_9);
        outC->sendPositionReport_2_acceptingR = outC->Context_9.RE_Output;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p45_radioNetworkRegistrationOrd,
          &_4_last_p45_radioNetworkRegistr);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_res = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForTransitionOrder_I;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_8.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_8.RE_Output) {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForTerminationOrderF;
          }
          else {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForMinSafeRearEndPas;
          }
          outC->handOver_with_2_Sessions_SM_res = outC->Context_8.RE_Output;
        }
        break;
      case SSM_st_WaitForMaxSafeFrontEndPa :
        if (handOver_with_2_Sessions_SM_res) {
          /* 5 */ RisingEdge_reset_digital(&outC->Context_5);
          /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
        }
        /* 5 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Type) &
              maxSafeFrontEndPassesHandOverLo),
          &outC->Context_5);
        outC->handoverInprogress = kcg_true;
        outC->bufferInformationFromAcceptingR = kcg_true;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->sendPositionReport_2_handingOve = outC->Context_5.RE_Output;
        /* 4 */
        RisingEdge_digital(
          (kcg_bool)
            (maxSafeFrontEndPassesHandOverLo &
              ((*morcStatusFromAcceptingRBC).session.phase ==
                sp_maintaining_RCM_Session_Type)),
          &outC->Context_4);
        outC->sendPositionReport_2_acceptingR = outC->Context_4.RE_Output;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p45_radioNetworkRegistrationOrd,
          &_4_last_p45_radioNetworkRegistr);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_res = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForTransitionOrder_I;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_5.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_5.RE_Output) {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForMinSafeRearEndPas;
          }
          else {
            outC->handOver_with_2_Sessions_SM_sta =
              SSM_st_WaitForMaxSafeFrontEndPa;
          }
          outC->handOver_with_2_Sessions_SM_res = outC->Context_5.RE_Output;
        }
        break;
      case SSM_st_WaitForTransitionOrder_I :
        /* 2 */
        p131_rbcTransitionOrder_2_p42_e(&outC->p131_transitionOrder_mem, &tmp3);
        /* 2 */
        checkSessionCmd_Handover_Pkg_ha(
          &tmp3,
          morcStatusFromAcceptingRBC,
          &_L4_IfBlock1_handOver_with_2_Se);
        outC->bufferInformationFromAcceptingR = kcg_false;
        outC->useInformationFromAcceptingRBC = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        outC->handoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_acceptingRBC,
          &_L4_IfBlock1_handOver_with_2_Se);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        /* 9 */ if ((*p45_radioNetworkRegistrationOrd).valid) {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p45_radioNetworkRegistrationOrd,
            p45_radioNetworkRegistrationOrd);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p45_radioNetworkRegistrationOrd,
            &_4_last_p45_radioNetworkRegistr);
        }
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          &outC->p45_radioNetworkRegistrationOrd);
        outC->handoverInprogress = _L4_IfBlock1_handOver_with_2_Se.valid;
        if (_L4_IfBlock1_handOver_with_2_Se.valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForSessionWithAccept;
        }
        else {
          outC->notReady = kcg_false;
          outC->handOver_with_2_Sessions_SM_sta =
            SSM_st_WaitForTransitionOrder_I;
        }
        outC->handOver_with_2_Sessions_SM_res =
          _L4_IfBlock1_handOver_with_2_Se.valid;
        break;
      
    }
  }
  else {
    outC->bufferInformationFromAcceptingR = kcg_false;
    outC->useInformationFromAcceptingRBC = kcg_false;
    /* last_init_ck_p131_transitionOrder_loc */ if (outC->init2) {
      handOver_with_1_Session_SM_stat = _127_SSM_st_WaitForTransitionOr;
      handOver_with_1_Session_SM_rese = kcg_false;
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &last_p45_radioNetworkRegistrati,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &last_p131_transitionOrder_loc_I,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    }
    else {
      handOver_with_1_Session_SM_stat = outC->handOver_with_1_Session_SM_stat;
      handOver_with_1_Session_SM_rese = outC->handOver_with_1_Session_SM_rese;
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &last_p45_radioNetworkRegistrati,
        &outC->_5_p45_radioNetworkRegistration);
      kcg_copy_msgFromTrack_T_RCM_Msg(
        &last_p131_transitionOrder_loc_I,
        &outC->p131_transitionOrder_loc_IfBloc);
    }
    kcg_copy_msgFromTrack_T_RCM_Msg(
      &outC->p42_sessionCmd_for_acceptingRBC,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
    outC->init2 = kcg_false;
    /* act_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_stat) {
      case SSM_st_EstablishSessionWithAcce :
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        /* 8 */
        p131_rbcTransitionOrder_2_p42_e(
          &last_p131_transitionOrder_loc_I,
          &tmp2);
        /* 12 */
        checkSessionCmd_Handover_Pkg_ha(
          &tmp2,
          morcStatusFromHandingOverRBC,
          &outC->p42_sessionCmd_for_handingOverR);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->handOver_with_1_Session_SM_rese = kcg_true;
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          &last_p131_transitionOrder_loc_I);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          &last_p45_radioNetworkRegistrati);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _124_SSM_st_WaitForSessionWithA;
        }
        break;
      case _121_SSM_st_WaitForHandingOverR :
        outC->handoverFinished = kcg_false;
        _6_handingOverRBCReregistered_I = mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          &last_p131_transitionOrder_loc_I);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          &last_p45_radioNetworkRegistrati);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_rese = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          if (_6_handingOverRBCReregistered_I) {
            outC->notReady = kcg_true;
            outC->handOver_with_1_Session_SM_stat =
              SSM_st_EstablishSessionWithAcce;
          }
          else {
            outC->notReady = kcg_false;
            outC->handOver_with_1_Session_SM_stat =
              _121_SSM_st_WaitForHandingOverR;
          }
          outC->handOver_with_1_Session_SM_rese =
            _6_handingOverRBCReregistered_I;
        }
        break;
      case SSM_st_RegisterAcceptingRBC_IfB :
        outC->handoverFinished = kcg_false;
        /* 1 */
        Read_P045_TM(
          &last_p45_radioNetworkRegistrati.packets,
          &_L38_IfBlock1_handOver_with_1_S,
          &_L39_IfBlock1_handOver_with_1_S);
        _L43_IfBlock1_handOver_with_1_S = mrs_registered_RCM_Types_Pkg ==
          (*morcStatusFromHandingOverRBC).registration.status;
        _L44_IfBlock1_handOver_with_1_S =
          (*morcStatusFromHandingOverRBC).registration.status ==
          mrs_unregistered_RCM_Types_Pkg;
        _L53_IfBlock1_handOver_with_1_S =
          last_p45_radioNetworkRegistrati.valid &
          _L38_IfBlock1_handOver_with_1_S &
          (((_L39_IfBlock1_handOver_with_1_S.nid_mn !=
                (*morcStatusFromHandingOverRBC).registration.nid_mn) &
              _L43_IfBlock1_handOver_with_1_S) |
            _L44_IfBlock1_handOver_with_1_S);
        _7_unregistered_or_noReregister = (!_L53_IfBlock1_handOver_with_1_S &
            _L43_IfBlock1_handOver_with_1_S) |
          (_L53_IfBlock1_handOver_with_1_S & _L44_IfBlock1_handOver_with_1_S);
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        if (handOver_with_1_Session_SM_rese) {
          outC->init1 = kcg_true;
        }
        /* 3 */ if (outC->init1) {
          tmp = kcg_true;
        }
        else {
          tmp = kcg_false;
        }
        /* 8 */ if (_L53_IfBlock1_handOver_with_1_S & tmp) {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->_6_p45_radioNetworkRegistration,
            &last_p45_radioNetworkRegistrati);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->_6_p45_radioNetworkRegistration,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pk);
        }
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          &last_p131_transitionOrder_loc_I);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          &last_p45_radioNetworkRegistrati);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_rese = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          if (_7_unregistered_or_noReregister) {
            outC->notReady = kcg_true;
            outC->handOver_with_1_Session_SM_stat =
              _121_SSM_st_WaitForHandingOverR;
          }
          else {
            outC->notReady = kcg_false;
            outC->handOver_with_1_Session_SM_stat =
              SSM_st_RegisterAcceptingRBC_IfB;
          }
          outC->handOver_with_1_Session_SM_rese =
            _7_unregistered_or_noReregister;
        }
        outC->init1 = kcg_false;
        break;
      case _122_SSM_st_WaitForHandingOverR :
        _8_sessionWithHandingOverRBC_te =
          (*morcStatusFromHandingOverRBC).session.phase ==
          sp_terminated_RCM_Session_Types;
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          &last_p131_transitionOrder_loc_I);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          &last_p45_radioNetworkRegistrati);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_rese = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          /* cb_anon_sm */ if (_8_sessionWithHandingOverRBC_te) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (_8_sessionWithHandingOverRBC_te) {
            outC->handOver_with_1_Session_SM_stat =
              SSM_st_RegisterAcceptingRBC_IfB;
          }
          else {
            outC->handOver_with_1_Session_SM_stat =
              _122_SSM_st_WaitForHandingOverR;
          }
          outC->handOver_with_1_Session_SM_rese =
            _8_sessionWithHandingOverRBC_te;
        }
        break;
      case _123_SSM_st_WaitForTerminationO :
        /* 11 */
        checkSessionCmd_Handover_Pkg_ha(
          p42_terminateCmd_from_handingOv,
          morcStatusFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_1_Se);
        /* 2 */
        Read_P042_TM(
          &_L3_IfBlock1_handOver_with_1_Se.packets,
          &_L28_IfBlock1_handOver_with_1_S,
          &_L29_IfBlock1_handOver_with_1_S);
        _9_terminationWithHandingOverRB =
          _L3_IfBlock1_handOver_with_1_Se.valid &
          _L28_IfBlock1_handOver_with_1_S &
          (_L29_IfBlock1_handOver_with_1_S.q_rbc ==
            Q_RBC_Terminate_communication_s);
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        /* 5 */ if (_9_terminationWithHandingOverRB) {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p42_sessionCmd_for_handingOverR,
            &_L3_IfBlock1_handOver_with_1_Se);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p42_sessionCmd_for_handingOverR,
            (msgFromTrack_T_RCM_MsgTypes_Pkg *)
              &cNoMessageFromTrack_Handover_Pk);
        }
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->handoverInprogress = _9_terminationWithHandingOverRB;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          &last_p131_transitionOrder_loc_I);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          &last_p45_radioNetworkRegistrati);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_rese = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          /* cb_anon_sm */ if (_9_terminationWithHandingOverRB) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (_9_terminationWithHandingOverRB) {
            outC->handOver_with_1_Session_SM_stat =
              _122_SSM_st_WaitForHandingOverR;
          }
          else {
            outC->handOver_with_1_Session_SM_stat =
              _123_SSM_st_WaitForTerminationO;
          }
          outC->handOver_with_1_Session_SM_rese =
            _9_terminationWithHandingOverRB;
        }
        break;
      case _124_SSM_st_WaitForSessionWithA :
        sessionWithAcceptingRBCEstablis =
          (*morcStatusFromHandingOverRBC).session.phase ==
          sp_maintaining_RCM_Session_Type;
        outC->sendPositionReport_2_handingOve = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->sendPositionReport_2_acceptingR = sessionWithAcceptingRBCEstablis;
        outC->sendTrainData_2_acceptingRBC = sessionWithAcceptingRBCEstablis &
          !((M_MODE_Sleeping == mode) | (mode == M_MODE_Non_Leading));
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        if ((*p131_transitionOrder).valid) {
          outC->handoverFinished = kcg_false;
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_rese = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          /* cb_anon_sm */ if (sessionWithAcceptingRBCEstablis) {
            outC->handoverFinished = kcg_true;
            outC->notReady = kcg_true;
          }
          else {
            outC->handoverFinished = kcg_false;
            outC->notReady = kcg_false;
          }
          if (sessionWithAcceptingRBCEstablis) {
            outC->handOver_with_1_Session_SM_stat =
              _127_SSM_st_WaitForTransitionOr;
          }
          else {
            outC->handOver_with_1_Session_SM_stat =
              _124_SSM_st_WaitForSessionWithA;
          }
          outC->handOver_with_1_Session_SM_rese =
            sessionWithAcceptingRBCEstablis;
        }
        break;
      case _125_SSM_st_WaitForMinSafeRearE :
        if (handOver_with_1_Session_SM_rese) {
          /* 28 */ RisingEdge_reset_digital(&outC->Context_28);
        }
        /* 28 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Type) &
              minSafeReadEndPassesHandOverLoc),
          &outC->Context_28);
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->sendPositionReport_2_handingOve = outC->Context_28.RE_Output;
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          &last_p131_transitionOrder_loc_I);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          &last_p45_radioNetworkRegistrati);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_rese = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_28.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_28.RE_Output) {
            outC->handOver_with_1_Session_SM_stat =
              _123_SSM_st_WaitForTerminationO;
          }
          else {
            outC->handOver_with_1_Session_SM_stat =
              _125_SSM_st_WaitForMinSafeRearE;
          }
          outC->handOver_with_1_Session_SM_rese = outC->Context_28.RE_Output;
        }
        break;
      case _126_SSM_st_WaitForMaxSafeFront :
        if (handOver_with_1_Session_SM_rese) {
          /* 26 */ RisingEdge_reset_digital(&outC->Context_26);
        }
        /* 26 */
        RisingEdge_digital(
          (kcg_bool)
            (((*morcStatusFromHandingOverRBC).session.phase ==
                sp_maintaining_RCM_Session_Type) &
              maxSafeFrontEndPassesHandOverLo),
          &outC->Context_26);
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->sendPositionReport_2_handingOve = outC->Context_26.RE_Output;
        outC->handoverInprogress = kcg_true;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p131_transitionOrder_loc_IfBloc,
          &last_p131_transitionOrder_loc_I);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_5_p45_radioNetworkRegistration,
          &last_p45_radioNetworkRegistrati);
        if ((*p131_transitionOrder).valid) {
          outC->notReady = kcg_true;
          outC->handOver_with_1_Session_SM_rese = kcg_true;
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        else {
          /* cb_anon_sm */ if (outC->Context_26.RE_Output) {
            outC->notReady = kcg_true;
          }
          else {
            outC->notReady = kcg_false;
          }
          if (outC->Context_26.RE_Output) {
            outC->handOver_with_1_Session_SM_stat =
              _125_SSM_st_WaitForMinSafeRearE;
          }
          else {
            outC->handOver_with_1_Session_SM_stat =
              _126_SSM_st_WaitForMaxSafeFront;
          }
          outC->handOver_with_1_Session_SM_rese = outC->Context_26.RE_Output;
        }
        break;
      case _127_SSM_st_WaitForTransitionOr :
        outC->handoverFinished = kcg_false;
        outC->sendTrainData_2_acceptingRBC = kcg_false;
        outC->sendPositionReport_2_acceptingR = kcg_false;
        outC->sendPositionReport_2_handingOve = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->p42_sessionCmd_for_handingOverR,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_7_p45_radioNetworkRegistration,
          p45_radioNetworkRegistrationOrd);
        outC->_7_p45_radioNetworkRegistration.valid =
          !outC->p131_transitionOrder_mem.valid &
          (*p45_radioNetworkRegistrationOrd).valid;
        kcg_copy_msgFromTrack_T_RCM_Msg(
          &outC->_6_p45_radioNetworkRegistration,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
        outC->handoverInprogress = kcg_false;
        /* 6 */ if ((*p45_radioNetworkRegistrationOrd).valid) {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->_5_p45_radioNetworkRegistration,
            p45_radioNetworkRegistrationOrd);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->_5_p45_radioNetworkRegistration,
            &last_p45_radioNetworkRegistrati);
        }
        if (outC->p131_transitionOrder_mem.valid) {
          outC->notReady = kcg_true;
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p131_transitionOrder_loc_IfBloc,
            &outC->p131_transitionOrder_mem);
          outC->handOver_with_1_Session_SM_stat =
            _126_SSM_st_WaitForMaxSafeFront;
        }
        else {
          outC->notReady = kcg_false;
          kcg_copy_msgFromTrack_T_RCM_Msg(
            &outC->p131_transitionOrder_loc_IfBloc,
            &last_p131_transitionOrder_loc_I);
          outC->handOver_with_1_Session_SM_stat =
            _127_SSM_st_WaitForTransitionOr;
        }
        outC->handOver_with_1_Session_SM_rese =
          outC->p131_transitionOrder_mem.valid;
        break;
      
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** handOverSequencer_Handover_Pkg_.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

