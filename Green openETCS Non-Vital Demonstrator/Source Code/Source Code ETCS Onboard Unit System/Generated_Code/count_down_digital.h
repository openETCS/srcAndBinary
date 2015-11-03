/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _count_down_digital_H_
#define _count_down_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* digital::count_down::cpt */ cpt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* digital::count_down::_L4 */ _L4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_count_down_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::count_down */
extern void count_down_digital(
  /* digital::count_down::Reset */ kcg_bool Reset,
  /* digital::count_down::N */ kcg_int N,
  outC_count_down_digital *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void count_down_reset_digital(outC_count_down_digital *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void count_down_init_digital(outC_count_down_digital *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _count_down_digital_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** count_down_digital.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

