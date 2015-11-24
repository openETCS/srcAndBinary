/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_V_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_V_TRAIN_to_int */
kcg_int CAST_V_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_V_TRAIN_to_int::v_train */ V_TRAIN v_train)
{
  /* TM_conversions::CAST_V_TRAIN_to_int::v_train_int */ kcg_int v_train_int;
  
  v_train_int = v_train / 5;
  return v_train_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_V_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

