/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _changeoverSwitch_Handover_Pkg_
#define _changeoverSwitch_Handover_Pkg_

#include "kcg_types.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handingOverMobile_is_mobile_1 */ handingOverMobile_is_mobile_1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _115_SSM_ST_SM1 /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */ SM1_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_changeoverSwitch_Handover_;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch */
extern void changeoverSwitch_Handover_Pkg_h(
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::handoverInprogress */ kcg_bool handoverInprogress,
  /* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  outC_changeoverSwitch_Handover_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void changeoverSwitch_reset_Handover(
  outC_changeoverSwitch_Handover_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void changeoverSwitch_init_Handover_(
  outC_changeoverSwitch_Handover_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _changeoverSwitch_Handover_Pkg_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** changeoverSwitch_Handover_Pkg_h.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

