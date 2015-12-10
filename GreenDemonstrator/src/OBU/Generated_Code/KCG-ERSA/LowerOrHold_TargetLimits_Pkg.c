/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LowerOrHold_TargetLimits_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void LowerOrHold_init_TargetLimits_Pkg(outC_LowerOrHold_TargetLimits_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_vi = 0;
  outC->vo = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LowerOrHold_reset_TargetLimits_Pkg(outC_LowerOrHold_TargetLimits_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TargetLimits_Pkg::LowerOrHold */
void LowerOrHold_TargetLimits_Pkg(
  /* TargetLimits_Pkg::LowerOrHold::vi */ V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* TargetLimits_Pkg::LowerOrHold::enable */ kcg_bool enable,
  outC_LowerOrHold_TargetLimits_Pkg *outC)
{
  /* TargetLimits_Pkg::LowerOrHold */ kcg_int tmp;
  /* TargetLimits_Pkg::LowerOrHold::_L30 */ V_odometry_Type_Obu_BasicTypes_Pkg _L30;
  
  /* last_init_ck_vi */ if (outC->init) {
    outC->init = kcg_false;
    _L30 = - 1;
    tmp = - 1;
  }
  else {
    _L30 = outC->vo;
    tmp = outC->rem_vi;
  }
  /* 1 */ if ((tmp >= 0) & enable & (_L30 < vi)) {
    outC->vo = _L30;
  }
  else {
    outC->vo = vi;
  }
  outC->rem_vi = vi;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LowerOrHold_TargetLimits_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

