/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBG_bckwd_itr_Calculat.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr */
void findLinkedBG_bckwd_itr_Calculat(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_acc_in */ linkedBG_index_T_CalculateTrain *index_acc_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_in */ linkedBG_index_T_CalculateTrain *index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::BG_in */ positionedBG_T_TrainPosition_Ty *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_acc_out */ linkedBG_index_T_CalculateTrain *index_acc_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_out */ linkedBG_index_T_CalculateTrain *index_out)
{
  (*index_acc_out).previousLinkedBG_idx = (*index_in).previousLinkedBG_idx;
  (*index_acc_out).currentIndex = (*index_in).currentIndex;
  /* 1 */ if ((*BG_in).valid & ((*BG_in).q_link == Q_LINK_Linked)) {
    (*index_acc_out).subsequentLinkedBG_idx = (*index_in).currentIndex;
  }
  else {
    (*index_acc_out).subsequentLinkedBG_idx =
      (*index_acc_in).subsequentLinkedBG_idx;
  }
  kcg_copy_linkedBG_index_T_Calcu(index_out, index_acc_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findLinkedBG_bckwd_itr_Calculat.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

