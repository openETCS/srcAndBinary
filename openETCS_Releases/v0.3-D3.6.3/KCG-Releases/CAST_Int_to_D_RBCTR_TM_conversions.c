/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_RBCTR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_RBCTR */
D_RBCTR CAST_Int_to_D_RBCTR_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_RBCTR::d_rbctr_int */ kcg_int d_rbctr_int)
{
  /* TM_conversions::CAST_Int_to_D_RBCTR::d_rbctr */
  static D_RBCTR d_rbctr;
  
  d_rbctr = d_rbctr_int;
  return d_rbctr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_RBCTR_TM_conversions.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

