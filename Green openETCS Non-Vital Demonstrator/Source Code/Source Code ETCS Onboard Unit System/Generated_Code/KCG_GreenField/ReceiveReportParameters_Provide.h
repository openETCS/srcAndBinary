/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _ReceiveReportParameters_Provid
#define _ReceiveReportParameters_Provid

#include "kcg_types.h"
#include "Read_P058_Legacy_TM_specific.h"
#include "CheckValidityPacket58_ProvidePo.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositio /* ProvidePositionReport_Pkg::ReceiveReportParameters::out_reportedBGs */ out_reportedBGs;
  kcg_bool /* ProvidePositionReport_Pkg::ReceiveReportParameters::present */ present;
  P58_PositionReportParameters_T_ /* ProvidePositionReport_Pkg::ReceiveReportParameters::posRepParam */ posRepParam;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ReceiveReportParameters_Pr;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ReceiveReportParameters */
extern void ReceiveReportParameters_Provide(
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  outC_ReceiveReportParameters_Pr *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ReceiveReportParameters_reset_P(
  outC_ReceiveReportParameters_Pr *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ReceiveReportParameters_init_Pr(
  outC_ReceiveReportParameters_Pr *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ReceiveReportParameters_Provid */
/* $**************** KCG Version 6.4 (build i21) ****************
** ReceiveReportParameters_Provide.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

