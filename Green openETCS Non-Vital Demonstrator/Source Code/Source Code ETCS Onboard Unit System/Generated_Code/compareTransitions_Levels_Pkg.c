/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTransitions_Levels_Pkg.h"

/* Levels_Pkg::compareTransitions */
void compareTransitions_Levels_Pkg(
  /* Levels_Pkg::compareTransitions::transition1 */T_LevelTransition_Level_And_Mode_Types_Pkg *transition1,
  /* Levels_Pkg::compareTransitions::transition2 */T_LevelTransition_Level_And_Mode_Types_Pkg *transition2,
  /* Levels_Pkg::compareTransitions::capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *capabilities,
  /* Levels_Pkg::compareTransitions::out_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *out_transition)
{
  static kcg_bool tmp;
  /* Levels_Pkg::compareTransitions::t1_ok */
  static kcg_bool t1_ok;
  
  switch ((*transition1).transition.level) {
    case M_LEVEL_Level_3 :
      tmp = (*capabilities).L3;
      break;
    case M_LEVEL_Level_2 :
      tmp = (*capabilities).L2;
      break;
    case M_LEVEL_Level_1 :
      tmp = kcg_true;
      break;
    case M_LEVEL_Level_0 :
      tmp = kcg_true;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      tmp = (*capabilities).NTC;
      break;
    
  }
  t1_ok = (*transition1).is_set & tmp;
  if (t1_ok) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      out_transition,
      transition1);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      out_transition,
      transition2);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** compareTransitions_Levels_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

