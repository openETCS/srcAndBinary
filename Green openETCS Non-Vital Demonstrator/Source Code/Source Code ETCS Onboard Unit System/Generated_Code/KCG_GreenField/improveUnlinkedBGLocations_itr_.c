/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_itr_.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */
void improveUnlinkedBGLocations_itr_(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BG_index_in */ linkedBG_index_T_CalculateTrain *BG_index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::BG_out */ positionedBG_T_TrainPosition_Ty *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */
  static positionedBG_T_TrainPosition_Ty tmp1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr */
  static positionedBG_T_TrainPosition_Ty tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr::_L2 */
  static positionedBG_T_TrainPosition_Ty _L2;
  
  if ((0 <= (*BG_index_in).currentIndex) & ((*BG_index_in).currentIndex < 41)) {
    kcg_copy_positionedBG_T_TrainPo(
      &_L2,
      &(*BGs_in)[(*BG_index_in).currentIndex]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &_L2,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  *cont = _L2.valid;
  if ((0 <= (*BG_index_in).subsequentLinkedBG_idx) &
    ((*BG_index_in).subsequentLinkedBG_idx < 41)) {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp1,
      &(*BGs_in)[(*BG_index_in).subsequentLinkedBG_idx]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp1,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  if ((0 <= (*BG_index_in).previousLinkedBG_idx) &
    ((*BG_index_in).previousLinkedBG_idx < 41)) {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp,
      &(*BGs_in)[(*BG_index_in).previousLinkedBG_idx]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  /* 1 */ improveUnlinkedBGLocation_Calcu(&tmp1, &tmp, &_L2, BG_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improveUnlinkedBGLocations_itr_.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

