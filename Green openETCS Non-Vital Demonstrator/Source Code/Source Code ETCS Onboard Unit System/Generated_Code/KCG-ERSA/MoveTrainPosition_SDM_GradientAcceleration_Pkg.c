/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveTrainPosition_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::MoveTrainPosition */
void MoveTrainPosition_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::distanceStep */ kcg_real distanceStep,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newFront */ kcg_real *newFront,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newRear */ kcg_real *newRear)
{
  *newFront = (*Accu).frontPos + distanceStep;
  *newRear = distanceStep + (*Accu).rearPos;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoveTrainPosition_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

