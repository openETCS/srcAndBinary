/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DistanceToNextStep_SDM_Gradient.h"

/* SDM_GradientAcceleration_Pkg::DistanceToNextStep */
void DistanceToNextStep_SDM_Gradient(
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::position */ L_internal_real_Type_SDM_Types_ position,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::relatedIndex */ kcg_int relatedIndex,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::distance */ L_internal_real_Type_SDM_Types_ *distance,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::validDistance */ kcg_bool *validDistance)
{
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::_L15 */
  static Gradient_section_real_t_SDM_Gra _L15;
  
  /* 2 */
  selectGradientOffset_SDM_Gradie(GradientProfile, relatedIndex, 1, &_L15);
  *distance = _L15.location - position;
  *validDistance = _L15.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DistanceToNextStep_SDM_Gradient.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

