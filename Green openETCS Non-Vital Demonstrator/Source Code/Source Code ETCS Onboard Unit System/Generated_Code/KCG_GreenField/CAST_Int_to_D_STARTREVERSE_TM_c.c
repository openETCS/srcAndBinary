/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_STARTREVERSE_TM_c.h"

/* TM_conversions::CAST_Int_to_D_STARTREVERSE */
D_STARTREVERSE CAST_Int_to_D_STARTREVERSE_TM_c(
  /* TM_conversions::CAST_Int_to_D_STARTREVERSE::d_startreverse_int */ kcg_int d_startreverse_int)
{
  /* TM_conversions::CAST_Int_to_D_STARTREVERSE::d_startreverse */
  static D_STARTREVERSE d_startreverse;
  
  d_startreverse = d_startreverse_int;
  return d_startreverse;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_STARTREVERSE_TM_c.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

