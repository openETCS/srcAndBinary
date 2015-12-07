/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_MAR_TM_conversion.h"

/* TM_conversions::CAST_Int_to_T_MAR */
T_MAR CAST_Int_to_T_MAR_TM_conversion(
  /* TM_conversions::CAST_Int_to_T_MAR::t_mar_int */ kcg_int t_mar_int)
{
  /* TM_conversions::CAST_Int_to_T_MAR::t_mar */
  static T_MAR t_mar;
  
  t_mar = t_mar_int;
  return t_mar;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_MAR_TM_conversion.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

