/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "twoConsecutiveLinkedBGs_m_Calcu.h"

#ifndef KCG_USER_DEFINED_INIT
void twoConsecutiveLinkedBGs_m_init_(outC_twoConsecutiveLinkedBGs_m_ *outC)
{
  static kcg_int i;
  
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
    Q_NEWCOUNTRY_Same_country__or__;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->storedMissedBG.infoFromPassing.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storedMissedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
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
    unknownDirection_Obu_BasicTypes;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
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
      Q_NEWCOUNTRY_Same_country__or__;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->storedMissedBG.missed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void twoConsecutiveLinkedBGs_m_reset(outC_twoConsecutiveLinkedBGs_m_ *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed */
void twoConsecutiveLinkedBGs_m_Calcu(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missed */ kcg_bool missed,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missedLinkedBG */ positionedBG_T_TrainPosition_Ty *missedLinkedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::passedBG */ positionedBG_T_TrainPosition_Ty *passedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::reset */ kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_m_ *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L9 */
  static positionedBG_T_TrainPosition_Ty _L9;
  
  /* last_init_ck_storedMissedBG */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBG_T_TrainPo(
      &_L9,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&_L9, &outC->storedMissedBG);
  }
  outC->secondConsecutiveBG_missed = missed & /* 1 */
    positionedBGs_ids_notEqual_Calc(missedLinkedBG, &_L9);
  /* 1 */ if (reset | ((*passedBG).valid & ((*passedBG).q_link ==
        Q_LINK_Linked) & (*passedBG).infoFromLinking.valid)) {
    kcg_copy_positionedBG_T_TrainPo(
      &outC->storedMissedBG,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  else /* 4 */ if (missed) {
    kcg_copy_positionedBG_T_TrainPo(&outC->storedMissedBG, missedLinkedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&outC->storedMissedBG, &_L9);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** twoConsecutiveLinkedBGs_m_Calcu.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

