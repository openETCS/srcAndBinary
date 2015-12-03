/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _op_3_6_5_1_4_f_g_ProvidePositi
#define _op_3_6_5_1_4_f_g_ProvidePositi

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_Prov /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::modeLevelStatus */ rem_modeLevelStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_f_g_ProvidePo;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g */
extern void op_3_6_5_1_4_f_g_ProvidePositio(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  outC_op_3_6_5_1_4_f_g_ProvidePo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_f_g_reset_ProvideP(
  outC_op_3_6_5_1_4_f_g_ProvidePo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_f_g_init_ProvidePo(
  outC_op_3_6_5_1_4_f_g_ProvidePo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_3_6_5_1_4_f_g_ProvidePositi */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_f_g_ProvidePositio.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

