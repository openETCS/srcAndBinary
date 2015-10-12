/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
void mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::overrun */ kcg_bool *overrun)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
  static positionedBGs_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::indexOfBGInBGs */
  static kcg_int indexOfBGInBGs;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::bgFound */
  static kcg_bool bgFound;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::bg_loc */
  static positionedBG_T_TrainPosition_Types_Pck bg_loc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L4 */
  static kcg_int _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L61 */
  static positionedBG_T_TrainPosition_Types_Pck _L61;
  
  /* 2 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BG,
    BGs_in,
    (*BG).valid,
    &indexOfBGInBGs,
    &bgFound,
    &_L3);
  if ((0 <= indexOfBGInBGs) & (indexOfBGInBGs < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L61,
      &(*BGs_in)[indexOfBGInBGs]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L61,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 2 */ if (bgFound & (_L61.missed | _L61.infoFromPassing.valid) &
    (!(*BG).infoFromPassing.valid & (*BG).valid &
      (*BG).infoFromLinking.valid)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&bg_loc, &_L61);
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &bg_loc.infoFromLinking,
      &(*BG).infoFromLinking);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&bg_loc, BG);
  }
  /* 1 */
  indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &bg_loc,
    BGs_in,
    (*BG).valid,
    &_L4,
    &_L5,
    &_L6);
  /* 1 */
  deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    BGs_in,
    indexOfBGInBGs,
    (kcg_bool) ((indexOfBGInBGs != _L4) & bgFound & _L3 & _L6),
    &tmp);
  /* 1 */
  insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &bg_loc,
    &tmp,
    _L4,
    (kcg_bool) ((*BG).valid & _L6),
    BGs_out,
    overrun);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

