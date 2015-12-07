/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkedBG_missed_CalculateTrainP.h"

#ifndef KCG_USER_DEFINED_INIT
void linkedBG_missed_init_CalculateT(outC_linkedBG_missed_CalculateT *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->missed = kcg_true;
  outC->init = kcg_true;
  outC->rem_position.nominal = 0;
  outC->rem_position.d_min = 0;
  outC->rem_position.d_max = 0;
  outC->_L2 = 0;
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_c = 0;
  outC->_L3.nid_bg = 0;
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L3.location.nominal = 0;
  outC->_L3.location.d_min = 0;
  outC->_L3.location.d_max = 0;
  outC->_L3.seqNoOnTrack = 0;
  outC->_L3.infoFromLinking.valid = kcg_true;
  outC->_L3.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L3.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L3.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L3.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L3.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L3.infoFromLinking.d_link.nominal = 0;
  outC->_L3.infoFromLinking.d_link.d_min = 0;
  outC->_L3.infoFromLinking.d_link.d_max = 0;
  outC->_L3.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L3.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L3.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->_L3.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L3.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L3.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->_L3.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L3.infoFromPassing.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->_L3.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L3.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L3.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L3.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min = 0;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max = 0;
  outC->_L3.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L3.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->_L3.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->_L3.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->_L3.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L3.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->_L3.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->_L3.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->_L3.missed = kcg_true;
  for (i = 0; i < 41; i++) {
    outC->BGs_out[i].valid = kcg_true;
    outC->BGs_out[i].nid_c = 0;
    outC->BGs_out[i].nid_bg = 0;
    outC->BGs_out[i].q_link = Q_LINK_Unlinked;
    outC->BGs_out[i].location.nominal = 0;
    outC->BGs_out[i].location.d_min = 0;
    outC->BGs_out[i].location.d_max = 0;
    outC->BGs_out[i].seqNoOnTrack = 0;
    outC->BGs_out[i].infoFromLinking.valid = kcg_true;
    outC->BGs_out[i].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs_out[i].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs_out[i].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs_out[i].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs_out[i].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs_out[i].infoFromLinking.d_link.nominal = 0;
    outC->BGs_out[i].infoFromLinking.d_link.d_min = 0;
    outC->BGs_out[i].infoFromLinking.d_link.d_max = 0;
    outC->BGs_out[i].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[i].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs_out[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[i].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[i].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs_out[i].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->BGs_out[i].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs_out[i].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs_out[i].infoFromLinking.linkingInfo.q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->BGs_out[i].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[i].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs_out[i].infoFromPassing.valid = kcg_true;
    outC->BGs_out[i].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_acc;
    outC->BGs_out[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[i].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[i].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes;
    outC->BGs_out[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
      0;
    outC->BGs_out[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
      0;
    outC->BGs_out[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
      0;
    outC->BGs_out[i].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->BGs_out[i].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
      kcg_true;
    outC->BGs_out[i].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[i].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i1 = 0; i1 < 33; i1++) {
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].d_link = 0;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].nid_c = 0;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].q_linkorientation =
        _56_Q_LINKORIENTATION_The_balis;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[i].infoFromPassing.linkedBGs[i1].q_locacc = 0;
    }
    outC->BGs_out[i].missed = kcg_true;
  }
  outC->BG.valid = kcg_true;
  outC->BG.nid_c = 0;
  outC->BG.nid_bg = 0;
  outC->BG.q_link = Q_LINK_Unlinked;
  outC->BG.location.nominal = 0;
  outC->BG.location.d_min = 0;
  outC->BG.location.d_max = 0;
  outC->BG.seqNoOnTrack = 0;
  outC->BG.infoFromLinking.valid = kcg_true;
  outC->BG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->BG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->BG.infoFromLinking.expectedLocation.nominal = 0;
  outC->BG.infoFromLinking.expectedLocation.d_min = 0;
  outC->BG.infoFromLinking.expectedLocation.d_max = 0;
  outC->BG.infoFromLinking.d_link.nominal = 0;
  outC->BG.infoFromLinking.d_link.d_min = 0;
  outC->BG.infoFromLinking.d_link.d_max = 0;
  outC->BG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->BG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->BG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->BG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->BG.infoFromLinking.linkingInfo.d_link = 0;
  outC->BG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->BG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->BG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->BG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->BG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->BG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->BG.infoFromPassing.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->BG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->BG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->BG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->BG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->BG.infoFromPassing.BG_Header.nid_c = 0;
  outC->BG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->BG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->BG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min = 0;
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max = 0;
  outC->BG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->BG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign = kcg_true;
  outC->BG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->BG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->BG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->BG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->BG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->BG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->BG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->BG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->BG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->BG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->BG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->BG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->BG.missed = kcg_true;
  outC->indexOfBG = 0;
  /* 1 */ FallingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void linkedBG_missed_reset_Calculate(outC_linkedBG_missed_CalculateT *outC)
{
  outC->init = kcg_true;
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
void linkedBG_missed_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */ LocWithInAcc_T_Obu_BasicTypes_P *position,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::enable */ kcg_bool enable,
  outC_linkedBG_missed_CalculateT *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L1 */
  static kcg_bool _L1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L52 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L52;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L69 */
  static kcg_bool _L69;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L67 */
  static kcg_int _L67;
  
  /* last_init_ck_position */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBG_T_TrainPo(
      &outC->BG,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    outC->indexOfBG = cNoValidIndex_CalculateTrainPos;
    kcg_copy_LocWithInAcc_T_Obu_Bas(
      &_L52,
      (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocWithInAcc_0_Obu_BasicTypes_);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&outC->BG, &outC->_L3);
    outC->indexOfBG = outC->_L2;
    kcg_copy_LocWithInAcc_T_Obu_Bas(&_L52, &outC->rem_position);
  }
  /* 2 */ sub_2_distances_BasicLocationFu(position, &_L52, &tmp1);
  _L1 = tmp1.nominal >= 0;
  /* ck_movedAhead */ if (_L1) {
    tmp.nominal = (*position).nominal;
    tmp.d_min = _L52.nominal + _L52.d_min - (*position).nominal;
    tmp.d_max = (*position).d_max;
  }
  else {
    tmp.nominal = (*position).nominal;
    tmp.d_min = (*position).d_min;
    tmp.d_max = _L52.nominal + _L52.d_max - (*position).nominal;
  }
  /* 1 */
  posInRangeOfBG_CalculateTrainPo(
    &tmp,
    BGs_in,
    enable,
    &_L1,
    &outC->_L2,
    &outC->_L3);
  /* 1 */ FallingEdge_digital(_L1, &outC->Context_1);
  outC->missed = ((/* 1 */
        positionedBGs_ids_notEqual_Calc(&outC->_L3, &outC->BG) & _L1) |
      outC->Context_1.FE_Output) & (outC->BG.q_link == Q_LINK_Linked) &
    !outC->BG.infoFromPassing.valid;
  outC->BG.missed = outC->missed;
  /* 1 */
  indexOfBG_by_id_CalculateTrainP(
    &outC->BG,
    BGs_in,
    outC->missed,
    &_L67,
    &_L1,
    &_L69);
  /* 1 */ if (_L1 & outC->missed) {
    kcg_copy_positionedBGs_T_TrainP(&outC->BGs_out, BGs_in);
    if ((0 <= _L67) & (_L67 < 41)) {
      kcg_copy_positionedBG_T_TrainPo(&outC->BGs_out[_L67], &outC->BG);
    }
  }
  else {
    kcg_copy_positionedBGs_T_TrainP(&outC->BGs_out, BGs_in);
  }
  kcg_copy_LocWithInAcc_T_Obu_Bas(&outC->rem_position, position);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** linkedBG_missed_CalculateTrainP.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

