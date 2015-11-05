/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTransitionEffective_InformationFilter_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void LevelTransitionEffective_init_InformationFilter_Pkg(
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC)
{
  outC->outLevelTransition = kcg_true;
  outC->init = kcg_true;
  outC->rem_inLevel = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelTransitionEffective_reset_InformationFilter_Pkg(
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::LevelTransitionEffective */
void LevelTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::LevelTransitionEffective::inLevel */ M_LEVEL inLevel,
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC)
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
** LevelTransitionEffective_InformationFilter_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

