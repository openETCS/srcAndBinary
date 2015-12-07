/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TSR_TM_conversion.h"

/* TM_conversions::CAST_Int_to_L_TSR */
L_TSR CAST_Int_to_L_TSR_TM_conversion(
  /* TM_conversions::CAST_Int_to_L_TSR::l_tsr_int */ kcg_int l_tsr_int)
{
  /* TM_conversions::CAST_Int_to_L_TSR::l_tsr */
  static L_TSR l_tsr;
  
  l_tsr = l_tsr_int;
  return l_tsr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_TSR_TM_conversion.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

