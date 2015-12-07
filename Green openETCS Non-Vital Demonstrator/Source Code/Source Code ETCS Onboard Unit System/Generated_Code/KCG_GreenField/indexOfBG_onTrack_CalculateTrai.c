/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_CalculateTrai.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
void indexOfBG_onTrack_CalculateTrai(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexValid */ kcg_bool *indexValid)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
  static kcg_int acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
  static positionedBG_T_TrainPosition_Ty tmp;
  
  *indexOfBG = cNoValidIndex_CalculateTrainPos;
  if (enable) {
    for (i = 0; i < 41; i++) {
      acc = *indexOfBG;
      /* 1 */
      indexOfBG_onTrack_itr_Calculate(
        i,
        acc,
        BG,
        &(*BGs)[i],
        &cond_iterw,
        indexOfBG);
      if (!cond_iterw) {
        break;
      }
    }
  }
  *indexValid = *indexOfBG != cNoValidIndex_CalculateTrainPos;
  if ((0 <= *indexOfBG) & (*indexOfBG < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*BGs)[*indexOfBG]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  *BG_found = *indexValid & /* 1 */ positionedBGs_ids_equal_Calcula(BG, &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfBG_onTrack_CalculateTrai.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

