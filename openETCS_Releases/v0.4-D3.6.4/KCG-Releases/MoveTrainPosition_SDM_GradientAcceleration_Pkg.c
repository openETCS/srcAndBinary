/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
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
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

