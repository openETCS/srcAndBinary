/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurve_CalcBrakingCurv.h"

/* CalcBrakingCurves_types::getSpeedOnCurve */
void getSpeedOnCurve_CalcBrakingCurv(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurv *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */ L_internal_real_Type_SDM_Types_ position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */ V_internal_real_Type_SDM_Types_ *speed)
{
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static ParabolaArc_T_CalcBrakingCurves mk_struct;
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static kcg_int acc;
  static kcg_int i;
  /* CalcBrakingCurves_types::searchIdxFloor */
  static L_internal_real_Type_SDM_Types_ tmp_1;
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static kcg_bool tmp2;
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static kcg_real tmp1;
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static kcg_real tmp;
  /* CalcBrakingCurves_types::getSpeedOnCurve::idx */
  static kcg_int idx;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L6 */
  static kcg_real _L6;
  
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
    *speed = /* 1 */ getSpeedOnCurveArc_CalcBrakingC(&mk_struct, position);
  }
  else {
    *speed = 0.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurve_CalcBrakingCurv.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

