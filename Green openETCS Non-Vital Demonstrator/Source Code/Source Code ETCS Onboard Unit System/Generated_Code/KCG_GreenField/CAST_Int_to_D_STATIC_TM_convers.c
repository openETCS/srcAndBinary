/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_STATIC_TM_convers.h"

/* TM_conversions::CAST_Int_to_D_STATIC */
D_STATIC CAST_Int_to_D_STATIC_TM_convers(
  /* TM_conversions::CAST_Int_to_D_STATIC::d_static_int */ kcg_int d_static_int)
{
  /* TM_conversions::CAST_Int_to_D_STATIC::d_static */
  static D_STATIC d_static;
  
  d_static = d_static_int;
  return d_static;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_STATIC_TM_convers.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

