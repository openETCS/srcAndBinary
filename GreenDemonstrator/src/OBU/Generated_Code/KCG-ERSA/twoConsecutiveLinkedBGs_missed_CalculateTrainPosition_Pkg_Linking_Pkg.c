/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void twoConsecutiveLinkedBGs_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  kcg_int i;
  
  outC->secondConsecutiveBG_missed = kcg_true;
  outC->init = kcg_true;
  outC->storedMissedBG.valid = kcg_true;
  outC->storedMissedBG.nid_c = 0;
  outC->storedMissedBG.nid_bg = 0;
  outC->storedMissedBG.q_link = Q_LINK_Unlinked;
  outC->storedMissedBG.location.nominal = 0;
  outC->storedMissedBG.location.d_min = 0;
  outC->storedMissedBG.location.d_max = 0;
  outC->storedMissedBG.seqNoOnTrack = 0;
  outC->storedMissedBG.infoFromLinking.valid = kcg_true;
  outC->storedMissedBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->storedMissedBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->storedMissedBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->storedMissedBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->storedMissedBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->storedMissedBG.infoFromLinking.d_link.nominal = 0;
  outC->storedMissedBG.infoFromLinking.d_link.d_min = 0;
  outC->storedMissedBG.infoFromLinking.d_link.d_max = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->storedMissedBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->storedMissedBG.infoFromPassing.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storedMissedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->storedMissedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->storedMissedBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->storedMissedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->storedMissedBG.missed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed */
void twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missed */ kcg_bool missed,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::passedBG */ positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::reset */ kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L9 */ positionedBG_T_TrainPosition_Types_Pck _L9;
  
  /* last_init_ck_storedMissedBG */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L9,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L9,
      &outC->storedMissedBG);
  }
  outC->secondConsecutiveBG_missed = missed & /* 1 */
    positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      missedLinkedBG,
      &_L9);
  /* 1 */ if (reset | ((*passedBG).valid & ((*passedBG).q_link ==
        Q_LINK_Linked) & (*passedBG).infoFromLinking.valid)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->storedMissedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else /* 4 */ if (missed) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->storedMissedBG,
      missedLinkedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->storedMissedBG,
      &_L9);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

