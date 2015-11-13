/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_TRAIN_to_int_TM_conversi.h"

/* TM_conversions::CAST_L_TRAIN_to_int */
kcg_int CAST_L_TRAIN_to_int_TM_conversi(
  /* TM_conversions::CAST_L_TRAIN_to_int::l_train */ L_TRAIN l_train)
{
  /* TM_conversions::CAST_L_TRAIN_to_int::l_train_int */
  static kcg_int l_train_int;
  
  l_train_int = l_train;
  return l_train_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_TRAIN_to_int_TM_conversi.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

