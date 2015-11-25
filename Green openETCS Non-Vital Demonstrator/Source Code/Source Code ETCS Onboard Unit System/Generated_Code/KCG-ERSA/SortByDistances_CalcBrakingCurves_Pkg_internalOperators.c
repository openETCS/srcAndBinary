/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
void SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::reverseBC */ ParabolaCurve_T_CalcBrakingCurves_types *reverseBC,
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::sortedBC */ ParabolaCurve_T_CalcBrakingCurves_types *sortedBC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */ ParabolaCurveSpeeds_T_CalcBrakingCurves_types tmp2;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */ ParabolaCurveAccelerations_T_CalcBrakingCurves_types tmp1;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */ ParabolaCurveValid_T_CalcBrakingCurves_types tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */ ParabolaCurve_T_CalcBrakingCurves_types acc;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */ kcg_bool cond_iterw;
  kcg_int i;
  
  for (i = 0; i < 114; i++) {
    (*sortedBC).distances[i] = (*reverseBC).distances[113 - i];
    tmp2[i] = (*reverseBC).speeds[113 - i];
    tmp1[i] = (*reverseBC).accelerations[113 - i];
    tmp[i] = (*reverseBC).valid[113 - i];
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*sortedBC).speeds,
    &tmp2);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*sortedBC).accelerations,
    &tmp1);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*sortedBC).valid,
    &tmp);
  for (i = 0; i < 114; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&acc, sortedBC);
    /* 1 */
    deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
      &acc,
      &cond_iterw,
      sortedBC);
    if (!cond_iterw) {
      break;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SortByDistances_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

