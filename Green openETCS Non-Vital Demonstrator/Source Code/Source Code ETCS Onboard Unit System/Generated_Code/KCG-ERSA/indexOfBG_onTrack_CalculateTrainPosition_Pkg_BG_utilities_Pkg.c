/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
void indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::indexValid */ kcg_bool *indexValid)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */ kcg_int acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */ kcg_bool cond_iterw;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */ positionedBG_T_TrainPosition_Types_Pck tmp;
  
  *indexOfBG = cNoValidIndex_CalculateTrainPosition_Pkg;
  if (enable) {
    for (i = 0; i < 41; i++) {
      acc = *indexOfBG;
      /* 1 */
      indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
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
  *indexValid = *indexOfBG != cNoValidIndex_CalculateTrainPosition_Pkg;
  if ((0 <= *indexOfBG) & (*indexOfBG < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &(*BGs)[*indexOfBG]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  *BG_found = *indexValid & /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      BG,
      &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

