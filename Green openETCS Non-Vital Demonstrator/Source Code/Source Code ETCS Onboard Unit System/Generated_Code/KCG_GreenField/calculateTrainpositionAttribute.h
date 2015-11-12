/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _calculateTrainpositionAttribut
#define _calculateTrainpositionAttribut

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFu.h"
#include "add_2_Distances_BasicLocationFu.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateT.h"
#include "frontendToLRBG_CalculateTrainPo.h"
#include "trainMoveDir_vs_refBG_Calculate.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
extern void calculateTrainpositionAttribute(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */ trainPositionInfo_T_TrainPositi *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition);

#endif /* _calculateTrainpositionAttribut */
/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainpositionAttribute.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

