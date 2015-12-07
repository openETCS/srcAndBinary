/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_ENDTIMERSTARTLOC_.h"

/* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC */
D_ENDTIMERSTARTLOC CAST_Int_to_D_ENDTIMERSTARTLOC_(
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::d_endtimerstartloc_int */ kcg_int d_endtimerstartloc_int)
{
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::d_endtimerstartloc */
  static D_ENDTIMERSTARTLOC d_endtimerstartloc;
  
  d_endtimerstartloc = d_endtimerstartloc_int;
  return d_endtimerstartloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_ENDTIMERSTARTLOC_.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

