/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */
#ifndef _RbcTransitionEffective_InformationFilter_Pkg_H_
#define _RbcTransitionEffective_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
} outC_RbcTransitionEffective_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::RbcTransitionEffective */
extern void RbcTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */kcg_int inSupervisingDevice,
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC);

extern void RbcTransitionEffective_reset_InformationFilter_Pkg(
  outC_RbcTransitionEffective_InformationFilter_Pkg *outC);

#endif /* _RbcTransitionEffective_InformationFilter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RbcTransitionEffective_InformationFilter_Pkg.h
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */

