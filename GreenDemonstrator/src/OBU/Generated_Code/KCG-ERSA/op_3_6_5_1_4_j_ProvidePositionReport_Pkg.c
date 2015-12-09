/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  kcg_int i;
  
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->rem_LRBG.valid = kcg_true;
  outC->rem_LRBG.nid_c = 0;
  outC->rem_LRBG.nid_bg = 0;
  outC->rem_LRBG.q_link = Q_LINK_Unlinked;
  outC->rem_LRBG.location.nominal = 0;
  outC->rem_LRBG.location.d_min = 0;
  outC->rem_LRBG.location.d_max = 0;
  outC->rem_LRBG.seqNoOnTrack = 0;
  outC->rem_LRBG.infoFromLinking.valid = kcg_true;
  outC->rem_LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->rem_LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->rem_LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->rem_LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->rem_LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->rem_LRBG.infoFromLinking.d_link.nominal = 0;
  outC->rem_LRBG.infoFromLinking.d_link.d_min = 0;
  outC->rem_LRBG.infoFromLinking.d_link.d_max = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->rem_LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->rem_LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->rem_LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->rem_LRBG.infoFromPassing.valid = kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->rem_LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->rem_LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->rem_LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->rem_LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->rem_LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->rem_LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->rem_LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->rem_LRBG.missed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */
void op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */ kcg_bool tmp1;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */ NID_BG tmp;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L17 */ kcg_bool _L17;
  
  _L17 = (Q_LINK_Linked == (*LRBG).q_link) & (*LRBG).valid;
  /* 1 */ if ((*trainPos).linkingIsUsedOnboard) {
    tmp1 = ((*LRBG).nid_bg == (*LRBG).infoFromLinking.linkingInfo.nid_bg) &
      _L17;
  }
  else {
    tmp1 = _L17;
  }
  /* last_init_ck_LRBG */ if (outC->init) {
    outC->init = kcg_false;
    tmp = cPositionedBG_T_ProvidePositionReport_Pkg.nid_bg;
  }
  else {
    tmp = outC->rem_LRBG.nid_bg;
  }
  outC->trigger = tmp1 & ((*LRBG).nid_bg != tmp);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->rem_LRBG, LRBG);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_j_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

