/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_T_TRAIN_to_int_TM_conversi.h"

/* TM_conversions::CAST_T_TRAIN_to_int */
kcg_int CAST_T_TRAIN_to_int_TM_conversi(
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train */ T_TRAIN t_train)
{
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train_int */
  static kcg_int t_train_int;
  
  t_train_int = t_train;
  return t_train_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_T_TRAIN_to_int_TM_conversi.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

