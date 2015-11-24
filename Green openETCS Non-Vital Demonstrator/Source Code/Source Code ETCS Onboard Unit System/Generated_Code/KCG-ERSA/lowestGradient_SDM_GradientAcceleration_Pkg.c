/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lowestGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::lowestGradient */
void lowestGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::lowestGradient::Index */ kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientAccu */ Gradient_real_t_SDM_GradientAcceleration_types lowestGradientAccu,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::BeginIndex */ kcg_int BeginIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::EndIndex */ kcg_int EndIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::cond */ kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientOut */ Gradient_real_t_SDM_GradientAcceleration_types *lowestGradientOut)
{
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L23 */ Gradient_section_real_t_SDM_GradientAcceleration_types _L23;
  
  *cond = Index + BeginIndex < EndIndex;
  /* selectGradientOffset */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    GradientProfile,
    Index,
    BeginIndex,
    &_L23);
  /* 1 */ if (_L23.valid & (_L23.gradient < lowestGradientAccu)) {
    *lowestGradientOut = _L23.gradient;
  }
  else {
    *lowestGradientOut = lowestGradientAccu;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** lowestGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

