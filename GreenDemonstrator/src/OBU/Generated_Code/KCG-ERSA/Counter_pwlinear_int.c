/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_pwlinear_int.h"

#ifndef KCG_USER_DEFINED_INIT
void Counter_init_pwlinear_int(outC_Counter_pwlinear_int *outC)
{
  outC->init = kcg_true;
  outC->Count = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void Counter_reset_pwlinear_int(outC_Counter_pwlinear_int *outC)
{
  outC->init = kcg_true;
}

/* pwlinear::Counter */
void Counter_pwlinear_int(
  /* pwlinear::Counter::Incr */ kcg_int Incr,
  /* pwlinear::Counter::Reset */ kcg_bool Reset,
  outC_Counter_pwlinear_int *outC)
{
  /* pwlinear::Counter */ kcg_int tmp;
  
  /* 1 */ if (Reset) {
    tmp = 0;
  }
  else /* fby_1_init_5 */ if (outC->init) {
    tmp = 0;
  }
  else {
    tmp = outC->Count;
  }
  outC->init = kcg_false;
  outC->Count = tmp + Incr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Counter_pwlinear_int.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

