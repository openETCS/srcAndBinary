/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _safeRadioConnectionIndica_MoRC
#define _safeRadioConnectionIndica_MoRC

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  safeRadioConnectionIndication_T /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::indication */ indication;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_connectionStatus_SM /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */ connectionStatus_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 4 */ Context_4;
  outC_countDownTimer_MoRC_Pck_Ut /* 1 */ Context_1;
  outC_RisingEdge_digital /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_safeRadioConnectionIndica_;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2 */
extern void safeRadioConnectionIndica_MoRC_(
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionCmd */ mobileConnectionCmd_T_RCM_Types *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus */ mobileConnectionContext_T_RCM_T *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::currentTime */ T_internal_Type_Obu_BasicTypes_ currentTime,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndica_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void safeRadioConnectionIndica_reset(
  outC_safeRadioConnectionIndica_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void safeRadioConnectionIndica_init_(
  outC_safeRadioConnectionIndica_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _safeRadioConnectionIndica_MoRC */
/* $**************** KCG Version 6.4 (build i21) ****************
** safeRadioConnectionIndica_MoRC_.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

