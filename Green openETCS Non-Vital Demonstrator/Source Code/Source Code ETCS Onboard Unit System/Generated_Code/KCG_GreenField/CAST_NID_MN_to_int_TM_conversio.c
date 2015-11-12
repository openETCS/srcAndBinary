/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_MN_to_int_TM_conversio.h"

/* TM_conversions::CAST_NID_MN_to_int */
kcg_int CAST_NID_MN_to_int_TM_conversio(
  /* TM_conversions::CAST_NID_MN_to_int::nid_mn */ NID_MN nid_mn)
{
  /* TM_conversions::CAST_NID_MN_to_int::nid_mn_int */
  static kcg_int nid_mn_int;
  
  nid_mn_int = nid_mn;
  return nid_mn_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_MN_to_int_TM_conversio.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

