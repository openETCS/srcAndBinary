/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_GRADIENT_TM_conve.h"

/* TM_conversions::CAST_Int_to_D_GRADIENT */
D_GRADIENT CAST_Int_to_D_GRADIENT_TM_conve(
  /* TM_conversions::CAST_Int_to_D_GRADIENT::d_gradient_int */ kcg_int d_gradient_int)
{
  /* TM_conversions::CAST_Int_to_D_GRADIENT::d_gradient */
  static D_GRADIENT d_gradient;
  
  d_gradient = d_gradient_int;
  return d_gradient;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_GRADIENT_TM_conve.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

