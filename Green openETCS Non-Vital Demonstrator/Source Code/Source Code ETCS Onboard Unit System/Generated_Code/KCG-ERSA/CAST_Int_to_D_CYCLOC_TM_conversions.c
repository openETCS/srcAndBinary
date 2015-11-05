/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_CYCLOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_CYCLOC */
D_CYCLOC CAST_Int_to_D_CYCLOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_CYCLOC::d_cycloc_int */ kcg_int d_cycloc_int)
{
  /* TM_conversions::CAST_Int_to_D_CYCLOC::d_cycloc */
  static D_CYCLOC d_cycloc;
  
  d_cycloc = d_cycloc_int;
  return d_cycloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_CYCLOC_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

