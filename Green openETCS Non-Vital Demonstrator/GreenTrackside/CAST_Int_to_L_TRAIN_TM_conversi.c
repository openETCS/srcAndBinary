/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TRAIN_TM_conversi.h"

/* TM_conversions::CAST_Int_to_L_TRAIN */
L_TRAIN CAST_Int_to_L_TRAIN_TM_conversi(
  /* TM_conversions::CAST_Int_to_L_TRAIN::l_train_int */ kcg_int l_train_int)
{
  /* TM_conversions::CAST_Int_to_L_TRAIN::l_train */
  static L_TRAIN l_train;
  
  l_train = l_train_int;
  return l_train;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_TRAIN_TM_conversi.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

