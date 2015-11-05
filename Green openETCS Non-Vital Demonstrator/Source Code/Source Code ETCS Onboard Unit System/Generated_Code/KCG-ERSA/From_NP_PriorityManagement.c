/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NP_PriorityManagement.h"

/* PriorityManagement::From_NP */
T_Mode_Level_And_Mode_Types_Pkg From_NP_PriorityManagement(
  /* PriorityManagement::From_NP::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_NP::Condition4 */ kcg_bool Condition4,
  /* PriorityManagement::From_NP::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_NP::FromNP_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromNP_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromNP_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition4) {
    FromNP_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    FromNP_To_NewMode = previousMode_Loc;
  }
  return FromNP_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_NP_PriorityManagement.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

