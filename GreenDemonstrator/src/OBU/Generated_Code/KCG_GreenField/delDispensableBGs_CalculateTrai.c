/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "delDispensableBGs_CalculateTrai.h"

/* CalculateTrainPosition_Pkg::delDispensableBGs */
void delDispensableBGs_CalculateTrai(
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::deleteBG */ kcg_bool deleteBG,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out)
{
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L55 */
  static kcg_bool _L55_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1::else::_L54 */
  static kcg_int _L54_IfBlock1;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::_L3 */
  static BG_counters_T_CalculateTrainPos _L3;
  
  /* 1 */
  countBGs_CalculateTrainPosition(
    BGs_in,
    deleteBG,
    &IfBlock1_clock,
    &_L7_IfBlock1,
    &_L3);
  IfBlock1_clock = _L3.passedLinkedBGsCount > 0;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 2 */
    indexOf_nthPassedBG_CalculateTr(
      kcg_true,
      _L3.passedLinkedBGsCount - cNoOfAtLeast_8_LRBGs_CalculateT + 1,
      BGs_in,
      deleteBG,
      &_L6_IfBlock1,
      &_L7_IfBlock1);
    /* 2 */
    deleteBGs_beforeIndex_Calculate(
      BGs_in,
      _L6_IfBlock1,
      (kcg_bool) (_L7_IfBlock1 & deleteBG),
      BGs_out);
  }
  else {
    /* 9 */
    indexOf_nthPassedBG_CalculateTr(
      kcg_false,
      _L3.passedUnlinkedBGsCount - cNoOfAtLeast_x_unlinkedBGs_Calc + 1,
      BGs_in,
      deleteBG,
      &_L54_IfBlock1,
      &_L55_IfBlock1);
    /* 9 */
    deleteBGs_beforeIndex_Calculate(
      BGs_in,
      _L54_IfBlock1,
      (kcg_bool) (_L55_IfBlock1 & deleteBG),
      BGs_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** delDispensableBGs_CalculateTrai.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

