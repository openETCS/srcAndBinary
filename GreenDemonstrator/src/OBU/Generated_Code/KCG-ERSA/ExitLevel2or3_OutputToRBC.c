/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ExitLevel2or3_OutputToRBC.h"

#ifndef KCG_USER_DEFINED_INIT
void ExitLevel2or3_init_OutputToRBC(outC_ExitLevel2or3_OutputToRBC *outC)
{
  outC->PositionReportNeeded = kcg_true;
  outC->init = kcg_true;
  outC->Loc_Position = 0;
  outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ExitLevel2or3_reset_OutputToRBC(outC_ExitLevel2or3_OutputToRBC *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputToRBC::ExitLevel2or3 */
void ExitLevel2or3_OutputToRBC(
  /* OutputToRBC::ExitLevel2or3::new_level */ M_LEVEL new_level,
  /* OutputToRBC::ExitLevel2or3::last_level */ M_LEVEL last_level,
  /* OutputToRBC::ExitLevel2or3::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::ExitLevel2or3::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ExitLevel2or3_OutputToRBC *outC)
{
  /* OutputToRBC::ExitLevel2or3::SM1::State2 */ kcg_bool br_1_guard_SM1_State2;
  /* OutputToRBC::ExitLevel2or3::Loc_Position */ M_POSITION last_Loc_Position;
  /* OutputToRBC::ExitLevel2or3::SM1 */ _30_SSM_ST_SM1 SM1_state_act;
  
  /* last_init_ck_Loc_Position */ if (outC->init) {
    outC->init = kcg_false;
    SM1_state_act = SSM_st_BeforeChange_SM1;
    last_Loc_Position = 0;
  }
  else {
    SM1_state_act = outC->SM1_state_nxt;
    last_Loc_Position = outC->Loc_Position;
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_BeforeChange_SM1 :
      outC->PositionReportNeeded = kcg_false;
      outC->Loc_Position = (*selected_level_transition).transition.position;
      if ((last_level != new_level) & ((last_level == M_LEVEL_Level_2) |
          (last_level == M_LEVEL_Level_3)) & ((new_level == M_LEVEL_Level_0) |
          (new_level == M_LEVEL_Level_1) | (new_level ==
            M_LEVEL_Level_NTC_specified_by_NID_NTC))) {
        outC->SM1_state_nxt = SSM_st_State2_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
      }
      break;
    case SSM_st_State2_SM1 :
      br_1_guard_SM1_State2 = last_Loc_Position <=
        (*trainPosition).minSafeRearEndPosition;
      outC->Loc_Position = last_Loc_Position;
      if (br_1_guard_SM1_State2) {
        outC->PositionReportNeeded = kcg_true;
        outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
      }
      else {
        outC->PositionReportNeeded = kcg_false;
        outC->SM1_state_nxt = SSM_st_State2_SM1;
      }
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ExitLevel2or3_OutputToRBC.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

