/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_AXLE_to_int_TM_conversio.h"

/* TM_conversions::CAST_N_AXLE_to_int */
kcg_int CAST_N_AXLE_to_int_TM_conversio(
  /* TM_conversions::CAST_N_AXLE_to_int::n_axlle */ N_AXLE n_axlle)
{
  /* TM_conversions::CAST_N_AXLE_to_int::n_axle_int */
  static kcg_int n_axle_int;
  
  n_axle_int = n_axlle;
  return n_axle_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_N_AXLE_to_int_TM_conversio.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

