/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lastAndPrevBG_CalculateTrainPos.h"

#ifndef KCG_USER_DEFINED_INIT
void lastAndPrevBG_init_CalculateTra(outC_lastAndPrevBG_CalculateTra *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->prvBG_loc.valid = kcg_true;
  outC->prvBG_loc.nid_c = 0;
  outC->prvBG_loc.nid_bg = 0;
  outC->prvBG_loc.q_link = Q_LINK_Unlinked;
  outC->prvBG_loc.location.nominal = 0;
  outC->prvBG_loc.location.d_min = 0;
  outC->prvBG_loc.location.d_max = 0;
  outC->prvBG_loc.seqNoOnTrack = 0;
  outC->prvBG_loc.infoFromLinking.valid = kcg_true;
  outC->prvBG_loc.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->prvBG_loc.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.nominal = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.d_min = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.d_max = 0;
  outC->prvBG_loc.infoFromLinking.d_link.nominal = 0;
  outC->prvBG_loc.infoFromLinking.d_link.d_min = 0;
  outC->prvBG_loc.infoFromLinking.d_link.d_max = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prvBG_loc.infoFromLinking.linkingInfo.d_link = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_c = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->prvBG_loc.infoFromPassing.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->prvBG_loc.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prvBG_loc.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->prvBG_loc.infoFromPassing.BG_Header.m_mcount = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.nid_c = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.nid_bg = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prvBG_loc.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->prvBG_loc.missed = kcg_true;
  outC->lastBG.valid = kcg_true;
  outC->lastBG.nid_c = 0;
  outC->lastBG.nid_bg = 0;
  outC->lastBG.q_link = Q_LINK_Unlinked;
  outC->lastBG.location.nominal = 0;
  outC->lastBG.location.d_min = 0;
  outC->lastBG.location.d_max = 0;
  outC->lastBG.seqNoOnTrack = 0;
  outC->lastBG.infoFromLinking.valid = kcg_true;
  outC->lastBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->lastBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->lastBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->lastBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->lastBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->lastBG.infoFromLinking.d_link.nominal = 0;
  outC->lastBG.infoFromLinking.d_link.d_min = 0;
  outC->lastBG.infoFromLinking.d_link.d_max = 0;
  outC->lastBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lastBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lastBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->lastBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->lastBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->lastBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->lastBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lastBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->lastBG.infoFromPassing.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lastBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->lastBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lastBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->lastBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->lastBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->lastBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->lastBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->lastBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->lastBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->lastBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->lastBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->lastBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->lastBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->lastBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->lastBG.missed = kcg_true;
  outC->prvBG.valid = kcg_true;
  outC->prvBG.nid_c = 0;
  outC->prvBG.nid_bg = 0;
  outC->prvBG.q_link = Q_LINK_Unlinked;
  outC->prvBG.location.nominal = 0;
  outC->prvBG.location.d_min = 0;
  outC->prvBG.location.d_max = 0;
  outC->prvBG.seqNoOnTrack = 0;
  outC->prvBG.infoFromLinking.valid = kcg_true;
  outC->prvBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->prvBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->prvBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->prvBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->prvBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->prvBG.infoFromLinking.d_link.nominal = 0;
  outC->prvBG.infoFromLinking.d_link.d_min = 0;
  outC->prvBG.infoFromLinking.d_link.d_max = 0;
  outC->prvBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prvBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prvBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prvBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->prvBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->prvBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->prvBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prvBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->prvBG.infoFromPassing.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->prvBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->prvBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prvBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->prvBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->prvBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->prvBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->prvBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->prvBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->prvBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prvBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->prvBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->prvBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->prvBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->prvBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->prvBG.missed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void lastAndPrevBG_reset_CalculateTr(outC_lastAndPrevBG_CalculateTra *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
void lastAndPrevBG_CalculateTrainPos(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */ kcg_bool enable,
  outC_lastAndPrevBG_CalculateTra *outC)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
  static Q_LINK tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L10 */
  static positionedBG_T_TrainPosition_Ty _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L17 */
  static positionedBG_T_TrainPosition_Ty _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L23 */
  static kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L21 */
  static kcg_int _L21;
  
  /* last_init_ck_storedBG_loc */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBG_T_TrainPo(
      &_L10,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    kcg_copy_positionedBG_T_TrainPo(
      &_L17,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&_L10, &outC->prvBG_loc);
    kcg_copy_positionedBG_T_TrainPo(&_L17, &outC->lastBG);
  }
  /* 1 */ if (reset) {
    kcg_copy_positionedBG_T_TrainPo(
      &outC->lastBG,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    kcg_copy_positionedBG_T_TrainPo(
      &outC->prvBG_loc,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  else {
    /* 2 */ if (linked) {
      tmp = Q_LINK_Linked;
    }
    else {
      tmp = Q_LINK_Unlinked;
    }
    /* 4 */ if ((*BG).valid & (*BG).infoFromPassing.valid &
      (*BG).infoFromPassing.BG_Header.valid & ((*BG).q_link == tmp)) {
      kcg_copy_positionedBG_T_TrainPo(&outC->lastBG, BG);
    }
    else {
      kcg_copy_positionedBG_T_TrainPo(&outC->lastBG, &_L17);
    }
    _L23 = /* 1 */ positionedBGs_ids_equal_Calcula(&outC->lastBG, &_L10);
    _L22 = /* 2 */ positionedBGs_ids_equal_Calcula(&outC->lastBG, &_L17);
    /* 4 */ if (!kcg_comp_positionedBG_T_TrainPo(&_L17, &outC->lastBG) &
      outC->lastBG.valid & !_L23 & !_L22) {
      kcg_copy_positionedBG_T_TrainPo(&outC->prvBG_loc, &_L17);
    }
    else {
      kcg_copy_positionedBG_T_TrainPo(&outC->prvBG_loc, &_L10);
    }
  }
  /* 1 */
  indexOfBG_by_id_CalculateTrainP(
    &outC->prvBG_loc,
    BGs,
    enable,
    &_L21,
    &_L22,
    &_L23);
  /* 1 */ if (_L22) {
    if ((0 <= _L21) & (_L21 < 41)) {
      kcg_copy_positionedBG_T_TrainPo(&outC->prvBG, &(*BGs)[_L21]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPo(
        &outC->prvBG,
        (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&outC->prvBG, &outC->prvBG_loc);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** lastAndPrevBG_CalculateTrainPos.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

