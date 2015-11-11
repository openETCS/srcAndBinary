/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _Supervision_T_Cycloc_ProvidePo
#define _Supervision_T_Cycloc_ProvidePo

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SystemTime_T_ProvidePositionRep /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L5 */ _L5;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Supervision_T_Cycloc_Provi;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervision_T_Cycloc */
extern void Supervision_T_Cycloc_ProvidePos(
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::tcycloc */ T_CYCLOC tcycloc,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  outC_Supervision_T_Cycloc_Provi *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervision_T_Cycloc_reset_Prov(
  outC_Supervision_T_Cycloc_Provi *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervision_T_Cycloc_init_Provi(
  outC_Supervision_T_Cycloc_Provi *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Supervision_T_Cycloc_ProvidePo */
/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_T_Cycloc_ProvidePos.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

