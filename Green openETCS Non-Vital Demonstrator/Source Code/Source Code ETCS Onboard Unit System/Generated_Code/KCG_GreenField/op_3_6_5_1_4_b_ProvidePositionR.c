/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_b_ProvidePositionR.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_b_init_ProvidePosi(outC_op_3_6_5_1_4_b_ProvidePosi *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->rem_modeLevelStatus.currMode = M_MODE_Full_Supervision;
  outC->rem_modeLevelStatus.currLevel = M_LEVEL_Level_0;
  outC->rem_modeLevelStatus.levelTransitionBorderPassed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_b_reset_ProvidePos(outC_op_3_6_5_1_4_b_ProvidePosi *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_b */
void op_3_6_5_1_4_b_ProvidePositionR(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  outC_op_3_6_5_1_4_b_ProvidePosi *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b */
  static M_MODE tmp;
  
  /* last_init_ck_modeLevelStatus */ if (outC->init) {
    outC->init = kcg_false;
    tmp = cModeAndLevelStatus_ProvidePosi.currMode;
  }
  else {
    tmp = outC->rem_modeLevelStatus.currMode;
  }
  outC->trigger = (*modeLevelStatus).currMode != tmp;
  kcg_copy_ModeLevel2PositionRepo(&outC->rem_modeLevelStatus, modeLevelStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_b_ProvidePositionR.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

