/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Reversing_Calculations_Librairi.h"

/* Librairies::Reversing_Calculations */
void Reversing_Calculations_Librairi(
  /* Librairies::Reversing_Calculations::Reversing_Data */ T_Reversing_Data_Level_And_Mode *Reversing_Data,
  /* Librairies::Reversing_Calculations::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Librairies::Reversing_Calculations::Max_Safe_Front_In_Reverse_Area */ kcg_bool *Max_Safe_Front_In_Reverse_Area,
  /* Librairies::Reversing_Calculations::RV_Data_Available */ kcg_bool *RV_Data_Available)
{
  *RV_Data_Available = (*Reversing_Data).Available;
  /* 1 */ if (*RV_Data_Available & (*Train_Position).valid) {
    *Max_Safe_Front_In_Reverse_Area = /* 1 */
      Position_In_Area_Librairies(
        (*Train_Position).maxSafeFrontEndPostion,
        (*Reversing_Data).Dist_Start,
        (*Reversing_Data).Length);
  }
  else {
    *Max_Safe_Front_In_Reverse_Area = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Reversing_Calculations_Librairi.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

