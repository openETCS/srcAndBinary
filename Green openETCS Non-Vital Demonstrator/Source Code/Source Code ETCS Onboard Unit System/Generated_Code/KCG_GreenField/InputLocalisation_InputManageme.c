/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_InputManageme.h"

/* InputManagement::InputLocalisation */
void InputLocalisation_InputManageme(
  /* InputManagement::InputLocalisation::Data_From_Localisation */ T_Data_From_Localisation_Level_ *Data_From_Localisation,
  /* InputManagement::InputLocalisation::train_standstill */ kcg_bool *train_standstill,
  /* InputManagement::InputLocalisation::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* InputManagement::InputLocalisation::Data_From_Localisation_To_Mode */ T_Data_From_Localisation_Level_ *Data_From_Localisation_To_Mode)
{
  (*Data_From_Localisation_To_Mode).BG_In_List_Expected_BG_In_SR =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SH;
  (*Data_From_Localisation_To_Mode).BG_In_List_Expected_BG_In_SH =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SR;
  kcg_copy_positionErrors_T_Train(
    &(*Data_From_Localisation_To_Mode).PositionErrors,
    &(*Data_From_Localisation).PositionErrors);
  (*Data_From_Localisation_To_Mode).Train_Speed =
    (*Data_From_Localisation).Train_Speed;
  *train_standstill = (*Data_From_Localisation).Train_Standstill;
  (*Data_From_Localisation_To_Mode).Train_Standstill = *train_standstill;
  kcg_copy_trainPosition_T_TrainP(
    trainPosition,
    &(*Data_From_Localisation).Train_Position);
  kcg_copy_trainPosition_T_TrainP(
    &(*Data_From_Localisation_To_Mode).Train_Position,
    trainPosition);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputLocalisation_InputManageme.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

