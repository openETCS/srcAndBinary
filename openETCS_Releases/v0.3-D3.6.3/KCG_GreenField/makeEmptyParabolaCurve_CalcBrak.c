/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "makeEmptyParabolaCurve_CalcBrak.h"

/* CalcBrakingCurves_types::makeEmptyParabolaCurve */
void makeEmptyParabolaCurve_CalcBrak(
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::Curve */ ParabolaCurve_T_CalcBrakingCurv *Curve)
{
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L14 */
  static array_real_114 _L14;
  static kcg_int i;
  
  for (i = 0; i < 114; i++) {
    _L14[i] = 0.0;
  }
  kcg_copy_ParabolaCurveSpeeds_T_(&(*Curve).speeds, &_L14);
  kcg_copy_ParabolaCurveAccelerat(&(*Curve).accelerations, &(*Curve).speeds);
  kcg_copy_ParabolaCurveDistances(&(*Curve).distances, &_L14);
  for (i = 0; i < 114; i++) {
    (*Curve).valid[i] = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** makeEmptyParabolaCurve_CalcBrak.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

