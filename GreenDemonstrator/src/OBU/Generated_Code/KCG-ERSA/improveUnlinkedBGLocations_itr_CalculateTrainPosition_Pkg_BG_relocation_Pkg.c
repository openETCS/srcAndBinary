/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */
void improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BG_index_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BG_index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */ positionedBG_T_TrainPosition_Types_Pck tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */ positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L2 */ positionedBG_T_TrainPosition_Types_Pck _L2;
  
  if ((0 <= (*BG_index_in).currentIndex) & ((*BG_index_in).currentIndex < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L2,
      &(*BGs_in)[(*BG_index_in).currentIndex]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L2,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  *cont = _L2.valid;
  if ((0 <= (*BG_index_in).subsequentLinkedBG_idx) &
    ((*BG_index_in).subsequentLinkedBG_idx < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      &(*BGs_in)[(*BG_index_in).subsequentLinkedBG_idx]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  if ((0 <= (*BG_index_in).previousLinkedBG_idx) &
    ((*BG_index_in).previousLinkedBG_idx < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*BGs_in)[(*BG_index_in).previousLinkedBG_idx]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &tmp1,
    &tmp,
    &_L2,
    BG_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

