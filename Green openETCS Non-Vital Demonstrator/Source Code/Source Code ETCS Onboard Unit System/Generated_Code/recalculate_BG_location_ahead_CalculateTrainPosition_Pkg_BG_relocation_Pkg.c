/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
void recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::prevLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::refBG */ positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::sumOfBestDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::_L165 */
  static kcg_bool _L165;
  
  _L165 = (*BG_in).valid & (*prevLinkedBG).valid & (*refBG).valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, BG_in);
  /* 6 */ if (_L165 & ((*BG_in).q_link == Q_LINK_Linked)) {
    /* 1 */
    calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      BG_in,
      trainProperties,
      &tmp3);
    /* 3 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &(*refBG).location,
      sumOfBestDistances,
      &tmp2);
    /* 4 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &tmp3,
      &tmp2,
      &(*BG_out).location);
  }
  else /* 7 */ if (_L165 & (*BG_in).infoFromPassing.valid &
    (*prevLinkedBG).infoFromPassing.valid) {
    /* 2 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*BG_in).infoFromPassing.BG_Header.bgPosition.odo,
      &(*prevLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
      &tmp);
    /* 5 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &(*BG_in).infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies,
      &tmp,
      &tmp1);
    /* 6 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &tmp1,
      &(*prevLinkedBG).location,
      &(*BG_out).location);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*BG_out).location,
      &(*BG_in).location);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

