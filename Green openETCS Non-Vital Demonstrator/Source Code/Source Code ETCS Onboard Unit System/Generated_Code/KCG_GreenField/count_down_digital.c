/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "count_down_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void count_down_init_digital(outC_count_down_digital *outC)
{
  outC->init = kcg_true;
  outC->_L4 = 0;
  outC->cpt = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void count_down_reset_digital(outC_count_down_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* digital::count_down */
void count_down_digital(
  /* digital::count_down::Reset */ kcg_bool Reset,
  /* digital::count_down::N */ kcg_int N,
  outC_count_down_digital *outC)
{
  /* 1 */ if (Reset) {
    outC->cpt = N;
  }
  else /* 5 */ if (outC->init) {
    outC->cpt = N;
  }
  else {
    outC->cpt = outC->_L4;
  }
  outC->init = kcg_false;
  outC->_L4 = outC->cpt - 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** count_down_digital.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

