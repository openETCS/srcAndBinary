/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _lowestGradient_SDM_GradientAcc
#define _lowestGradient_SDM_GradientAcc

#include "kcg_types.h"
#include "selectGradientOffset_SDM_Gradie.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::lowestGradient */
extern void lowestGradient_SDM_GradientAcce(
  /* SDM_GradientAcceleration_Pkg::lowestGradient::Index */ kcg_int Index,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientAccu */ Gradient_real_t_SDM_GradientAcc lowestGradientAccu,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::BeginIndex */ kcg_int BeginIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::EndIndex */ kcg_int EndIndex,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::cond */ kcg_bool *cond,
  /* SDM_GradientAcceleration_Pkg::lowestGradient::lowestGradientOut */ Gradient_real_t_SDM_GradientAcc *lowestGradientOut);

#endif /* _lowestGradient_SDM_GradientAcc */
/* $**************** KCG Version 6.4 (build i21) ****************
** lowestGradient_SDM_GradientAcce.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

