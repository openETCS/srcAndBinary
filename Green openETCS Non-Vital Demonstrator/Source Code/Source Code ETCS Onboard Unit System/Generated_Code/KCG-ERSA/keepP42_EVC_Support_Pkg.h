/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */
#ifndef _keepP42_EVC_Support_Pkg_H_
#define _keepP42_EVC_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* EVC_Support_Pkg::keepP42::fromTrack */ReceivedMessage_T_Common_Types_Pkg *fromTrack,
  outC_keepP42_EVC_Support_Pkg *outC);

extern void keepP42_reset_EVC_Support_Pkg(outC_keepP42_EVC_Support_Pkg *outC);

#endif /* _keepP42_EVC_Support_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** keepP42_EVC_Support_Pkg.h
** Generation date: 2015-11-09T11:52:23
*************************************************************$ */

