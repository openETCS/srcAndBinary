/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeRow_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeRow */
void iterateASafeRow_SDMModelPkg(
  /* SDMModelPkg::iterateASafeRow::last_gradient */ A_internal_real_Type_SDM_Types_ last_gradient,
  /* SDMModelPkg::iterateASafeRow::A */ A_internal_real_Type_SDM_Types_ A,
  /* SDMModelPkg::iterateASafeRow::AGradient */ A_gradient_element_t_SDM_Gradie *AGradient,
  /* SDMModelPkg::iterateASafeRow::keep_gradient */ A_internal_real_Type_SDM_Types_ *keep_gradient,
  /* SDMModelPkg::iterateASafeRow::A_graded */ A_internal_real_Type_SDM_Types_ *A_graded)
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
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

