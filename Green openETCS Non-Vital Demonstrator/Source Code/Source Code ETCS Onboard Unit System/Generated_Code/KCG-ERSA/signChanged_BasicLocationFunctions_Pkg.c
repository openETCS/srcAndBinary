/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "signChanged_BasicLocationFunctions_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void signChanged_init_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  outC->change = kcg_true;
  outC->init = kcg_true;
  outC->rem_val = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void signChanged_reset_BasicLocationFunctions_Pkg(
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* BasicLocationFunctions_Pkg::signChanged */
void signChanged_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::signChanged::val */ kcg_int val,
  outC_signChanged_BasicLocationFunctions_Pkg *outC)
{
  /* BasicLocationFunctions_Pkg::signChanged */ kcg_int tmp2;
  /* BasicLocationFunctions_Pkg::signChanged */ kcg_int tmp1;
  /* BasicLocationFunctions_Pkg::signChanged */ kcg_int tmp;
  /* BasicLocationFunctions_Pkg::signChanged::_L2 */ kcg_int _L2;
  
  /* last_init_ck_val */ if (outC->init) {
    outC->init = kcg_false;
    _L2 = 0;
  }
  else {
    _L2 = outC->rem_val;
  }
  tmp1 = val + _L2;
  /* 2 */ if (0 <= tmp1) {
    tmp2 = tmp1;
  }
  else {
    tmp2 = - tmp1;
  }
  /* 2 */ if (0 <= val) {
    tmp1 = val;
  }
  else {
    tmp1 = - val;
  }
  /* 2 */ if (0 <= _L2) {
    tmp = _L2;
  }
  else {
    tmp = - _L2;
  }
  outC->change = tmp2 < tmp1 + tmp;
  outC->rem_val = val;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** signChanged_BasicLocationFunctions_Pkg.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

