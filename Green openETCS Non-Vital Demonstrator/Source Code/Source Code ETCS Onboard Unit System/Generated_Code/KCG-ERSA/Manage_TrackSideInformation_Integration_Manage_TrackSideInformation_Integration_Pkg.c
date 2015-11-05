/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->ApplyServiceBrake = kcg_true;
  outC->BadBaliseMessageToDMI = kcg_true;
  outC->rem_transitionPositionPassed = kcg_true;
  outC->init = kcg_true;
  for (i = 0; i < 5; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_main = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].l_section = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_sectiontimerstoploc_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_12[i].v_releaseol = 0;
  }
  outC->Data_to_From_Track_Packets_at_ML.P_135.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_135.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_137.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_137.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->Data_to_From_Track_Packets_at_ML.P_138.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_138.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_138.d_startreverse = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_138.l_reversearea = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_139.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_139.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_139.d_reverse = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_139.v_reverse = 0;
  for (i = 0; i < 5; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].l_section = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].d_sectiontimerstoploc_k = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_15[i].v_releaseol = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_21[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i].d_gradient = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i].q_gdir = Q_GDIR_downhill;
    outC->Data_to_From_Track_Packets_at_ML.P_21[i].g_a = 0;
  }
  outC->Data_to_From_Track_Packets_at_ML.P_27.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_27.d_static = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_27.v_static = 0;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i].nc_diff = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[i].v_diff = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].d_static = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].v_static = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i1 = 0; i1 < 7; i1++) {
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].valid =
        kcg_true;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].nc_diff =
        0;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].v_diff =
        0;
    }
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_41[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i].d_leveltr = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i].nid_ntc = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[i].l_ackleveltr = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_46[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_46[i].nid_ntc = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_63[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i].nid_c = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_63[i].nid_bg = 0;
  }
  for (i = 0; i < 3; i++) {
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].d_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].m_mamode = M_MAMODE_On_Sight;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].v_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].l_mamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].l_ackmamode = 0;
    outC->Data_to_From_Track_Packets_at_ML.P_80[i].q_mamode =
      Q_MAMODE_as_the_EOA;
  }
  outC->Data_to_From_Track_Packets_at_ML.LRBG = 0;
  outC->Data_to_From_Track_Packets_at_ML.referenceLocation = 0;
  outC->outputMessageForRadioAck.valid = kcg_true;
  outC->outputMessageForRadioAck.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessageForRadioAck.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.nid_em = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.q_scale = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.d_sr = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.d_ref = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.q_dir = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessageForRadioAck.radioMetadata.m_version = kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.valid = kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->outputMessageForRadioAck.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessageForRadioAck.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessageForRadioAck.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->outputMessageForRadioAck.BG_Common_Header.m_mcount = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.nid_c = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.nid_bg = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessageForRadioAck.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessageForRadioAck.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outputMessageForRadioAck.BG_Common_Header.q_nvlocacc = 0;
  outC->outputMessageForRadioAck.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessageForRadioAck.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->outputMessageForRadioAck.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessageForRadioAck.Radio_Common_Header.radioDevice = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.receivedSystemTime = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.nid_message = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.t_train = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessageForRadioAck.Radio_Common_Header.nid_lrbg = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.t_train_reference = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.nid_em = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->outputMessageForRadioAck.Radio_Common_Header.d_sr = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.t_sh_rqst = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.d_ref = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessageForRadioAck.Radio_Common_Header.d_emergencystop = 0;
  outC->outputMessageForRadioAck.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->outputMessageForRadioAck.packets.PacketHeaders[i].nid_packet = 0;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i].valid = kcg_true;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i].startAddress = 0;
    outC->outputMessageForRadioAck.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->outputMessageForRadioAck.packets.PacketData[i] = 0;
  }
  outC->outputMessageForRadioAck.sendingRBC.valid = kcg_true;
  outC->outputMessageForRadioAck.sendingRBC.nid_c = 0;
  outC->outputMessageForRadioAck.sendingRBC.rbc_id = 0;
  outC->outputMessageForRadioAck.sendingRBC.device_id = 0;
  outC->forLevelManagement.P12_received = kcg_true;
  outC->forLevelManagement.P15_received = kcg_true;
  outC->forLevelManagement.P21_received = kcg_true;
  outC->forLevelManagement.P27_received = kcg_true;
  outC->outCheckErrors.linkedBGError = kcg_true;
  outC->outCheckErrors.unlinkedBGError = kcg_true;
  outC->outCheckErrors.BG_versionIncompatible = kcg_true;
  outC->outCheckErrors.radioSequenceError = kcg_true;
  outC->outCheckErrors.tNvContactError = kcg_true;
  outC->outCheckErrors.otherTimingError = kcg_true;
  outC->outCheckErrors.radioMessageConsistencyError = kcg_true;
  outC->outCheckErrors.nid_c = 0;
  outC->outCheckErrors.nid_errorbg = 0;
  outC->outputMessage.valid = kcg_true;
  outC->outputMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessage.radioMetadata.nid_em = kcg_true;
  outC->outputMessage.radioMetadata.q_scale = kcg_true;
  outC->outputMessage.radioMetadata.d_sr = kcg_true;
  outC->outputMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessage.radioMetadata.d_ref = kcg_true;
  outC->outputMessage.radioMetadata.q_dir = kcg_true;
  outC->outputMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessage.radioMetadata.m_version = kcg_true;
  outC->outputMessage.BG_Common_Header.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outputMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outputMessage.BG_Common_Header.m_mcount = 0;
  outC->outputMessage.BG_Common_Header.nid_c = 0;
  outC->outputMessage.BG_Common_Header.nid_bg = 0;
  outC->outputMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outputMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outputMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outputMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessage.Radio_Common_Header.radioDevice = 0;
  outC->outputMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outputMessage.Radio_Common_Header.nid_message = 0;
  outC->outputMessage.Radio_Common_Header.t_train = 0;
  outC->outputMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outputMessage.Radio_Common_Header.t_train_reference = 0;
  outC->outputMessage.Radio_Common_Header.nid_em = 0;
  outC->outputMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outputMessage.Radio_Common_Header.d_sr = 0;
  outC->outputMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->outputMessage.Radio_Common_Header.d_ref = 0;
  outC->outputMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outputMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->outputMessage.packets.PacketHeaders[i].nid_packet = 0;
    outC->outputMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outputMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outputMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outputMessage.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->outputMessage.packets.PacketData[i] = 0;
  }
  outC->outputMessage.sendingRBC.valid = kcg_true;
  outC->outputMessage.sendingRBC.nid_c = 0;
  outC->outputMessage.sendingRBC.rbc_id = 0;
  outC->outputMessage.sendingRBC.device_id = 0;
  /* 3 */ InformationFilter_init_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */ combineForLevelChange_init_xdebugSupport_Pkg(&outC->_2_Context_1);
  /* 1 */ CheckEuroRadioMessage_init_CheckEuroradioMessage(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  outC->init = kcg_true;
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */ combineForLevelChange_reset_xdebugSupport_Pkg(&outC->_2_Context_1);
  /* 1 */
  CheckEuroRadioMessage_reset_CheckEuroradioMessage(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */ kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */ kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::intrainVersion */ M_VERSION intrainVersion,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */ connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */ kcg_bool inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static positionedBG_T_TrainPosition_Types_Pck tmp4;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool tmp3;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool tmp2;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool tmp1;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_ERRORBG_BG_Types_Pkg tmp;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _6_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _7_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _8_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static kcg_bool _9_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_C op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
  static NID_ERRORBG_BG_Types_Pkg _5_op_call;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doBaliseBranch */
  static kcg_bool doBaliseBranch;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doRadio */
  static kcg_bool doRadio;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPositionTest */
  static trainPosition_T_TrainPosition_Types_Pck trainPositionTest;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L206 */
  static ReceivedMessage_T_Common_Types_Pkg _L206;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L205 */
  static ReceivedMessage_T_Common_Types_Pkg _L205;
  
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    reset,
    API_trackSide_Message,
    ActualOdometry,
    &outC->Context_1);
  doRadio = outC->Context_1.outTrackMessage_for_check.msg_type ==
    msrc_Euroradio_Common_Types_Pkg;
  /* ck_doRadio */ if (doRadio) {
    /* 1 */
    CheckEuroRadioMessage_CheckEuroradioMessage(
      &outC->Context_1.outTrackMessage_for_check,
      tNvContact,
      lastRelevantEventTimestamp,
      radioStatus,
      fullChecks,
      &outC->_1_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L205,
      &outC->_1_Context_1.checkedMessage);
    _9_op_call = outC->_1_Context_1.radioSequenceError;
    _8_op_call = outC->_1_Context_1.tNvContactError;
    _7_op_call = outC->_1_Context_1.otherTimingError;
    _6_op_call = outC->_1_Context_1.radioMessageConsistencyError;
  }
  doBaliseBranch = outC->Context_1.outTrackMessage_for_check.valid &
    (msrc_Eurobalise_Common_Types_Pkg ==
      outC->Context_1.outTrackMessage_for_check.msg_type);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &trainPositionTest,
    trainPosition);
  trainPositionTest.trainPositionIsUnknown = kcg_false;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp4,
    &(*trainPosition).LRBG);
  tmp4.valid = kcg_true;
  /* ck_doBaliseBranch */ if (doBaliseBranch) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      inAnnouncedBGs,
      &trainPositionTest,
      (*modeAndLevel).Mode,
      &outC->Context_1.outTrackMessage_for_check,
      q_nvlocacc,
      intrainVersion,
      &_L206,
      &outC->ApplyServiceBrake,
      &outC->BadBaliseMessageToDMI,
      &outC->outCheckErrors.linkedBGError,
      &tmp1,
      &tmp3,
      &_5_op_call,
      &op_call);
  }
  else {
    outC->ApplyServiceBrake = kcg_false;
    outC->BadBaliseMessageToDMI = kcg_false;
    /* ck_doRadio */ if (doRadio) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L206, &_L205);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_L206,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
    tmp3 = kcg_false;
    tmp1 = kcg_false;
    outC->outCheckErrors.linkedBGError = kcg_false;
  }
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &_L206,
    &tmp4,
    inAnnouncedBGs,
    &trainPositionTest,
    &outC->outputMessageForRadioAck);
  /* 1 */
  bypassGeneralMessage_xdebugSupport_Pkg(
    &outC->outputMessageForRadioAck,
    &_L205,
    &_L206);
  /* last_init_ck_transitionPositionPassed */ if (outC->init) {
    outC->init = kcg_false;
    tmp2 = kcg_false;
  }
  else {
    tmp2 = outC->rem_transitionPositionPassed;
  }
  /* 1 */
  combineForLevelChange_xdebugSupport_Pkg(
    &outC->outputMessageForRadioAck,
    modeAndLevel,
    tmp2,
    trainPosition,
    inFilterEvents,
    &outC->_2_Context_1);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->forLevelManagement,
    &outC->_2_Context_1.forLevelManagement);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML,
    &outC->_2_Context_1.Data_to_From_Track_Packets_at_ML);
  /* 3 */
  InformationFilter_InformationFilter_Pkg(
    &_L205,
    (*modeAndLevel).level,
    (*modeAndLevel).Mode,
    0,
    &outC->_2_Context_1.outFilterEvents,
    inActiveCab,
    inTrainDataValid,
    &outC->Context_3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessage,
    &outC->Context_3.outMessage);
  outC->outCheckErrors.unlinkedBGError = tmp1;
  outC->outCheckErrors.BG_versionIncompatible = tmp3;
  /* ck_doRadio */ if (doRadio) {
    outC->outCheckErrors.radioSequenceError = _9_op_call;
    tmp2 = _8_op_call;
  }
  else {
    tmp2 = kcg_false;
    outC->outCheckErrors.radioSequenceError = kcg_false;
  }
  outC->outCheckErrors.tNvContactError = tmp2 | /* 1 */
    ContinuousTimeoutCheck_CheckEuroradioMessage(
      (*ActualOdometry).timestamp,
      tNvContact,
      lastRelevantEventTimestamp,
      fullChecks);
  /* ck_doRadio */ if (doRadio) {
    outC->outCheckErrors.otherTimingError = _7_op_call;
    tmp1 = _6_op_call;
  }
  else {
    tmp1 = kcg_false;
    outC->outCheckErrors.otherTimingError = kcg_false;
  }
  outC->outCheckErrors.radioMessageConsistencyError = tmp1;
  /* ck_doBaliseBranch */ if (doBaliseBranch) {
    outC->outCheckErrors.nid_c = op_call;
    tmp = _5_op_call;
  }
  else {
    outC->outCheckErrors.nid_c = 0;
    tmp = cUnknownBG_BG_Types_Pkg;
  }
  outC->outCheckErrors.nid_errorbg = tmp;
  outC->rem_transitionPositionPassed = transitionPositionPassed;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

