/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_CalculateTrainPosition.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
void countBGs_CalculateTrainPosition(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::empty */ kcg_bool *empty,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::full */ kcg_bool *full,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::counters */ BG_counters_T_CalculateTrainPos *counters)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
  static BG_counters_T_CalculateTrainPos acc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  kcg_copy_BG_counters_T_Calculat(
    counters,
    (BG_counters_T_CalculateTrainPos *) &cBGCounters_0_CalculateTrainPos);
  if (enable) {
    for (i = 0; i < 41; i++) {
      kcg_copy_BG_counters_T_Calculat(&acc, counters);
      /* 1 */
      countBGs_itr_CalculateTrainPosi(
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
  *full = (*counters).totalBGsCount == cMaxNoOfStoredBGs_TrainPosition;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countBGs_CalculateTrainPosition.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

