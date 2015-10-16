/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr */
void indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::acc_in */ BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::n */ kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::acc_out */ BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr */
  static Q_LINK tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L26 */
  static kcg_bool _L26;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L39 */
  static kcg_int _L39;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr::_L44 */
  static kcg_bool _L44;
  
  /* 2 */ if (linked) {
    tmp = Q_LINK_Linked;
  }
  else {
    tmp = Q_LINK_Unlinked;
  }
  _L26 = (*BG).valid & (*BG).infoFromPassing.valid & ((*BG).q_link == tmp);
  /* 3 */ if (_L26) {
    _L39 = 1 + (*acc_in).noOfFoundBGs;
  }
  else {
    _L39 = (*acc_in).noOfFoundBGs;
  }
  (*acc_out).noOfFoundBGs = _L39;
  _L44 = (_L39 == n) | (*acc_in).BGFound;
  (*acc_out).BGFound = _L44;
  /* 1 */ if (_L26) {
    (*acc_out).index = iteratorIndex;
  }
  else {
    (*acc_out).index = (*acc_in).index;
  }
  *cont = (*BG).valid & !_L44;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

