/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPositionInfo_Calc.h"

#ifndef KCG_USER_DEFINED_INIT
void calculateTrainPositionInfo_init(outC_calculateTrainPositionInfo *outC)
{
  static kcg_int i;
  
  outC->positionCalculationNotConsisten = kcg_true;
  outC->init = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.nid_c = 0;
  outC->_L71.nid_bg = 0;
  outC->_L71.q_link = Q_LINK_Unlinked;
  outC->_L71.location.nominal = 0;
  outC->_L71.location.d_min = 0;
  outC->_L71.location.d_max = 0;
  outC->_L71.seqNoOnTrack = 0;
  outC->_L71.infoFromLinking.valid = kcg_true;
  outC->_L71.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L71.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L71.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L71.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L71.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L71.infoFromLinking.d_link.nominal = 0;
  outC->_L71.infoFromLinking.d_link.d_min = 0;
  outC->_L71.infoFromLinking.d_link.d_max = 0;
  outC->_L71.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->_L71.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L71.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->_L71.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L71.infoFromPassing.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L71.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->_L71.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L71.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L71.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L71.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L71.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->_L71.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L71.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->_L71.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L71.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->_L71.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L71.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L71.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->_L71.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->_L71.missed = kcg_true;
  outC->_L61.valid = kcg_true;
  outC->_L61.nid_c = 0;
  outC->_L61.nid_bg = 0;
  outC->_L61.q_link = Q_LINK_Unlinked;
  outC->_L61.location.nominal = 0;
  outC->_L61.location.d_min = 0;
  outC->_L61.location.d_max = 0;
  outC->_L61.seqNoOnTrack = 0;
  outC->_L61.infoFromLinking.valid = kcg_true;
  outC->_L61.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L61.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L61.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L61.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L61.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L61.infoFromLinking.d_link.nominal = 0;
  outC->_L61.infoFromLinking.d_link.d_min = 0;
  outC->_L61.infoFromLinking.d_link.d_max = 0;
  outC->_L61.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L61.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L61.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L61.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->_L61.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L61.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->_L61.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L61.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L61.infoFromPassing.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L61.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->_L61.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L61.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L61.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L61.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L61.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L61.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->_L61.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L61.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->_L61.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L61.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->_L61.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->_L61.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L61.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L61.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->_L61.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->_L61.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L61.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->_L61.missed = kcg_true;
  outC->_L62.valid = kcg_true;
  outC->_L62.nid_c = 0;
  outC->_L62.nid_bg = 0;
  outC->_L62.q_link = Q_LINK_Unlinked;
  outC->_L62.location.nominal = 0;
  outC->_L62.location.d_min = 0;
  outC->_L62.location.d_max = 0;
  outC->_L62.seqNoOnTrack = 0;
  outC->_L62.infoFromLinking.valid = kcg_true;
  outC->_L62.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L62.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L62.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L62.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L62.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L62.infoFromLinking.d_link.nominal = 0;
  outC->_L62.infoFromLinking.d_link.d_min = 0;
  outC->_L62.infoFromLinking.d_link.d_max = 0;
  outC->_L62.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->_L62.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L62.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->_L62.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L62.infoFromPassing.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L62.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->_L62.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L62.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L62.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L62.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L62.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->_L62.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L62.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->_L62.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L62.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->_L62.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->_L62.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L62.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->_L62.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->_L62.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->_L62.missed = kcg_true;
  outC->trainPositionInfo.valid = kcg_true;
  outC->trainPositionInfo.timestamp = 0;
  outC->trainPositionInfo.trainPosition.nominal = 0;
  outC->trainPositionInfo.trainPosition.d_min = 0;
  outC->trainPositionInfo.trainPosition.d_max = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLin.nominal = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLin.d_min = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLin.d_max = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnl.nominal = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnl.d_min = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnl.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_c = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_bg = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.location.nominal = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_min = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  outC->trainPositionInfo.prevPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_c = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_bg = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.location.nominal = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_min = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_max = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  outC->trainPositionInfo.lastPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_c = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_bg = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.nominal = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_min = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_max = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    _56_Q_LINKORIENTATION_The_balis;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      _56_Q_LINKORIENTATION_The_balis;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
  }
  outC->trainPositionInfo.lastPassedUnlinkedBG.missed = kcg_true;
  outC->trainPositionInfo.speed = 0;
  outC->trainPositionInfo.linkingIsUsedOnboard = kcg_true;
  /* 1 */ linkingIsUsed_init_CalculateTra(&outC->_1_Context_1);
  /* 1 */ lastAndPrevBG_init_CalculateTra(&outC->Context_1);
  /* 2 */ lastAndPrevBG_init_CalculateTra(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateTrainPositionInfo_rese(outC_calculateTrainPositionInfo *outC)
{
  outC->init = kcg_true;
  /* 1 */ linkingIsUsed_reset_CalculateTr(&outC->_1_Context_1);
  /* 1 */ lastAndPrevBG_reset_CalculateTr(&outC->Context_1);
  /* 2 */ lastAndPrevBG_reset_CalculateTr(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
void calculateTrainPositionInfo_Calc(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */ kcg_bool recalculateBGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::passedBG */ positionedBG_T_TrainPosition_Ty *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::reset */ kcg_bool reset,
  outC_calculateTrainPositionInfo *outC)
{
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L7 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L7;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L8 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L8;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L11 */
  static kcg_bool _L11;
  
  outC->trainPositionInfo.valid = (*currentOdometry).valid;
  outC->trainPositionInfo.timestamp = (*currentOdometry).timestamp;
  outC->trainPositionInfo.speed = (*currentOdometry).speed.v_safeNominal;
  /* ck_recalculateBGs */ if (recalculateBGs) {
    /* 2 */
    lastAndPrevBG_CalculateTrainPos(
      passedBG,
      BGs,
      kcg_false,
      reset,
      recalculateBGs,
      &outC->Context_2);
    /* 1 */
    lastAndPrevBG_CalculateTrainPos(
      passedBG,
      BGs,
      kcg_true,
      reset,
      recalculateBGs,
      &outC->Context_1);
    kcg_copy_positionedBG_T_TrainPo(&outC->_L62, &outC->Context_1.lastBG);
    kcg_copy_positionedBG_T_TrainPo(&outC->_L71, &outC->Context_2.lastBG);
    kcg_copy_positionedBG_T_TrainPo(&outC->_L61, &outC->Context_1.prvBG);
  }
  else if (outC->init) {
    kcg_copy_positionedBG_T_TrainPo(
      &outC->_L62,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    kcg_copy_positionedBG_T_TrainPo(
      &outC->_L71,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
    kcg_copy_positionedBG_T_TrainPo(
      &outC->_L61,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  kcg_copy_positionedBG_T_TrainPo(
    &outC->trainPositionInfo.lastPassedLinkedBG,
    &outC->_L62);
  /* 1 */
  positionDerivedFromPassedBG_Cal(&(*currentOdometry).odo, &outC->_L62, &_L7);
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &outC->trainPositionInfo.trainPositionDerivedFromLastLin,
    &_L7);
  kcg_copy_positionedBG_T_TrainPo(
    &outC->trainPositionInfo.lastPassedUnlinkedBG,
    &outC->_L71);
  /* 2 */
  positionDerivedFromPassedBG_Cal(&(*currentOdometry).odo, &outC->_L71, &_L8);
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &outC->trainPositionInfo.trainPositionDerivedFromLastUnl,
    &_L8);
  /* 1 */
  overlapOf_2_Locations_BasicLoca(
    &_L7,
    &_L8,
    &outC->trainPositionInfo.trainPosition,
    &_L11);
  outC->init = kcg_false;
  kcg_copy_positionedBG_T_TrainPo(
    &outC->trainPositionInfo.prevPassedLinkedBG,
    &outC->_L61);
  /* 1 */
  linkingIsUsed_CalculateTrainPos(
    currentOdometry,
    BGs,
    recalculateBGs,
    &outC->_1_Context_1);
  outC->trainPositionInfo.linkingIsUsedOnboard =
    outC->_1_Context_1.linkingIsUsed;
  outC->positionCalculationNotConsisten = !_L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPositionInfo_Calc.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

