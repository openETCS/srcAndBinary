/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_PS_PriorityManagement.h"

/* PriorityManagement::From_PS */
T_Mode_Level_And_Mode_Types_Pkg From_PS_PriorityManagement(
  /* PriorityManagement::From_PS::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_PS::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_PS::Condition14 */ kcg_bool Condition14,
  /* PriorityManagement::From_PS::Condition22 */ kcg_bool Condition22,
  /* PriorityManagement::From_PS::Condition23 */ kcg_bool Condition23,
  /* PriorityManagement::From_PS::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_PS::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromPS_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromPS_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromPS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition13) {
    FromPS_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition22) {
    FromPS_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition23) {
    FromPS_To_NewMode = SH_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition14) {
    FromPS_To_NewMode = SL_Level_And_Mode_Types_Pkg;
  }
  else {
    FromPS_To_NewMode = previousMode_Loc;
  }
  return FromPS_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_PS_PriorityManagement.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

