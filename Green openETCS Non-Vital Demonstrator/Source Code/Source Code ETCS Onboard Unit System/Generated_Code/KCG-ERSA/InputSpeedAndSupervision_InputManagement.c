/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_InputManagement.h"

/* InputManagement::InputSpeedAndSupervision */
void InputSpeedAndSupervision_InputManagement(
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *_1_Data_From_Speed_and_Supervision,
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision_To_Mode */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision_To_Mode)
{
  (*Data_From_Speed_and_Supervision_To_Mode).Estim_front_End_overpass_SR_Dist =
    (*_1_Data_From_Speed_and_Supervision).Estim_front_End_overpass_SR_Dist;
  (*Data_From_Speed_and_Supervision_To_Mode).Estim_Front_End_Rear_SSP =
    (*_1_Data_From_Speed_and_Supervision).Estim_Front_End_Rear_SSP;
  (*Data_From_Speed_and_Supervision_To_Mode).Override_Function_Active =
    (*_1_Data_From_Speed_and_Supervision).Override_Function_Active;
  (*Data_From_Speed_and_Supervision_To_Mode).EOA_Antenna_Overpass =
    (*_1_Data_From_Speed_and_Supervision).EOA_Antenna_Overpass;
  (*Data_From_Speed_and_Supervision_To_Mode).EOA_Front_End =
    (*_1_Data_From_Speed_and_Supervision).EOA_Front_End;
  (*Data_From_Speed_and_Supervision_To_Mode).Train_Speed_Under_Overide_Limit =
    (*_1_Data_From_Speed_and_Supervision).Train_Speed_Under_Overide_Limit;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputSpeedAndSupervision_InputManagement.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */
