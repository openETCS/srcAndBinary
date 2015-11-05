/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_V_MAXTRAIN_to_int_TM_conve.h"

/* TM_conversions::CAST_V_MAXTRAIN_to_int */
kcg_int CAST_V_MAXTRAIN_to_int_TM_conve(
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::v_maxtrain */ V_MAXTRAIN v_maxtrain)
{
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::v_maxtrain_int */
  static kcg_int v_maxtrain_int;
  
  v_maxtrain_int = v_maxtrain / 5;
  return v_maxtrain_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_V_MAXTRAIN_to_int_TM_conve.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

