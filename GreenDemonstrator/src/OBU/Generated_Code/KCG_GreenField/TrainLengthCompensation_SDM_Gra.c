/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLengthCompensation_SDM_Gra.h"

/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
void TrainLengthCompensation_SDM_Gra(
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::d_est_front */ L_internal_real_Type_SDM_Types_ d_est_front,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::SvLPosition */ L_internal_real_Type_SDM_Types_ SvLPosition,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::CompensatedProfile */ GradientProfile_real_compensate *CompensatedProfile)
{
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
  static ACC_SDM_GradientAcceleration_Pk acc;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
  static kcg_bool cond_iterw;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L3 */
  static ACC_SDM_GradientAcceleration_Pk _L3;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L11 */
  static Gradient_section_real_t_SDM_Gra _L11;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L94 */
  static kcg_real _L94;
  static kcg_int i;
  
  _L3.frontPos = d_est_front;
  _L11.location = 0.0;
  _L11.gradient = 0.0;
  _L11.valid = kcg_false;
  _L94 = d_est_front - /* 1 */
    TransformL_intToL_real_SDM_Type((*trainData).trainLength);
  _L3.rearPos = _L94;
  _L3.frontIndex = /* SearchIndexInGradientProfile */
    SearchIndexInGradientProfile_SD(GradientProfile, d_est_front);
  _L3.rearIndex = /* 1 */
    SearchIndexInGradientProfile_SD(GradientProfile, _L94);
  for (i = 0; i < 100; i++) {
    kcg_copy_Gradient_section_real_(&_L3.compensatedGradientProfile[i], &_L11);
  }
  if ((*GradientProfile)[0].valid) {
    for (i = 0; i < 100; i++) {
      kcg_copy_ACC_SDM_GradientAccele(&acc, &_L3);
      /* 1 */
      internalCycle_SDM_GradientAccel(
        i,
        &acc,
        SvLPosition,
        GradientProfile,
        &cond_iterw,
        &_L3);
      if (!cond_iterw) {
        break;
      }
    }
  }
  kcg_copy_GradientProfile_real_c(
    CompensatedProfile,
    &_L3.compensatedGradientProfile);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainLengthCompensation_SDM_Gra.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

