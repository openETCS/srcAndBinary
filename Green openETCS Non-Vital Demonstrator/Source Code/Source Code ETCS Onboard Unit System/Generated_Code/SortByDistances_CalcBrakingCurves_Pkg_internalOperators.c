/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
void SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::reverseBC */ParabolaCurve_T_CalcBrakingCurves_types *reverseBC,
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::sortedBC */ParabolaCurve_T_CalcBrakingCurves_types *sortedBC)
{
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types tmp4;
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types tmp3;
  static ParabolaCurveValid_T_CalcBrakingCurves_types tmp2;
  static struct__78676 tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  
  for (i = 0; i < 25; i++) {
    (*sortedBC).distances[i] = (*reverseBC).distances[24 - i];
    tmp4[i] = (*reverseBC).speeds[24 - i];
    tmp3[i] = (*reverseBC).accelerations[24 - i];
    tmp2[i] = (*reverseBC).valid[24 - i];
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*sortedBC).speeds,
    &tmp4);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*sortedBC).accelerations,
    &tmp3);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*sortedBC).valid,
    &tmp2);
  for (i = 0; i < 25; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp1, sortedBC);
    /* 1 */
    deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
      &tmp1,
      &tmp,
      sortedBC);
    if (!tmp) {
      break;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SortByDistances_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

