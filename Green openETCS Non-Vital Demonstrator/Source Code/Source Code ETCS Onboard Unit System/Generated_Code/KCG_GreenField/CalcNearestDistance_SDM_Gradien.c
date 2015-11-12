/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcNearestDistance_SDM_Gradien.h"

/* SDM_GradientAcceleration_Pkg::CalcNearestDistance */
void CalcNearestDistance_SDM_Gradien(
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::Accu */ ACC_SDM_GradientAcceleration_Pk *Accu,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::oneValid */ kcg_bool *oneValid,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::NearestDistance */ kcg_real *NearestDistance,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::nearestDistanceIsFrontend */ kcg_bool *nearestDistanceIsFrontend)
{
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L5 */
  static L_internal_real_Type_SDM_Types_ _L5;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L6 */
  static kcg_bool _L6;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L9 */
  static L_internal_real_Type_SDM_Types_ _L9;
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::_L10 */
  static kcg_bool _L10;
  
  /* DistanceToNextStep */
  DistanceToNextStep_SDM_Gradient(
    (*Accu).frontPos,
    (*Accu).frontIndex,
    GradientProfile,
    &_L5,
    &_L6);
  /* 1 */
  DistanceToNextStep_SDM_Gradient(
    (*Accu).rearPos,
    (*Accu).rearIndex,
    GradientProfile,
    &_L9,
    &_L10);
  *nearestDistanceIsFrontend = (_L5 < _L9) & _L6;
  /* 1 */ if (*nearestDistanceIsFrontend) {
    *NearestDistance = _L5;
  }
  else {
    *NearestDistance = _L9;
  }
  *oneValid = _L6 | _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcNearestDistance_SDM_Gradien.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

