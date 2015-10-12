/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _Manage_MA_Request_MA_Request_H_
#define _Manage_MA_Request_MA_Request_H_

#include "kcg_types.h"
#include "Build_MA_request_MA_Request.h"
#include "Send_MA_MA_Request.h"
#include "Receive_MA_RequestParameters_MA_Request.h"
#include "MA_Request_Supervision_MA_Request.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Manage_MA_Request::message_out */ message_out;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* MA_Request::Manage_MA_Request::exception */ exception;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* MA_Request::Manage_MA_Request::triggerMA */ triggerMA;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MA_Request_Supervision_MA_Request /* 1 */ _1_Context_1;
  outC_Receive_MA_RequestParameters_MA_Request /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Manage_MA_Request_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::Manage_MA_Request */
extern void Manage_MA_Request_MA_Request(
  /* MA_Request::Manage_MA_Request::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MA_Request::Manage_MA_Request::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* MA_Request::Manage_MA_Request::message_in */ ReceivedMessage_T_Common_Types_Pkg *message_in,
  /* MA_Request::Manage_MA_Request::preindicationLocation */ L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* MA_Request::Manage_MA_Request::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MA_Request::Manage_MA_Request::MAs */ MovementAuthority_t_TrackAtlasTypes *MAs,
  /* MA_Request::Manage_MA_Request::fromDriver */ Driver2MAR_T_MA_Request *fromDriver,
  /* MA_Request::Manage_MA_Request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* MA_Request::Manage_MA_Request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Manage_MA_Request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Manage_MA_Request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Manage_MA_Request::t_train */ T_TRAIN t_train,
  /* MA_Request::Manage_MA_Request::ModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  outC_Manage_MA_Request_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_MA_Request_reset_MA_Request(
  outC_Manage_MA_Request_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_MA_Request_init_MA_Request(
  outC_Manage_MA_Request_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Manage_MA_Request_MA_Request_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_MA_Request_MA_Request.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

