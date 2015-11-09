/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMLRequests_SDM_Commands_Pkg.h"

void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SDM_Commands_Pkg::MergeMLRequests */
void MergeMLRequests_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedSBcmd */kcg_bool revokedSBcmd,
  /* SDM_Commands_Pkg::MergeMLRequests::sbr */kcg_bool sbr,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredSBcmd */kcg_bool triggeredSBcmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::MergeMLRequests::_L62 */
  static kcg_bool _L62;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L62 = kcg_false;
  }
  else {
    _L62 = outC->rem_sbr;
  }
  outC->revokedSB = revokedSBcmd | (!triggeredSBcmd & ((sbr ^ _L62) & _L62));
  outC->triggeredSB = triggeredSBcmd | sbr;
  outC->rem_sbr = sbr;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMLRequests_SDM_Commands_Pkg.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

