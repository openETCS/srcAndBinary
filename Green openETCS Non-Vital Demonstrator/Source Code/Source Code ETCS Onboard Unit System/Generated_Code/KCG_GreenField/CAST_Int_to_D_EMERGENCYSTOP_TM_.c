/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_EMERGENCYSTOP_TM_.h"

/* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP */
D_EMERGENCYSTOP CAST_Int_to_D_EMERGENCYSTOP_TM_(
  /* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP::d_emergencystop_int */ kcg_int d_emergencystop_int)
{
  /* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP::d_emergencystop */
  static D_EMERGENCYSTOP d_emergencystop;
  
  d_emergencystop = d_emergencystop_int;
  return d_emergencystop;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_EMERGENCYSTOP_TM_.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

