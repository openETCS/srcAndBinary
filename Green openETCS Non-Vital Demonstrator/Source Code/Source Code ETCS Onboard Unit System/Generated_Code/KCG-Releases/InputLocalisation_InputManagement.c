/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_InputManagement.h"

/* InputManagement::InputLocalisation */
void InputLocalisation_InputManagement(
  /* InputManagement::InputLocalisation::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* InputManagement::InputLocalisation::train_standstill */ kcg_bool *train_standstill,
  /* InputManagement::InputLocalisation::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* InputManagement::InputLocalisation::Data_From_Localisation_To_Mode */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation_To_Mode)
{
  (*Data_From_Localisation_To_Mode).BG_In_List_Expected_BG_In_SR =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SH;
  (*Data_From_Localisation_To_Mode).BG_In_List_Expected_BG_In_SH =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SR;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &(*Data_From_Localisation_To_Mode).PositionErrors,
    &(*Data_From_Localisation).PositionErrors);
  (*Data_From_Localisation_To_Mode).Train_Speed =
    (*Data_From_Localisation).Train_Speed;
  *train_standstill = (*Data_From_Localisation).Train_Standstill;
  (*Data_From_Localisation_To_Mode).Train_Standstill = *train_standstill;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    trainPosition,
    &(*Data_From_Localisation).Train_Position);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &(*Data_From_Localisation_To_Mode).Train_Position,
    trainPosition);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputLocalisation_InputManagement.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

