/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance */
void getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceIn */ L_internal_real_Type_SDM_Types_Pkg DistanceIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::ASafeDistances */ ASafeDistanceDefinition_T_CalcBrakingCurves_types *ASafeDistances,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepOut */ L_internal_real_Type_SDM_Types_Pkg *DistanceStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepIndexOut */ kcg_int *DistanceStepIndexOut)
{
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance */
  static kcg_int acc;
  static kcg_int i;
  
  *DistanceStepIndexOut = 0;
  for (i = 0; i < 100; i++) {
    acc = *DistanceStepIndexOut;
    /* 1 */ if (DistanceIn < (*ASafeDistances)[i]) {
      *DistanceStepIndexOut = acc;
    }
    else {
      *DistanceStepIndexOut = i;
    }
  }
  if ((0 <= *DistanceStepIndexOut) & (*DistanceStepIndexOut < 100)) {
    *DistanceStepOut = (*ASafeDistances)[*DistanceStepIndexOut];
  }
  else {
    *DistanceStepOut = 0.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

