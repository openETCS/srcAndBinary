/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _internalCycle_SDM_GradientAcce
#define _internalCycle_SDM_GradientAcce

#include "kcg_types.h"
#include "lowestGradient_SDM_GradientAcce.h"
#include "selectGradientOffset_SDM_Gradie.h"
#include "DetermineNewIndices_SDM_Gradien.h"
#include "CalcNearestDistance_SDM_Gradien.h"
#include "MoveTrainPosition_SDM_GradientA.h"
#include "addNewSection_SDM_GradientAccel.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::internalCycle */
extern void internalCycle_SDM_GradientAccel(
  /* SDM_GradientAcceleration_Pkg::internalCycle::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::internalCycle::Accu */ ACC_SDM_GradientAcceleration_Pk *Accu,
  /* SDM_GradientAcceleration_Pkg::internalCycle::SvLPosition */ L_internal_real_Type_SDM_Types_ SvLPosition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::internalCycle::condition */ kcg_bool *condition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::AccuOut */ ACC_SDM_GradientAcceleration_Pk *AccuOut);

#endif /* _internalCycle_SDM_GradientAcce */
/* $**************** KCG Version 6.4 (build i21) ****************
** internalCycle_SDM_GradientAccel.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

