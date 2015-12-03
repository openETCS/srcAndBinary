/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurveArc */
void getLocationOnCurveArc_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getLocationOnCurveArc::arc */ ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::location */ L_internal_real_Type_SDM_Types_Pkg *location,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::valid */ kcg_bool *valid)
{
  /* CalcBrakingCurves_types::getLocationOnCurveArc */
  static kcg_real tmp;
  
  *valid = 0.0 != (*arc).acceleration;
  /* 1 */ if (*valid) {
    tmp = (*arc).acceleration * 2.0;
  }
  else {
    tmp = 1.0;
  }
  *location = (*arc).distance - (v_est * v_est - (*arc).speed * (*arc).speed) /
    tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLocationOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

