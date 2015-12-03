/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_STATIC_TM_convers.h"

/* TM_conversions::CAST_Int_to_V_STATIC */
V_STATIC CAST_Int_to_V_STATIC_TM_convers(
  /* TM_conversions::CAST_Int_to_V_STATIC::v_static_int */ kcg_int v_static_int)
{
  /* TM_conversions::CAST_Int_to_V_STATIC::v_static */
  static V_STATIC v_static;
  
  v_static = v_static_int * 5;
  return v_static;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_STATIC_TM_convers.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

