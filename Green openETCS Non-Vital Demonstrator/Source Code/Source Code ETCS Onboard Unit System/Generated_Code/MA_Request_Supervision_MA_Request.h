/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _MA_Request_Supervision_MA_Request_H_
#define _MA_Request_Supervision_MA_Request_H_

#include "kcg_types.h"
#include "op_3_8_2_3_a_MA_Request.h"
#include "op_3_8_2_3_b_MA_Request.h"
#include "op_RepeatReq_MA_Request.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_Request::MA_Request_Supervision::triggerMA */ triggerMA;
  kcg_bool /* MA_Request::MA_Request_Supervision::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* MA_Request::MA_Request_Supervision::SM1 */ SM1_state_nxt;
  kcg_bool /* MA_Request::MA_Request_Supervision::pendingReq */ pendingReq;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_RepeatReq_MA_Request /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MA_Request_Supervision_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::MA_Request_Supervision */
extern void MA_Request_Supervision_MA_Request(
  /* MA_Request::MA_Request_Supervision::ma_RequestParams */ P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *ma_RequestParams,
  /* MA_Request::MA_Request_Supervision::ma_received */ kcg_bool ma_received,
  /* MA_Request::MA_Request_Supervision::in_triggerMA */ kcg_bool in_triggerMA,
  /* MA_Request::MA_Request_Supervision::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::MA_Request_Supervision::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* MA_Request::MA_Request_Supervision::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* MA_Request::MA_Request_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MA_Request::MA_Request_Supervision::MAs */ MovementAuthority_t_TrackAtlasTypes *MAs,
  /* MA_Request::MA_Request_Supervision::fromDriver */ Driver2MAR_T_MA_Request *fromDriver,
  /* MA_Request::MA_Request_Supervision::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* MA_Request::MA_Request_Supervision::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  outC_MA_Request_Supervision_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_Request_Supervision_reset_MA_Request(
  outC_MA_Request_Supervision_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_Request_Supervision_init_MA_Request(
  outC_MA_Request_Supervision_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MA_Request_Supervision_MA_Request_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Request_Supervision_MA_Request.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

