/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr */
void deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex_itr */ positionedBG_T_TrainPosition_Types_Pck tmp;
  
  if ((0 <= iteratorIndex) & (iteratorIndex < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*BGs_in)[iteratorIndex]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  }
  *cont = tmp.valid;
  if ((0 <= indexOfBG + iteratorIndex) & (indexOfBG + iteratorIndex < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      BG_out,
      &(*BGs_in)[indexOfBG + iteratorIndex]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      BG_out,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

