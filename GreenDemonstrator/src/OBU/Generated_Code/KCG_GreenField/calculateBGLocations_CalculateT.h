/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _calculateBGLocations_Calculate
#define _calculateBGLocations_Calculate

#include "kcg_types.h"
#include "passing_a_BG_CalculateTrainPosi.h"
#include "prevPassedLinkedBG_CalculateTra.h"
#include "indexOfBG_by_id_CalculateTrainP.h"
#include "improve_BG_locations_CalculateT.h"
#include "genPassedBG_SeqNo_CalculateTrai.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBGs_T_TrainPosition_T /* CalculateTrainPosition_Pkg::calculateBGLocations::BGs */ BGs;
  positionErrors_T_TrainPosition_ /* CalculateTrainPosition_Pkg::calculateBGLocations::errors */ errors;
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::calculateBGLocations::passedPositionedBG */ passedPositionedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_genPassedBG_SeqNo_Calculat /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_calculateBGLocations_Calcu;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::calculateBGLocations */
extern void calculateBGLocations_CalculateT(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */ positionedBGs_T_TrainPosition_T *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  outC_calculateBGLocations_Calcu *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calculateBGLocations_reset_Calc(
  outC_calculateBGLocations_Calcu *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calculateBGLocations_init_Calcu(
  outC_calculateBGLocations_Calcu *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _calculateBGLocations_Calculate */
/* $**************** KCG Version 6.4 (build i21) ****************
** calculateBGLocations_CalculateT.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

