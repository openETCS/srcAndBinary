/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr */
void indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr::indexOfBG */ kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG_itr */
  static Q_LINK tmp;
  
  *cont = (*BG).valid;
  /* 2 */ if (linked) {
    tmp = Q_LINK_Linked;
  }
  else {
    tmp = Q_LINK_Unlinked;
  }
  /* 1 */ if (*cont & ((*BG).q_link == tmp)) {
    *indexOfBG = iteratorIndex;
  }
  else {
    *indexOfBG = prevIndex;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

