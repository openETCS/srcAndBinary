/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToUnfitted_Conditions.h"

void ToUnfitted_reset_Conditions(outC_ToUnfitted_Conditions *outC)
{
  outC->init = kcg_true;
}

/* Conditions::ToUnfitted */
void ToUnfitted_Conditions(
  /* Conditions::ToUnfitted::Current_Level */M_LEVEL Current_Level,
  outC_ToUnfitted_Conditions *outC)
{
  static M_LEVEL tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->rem_Current_Level;
  }
  outC->Condition21 = (Current_Level == M_LEVEL_Level_0) & (Current_Level !=
      tmp);
  outC->rem_Current_Level = Current_Level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToUnfitted_Conditions.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
