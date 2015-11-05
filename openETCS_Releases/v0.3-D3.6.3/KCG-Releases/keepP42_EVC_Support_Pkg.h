/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */
#ifndef _keepP42_EVC_Support_Pkg_H_
#define _keepP42_EVC_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* EVC_Support_Pkg::keepP42::toMoRC */ toMoRC;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* EVC_Support_Pkg::keepP42::store */ store;
  kcg_bool /* EVC_Support_Pkg::keepP42::storeMsg */ storeMsg;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_keepP42_EVC_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_Support_Pkg::keepP42 */
extern void keepP42_EVC_Support_Pkg(
  /* EVC_Support_Pkg::keepP42::fromTrack */ ReceivedMessage_T_Common_Types_Pkg *fromTrack,
  outC_keepP42_EVC_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void keepP42_reset_EVC_Support_Pkg(outC_keepP42_EVC_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void keepP42_init_EVC_Support_Pkg(outC_keepP42_EVC_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _keepP42_EVC_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** keepP42_EVC_Support_Pkg.h
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

