/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_STATIC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_STATIC */
D_STATIC CAST_Int_to_D_STATIC_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_STATIC::d_static_int */kcg_int d_static_int)
{
  /* TM_conversions::CAST_Int_to_D_STATIC::d_static */
  static D_STATIC d_static;
  
  d_static = d_static_int;
  return d_static;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_STATIC_TM_conversions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
