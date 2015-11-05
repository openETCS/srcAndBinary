/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTransitionEffective_Inform.h"

#ifndef KCG_USER_DEFINED_INIT
void LevelTransitionEffective_init_I(outC_LevelTransitionEffective_I *outC)
{
  outC->outLevelTransition = kcg_true;
  outC->init = kcg_true;
  outC->rem_inLevel = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelTransitionEffective_reset_(outC_LevelTransitionEffective_I *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::LevelTransitionEffective */
void LevelTransitionEffective_Inform(
  /* InformationFilter_Pkg::LevelTransitionEffective::inLevel */ M_LEVEL inLevel,
  outC_LevelTransitionEffective_I *outC)
{
  /* InformationFilter_Pkg::LevelTransitionEffective */
  static M_LEVEL tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->rem_inLevel;
  }
  outC->outLevelTransition = !(inLevel == tmp);
  outC->rem_inLevel = inLevel;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelTransitionEffective_Inform.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

