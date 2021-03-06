/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EitherEdge_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void EitherEdge_init_digital(outC_EitherEdge_digital *outC)
{
  outC->EE_Output = kcg_true;
  outC->rem_EE_Input = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EitherEdge_reset_digital(outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* digital::EitherEdge */
void EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */ kcg_bool EE_Input,
  outC_EitherEdge_digital *outC)
{
  /* digital::EitherEdge */
  static kcg_bool tmp;
  
  /* fby_1_init_2 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = EE_Input;
  }
  else {
    tmp = outC->rem_EE_Input;
  }
  outC->EE_Output = tmp ^ EE_Input;
  outC->rem_EE_Input = EE_Input;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EitherEdge_digital.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

