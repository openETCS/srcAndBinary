/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed */
void getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedIn */V_internal_real_Type_SDM_Types_Pkg SpeedIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::ASafeSpeeds */ASafeSpeedDefinition_T_CalcBrakingCurves_types *ASafeSpeeds,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepOut */V_internal_real_Type_SDM_Types_Pkg *SpeedStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepIndexOut */kcg_int *SpeedStepIndexOut)
{
  static kcg_int tmp;
  static kcg_int i;
  
  *SpeedStepIndexOut = 0;
  for (i = 0; i < 14; i++) {
    tmp = *SpeedStepIndexOut;
    if (SpeedIn < (*ASafeSpeeds)[i]) {
      *SpeedStepIndexOut = tmp;
    }
    else {
      *SpeedStepIndexOut = i;
    }
  }
  if ((0 <= *SpeedStepIndexOut) & (*SpeedStepIndexOut < 14)) {
    *SpeedStepOut = (*ASafeSpeeds)[*SpeedStepIndexOut];
  }
  else {
    *SpeedStepOut = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

