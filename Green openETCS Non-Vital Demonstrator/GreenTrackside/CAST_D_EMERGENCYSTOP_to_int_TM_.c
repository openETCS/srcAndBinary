/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_EMERGENCYSTOP_to_int_TM_.h"

/* TM_conversions::CAST_D_EMERGENCYSTOP_to_int */
kcg_int CAST_D_EMERGENCYSTOP_to_int_TM_(
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop)
{
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::d_emergencystop_int */
  static kcg_int d_emergencystop_int;
  
  d_emergencystop_int = d_emergencystop;
  return d_emergencystop_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_D_EMERGENCYSTOP_to_int_TM_.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

