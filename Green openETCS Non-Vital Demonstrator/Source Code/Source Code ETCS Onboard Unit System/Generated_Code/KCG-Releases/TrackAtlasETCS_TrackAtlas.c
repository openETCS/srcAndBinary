/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlasETCS_TrackAtlas.h"

#ifndef KCG_USER_DEFINED_INIT
void TrackAtlasETCS_init_TrackAtlas(outC_TrackAtlasETCS_TrackAtlas *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->SSP_available = kcg_true;
  outC->ces_accepted = kcg_true;
  outC->ces_revoked = kcg_true;
  outC->trip_train = kcg_true;
  outC->init = kcg_true;
  outC->EoA = 0;
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = 0;
  outC->message147.header.t_train = 0;
  outC->message147.header.nid_engine = 0;
  outC->message147.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message147.header.xT_TRAIN = 0;
  outC->message147.header.xNID_EM = 0;
  outC->message147.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
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
  outC->message147.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
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
  outC->message147.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p1.packet1.L_TRAININT = 0;
  outC->message147.packets.p1.packet1.V_TRAIN = 0;
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = 0;
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = 0;
  outC->message147.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->message147.packets.p3.aNID_RADIO[0].telephoneNumber[i] = 0;
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = 0;
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = 0;
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message147.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message147.packets.p11.l_train = 0;
  outC->message147.packets.p11.v_maxtrain = 0;
  outC->message147.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = 0;
  outC->message147.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->message147.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[i].nid_ctraction = 0;
  }
  outC->message147.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->message147.packets.p11.nid_ntc[i] = 0;
    outC->bus_out[i].Message.valid = kcg_true;
    outC->bus_out[i].Message.nid_message = 0;
    outC->bus_out[i].Message.l_message = 0;
    outC->bus_out[i].Message.t_train = 0;
    outC->bus_out[i].Message.nid_engine = 0;
    outC->bus_out[i].Message.field1 = 0;
    outC->bus_out[i].Message.field2 = 0;
    outC->bus_out[i].Message.field3 = 0;
    for (i1 = 0; i1 < 50; i1++) {
      outC->bus_out[i].OptionalPackets[i1] = 0;
    }
  }
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.Level = MA_L1_TrackAtlasTypes;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.v_main = 0;
  outC->MA_onboard_out.v_loa = 0;
  outC->MA_onboard_out.t_loa_unlimited = kcg_true;
  outC->MA_onboard_out.t_loa = 0;
  outC->MA_onboard_out.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->MA_onboard_out.sections[i].valid = kcg_true;
    outC->MA_onboard_out.sections[i].q_endsection = kcg_true;
    outC->MA_onboard_out.sections[i].l_section = 0;
    outC->MA_onboard_out.sections[i].q_sectiontimer = kcg_true;
    outC->MA_onboard_out.sections[i].t_sectiontimer = 0;
    outC->MA_onboard_out.sections[i].d_sectiontimerstoploc = 0;
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
  for (i = 0; i < 10; i++) {
    outC->to_Supervision.MA.sections[i].valid = kcg_true;
    outC->to_Supervision.MA.sections[i].q_endsection = kcg_true;
    outC->to_Supervision.MA.sections[i].l_section = 0;
    outC->to_Supervision.MA.sections[i].q_sectiontimer = kcg_true;
    outC->to_Supervision.MA.sections[i].t_sectiontimer = 0;
    outC->to_Supervision.MA.sections[i].d_sectiontimerstoploc = 0;
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
  for (i = 0; i < 50; i++) {
    outC->to_Supervision.GradientProfile[i].valid = kcg_true;
    outC->to_Supervision.GradientProfile[i].Loc_Absolute = 0;
    outC->to_Supervision.GradientProfile[i].Loc_LRBG = 0;
    outC->to_Supervision.GradientProfile[i].Gradient = 0;
    outC->to_Supervision.GradientProfile[i].L_Gradient = 0;
  }
  outC->to_Supervision.freshMRSP = kcg_true;
  for (i = 0; i < 110; i++) {
    outC->to_Supervision.MRSP[i].valid = kcg_true;
    outC->to_Supervision.MRSP[i].Loc_Abs = 0;
    outC->to_Supervision.MRSP[i].Loc_LRBG = 0;
    outC->to_Supervision.MRSP[i].MRS = 0;
  }
  for (i = 0; i < 50; i++) {
    outC->to_DMI.GradientProfile[i].valid = kcg_true;
    outC->to_DMI.GradientProfile[i].begin_section = 0;
    outC->to_DMI.GradientProfile[i].end_section = 0;
    outC->to_DMI.GradientProfile[i].gradient = 0;
  }
  outC->to_DMI.Gradient_profile_updated = kcg_true;
  for (i = 0; i < 110; i++) {
    outC->to_DMI.MRSP[i].valid = kcg_true;
    outC->to_DMI.MRSP[i].Loc_Abs = 0;
    outC->to_DMI.MRSP[i].Loc_LRBG = 0;
    outC->to_DMI.MRSP[i].MRS = 0;
  }
  outC->to_DMI.MRSP_updated = kcg_true;
  for (i = 0; i < 5; i++) {
    outC->To_ModeAndLevel.train_packets.P_12[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_12[i].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_12[i].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_12[i].v_main = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[i].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_12[i].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_12[i].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_12[i].v_releaseol = 0;
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
  for (i = 0; i < 5; i++) {
    outC->To_ModeAndLevel.train_packets.P_15[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_15[i].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_15[i].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_15[i].v_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].t_loa = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].l_section = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i].t_sectiontimer_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].d_sectiontimerstoploc_k = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].l_endsection = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i].t_sectiontimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].d_sectiontimerstoploc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[i].t_endtimer = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].d_endtimerstartloc = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_15[i].d_dp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].v_releasedp = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_15[i].d_startol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].t_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].d_ol = 0;
    outC->To_ModeAndLevel.train_packets.P_15[i].v_releaseol = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->To_ModeAndLevel.train_packets.P_21[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_21[i].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_21[i].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_21[i].d_gradient = 0;
    outC->To_ModeAndLevel.train_packets.P_21[i].q_gdir = Q_GDIR_downhill;
    outC->To_ModeAndLevel.train_packets.P_21[i].g_a = 0;
  }
  outC->To_ModeAndLevel.train_packets.P_27.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_27.d_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.v_static = 0;
  outC->To_ModeAndLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i = 0; i < 7; i++) {
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i].nc_diff = 0;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[i].v_diff = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].d_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].v_static = 0;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i1 = 0; i1 < 7; i1++) {
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].diffArray[i1].valid =
        kcg_true;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].diffArray[i1].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].diffArray[i1].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].diffArray[i1].nc_diff =
        0;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[i].diffArray[i1].v_diff =
        0;
    }
  }
  for (i = 0; i < 7; i++) {
    outC->To_ModeAndLevel.train_packets.P_41[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_41[i].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_41[i].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_41[i].d_leveltr = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_41[i].nid_ntc = 0;
    outC->To_ModeAndLevel.train_packets.P_41[i].l_ackleveltr = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->To_ModeAndLevel.train_packets.P_46[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_46[i].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_46[i].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_46[i].nid_ntc = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->To_ModeAndLevel.train_packets.P_63[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_63[i].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_63[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->To_ModeAndLevel.train_packets.P_63[i].nid_c = 0;
    outC->To_ModeAndLevel.train_packets.P_63[i].nid_bg = 0;
  }
  for (i = 0; i < 3; i++) {
    outC->To_ModeAndLevel.train_packets.P_80[i].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_80[i].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_80[i].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_80[i].d_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i].m_mamode = M_MAMODE_On_Sight;
    outC->To_ModeAndLevel.train_packets.P_80[i].v_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i].l_mamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i].l_ackmamode = 0;
    outC->To_ModeAndLevel.train_packets.P_80[i].q_mamode = Q_MAMODE_as_the_EOA;
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
  for (i = 0; i < 32; i++) {
    outC->NV_raw_out.nid_c_list[i].valid = kcg_true;
    outC->NV_raw_out.nid_c_list[i].nid_c = 0;
  }
  outC->NV_raw_out.v_nvshunt = 0;
  outC->NV_raw_out.v_nvstff = 0;
  outC->NV_raw_out.v_nvonsight = 0;
  outC->NV_raw_out.v_nvlimsuperv = 0;
  outC->NV_raw_out.v_nvunfit = 0;
  outC->NV_raw_out.v_nvrel = 0;
  outC->NV_raw_out.d_nvroll = 0;
  outC->NV_raw_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->NV_raw_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
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
  outC->NV_raw_out.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->NV_raw_out.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->NV_raw_out.a_nvp12 = 0.0;
  outC->NV_raw_out.a_nvp23 = 0.0;
  outC->NV_raw_out.v_nvkvint = 0;
  outC->NV_raw_out.m_nvkvint_12 = 0.0;
  outC->NV_raw_out.m_nvkvint_23 = 0.0;
  outC->NV_raw_out.n_iter_n = 0;
  for (i = 0; i < 32; i++) {
    outC->NV_raw_out.n_iter_n_list[i].valid = kcg_true;
    outC->NV_raw_out.n_iter_n_list[i].v_nvkvint_n = 0;
    outC->NV_raw_out.n_iter_n_list[i].m_nvkvint_n_12 = 0.0;
    outC->NV_raw_out.n_iter_n_list[i].m_nvkvint_n_23 = 0.0;
  }
  outC->NV_raw_out.n_iter_k = 0;
  for (i = 0; i < 32; i++) {
    outC->NV_raw_out.n_iter_k_list[i].valid = kcg_true;
    outC->NV_raw_out.n_iter_k_list[i].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->NV_raw_out.n_iter_k_list[i].a_nvp12_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i].a_nvp23_k = 0.0;
    outC->NV_raw_out.n_iter_k_list[i].v_nvkvint_k = 0;
    outC->NV_raw_out.n_iter_k_list[i].m_nvkvint_k_12 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i].m_nvkvint_k_23 = 0.0;
    outC->NV_raw_out.n_iter_k_list[i].n_iter_k_m = 0;
    for (i1 = 0; i1 < 32; i1++) {
      outC->NV_raw_out.n_iter_k_list[i].n_iter_k_m_list[i1].valid = kcg_true;
      outC->NV_raw_out.n_iter_k_list[i].n_iter_k_m_list[i1].v_nvkvint_k_m = 0;
      outC->NV_raw_out.n_iter_k_list[i].n_iter_k_m_list[i1].m_nvkvint_km_12 =
        0.0;
      outC->NV_raw_out.n_iter_k_list[i].n_iter_k_m_list[i1].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->NV_raw_out.l_nvkrint = L_NVKRINT_0m;
  outC->NV_raw_out.m_nvkrint = 0.0;
  outC->NV_raw_out.n_iter_l = 0;
  for (i = 0; i < 32; i++) {
    outC->NV_raw_out.n_iter_l_list[i].valid = kcg_true;
    outC->NV_raw_out.n_iter_l_list[i].l_nvkrint_l = L_NVKRINT_0m;
    outC->NV_raw_out.n_iter_l_list[i].m_nvkrint_l = 0.0;
  }
  outC->NV_raw_out.m_nvktint = 0.0;
  /* 1 */ Manage_MA_Request_init_TA_MA_Request(&outC->_5_Context_1);
  /* 1 */ Build_GradientProfile_init_TA_Gradient_new(&outC->_4_Context_1);
  /* 1 */ Build_MRSP_init_TA_MRSP_new(&outC->_3_Context_1);
  /* 1 */ Build_MA_L23_init_TA_MA_new(&outC->_2_Context_1);
  /* 1 */ StoreRaw_NV_init_TA_Storage(&outC->_1_Context_1);
  /* 1 */ Manage_EmergencyStop_init_TA_EmergencyStop(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackAtlasETCS_reset_TrackAtlas(outC_TrackAtlasETCS_TrackAtlas *outC)
{
  outC->init = kcg_true;
  /* 1 */ Manage_MA_Request_reset_TA_MA_Request(&outC->_5_Context_1);
  /* 1 */ Build_GradientProfile_reset_TA_Gradient_new(&outC->_4_Context_1);
  /* 1 */ Build_MRSP_reset_TA_MRSP_new(&outC->_3_Context_1);
  /* 1 */ Build_MA_L23_reset_TA_MA_new(&outC->_2_Context_1);
  /* 1 */ StoreRaw_NV_reset_TA_Storage(&outC->_1_Context_1);
  /* 1 */ Manage_EmergencyStop_reset_TA_EmergencyStop(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TrackAtlas::TrackAtlasETCS */
void TrackAtlasETCS_TrackAtlas(
  /* TrackAtlas::TrackAtlasETCS::MessageIn */ ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TrackAtlas::TrackAtlasETCS::ModeAndLevel_in */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrackAtlas::TrackAtlasETCS::TrainData_in */ FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrackAtlas::TrackAtlasETCS::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TrackAtlas::TrackAtlasETCS::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TrackAtlas::TrackAtlasETCS::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* TrackAtlas::TrackAtlasETCS::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* TrackAtlas::TrackAtlasETCS::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrackAtlas::TrackAtlasETCS::fromDriverToMA_R */ Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* TrackAtlas::TrackAtlasETCS::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrackAtlas::TrackAtlasETCS::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TrackAtlas::TrackAtlasETCS::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrackAtlas::TrackAtlasETCS::t_train */ T_TRAIN t_train,
  /* TrackAtlas::TrackAtlasETCS::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* TrackAtlas::TrackAtlasETCS::P203V1_onboard */ P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* TrackAtlas::TrackAtlasETCS::PermanentDataP003 */ P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  /* TrackAtlas::TrackAtlasETCS::balisegroups */ positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_TrackAtlasETCS_TrackAtlas *outC)
{
  /* TrackAtlas::TrackAtlasETCS */
  static MRSP_Profile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TrackAtlas::TrackAtlasETCS::valid_MA */
  static kcg_bool valid_MA;
  /* TrackAtlas::TrackAtlasETCS::valid_GP */
  static kcg_bool valid_GP;
  /* TrackAtlas::TrackAtlasETCS::MRSP_export */
  static MRSP_Profile_t_TrackAtlasTypes MRSP_export;
  /* TrackAtlas::TrackAtlasETCS::_L21 */
  static P003V1_OBU_T_TM_baseline2 _L21;
  /* TrackAtlas::TrackAtlasETCS::_L78 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L78;
  /* TrackAtlas::TrackAtlasETCS::_L82 */
  static kcg_bool _L82;
  /* TrackAtlas::TrackAtlasETCS::_L83 */
  static kcg_bool _L83;
  /* TrackAtlas::TrackAtlasETCS::_L84 */
  static kcg_bool _L84;
  /* TrackAtlas::TrackAtlasETCS::_L85 */
  static kcg_bool _L85;
  /* TrackAtlas::TrackAtlasETCS::_L101 */
  static GradientProfile_t_TrackAtlasTypes _L101;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    i = 0;
  }
  else {
    i = outC->EoA;
  }
  /* 1 */
  Manage_EmergencyStop_TA_EmergencyStop(
    MessageIn,
    t_train,
    trainProps,
    packet0,
    packet1,
    TrainPositionIn,
    i,
    bus_in,
    &outC->Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->message147,
    &outC->Context_1.message147);
  outC->trip_train = outC->Context_1.tripTrain;
  outC->ces_accepted = outC->Context_1.cesAccepted;
  outC->ces_revoked = outC->Context_1.cesRevoked;
  /* 1 */ StoreRaw_NV_TA_Storage(MessageIn, &outC->_1_Context_1);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&_L21, &outC->_1_Context_1.NV_onboard_out);
  /* 1 */
  Build_MA_L23_TA_MA_new(
    kcg_false,
    MessageIn,
    &_L21,
    TrainPositionIn,
    outC->Context_1.rejectNewMA,
    outC->Context_1.updateEOA,
    outC->Context_1.newEOA,
    balisegroups,
    &outC->_2_Context_1);
  outC->to_Supervision.freshMA = outC->_2_Context_1.updated;
  valid_MA = outC->_2_Context_1.available;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->_2_Context_1.MA_absolute);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->to_Supervision.MA,
    &outC->MA_onboard_out);
  outC->EoA = outC->_2_Context_1.currentEOA;
  /* 1 */
  Build_MRSP_TA_MRSP_new(
    MessageIn,
    TrainData_in,
    ModeAndLevel_in,
    train_length,
    TrainPositionIn,
    balisegroups,
    &outC->_3_Context_1);
  outC->to_DMI.MRSP_updated = outC->_3_Context_1.newMRSP;
  outC->to_Supervision.freshMRSP = outC->_3_Context_1.newMRSP;
  outC->SSP_available = outC->_3_Context_1.SSP_available;
  /* 1 */
  Build_GradientProfile_TA_Gradient_new(
    kcg_false,
    MessageIn,
    TrainPositionIn,
    balisegroups,
    &outC->_4_Context_1);
  outC->to_DMI.Gradient_profile_updated = outC->_4_Context_1.updated;
  outC->to_Supervision.freshGradientProfile = outC->_4_Context_1.updated;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L101, &outC->_4_Context_1.GP);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->to_Supervision.GradientProfile,
    &_L101);
  valid_GP = outC->_4_Context_1.available;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &MRSP_export,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
  /* 1 */ for (i = 0; i < 110; i++) {
    kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&acc, &MRSP_export);
    /* 1 */
    SSP_to_MRSP_TA_Export(
      i,
      &acc,
      &outC->_3_Context_1.SSP,
      &_L85,
      &MRSP_export);
    /* 1 */ if (!_L85) {
      break;
    }
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->to_Supervision.MRSP,
    &MRSP_export);
  /* 1 */
  GradientProfile_to_DMI_TA_Export(
    outC->EoA,
    &_L101,
    &outC->to_DMI.GradientProfile);
  /* 1 */ MRSP_to_DMI_TA_Export(outC->EoA, &MRSP_export, &outC->to_DMI.MRSP);
  /* 1 */
  C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
    &_L21,
    P203V1_onboard,
    PermanentDataP003,
    &outC->NV_raw_out);
  /* 1 */
  TA_to_ML_TA_Export(
    MessageIn,
    kcg_false,
    valid_GP,
    valid_MA,
    outC->SSP_available,
    &outC->To_ModeAndLevel.train_packets,
    &_L78,
    &_L85,
    &_L84,
    &_L83,
    &_L82);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->To_ModeAndLevel.train_messages,
    &_L78);
  outC->To_ModeAndLevel.p12 = _L85;
  outC->To_ModeAndLevel.p15 = _L84;
  outC->To_ModeAndLevel.p21 = _L83;
  outC->To_ModeAndLevel.p27 = _L82;
  /* 1 */
  Manage_MA_Request_TA_MA_Request(
    TrainPositionIn,
    SystemTime,
    MessageIn,
    preindicationLocation,
    odometry,
    &outC->MA_onboard_out,
    fromDriverToMA_R,
    kcg_false,
    trainProps,
    packet0,
    packet1,
    t_train,
    &outC->Context_1.bus_out,
    ModeAndLevel_in,
    &outC->_5_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->_5_Context_1.bus_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackAtlasETCS_TrackAtlas.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

