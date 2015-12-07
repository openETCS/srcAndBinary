/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_NVCONTACT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_NVCONTACT */
T_NVCONTACT CAST_Int_to_T_NVCONTACT_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_NVCONTACT::t_nvcontact_int */ kcg_int t_nvcontact_int)
{
  /* TM_conversions::CAST_Int_to_T_NVCONTACT::t_nvcontact */
  static T_NVCONTACT t_nvcontact;
  
  t_nvcontact = t_nvcontact_int;
  return t_nvcontact;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_NVCONTACT_TM_conversions.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

