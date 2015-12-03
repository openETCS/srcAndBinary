/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _op_3_6_5_1_4_a_i_ProvidePositi
#define _op_3_6_5_1_4_a_i_ProvidePositi

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::odometry */ rem_odometry;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_a_i_ProvidePo;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i */
extern void op_3_6_5_1_4_a_i_ProvidePositio(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_6_5_1_4_a_i_ProvidePo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_a_i_reset_ProvideP(
  outC_op_3_6_5_1_4_a_i_ProvidePo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_a_i_init_ProvidePo(
  outC_op_3_6_5_1_4_a_i_ProvidePo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_3_6_5_1_4_a_i_ProvidePositi */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_a_i_ProvidePositio.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

