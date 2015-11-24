/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLengthCompensation_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */
void TrainLengthCompensation_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::SvLPosition */ L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::CompensatedProfile */ GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *CompensatedProfile)
{
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */ ACC_SDM_GradientAcceleration_Pkg acc;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation */ kcg_bool cond_iterw;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L3 */ ACC_SDM_GradientAcceleration_Pkg _L3;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L11 */ Gradient_section_real_t_SDM_GradientAcceleration_types _L11;
  /* SDM_GradientAcceleration_Pkg::TrainLengthCompensation::_L94 */ kcg_real _L94;
  kcg_int i;
  
  _L3.frontPos = d_est_front;
  _L11.location = 0.0;
  _L11.gradient = 0.0;
  _L11.valid = kcg_false;
  _L94 = d_est_front - /* 1 */
    TransformL_intToL_real_SDM_Types_Pkg((*trainData).trainLength);
  _L3.rearPos = _L94;
  _L3.frontIndex = /* SearchIndexInGradientProfile */
    SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
      GradientProfile,
      d_est_front);
  _L3.rearIndex = /* 1 */
    SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
      GradientProfile,
      _L94);
  for (i = 0; i < 100; i++) {
    kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
      &_L3.compensatedGradientProfile[i],
      &_L11);
  }
  if ((*GradientProfile)[0].valid) {
    for (i = 0; i < 100; i++) {
      kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&acc, &_L3);
      /* 1 */
      internalCycle_SDM_GradientAcceleration_Pkg(
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
  kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
    CompensatedProfile,
    &_L3.compensatedGradientProfile);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainLengthCompensation_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

