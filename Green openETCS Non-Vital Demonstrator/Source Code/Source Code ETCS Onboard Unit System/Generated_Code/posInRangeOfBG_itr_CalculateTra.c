/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_itr_CalculateTra.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr */
void posInRangeOfBG_itr_CalculateTra(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::iteratorIndex */ kcg_int iteratorIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::prevIndex */ kcg_int prevIndex,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::position */ LocWithInAcc_T_Obu_BasicTypes_P *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::cont */ kcg_bool *cont,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::indexOfBG */ kcg_int *indexOfBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::inRange */
  static kcg_bool inRange;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L37 */
  static kcg_bool _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L36 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L36;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr::_L40 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L40;
  
  /* 1 */ sub_2_distances_BasicLocationFu(position, &(*BG).location, &_L40);
  /* 1 */
  overlapOf_2_Locations_BasicLoca(position, &(*BG).location, &_L36, &_L37);
  inRange = (*BG).valid & _L37;
  *cont = (*BG).valid & !(((*BG).valid & (_L40.nominal + _L40.d_max < 0)) |
      inRange);
  /* 1 */ if (inRange) {
    *indexOfBG = iteratorIndex;
  }
  else {
    *indexOfBG = prevIndex;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** posInRangeOfBG_itr_CalculateTra.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

