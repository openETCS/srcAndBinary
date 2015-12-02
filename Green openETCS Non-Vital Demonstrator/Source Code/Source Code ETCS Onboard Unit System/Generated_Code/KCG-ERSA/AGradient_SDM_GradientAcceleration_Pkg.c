/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AGradient_SDM_GradientAcceleration_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void AGradient_init_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 100; i++) {
    outC->A_gradient[i].position = 0.0;
    outC->A_gradient[i].gradient_acceleration = 0.0;
    outC->A_gradient[i].valid = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_GradientAcceleration_Pkg::AGradient */
void AGradient_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::AGradient::TrainLocations */ TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile_updated */ kcg_bool GradientProfile_updated,
  /* SDM_GradientAcceleration_Pkg::AGradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::AGradient::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC)
{
  /* SDM_GradientAcceleration_Pkg::AGradient::_L15 */ kcg_bool _L15;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L17 */ A_gradient_element_t_SDM_GradientAcceleration_types _L17;
  kcg_int i;
  
  _L17.position = 0.0;
  _L17.gradient_acceleration = 0.0;
  _L17.valid = kcg_false;
  _L15 = ((*targetCollection).updatedTargetList | GradientProfile_updated) &
    ((*targetCollection).SvL_LoA_target.targetType !=
      invalid_TargetManagement_types);
  /* ck__L15 */ if (_L15) {
    /* 1 */
    CalcA_Gradient_SDM_GradientAcceleration_Pkg(
      (*TrainLocations).d_est_frontendPos,
      GradientProfile,
      trainData,
      (*targetCollection).SvL_LoA_target.distance,
      &outC->A_gradient);
  }
  else if (outC->init) {
    for (i = 0; i < 100; i++) {
      kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(
        &outC->A_gradient[i],
        &_L17);
    }
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

