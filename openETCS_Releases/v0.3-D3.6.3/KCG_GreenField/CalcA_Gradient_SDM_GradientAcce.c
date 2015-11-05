/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcA_Gradient_SDM_GradientAcce.h"

/* SDM_GradientAcceleration_Pkg::CalcA_Gradient */
void CalcA_Gradient_SDM_GradientAcce(
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::d_est_front */ L_internal_real_Type_SDM_Types_ d_est_front,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::SvLPosition */ L_internal_real_Type_SDM_Types_ SvLPosition,
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient::A_gradient */ A_gradient_t_SDM_GradientAccele *A_gradient)
{
  /* SDM_GradientAcceleration_Pkg::CalcA_Gradient */
  static GradientProfile_real_compensate tmp;
  static kcg_int i;
  
  /* 1 */
  TrainLengthCompensation_SDM_Gra(
    d_est_front,
    GradientProfile,
    trainData,
    SvLPosition,
    &tmp);
  /* 2 */ for (i = 0; i < 100; i++) {
    /* 2 */
    calcAccFromGradient_SDM_Gradien(&tmp[i], trainData, &(*A_gradient)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcA_Gradient_SDM_GradientAcce.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

