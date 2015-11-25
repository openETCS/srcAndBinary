/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_combineForLevelChange_EVC_MEM_Support_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void MEM_combineForLevelChange_init_EVC_MEM_Support_Pkg(
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC)
{
  kcg_int i1;
  kcg_int i;
  
  outC->LRBGpositionNeeded = kcg_true;
  outC->init = kcg_true;
  for (i = 0; i < 7; i++) {
    outC->infoForLevelTransition.p41[i].valid = kcg_true;
    outC->infoForLevelTransition.p41[i].q_dir = Q_DIR_Reverse;
    outC->infoForLevelTransition.p41[i].q_scale = Q_SCALE_10_cm_scale;
    outC->infoForLevelTransition.p41[i].d_leveltr = 0;
    outC->infoForLevelTransition.p41[i].m_leveltr = M_LEVELTR_Level_0;
    outC->infoForLevelTransition.p41[i].nid_ntc = 0;
    outC->infoForLevelTransition.p41[i].l_ackleveltr = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->infoForLevelTransition.p46[i].valid = kcg_true;
    outC->infoForLevelTransition.p46[i].q_dir = Q_DIR_Reverse;
    outC->infoForLevelTransition.p46[i].m_leveltr = M_LEVELTR_Level_0;
    outC->infoForLevelTransition.p46[i].nid_ntc = 0;
  }
  outC->infoForLevelTransition.p12_received = kcg_true;
  outC->infoForLevelTransition.p15_received = kcg_true;
  outC->infoForLevelTransition.p21_received = kcg_true;
  outC->infoForLevelTransition.p27_received = kcg_true;
  outC->infoForLevelTransition.LRBG = 0;
  outC->infoForLevelTransition.referenceLocation = 0;
  for (i = 0; i < 5; i++) {
    outC->Data_From_Track_Packets_at_ML.P_12[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_12[i].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_12[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_12[i].v_main = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].v_loa = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].t_loa = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].l_section = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_12[i].t_sectiontimer_k = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].d_sectiontimerstoploc_k = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].l_endsection = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_12[i].t_sectiontimer = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].d_sectiontimerstoploc = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_From_Track_Packets_at_ML.P_12[i].t_endtimer = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].d_endtimerstartloc = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_From_Track_Packets_at_ML.P_12[i].d_dp = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].v_releasedp = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_From_Track_Packets_at_ML.P_12[i].d_startol = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].t_ol = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].d_ol = 0;
    outC->Data_From_Track_Packets_at_ML.P_12[i].v_releaseol = 0;
  }
  outC->Data_From_Track_Packets_at_ML.P_135.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_135.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_137.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_137.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->Data_From_Track_Packets_at_ML.P_138.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_138.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_From_Track_Packets_at_ML.P_138.d_startreverse = 0;
  outC->Data_From_Track_Packets_at_ML.P_138.l_reversearea = 0;
  outC->Data_From_Track_Packets_at_ML.P_139.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_139.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_From_Track_Packets_at_ML.P_139.d_reverse = 0;
  outC->Data_From_Track_Packets_at_ML.P_139.v_reverse = 0;
  for (i = 0; i < 5; i++) {
    outC->Data_From_Track_Packets_at_ML.P_15[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_15[i].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_15[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_15[i].v_loa = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].t_loa = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].l_section = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_15[i].t_sectiontimer_k = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].d_sectiontimerstoploc_k = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].l_endsection = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_15[i].t_sectiontimer = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].d_sectiontimerstoploc = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_From_Track_Packets_at_ML.P_15[i].t_endtimer = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].d_endtimerstartloc = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_From_Track_Packets_at_ML.P_15[i].d_dp = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].v_releasedp = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_From_Track_Packets_at_ML.P_15[i].d_startol = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].t_ol = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].d_ol = 0;
    outC->Data_From_Track_Packets_at_ML.P_15[i].v_releaseol = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_From_Track_Packets_at_ML.P_21[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_21[i].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_21[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_21[i].d_gradient = 0;
    outC->Data_From_Track_Packets_at_ML.P_21[i].q_gdir = Q_GDIR_downhill;
    outC->Data_From_Track_Packets_at_ML.P_21[i].g_a = 0;
  }
  outC->Data_From_Track_Packets_at_ML.P_27.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_27.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_From_Track_Packets_at_ML.P_27.d_static = 0;
  outC->Data_From_Track_Packets_at_ML.P_27.v_static = 0;
  outC->Data_From_Track_Packets_at_ML.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i = 0; i < 7; i++) {
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[i].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[i].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[i].nc_diff = 0;
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[i].v_diff = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].d_static = 0;
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].v_static = 0;
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i1 = 0; i1 < 7; i1++) {
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].valid =
        kcg_true;
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].nc_diff =
        0;
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[i].diffArray[i1].v_diff =
        0;
    }
  }
  for (i = 0; i < 7; i++) {
    outC->Data_From_Track_Packets_at_ML.P_41[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_41[i].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_41[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_41[i].d_leveltr = 0;
    outC->Data_From_Track_Packets_at_ML.P_41[i].m_leveltr = M_LEVELTR_Level_0;
    outC->Data_From_Track_Packets_at_ML.P_41[i].nid_ntc = 0;
    outC->Data_From_Track_Packets_at_ML.P_41[i].l_ackleveltr = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_From_Track_Packets_at_ML.P_46[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_46[i].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_46[i].m_leveltr = M_LEVELTR_Level_0;
    outC->Data_From_Track_Packets_at_ML.P_46[i].nid_ntc = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_From_Track_Packets_at_ML.P_63[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_63[i].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_63[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Track_Packets_at_ML.P_63[i].nid_c = 0;
    outC->Data_From_Track_Packets_at_ML.P_63[i].nid_bg = 0;
  }
  for (i = 0; i < 3; i++) {
    outC->Data_From_Track_Packets_at_ML.P_80[i].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_80[i].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_80[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_80[i].d_mamode = 0;
    outC->Data_From_Track_Packets_at_ML.P_80[i].m_mamode = M_MAMODE_On_Sight;
    outC->Data_From_Track_Packets_at_ML.P_80[i].v_mamode = 0;
    outC->Data_From_Track_Packets_at_ML.P_80[i].l_mamode = 0;
    outC->Data_From_Track_Packets_at_ML.P_80[i].l_ackmamode = 0;
    outC->Data_From_Track_Packets_at_ML.P_80[i].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->Data_From_Track_Packets_at_ML.LRBG = 0;
  outC->Data_From_Track_Packets_at_ML.referenceLocation = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_combineForLevelChange_reset_EVC_MEM_Support_Pkg(
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_MEM_Support_Pkg::MEM_combineForLevelChange */
void MEM_combineForLevelChange_EVC_MEM_Support_Pkg(
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC)
{
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::LRBGpositionNeeded */ kcg_bool last_LRBGpositionNeeded;
  /* EVC_MEM_Support_Pkg::MEM_combineForLevelChange::infoForLevelTransition */ dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg last_infoForLevelTransition;
  
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->Data_From_Track_Packets_at_ML.P_12,
    (P12_Level1MovementAuthorities_T_Packet_Types_Pkg *)
      &Default_P12_legacy_EVC_MEM_Support_Pkg);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->Data_From_Track_Packets_at_ML.P_135,
    (P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg *)
      &Default_P135_legacy_EVC_MEM_Support_Pkg);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->Data_From_Track_Packets_at_ML.P_63,
    (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *)
      &Default_P63_legacy_EVC_MEM_Support_Pkg);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->Data_From_Track_Packets_at_ML.P_80,
    (P80_ModeProfiles_T_Packet_Types_Pkg *)
      &Default_P80_legacy_EVC_MEM_Support_Pkg);
  /* last_init_ck_LRBGpositionNeeded */ if (outC->init) {
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &last_infoForLevelTransition,
      (dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *)
        &cNoML_EVC_MEM_Support_Pkg);
    outC->init = kcg_false;
    last_LRBGpositionNeeded = kcg_true;
  }
  else {
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &last_infoForLevelTransition,
      &outC->infoForLevelTransition);
    last_LRBGpositionNeeded = outC->LRBGpositionNeeded;
  }
  /* ck_msgToCheck */ if ((*actualMessage).valid) {
    /* MEM_dataForLevelTransition */
    MEM_dataForLevelTransition_EVC_MEM_Support_Pkg(
      actualMessage,
      &last_infoForLevelTransition,
      trainPosition,
      last_LRBGpositionNeeded,
      (*ModeLevel).level,
      trainProperties,
      &outC->infoForLevelTransition,
      &outC->LRBGpositionNeeded);
  }
  else /* ck_anon_activ */ if ((*ModeLevel).newLevel) {
    outC->LRBGpositionNeeded = kcg_false;
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &outC->infoForLevelTransition,
      (dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *)
        &cNoML_EVC_MEM_Support_Pkg);
  }
  else {
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &outC->infoForLevelTransition,
      &last_infoForLevelTransition);
    outC->LRBGpositionNeeded = last_LRBGpositionNeeded;
  }
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->Data_From_Track_Packets_at_ML.P_46,
    &outC->infoForLevelTransition.p46);
  outC->Data_From_Track_Packets_at_ML.LRBG = outC->infoForLevelTransition.LRBG;
  outC->Data_From_Track_Packets_at_ML.referenceLocation =
    outC->infoForLevelTransition.referenceLocation;
  /* 1 */
  Read_P137_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_From_Track_Packets_at_ML.P_137);
  /* 1 */
  Read_P138_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_From_Track_Packets_at_ML.P_138);
  /* 1 */
  Read_P139_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_From_Track_Packets_at_ML.P_139);
  /* 1 */
  Read_P015_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_From_Track_Packets_at_ML.P_15);
  /* 1 */
  Read_P021_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_From_Track_Packets_at_ML.P_21);
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_From_Track_Packets_at_ML.P_27);
  /* 4 */ if (outC->LRBGpositionNeeded) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->Data_From_Track_Packets_at_ML.P_41,
      (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
        &cNoP41_EVC_MEM_Support_Pkg);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->Data_From_Track_Packets_at_ML.P_41,
      &outC->infoForLevelTransition.p41);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MEM_combineForLevelChange_EVC_MEM_Support_Pkg.c
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

