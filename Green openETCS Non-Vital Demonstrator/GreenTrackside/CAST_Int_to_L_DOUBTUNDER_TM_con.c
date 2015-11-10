/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_DOUBTUNDER_TM_con.h"

/* TM_conversions::CAST_Int_to_L_DOUBTUNDER */
L_DOUBTUNDER CAST_Int_to_L_DOUBTUNDER_TM_con(
  /* TM_conversions::CAST_Int_to_L_DOUBTUNDER::l_doubtunder_int */ kcg_int l_doubtunder_int)
{
  /* TM_conversions::CAST_Int_to_L_DOUBTUNDER::l_doubtunder */
  static L_DOUBTUNDER l_doubtunder;
  
  l_doubtunder = l_doubtunder_int;
  return l_doubtunder;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_DOUBTUNDER_TM_con.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

