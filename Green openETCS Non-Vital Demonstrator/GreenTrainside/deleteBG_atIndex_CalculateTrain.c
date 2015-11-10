/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_CalculateTrain.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
void deleteBG_atIndex_CalculateTrain(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::del */ kcg_bool del,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
  static positionedBGs_T_TrainPosition_T tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L15 */
  static positionedBGs_T_TrainPosition_T _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L16 */
  static kcg_int _L16;
  
  _L8 = del & (indexOfBG >= 0) & (indexOfBG < cMaxNoOfStoredBGs_TrainPosition);
  kcg_copy_array_99280(&tmp[0], (array_99280 *) &(*BGs_in)[1]);
  kcg_copy_positionedBG_T_TrainPo(
    &(&tmp[40])[0],
    (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  if (_L8) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      deleteBG_atIndex_itr_CalculateT(
        i,
        indexOfBG,
        &(*BGs_in)[i],
        &tmp[i],
        &cond_iterw,
        &_L15[i]);
      _L16 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L16 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L16; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPo(
      &_L15[i],
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
#endif /* KCG_MAPW_CPY */
  
  /* 1 */ if (_L8) {
    kcg_copy_positionedBGs_T_TrainP(BGs_out, &_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainP(BGs_out, BGs_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBG_atIndex_CalculateTrain.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

