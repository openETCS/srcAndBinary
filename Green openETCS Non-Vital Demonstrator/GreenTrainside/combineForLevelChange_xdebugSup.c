/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "combineForLevelChange_xdebugSup.h"

#ifndef KCG_USER_DEFINED_INIT
void combineForLevelChange_init_xdeb(outC_combineForLevelChange_xdeb *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->LRBGpositionNeeded = kcg_true;
  outC->init = kcg_true;
  outC->rem_level = M_LEVEL_Level_0;
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
    outC->Data_to_From_Track_Packets_at_M.P_12[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].v_main = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].l_section = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].d_sectiontimerstoploc_k = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_i;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].q_overlap =
      Q_OVERLAP_No_overlap_informatio;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_M.P_12[i].v_releaseol = 0;
  }
  outC->Data_to_From_Track_Packets_at_M.P_135.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_M.P_135.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_M.P_137.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_M.P_137.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_M.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->Data_to_From_Track_Packets_at_M.P_138.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_M.P_138.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_M.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_M.P_138.d_startreverse = 0;
  outC->Data_to_From_Track_Packets_at_M.P_138.l_reversearea = 0;
  outC->Data_to_From_Track_Packets_at_M.P_139.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_M.P_139.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_M.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_M.P_139.d_reverse = 0;
  outC->Data_to_From_Track_Packets_at_M.P_139.v_reverse = 0;
  for (i = 0; i < 5; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_15[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].v_loa = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].t_loa = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].l_section = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].t_sectiontimer_k = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].d_sectiontimerstoploc_k = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].l_endsection = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].t_sectiontimer = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].d_sectiontimerstoploc = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].q_endtimer =
      Q_ENDTIMER_No_End_section_timer;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].t_endtimer = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].d_endtimerstartloc = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_i;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].d_dp = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].v_releasedp = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].q_overlap =
      Q_OVERLAP_No_overlap_informatio;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].d_startol = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].t_ol = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].d_ol = 0;
    outC->Data_to_From_Track_Packets_at_M.P_15[i].v_releaseol = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_21[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_21[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_M.P_21[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_M.P_21[i].d_gradient = 0;
    outC->Data_to_From_Track_Packets_at_M.P_21[i].q_gdir = Q_GDIR_downhill;
    outC->Data_to_From_Track_Packets_at_M.P_21[i].g_a = 0;
  }
  outC->Data_to_From_Track_Packets_at_M.P_27.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_M.P_27.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_M.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_M.P_27.d_static = 0;
  outC->Data_to_From_Track_Packets_at_M.P_27.v_static = 0;
  outC->Data_to_From_Track_Packets_at_M.P_27.q_front =
    Q_FRONT_Train_length_delay_on_v;
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_27.diffArray[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_27.diffArray[i].q_diff =
      Q_DIFF_Cant_Deficiency_specific;
    outC->Data_to_From_Track_Packets_at_M.P_27.diffArray[i].nc_cddiff =
      _42_NC_CDDIFF_Specific_SSP_appl;
    outC->Data_to_From_Track_Packets_at_M.P_27.diffArray[i].nc_diff = 0;
    outC->Data_to_From_Track_Packets_at_M.P_27.diffArray[i].v_diff = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].d_static = 0;
    outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].v_static = 0;
    outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].q_front =
      Q_FRONT_Train_length_delay_on_v;
    for (i1 = 0; i1 < 7; i1++) {
      outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].diffArray[i1].valid =
        kcg_true;
      outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].diffArray[i1].q_diff =
        Q_DIFF_Cant_Deficiency_specific;
      outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].diffArray[i1].nc_cddiff =
        _42_NC_CDDIFF_Specific_SSP_appl;
      outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].diffArray[i1].nc_diff =
        0;
      outC->Data_to_From_Track_Packets_at_M.P_27.SSPArray[i].diffArray[i1].v_diff =
        0;
    }
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_41[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_41[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_M.P_41[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_M.P_41[i].d_leveltr = 0;
    outC->Data_to_From_Track_Packets_at_M.P_41[i].m_leveltr = M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_M.P_41[i].nid_ntc = 0;
    outC->Data_to_From_Track_Packets_at_M.P_41[i].l_ackleveltr = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_46[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_46[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_M.P_46[i].m_leveltr = M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_M.P_46[i].nid_ntc = 0;
  }
  for (i = 0; i < 7; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_63[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_63[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_M.P_63[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->Data_to_From_Track_Packets_at_M.P_63[i].nid_c = 0;
    outC->Data_to_From_Track_Packets_at_M.P_63[i].nid_bg = 0;
  }
  for (i = 0; i < 3; i++) {
    outC->Data_to_From_Track_Packets_at_M.P_80[i].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].d_mamode = 0;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].m_mamode = M_MAMODE_On_Sight;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].v_mamode = 0;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].l_mamode = 0;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].l_ackmamode = 0;
    outC->Data_to_From_Track_Packets_at_M.P_80[i].q_mamode =
      Q_MAMODE_as_the_EOA;
  }
  outC->Data_to_From_Track_Packets_at_M.LRBG = 0;
  outC->Data_to_From_Track_Packets_at_M.referenceLocation = 0;
  outC->outFilterEvents.pendingL1Transition = kcg_true;
  outC->outFilterEvents.pendingL12L3Transition = kcg_true;
  outC->outFilterEvents.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->outFilterEvents.emergencyStopAccepted = kcg_true;
  outC->outFilterEvents.lastAckTextMessageId = 0;
  outC->outFilterEvents.pendingNTCTransition = kcg_true;
  outC->outFilterEvents.SPPAndGradientOnBoard = kcg_true;
  outC->outFilterEvents.MACoverNotFullLength = kcg_true;
  outC->forLevelManagement.P12_received = kcg_true;
  outC->forLevelManagement.P15_received = kcg_true;
  outC->forLevelManagement.P21_received = kcg_true;
  outC->forLevelManagement.P27_received = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void combineForLevelChange_reset_xde(outC_combineForLevelChange_xdeb *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::combineForLevelChange */
void combineForLevelChange_xdebugSup(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ ReceivedMessage_T_Common_Types_ *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */ T_Mode_Level_Level_And_Mode_Typ *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* xdebugSupport_Pkg::combineForLevelChange::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  outC_combineForLevelChange_xdeb *outC)
{
  /* xdebugSupport_Pkg::combineForLevelChange */
  static M_LEVEL tmp2;
  /* xdebugSupport_Pkg::combineForLevelChange */
  static kcg_bool tmp1;
  /* xdebugSupport_Pkg::combineForLevelChange */
  static kcg_bool tmp;
  /* xdebugSupport_Pkg::combineForLevelChange::_L108 */
  static kcg_bool _L108;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static dataCollectionForLevelTransitio last_infoForLevelTransition;
  
  kcg_copy__7_P12_Level1MovementA(
    &outC->Data_to_From_Track_Packets_at_M.P_12,
    (_7_P12_Level1MovementAuthoritie *) &Default_P12_legacy_xdebugSuppor);
  kcg_copy_P135_StopShuntingOnDes(
    &outC->Data_to_From_Track_Packets_at_M.P_135,
    (P135_StopShuntingOnDeskOpening_ *) &Default_P135_legacy_xdebugSuppo);
  kcg_copy_P63_ListofBalisesinSRA(
    &outC->Data_to_From_Track_Packets_at_M.P_63,
    (P63_ListofBalisesinSRAuthority_ *) &Default_P63_legacy_xdebugSuppor);
  kcg_copy_P80_ModeProfiles_T_Pac(
    &outC->Data_to_From_Track_Packets_at_M.P_80,
    (P80_ModeProfiles_T_Packet_Types *) &Default_P80_legacy_xdebugSuppor);
  /* ck_msgToCheck */ if ((*actualMessage).valid) {
  }
  else {
    /* last_init_ck_level */ if (outC->init) {
      tmp2 = M_LEVEL_Level_0;
    }
    else {
      tmp2 = outC->rem_level;
    }
    tmp1 = ((*ModeLevel).level != tmp2) | transitionPositionPassed;
  }
  /* last_init_ck_LRBGpositionNeeded */ if (outC->init) {
    kcg_copy_dataCollectionForLevel(
      &last_infoForLevelTransition,
      (dataCollectionForLevelTransitio *) &cNoML_xdebugSupport_Pkg);
    outC->init = kcg_false;
    tmp = kcg_true;
  }
  else {
    kcg_copy_dataCollectionForLevel(
      &last_infoForLevelTransition,
      &outC->infoForLevelTransition);
    tmp = outC->LRBGpositionNeeded;
  }
  /* ck_msgToCheck */ if ((*actualMessage).valid) {
    /* dataForLevelTransition */
    dataForLevelTransition_xdebugSu(
      actualMessage,
      &last_infoForLevelTransition,
      trainPosition,
      tmp,
      (*ModeLevel).level,
      &outC->infoForLevelTransition,
      &outC->LRBGpositionNeeded);
  }
  else /* ck_anon_activ */ if (tmp1) {
    outC->LRBGpositionNeeded = kcg_false;
    kcg_copy_dataCollectionForLevel(
      &outC->infoForLevelTransition,
      (dataCollectionForLevelTransitio *) &cNoML_xdebugSupport_Pkg);
  }
  else {
    kcg_copy_dataCollectionForLevel(
      &outC->infoForLevelTransition,
      &last_infoForLevelTransition);
    outC->LRBGpositionNeeded = tmp;
  }
  kcg_copy__8_P46_ConditionalLeve(
    &outC->Data_to_From_Track_Packets_at_M.P_46,
    &outC->infoForLevelTransition.p46);
  outC->Data_to_From_Track_Packets_at_M.LRBG =
    outC->infoForLevelTransition.LRBG;
  outC->Data_to_From_Track_Packets_at_M.referenceLocation =
    outC->infoForLevelTransition.referenceLocation;
  outC->forLevelManagement.P12_received =
    outC->infoForLevelTransition.p12_received;
  outC->forLevelManagement.P15_received =
    outC->infoForLevelTransition.p15_received;
  outC->forLevelManagement.P21_received =
    outC->infoForLevelTransition.p21_received;
  outC->forLevelManagement.P27_received =
    outC->infoForLevelTransition.p27_received;
  /* 6 */ if (outC->infoForLevelTransition.p41[0].valid) {
    tmp1 = outC->infoForLevelTransition.p41[0].m_leveltr == M_LEVELTR_Level_2;
    tmp = outC->infoForLevelTransition.p41[0].m_leveltr == M_LEVELTR_Level_3;
  }
  else {
    tmp = kcg_false;
    tmp1 = kcg_false;
  }
  _L108 = tmp1 | tmp;
  kcg_copy_filterRelatedEvents_T_(&outC->outFilterEvents, inFilterEvents);
  outC->outFilterEvents.pendingL12L3Transition = _L108;
  outC->outFilterEvents.SPPAndGradientOnBoard = _L108;
  /* 5 */ if (outC->infoForLevelTransition.p41[0].valid) {
    outC->outFilterEvents.pendingL1Transition =
      outC->infoForLevelTransition.p41[0].m_leveltr == M_LEVELTR_Level_1;
  }
  else {
    outC->outFilterEvents.pendingL1Transition = kcg_false;
  }
  /* 1 */
  Read_P137_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_M.P_137);
  /* 1 */
  Read_P138_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_M.P_138);
  /* 1 */
  Read_P139_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_M.P_139);
  /* 1 */
  Read_P015_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_M.P_15);
  /* 1 */
  Read_P021_Legacy_TM_specific(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_M.P_21);
  /* 1 */
  Read_P027V1_Legacy_for_ML_TM_sp(
    &(*actualMessage).packets,
    &outC->Data_to_From_Track_Packets_at_M.P_27);
  /* 8 */ if (outC->LRBGpositionNeeded) {
    kcg_copy_P41_LevelTransistionOr(
      &outC->Data_to_From_Track_Packets_at_M.P_41,
      (P41_LevelTransistionOrders_T_Pa *) &cNoP41_xdebugSupport_Pkg);
  }
  else {
    kcg_copy_P41_LevelTransistionOr(
      &outC->Data_to_From_Track_Packets_at_M.P_41,
      &outC->infoForLevelTransition.p41);
  }
  outC->rem_level = (*ModeLevel).level;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** combineForLevelChange_xdebugSup.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

