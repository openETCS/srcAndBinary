/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlipFlopJK_digital.h"

void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FlipFlopJK */
void FlipFlopJK_digital(
  /* digital::FlipFlopJK::Set */kcg_bool Set,
  /* digital::FlipFlopJK::Reset */kcg_bool Reset,
  /* digital::FlipFlopJK::Init */kcg_bool Init,
  outC_FlipFlopJK_digital *outC)
{
  if (outC->init) {
    outC->init = kcg_false;
    outC->FFJK_Output = Init;
  }
  else if (Set & Reset) {
    outC->FFJK_Output = !outC->FFJK_Output;
  }
  else {
    outC->FFJK_Output = Set | (!Reset & outC->FFJK_Output);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlipFlopJK_digital.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

