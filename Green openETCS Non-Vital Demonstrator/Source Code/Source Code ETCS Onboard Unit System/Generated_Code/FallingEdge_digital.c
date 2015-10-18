/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FallingEdge_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void FallingEdge_init_digital(outC_FallingEdge_digital *outC)
{
  outC->FE_Output = kcg_true;
  outC->rem_FE_Input = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FallingEdge_reset_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* digital::FallingEdge */
void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */ kcg_bool FE_Input,
  outC_FallingEdge_digital *outC)
{
  /* digital::FallingEdge */
  static kcg_bool tmp;
  
  /* fby_1_init_2 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = FE_Input;
  }
  else {
    tmp = outC->rem_FE_Input;
  }
  outC->FE_Output = tmp & !FE_Input;
  outC->rem_FE_Input = FE_Input;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FallingEdge_digital.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

