/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */
#ifndef _calculateTrainPositionInfo_Cal
#define _calculateTrainPositionInfo_Cal

#include "kcg_types.h"
#include "overlapOf_2_Locations_BasicLoca.h"
#include "positionDerivedFromPassedBG_Cal.h"
#include "lastAndPrevBG_CalculateTrainPos.h"
#include "linkingIsUsed_CalculateTrainPos.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPositionInfo_T_TrainPositi /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::trainPositionInfo */ trainPositionInfo;
  kcg_bool /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::positionCalculationNotConsistent */ positionCalculationNotConsisten;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L62 */ _L62;
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L61 */ _L61;
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L71 */ _L71;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_linkingIsUsed_CalculateTra /* 1 */ _1_Context_1;
  outC_lastAndPrevBG_CalculateTra /* 1 */ Context_1;
  outC_lastAndPrevBG_CalculateTra /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateTrainPositionInfo;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
extern void calculateTrainPositionInfo_Calc(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */ kcg_bool recalculateBGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::passedBG */ positionedBG_T_TrainPosition_Ty *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::reset */ kcg_bool reset,
  outC_calculateTrainPositionInfo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateTrainPositionInfo_rese(
  outC_calculateTrainPositionInfo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateTrainPositionInfo_init(
  outC_calculateTrainPositionInfo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _calculateTrainPositionInfo_Cal */
/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPositionInfo_Calc.h
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

