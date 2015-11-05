/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mode_Profile_Calculations_Libra.h"

/* Librairies::Mode_Profile_Calculations */
void Mode_Profile_Calculations_Libra(
  /* Librairies::Mode_Profile_Calculations::Selected_Mode */ T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Librairies::Mode_Profile_Calculations::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Librairies::Mode_Profile_Calculations::Profile_Mode */ T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Librairies::Mode_Profile_Calculations::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Librairies::Mode_Profile_Calculations::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Librairies::Mode_Profile_Calculations::Max_Safe_Front_In_Mode_Profile */ kcg_bool *Max_Safe_Front_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Supervision_Condition_In_Mode_Profile */ kcg_bool *Supervision_Condition_In_Mode_P,
  /* Librairies::Mode_Profile_Calculations::Awaited_Mode_Profile */ kcg_bool *Awaited_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Estimated_front_End_In_Ack_Area */ kcg_bool *Estimated_front_End_In_Ack_Area)
{
  /* Librairies::Mode_Profile_Calculations */
  static kcg_bool tmp;
  /* Librairies::Mode_Profile_Calculations::IfBlock2::else */
  static kcg_bool else_clock_IfBlock2;
  /* Librairies::Mode_Profile_Calculations::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* Librairies::Mode_Profile_Calculations::Condition_Ok */
  static kcg_bool Condition_Ok;
  /* Librairies::Mode_Profile_Calculations::_L35 */
  static kcg_bool _L35;
  
  _L35 = /* 1 */
    Position_In_Ack_Area_Librairies(
      (*Train_Position).estimatedFrontEndPosition,
      (*Mode_Profile_On_Board).Distance,
      (*Mode_Profile_On_Board).Length_Ack);
  IfBlock2_clock = ((*Mode_Profile_On_Board).Mode ==
      Profile_OS_Level_And_Mode_Types) & (Selected_Mode ==
      OS_Level_And_Mode_Types_Pkg);
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    tmp = kcg_true;
  }
  else {
    else_clock_IfBlock2 = ((*Mode_Profile_On_Board).Mode ==
        Profile_LS_Level_And_Mode_Types) & (Selected_Mode ==
        LS_Level_And_Mode_Types_Pkg);
    /* ck_anon_activ */ if (else_clock_IfBlock2) {
      tmp = kcg_true;
    }
    else {
      Condition_Ok = ((*Mode_Profile_On_Board).Mode ==
          Profile_SH_Level_And_Mode_Types) & (Selected_Mode ==
          SH_Level_And_Mode_Types_Pkg);
      /* ck_anon_activ */ if (Condition_Ok) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
    }
  }
  *Awaited_Mode_Profile = ((*Mode_Profile_On_Board).Mode == Profile_Mode) | tmp;
  Condition_Ok = *Awaited_Mode_Profile & (*Train_Position).valid;
  /* 3 */ if (Condition_Ok) {
    *Max_Safe_Front_In_Mode_Profile = /* 1 */
      Position_In_Area_Librairies(
        (*Train_Position).maxSafeFrontEndPostion,
        (*Mode_Profile_On_Board).Distance,
        (*Mode_Profile_On_Board).Length);
    *Supervision_Condition_In_Mode_P = ((*Mode_Profile_On_Board).Speed >=
        Train_Speed) & _L35;
    *Estimated_front_End_In_Ack_Area = _L35;
  }
  else {
    *Estimated_front_End_In_Ack_Area = kcg_false;
    *Supervision_Condition_In_Mode_P = kcg_false;
    *Max_Safe_Front_In_Mode_Profile = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Mode_Profile_Calculations_Libra.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

