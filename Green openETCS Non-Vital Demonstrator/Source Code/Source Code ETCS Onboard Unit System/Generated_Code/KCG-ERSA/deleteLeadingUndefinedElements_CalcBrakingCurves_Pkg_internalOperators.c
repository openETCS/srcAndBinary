/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements */
void deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::oldCurve */ ParabolaCurve_T_CalcBrakingCurves_types *oldCurve,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::condition */ kcg_bool *condition,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::newCurve */ ParabolaCurve_T_CalcBrakingCurves_types *newCurve)
{
  *condition = !(*oldCurve).valid[0];
  /* ck_condition */ if (*condition) {
    /* popLeadingArc */
    popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(oldCurve, newCurve);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(newCurve, oldCurve);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

