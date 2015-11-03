/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _TrainLengthCompensation_SDM_Gr
#define _TrainLengthCompensation_SDM_Gr

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Type.h"
#include "internalCycle_SDM_GradientAccel.h"
#include "SearchIndexInGradientProfile_SD.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
extern void TrainLengthCompensation_SDM_Gra(
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::d_est_front */ L_internal_real_Type_SDM_Types_ d_est_front,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::SvLPosition */ L_internal_real_Type_SDM_Types_ SvLPosition,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::CompensatedProfile */ GradientProfile_real_compensate *CompensatedProfile);

#endif /* _TrainLengthCompensation_SDM_Gr */
/* $**************** KCG Version 6.4 (build i21) ****************
** TrainLengthCompensation_SDM_Gra.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

