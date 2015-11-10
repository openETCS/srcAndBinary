/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _posInRangeOfBG_CalculateTrainP
#define _posInRangeOfBG_CalculateTrainP

#include "kcg_types.h"
#include "posInRangeOfBG_itr_CalculateTra.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG */
extern void posInRangeOfBG_CalculateTrainPo(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::position */ LocWithInAcc_T_Obu_BasicTypes_P *position,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::isInRange */ kcg_bool *isInRange,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG::BG */ positionedBG_T_TrainPosition_Ty *BG);

#endif /* _posInRangeOfBG_CalculateTrainP */
/* $**************** KCG Version 6.4 (build i21) ****************
** posInRangeOfBG_CalculateTrainPo.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

