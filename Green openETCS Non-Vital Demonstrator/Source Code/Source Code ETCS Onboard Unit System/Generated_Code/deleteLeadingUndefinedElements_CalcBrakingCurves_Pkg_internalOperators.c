/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements */
void deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::oldCurve */ParabolaCurve_T_CalcBrakingCurves_types *oldCurve,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::condition */kcg_bool *condition,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::newCurve */ParabolaCurve_T_CalcBrakingCurves_types *newCurve)
{
  *condition = !(*oldCurve).valid[0];
  if (*condition) {
    /* popLeadingArc */
    popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(oldCurve, newCurve);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(newCurve, oldCurve);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

