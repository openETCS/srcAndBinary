/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_MAMODE_TM_convers.h"

/* TM_conversions::CAST_Int_to_L_MAMODE */
L_MAMODE CAST_Int_to_L_MAMODE_TM_convers(
  /* TM_conversions::CAST_Int_to_L_MAMODE::l_mamode_int */ kcg_int l_mamode_int)
{
  /* TM_conversions::CAST_Int_to_L_MAMODE::l_mamode_ */
  static L_MAMODE l_mamode_;
  
  l_mamode_ = l_mamode_int;
  return l_mamode_;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_MAMODE_TM_convers.c
** Generation date: 2015-12-03T13:39:53
*************************************************************$ */

