/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_InputManagement.h"

/* InputManagement::InputLocalisation */
void InputLocalisation_InputManagement(
  /* InputManagement::InputLocalisation::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* InputManagement::InputLocalisation::train_standstill */kcg_bool *train_standstill,
  /* InputManagement::InputLocalisation::currentDistance */kcg_int *currentDistance,
  /* InputManagement::InputLocalisation::Data_From_Localisation_To_Mode */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation_To_Mode)
{
  (*Data_From_Localisation_To_Mode).BG_In_List_Expected_BG_In_SR =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SH;
  (*Data_From_Localisation_To_Mode).BG_In_List_Expected_BG_In_SH =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SR;
  (*Data_From_Localisation_To_Mode).Linked_BG_In_Wrong_Direction =
    (*Data_From_Localisation).Linked_BG_In_Wrong_Direction;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &(*Data_From_Localisation_To_Mode).Train_Position,
    &(*Data_From_Localisation).Train_Position);
  (*Data_From_Localisation_To_Mode).Train_Speed =
    (*Data_From_Localisation).Train_Speed;
  *train_standstill = (*Data_From_Localisation).Train_Standstill;
  (*Data_From_Localisation_To_Mode).Train_Standstill = *train_standstill;
  *currentDistance =
    (*Data_From_Localisation).Train_Position.maxSafeFrontEndPostion;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputLocalisation_InputManagement.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

