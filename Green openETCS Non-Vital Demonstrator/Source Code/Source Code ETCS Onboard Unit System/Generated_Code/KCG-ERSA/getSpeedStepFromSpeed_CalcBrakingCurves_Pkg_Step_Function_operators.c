/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed */
void getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedIn */ V_internal_real_Type_SDM_Types_Pkg SpeedIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::ASafeSpeeds */ ASafeSpeedDefinition_T_CalcBrakingCurves_types *ASafeSpeeds,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepOut */ V_internal_real_Type_SDM_Types_Pkg *SpeedStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepIndexOut */ kcg_int *SpeedStepIndexOut)
{
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed */ kcg_int acc;
  kcg_int i;
  
  *SpeedStepIndexOut = 0;
  for (i = 0; i < 14; i++) {
    acc = *SpeedStepIndexOut;
    /* 1 */ if (SpeedIn < (*ASafeSpeeds)[i]) {
      *SpeedStepIndexOut = acc;
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

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

