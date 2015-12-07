/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBG_onTrack_CalculateTrainP.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
void mergeBG_onTrack_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::overrun */ kcg_bool *overrun)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
  static positionedBGs_T_TrainPosition_T tmp1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
  static kcg_int tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::indexOfBGInBGs */
  static kcg_int indexOfBGInBGs;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::bgFound */
  static kcg_bool bgFound;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::bg_loc */
  static positionedBG_T_TrainPosition_Ty bg_loc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L4 */
  static kcg_int _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::_L61 */
  static positionedBG_T_TrainPosition_Ty _L61;
  
  /* 2 */
  indexOfBG_by_id_CalculateTrainP(
    BG,
    BGs_in,
    (*BG).valid,
    &indexOfBGInBGs,
    &bgFound,
    &_L5);
  if ((0 <= indexOfBGInBGs) & (indexOfBGInBGs < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&_L61, &(*BGs_in)[indexOfBGInBGs]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &_L61,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  /* 2 */ if (bgFound & (_L61.missed | _L61.infoFromPassing.valid) &
    (!(*BG).infoFromPassing.valid & (*BG).valid &
      (*BG).infoFromLinking.valid)) {
    kcg_copy_positionedBG_T_TrainPo(&bg_loc, &_L61);
    kcg_copy_infoFromLinking_T_Trai(
      &bg_loc.infoFromLinking,
      &(*BG).infoFromLinking);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(&bg_loc, BG);
  }
  /* 1 */
  indexOfBG_onTrack_CalculateTrai(
    &bg_loc,
    BGs_in,
    (*BG).valid,
    &_L4,
    &_L5,
    &_L6);
  /* 1 */
  deleteBG_atIndex_CalculateTrain(BGs_in, indexOfBGInBGs, kcg_false, &tmp1);
  /* 3 */ if (bgFound) {
    tmp = indexOfBGInBGs;
  }
  else {
    tmp = _L4;
  }
  /* 1 */
  insertBG_atIndex_CalculateTrain(
    &bg_loc,
    &tmp1,
    tmp,
    (kcg_bool) ((*BG).valid & _L6),
    BGs_out,
    overrun);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBG_onTrack_CalculateTrainP.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

