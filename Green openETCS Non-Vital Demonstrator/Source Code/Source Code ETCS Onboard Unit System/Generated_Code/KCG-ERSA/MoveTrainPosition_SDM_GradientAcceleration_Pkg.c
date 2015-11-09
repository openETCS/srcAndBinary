/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveTrainPosition_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::MoveTrainPosition */
void MoveTrainPosition_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::distanceStep */kcg_real distanceStep,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::Accu */ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newFront */kcg_real *newFront,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newRear */kcg_real *newRear)
{
  *newRear = distanceStep + (*Accu).rearPos;
  *newFront = (*Accu).frontPos + distanceStep;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoveTrainPosition_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

