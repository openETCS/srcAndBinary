/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutputToRBC_OutputToRBC.h"

#ifndef KCG_USER_DEFINED_INIT
void BuildOutputToRBC_init_OutputToR(outC_BuildOutputToRBC_OutputToR *outC)
{
  outC->Connection_to_RBC_Requested = kcg_true;
  outC->PositionReportNeeded = kcg_true;
  /* 1 */ ExitLevel2or3_init_OutputToRBC(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildOutputToRBC_reset_OutputTo(outC_BuildOutputToRBC_OutputToR *outC)
{
  /* 1 */ ExitLevel2or3_reset_OutputToRBC(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputToRBC::BuildOutputToRBC */
void BuildOutputToRBC_OutputToRBC(
  /* OutputToRBC::BuildOutputToRBC::selected_level_transition */ T_LevelTransition_Level_And_Mod *selected_level_transition,
  /* OutputToRBC::BuildOutputToRBC::last_level */ M_LEVEL last_level,
  /* OutputToRBC::BuildOutputToRBC::new_level */ M_LEVEL new_level,
  /* OutputToRBC::BuildOutputToRBC::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  outC_BuildOutputToRBC_OutputToR *outC)
{
  outC->Connection_to_RBC_Requested = /* 2 */
    RBCSessionRequests_OutputToRBC(last_level, selected_level_transition);
  /* 1 */
  ExitLevel2or3_OutputToRBC(
    new_level,
    last_level,
    selected_level_transition,
    trainPosition,
    &outC->Context_1);
  outC->PositionReportNeeded = /* 1 */
    EntryInLevel2or3_OutputToRBC(last_level, new_level) |
    outC->Context_1.PositionReportNeeded;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildOutputToRBC_OutputToRBC.c
** Generation date: 2015-11-11T16:04:21
*************************************************************$ */

