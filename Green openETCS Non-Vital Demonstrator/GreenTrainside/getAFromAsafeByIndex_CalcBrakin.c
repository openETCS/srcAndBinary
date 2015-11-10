/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getAFromAsafeByIndex_CalcBrakin.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex */
A_internal_real_Type_SDM_Types_ getAFromAsafeByIndex_CalcBrakin(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::DistanceIndex */ kcg_int DistanceIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::SpeedIndex */ kcg_int SpeedIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::Asafe */ ASafe_Data_T_CalcBrakingCurves_ *Asafe)
{
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex */
  static kcg_int tmp1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex */
  static kcg_int tmp;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::outA */
  static A_internal_real_Type_SDM_Types_ outA;
  
  /* 1 */ if (SpeedIndex <= cMAX_SPEED_VALUE_STEP_CalcBraki) {
    tmp1 = SpeedIndex;
  }
  else {
    tmp1 = cMAX_SPEED_VALUE_STEP_CalcBraki;
  }
  /* 1 */ if (DistanceIndex <= cMAX_DISTANCE_STEPS_CalcBraking) {
    tmp = DistanceIndex;
  }
  else {
    tmp = cMAX_DISTANCE_STEPS_CalcBraking;
  }
  if ((0 <= tmp1) & (tmp1 < 14) & ((0 <= tmp) & (tmp < 100))) {
    outA = (*Asafe)[tmp1][tmp];
  }
  else {
    outA = 0.0;
  }
  return outA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getAFromAsafeByIndex_CalcBrakin.c
** Generation date: 2015-11-10T23:01:09
*************************************************************$ */

