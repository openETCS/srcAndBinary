/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_REF_to_int_TM_conversion.h"

/* TM_conversions::CAST_D_REF_to_int */
kcg_int CAST_D_REF_to_int_TM_conversion(
  /* TM_conversions::CAST_D_REF_to_int::d_ref */ D_REF d_ref)
{
  /* TM_conversions::CAST_D_REF_to_int::d_ref_int */
  static kcg_int d_ref_int;
  
  d_ref_int = d_ref;
  return d_ref_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_D_REF_to_int_TM_conversion.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

