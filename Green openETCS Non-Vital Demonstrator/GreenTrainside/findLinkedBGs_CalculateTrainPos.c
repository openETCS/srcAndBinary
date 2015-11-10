/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBGs_CalculateTrainPos.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
void findLinkedBGs_CalculateTrainPos(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_indices */ linkedBGs_indices_T_CalculateTr *BGs_indices)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
  static linkedBG_index_T_CalculateTrain acc;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L24 */
  static linkedBGs_indices_T_CalculateTr _L24;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L29 */
  static linkedBGs_indices_T_CalculateTr _L29;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L28 */
  static linkedBG_index_T_CalculateTrain _L28;
  
  kcg_copy_linkedBG_index_T_Calcu(
    &acc,
    (linkedBG_index_T_CalculateTrain *) &cNoLinkedBG_index_CalculateTrai);
  for (i = 0; i < 41; i++) {
    kcg_copy_linkedBG_index_T_Calcu(&_L28, &acc);
    /* 1 */
    findLinkedBG_fwd_itr_CalculateT(&_L28, &(*BGs_in)[i], &acc, &_L24[i]);
  }
  kcg_copy_linkedBG_index_T_Calcu(
    &_L28,
    (linkedBG_index_T_CalculateTrain *) &cNoLinkedBG_index_CalculateTrai);
  for (i = 0; i < 41; i++) {
    kcg_copy_linkedBG_index_T_Calcu(&acc, &_L28);
    /* 1 */
    findLinkedBG_bckwd_itr_Calculat(
      &acc,
      &_L24[40 - i],
      &(*BGs_in)[40 - i],
      &_L28,
      &_L29[i]);
  }
  for (i = 0; i < 41; i++) {
    kcg_copy_linkedBG_index_T_Calcu(&(*BGs_indices)[i], &_L29[40 - i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findLinkedBGs_CalculateTrainPos.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

