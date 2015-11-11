/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_DP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_DP */
D_DP CAST_Int_to_D_DP_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_DP::d_dp_int */ kcg_int d_dp_int)
{
  /* TM_conversions::CAST_Int_to_D_DP::d_dp */
  static D_DP d_dp;
  
  d_dp = d_dp_int;
  return d_dp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_DP_TM_conversions.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

