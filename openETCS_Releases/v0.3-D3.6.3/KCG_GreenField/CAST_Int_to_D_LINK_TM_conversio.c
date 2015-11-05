/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LINK_TM_conversio.h"

/* TM_conversions::CAST_Int_to_D_LINK */
D_LINK CAST_Int_to_D_LINK_TM_conversio(
  /* TM_conversions::CAST_Int_to_D_LINK::d_link_int */ kcg_int d_link_int)
{
  /* TM_conversions::CAST_Int_to_D_LINK::d_link */
  static D_LINK d_link;
  
  d_link = d_link_int;
  return d_link;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_LINK_TM_conversio.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

