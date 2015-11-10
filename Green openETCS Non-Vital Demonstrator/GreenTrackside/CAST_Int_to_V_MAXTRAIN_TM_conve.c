/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_MAXTRAIN_TM_conve.h"

/* TM_conversions::CAST_Int_to_V_MAXTRAIN */
V_MAXTRAIN CAST_Int_to_V_MAXTRAIN_TM_conve(
  /* TM_conversions::CAST_Int_to_V_MAXTRAIN::v_maxtrain_int */ kcg_int v_maxtrain_int)
{
  /* TM_conversions::CAST_Int_to_V_MAXTRAIN::v_maxtrain */
  static V_MAXTRAIN v_maxtrain;
  
  v_maxtrain = v_maxtrain_int * 5;
  return v_maxtrain;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_MAXTRAIN_TM_conve.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

