/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_TRAIN_TM_conversi.h"

/* TM_conversions::CAST_Int_to_V_TRAIN */
V_TRAIN CAST_Int_to_V_TRAIN_TM_conversi(
  /* TM_conversions::CAST_Int_to_V_TRAIN::v_train_int */ kcg_int v_train_int)
{
  /* TM_conversions::CAST_Int_to_V_TRAIN::v_train */
  static V_TRAIN v_train;
  
  v_train = v_train_int * 5;
  return v_train;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_TRAIN_TM_conversi.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

