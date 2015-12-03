/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_Interf.h"

/* Interfaces::InputSpeedAndSupervision */
void InputSpeedAndSupervision_Interf(
  /* Interfaces::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_L *Data_From_Speed_and_Supervision,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool *Estimated_Front_End_Overpass_SR,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool *Estimated_Front_End_Rear_Locati,
  /* Interfaces::InputSpeedAndSupervision::Override_Function_Active */ kcg_bool *Override_Function_Active,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Antenna */ kcg_bool *Train_Overpass_EOA_Antenna,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Front_End */ kcg_bool *Train_Overpass_EOA_Front_End,
  /* Interfaces::InputSpeedAndSupervision::Train_Speed_Under_Override_Limit */ kcg_bool *Train_Speed_Under_Override_Limi)
{
  *Train_Speed_Under_Override_Limi =
    (*Data_From_Speed_and_Supervision).Train_Speed_Under_Overide_Limit;
  *Train_Overpass_EOA_Front_End =
    (*Data_From_Speed_and_Supervision).EOA_Front_End;
  *Train_Overpass_EOA_Antenna =
    (*Data_From_Speed_and_Supervision).EOA_Antenna_Overpass;
  *Override_Function_Active =
    (*Data_From_Speed_and_Supervision).Override_Function_Active;
  *Estimated_Front_End_Rear_Locati =
    (*Data_From_Speed_and_Supervision).Estim_Front_End_Rear_SSP;
  *Estimated_Front_End_Overpass_SR =
    (*Data_From_Speed_and_Supervision).Estim_front_End_overpass_SR_Dis;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputSpeedAndSupervision_Interf.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

