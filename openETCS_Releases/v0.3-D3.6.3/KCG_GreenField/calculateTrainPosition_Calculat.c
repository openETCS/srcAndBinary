/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPosition_Calculat.h"

#ifndef KCG_USER_DEFINED_INIT
void calculateTrainPosition_init_Cal(outC_calculateTrainPosition_Cal *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->errors.outOfMemSpace = kcg_true;
  outC->errors.passedBG_foundNotWhereExpected = kcg_true;
  outC->errors.positionCalculation_inconsisten = kcg_true;
  outC->errors.linkedBGMissed = kcg_true;
  outC->errors.BGpassedInUnexpectedDirection = kcg_true;
  outC->errors.BG_LinkingConsistencyError = kcg_true;
  outC->errors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->errors.doubleRepositioningError = kcg_true;
  outC->errors.bg.valid = kcg_true;
  outC->errors.bg.nid_c = 0;
  outC->errors.bg.nid_bg = 0;
  outC->errors.bg.q_link = Q_LINK_Unlinked;
  outC->errors.bg.location.nominal = 0;
  outC->errors.bg.location.d_min = 0;
  outC->errors.bg.location.d_max = 0;
  outC->errors.bg.seqNoOnTrack = 0;
  outC->errors.bg.infoFromLinking.valid = kcg_true;
  outC->errors.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->errors.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->errors.bg.infoFromLinking.d_link.nominal = 0;
  outC->errors.bg.infoFromLinking.d_link.d_min = 0;
  outC->errors.bg.infoFromLinking.d_link.d_max = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->errors.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->errors.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    _55_Q_LINKORIENTATION_The_balis;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->errors.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->errors.bg.infoFromPassing.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->errors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->errors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->errors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->errors.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->errors.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->errors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->errors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->errors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->errors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->errors.bg.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->errors.bg.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->errors.bg.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->errors.bg.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_linkorientation =
      _55_Q_LINKORIENTATION_The_balis;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->errors.bg.missed = kcg_true;
  for (i = 0; i < 41; i++) {
    outC->BGs[i].valid = kcg_true;
    outC->BGs[i].nid_c = 0;
    outC->BGs[i].nid_bg = 0;
    outC->BGs[i].q_link = Q_LINK_Unlinked;
    outC->BGs[i].location.nominal = 0;
    outC->BGs[i].location.d_min = 0;
    outC->BGs[i].location.d_max = 0;
    outC->BGs[i].seqNoOnTrack = 0;
    outC->BGs[i].infoFromLinking.valid = kcg_true;
    outC->BGs[i].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs[i].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs[i].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs[i].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs[i].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs[i].infoFromLinking.d_link.nominal = 0;
    outC->BGs[i].infoFromLinking.d_link.d_min = 0;
    outC->BGs[i].infoFromLinking.d_link.d_max = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs[i].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs[i].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs[i].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->BGs[i].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.q_linkorientation =
      _55_Q_LINKORIENTATION_The_balis;
    outC->BGs[i].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs[i].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs[i].infoFromPassing.valid = kcg_true;
    outC->BGs[i].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_acc;
    outC->BGs[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs[i].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs[i].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs[i].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes;
    outC->BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
      0;
    outC->BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
      0;
    outC->BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
      0;
    outC->BGs[i].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->BGs[i].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
      kcg_true;
    outC->BGs[i].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs[i].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i1 = 0; i1 < 33; i1++) {
      outC->BGs[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_scale = Q_SCALE_10_cm_scale;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].d_link = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_c = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_linkorientation =
        _55_Q_LINKORIENTATION_The_balis;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_locacc = 0;
    }
    outC->BGs[i].missed = kcg_true;
  }
  outC->trainPosition.valid = kcg_true;
  outC->trainPosition.timestamp = 0;
  outC->trainPosition.trainPositionIsUnknown = kcg_true;
  outC->trainPosition.noCoordinateSystemHasBeenAssign = kcg_true;
  outC->trainPosition.trainPosition.nominal = 0;
  outC->trainPosition.trainPosition.d_min = 0;
  outC->trainPosition.trainPosition.d_max = 0;
  outC->trainPosition.estimatedFrontEndPosition = 0;
  outC->trainPosition.minSafeFrontEndPosition = 0;
  outC->trainPosition.maxSafeFrontEndPostion = 0;
  outC->trainPosition.LRBG.valid = kcg_true;
  outC->trainPosition.LRBG.nid_c = 0;
  outC->trainPosition.LRBG.nid_bg = 0;
  outC->trainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.location.nominal = 0;
  outC->trainPosition.LRBG.location.d_min = 0;
  outC->trainPosition.LRBG.location.d_max = 0;
  outC->trainPosition.LRBG.seqNoOnTrack = 0;
  outC->trainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    _55_Q_LINKORIENTATION_The_balis;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->trainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _55_Q_LINKORIENTATION_The_balis;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->trainPosition.LRBG.missed = kcg_true;
  outC->trainPosition.prvLRBG.valid = kcg_true;
  outC->trainPosition.prvLRBG.nid_c = 0;
  outC->trainPosition.prvLRBG.nid_bg = 0;
  outC->trainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.location.nominal = 0;
  outC->trainPosition.prvLRBG.location.d_min = 0;
  outC->trainPosition.prvLRBG.location.d_max = 0;
  outC->trainPosition.prvLRBG.seqNoOnTrack = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    _55_Q_LINKORIENTATION_The_balis;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _55_Q_LINKORIENTATION_The_balis;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->trainPosition.prvLRBG.missed = kcg_true;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.linkingIsUsedOnboard = kcg_true;
  outC->trainPosition.estimatedRearEndPosition = 0;
  outC->trainPosition.minSafeRearEndPosition = 0;
  outC->trainPosition.maxSafeRearEndPosition = 0;
  /* 1 */ twoConsecutiveLinkedBGs_m_init_(&outC->_1_Context_1);
  /* 2 */ linkedBG_missed_init_CalculateT(&outC->Context_2);
  /* 1 */ calculateTrainPositionInfo_init(&outC->Context_1);
  /* 6 */ calculateBGLocations_init_Calcu(&outC->Context_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateTrainPosition_reset_Ca(outC_calculateTrainPosition_Cal *outC)
{
  outC->init = kcg_true;
  /* 1 */ twoConsecutiveLinkedBGs_m_reset(&outC->_1_Context_1);
  /* 2 */ linkedBG_missed_reset_Calculate(&outC->Context_2);
  /* 1 */ calculateTrainPositionInfo_rese(&outC->Context_1);
  /* 6 */ calculateBGLocations_reset_Calc(&outC->Context_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::calculateTrainPosition */
void calculateTrainPosition_Calculat(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ ReceivedMessage_T_Common_Types_ *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */ kcg_bool reset,
  outC_calculateTrainPosition_Cal *outC)
{
  /* CalculateTrainPosition_Pkg::calculateTrainPosition */
  static positionedBGs_T_TrainPosition_T tmp;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L10 */
  static positionedBGs_T_TrainPosition_T _L10_if_BGpassed_or_onlyAnnounc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L13 */
  static kcg_bool _L13_if_BGpassed_or_onlyAnnounc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */
  static positionedBGs_T_TrainPosition_T last_BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced */
  static kcg_bool if_BGpassed_or_onlyAnnounced_cl;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BG_passed */
  static kcg_bool BG_passed;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::onlyBGsAnnouncedViaRadio */
  static kcg_bool onlyBGsAnnouncedViaRadio;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */
  static positionErrors_T_TrainPosition_ errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */
  static positionedBG_T_TrainPosition_Ty passedBG_asPositionedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPositionInfo */
  static trainPositionInfo_T_TrainPositi trainPositionInfo;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_loc */
  static passedBG_T_BG_Types_Pkg passedBG_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_preloc */
  static positionedBGs_T_TrainPosition_T BGs_preloc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L306 */
  static passedBG_T_BG_Types_Pkg _L306;
  
  outC->errors.doubleRepositioningError = kcg_false;
  /* 1 */
  msg_2_passedBG_CalculateTrainPo(
    msgFromTrack,
    &_L306,
    &if_BGpassed_or_onlyAnnounced_cl,
    &_L13_if_BGpassed_or_onlyAnnounc);
  /* 13 */ if ((*passedBG).valid) {
    BG_passed = (*passedBG).BG_Header.valid & (*passedBG).valid;
    onlyBGsAnnouncedViaRadio = !(*passedBG).BG_Header.valid & (*passedBG).valid;
    kcg_copy_passedBG_T_BG_Types_Pk(&passedBG_loc, passedBG);
  }
  else {
    BG_passed = if_BGpassed_or_onlyAnnounced_cl;
    onlyBGsAnnouncedViaRadio = _L13_if_BGpassed_or_onlyAnnounc;
    kcg_copy_passedBG_T_BG_Types_Pk(&passedBG_loc, &_L306);
  }
  if_BGpassed_or_onlyAnnounced_cl = BG_passed | reset;
  /* last_init_ck_BGs_loc */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBGs_T_TrainP(
      &last_BGs_loc,
      (positionedBGs_T_TrainPosition_T *) &cNoPositionedBGs_CalculateTrain);
  }
  else {
    kcg_copy_positionedBGs_T_TrainP(&last_BGs_loc, &outC->BGs);
  }
  /* ck_if_BGpassed_or_onlyAnnounced */ if (if_BGpassed_or_onlyAnnounced_cl) {
    /* 9 */ if (reset) {
      kcg_copy_positionedBGs_T_TrainP(
        &tmp,
        (positionedBGs_T_TrainPosition_T *) &cNoPositionedBGs_CalculateTrain);
    }
    else {
      kcg_copy_positionedBGs_T_TrainP(&tmp, &last_BGs_loc);
    }
    /* 6 */
    calculateBGLocations_CalculateT(
      &passedBG_loc,
      &tmp,
      reset,
      trainProperties,
      &outC->Context_6);
    kcg_copy_positionedBGs_T_TrainP(
      &_L10_if_BGpassed_or_onlyAnnounc,
      &outC->Context_6.BGs);
    /* 2 */
    delDispensableBGs_CalculateTrai(
      &_L10_if_BGpassed_or_onlyAnnounc,
      kcg_true,
      &BGs_preloc);
    kcg_copy_positionedBG_T_TrainPo(
      &passedBG_asPositionedBG,
      &outC->Context_6.passedPositionedBG);
    kcg_copy_positionErrors_T_Train(&errors_loc, &outC->Context_6.errors);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &passedBG_asPositionedBG,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    /* ck_anon_activ */ if (onlyBGsAnnouncedViaRadio) {
      /* 1 */
      addAnnouncedBGs_CalculateTrainP(
        &passedBG_loc,
        &last_BGs_loc,
        trainProperties,
        &BGs_preloc,
        &_L13_if_BGpassed_or_onlyAnnounc);
      kcg_copy_positionErrors_T_Train(
        &errors_loc,
        (positionErrors_T_TrainPosition_ *) &cNoPositionErrors_CalculateTrai);
      errors_loc.outOfMemSpace = _L13_if_BGpassed_or_onlyAnnounc;
    }
    else {
      kcg_copy_positionedBGs_T_TrainP(&BGs_preloc, &last_BGs_loc);
      kcg_copy_positionErrors_T_Train(
        &errors_loc,
        (positionErrors_T_TrainPosition_ *) &cNoPositionErrors_CalculateTrai);
    }
  }
  /* 1 */
  calculateTrainPositionInfo_Calc(
    currentOdometry,
    &BGs_preloc,
    (kcg_bool) (onlyBGsAnnouncedViaRadio | BG_passed | reset),
    &passedBG_asPositionedBG,
    reset,
    &outC->Context_1);
  outC->errors.positionCalculation_inconsisten =
    outC->Context_1.positionCalculationNotConsisten;
  kcg_copy_trainPositionInfo_T_Tr(
    &trainPositionInfo,
    &outC->Context_1.trainPositionInfo);
  /* 1 */
  calculateTrainpositionAttribute(
    &trainPositionInfo,
    currentOdometry,
    trainProperties,
    &outC->trainPosition);
  outC->errors.outOfMemSpace = errors_loc.outOfMemSpace;
  outC->errors.passedBG_foundNotWhereExpected =
    errors_loc.passedBG_foundNotWhereExpected;
  outC->errors.BGpassedInUnexpectedDirection =
    errors_loc.BGpassedInUnexpectedDirection;
  /* 2 */
  linkedBG_missed_CalculateTrainP(
    &trainPositionInfo.trainPosition,
    &BGs_preloc,
    kcg_true,
    &outC->Context_2);
  outC->errors.linkedBGMissed = outC->Context_2.missed;
  outC->errors.BG_LinkingConsistencyError = outC->Context_2.missed |
    errors_loc.BG_LinkingConsistencyError;
  kcg_copy_positionedBGs_T_TrainP(&outC->BGs, &outC->Context_2.BGs_out);
  /* 1 */
  twoConsecutiveLinkedBGs_m_Calcu(
    outC->Context_2.missed,
    &outC->Context_2.BG,
    &passedBG_asPositionedBG,
    reset,
    &outC->_1_Context_1);
  outC->errors.twoConsecutiveLinkedBGs_missed =
    outC->_1_Context_1.secondConsecutiveBG_missed;
  /* 17 */ if (outC->Context_2.missed) {
    kcg_copy_positionedBG_T_TrainPo(&outC->errors.bg, &outC->Context_2.BG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&outC->errors.bg, &errors_loc.bg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPosition_Calculat.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

