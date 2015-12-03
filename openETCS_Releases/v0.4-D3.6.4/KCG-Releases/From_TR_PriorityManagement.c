/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_TR_PriorityManagement.h"

/* PriorityManagement::From_TR */
T_Mode_Level_And_Mode_Types_Pkg From_TR_PriorityManagement(
  /* PriorityManagement::From_TR::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_TR::Condition7 */ kcg_bool Condition7,
  /* PriorityManagement::From_TR::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_TR::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_TR::Condition62 */ kcg_bool Condition62,
  /* PriorityManagement::From_TR::Condition63 */ kcg_bool Condition63,
  /* PriorityManagement::From_TR::Condition68 */ kcg_bool Condition68,
  /* PriorityManagement::From_TR::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_TR::FromTR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromTR_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromTR_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromTR_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition13) {
    FromTR_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition68) {
    FromTR_To_NewMode = SH_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition7) {
    FromTR_To_NewMode = PT_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition62) {
    FromTR_To_NewMode = UN_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition63) {
    FromTR_To_NewMode = SN_Level_And_Mode_Types_Pkg;
  }
  else {
    FromTR_To_NewMode = previousMode_Loc;
  }
  return FromTR_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_TR_PriorityManagement.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

