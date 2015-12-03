/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectGradientOffset_SDM_Gradie.h"

/* SDM_GradientAcceleration_Pkg::selectGradientOffset */
void selectGradientOffset_SDM_Gradie(
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::Index */ kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::Offset */ kcg_int Offset,
  /* SDM_GradientAcceleration_Pkg::selectGradientOffset::GradientSect */ Gradient_section_real_t_SDM_Gra *GradientSect)
{
  if ((0 <= Index + Offset) & (Index + Offset < 50)) {
    kcg_copy_Gradient_section_real_(
      GradientSect,
      &(*GradientProfile)[Index + Offset]);
  }
  else {
    (*GradientSect).location = 0.0;
    (*GradientSect).gradient = 0.0;
    (*GradientSect).valid = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** selectGradientOffset_SDM_Gradie.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

