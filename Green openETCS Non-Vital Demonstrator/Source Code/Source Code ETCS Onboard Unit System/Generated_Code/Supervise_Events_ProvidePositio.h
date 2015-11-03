/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _Supervise_Events_ProvidePositi
#define _Supervise_Events_ProvidePositi

#include "kcg_types.h"
#include "op_GetLRBGfromBGs_ProvidePositi.h"
#include "op_3_6_5_1_4_j_ProvidePositionR.h"
#include "op_3_6_5_1_4_f_g_ProvidePositio.h"
#include "op_3_6_5_1_4_b_ProvidePositionR.h"
#include "op_3_6_5_1_4_e_h_k_ProvidePosit.h"
#include "op_3_6_5_1_4_c_d_ProvidePositio.h"
#include "op_3_6_5_1_4_a_i_ProvidePositio.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervise_Events::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_6_5_1_4_j_ProvidePosi /* 1 */ _5_Context_1;
  outC_op_3_6_5_1_4_c_d_ProvidePo /* 1 */ _4_Context_1;
  outC_op_3_6_5_1_4_e_h_k_Provide /* 1 */ _3_Context_1;
  outC_op_3_6_5_1_4_f_g_ProvidePo /* 1 */ _2_Context_1;
  outC_op_3_6_5_1_4_b_ProvidePosi /* 1 */ _1_Context_1;
  outC_op_3_6_5_1_4_a_i_ProvidePo /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervise_Events_ProvidePo;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervise_Events */
extern void Supervise_Events_ProvidePositio(
  /* ProvidePositionReport_Pkg::Supervise_Events::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::Supervise_Events::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_Events::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Supervise_Events::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::rbcComm */ RBC_Communication_T_ProvidePosi *rbcComm,
  /* ProvidePositionReport_Pkg::Supervise_Events::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  outC_Supervise_Events_ProvidePo *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervise_Events_reset_ProvideP(
  outC_Supervise_Events_ProvidePo *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervise_Events_init_ProvidePo(
  outC_Supervise_Events_ProvidePo *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Supervise_Events_ProvidePositi */
/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_Events_ProvidePositio.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

