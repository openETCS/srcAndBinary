/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTransitions.h"

/* compareTransitions */
void compareTransitions(
  /* compareTransitions::transition1 */T_LevelTransition_Level_And_Mode_Types_Pkg *transition1,
  /* compareTransitions::transition2 */T_LevelTransition_Level_And_Mode_Types_Pkg *transition2,
  /* compareTransitions::capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *capabilities,
  /* compareTransitions::out_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *out_transition)
{
  static kcg_bool tmp;
  /* compareTransitions::t1_ok */
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
** compareTransitions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

