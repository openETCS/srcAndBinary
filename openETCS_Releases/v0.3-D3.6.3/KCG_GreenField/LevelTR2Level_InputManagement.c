/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTR2Level_InputManagement.h"

/* InputManagement::LevelTR2Level */
M_LEVEL LevelTR2Level_InputManagement(
  /* InputManagement::LevelTR2Level::InLevelTR */ M_LEVELTR InLevelTR)
{
  /* InputManagement::LevelTR2Level::OutLevel */
  static M_LEVEL OutLevel;
  
  switch (InLevelTR) {
    case M_LEVELTR_Level_0 :
      OutLevel = M_LEVEL_Level_0;
      break;
    case M_LEVELTR_Level_NTC_specified_b :
      OutLevel = M_LEVEL_Level_NTC_specified_by_;
      break;
    case M_LEVELTR_Level_1 :
      OutLevel = M_LEVEL_Level_1;
      break;
    case M_LEVELTR_Level_2 :
      OutLevel = M_LEVEL_Level_2;
      break;
    case M_LEVELTR_Level_3 :
      OutLevel = M_LEVEL_Level_3;
      break;
    
  }
  return OutLevel;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelTR2Level_InputManagement.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

