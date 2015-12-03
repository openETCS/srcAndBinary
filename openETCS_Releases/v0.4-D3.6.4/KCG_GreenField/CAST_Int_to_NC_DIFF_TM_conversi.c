/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NC_DIFF_TM_conversi.h"

/* TM_conversions::CAST_Int_to_NC_DIFF */
NC_DIFF CAST_Int_to_NC_DIFF_TM_conversi(
  /* TM_conversions::CAST_Int_to_NC_DIFF::nc_diff_int */ kcg_int nc_diff_int)
{
  /* TM_conversions::CAST_Int_to_NC_DIFF::nc_diff */
  static NC_DIFF nc_diff;
  
  nc_diff = nc_diff_int;
  return nc_diff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NC_DIFF_TM_conversi.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

