/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_convert_engineering_locat.h"

/* TM_conversions::TOOLS_convert_engineering_location */
kcg_real TOOLS_convert_engineering_locat(
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_int */ kcg_int Loc_int)
{
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_real */
  static kcg_real Loc_real;
  
  Loc_real = (kcg_real) Loc_int * DIM_scale_eng_location_TM;
  return Loc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TOOLS_convert_engineering_locat.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

