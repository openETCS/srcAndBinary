/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurve_CalcBrakingC.h"

/* CalcBrakingCurves_types::getLocationOnCurve */
void getLocationOnCurve_CalcBrakingC(
  /* CalcBrakingCurves_types::getLocationOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurv *curve,
  /* CalcBrakingCurves_types::getLocationOnCurve::speed */ V_internal_real_Type_SDM_Types_ speed,
  /* CalcBrakingCurves_types::getLocationOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getLocationOnCurve::location */ L_internal_real_Type_SDM_Types_ *location)
{
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static ParabolaArc_T_CalcBrakingCurves mk_struct;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static kcg_int acc;
  static kcg_int i;
  /* CalcBrakingCurves_types::searchIdxFloorBackward */
  static V_internal_real_Type_SDM_Types_ tmp_1;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static kcg_real tmp2;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static kcg_real tmp1;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static kcg_real tmp;
  /* CalcBrakingCurves_types::getLocationOnCurve::idx */
  static kcg_int idx;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L30 */
  static kcg_bool _L30;
  
  idx = - 1;
  for (i = 0; i < 114; i++) {
    acc = idx;
    /* 3 */ if ((*curve).valid[i]) {
      tmp_1 = (*curve).speeds[i];
    }
    else {
      tmp_1 = 0.0;
    }
    _L30 = speed >= tmp_1;
    /* 1 */ if (_L30) {
      idx = i;
    }
    else {
      idx = acc;
    }
    if (_L30) {
      break;
    }
  }
  if ((0 <= idx) & (idx < 114)) {
    _L30 = (*curve).valid[idx];
  }
  else {
    _L30 = kcg_false;
  }
  /* ck__L30 */ if (_L30) {
    if ((0 <= idx) & (idx < 114)) {
      tmp2 = (*curve).distances[idx];
      tmp1 = (*curve).speeds[idx];
      tmp = (*curve).accelerations[idx];
    }
    else {
      tmp2 = 0.0;
      tmp1 = 0.0;
      tmp = 0.0;
    }
    mk_struct.distance = tmp2;
    mk_struct.speed = tmp1;
    mk_struct.acceleration = tmp;
    /* 1 */ getLocationOnCurveArc_CalcBraki(&mk_struct, speed, location, valid);
  }
  else {
    *valid = kcg_false;
    *location = 0.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLocationOnCurve_CalcBrakingC.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

