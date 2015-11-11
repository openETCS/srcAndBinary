/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurveArc_CalcBraki.h"

/* CalcBrakingCurves_types::getLocationOnCurveArc */
void getLocationOnCurveArc_CalcBraki(
  /* CalcBrakingCurves_types::getLocationOnCurveArc::arc */ ParabolaArc_T_CalcBrakingCurves *arc,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::v_est */ V_internal_real_Type_SDM_Types_ v_est,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::location */ L_internal_real_Type_SDM_Types_ *location,
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
** getLocationOnCurveArc_CalcBraki.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

