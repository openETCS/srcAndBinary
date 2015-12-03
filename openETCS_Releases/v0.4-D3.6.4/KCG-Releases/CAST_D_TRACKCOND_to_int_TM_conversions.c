/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_TRACKCOND_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_TRACKCOND_to_int */
kcg_int CAST_D_TRACKCOND_to_int_TM_conversions(
  /* TM_conversions::CAST_D_TRACKCOND_to_int::d_trackcond */ D_TRACKCOND d_trackcond)
{
  /* TM_conversions::CAST_D_TRACKCOND_to_int::d_trackcond_int */
  static kcg_int d_trackcond_int;
  
  d_trackcond_int = d_trackcond;
  return d_trackcond_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_D_TRACKCOND_to_int_TM_conversions.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

