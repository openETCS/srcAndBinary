/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _DistanceToNextStep_SDM_Gradien
#define _DistanceToNextStep_SDM_Gradien

#include "kcg_types.h"
#include "selectGradientOffset_SDM_Gradie.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::DistanceToNextStep */
extern void DistanceToNextStep_SDM_Gradient(
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::position */ L_internal_real_Type_SDM_Types_ position,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::relatedIndex */ kcg_int relatedIndex,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::distance */ L_internal_real_Type_SDM_Types_ *distance,
  /* SDM_GradientAcceleration_Pkg::DistanceToNextStep::validDistance */ kcg_bool *validDistance);

#endif /* _DistanceToNextStep_SDM_Gradien */
/* $**************** KCG Version 6.4 (build i21) ****************
** DistanceToNextStep_SDM_Gradient.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

