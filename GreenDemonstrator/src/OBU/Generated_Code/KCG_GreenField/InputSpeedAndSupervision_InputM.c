/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_InputM.h"

/* InputManagement::InputSpeedAndSupervision */
void InputSpeedAndSupervision_InputM(
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_L *_1_Data_From_Speed_and_Supervis,
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision_To_Mode */ T_Data_From_Speed_Supervision_L *Data_From_Speed_and_Supervision)
{
  (*Data_From_Speed_and_Supervision).Estim_front_End_overpass_SR_Dis =
    (*_1_Data_From_Speed_and_Supervis).Estim_front_End_overpass_SR_Dis;
  (*Data_From_Speed_and_Supervision).Estim_Front_End_Rear_SSP =
    (*_1_Data_From_Speed_and_Supervis).Estim_Front_End_Rear_SSP;
  (*Data_From_Speed_and_Supervision).Override_Function_Active =
    (*_1_Data_From_Speed_and_Supervis).Override_Function_Active;
  (*Data_From_Speed_and_Supervision).EOA_Antenna_Overpass =
    (*_1_Data_From_Speed_and_Supervis).EOA_Antenna_Overpass;
  (*Data_From_Speed_and_Supervision).EOA_Front_End =
    (*_1_Data_From_Speed_and_Supervis).EOA_Front_End;
  (*Data_From_Speed_and_Supervision).Train_Speed_Under_Overide_Limit =
    (*_1_Data_From_Speed_and_Supervis).Train_Speed_Under_Overide_Limit;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputSpeedAndSupervision_InputM.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

