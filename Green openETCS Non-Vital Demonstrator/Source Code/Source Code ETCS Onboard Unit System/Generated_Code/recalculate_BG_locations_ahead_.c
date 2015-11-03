/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_ahead_.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
void recalculate_BG_locations_ahead_(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_in */ refBGs_T_CalculateTrainPosition *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_out */ refBGs_T_CalculateTrainPosition *refBGs_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
  static positionedBG_T_TrainPosition_Ty tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BGin_is_refBG */
  static kcg_bool BGin_is_refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refLocation */
  static LocWithInAcc_T_Obu_BasicTypes_P refLocation;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBG */
  static positionedBG_T_TrainPosition_Ty refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::relocatedBG */
  static positionedBG_T_TrainPosition_Ty relocatedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::sumOfBestDistances */
  static LocWithInAcc_T_Obu_BasicTypes_P sumOfBestDistances;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L96 */
  static kcg_bool _L96;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L106 */
  static kcg_bool _L106;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L137 */
  static kcg_bool _L137;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L302 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L302;
  
  BGin_is_refBG = /* 3 */
    positionedBGs_ids_equal_Calcula(&(*refBGs_in).refBG, BG_in);
  (*refBGs_out).recalculate = BGin_is_refBG | ((*refBGs_in).recalculate &
      (*BG_in).valid);
  /* calculateLocalBGInaccuracies */
  calculateLocalBGInaccuracies_Ca(BG_in, trainProperties, &refLocation);
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &_L302,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocWithInAcc_0_Obu_BasicTypes_);
  _L302.nominal = (*BG_in).location.nominal;
  /* 6 */ add_2_Distances_BasicLocationFu(&refLocation, &_L302, &tmp1);
  /* 1 */
  overlapOf_2_Locations_BasicLoca(&tmp1, &(*BG_in).location, &_L302, &_L106);
  /* 14 */ if (BGin_is_refBG) {
    /* 31 */ if (_L106) {
      kcg_copy_LocWithInAcc_T_Obu_Bas(&refLocation, &_L302);
    }
    else {
      kcg_copy_LocWithInAcc_T_Obu_Bas(&refLocation, &(*BG_in).location);
    }
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(&refLocation, &(*BG_in).location);
  }
  kcg_copy_positionedBG_T_TrainPo(&relocatedBG, &(*refBGs_in).refBG);
  kcg_copy_LocWithInAcc_T_Obu_Bas(&relocatedBG.location, &refLocation);
  /* 24 */ if (BGin_is_refBG) {
    /* 25 */ if ((*refBGs_in).refBG.valid &
      (*refBGs_in).refBG.infoFromLinking.valid) {
      kcg_copy_positionedBG_T_TrainPo(&refBG, &relocatedBG);
      kcg_copy_LocWithInAcc_T_Obu_Bas(
        &refBG.infoFromLinking.expectedLocation,
        &refLocation);
    }
    else {
      kcg_copy_positionedBG_T_TrainPo(&refBG, &relocatedBG);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&refBG, &(*refBGs_in).refBG);
  }
  kcg_copy_positionedBG_T_TrainPo(&(*refBGs_out).refBG, &refBG);
  _L106 = Q_LINK_Linked == refBG.q_link;
  _L96 = BGin_is_refBG & !_L106 & refBG.infoFromPassing.valid &
    (*refBGs_in).prevLinkedBG.valid &
    (*refBGs_in).prevLinkedBG.infoFromPassing.valid;
  /* 2 */
  sub_2_odoDistances_BasicLocatio(
    &refBG.infoFromPassing.BG_Header.bgPosition.odo,
    &(*refBGs_in).prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo,
    &tmp1);
  /* 9 */
  add_2_Distances_BasicLocationFu(
    &tmp1,
    &(*refBGs_in).prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura,
    &_L302);
  /* 27 */ if (BGin_is_refBG & (*BG_in).valid) {
    /* 30 */ if (_L96) {
      kcg_copy_LocWithInAcc_T_Obu_Bas(&tmp1, &_L302);
    }
    else {
      kcg_copy_LocWithInAcc_T_Obu_Bas(
        &tmp1,
        (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocWithInAcc_0_Obu_BasicTypes_);
    }
    /* 4 */
    sub_2_distances_BasicLocationFu(
      (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocWithInAcc_0_Obu_BasicTypes_,
      &tmp1,
      &sumOfBestDistances);
  }
  else /* 28 */ if ((*BG_in).valid & (*BG_in).infoFromLinking.valid) {
    /* 7 */
    add_2_Distances_BasicLocationFu(
      &(*BG_in).infoFromLinking.d_link,
      &(*refBGs_in).sumOfBestDistances,
      &sumOfBestDistances);
  }
  else /* 29 */ if ((*BG_in).valid & ((*BG_in).q_link == Q_LINK_Linked) &
    (*BG_in).infoFromPassing.valid & (*refBGs_in).prevLinkedBG.valid &
    (*refBGs_in).prevLinkedBG.infoFromPassing.valid) {
    /* 4 */
    sub_2_odoDistances_BasicLocatio(
      &(*BG_in).infoFromPassing.BG_Header.bgPosition.odo,
      &(*refBGs_in).prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo,
      &refLocation);
    /* 8 */
    add_2_Distances_BasicLocationFu(
      &refLocation,
      &(*refBGs_in).sumOfBestDistances,
      &sumOfBestDistances);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(
      &sumOfBestDistances,
      &(*refBGs_in).sumOfBestDistances);
  }
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*refBGs_out).sumOfBestDistances,
    &sumOfBestDistances);
  /* 23 */ if ((*refBGs_in).recalculate) {
    /* 1 */
    recalculate_BG_location_ahead_C(
      BG_in,
      &(*refBGs_in).prevLinkedBG,
      &(*refBGs_in).refBG,
      &sumOfBestDistances,
      trainProperties,
      &relocatedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&relocatedBG, BG_in);
  }
  _L137 = Q_LINK_Unlinked == refBG.q_link;
  /* 17 */ if (BGin_is_refBG & _L106) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &refBG);
  }
  else /* 18 */ if (_L96) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*refBGs_in).prevLinkedBG);
    /* 2 */
    sub_2_distances_BasicLocationFu(&refBG.location, &_L302, &tmp.location);
  }
  else /* 19 */ if (Q_LINK_Linked == relocatedBG.q_link) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &relocatedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*refBGs_in).prevLinkedBG);
  }
  kcg_copy_positionedBG_T_TrainPo(&(*refBGs_out).prevLinkedBG, &tmp);
  /* 20 */ if (BGin_is_refBG & _L137) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &refBG);
  }
  else /* 21 */ if (BGin_is_refBG & !_L137 & refBG.infoFromPassing.valid &
    (*refBGs_in).prevUnlinkedBG.valid &
    (*refBGs_in).prevUnlinkedBG.infoFromPassing.valid) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*refBGs_in).prevUnlinkedBG);
    /* 3 */
    sub_2_odoDistances_BasicLocatio(
      &refBG.infoFromPassing.BG_Header.bgPosition.odo,
      &(*refBGs_in).prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo,
      &refLocation);
    /* 12 */
    add_2_Distances_BasicLocationFu(
      &refLocation,
      &(*refBGs_in).prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura,
      &tmp1);
    /* 3 */
    sub_2_distances_BasicLocationFu(&refBG.location, &tmp1, &tmp.location);
  }
  else /* 22 */ if (Q_LINK_Unlinked == relocatedBG.q_link) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &relocatedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*refBGs_in).prevUnlinkedBG);
  }
  kcg_copy_positionedBG_T_TrainPo(&(*refBGs_out).prevUnlinkedBG, &tmp);
  /* 26 */ if (BGin_is_refBG) {
    kcg_copy_positionedBG_T_TrainPo(BG_out, &refBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(BG_out, &relocatedBG);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_locations_ahead_.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

