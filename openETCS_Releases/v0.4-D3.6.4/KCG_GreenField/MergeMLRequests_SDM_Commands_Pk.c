/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMLRequests_SDM_Commands_Pk.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeMLRequests_init_SDM_Comman(outC_MergeMLRequests_SDM_Comman *outC)
{
  outC->revoked = kcg_true;
  outC->triggered = kcg_true;
  outC->rem_req = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MergeMLRequests_reset_SDM_Comma(outC_MergeMLRequests_SDM_Comman *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::MergeMLRequests */
void MergeMLRequests_SDM_Commands_Pk(
  /* SDM_Commands_Pkg::MergeMLRequests::revokedCmd */ kcg_bool revokedCmd,
  /* SDM_Commands_Pkg::MergeMLRequests::req */ kcg_bool req,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredCmd */ kcg_bool triggeredCmd,
  outC_MergeMLRequests_SDM_Comman *outC)
{
  /* SDM_Commands_Pkg::MergeMLRequests::_L62 */
  static kcg_bool _L62;
  
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
** MergeMLRequests_SDM_Commands_Pk.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

