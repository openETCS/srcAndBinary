/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AGradient_SDM_GradientAccelerat.h"

#ifndef KCG_USER_DEFINED_INIT
void AGradient_init_SDM_GradientAcce(outC_AGradient_SDM_GradientAcce *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 100; i++) {
    outC->A_gradient[i].position = 0.0;
    outC->A_gradient[i].gradient_acceleration = 0.0;
    outC->A_gradient[i].valid = kcg_true;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AGradient_reset_SDM_GradientAcc(outC_AGradient_SDM_GradientAcce *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_GradientAcceleration_Pkg::AGradient */
void AGradient_SDM_GradientAccelerat(
  /* SDM_GradientAcceleration_Pkg::AGradient::TrainLocations */ TrainLocations_real_T_SDM_Types *TrainLocations,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile */ GradientProfile_real_t_SDM_Grad *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::AGradient::GradientProfile_updated */ kcg_bool GradientProfile_updated,
  /* SDM_GradientAcceleration_Pkg::AGradient::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_GradientAcceleration_Pkg::AGradient::targetCollection */ TargetCollection_T_TargetManage *targetCollection,
  outC_AGradient_SDM_GradientAcce *outC)
{
  /* SDM_GradientAcceleration_Pkg::AGradient::_L15 */
  static kcg_bool _L15;
  /* SDM_GradientAcceleration_Pkg::AGradient::_L17 */
  static A_gradient_element_t_SDM_Gradie _L17;
  static kcg_int i;
  
  _L17.position = 0.0;
  _L17.gradient_acceleration = 0.0;
  _L17.valid = kcg_false;
  _L15 = ((*targetCollection).updatedTargetList | GradientProfile_updated) &
    ((*targetCollection).SvL_LoA_target.targetType !=
      invalid_TargetManagement_types);
  /* ck__L15 */ if (_L15) {
    /* 1 */
    CalcA_Gradient_SDM_GradientAcce(
      (*TrainLocations).d_est_frontendPos,
      GradientProfile,
      trainData,
      (*targetCollection).SvL_LoA_target.distance,
      &outC->A_gradient);
  }
  else if (outC->init) {
    for (i = 0; i < 100; i++) {
      kcg_copy_A_gradient_element_t_S(&outC->A_gradient[i], &_L17);
    }
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AGradient_SDM_GradientAccelerat.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

