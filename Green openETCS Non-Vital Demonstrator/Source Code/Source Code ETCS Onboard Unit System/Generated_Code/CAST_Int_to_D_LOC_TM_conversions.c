/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_LOC */
D_LOC CAST_Int_to_D_LOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_LOC::d_loc_int */kcg_int d_loc_int)
{
  /* TM_conversions::CAST_Int_to_D_LOC::d_loc */
  static D_LOC d_loc;
  
  d_loc = d_loc_int;
  return d_loc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_LOC_TM_conversions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

