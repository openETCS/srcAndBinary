/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_ACKMAMODE_TM_conv.h"

/* TM_conversions::CAST_Int_to_L_ACKMAMODE */
L_ACKMAMODE CAST_Int_to_L_ACKMAMODE_TM_conv(
  /* TM_conversions::CAST_Int_to_L_ACKMAMODE::l_ackmamode_int */ kcg_int l_ackmamode_int)
{
  /* TM_conversions::CAST_Int_to_L_ACKMAMODE::l_ackmamode */
  static L_ACKMAMODE l_ackmamode;
  
  l_ackmamode = l_ackmamode_int;
  return l_ackmamode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_ACKMAMODE_TM_conv.c
** Generation date: 2015-12-07T14:50:22
*************************************************************$ */

