/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setArc_CalcBrakingCurves_Pkg_in.h"

/* CalcBrakingCurves_Pkg::internalOperators::setArc */
void setArc_CalcBrakingCurves_Pkg_in(
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::Arc */ ParabolaArc_T_CalcBrakingCurves *Arc,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::oldBC */ ParabolaCurve_T_CalcBrakingCurv *oldBC,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::index */ kcg_int index,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::newBC */ ParabolaCurve_T_CalcBrakingCurv *newBC)
{
  kcg_copy_ParabolaCurveDistances(&(*newBC).distances, &(*oldBC).distances);
  if ((0 <= index) & (index < 114)) {
    (*newBC).distances[index] = (*Arc).distance;
  }
  kcg_copy_ParabolaCurveSpeeds_T_(&(*newBC).speeds, &(*oldBC).speeds);
  if ((0 <= index) & (index < 114)) {
    (*newBC).speeds[index] = (*Arc).speed;
  }
  kcg_copy_ParabolaCurveAccelerat(
    &(*newBC).accelerations,
    &(*oldBC).accelerations);
  if ((0 <= index) & (index < 114)) {
    (*newBC).accelerations[index] = (*Arc).acceleration;
  }
  kcg_copy_ParabolaCurveValid_T_C(&(*newBC).valid, &(*oldBC).valid);
  if ((0 <= index) & (index < 114)) {
    (*newBC).valid[index] = kcg_true;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setArc_CalcBrakingCurves_Pkg_in.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

