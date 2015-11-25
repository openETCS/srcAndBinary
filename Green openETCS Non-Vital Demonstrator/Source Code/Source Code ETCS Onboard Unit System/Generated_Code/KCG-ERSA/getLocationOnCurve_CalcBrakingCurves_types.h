/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:08
*************************************************************$ */
#ifndef _getLocationOnCurve_CalcBrakingCurves_types_H_
#define _getLocationOnCurve_CalcBrakingCurves_types_H_

#include "kcg_types.h"
#include "getLocationOnCurveArc_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_types::getLocationOnCurve */
extern void getLocationOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getLocationOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getLocationOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg speed,
  /* CalcBrakingCurves_types::getLocationOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getLocationOnCurve::location */ L_internal_real_Type_SDM_Types_Pkg *location);

#endif /* _getLocationOnCurve_CalcBrakingCurves_types_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** getLocationOnCurve_CalcBrakingCurves_types.h
** Generation date: 2015-11-25T14:46:08
*************************************************************$ */

