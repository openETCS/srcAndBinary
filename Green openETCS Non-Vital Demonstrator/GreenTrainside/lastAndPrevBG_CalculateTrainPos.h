/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _lastAndPrevBG_CalculateTrainPo
#define _lastAndPrevBG_CalculateTrainPo

#include "kcg_types.h"
#include "positionedBGs_ids_equal_Calcula.h"
#include "indexOfBG_by_id_CalculateTrainP.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG */ prvBG;
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::lastBG */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Ty /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG_loc */ prvBG_loc;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_lastAndPrevBG_CalculateTra;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
extern void lastAndPrevBG_CalculateTrainPos(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */ kcg_bool enable,
  outC_lastAndPrevBG_CalculateTra *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void lastAndPrevBG_reset_CalculateTr(
  outC_lastAndPrevBG_CalculateTra *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void lastAndPrevBG_init_CalculateTra(
  outC_lastAndPrevBG_CalculateTra *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _lastAndPrevBG_CalculateTrainPo */
/* $**************** KCG Version 6.4 (build i21) ****************
** lastAndPrevBG_CalculateTrainPos.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

