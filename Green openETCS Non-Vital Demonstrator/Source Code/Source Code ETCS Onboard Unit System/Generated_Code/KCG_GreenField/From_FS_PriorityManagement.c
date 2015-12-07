/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_FS_PriorityManagement.h"

/* PriorityManagement::From_FS */
T_Mode_Level_And_Mode_Types_Pkg From_FS_PriorityManagement(
  /* PriorityManagement::From_FS::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_FS::Condition5 */ kcg_bool Condition5,
  /* PriorityManagement::From_FS::Condition6 */ kcg_bool Condition6,
  /* PriorityManagement::From_FS::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_FS::Condition15 */ kcg_bool Condition15,
  /* PriorityManagement::From_FS::Condition21 */ kcg_bool Condition21,
  /* PriorityManagement::From_FS::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_FS::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_FS::Condition37 */ kcg_bool Condition37,
  /* PriorityManagement::From_FS::Condition40 */ kcg_bool Condition40,
  /* PriorityManagement::From_FS::Condition46 */ kcg_bool Condition46,
  /* PriorityManagement::From_FS::Condition50 */ kcg_bool Condition50,
  /* PriorityManagement::From_FS::Condition51 */ kcg_bool Condition51,
  /* PriorityManagement::From_FS::Condition56 */ kcg_bool Condition56,
  /* PriorityManagement::From_FS::Condition59 */ kcg_bool Condition59,
  /* PriorityManagement::From_FS::Condition70 */ kcg_bool Condition70,
  /* PriorityManagement::From_FS::Condition72 */ kcg_bool Condition72,
  /* PriorityManagement::From_FS::ConditionFS2TR */ kcg_bool ConditionFS2TR,
  /* PriorityManagement::From_FS::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_FS::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_FS::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* PriorityManagement::From_FS::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* PriorityManagement::From_FS::FromFS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromFS_To_NewMode;
  
  /* ck_Condition1 */ if (Condition1) {
    FromFS_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition29) {
    FromFS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition13) {
    FromFS_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (ConditionFS2TR) {
    FromFS_To_NewMode = TR_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition28) {
    FromFS_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else /* ck_anon_activ */ if (Condition46) {
    FromFS_To_NewMode = NL_Level_And_Mode_Types_Pkg;
  }
  else {
    _2_else_clock_IfBlock1 = Condition5 | Condition6 | Condition50 |
      Condition51;
    /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
      FromFS_To_NewMode = SH_Level_And_Mode_Types_Pkg;
    }
    else /* ck_anon_activ */ if (Condition56) {
      FromFS_To_NewMode = SN_Level_And_Mode_Types_Pkg;
    }
    else {
      _1_else_clock_IfBlock1 = Condition70 | Condition72;
      /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
        FromFS_To_NewMode = LS_Level_And_Mode_Types_Pkg;
      }
      else /* ck_anon_activ */ if (Condition37) {
        FromFS_To_NewMode = SR_Level_And_Mode_Types_Pkg;
      }
      else {
        else_clock_IfBlock1 = Condition15 | Condition40;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          FromFS_To_NewMode = OS_Level_And_Mode_Types_Pkg;
        }
        else /* ck_anon_activ */ if (Condition21) {
          FromFS_To_NewMode = UN_Level_And_Mode_Types_Pkg;
        }
        else /* ck_anon_activ */ if (Condition59) {
          FromFS_To_NewMode = RV_Level_And_Mode_Types_Pkg;
        }
        else {
          FromFS_To_NewMode = previousMode_Loc;
        }
      }
    }
  }
  return FromFS_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_FS_PriorityManagement.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

