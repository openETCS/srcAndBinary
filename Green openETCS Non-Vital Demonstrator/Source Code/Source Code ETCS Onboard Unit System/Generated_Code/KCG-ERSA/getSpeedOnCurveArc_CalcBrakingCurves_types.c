/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurveArc */
V_internal_real_Type_SDM_Types_Pkg getSpeedOnCurveArc_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::arc */ ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::location */ L_internal_real_Type_SDM_Types_Pkg location)
{
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::speed */ V_internal_real_Type_SDM_Types_Pkg speed;
  
  speed = /* 1 */
    SqrtR_mathext(
      (*arc).speed * (*arc).speed + ((*arc).distance - location) *
      ((*arc).acceleration + (*arc).acceleration));
  return speed;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

