/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_REF_TM_conversion.h"

/* TM_conversions::CAST_Int_to_D_REF */
D_REF CAST_Int_to_D_REF_TM_conversion(
  /* TM_conversions::CAST_Int_to_D_REF::d_ref_int */ kcg_int d_ref_int)
{
  /* TM_conversions::CAST_Int_to_D_REF::d_ref */
  static D_REF d_ref;
  
  d_ref = d_ref_int;
  return d_ref;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_REF_TM_conversion.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

