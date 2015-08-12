/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
#ifndef _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
extern void posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::enable */kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::isInRange */kcg_bool *isInRange,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::indexOfBG */kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BG */positionedBG_T_TrainPosition_Types_Pck *BG);

#endif /* _posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
