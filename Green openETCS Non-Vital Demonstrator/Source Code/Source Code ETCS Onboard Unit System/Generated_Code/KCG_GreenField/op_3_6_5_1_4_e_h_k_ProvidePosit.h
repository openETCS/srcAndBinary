/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _op_3_6_5_1_4_e_h_k_ProvidePosi
#define _op_3_6_5_1_4_e_h_k_ProvidePosi

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  RBC_Communication_T_ProvidePosi /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::rbcComm */ rem_rbcComm;
  LocationBasedEvents_T_ProvidePo /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::trackInfo */ rem_trackInfo;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_e_h_k_Provide;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k */
extern void op_3_6_5_1_4_e_h_k_ProvidePosit(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k::rbcComm */ RBC_Communication_T_ProvidePosi *rbcComm,
  outC_op_3_6_5_1_4_e_h_k_Provide *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_e_h_k_reset_Provid(
  outC_op_3_6_5_1_4_e_h_k_Provide *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_e_h_k_init_Provide(
  outC_op_3_6_5_1_4_e_h_k_Provide *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_3_6_5_1_4_e_h_k_ProvidePosi */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_e_h_k_ProvidePosit.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

