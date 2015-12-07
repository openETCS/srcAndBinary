/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SF_PriorityManagement.h"

/* PriorityManagement::From_SF */
T_Mode_Level_And_Mode_Types_Pkg From_SF_PriorityManagement(
  /* PriorityManagement::From_SF::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SF::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SF::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SF::FromSF_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSF_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromSF_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromSF_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else {
    FromSF_To_NewMode = previousMode_Loc;
  }
  return FromSF_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SF_PriorityManagement.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

