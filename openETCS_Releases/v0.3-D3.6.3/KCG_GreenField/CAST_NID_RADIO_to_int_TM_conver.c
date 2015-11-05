/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_RADIO_to_int_TM_conver.h"

/* TM_conversions::CAST_NID_RADIO_to_int */
kcg_int CAST_NID_RADIO_to_int_TM_conver(
  /* TM_conversions::CAST_NID_RADIO_to_int::nid_radio */ NID_RADIO nid_radio)
{
  /* TM_conversions::CAST_NID_RADIO_to_int::nid_radio_int */
  static kcg_int nid_radio_int;
  
  nid_radio_int = nid_radio;
  return nid_radio_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_RADIO_to_int_TM_conver.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

