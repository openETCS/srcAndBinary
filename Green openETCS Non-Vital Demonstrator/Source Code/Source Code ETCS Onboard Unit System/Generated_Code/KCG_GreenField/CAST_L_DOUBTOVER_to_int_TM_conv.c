/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_DOUBTOVER_to_int_TM_conv.h"

/* TM_conversions::CAST_L_DOUBTOVER_to_int */
kcg_int CAST_L_DOUBTOVER_to_int_TM_conv(
  /* TM_conversions::CAST_L_DOUBTOVER_to_int::l_doubtiver */ L_DOUBTOVER l_doubtiver)
{
  /* TM_conversions::CAST_L_DOUBTOVER_to_int::l_doubtiver_int */
  static kcg_int l_doubtiver_int;
  
  l_doubtiver_int = l_doubtiver;
  return l_doubtiver_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_DOUBTOVER_to_int_TM_conv.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

