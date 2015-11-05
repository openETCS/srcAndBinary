/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_CalculateTrainP.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
void indexOfBG_by_id_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id::indexValid */ kcg_bool *indexValid)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
  static kcg_int acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id */
  static positionedBG_T_TrainPosition_Ty tmp;
  
  *indexOfBG = cNoValidIndex_CalculateTrainPos;
  if (enable) {
    for (i = 0; i < 41; i++) {
      acc = *indexOfBG;
      /* 1 */
      indexOfBG_by_id_itr_CalculateTr(
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
  *BG_found = *indexValid & tmp.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfBG_by_id_CalculateTrainP.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

