/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_OutputManagement.h"

#ifndef KCG_USER_DEFINED_INIT
void Output_To_DMI_init_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC)
{
  outC->rem_needsAckFromDriver = kcg_true;
  outC->init = kcg_true;
  outC->Data_To_DMI_Ack.valid = kcg_true;
  outC->Data_To_DMI_Ack.whichMode = M_MODE_Full_Supervision;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC = kcg_true;
  outC->Data_To_DMI_Ack.LevelNeedsAck = kcg_true;
  outC->announcedLevel.LevelTransition.is_set = kcg_true;
  outC->announcedLevel.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevel.LevelTransition.transition.position = 0;
  outC->announcedLevel.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevel.LevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevel.LevelTransition.transition.AckLength = 0;
  outC->announcedLevel.LevelTransition.LRBG = 0;
  outC->announcedLevel.LevelTransition.referenceLocation = 0;
  outC->announcedLevel.IsAvailableForUse = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_To_DMI_reset_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputManagement::Output_To_DMI */
void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::announcedLevelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* OutputManagement::Output_To_DMI::isAvailableForUse */ kcg_bool isAvailableForUse,
  outC_Output_To_DMI_OutputManagement *outC)
{
  /* OutputManagement::Output_To_DMI */
  static kcg_bool tmp1;
  /* OutputManagement::Output_To_DMI */
  static kcg_bool tmp;
  /* OutputManagement::Output_To_DMI::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel.LevelTransition,
    announcedLevelTransition);
  outC->announcedLevel.IsAvailableForUse = isAvailableForUse;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC =
    (*Data_To_DMI_From_Mode).SH_Refused_By_RBC;
  outC->Data_To_DMI_Ack.LevelNeedsAck = needsAckFromDriver;
  /* ck_Loc_Ack_LS_Req_To_Driver */ if ((*Data_To_DMI_From_Mode).Ack_LS) {
    tmp1 = kcg_true;
  }
  else {
    _7_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_OS;
    /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
      tmp1 = kcg_true;
    }
    else {
      _6_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_RV;
      /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
        tmp1 = kcg_true;
      }
      else {
        _5_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_SH;
        /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
          tmp1 = kcg_true;
        }
        else {
          _4_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_SN;
          /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
            tmp1 = kcg_true;
          }
          else {
            _3_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_SR;
            /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
              tmp1 = kcg_true;
            }
            else {
              _2_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_TR;
              /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                tmp1 = kcg_true;
              }
              else {
                else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_UN;
                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                  tmp1 = kcg_true;
                }
                else {
                  tmp1 = needsAckFromDriver;
                }
              }
            }
          }
        }
      }
    }
  }
  /* last_init_ck_needsAckFromDriver */ if (outC->init) {
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp = outC->rem_needsAckFromDriver;
  }
  outC->Data_To_DMI_Ack.valid = Level_Mode_Compatible & (tmp1 |
      (needsAckFromDriver != tmp) | (*Data_To_DMI_From_Mode).SH_Refused_By_RBC);
  /* ck_Loc_Ack_LS_Req_To_Driver */ if ((*Data_To_DMI_From_Mode).Ack_LS) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Limited_Supervision;
  }
  else /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_On_Sight;
  }
  else /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Reversing;
  }
  else /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Shunting;
  }
  else /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_National_System;
  }
  else /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Staff_Responsible;
  }
  else /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Trip;
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Unfitted;
  }
  else {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Stand_By;
  }
  outC->rem_needsAckFromDriver = needsAckFromDriver;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_DMI_OutputManagement.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

