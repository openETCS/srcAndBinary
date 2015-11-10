/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _calculateTrainPosition_Calcula
#define _calculateTrainPosition_Calcula

#include "kcg_types.h"
#include "calculateTrainpositionAttribute.h"
#include "addAnnouncedBGs_CalculateTrainP.h"
#include "delDispensableBGs_CalculateTrai.h"
#include "msg_2_passedBG_CalculateTrainPo.h"
#include "calculateTrainPositionInfo_Calc.h"
#include "calculateBGLocations_CalculateT.h"
#include "linkedBG_missed_CalculateTrainP.h"
#include "twoConsecutiveLinkedBGs_m_Calcu.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainPosition_T_TrainPosition_T /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPosition */ trainPosition;
  positionedBGs_T_TrainPosition_T /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs */ BGs;
  positionErrors_T_TrainPosition_ /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors */ errors;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_twoConsecutiveLinkedBGs_m_ /* 1 */ _1_Context_1;
  outC_linkedBG_missed_CalculateT /* 2 */ Context_2;
  outC_calculateTrainPositionInfo /* 1 */ Context_1;
  outC_calculateBGLocations_Calcu /* 6 */ Context_6;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateTrainPosition_Cal;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateTrainPosition */
extern void calculateTrainPosition_Calculat(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ ReceivedMessage_T_Common_Types_ *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */ kcg_bool reset,
  outC_calculateTrainPosition_Cal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateTrainPosition_reset_Ca(
  outC_calculateTrainPosition_Cal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateTrainPosition_init_Cal(
  outC_calculateTrainPosition_Cal *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _calculateTrainPosition_Calcula */
/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPosition_Calculat.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

