/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passedBG_2_positionedBG_Calcula.h"

/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
void passedBG_2_positionedBG_Calcula(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */ positionedBG_T_TrainPosition_Ty *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Ty *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBGSeqNo */ kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG */ positionedBG_T_TrainPosition_Ty *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BGpassedInUnexpectedDirection */ kcg_bool *BGpassedInUnexpectedDirection,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::linkedBGs */ linkedBGs_asPositionedBGs_T_Tra *linkedBGs)
{
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp3;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp2;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp1;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BG_wasAnnounced */
  static kcg_bool BG_wasAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed */
  static kcg_bool ifAnnouncedOrABGWasPreviouslyPa;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L15 */
  static kcg_bool _L15_ifAnnouncedOrABGWasPreviou;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L8 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L8_ifAnnouncedOrABGWasPrevious;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else */
  static kcg_bool else_clock_ifAnnouncedOrABGWasP;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L9 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L9_ifAnnouncedOrABGWasPrevious;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L10 */
  static kcg_bool _L10_ifAnnouncedOrABGWasPreviou;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L15 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L155_ifAnnouncedOrABGWasPrevio;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L16 */
  static kcg_bool _L16_ifAnnouncedOrABGWasPreviou;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else */
  static kcg_bool _4_else_clock_ifAnnouncedOrABGW;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L22 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L22_ifAnnouncedOrABGWasPreviou;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L27 */
  static kcg_bool _L27_ifAnnouncedOrABGWasPreviou;
  
  (*passedPositionedBG).valid = (*passedBG).valid;
  (*passedPositionedBG).nid_c = (*passedBG).BG_Header.nid_c;
  (*passedPositionedBG).nid_bg = (*passedBG).BG_Header.nid_bg;
  (*passedPositionedBG).q_link = (*passedBG).BG_Header.q_link;
  (*passedPositionedBG).seqNoOnTrack = passedBGSeqNo;
  (*passedPositionedBG).missed = kcg_false;
  BG_wasAnnounced = (*passedBG_asAnnounced).valid &
    ((*passedBG_asAnnounced).nid_bg == (*passedBG).BG_Header.nid_bg) &
    ((*passedBG_asAnnounced).nid_c == (*passedBG).BG_Header.nid_c) &
    (Q_LINK_Linked == (*passedBG_asAnnounced).q_link) &
    ((*passedBG_asAnnounced).q_link == (*passedBG).BG_Header.q_link) &
    (*passedBG_asAnnounced).infoFromLinking.valid & (*passedBG).valid &
    (*passedBG).BG_Header.valid;
  ifAnnouncedOrABGWasPreviouslyPa = !BG_wasAnnounced &
    !(*previouslyPassedLinkedBG).valid;
  *BGpassedInUnexpectedDirection = BG_wasAnnounced & !(((Q_DIRLRBG_Nominal ==
          (*passedBG).BG_Header.trainOrientationToBG) &
        (Q_LINKORIENTATION_The_balise_gr ==
          (*passedBG_asAnnounced).infoFromLinking.linkingInfo.q_linkorientation)) |
      (((*passedBG).BG_Header.trainOrientationToBG == Q_DIRLRBG_Reverse) &
        (_56_Q_LINKORIENTATION_The_balis ==
          (*passedBG_asAnnounced).infoFromLinking.linkingInfo.q_linkorientation)));
  /* ck_ifAnnouncedOrABGWasPreviouslyPassed */ if (ifAnnouncedOrABGWasPreviouslyPa) {
    *foundNotWhereAnnounced = kcg_false;
    /* 8 */
    sub_2_odoDistances_BasicLocatio(
      &(*passedBG).BG_Header.bgPosition.odo,
      (OdometryLocations_T_Obu_BasicTy *) &cOdometryInitialValue_Obu_Basic,
      &tmp);
    /* 9 */
    add_2_Distances_BasicLocationFu(
      &tmp,
      &(*passedBG).BG_Header.BG_centerDetectionInaccuraccura,
      &_L22_ifAnnouncedOrABGWasPreviou);
    /* 4 */
    overlapOf_2_Locations_BasicLoca(
      &_L22_ifAnnouncedOrABGWasPreviou,
      &_L22_ifAnnouncedOrABGWasPreviou,
      &(*passedPositionedBG).location,
      &_L27_ifAnnouncedOrABGWasPreviou);
  }
  else {
    _4_else_clock_ifAnnouncedOrABGW = !BG_wasAnnounced &
      (*previouslyPassedLinkedBG).valid;
    /* ck_anon_activ */ if (_4_else_clock_ifAnnouncedOrABGW) {
      *foundNotWhereAnnounced = kcg_false;
      /* 5 */
      add_odo_2_Location_BasicLocatio(
        &(*previouslyPassedLinkedBG).location,
        &(*previouslyPassedLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
        &(*passedBG).BG_Header.bgPosition.odo,
        &tmp1);
      /* 13 */
      add_2_Distances_BasicLocationFu(
        &tmp1,
        &(*passedBG).BG_Header.BG_centerDetectionInaccuraccura,
        &_L8_ifAnnouncedOrABGWasPrevious);
      /* 5 */
      overlapOf_2_Locations_BasicLoca(
        &_L8_ifAnnouncedOrABGWasPrevious,
        &_L8_ifAnnouncedOrABGWasPrevious,
        &(*passedPositionedBG).location,
        &_L15_ifAnnouncedOrABGWasPreviou);
    }
    else {
      else_clock_ifAnnouncedOrABGWasP = BG_wasAnnounced &
        !(*previouslyPassedLinkedBG).valid;
      /* ck_anon_activ */ if (else_clock_ifAnnouncedOrABGWasP) {
        *foundNotWhereAnnounced = kcg_false;
        kcg_copy_LocWithInAcc_T_Obu_Bas(
          &(*passedPositionedBG).location,
          &(*passedBG_asAnnounced).location);
      }
      else {
        /* 6 */
        add_odo_2_Location_BasicLocatio(
          &(*previouslyPassedLinkedBG).location,
          &(*previouslyPassedLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
          &(*passedBG).BG_Header.bgPosition.odo,
          &tmp2);
        /* 14 */
        add_2_Distances_BasicLocationFu(
          &tmp2,
          &(*passedBG).BG_Header.BG_centerDetectionInaccuraccura,
          &tmp3);
        /* 3 */
        overlapOf_2_Locations_BasicLoca(
          &(*passedBG_asAnnounced).location,
          &tmp3,
          &_L9_ifAnnouncedOrABGWasPrevious,
          &_L10_ifAnnouncedOrABGWasPreviou);
        /* 6 */
        overlapOf_2_Locations_BasicLoca(
          &(*passedBG_asAnnounced).location,
          &(*passedBG_asAnnounced).location,
          &_L155_ifAnnouncedOrABGWasPrevio,
          &_L16_ifAnnouncedOrABGWasPreviou);
        *foundNotWhereAnnounced = !_L10_ifAnnouncedOrABGWasPreviou;
        /* 4 */ if (_L10_ifAnnouncedOrABGWasPreviou) {
          kcg_copy_LocWithInAcc_T_Obu_Bas(
            &(*passedPositionedBG).location,
            &_L9_ifAnnouncedOrABGWasPrevious);
        }
        else {
          kcg_copy_LocWithInAcc_T_Obu_Bas(
            &(*passedPositionedBG).location,
            &_L155_ifAnnouncedOrABGWasPrevio);
        }
      }
    }
  }
  /* 5 */ if (BG_wasAnnounced) {
    kcg_copy_infoFromLinking_T_Trai(
      &(*passedPositionedBG).infoFromLinking,
      &(*passedBG_asAnnounced).infoFromLinking);
  }
  else {
    kcg_copy_infoFromLinking_T_Trai(
      &(*passedPositionedBG).infoFromLinking,
      (infoFromLinking_T_TrainPosition *) &cNoInfoFromLinking_CalculateTra);
  }
  /* 6 */ if (*foundNotWhereAnnounced | *BGpassedInUnexpectedDirection) {
    kcg_copy_passedBG_T_BG_Types_Pk(
      &(*passedPositionedBG).infoFromPassing,
      (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosit);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pk(
      &(*passedPositionedBG).infoFromPassing,
      passedBG);
  }
  /* 1 */
  positionLinkedBGs_CalculateTrai(
    passedPositionedBG,
    &(*passedBG).linkedBGs,
    trainProperties,
    linkedBGs);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** passedBG_2_positionedBG_Calcula.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

