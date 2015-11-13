/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LEVELTR_TM_conver.h"

/* TM_conversions::CAST_Int_to_D_LEVELTR */
D_LEVELTR CAST_Int_to_D_LEVELTR_TM_conver(
  /* TM_conversions::CAST_Int_to_D_LEVELTR::d_leveltr_int */ kcg_int d_leveltr_int)
{
  /* TM_conversions::CAST_Int_to_D_LEVELTR::d_leveltr */
  static D_LEVELTR d_leveltr;
  
  d_leveltr = d_leveltr_int;
  return d_leveltr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_LEVELTR_TM_conver.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

