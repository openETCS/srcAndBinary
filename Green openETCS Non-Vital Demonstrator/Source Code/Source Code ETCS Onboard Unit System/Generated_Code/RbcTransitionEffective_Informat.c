/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RbcTransitionEffective_Informat.h"

#ifndef KCG_USER_DEFINED_INIT
void RbcTransitionEffective_init_Inf(outC_RbcTransitionEffective_Inf *outC)
{
  outC->outRbcTransition = kcg_true;
  outC->init = kcg_true;
  outC->rem_inSupervisingDevice = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RbcTransitionEffective_reset_In(outC_RbcTransitionEffective_Inf *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::RbcTransitionEffective */
void RbcTransitionEffective_Informat(
  /* InformationFilter_Pkg::RbcTransitionEffective::inSupervisingDevice */ kcg_int inSupervisingDevice,
  outC_RbcTransitionEffective_Inf *outC)
{
  /* InformationFilter_Pkg::RbcTransitionEffective */
  static kcg_int tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp = outC->rem_inSupervisingDevice;
  }
  outC->outRbcTransition = !(inSupervisingDevice == tmp);
  outC->rem_inSupervisingDevice = inSupervisingDevice;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RbcTransitionEffective_Informat.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

