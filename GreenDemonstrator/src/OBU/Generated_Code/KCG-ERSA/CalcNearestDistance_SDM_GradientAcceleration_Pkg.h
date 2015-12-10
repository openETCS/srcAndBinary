/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */
#ifndef _CalcNearestDistance_SDM_GradientAcceleration_Pkg_H_
#define _CalcNearestDistance_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "DistanceToNextStep_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::CalcNearestDistance */
extern void CalcNearestDistance_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::oneValid */ kcg_bool *oneValid,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::NearestDistance */ kcg_real *NearestDistance,
  /* SDM_GradientAcceleration_Pkg::CalcNearestDistance::nearestDistanceIsFrontend */ kcg_bool *nearestDistanceIsFrontend);

#endif /* _CalcNearestDistance_SDM_GradientAcceleration_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcNearestDistance_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */

