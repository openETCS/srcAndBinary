/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_V_TRAIN_to_int_TM_conversi.h"

/* TM_conversions::CAST_V_TRAIN_to_int */
kcg_int CAST_V_TRAIN_to_int_TM_conversi(
  /* TM_conversions::CAST_V_TRAIN_to_int::v_train */ V_TRAIN v_train)
{
  /* TM_conversions::CAST_V_TRAIN_to_int::v_train_int */
  static kcg_int v_train_int;
  
  v_train_int = v_train / 5;
  return v_train_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_V_TRAIN_to_int_TM_conversi.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

