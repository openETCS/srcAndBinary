/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input.h"

/* Input */
void Input(
  /* Input::Data_From_DMI */ DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Input::Data_From_TIU */ Message_Train_Interface_to_EVC_ *Data_From_TIU,
  /* Input::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_An *Data_From_Track_Messages,
  /* Input::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_ *Data_From_Track_Packets,
  /* Input::Data_From_STM */ T_Data_From_STM_Level_And_Mode_ *Data_From_STM,
  /* Input::Data_From_Localisation */ T_Data_From_Localisation_Level_ *Data_From_Localisation,
  /* Input::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_L *_1_Data_From_Speed_and_Supervis,
  /* Input::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_ *Data_From_F2_Functions,
  /* Input::Cab_In */ cab_ID_T_TIU_Types_Pkg Cab_In,
  /* Input::driver_level_transition_In */ T_LevelTransition_Level_And_Mod *driver_level_transition_In,
  /* Input::ERTMS_capabilities_In */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities_In,
  /* Input::Data_From_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient *Data_From_Track_MASSPGradient,
  /* Input::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  /* Input::train_standstill */ kcg_bool *train_standstill,
  /* Input::driver_level_transition */ T_LevelTransition_Level_And_Mod *driver_level_transition,
  /* Input::levelAck */ kcg_bool *levelAck,
  /* Input::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* Input::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities,
  /* Input::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Leve *Data_From_Track_to_Level,
  /* Input::MemorizedLevel */ M_LEVEL *MemorizedLevel,
  /* Input::Cab */ cab_ID_T_TIU_Types_Pkg *Cab,
  /* Input::Data_From_DMI_To_Mode */ T_Data_From_DMI_Level_And_Mode_ *Data_From_DMI_To_Mode,
  /* Input::Data_From_F2_Functions_to_Mode */ T_Data_From_F2_functions_Level_ *Data_From_F2_Functions_to_Mode,
  /* Input::Data_From_Localisation_To_Mode */ T_Data_From_Localisation_Level_ *Data_From_Localisation_To_Mode,
  /* Input::Data_From_Speed_and_Supervision_To_Mode */ T_Data_From_Speed_Supervision_L *Data_From_Speed_and_Supervision,
  /* Input::Data_From_STM_to_Mode */ T_Data_From_STM_Level_And_Mode_ *Data_From_STM_to_Mode,
  /* Input::Data_From_TIU_To_Mode */ Message_Train_Interface_to_EVC_ *Data_From_TIU_To_Mode,
  /* Input::Data_From_Track_To_Mode */ T_Data_From_Track_To_Mode_Level *Data_From_Track_To_Mode)
{
  kcg_copy_Message_Train_Interfac(Data_From_TIU_To_Mode, Data_From_TIU);
  kcg_copy_T_Data_From_STM_Level_(Data_From_STM_to_Mode, Data_From_STM);
  kcg_copy_T_Data_From_F2_functio(
    Data_From_F2_Functions_to_Mode,
    Data_From_F2_Functions);
  *Cab = Cab_In;
  *MemorizedLevel = MemorizedLevelIn;
  kcg_copy_T_ERTMS_capabilities_L(ERTMS_capabilities, ERTMS_capabilities_In);
  /* 1 */
  InputDMI_InputManagement(
    Data_From_DMI,
    driver_level_transition_In,
    driver_level_transition,
    levelAck,
    Data_From_DMI_To_Mode);
  /* 1 */
  InputLocalisation_InputManageme(
    Data_From_Localisation,
    train_standstill,
    trainPosition,
    Data_From_Localisation_To_Mode);
  /* 1 */
  InputSpeedAndSupervision_InputM(
    _1_Data_From_Speed_and_Supervis,
    Data_From_Speed_and_Supervision);
  /* 1 */
  InputTrackManagement_InputManag(
    Data_From_Track_Packets,
    Data_From_Track_Messages,
    Data_From_Track_MASSPGradient,
    Data_From_Track_To_Mode,
    Data_From_Track_to_Level);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

