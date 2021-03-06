/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_RV_PriorityManagement.h"

/* PriorityManagement::From_RV */
T_Mode_Level_And_Mode_Types_Pkg From_RV_PriorityManagement(
  /* PriorityManagement::From_RV::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_RV::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_RV::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_RV::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_RV::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromRV_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromRV_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromRV_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition13) {
    FromRV_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition28) {
    FromRV_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    FromRV_To_NewMode = previousMode_Loc;
  }
  return FromRV_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_RV_PriorityManagement.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

