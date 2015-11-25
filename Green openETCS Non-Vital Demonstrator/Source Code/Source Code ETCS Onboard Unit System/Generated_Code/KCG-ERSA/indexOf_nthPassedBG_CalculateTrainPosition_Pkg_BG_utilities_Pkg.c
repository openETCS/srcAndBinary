/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */
void indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::n */ kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BG_found */ kcg_bool *BG_found)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */ BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */ kcg_bool cond_iterw;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::_L1 */ BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg _L1;
  
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L1,
    (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  if (enable & (n > 0)) {
    for (i = 0; i < 41; i++) {
      kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &_L1);
      /* 1 */
      indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        &acc,
        linked,
        n,
        &(*BGs)[i],
        &cond_iterw,
        &_L1);
      if (!cond_iterw) {
        break;
      }
    }
  }
  *indexOfBG = _L1.index;
  *BG_found = _L1.BGFound;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

