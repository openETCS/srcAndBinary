/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TAFDISPLAY_TM_con.h"

/* TM_conversions::CAST_Int_to_L_TAFDISPLAY */
L_TAFDISPLAY CAST_Int_to_L_TAFDISPLAY_TM_con(
  /* TM_conversions::CAST_Int_to_L_TAFDISPLAY::l_tafdisplay_int */ kcg_int l_tafdisplay_int)
{
  /* TM_conversions::CAST_Int_to_L_TAFDISPLAY::l_tafdisplay */
  static L_TAFDISPLAY l_tafdisplay;
  
  l_tafdisplay = l_tafdisplay_int;
  return l_tafdisplay;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_TAFDISPLAY_TM_con.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

