/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_AXLE_TM_conversio.h"

/* TM_conversions::CAST_Int_to_N_AXLE */
N_AXLE CAST_Int_to_N_AXLE_TM_conversio(
  /* TM_conversions::CAST_Int_to_N_AXLE::n_axlle_in */ kcg_int n_axlle_in)
{
  /* TM_conversions::CAST_Int_to_N_AXLE::n_axle */
  static N_AXLE n_axle;
  
  n_axle = n_axlle_in;
  return n_axle;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_N_AXLE_TM_conversio.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

