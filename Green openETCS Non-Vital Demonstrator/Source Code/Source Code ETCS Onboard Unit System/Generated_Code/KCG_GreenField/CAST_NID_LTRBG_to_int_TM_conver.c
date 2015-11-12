/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_LTRBG_to_int_TM_conver.h"

/* TM_conversions::CAST_NID_LTRBG_to_int */
kcg_int CAST_NID_LTRBG_to_int_TM_conver(
  /* TM_conversions::CAST_NID_LTRBG_to_int::nid_ltrbg */ NID_LTRBG nid_ltrbg)
{
  /* TM_conversions::CAST_NID_LTRBG_to_int::nid_ltrbg_int */
  static kcg_int nid_ltrbg_int;
  
  nid_ltrbg_int = nid_ltrbg;
  return nid_ltrbg_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_LTRBG_to_int_TM_conver.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

