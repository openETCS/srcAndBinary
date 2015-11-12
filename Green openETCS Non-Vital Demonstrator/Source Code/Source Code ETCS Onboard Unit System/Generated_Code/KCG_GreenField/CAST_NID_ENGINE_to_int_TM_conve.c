/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_ENGINE_to_int_TM_conve.h"

/* TM_conversions::CAST_NID_ENGINE_to_int */
kcg_int CAST_NID_ENGINE_to_int_TM_conve(
  /* TM_conversions::CAST_NID_ENGINE_to_int::nid_ctraction */ NID_CTRACTION nid_ctraction)
{
  /* TM_conversions::CAST_NID_ENGINE_to_int::nid_ctraction_int */
  static kcg_int nid_ctraction_int;
  
  nid_ctraction_int = nid_ctraction;
  return nid_ctraction_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_ENGINE_to_int_TM_conve.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

