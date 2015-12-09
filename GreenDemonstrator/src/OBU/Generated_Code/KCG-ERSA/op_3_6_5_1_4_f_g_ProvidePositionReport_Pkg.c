/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_f_g_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  outC->init = kcg_true;
  outC->rem_modeLevelStatus.currMode = M_MODE_Full_Supervision;
  outC->rem_modeLevelStatus.currLevel = M_LEVEL_Level_0;
  outC->rem_modeLevelStatus.levelTransitionBorderPassed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_f_g_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g */
void op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g */ M_LEVEL tmp;
  
  /* last_init_ck_modeLevelStatus */ if (outC->init) {
    outC->init = kcg_false;
    tmp = cModeAndLevelStatus_ProvidePositionReport_Pkg.currLevel;
  }
  else {
    tmp = outC->rem_modeLevelStatus.currLevel;
  }
  outC->trigger = (tmp != (*modeLevelStatus).currLevel) |
    (*modeLevelStatus).levelTransitionBorderPassed;
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->rem_modeLevelStatus,
    modeLevelStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

