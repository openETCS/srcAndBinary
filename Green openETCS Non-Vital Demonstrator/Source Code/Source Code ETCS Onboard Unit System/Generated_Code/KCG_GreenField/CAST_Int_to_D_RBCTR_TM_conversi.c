/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_RBCTR_TM_conversi.h"

/* TM_conversions::CAST_Int_to_D_RBCTR */
D_RBCTR CAST_Int_to_D_RBCTR_TM_conversi(
  /* TM_conversions::CAST_Int_to_D_RBCTR::d_rbctr_int */ kcg_int d_rbctr_int)
{
  /* TM_conversions::CAST_Int_to_D_RBCTR::d_rbctr */
  static D_RBCTR d_rbctr;
  
  d_rbctr = d_rbctr_int;
  return d_rbctr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_RBCTR_TM_conversi.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

