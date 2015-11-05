/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LINK_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_LINK */
D_LINK CAST_Int_to_D_LINK_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_LINK::d_link_int */ kcg_int d_link_int)
{
  /* TM_conversions::CAST_Int_to_D_LINK::d_link */
  static D_LINK d_link;
  
  d_link = d_link_int;
  return d_link;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_LINK_TM_conversions.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

