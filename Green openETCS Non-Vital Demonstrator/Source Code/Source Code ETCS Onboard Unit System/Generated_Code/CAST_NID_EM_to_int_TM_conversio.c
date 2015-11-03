/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_EM_to_int_TM_conversio.h"

/* TM_conversions::CAST_NID_EM_to_int */
kcg_int CAST_NID_EM_to_int_TM_conversio(
  /* TM_conversions::CAST_NID_EM_to_int::nid_em */ NID_EM nid_em)
{
  /* TM_conversions::CAST_NID_EM_to_int::nid_em_int */
  static kcg_int nid_em_int;
  
  nid_em_int = nid_em;
  return nid_em_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_EM_to_int_TM_conversio.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

