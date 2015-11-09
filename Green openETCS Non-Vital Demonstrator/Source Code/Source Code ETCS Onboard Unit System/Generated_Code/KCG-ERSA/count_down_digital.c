/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "count_down_digital.h"

void count_down_reset_digital(outC_count_down_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::count_down */
void count_down_digital(
  /* digital::count_down::Reset */kcg_bool Reset,
  /* digital::count_down::N */kcg_int N,
  outC_count_down_digital *outC)
{
  if (Reset) {
    outC->cpt = N;
  }
  else if (outC->init) {
    outC->cpt = N;
  }
  else {
    outC->cpt = outC->_L4;
  }
  outC->init = kcg_false;
  outC->_L4 = outC->cpt - 1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** count_down_digital.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

