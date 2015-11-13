/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurveArc_CalcBrakingC.h"

/* CalcBrakingCurves_types::getSpeedOnCurveArc */
V_internal_real_Type_SDM_Types_ getSpeedOnCurveArc_CalcBrakingC(
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::arc */ ParabolaArc_T_CalcBrakingCurves *arc,
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::location */ L_internal_real_Type_SDM_Types_ location)
{
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::speed */
  static V_internal_real_Type_SDM_Types_ speed;
  
  speed = /* 1 */
    SqrtR_mathext(
      (*arc).speed * (*arc).speed + ((*arc).distance - location) *
      ((*arc).acceleration + (*arc).acceleration));
  return speed;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurveArc_CalcBrakingC.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

