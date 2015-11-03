/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _Manage_MA_Request_TA_MA_Reques
#define _Manage_MA_Request_TA_MA_Reques

#include "kcg_types.h"
#include "Receive_MA_RequestParameters_TA.h"
#include "Build_MA_request_TA_MA_Request.h"
#include "MA_Request_Supervision_TA_MA_Re.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_Tra /* TA_MA_Request::Manage_MA_Request::bus_out */ bus_out;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* TA_MA_Request::Manage_MA_Request::exception */ exception;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* TA_MA_Request::Manage_MA_Request::triggerMA */ triggerMA;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_MA_request_TA_MA_Req /* 1 */ _2_Context_1;
  outC_MA_Request_Supervision_TA_ /* 1 */ _1_Context_1;
  outC_Receive_MA_RequestParamete /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Manage_MA_Request_TA_MA_Re;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Manage_MA_Request */
extern void Manage_MA_Request_TA_MA_Request(
  /* TA_MA_Request::Manage_MA_Request::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* TA_MA_Request::Manage_MA_Request::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* TA_MA_Request::Manage_MA_Request::message_in */ ReceivedMessage_T_Common_Types_ *message_in,
  /* TA_MA_Request::Manage_MA_Request::preindicationLocation */ L_internal_Type_Obu_BasicTypes_ preindicationLocation,
  /* TA_MA_Request::Manage_MA_Request::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TA_MA_Request::Manage_MA_Request::MAs */ MovementAuthority_t_TrackAtlasT *MAs,
  /* TA_MA_Request::Manage_MA_Request::fromDriver */ Driver2MAR_T_TA_MA_Request *fromDriver,
  /* TA_MA_Request::Manage_MA_Request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Manage_MA_Request::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TA_MA_Request::Manage_MA_Request::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* TA_MA_Request::Manage_MA_Request::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* TA_MA_Request::Manage_MA_Request::t_train */ T_TRAIN t_train,
  /* TA_MA_Request::Manage_MA_Request::bus_in */ M_TrainTrackMessageBus_t_TM_Tra *bus_in,
  /* TA_MA_Request::Manage_MA_Request::modeLevel */ T_Mode_Level_Level_And_Mode_Typ *modeLevel,
  outC_Manage_MA_Request_TA_MA_Re *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_MA_Request_reset_TA_MA_R(
  outC_Manage_MA_Request_TA_MA_Re *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_MA_Request_init_TA_MA_Re(
  outC_Manage_MA_Request_TA_MA_Re *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Manage_MA_Request_TA_MA_Reques */
/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_MA_Request_TA_MA_Request.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

