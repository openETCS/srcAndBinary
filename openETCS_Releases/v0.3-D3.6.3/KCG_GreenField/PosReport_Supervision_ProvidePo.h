/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */
#ifndef _PosReport_Supervision_ProvideP
#define _PosReport_Supervision_ProvideP

#include "kcg_types.h"
#include "Supervise_PosRepParam_ProvidePo.h"
#include "Supervise_Events_ProvidePositio.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::PosReport_Supervision::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::PosReport_Supervision::_L52 */ _L52;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Supervise_Events_ProvidePo /* 1 */ Context_1;
  outC_Supervise_PosRepParam_Prov /* Supervise_PosRepParam */ Context_Supervise_PosRepParam;
  /* ----------------- no clocks of observable data ------------------ */
} outC_PosReport_Supervision_Prov;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::PosReport_Supervision */
extern void PosReport_Supervision_ProvidePo(
  /* ProvidePositionReport_Pkg::PosReport_Supervision::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posRepParam */ P58_PositionReportParameters_T_ *posRepParam,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::rbcComm */ RBC_Communication_T_ProvidePosi *rbcComm,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::PosReport_Supervision::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  outC_PosReport_Supervision_Prov *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PosReport_Supervision_reset_Pro(
  outC_PosReport_Supervision_Prov *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PosReport_Supervision_init_Prov(
  outC_PosReport_Supervision_Prov *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PosReport_Supervision_ProvideP */
/* $**************** KCG Version 6.4 (build i21) ****************
** PosReport_Supervision_ProvidePo.h
** Generation date: 2015-11-05T08:54:03
*************************************************************$ */

