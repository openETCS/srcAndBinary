/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _EitherEdge_digital_H_
#define _EitherEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::EitherEdge::EE_Output */ EE_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::EitherEdge::EE_Input */ rem_EE_Input;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_EitherEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::EitherEdge */
extern void EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */kcg_bool EE_Input,
  outC_EitherEdge_digital *outC);

extern void EitherEdge_reset_digital(outC_EitherEdge_digital *outC);

#endif /* _EitherEdge_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EitherEdge_digital.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
