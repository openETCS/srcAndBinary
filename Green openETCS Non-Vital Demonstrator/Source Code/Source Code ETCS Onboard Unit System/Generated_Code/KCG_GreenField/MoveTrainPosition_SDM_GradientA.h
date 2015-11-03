/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _MoveTrainPosition_SDM_Gradient
#define _MoveTrainPosition_SDM_Gradient

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::MoveTrainPosition */
extern void MoveTrainPosition_SDM_GradientA(
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::distanceStep */ kcg_real distanceStep,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::Accu */ ACC_SDM_GradientAcceleration_Pk *Accu,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newFront */ kcg_real *newFront,
  /* SDM_GradientAcceleration_Pkg::MoveTrainPosition::newRear */ kcg_real *newRear);

#endif /* _MoveTrainPosition_SDM_Gradient */
/* $**************** KCG Version 6.4 (build i21) ****************
** MoveTrainPosition_SDM_GradientA.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

