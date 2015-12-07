/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_Calculate.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex */
void deleteBGs_beforeIndex_Calculate(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::del */ kcg_bool del,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L20 */
  static positionedBGs_T_TrainPosition_T _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::_L21 */
  static kcg_int _L21;
  
  _L8 = del & (indexOfBG > 0) & (indexOfBG < cMaxNoOfStoredBGs_TrainPosition);
  if (_L8) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      deleteBGs_beforeIndex_itr_Calcu(
        i,
        indexOfBG,
        BGs_in,
        &cond_iterw,
        &_L20[i]);
      _L21 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L21 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L21; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPo(
      &_L20[i],
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
#endif /* KCG_MAPW_CPY */
  
  /* 1 */ if (_L8) {
    kcg_copy_positionedBGs_T_TrainP(BGs_out, &_L20);
  }
  else {
    kcg_copy_positionedBGs_T_TrainP(BGs_out, BGs_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBGs_beforeIndex_Calculate.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

