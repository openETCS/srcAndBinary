/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */
void insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::indexOfBG */ kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::insert */ kcg_bool insert,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::overrun */ kcg_bool *overrun)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */ positionedBG_T_TrainPosition_Types_Pck tmp1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */ positionedBGs_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex */ kcg_bool cond_iterw;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L15 */ positionedBGs_T_TrainPosition_Types_Pck _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L16 */ kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex::_L34 */ kcg_bool _L34;
  
  if ((0 <= indexOfBG) & (indexOfBG < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      &(*BGs_in)[indexOfBG]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  cond_iterw = /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp1,
      BG);
  *overrun = !cond_iterw & (*BGs_in)[40].valid;
  _L34 = insert & (indexOfBG >= 0) & (indexOfBG <
      cMaxNoOfStoredBGs_TrainPosition_Types_Pck) & (*BG).valid & !*overrun;
  /* 2 */ if (cond_iterw) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp, BGs_in);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(&tmp[0])[0],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_array_120168(&tmp[1], (array_120168 *) &(*BGs_in)[0]);
  }
  if (_L34) {
    for (i = 0; i < 41; i++) {
      /* 1 */
      insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        indexOfBG,
        BG,
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
  
  /* 1 */ if (_L34) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, &_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(BGs_out, BGs_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-25T14:46:13
*************************************************************$ */

