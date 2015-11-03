/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_CalculateTrai.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
void positionLinkedBGs_CalculateTrai(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::passedPositionedBG */ positionedBG_T_TrainPosition_Ty *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedBGs */ LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::linkedPositionedBGs */ linkedBGs_asPositionedBGs_T_Tra *linkedPositionedBGs)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs */
  static LocWithInAcc_T_Obu_BasicTypes_P acc;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs::_L6 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L6;
  
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &_L6,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocWithInAcc_0_Obu_BasicTypes_);
  for (i = 0; i < 33; i++) {
    kcg_copy_LocWithInAcc_T_Obu_Bas(&acc, &_L6);
    /* 1 */
    positionLinkedBGs_itr_Calculate(
      &acc,
      passedPositionedBG,
      &(*linkedBGs)[i],
      trainProperties,
      &_L6,
      &(*linkedPositionedBGs)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionLinkedBGs_CalculateTrai.c
** Generation date: 2015-11-03T13:50:15
*************************************************************$ */

