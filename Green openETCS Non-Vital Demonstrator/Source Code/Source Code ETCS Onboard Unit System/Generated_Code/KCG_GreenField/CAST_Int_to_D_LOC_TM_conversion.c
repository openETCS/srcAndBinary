/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LOC_TM_conversion.h"

/* TM_conversions::CAST_Int_to_D_LOC */
D_LOC CAST_Int_to_D_LOC_TM_conversion(
  /* TM_conversions::CAST_Int_to_D_LOC::d_loc_int */ kcg_int d_loc_int)
{
  /* TM_conversions::CAST_Int_to_D_LOC::d_loc */
  static D_LOC d_loc;
  
  d_loc = d_loc_int;
  return d_loc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_LOC_TM_conversion.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

