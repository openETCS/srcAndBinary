/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NL_PriorityManagement.h"

/* PriorityManagement::From_NL */
T_Mode_Level_And_Mode_Types_Pkg From_NL_PriorityManagement(
  /* PriorityManagement::From_NL::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_NL::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_NL::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_NL::Condition47 */ kcg_bool Condition47,
  /* PriorityManagement::From_NL::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_NL::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromNL_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromNL_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromNL_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else {
    else_clock_IfBlock1 = Condition28 | Condition47;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      FromNL_To_NewMode = SB_Level_And_Mode_Types_Pkg;
    }
    else {
      FromNL_To_NewMode = previousMode_Loc;
    }
  }
  return FromNL_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_NL_PriorityManagement.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

