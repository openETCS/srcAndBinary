/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr */
void findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_acc */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_out */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L22 */ kcg_int _L22;
  
  (*index_acc).subsequentLinkedBG_idx = (*index_in).subsequentLinkedBG_idx;
  _L22 = (*index_in).currentIndex + 1;
  (*index_acc).currentIndex = _L22;
  /* 1 */ if ((*BG_in).valid & ((*BG_in).q_link == Q_LINK_Linked)) {
    (*index_acc).previousLinkedBG_idx = _L22;
  }
  else {
    (*index_acc).previousLinkedBG_idx = (*index_in).previousLinkedBG_idx;
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    index_out,
    index_acc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

