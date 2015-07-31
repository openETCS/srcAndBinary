/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurve */
void getSpeedOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */L_internal_real_Type_SDM_Types_Pkg position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */V_internal_real_Type_SDM_Types_Pkg *speed)
{
  static struct__78664 tmp;
  static kcg_int tmp5;
  static kcg_bool tmp4;
  static kcg_int i;
  static kcg_real tmp3;
  static kcg_real tmp2;
  static kcg_real tmp1;
  /* CalcBrakingCurves_types::getSpeedOnCurve::idx */
  static kcg_int idx;
  
  idx = - 1;
  for (i = 0; i < 25; i++) {
    tmp5 = idx;
    if ((*curve).valid[i]) {
      tmp1 = (*curve).distances[i];
    }
    else {
      tmp1 = 0.0;
    }
    tmp4 = !(position <= tmp1);
    if (tmp4) {
      idx = tmp5;
    }
    else {
      idx = i;
    }
    if (!tmp4) {
      break;
    }
  }
  if ((0 <= idx) & (idx < 25)) {
    *valid = (*curve).valid[idx];
  }
  else {
    *valid = kcg_false;
  }
  if (*valid) {
    if ((0 <= idx) & (idx < 25)) {
      tmp3 = (*curve).distances[idx];
      tmp2 = (*curve).speeds[idx];
      tmp1 = (*curve).accelerations[idx];
    }
    else {
      tmp3 = 0.0;
      tmp2 = 0.0;
      tmp1 = 0.0;
    }
    tmp.distance = tmp3;
    tmp.speed = tmp2;
    tmp.acceleration = tmp1;
    *speed = /* 1 */ getSpeedOnCurveArc_CalcBrakingCurves_types(&tmp, position);
  }
  else {
    *speed = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getSpeedOnCurve_CalcBrakingCurves_types.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

