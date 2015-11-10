/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_DOUBTOVER_TM_conv.h"

/* TM_conversions::CAST_Int_to_L_DOUBTOVER */
L_DOUBTOVER CAST_Int_to_L_DOUBTOVER_TM_conv(
  /* TM_conversions::CAST_Int_to_L_DOUBTOVER::l_doubtiver_int */ kcg_int l_doubtiver_int)
{
  /* TM_conversions::CAST_Int_to_L_DOUBTOVER::l_doubtover */
  static L_DOUBTOVER l_doubtover;
  
  l_doubtover = l_doubtiver_int;
  return l_doubtover;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_DOUBTOVER_TM_conv.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

