/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _op_3_6_5_1_4_b_ProvidePosition
#define _op_3_6_5_1_4_b_ProvidePosition

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_Prov /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */ rem_modeLevelStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_b_ProvidePosi;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_b */
extern void op_3_6_5_1_4_b_ProvidePositionR(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  outC_op_3_6_5_1_4_b_ProvidePosi *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_b_reset_ProvidePos(
  outC_op_3_6_5_1_4_b_ProvidePosi *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_b_init_ProvidePosi(
  outC_op_3_6_5_1_4_b_ProvidePosi *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_3_6_5_1_4_b_ProvidePosition */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_b_ProvidePositionR.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

