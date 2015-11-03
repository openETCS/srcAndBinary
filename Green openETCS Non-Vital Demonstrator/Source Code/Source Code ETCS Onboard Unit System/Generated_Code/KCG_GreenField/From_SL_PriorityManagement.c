/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SL_PriorityManagement.h"

/* PriorityManagement::From_SL */
T_Mode_Level_And_Mode_Types_Pkg From_SL_PriorityManagement(
  /* PriorityManagement::From_SL::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SL::Condition3 */ kcg_bool Condition3,
  /* PriorityManagement::From_SL::Condition2 */ kcg_bool Condition2,
  /* PriorityManagement::From_SL::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SL::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSL_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromSL_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromSL_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition2) {
    FromSL_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition3) {
    FromSL_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    FromSL_To_NewMode = previousMode_Loc;
  }
  return FromSL_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SL_PriorityManagement.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

