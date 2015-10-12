/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
void countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::empty */ kcg_bool *empty,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::full */ kcg_bool *full,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::counters */ BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
  static BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    counters,
    (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  if (enable) {
    for (i = 0; i < 41; i++) {
      kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        counters);
      /* 1 */
      countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &(*BGs_in)[i],
        &cond_iterw,
        counters);
      if (!cond_iterw) {
        break;
      }
    }
  }
  *empty = (*counters).totalBGsCount == 0;
  *full = (*counters).totalBGsCount ==
    cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

