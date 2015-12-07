/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurve */
void getSpeedOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */ L_internal_real_Type_SDM_Types_Pkg position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg *speed)
{
  /* CalcBrakingCurves_types::getSpeedOnCurve */ ParabolaArc_T_CalcBrakingCurves_types mk_struct;
  /* CalcBrakingCurves_types::getSpeedOnCurve */ kcg_int acc;
  kcg_int i;
  /* CalcBrakingCurves_types::searchIdxFloor */ L_internal_real_Type_SDM_Types_Pkg tmp_1;
  /* CalcBrakingCurves_types::getSpeedOnCurve */ kcg_bool tmp2;
  /* CalcBrakingCurves_types::getSpeedOnCurve */ kcg_real tmp1;
  /* CalcBrakingCurves_types::getSpeedOnCurve */ kcg_real tmp;
  /* CalcBrakingCurves_types::getSpeedOnCurve::idx */ kcg_int idx;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L6 */ kcg_real _L6;
  
  idx = - 1;
  for (i = 0; i < 114; i++) {
    acc = idx;
    /* 2 */ if ((*curve).valid[i]) {
      tmp_1 = (*curve).distances[i];
    }
    else {
      tmp_1 = 0.0;
    }
    tmp2 = !(position <= tmp_1);
    /* 1 */ if (tmp2) {
      idx = acc;
    }
    else {
      idx = i;
    }
    if (!tmp2) {
      break;
    }
  }
  if ((0 <= idx) & (idx < 114)) {
    _L6 = (*curve).accelerations[idx];
    tmp2 = (*curve).valid[idx];
  }
  else {
    tmp2 = kcg_false;
    _L6 = 0.0;
  }
  *valid = (_L6 >= 0.0) & tmp2;
  /* ck_valid */ if (*valid) {
    if ((0 <= idx) & (idx < 114)) {
      tmp1 = (*curve).distances[idx];
      tmp = (*curve).speeds[idx];
    }
    else {
      tmp1 = 0.0;
      tmp = 0.0;
    }
    mk_struct.distance = tmp1;
    mk_struct.speed = tmp;
    mk_struct.acceleration = _L6;
    *speed = /* 1 */
      getSpeedOnCurveArc_CalcBrakingCurves_types(&mk_struct, position);
  }
  else {
    *speed = 0.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurve_CalcBrakingCurves_types.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

