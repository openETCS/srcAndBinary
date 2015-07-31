/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _DelayTransitionOrder_H_
#define _DelayTransitionOrder_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* DelayTransitionOrder::out_transition */ out_transition;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_DelayTransitionOrder;

/* ===========  node initialization and cycle functions  =========== */
/* DelayTransitionOrder */
extern void DelayTransitionOrder(
  /* DelayTransitionOrder::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  outC_DelayTransitionOrder *outC);

extern void DelayTransitionOrder_reset(outC_DelayTransitionOrder *outC);

#endif /* _DelayTransitionOrder_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DelayTransitionOrder.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

