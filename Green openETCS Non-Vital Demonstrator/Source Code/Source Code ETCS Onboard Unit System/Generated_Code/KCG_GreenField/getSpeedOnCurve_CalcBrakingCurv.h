/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _getSpeedOnCurve_CalcBrakingCur
#define _getSpeedOnCurve_CalcBrakingCur

#include "kcg_types.h"
#include "getSpeedOnCurveArc_CalcBrakingC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_types::getSpeedOnCurve */
extern void getSpeedOnCurve_CalcBrakingCurv(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurv *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */ L_internal_real_Type_SDM_Types_ position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */ V_internal_real_Type_SDM_Types_ *speed);

#endif /* _getSpeedOnCurve_CalcBrakingCur */
/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurve_CalcBrakingCurv.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

