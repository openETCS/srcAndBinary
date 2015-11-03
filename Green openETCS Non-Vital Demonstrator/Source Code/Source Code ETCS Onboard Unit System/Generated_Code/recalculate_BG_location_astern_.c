/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_location_astern_.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
void recalculate_BG_location_astern_(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::prevLinkedBG */ positionedBG_T_TrainPosition_Ty *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::refBG */ positionedBG_T_TrainPosition_Ty *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::sumOfBestDistances */ LocWithInAcc_T_Obu_BasicTypes_P *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
  static LocWithInAcc_T_Obu_BasicTypes_P tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L181 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L181;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L195 */
  static kcg_bool _L195;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L212 */
  static kcg_bool _L212;
  
  /* 1 */
  add_2_Distances_BasicLocationFu(
    &(*refBG).location,
    sumOfBestDistances,
    &tmp1);
  /* 1 */ calculateLocalBGInaccuracies_Ca(BG_in, trainProperties, &tmp);
  /* 1 */ sub_2_distances_BasicLocationFu(&tmp1, &tmp, &_L181);
  /* 1 */
  sub_2_odoDistances_BasicLocatio(
    &(*prevLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
    &(*BG_in).infoFromPassing.BG_Header.bgPosition.odo,
    &tmp);
  /* 3 */
  add_2_Distances_BasicLocationFu(
    &(*BG_in).infoFromPassing.BG_Header.BG_centerDetectionInaccuraccura,
    &tmp,
    &tmp1);
  /* 3 */
  sub_2_distances_BasicLocationFu(&(*prevLinkedBG).location, &tmp1, &tmp);
  /* 1 */ overlapOf_2_Locations_BasicLoca(&_L181, &tmp, &tmp1, &_L212);
  _L195 = (*BG_in).valid & (*BG_in).infoFromPassing.valid &
    (*prevLinkedBG).valid & (*prevLinkedBG).infoFromPassing.valid;
  kcg_copy_positionedBG_T_TrainPo(BG_out, BG_in);
  /* 1 */ if ((*BG_in).valid & (*refBG).valid & ((*BG_in).q_link ==
      Q_LINK_Linked)) {
    /* 3 */ if (_L212 & _L195) {
      kcg_copy_LocWithInAcc_T_Obu_Bas(&(*BG_out).location, &tmp1);
    }
    else {
      kcg_copy_LocWithInAcc_T_Obu_Bas(&(*BG_out).location, &_L181);
    }
  }
  else /* 2 */ if (_L195) {
    kcg_copy_LocWithInAcc_T_Obu_Bas(&(*BG_out).location, &tmp);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_Bas(&(*BG_out).location, &(*BG_in).location);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_location_astern_.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

