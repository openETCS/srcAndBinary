/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _MergeMLRequests_SDM_Commands_Pkg_H_
#define _MergeMLRequests_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::revokedSB */ revokedSB;
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::triggeredSB */ triggeredSB;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SDM_Commands_Pkg::MergeMLRequests::sbr */ rem_sbr;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_MergeMLRequests_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::MergeMLRequests */
extern void MergeMLRequests_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedSBcmd */kcg_bool revokedSBcmd,
  /* SDM_Commands_Pkg::MergeMLRequests::sbr */kcg_bool sbr,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredSBcmd */kcg_bool triggeredSBcmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);

extern void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC);

#endif /* _MergeMLRequests_SDM_Commands_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMLRequests_SDM_Commands_Pkg.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */

