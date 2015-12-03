/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_C_to_int_TM_conversion.h"

/* TM_conversions::CAST_NID_C_to_int */
kcg_int CAST_NID_C_to_int_TM_conversion(
  /* TM_conversions::CAST_NID_C_to_int::nid_c */ NID_C nid_c)
{
  /* TM_conversions::CAST_NID_C_to_int::nid_c_int */
  static kcg_int nid_c_int;
  
  nid_c_int = nid_c;
  return nid_c_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_C_to_int_TM_conversion.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

