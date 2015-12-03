/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */
#ifndef _Supervise_PosRepParam_ProvideP
#define _Supervise_PosRepParam_ProvideP

#include "kcg_types.h"
#include "Supervision_N_Iter_ProvidePosit.h"
#include "Supervision_D_Cycloc_ProvidePos.h"
#include "Supervision_T_Cycloc_ProvidePos.h"
#include "Supervision_M_Loc_ProvidePositi.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Supervision_M_Loc_ProvideP /* 1 */ _1_Context_1;
  outC_Supervision_T_Cycloc_Provi /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervise_PosRepParam_Prov;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervise_PosRepParam */
extern void Supervise_PosRepParam_ProvidePo(
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posRepParam */ P58_PositionReportParameters_T_ *posRepParam,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_PosRepParam::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  outC_Supervise_PosRepParam_Prov *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervise_PosRepParam_reset_Pro(
  outC_Supervise_PosRepParam_Prov *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervise_PosRepParam_init_Prov(
  outC_Supervise_PosRepParam_Prov *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Supervise_PosRepParam_ProvideP */
/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_PosRepParam_ProvidePo.h
** Generation date: 2015-12-03T13:39:50
*************************************************************$ */

