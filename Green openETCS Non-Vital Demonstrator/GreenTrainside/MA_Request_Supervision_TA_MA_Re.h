/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */
#ifndef _MA_Request_Supervision_TA_MA_R
#define _MA_Request_Supervision_TA_MA_R

#include "kcg_types.h"
#include "op_3_8_2_3_b_TA_MA_Request.h"
#include "RisingEdge_digital.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"
#include "op_RepeatReq_TA_MA_Request.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::MA_Request_Supervision::triggerMA */ triggerMA;
  kcg_bool /* TA_MA_Request::MA_Request_Supervision::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _168_SSM_ST_SM1 /* TA_MA_Request::MA_Request_Supervision::SM1 */ SM1_state_nxt;
  kcg_bool /* TA_MA_Request::MA_Request_Supervision::pendingReq */ pendingReq;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 2 */ Context_2;
  outC_RisingEdge_digital /* 1 */ _1_Context_1;
  outC_op_RepeatReq_TA_MA_Request /* 1 */ Context_1;
  outC_op_3_8_2_3_a_TA_MA_Request /* op_3_8_2_3_a */ Context_op_3_8_2_3_a;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MA_Request_Supervision_TA_;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::MA_Request_Supervision */
extern void MA_Request_Supervision_TA_MA_Re(
  /* TA_MA_Request::MA_Request_Supervision::ma_RequestParams */ P57_MovementAuthorityRequestPar *ma_RequestParams,
  /* TA_MA_Request::MA_Request_Supervision::ma_received */ kcg_bool ma_received,
  /* TA_MA_Request::MA_Request_Supervision::in_triggerMA */ kcg_bool in_triggerMA,
  /* TA_MA_Request::MA_Request_Supervision::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* TA_MA_Request::MA_Request_Supervision::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* TA_MA_Request::MA_Request_Supervision::preindicationLocation */ L_internal_Type_Obu_BasicTypes_ preindicationLocation,
  /* TA_MA_Request::MA_Request_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::MA_Request_Supervision::MAs */ MovementAuthority_t_TrackAtlasT *MAs,
  /* TA_MA_Request::MA_Request_Supervision::fromDriver */ Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::MA_Request_Supervision::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::MA_Request_Supervision::modeLevel */ T_Mode_Level_Level_And_Mode_Typ *modeLevel,
  outC_MA_Request_Supervision_TA_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_Request_Supervision_reset_TA(
  outC_MA_Request_Supervision_TA_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_Request_Supervision_init_TA_(
  outC_MA_Request_Supervision_TA_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MA_Request_Supervision_TA_MA_R */
/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Request_Supervision_TA_MA_Re.h
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

