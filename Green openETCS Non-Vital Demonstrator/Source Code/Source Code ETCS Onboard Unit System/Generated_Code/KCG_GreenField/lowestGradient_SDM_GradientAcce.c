/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lowestGradient_SDM_GradientAcce.h"

/* SDM_GradientAcceleration_Pkg::lowestGradient */
void lowestGradient_SDM_GradientAcce(
  /* SDM_GradientAcceleration_Pkg::lowestGradient::Index */ kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientAccu */ Gradient_real_t_SDM_GradientAcc lowestGradientAccu,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::BeginIndex */ kcg_int BeginIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::EndIndex */ kcg_int EndIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::cond */ kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientOut */ Gradient_real_t_SDM_GradientAcc *lowestGradientOut)
{
  /* SDM_GradientAcceleration_Pkg::lowestGradient::_L23 */
  static Gradient_section_real_t_SDM_Gra _L23;
  
  *cond = Index + BeginIndex < EndIndex;
  /* selectGradientOffset */
  selectGradientOffset_SDM_Gradie(GradientProfile, Index, BeginIndex, &_L23);
  /* 1 */ if (_L23.valid & (_L23.gradient < lowestGradientAccu)) {
    *lowestGradientOut = _L23.gradient;
  }
  else {
    *lowestGradientOut = lowestGradientAccu;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** lowestGradient_SDM_GradientAcce.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

