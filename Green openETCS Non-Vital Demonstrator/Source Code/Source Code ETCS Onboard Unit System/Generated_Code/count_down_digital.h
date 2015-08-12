/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _count_down_digital_H_
#define _count_down_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* digital::count_down::Reset */kcg_bool Reset,
  /* digital::count_down::N */kcg_int N,
  outC_count_down_digital *outC);

extern void count_down_reset_digital(outC_count_down_digital *outC);

#endif /* _count_down_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** count_down_digital.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
