/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */
#ifndef _linkedBG_missed_CalculateTrain
#define _linkedBG_missed_CalculateTrain

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFu.h"
#include "indexOfBG_by_id_CalculateTrainP.h"
#include "posInRangeOfBG_CalculateTrainPo.h"
#include "positionedBGs_ids_notEqual_Calc.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::missed */ missed;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::indexOfBG */ indexOfBG;
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BG */ BG;
  positionedBGs_T_TrainPosition_T /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs_out */ BGs_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L3 */ _L3;
  kcg_int /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L2 */ _L2;
  LocWithInAcc_T_Obu_BasicTypes_P /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */ rem_position;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_linkedBG_missed_CalculateT;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
extern void linkedBG_missed_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */ LocWithInAcc_T_Obu_BasicTypes_P *position,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::enable */ kcg_bool enable,
  outC_linkedBG_missed_CalculateT *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void linkedBG_missed_reset_Calculate(
  outC_linkedBG_missed_CalculateT *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void linkedBG_missed_init_CalculateT(
  outC_linkedBG_missed_CalculateT *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _linkedBG_missed_CalculateTrain */
/* $**************** KCG Version 6.4 (build i21) ****************
** linkedBG_missed_CalculateTrainP.h
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

