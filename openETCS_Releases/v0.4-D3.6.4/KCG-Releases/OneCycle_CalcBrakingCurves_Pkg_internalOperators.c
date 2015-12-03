/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OneCycle_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::OneCycle */
void OneCycle_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistance */ L_internal_real_Type_SDM_Types_Pkg currentDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeed */ V_internal_real_Type_SDM_Types_Pkg currentSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistanceIndex */ kcg_int currentDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeedIndex */ kcg_int currentSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::backwardCalculation */ kcg_bool backwardCalculation,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::inAsafe */ ASafe_T_CalcBrakingCurves_types *inAsafe,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistance */ L_internal_real_Type_SDM_Types_Pkg *newDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeed */ V_internal_real_Type_SDM_Types_Pkg *newSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistanceIndex */ kcg_int *newDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedIndex */ kcg_int *newSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newArc */ ParabolaArc_T_CalcBrakingCurves_types *newArc)
{
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currAcceleration */
  static kcg_real currAcceleration;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedValid */
  static kcg_bool newSpeedValid;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L1 */
  static V_internal_real_Type_SDM_Types_Pkg _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L30 */
  static kcg_real _L30;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L34 */
  static kcg_real _L34;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L87 */
  static kcg_int _L87;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L88 */
  static kcg_int _L88;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L98 */
  static kcg_bool _L98;
  
  currAcceleration = /* 1 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      currentDistanceIndex,
      currentSpeedIndex,
      &(*inAsafe).data);
  _L87 = /* 3 */
    nextIndex_CalcBrakingCurves_Pkg_internalOperators(
      (kcg_bool) !backwardCalculation,
      currentDistanceIndex,
      cMAX_DISTANCE_STEPS_CalcBrakingCurves_types);
  if ((0 <= _L87) & (_L87 < 100)) {
    _L30 = (*inAsafe).distance_definition[_L87];
  }
  else {
    _L30 = 0.0;
  }
  /* 1 */
  FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
    currAcceleration,
    currentDistance,
    _L30,
    currentSpeed,
    &_L1,
    &_L98);
  _L88 = /* 1 */
    nextIndex_CalcBrakingCurves_Pkg_internalOperators(
      backwardCalculation,
      currentSpeedIndex,
      cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types);
  if ((0 <= _L88) & (_L88 < 14)) {
    _L34 = (*inAsafe).speed_definition[_L88];
  }
  else {
    _L34 = 0.0;
  }
  newSpeedValid = _L98 & (_L1 <= _L34);
  /* 3 */ if (newSpeedValid) {
    *newSpeed = _L1;
    *newDistance = _L30;
    *newDistanceIndex = _L87;
    *newSpeedIndex = currentSpeedIndex;
  }
  else {
    *newSpeed = _L34;
    *newDistance = /* 1 */
      FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
        currentDistance,
        _L34,
        currentSpeed,
        currAcceleration);
    *newDistanceIndex = currentDistanceIndex;
    *newSpeedIndex = _L88;
  }
  (*newArc).distance = *newDistance;
  (*newArc).speed = *newSpeed;
  (*newArc).acceleration = /* 2 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      *newDistanceIndex,
      *newSpeedIndex,
      &(*inAsafe).data);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** OneCycle_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

