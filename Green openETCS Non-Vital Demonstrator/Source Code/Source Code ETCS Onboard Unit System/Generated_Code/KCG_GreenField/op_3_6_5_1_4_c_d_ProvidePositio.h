/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _op_3_6_5_1_4_c_d_ProvidePositi
#define _op_3_6_5_1_4_c_d_ProvidePositi

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TrainToTrackStatus_T_BG_Types_P /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */ rem_train2trackStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_c_d_ProvidePo;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d */
extern void op_3_6_5_1_4_c_d_ProvidePositio(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_c_d_reset_ProvideP(
  outC_op_3_6_5_1_4_c_d_ProvidePo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_c_d_init_ProvidePo(
  outC_op_3_6_5_1_4_c_d_ProvidePo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_3_6_5_1_4_c_d_ProvidePositi */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_c_d_ProvidePositio.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

