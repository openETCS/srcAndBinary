/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _signChanged_BasicLocationFunct
#define _signChanged_BasicLocationFunct

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BasicLocationFunctions_Pkg::signChanged::change */ change;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* BasicLocationFunctions_Pkg::signChanged::val */ rem_val;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_signChanged_BasicLocationF;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::signChanged */
extern void signChanged_BasicLocationFuncti(
  /* BasicLocationFunctions_Pkg::signChanged::val */ kcg_int val,
  outC_signChanged_BasicLocationF *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void signChanged_reset_BasicLocation(
  outC_signChanged_BasicLocationF *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void signChanged_init_BasicLocationF(
  outC_signChanged_BasicLocationF *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _signChanged_BasicLocationFunct */
/* $**************** KCG Version 6.4 (build i21) ****************
** signChanged_BasicLocationFuncti.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

