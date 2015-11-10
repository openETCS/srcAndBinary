/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */
#ifndef _op_3_6_5_1_4_j_ProvidePosition
#define _op_3_6_5_1_4_j_ProvidePosition

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Ty /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */ rem_LRBG;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_j_ProvidePosi;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */
extern void op_3_6_5_1_4_j_ProvidePositionR(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */ positionedBG_T_TrainPosition_Ty *LRBG,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  outC_op_3_6_5_1_4_j_ProvidePosi *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_j_reset_ProvidePos(
  outC_op_3_6_5_1_4_j_ProvidePosi *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_j_init_ProvidePosi(
  outC_op_3_6_5_1_4_j_ProvidePosi *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_3_6_5_1_4_j_ProvidePosition */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_j_ProvidePositionR.h
** Generation date: 2015-11-10T23:01:08
*************************************************************$ */

