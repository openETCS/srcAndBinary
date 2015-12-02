/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToStaffResponsible_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToStaffResponsible_init_Conditions(
  outC_ToStaffResponsible_Conditions *outC)
{
  outC->Condition44 = kcg_true;
  outC->Condition45 = kcg_true;
  outC->Condition37 = kcg_true;
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToStaffResponsible_reset_Conditions(
  outC_ToStaffResponsible_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToStaffResponsible */
void ToStaffResponsible_Conditions(
  /* Conditions::ToStaffResponsible::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToStaffResponsible::Driver_Req_Override */ kcg_bool Driver_Req_Override,
  /* Conditions::ToStaffResponsible::Train_Speed_Under_Override_Limit */ kcg_bool Train_Speed_Under_Override_Limit,
  /* Conditions::ToStaffResponsible::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* Conditions::ToStaffResponsible::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  outC_ToStaffResponsible_Conditions *outC)
{
  /* Conditions::ToStaffResponsible::Current_Level */ M_LEVEL last_Current_Level;
  /* Conditions::ToStaffResponsible::Level_prev_L0_LNTC */ kcg_bool Level_prev_L0_LNTC;
  
  /* last_init_ck_Current_Level */ if (outC->init) {
    outC->init = kcg_false;
    last_Current_Level = M_LEVEL_Level_0;
  }
  else {
    last_Current_Level = outC->rem_Current_Level;
  }
  Level_prev_L0_LNTC = (last_Current_Level == M_LEVEL_Level_0) |
    (last_Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC);
  outC->Condition45 = ((Current_Level == M_LEVEL_Level_2) | (Current_Level ==
        M_LEVEL_Level_3)) & Level_prev_L0_LNTC & Override_Function_Active &
    !Emergency_Stop_Message_Received;
  outC->Condition37 = Driver_Req_Override & Train_Speed_Under_Override_Limit;
  outC->Condition44 = (Current_Level == M_LEVEL_Level_1) & Level_prev_L0_LNTC &
    Override_Function_Active;
  outC->rem_Current_Level = Current_Level;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToStaffResponsible_Conditions.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

