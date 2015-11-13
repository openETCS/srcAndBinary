/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_CTRACTION_to_int_TM_co.h"

/* TM_conversions::CAST_NID_CTRACTION_to_int */
kcg_int CAST_NID_CTRACTION_to_int_TM_co(
  /* TM_conversions::CAST_NID_CTRACTION_to_int::nid_ctraction */ NID_CTRACTION nid_ctraction)
{
  /* TM_conversions::CAST_NID_CTRACTION_to_int::nid_ctraction_int */
  static kcg_int nid_ctraction_int;
  
  nid_ctraction_int = nid_ctraction;
  return nid_ctraction_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_CTRACTION_to_int_TM_co.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

