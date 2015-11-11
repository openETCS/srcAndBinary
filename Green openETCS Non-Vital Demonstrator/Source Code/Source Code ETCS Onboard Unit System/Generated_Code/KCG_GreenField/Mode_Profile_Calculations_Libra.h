/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _Mode_Profile_Calculations_Libr
#define _Mode_Profile_Calculations_Libr

#include "kcg_types.h"
#include "Position_In_Ack_Area_Librairies.h"
#include "Position_In_Area_Librairies.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Librairies::Mode_Profile_Calculations */
extern void Mode_Profile_Calculations_Libra(
  /* Librairies::Mode_Profile_Calculations::Selected_Mode */ T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Librairies::Mode_Profile_Calculations::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Librairies::Mode_Profile_Calculations::Profile_Mode */ T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Librairies::Mode_Profile_Calculations::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Librairies::Mode_Profile_Calculations::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Librairies::Mode_Profile_Calculations::Max_Safe_Front_In_Mode_Profile */ kcg_bool *Max_Safe_Front_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Supervision_Condition_In_Mode_Profile */ kcg_bool *Supervision_Condition_In_Mode_P,
  /* Librairies::Mode_Profile_Calculations::Awaited_Mode_Profile */ kcg_bool *Awaited_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Estimated_front_End_In_Ack_Area */ kcg_bool *Estimated_front_End_In_Ack_Area);

#endif /* _Mode_Profile_Calculations_Libr */
/* $**************** KCG Version 6.4 (build i21) ****************
** Mode_Profile_Calculations_Libra.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

