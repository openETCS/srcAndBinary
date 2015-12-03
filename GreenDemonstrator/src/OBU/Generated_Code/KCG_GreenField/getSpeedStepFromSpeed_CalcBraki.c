/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedStepFromSpeed_CalcBraki.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed */
void getSpeedStepFromSpeed_CalcBraki(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedIn */ V_internal_real_Type_SDM_Types_ SpeedIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::ASafeSpeeds */ ASafeSpeedDefinition_T_CalcBrak *ASafeSpeeds,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepOut */ V_internal_real_Type_SDM_Types_ *SpeedStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepIndexOut */ kcg_int *SpeedStepIndexOut)
{
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed */
  static kcg_int acc;
  static kcg_int i;
  
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
** getSpeedStepFromSpeed_CalcBraki.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

