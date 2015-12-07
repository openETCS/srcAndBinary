/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_PT_PriorityManagement.h"

/* PriorityManagement::From_PT */
T_Mode_Level_And_Mode_Types_Pkg From_PT_PriorityManagement(
  /* PriorityManagement::From_PT::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_PT::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_PT::Condition6 */ kcg_bool Condition6,
  /* PriorityManagement::From_PT::Condition8 */ kcg_bool Condition8,
  /* PriorityManagement::From_PT::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_PT::Condition15 */ kcg_bool Condition15,
  /* PriorityManagement::From_PT::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_PT::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_PT::Condition31 */ kcg_bool Condition31,
  /* PriorityManagement::From_PT::Condition37 */ kcg_bool Condition37,
  /* PriorityManagement::From_PT::Condition50 */ kcg_bool Condition50,
  /* PriorityManagement::From_PT::Condition70 */ kcg_bool Condition70,
  /* PriorityManagement::From_PT::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_PT::IfBlock1::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* PriorityManagement::From_PT::FromPT_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromPT_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromPT_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromPT_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition13) {
    FromPT_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition28) {
    FromPT_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    _1_else_clock_IfBlock1 = Condition8 | Condition37;
    /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
      FromPT_To_NewMode = SR_Level_And_Mode_Types_Pkg;
    }
    else /* ck_anon_activ */ if (Condition15) {
      FromPT_To_NewMode = OS_Level_And_Mode_Types_Pkg;
    }
    else {
      else_clock_IfBlock1 = Condition5 | Condition6 | Condition50;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        FromPT_To_NewMode = SH_Level_And_Mode_Types_Pkg;
      }
      else /* ck_anon_activ */ if (Condition31) {
        FromPT_To_NewMode = FS_Level_And_Mode_Types_Pkg;
      }
      else /* ck_anon_activ */ if (Condition70) {
        FromPT_To_NewMode = LS_Level_And_Mode_Types_Pkg;
      }
      else {
        FromPT_To_NewMode = previousMode_Loc;
      }
    }
  }
  return FromPT_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_PT_PriorityManagement.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

