/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _locReachedOrPassed_BasicLocati
#define _locReachedOrPassed_BasicLocati

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFu.h"
#include "overlapOf_2_Locations_BasicLoca.h"
#include "RisingEdge_digital.h"
#include "signChanged_BasicLocationFuncti.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BasicLocationFunctions_Pkg::locReachedOrPassed::hit */ hit;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 1 */ _1_Context_1;
  outC_signChanged_BasicLocationF /* 2 */ Context_2;
  outC_signChanged_BasicLocationF /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_locReachedOrPassed_BasicLo;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::locReachedOrPassed */
extern void locReachedOrPassed_BasicLocatio(
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_P *loc_2,
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_P *loc_1,
  outC_locReachedOrPassed_BasicLo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void locReachedOrPassed_reset_BasicL(
  outC_locReachedOrPassed_BasicLo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void locReachedOrPassed_init_BasicLo(
  outC_locReachedOrPassed_BasicLo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _locReachedOrPassed_BasicLocati */
/* $**************** KCG Version 6.4 (build i21) ****************
** locReachedOrPassed_BasicLocatio.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

