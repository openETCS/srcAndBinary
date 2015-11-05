/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_C_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_C_to_int */
kcg_int CAST_NID_C_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_C_to_int::nid_c */ NID_C nid_c)
{
  /* TM_conversions::CAST_NID_C_to_int::nid_c_int */
  static kcg_int nid_c_int;
  
  nid_c_int = nid_c;
  return nid_c_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_C_to_int_TM_conversions.c
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

