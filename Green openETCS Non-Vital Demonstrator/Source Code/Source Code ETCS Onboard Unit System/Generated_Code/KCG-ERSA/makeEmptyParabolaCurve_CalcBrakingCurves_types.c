/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::makeEmptyParabolaCurve */
void makeEmptyParabolaCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::Curve */ ParabolaCurve_T_CalcBrakingCurves_types *Curve)
{
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L14 */
  static array_real_114 _L14;
  static kcg_int i;
  
  for (i = 0; i < 114; i++) {
    _L14[i] = 0.0;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*Curve).speeds,
    &_L14);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*Curve).accelerations,
    &(*Curve).speeds);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*Curve).distances,
    &_L14);
  for (i = 0; i < 114; i++) {
    (*Curve).valid[i] = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** makeEmptyParabolaCurve_CalcBrakingCurves_types.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

