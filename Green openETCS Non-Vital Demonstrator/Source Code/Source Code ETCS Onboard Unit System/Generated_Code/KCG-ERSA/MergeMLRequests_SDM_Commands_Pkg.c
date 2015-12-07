/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMLRequests_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeMLRequests_init_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->revoked = kcg_true;
  outC->triggered = kcg_true;
  outC->rem_req = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MergeMLRequests_reset_SDM_Commands_Pkg(
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::MergeMLRequests */
void MergeMLRequests_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedCmd */ kcg_bool revokedCmd,
  /* SDM_Commands_Pkg::MergeMLRequests::req */ kcg_bool req,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredCmd */ kcg_bool triggeredCmd,
  outC_MergeMLRequests_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::MergeMLRequests::_L62 */ kcg_bool _L62;
  
  outC->triggered = triggeredCmd | req;
  /* last_init_ck_req */ if (outC->init) {
    outC->init = kcg_false;
    _L62 = kcg_false;
  }
  else {
    _L62 = outC->rem_req;
  }
  outC->revoked = revokedCmd | (!triggeredCmd & ((req ^ _L62) & _L62));
  outC->rem_req = req;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMLRequests_SDM_Commands_Pkg.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

