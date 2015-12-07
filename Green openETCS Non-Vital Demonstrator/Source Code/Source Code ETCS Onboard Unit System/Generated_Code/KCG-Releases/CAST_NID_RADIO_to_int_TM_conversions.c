/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_RADIO_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_RADIO_to_int */
kcg_int CAST_NID_RADIO_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_RADIO_to_int::nid_radio */ NID_RADIO nid_radio)
{
  /* TM_conversions::CAST_NID_RADIO_to_int::nid_radio_int */
  static kcg_int nid_radio_int;
  
  nid_radio_int = nid_radio;
  return nid_radio_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_RADIO_to_int_TM_conversions.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

