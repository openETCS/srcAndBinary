/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_ITER_to_int_TM_conversio.h"

/* TM_conversions::CAST_N_ITER_to_int */
kcg_int CAST_N_ITER_to_int_TM_conversio(
  /* TM_conversions::CAST_N_ITER_to_int::n_iter */ N_ITER n_iter)
{
  /* TM_conversions::CAST_N_ITER_to_int::n_iter_int */
  static kcg_int n_iter_int;
  
  n_iter_int = n_iter;
  return n_iter_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_N_ITER_to_int_TM_conversio.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

