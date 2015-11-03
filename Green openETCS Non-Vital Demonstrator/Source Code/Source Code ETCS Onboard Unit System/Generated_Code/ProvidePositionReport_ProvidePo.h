/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _ProvidePositionReport_ProvideP
#define _ProvidePositionReport_ProvideP

#include "kcg_types.h"
#include "Build_PosReport_ProvidePosition.h"
#include "AddBGToFIFO_ProvidePositionRepo.h"
#include "AggregatePackets_ProvidePositio.h"
#include "ErrorManager_ProvidePositionRep.h"
#include "ReceiveReportParameters_Provide.h"
#include "PosReport_Supervision_ProvidePo.h"
#include "Build_Packets0_1_ProvidePositio.h"
#include "nextGen_Msg136_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositio /* ProvidePositionReport_Pkg::ProvidePositionReport::out_reportedBGs */ out_reportedBGs;
  PT0_PositionReport_T_Packet_Tra /* ProvidePositionReport_Pkg::ProvidePositionReport::packet0 */ packet0;
  PT1_PositionReport_2BG_T_Packet /* ProvidePositionReport_Pkg::ProvidePositionReport::packet1 */ packet1;
  M_TrainTrackMessageBus_t_TM_Tra /* ProvidePositionReport_Pkg::ProvidePositionReport::posReport */ posReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ReportedBGList_T_ProvidePositio /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ rem_reportedBGs;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nextGen_Msg136_radioOutput /* 1 */ _3_Context_1;
  outC_Build_Packets0_1_ProvidePo /* 1 */ _2_Context_1;
  outC_PosReport_Supervision_Prov /* 1 */ _1_Context_1;
  outC_ReceiveReportParameters_Pr /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ProvidePositionReport_Prov;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ProvidePositionReport */
extern void ProvidePositionReport_ProvidePo(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */ RBC_Communication_T_ProvidePosi *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyErro,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyEr,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inVersion */ M_VERSION inVersion,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::t_train */ T_TRAIN t_train,
  outC_ProvidePositionReport_Prov *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProvidePositionReport_reset_Pro(
  outC_ProvidePositionReport_Prov *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ProvidePositionReport_init_Prov(
  outC_ProvidePositionReport_Prov *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ProvidePositionReport_ProvideP */
/* $**************** KCG Version 6.4 (build i21) ****************
** ProvidePositionReport_ProvidePo.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

