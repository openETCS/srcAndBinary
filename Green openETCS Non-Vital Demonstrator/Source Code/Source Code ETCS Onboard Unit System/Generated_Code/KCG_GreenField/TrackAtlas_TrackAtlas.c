/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlas_TrackAtlas.h"

#ifndef KCG_USER_DEFINED_INIT
void TrackAtlas_init_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->ces_accepted = kcg_true;
  outC->ces_revoked = kcg_true;
  outC->trip_train = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->bus_out[i1].Message.valid = kcg_true;
    outC->bus_out[i1].Message.nid_message = 0;
    outC->bus_out[i1].Message.l_message = 0;
    outC->bus_out[i1].Message.t_train = 0;
    outC->bus_out[i1].Message.nid_engine = 0;
    outC->bus_out[i1].Message.field1 = 0;
    outC->bus_out[i1].Message.field2 = 0;
    outC->bus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->bus_out[i1].OptionalPackets[i] = 0;
    }
  }
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = 0;
  outC->message147.header.t_train = 0;
  outC->message147.header.nid_engine = 0;
  outC->message147.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_b;
  outC->message147.header.xT_TRAIN = 0;
  outC->message147.header.xNID_EM = 0;
  outC->message147.header.xQ_EMERGENCYSTOP = _32_Q_EMERGENCYSTOP_Conditional;
  outC->message147.header.xNID_TEXTMESSAGE = 0;
  outC->message147.packets.p0.valid = kcg_true;
  outC->message147.packets.p0.packet0.NID_PACKET = 0;
  outC->message147.packets.p0.packet0.L_PACKET = 0;
  outC->message147.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p0.packet0.NID_LRBG = 0;
  outC->message147.packets.p0.packet0.D_LRBG = 0;
  outC->message147.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->message147.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->message147.packets.p0.packet0.length = Q_LENGTH_No_train_integrity_inf;
  outC->message147.packets.p0.packet0.L_TRAININT = 0;
  outC->message147.packets.p0.packet0.V_TRAIN = 0;
  outC->message147.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message147.packets.p0.packet0.NID_NTC = 0;
  outC->message147.packets.p1.valid = kcg_true;
  outC->message147.packets.p1.packet1.NID_PACKET = 0;
  outC->message147.packets.p1.packet1.L_PACKET = 0;
  outC->message147.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p1.packet1.NID_LRBG = 0;
  outC->message147.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->message147.packets.p1.packet1.D_LRBG = 0;
  outC->message147.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->message147.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->message147.packets.p1.packet1.length = Q_LENGTH_No_train_integrity_inf;
  outC->message147.packets.p1.packet1.L_TRAININT = 0;
  outC->message147.packets.p1.packet1.V_TRAIN = 0;
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = 0;
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = 0;
  outC->message147.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i1 = 0; i1 < 15; i1++) {
    outC->message147.packets.p3.aNID_RADIO[0].telephoneNumber[i1] = 0;
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error = M_ERROR_Balise_group_linking_co;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = 0;
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = 0;
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->message147.packets.p11.nc_train = NC_TRAIN_Train_does_not_belong_;
  outC->message147.packets.p11.l_train = 0;
  outC->message147.packets.p11.v_maxtrain = 0;
  outC->message147.packets.p11.m_loadinggoage = M_LOADINGGAUGE_The_train_does_n;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = 0;
  outC->message147.packets.p11.nIter_tractionIdentity = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->message147.packets.p11.tractionIdentity[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->message147.packets.p11.tractionIdentity[i1].nid_ctraction = 0;
  }
  outC->message147.packets.p11.nIter_ntc = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->message147.packets.p11.nid_ntc[i1] = 0;
  }
  for (i1 = 0; i1 < 200; i1++) {
    outC->MRSP[i1].valid = kcg_true;
    outC->MRSP[i1].Loc_Abs = 0;
    outC->MRSP[i1].Loc_LRBG = 0;
    outC->MRSP[i1].MRS = 0;
  }
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.Level = MA_L1_TrackAtlasTypes;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.v_main = 0;
  outC->MA_onboard_out.v_loa = 0;
  outC->MA_onboard_out.t_loa_unlimited = kcg_true;
  outC->MA_onboard_out.t_loa = 0;
  outC->MA_onboard_out.n_iter = 0;
  for (i1 = 0; i1 < 10; i1++) {
    outC->MA_onboard_out.sections[i1].valid = kcg_true;
    outC->MA_onboard_out.sections[i1].q_endsection = kcg_true;
    outC->MA_onboard_out.sections[i1].l_section = 0;
    outC->MA_onboard_out.sections[i1].q_sectiontimer = kcg_true;
    outC->MA_onboard_out.sections[i1].t_sectiontimer = 0;
    outC->MA_onboard_out.sections[i1].d_sectiontimerstoploc = 0;
  }
  outC->MA_onboard_out.q_dangerpoint = kcg_true;
  outC->MA_onboard_out.dangerpoint.d_DP_or_OL = 0;
  outC->MA_onboard_out.dangerpoint.v_release = 0;
  outC->MA_onboard_out.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_overlap = kcg_true;
  outC->MA_onboard_out.overlap.d_DP_or_OL = 0;
  outC->MA_onboard_out.overlap.v_release = 0;
  outC->MA_onboard_out.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_endtimer = kcg_true;
  outC->MA_onboard_out.endtimer_t.t_endtimer = 0;
  outC->MA_onboard_out.endtimer_t.d_endtimerstoploc = 0;
  outC->to_Supervision.freshMA = kcg_true;
  outC->to_Supervision.MA.valid = kcg_true;
  outC->to_Supervision.MA.Level = MA_L1_TrackAtlasTypes;
  outC->to_Supervision.MA.q_dir = Q_DIR_Reverse;
  outC->to_Supervision.MA.v_main = 0;
  outC->to_Supervision.MA.v_loa = 0;
  outC->to_Supervision.MA.t_loa_unlimited = kcg_true;
  outC->to_Supervision.MA.t_loa = 0;
  outC->to_Supervision.MA.n_iter = 0;
  for (i1 = 0; i1 < 10; i1++) {
    outC->to_Supervision.MA.sections[i1].valid = kcg_true;
    outC->to_Supervision.MA.sections[i1].q_endsection = kcg_true;
    outC->to_Supervision.MA.sections[i1].l_section = 0;
    outC->to_Supervision.MA.sections[i1].q_sectiontimer = kcg_true;
    outC->to_Supervision.MA.sections[i1].t_sectiontimer = 0;
    outC->to_Supervision.MA.sections[i1].d_sectiontimerstoploc = 0;
  }
  outC->to_Supervision.MA.q_dangerpoint = kcg_true;
  outC->to_Supervision.MA.dangerpoint.d_DP_or_OL = 0;
  outC->to_Supervision.MA.dangerpoint.v_release = 0;
  outC->to_Supervision.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->to_Supervision.MA.q_overlap = kcg_true;
  outC->to_Supervision.MA.overlap.d_DP_or_OL = 0;
  outC->to_Supervision.MA.overlap.v_release = 0;
  outC->to_Supervision.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->to_Supervision.MA.q_endtimer = kcg_true;
  outC->to_Supervision.MA.endtimer_t.t_endtimer = 0;
  outC->to_Supervision.MA.endtimer_t.d_endtimerstoploc = 0;
  outC->to_Supervision.freshGradientProfile = kcg_true;
  for (i1 = 0; i1 < 50; i1++) {
    outC->to_Supervision.GradientProfile[i1].valid = kcg_true;
    outC->to_Supervision.GradientProfile[i1].Loc_Absolute = 0;
    outC->to_Supervision.GradientProfile[i1].Loc_LRBG = 0;
    outC->to_Supervision.GradientProfile[i1].Gradient = 0;
    outC->to_Supervision.GradientProfile[i1].L_Gradient = 0;
  }
  outC->to_Supervision.freshMRSP = kcg_true;
  for (i1 = 0; i1 < 200; i1++) {
    outC->to_Supervision.MRSP[i1].valid = kcg_true;
    outC->to_Supervision.MRSP[i1].Loc_Abs = 0;
    outC->to_Supervision.MRSP[i1].Loc_LRBG = 0;
    outC->to_Supervision.MRSP[i1].MRS = 0;
  }
  for (i1 = 0; i1 < 50; i1++) {
    outC->to_DMI.GradientProfile[i1].valid = kcg_true;
    outC->to_DMI.GradientProfile[i1].begin_section = 0;
    outC->to_DMI.GradientProfile[i1].end_section = 0;
    outC->to_DMI.GradientProfile[i1].gradient = 0;
  }
  outC->to_DMI.Gradient_profile_updated = kcg_true;
  for (i1 = 0; i1 < 200; i1++) {
    outC->to_DMI.MRSP[i1].valid = kcg_true;
    outC->to_DMI.MRSP[i1].Loc_Abs = 0;
    outC->to_DMI.MRSP[i1].Loc_LRBG = 0;
    outC->to_DMI.MRSP[i1].MRS = 0;
  }
  outC->to_DMI.MRSP_updated = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->To_ModeAndLevel.train_packets.P_12[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_12[i1].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_12[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_12[i1].v_main = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->To_ModeAndLevel.train_packets.P_12[i1].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->To_ModeAndLevel.train_packets.P_12[i1].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].q_endtimer =
      Q_ENDTIMER_No_End_section_timer;
    outC->To_ModeAndLevel.train_packets.P_12[i1].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_i;
    outC->To_ModeAndLevel.train_packets.P_12[i1].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].q_overlap =
      Q_OVERLAP_No_overlap_informatio;
    outC->To_ModeAndLevel.train_packets.P_12[i1].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i1].v_releaseol = 0;
  }
  outC->To_ModeAndLevel.train_packets.P_135.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_137.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->To_ModeAndLevel.train_packets.P_138.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_138.d_startreverse = 0;
  outC->To_ModeAndLevel.train_packets.P_138.l_reversearea = 0;
  outC->To_ModeAndLevel.train_packets.P_139.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_139.d_reverse = 0;
  outC->To_ModeAndLevel.train_packets.P_139.v_reverse = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->To_ModeAndLevel.train_packets.P_15[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_15[i1].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_15[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_15[i1].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->To_ModeAndLevel.train_packets.P_15[i1].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->To_ModeAndLevel.train_packets.P_15[i1].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].q_endtimer =
      Q_ENDTIMER_No_End_section_timer;
    outC->To_ModeAndLevel.train_packets.P_15[i1].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_i;
    outC->To_ModeAndLevel.train_packets.P_15[i1].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].q_overlap =
      Q_OVERLAP_No_overlap_informatio;
    outC->To_ModeAndLevel.train_packets.P_15[i1].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i1].v_releaseol = 0;
  }
  for (i1 = 0; i1 < 7; i1++) {
    outC->To_ModeAndLevel.train_packets.P_21[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_21[i1].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_21[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_21[i1].d_gradient = 0;
    outC->To_ModeAndLevel.train_packets.P_21[i1].q_gdir = Q_GDIR_downhill;
    outC->To_ModeAndLevel.train_packets.P_21[i1].g_a = 0;
  }
  outC->To_ModeAndLevel.train_packets.P_27.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_27.d_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.v_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_v;
  for (i1 = 0; i1 < 7; i1++) {
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i1].q_diff =
      Q_DIFF_Cant_Deficiency_specific;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i1].nc_cddiff =
      _42_NC_CDDIFF_Specific_SSP_appl;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i1].nc_diff = 0;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i1].v_diff = 0;
  }
  for (i1 = 0; i1 < 7; i1++) {
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].d_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].v_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].q_front =
      Q_FRONT_Train_length_delay_on_v;
    for (i = 0; i < 7; i++) {
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].diffArray[i].valid =
        kcg_true;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].diffArray[i].q_diff =
        Q_DIFF_Cant_Deficiency_specific;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].diffArray[i].nc_cddiff =
        _42_NC_CDDIFF_Specific_SSP_appl;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].diffArray[i].nc_diff =
        0;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i1].diffArray[i].v_diff =
        0;
    }
  }
  for (i1 = 0; i1 < 7; i1++) {
    outC->To_ModeAndLevel.train_packets.P_41[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_41[i1].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_41[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_41[i1].d_leveltr = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i1].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_41[i1].nid_ntc = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i1].l_ackleveltr = 0;
  }
  for (i1 = 0; i1 < 7; i1++) {
    outC->To_ModeAndLevel.train_packets.P_46[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_46[i1].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_46[i1].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_46[i1].nid_ntc = 0;
  }
  for (i1 = 0; i1 < 7; i1++) {
    outC->To_ModeAndLevel.train_packets.P_63[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_63[i1].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_63[i1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->To_ModeAndLevel.train_packets.P_63[i1].nid_c = 0;
    outC->To_ModeAndLevel.train_packets.P_63[i1].nid_bg = 0;
  }
  for (i1 = 0; i1 < 3; i1++) {
    outC->To_ModeAndLevel.train_packets.P_80[i1].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_80[i1].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_80[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_80[i1].d_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i1].m_mamode = M_MAMODE_On_Sight;
    outC->To_ModeAndLevel.train_packets.P_80[i1].v_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i1].l_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i1].l_ackmamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i1].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->To_ModeAndLevel.train_packets.LRBG = 0;
  outC->To_ModeAndLevel.train_packets.referenceLocation = 0;
  outC->To_ModeAndLevel.train_messages.Mess_15 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_16 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_2 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_27 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_28 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_6 = kcg_true;
  outC->To_ModeAndLevel.p12 = kcg_true;
  outC->To_ModeAndLevel.p15 = kcg_true;
  outC->To_ModeAndLevel.p21 = kcg_true;
  outC->To_ModeAndLevel.p27 = kcg_true;
  outC->NV_raw_out.valid = kcg_true;
  outC->NV_raw_out.nid_packet = 0;
  outC->NV_raw_out.q_dir = Q_DIR_Reverse;
  outC->NV_raw_out.q_scale = Q_SCALE_10_cm_scale;
  outC->NV_raw_out.d_validnv = 0;
  outC->NV_raw_out.nid_c = 0;
  outC->NV_raw_out.n_iter_nid_c = 0;
  for (i1 = 0; i1 < 32; i1++) {
    outC->NV_raw_out.nid_c_list[i1].valid = kcg_true;
    outC->NV_raw_out.nid_c_list[i1].nid_c = 0;
  }
  outC->NV_raw_out.v_nvshunt = 0;
  outC->NV_raw_out.v_nvstff = 0;
  outC->NV_raw_out.v_nvonsight = 0;
  outC->NV_raw_out.v_nvlimsuperv = 0;
  outC->NV_raw_out.v_nvunfit = 0;
  outC->NV_raw_out.v_nvrel = 0;
  outC->NV_raw_out.d_nvroll = 0;
  outC->NV_raw_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->NV_raw_out.q_nvemrrls = _50_Q_NVEMRRLS_Revoke_emergency;
  outC->NV_raw_out.q_nvguiperm = Q_NVGUIPERM_No;
  outC->NV_raw_out.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->NV_raw_out.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->NV_raw_out.v_nvallowovtrp = 0;
  outC->NV_raw_out.v_nvsupovtrp = 0;
  outC->NV_raw_out.d_nvovtrp = 0;
  outC->NV_raw_out.t_nvovtrp = 0;
  outC->NV_raw_out.d_nvpotrp = 0;
  outC->NV_raw_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->NV_raw_out.t_nvcontact = 0;
  outC->NV_raw_out.m_nvderun = M_NVDERUN_No;
  outC->NV_raw_out.d_nvstff = 0;
  outC->NV_raw_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->NV_raw_out.a_nvmaxredadh1 = 0.0;
  outC->NV_raw_out.a_nvmaxredadh2 = 0.0;
  outC->NV_raw_out.a_nvmaxredadh3 = 0.0;
  outC->NV_raw_out.q_nvlocacc = 0;
  outC->NV_raw_out.m_nvavadh = 0.0;
  outC->NV_raw_out.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->NV_raw_out.q_nvkint = Q_NVKINT_No_integrated_correcti;
  outC->NV_raw_out.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->NV_raw_out.a_nvp12 = 0.0;
  outC->NV_raw_out.a_nvp23 = 0.0;
  outC->NV_raw_out.v_nvkvint = 0;
  outC->NV_raw_out.m_nvkvint_12 = 0.0;
  outC->NV_raw_out.m_nvkvint_23 = 0.0;
  outC->NV_raw_out.n_iter_n = 0;
  for (i1 = 0; i1 < 32; i1++) {
    outC->NV_raw_out.n_iter_n_list[i1].valid = kcg_true;
    outC->NV_raw_out.n_iter_n_list[i1].v_nvkvint_n = 0;
    outC->NV_raw_out.n_iter_n_list[i1].m_nvkvint_n_12 = 0.0;
    outC->NV_raw_out.n_iter_n_list[i1].m_nvkvint_n_23 = 0.0;
  }
  outC->NV_raw_out.n_iter_k = 0;
  for (i1 = 0; i1 < 32; i1++) {
    outC->NV_raw_out.n_iter_k_list[i1].valid = kcg_true;
    outC->NV_raw_out.n_iter_k_list[i1].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->NV_raw_out.n_iter_k_list[i1].a_nvp12_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i1].a_nvp23_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i1].v_nvkvint_k = 0;
    outC->NV_raw_out.n_iter_k_list[i1].m_nvkvint_k_12 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i1].m_nvkvint_k_23 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i1].n_iter_k_m = 0;
    for (i = 0; i < 32; i++) {
      outC->NV_raw_out.n_iter_k_list[i1].n_iter_k_m_list[i].valid = kcg_true;
      outC->NV_raw_out.n_iter_k_list[i1].n_iter_k_m_list[i].v_nvkvint_k_m = 0;
      outC->NV_raw_out.n_iter_k_list[i1].n_iter_k_m_list[i].m_nvkvint_km_12 =
        0.0;
      outC->NV_raw_out.n_iter_k_list[i1].n_iter_k_m_list[i].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->NV_raw_out.l_nvkrint = L_NVKRINT_0m;
  outC->NV_raw_out.m_nvkrint = 0.0;
  outC->NV_raw_out.n_iter_l = 0;
  for (i1 = 0; i1 < 32; i1++) {
    outC->NV_raw_out.n_iter_l_list[i1].valid = kcg_true;
    outC->NV_raw_out.n_iter_l_list[i1].l_nvkrint_l = L_NVKRINT_0m;
    outC->NV_raw_out.n_iter_l_list[i1].m_nvkrint_l = 0.0;
  }
  outC->NV_raw_out.m_nvktint = 0.0;
  /* 1 */ TrackAtlasETCS_init_TrackAtlas(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  /* 1 */ TrackAtlasETCS_reset_TrackAtlas(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TrackAtlas::TrackAtlas */
void TrackAtlas_TrackAtlas(
  /* TrackAtlas::TrackAtlas::MessageIn */ ReceivedMessage_T_Common_Types_ *MessageIn,
  /* TrackAtlas::TrackAtlas::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Typ *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlas::TrainData_in */ FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlas::TrainPositionIn */ trainPosition_T_TrainPosition_T *TrainPositionIn,
  /* TrackAtlas::TrackAtlas::train_length */ L_internal_Type_Obu_BasicTypes_ train_length,
  /* TrackAtlas::TrackAtlas::SystemTime */ T_internal_Type_Obu_BasicTypes_ SystemTime,
  /* TrackAtlas::TrackAtlas::preindicationLocation */ L_internal_Type_Obu_BasicTypes_ preindicationLocation,
  /* TrackAtlas::TrackAtlas::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlas::fromDriverToMA_R */ Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlas::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TrackAtlas::TrackAtlas::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* TrackAtlas::TrackAtlas::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* TrackAtlas::TrackAtlas::t_train */ T_TRAIN t_train,
  /* TrackAtlas::TrackAtlas::P203V1_onboard */ P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlas::PermanentDataP003 */ P003_permanent_data_T_TM_baseli *PermanentDataP003,
  /* TrackAtlas::TrackAtlas::bus_in */ M_TrainTrackMessageBus_t_TM_Tra *bus_in,
  outC_TrackAtlas_TrackAtlas *outC)
{
  /* 1 */
  TrackAtlasETCS_TrackAtlas(
    MessageIn,
    ModeAndLevel_in,
    TrainData_in,
    TrainPositionIn,
    train_length,
    SystemTime,
    preindicationLocation,
    odometry,
    fromDriverToMA_R,
    trainProps,
    packet0,
    packet1,
    t_train,
    bus_in,
    P203V1_onboard,
    PermanentDataP003,
    &outC->Context_1);
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &outC->Context_1.NV_raw_out);
  kcg_copy_DataForModeAndLevel_t_(
    &outC->To_ModeAndLevel,
    &outC->Context_1.To_ModeAndLevel);
  kcg_copy_DataForDMI_t_TrackAtla(&outC->to_DMI, &outC->Context_1.to_DMI);
  kcg_copy_MovementAuthority_t_Tr(
    &outC->MA_onboard_out,
    &outC->Context_1.MA_onboard_out);
  kcg_copy_M_TrainTrackMessageBus(&outC->bus_out, &outC->Context_1.bus_out);
  kcg_copy_Radio_TrainTrack_Messa(
    &outC->message147,
    &outC->Context_1.message147);
  outC->ces_accepted = outC->Context_1.ces_accepted;
  outC->ces_revoked = outC->Context_1.ces_revoked;
  outC->trip_train = outC->Context_1.trip_train;
  /* 1 */ if (((*ModeAndLevel_in).Mode != Mode_NTC_TrackAtlas) &
    outC->Context_1.SSP_available) {
    kcg_copy_DataForSupervision_nex(
      &outC->to_Supervision,
      &outC->Context_1.to_Supervision);
  }
  else {
    kcg_copy_DataForSupervision_nex(
      &outC->to_Supervision,
      (DataForSupervision_nextGen_t_Tr *) &NTC_values_to_supervision_Track);
  }
  kcg_copy_MRSP_Profile_t_TrackAt(&outC->MRSP, &outC->to_Supervision.MRSP);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackAtlas_TrackAtlas.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

