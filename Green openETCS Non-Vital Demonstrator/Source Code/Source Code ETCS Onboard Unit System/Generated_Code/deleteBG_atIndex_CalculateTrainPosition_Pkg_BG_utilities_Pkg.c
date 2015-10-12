/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
void deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::del */ kcg_bool del,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
  static positionedBGs_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L15 */
  static positionedBGs_T_TrainPosition_Types_Pck _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::_L16 */
  static kcg_int _L16;
  
  _L8 = del & (indexOfBG >= 0) & (indexOfBG <
      cMaxNoOfStoredBGs_TrainPosition_Types_Pck);
  kcg_copy_array_76502(&tmp[0], (array_76502 *) &(*BGs_in)[1]);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &(&tmp[40])[0],
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (_L8) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
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
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L15[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  /* 1 */ if (_L8) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, BGs_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

