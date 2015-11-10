/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMLRequests_SDM_Commands_Pk.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeMLRequests_init_SDM_Comman(outC_MergeMLRequests_SDM_Comman *outC)
{
  outC->revokedSB = kcg_true;
  outC->triggeredSB = kcg_true;
  outC->rem_sbr = kcg_true;
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
  /* SDM_Commands_Pkg::MergeMLRequests::revokedSBcmd */ kcg_bool revokedSBcmd,
  /* SDM_Commands_Pkg::MergeMLRequests::sbr */ kcg_bool sbr,
  /* SDM_Commands_Pkg::MergeMLRequests::triggeredSBcmd */ kcg_bool triggeredSBcmd,
  outC_MergeMLRequests_SDM_Comman *outC)
{
  /* SDM_Commands_Pkg::MergeMLRequests::_L62 */
  static kcg_bool _L62;
  
  outC->triggeredSB = triggeredSBcmd | sbr;
  /* last_init_ck_sbr */ if (outC->init) {
    outC->init = kcg_false;
    _L62 = kcg_false;
  }
  else {
    _L62 = outC->rem_sbr;
  }
  outC->revokedSB = revokedSBcmd | (!triggeredSBcmd & ((sbr ^ _L62) & _L62));
  outC->rem_sbr = sbr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMLRequests_SDM_Commands_Pk.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

