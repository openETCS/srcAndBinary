/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */
#ifndef _internalCycle_SDM_GradientAcceleration_Pkg_H_
#define _internalCycle_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "lowestGradient_SDM_GradientAcceleration_Pkg.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"
#include "DetermineNewIndices_SDM_GradientAcceleration_Pkg.h"
#include "CalcNearestDistance_SDM_GradientAcceleration_Pkg.h"
#include "MoveTrainPosition_SDM_GradientAcceleration_Pkg.h"
#include "addNewSection_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_GradientAcceleration_Pkg::internalCycle */
extern void internalCycle_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::internalCycle::index */kcg_int index,
  /* SDM_GradientAcceleration_Pkg::internalCycle::Accu */ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::internalCycle::SvLPosition */L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::GradientProfile */GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::internalCycle::condition */kcg_bool *condition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::AccuOut */ACC_SDM_GradientAcceleration_Pkg *AccuOut);

#endif /* _internalCycle_SDM_GradientAcceleration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** internalCycle_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-11-09T13:58:53
*************************************************************$ */

