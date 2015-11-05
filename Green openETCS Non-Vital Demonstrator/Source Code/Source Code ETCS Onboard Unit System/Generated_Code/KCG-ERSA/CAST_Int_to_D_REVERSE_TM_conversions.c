/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_REVERSE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_REVERSE */
D_REVERSE CAST_Int_to_D_REVERSE_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_REVERSE::d_reverse_int */ kcg_int d_reverse_int)
{
  /* TM_conversions::CAST_Int_to_D_REVERSE::d_reverse */
  static D_REVERSE d_reverse;
  
  d_reverse = d_reverse_int;
  return d_reverse;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_REVERSE_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

