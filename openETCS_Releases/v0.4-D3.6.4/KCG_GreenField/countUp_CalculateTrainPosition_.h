/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _countUp_CalculateTrainPosition
#define _countUp_CalculateTrainPosition

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::counter */ counter;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_countUp_CalculateTrainPosi;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
extern void countUp_CalculateTrainPosition_(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */ kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */ kcg_bool reset,
  outC_countUp_CalculateTrainPosi *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countUp_reset_CalculateTrainPos(
  outC_countUp_CalculateTrainPosi *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countUp_init_CalculateTrainPosi(
  outC_countUp_CalculateTrainPosi *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _countUp_CalculateTrainPosition */
/* $**************** KCG Version 6.4 (build i21) ****************
** countUp_CalculateTrainPosition_.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

