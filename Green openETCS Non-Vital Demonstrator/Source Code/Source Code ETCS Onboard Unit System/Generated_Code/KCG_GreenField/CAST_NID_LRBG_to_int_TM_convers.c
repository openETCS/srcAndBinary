/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_LRBG_to_int_TM_convers.h"

/* TM_conversions::CAST_NID_LRBG_to_int */
kcg_int CAST_NID_LRBG_to_int_TM_convers(
  /* TM_conversions::CAST_NID_LRBG_to_int::nid_lrbg */ NID_LRBG nid_lrbg)
{
  /* TM_conversions::CAST_NID_LRBG_to_int::nid_lrbg_int */
  static kcg_int nid_lrbg_int;
  
  nid_lrbg_int = nid_lrbg;
  return nid_lrbg_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_LRBG_to_int_TM_convers.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

