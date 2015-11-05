/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RisingEdge_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void RisingEdge_init_digital(outC_RisingEdge_digital *outC)
{
  outC->RE_Output = kcg_true;
  outC->rem_RE_Input = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void RisingEdge_reset_digital(outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::RisingEdge */
void RisingEdge_digital(
  /* digital::RisingEdge::RE_Input */ kcg_bool RE_Input,
  outC_RisingEdge_digital *outC)
{
  /* digital::RisingEdge */
  static kcg_bool tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = !RE_Input;
  }
  else {
    tmp = !outC->rem_RE_Input;
  }
  outC->RE_Output = tmp & RE_Input;
  outC->rem_RE_Input = RE_Input;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RisingEdge_digital.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

