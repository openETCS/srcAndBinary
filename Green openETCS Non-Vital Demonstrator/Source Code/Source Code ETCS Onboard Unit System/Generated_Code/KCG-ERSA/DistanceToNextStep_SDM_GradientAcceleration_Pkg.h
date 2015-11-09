/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */
#ifndef _DistanceToNextStep_SDM_GradientAcceleration_Pkg_H_
#define _DistanceToNextStep_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_GradientAcceleration_Pkg::DistanceToNextStep */
extern void DistanceToNextStep_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::position */L_internal_real_Type_SDM_Types_Pkg position,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::relatedIndex */kcg_int relatedIndex,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::distance */L_internal_real_Type_SDM_Types_Pkg *distance,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::validDistance */kcg_bool *validDistance);

#endif /* _DistanceToNextStep_SDM_GradientAcceleration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DistanceToNextStep_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */

