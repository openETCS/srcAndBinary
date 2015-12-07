/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */
#ifndef _MergeMLRequests_SDM_Commands_P
#define _MergeMLRequests_SDM_Commands_P

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::revoked */ revoked;
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::triggered */ triggered;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::req */ rem_req;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_MergeMLRequests_SDM_Comman;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::MergeMLRequests */
extern void MergeMLRequests_SDM_Commands_Pk(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedCmd */ kcg_bool revokedCmd,
  /* SDM_Commands_Pkg::MergeMLRequests::req */ kcg_bool req,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredCmd */ kcg_bool triggeredCmd,
  outC_MergeMLRequests_SDM_Comman *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MergeMLRequests_reset_SDM_Comma(
  outC_MergeMLRequests_SDM_Comman *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MergeMLRequests_init_SDM_Comman(
  outC_MergeMLRequests_SDM_Comman *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MergeMLRequests_SDM_Commands_P */
/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMLRequests_SDM_Commands_Pk.h
** Generation date: 2015-12-07T14:50:16
*************************************************************$ */

