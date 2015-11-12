/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _RbcTransitionEffective_Informa
#define _RbcTransitionEffective_Informa

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::RbcTransitionEffective::outRbcTransition */ outRbcTransition;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */ rem_inSupervisingDevice;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RbcTransitionEffective_Inf;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::RbcTransitionEffective */
extern void RbcTransitionEffective_Informat(
  /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */ kcg_int inSupervisingDevice,
  outC_RbcTransitionEffective_Inf *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RbcTransitionEffective_reset_In(
  outC_RbcTransitionEffective_Inf *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RbcTransitionEffective_init_Inf(
  outC_RbcTransitionEffective_Inf *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RbcTransitionEffective_Informa */
/* $**************** KCG Version 6.4 (build i21) ****************
** RbcTransitionEffective_Informat.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

