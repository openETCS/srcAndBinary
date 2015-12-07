/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_MAMODE_TM_convers.h"

/* TM_conversions::CAST_Int_to_D_MAMODE */
D_MAMODE CAST_Int_to_D_MAMODE_TM_convers(
  /* TM_conversions::CAST_Int_to_D_MAMODE::d_mamode_int */ kcg_int d_mamode_int)
{
  /* TM_conversions::CAST_Int_to_D_MAMODE::d_mamode */
  static D_MAMODE d_mamode;
  
  d_mamode = d_mamode_int;
  return d_mamode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_MAMODE_TM_convers.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

