/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_CYCLOC_TM_convers.h"

/* TM_conversions::CAST_Int_to_D_CYCLOC */
D_CYCLOC CAST_Int_to_D_CYCLOC_TM_convers(
  /* TM_conversions::CAST_Int_to_D_CYCLOC::d_cycloc_int */ kcg_int d_cycloc_int)
{
  /* TM_conversions::CAST_Int_to_D_CYCLOC::d_cycloc */
  static D_CYCLOC d_cycloc;
  
  d_cycloc = d_cycloc_int;
  return d_cycloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_CYCLOC_TM_convers.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

