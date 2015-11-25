/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeRow_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeRow */
void iterateASafeRow_SDMModelPkg(
  /* SDMModelPkg::iterateASafeRow::last_gradient */ A_internal_real_Type_SDM_Types_Pkg last_gradient,
  /* SDMModelPkg::iterateASafeRow::A */ A_internal_real_Type_SDM_Types_Pkg A,
  /* SDMModelPkg::iterateASafeRow::AGradient */ A_gradient_element_t_SDM_GradientAcceleration_types *AGradient,
  /* SDMModelPkg::iterateASafeRow::keep_gradient */ A_internal_real_Type_SDM_Types_Pkg *keep_gradient,
  /* SDMModelPkg::iterateASafeRow::A_graded */ A_internal_real_Type_SDM_Types_Pkg *A_graded)
{
  /* 1 */ if ((*AGradient).valid) {
    *keep_gradient = (*AGradient).gradient_acceleration;
  }
  else {
    *keep_gradient = last_gradient;
  }
  *A_graded = *keep_gradient + A;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** iterateASafeRow_SDMModelPkg.c
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

