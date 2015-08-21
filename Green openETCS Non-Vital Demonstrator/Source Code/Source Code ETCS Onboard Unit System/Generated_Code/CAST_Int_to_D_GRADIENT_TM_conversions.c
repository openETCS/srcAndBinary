/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_GRADIENT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_GRADIENT */
D_GRADIENT CAST_Int_to_D_GRADIENT_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_GRADIENT::d_gradient_int */kcg_int d_gradient_int)
{
  /* TM_conversions::CAST_Int_to_D_GRADIENT::d_gradient */
  static D_GRADIENT d_gradient;
  
  d_gradient = d_gradient_int;
  return d_gradient;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_GRADIENT_TM_conversions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

