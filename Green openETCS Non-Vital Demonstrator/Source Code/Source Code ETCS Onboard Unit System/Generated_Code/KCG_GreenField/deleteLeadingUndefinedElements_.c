/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteLeadingUndefinedElements_.h"

/* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements */
void deleteLeadingUndefinedElements_(
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::oldCurve */ ParabolaCurve_T_CalcBrakingCurv *oldCurve,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::condition */ kcg_bool *condition,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::newCurve */ ParabolaCurve_T_CalcBrakingCurv *newCurve)
{
  *condition = !(*oldCurve).valid[0];
  /* ck_condition */ if (*condition) {
    /* popLeadingArc */ popLeadingArc_CalcBrakingCurves(oldCurve, newCurve);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBr(newCurve, oldCurve);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteLeadingUndefinedElements_.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

