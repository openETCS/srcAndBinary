/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeTIU_Info_input_from_TIU_AP.h"

/* input_from_TIU_API_Pkg::mergeTIU_Info */
void mergeTIU_Info_input_from_TIU_AP(
  /* input_from_TIU_API_Pkg::mergeTIU_Info::newInfo */ Message_Train_Interface_to_EVC_ *newInfo,
  /* input_from_TIU_API_Pkg::mergeTIU_Info::storedInfo */ Message_Train_Interface_to_EVC_ *storedInfo,
  /* input_from_TIU_API_Pkg::mergeTIU_Info::EVC_trainData */ trainData_T_TIU_Types_Pkg *EVC_trainData,
  /* input_from_TIU_API_Pkg::mergeTIU_Info::updatedInfo */ Message_Train_Interface_to_EVC_ *updatedInfo)
{
  /* 6 */ if ((*newInfo).train_status.valid) {
    kcg_copy_Mode_control_and_train(
      &(*updatedInfo).train_status,
      &(*newInfo).train_status);
  }
  else {
    kcg_copy_Mode_control_and_train(
      &(*updatedInfo).train_status,
      &(*storedInfo).train_status);
  }
  /* 1 */ if ((*newInfo).brake_status.valid) {
    kcg_copy_Brake_status_T_TIU_Typ(
      &(*updatedInfo).brake_status,
      &(*newInfo).brake_status);
  }
  else {
    kcg_copy_Brake_status_T_TIU_Typ(
      &(*updatedInfo).brake_status,
      &(*storedInfo).brake_status);
  }
  /* 2 */ if ((*newInfo).brake_pressure.valid) {
    kcg_copy_Brake_pressure_value_T(
      &(*updatedInfo).brake_pressure,
      &(*newInfo).brake_pressure);
  }
  else {
    kcg_copy_Brake_pressure_value_T(
      &(*updatedInfo).brake_pressure,
      &(*storedInfo).brake_pressure);
  }
  /* 5 */ if ((*newInfo).train_data_entry_type != no_entry_type_TIU_Types_Pkg) {
    (*updatedInfo).train_data_entry_type = (*newInfo).train_data_entry_type;
  }
  else {
    (*updatedInfo).train_data_entry_type = (*storedInfo).train_data_entry_type;
  }
  /* 1 */
  selectTrainData_input_from_TIU_(
    &(*newInfo).train_data_info,
    EVC_trainData,
    &(*updatedInfo).train_data_info);
  /* 4 */ if ((*newInfo).type_I_train_and_brake_inhibiti.valid) {
    kcg_copy_Type_I_train_and_brake(
      &(*updatedInfo).type_I_train_and_brake_inhibiti,
      &(*newInfo).type_I_train_and_brake_inhibiti);
  }
  else {
    kcg_copy_Type_I_train_and_brake(
      &(*updatedInfo).type_I_train_and_brake_inhibiti,
      &(*storedInfo).type_I_train_and_brake_inhibiti);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeTIU_Info_input_from_TIU_AP.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

