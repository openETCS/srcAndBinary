/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _genPassedBG_SeqNo_CalculateTra
#define _genPassedBG_SeqNo_CalculateTra

#include "kcg_types.h"
#include "indexOfPassedBG_by_id_Calculate.h"
#include "countUp_CalculateTrainPosition_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::seqNo */ seqNo;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countUp_CalculateTrainPosi /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_genPassedBG_SeqNo_Calculat;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::genPassedBG_SeqNo */
extern void genPassedBG_SeqNo_CalculateTrai(
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::genPassedBG_SeqNo::reset */ kcg_bool reset,
  outC_genPassedBG_SeqNo_Calculat *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void genPassedBG_SeqNo_reset_Calcula(
  outC_genPassedBG_SeqNo_Calculat *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void genPassedBG_SeqNo_init_Calculat(
  outC_genPassedBG_SeqNo_Calculat *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _genPassedBG_SeqNo_CalculateTra */
/* $**************** KCG Version 6.4 (build i21) ****************
** genPassedBG_SeqNo_CalculateTrai.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

