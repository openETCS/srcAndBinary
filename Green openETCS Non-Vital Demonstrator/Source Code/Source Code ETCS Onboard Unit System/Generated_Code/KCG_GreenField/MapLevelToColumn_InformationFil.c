/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MapLevelToColumn_InformationFil.h"

/* InformationFilter_Pkg::MapLevelToColumn */
kcg_int MapLevelToColumn_InformationFil(
  /* InformationFilter_Pkg::MapLevelToColumn::inLevel */ M_LEVEL inLevel)
{
  /* InformationFilter_Pkg::MapLevelToColumn::outColumn */
  static kcg_int outColumn;
  
  switch (inLevel) {
    case M_LEVEL_Level_0 :
      outColumn = 0;
      break;
    case M_LEVEL_Level_NTC_specified_by_ :
      outColumn = 1;
      break;
    case M_LEVEL_Level_1 :
      outColumn = 2;
      break;
    case M_LEVEL_Level_2 :
      outColumn = 3;
      break;
    case M_LEVEL_Level_3 :
      outColumn = 4;
      break;
    
  }
  return outColumn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MapLevelToColumn_InformationFil.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

