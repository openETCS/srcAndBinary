/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* TM_conversions::DECODE_NID_LRBG */
void DECODE_NID_LRBG_TM_conversions(
  /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */ NID_LRBG nid_lrbg,
  /* TM_conversions::DECODE_NID_LRBG::nid_c */ NID_C *nid_c,
  /* TM_conversions::DECODE_NID_LRBG::nid_bg */ NID_BG *nid_bg)
{
  *nid_bg = nid_lrbg;
  /* 1 */ if (nid_lrbg == 0) {
    *nid_c = 0;
  }
  else {
    *nid_c = 426;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DECODE_NID_LRBG_TM_conversions.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

