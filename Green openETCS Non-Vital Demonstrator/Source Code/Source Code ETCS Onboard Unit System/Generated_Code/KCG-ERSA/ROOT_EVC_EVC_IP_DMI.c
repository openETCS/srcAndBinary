/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_EVC_EVC_IP_DMI.h"

#ifndef KCG_USER_DEFINED_INIT
void ROOT_EVC_init_EVC_IP_DMI(outC_ROOT_EVC_EVC_IP_DMI *outC)
{
  static kcg_int i;
  
  outC->resetOut = kcg_true;
  outC->EVC_ready = kcg_true;
  outC->init = kcg_true;
  for (i = 0; i < 999; i++) {
    outC->_L4[i] = 0;
  }
  outC->debugCurrentLevel = M_LEVEL_Level_0;
  outC->debugCurrentMode = M_MODE_Full_Supervision;
  outC->debugIinterventionSpeed = 0.0;
  outC->debugPermittedSpeed = 0.0;
  outC->debugTrainPositionDeltaMin = 0;
  outC->debugTrainPositionDeltaMax = 0;
  outC->debugTrainPositionNominal = 0;
  outC->API_toTIU.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.valid = kcg_true;
  outC->API_toTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.valid = kcg_true;
  outC->API_toTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.valid = kcg_true;
  outC->API_toTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.valid = kcg_true;
  outC->API_toTIU.info.change_traction_system.d_test_traction.now = 0;
  outC->API_toTIU.info.change_traction_system.d_test_traction.distance = 0;
  outC->API_toTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->API_toTIU.info.passenger_door_control_info.valid = kcg_true;
  outC->API_toTIU.info.passenger_door_control_info.door_control_info = 0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_management.networkID = 0;
  outC->API_toRBC.Message.valid = kcg_true;
  outC->API_toRBC.Message.nid_message = 0;
  outC->API_toRBC.Message.l_message = 0;
  outC->API_toRBC.Message.t_train = 0;
  outC->API_toRBC.Message.nid_engine = 0;
  outC->API_toRBC.Message.field1 = 0;
  outC->API_toRBC.Message.field2 = 0;
  outC->API_toRBC.Message.field3 = 0;
  for (i = 0; i < 50; i++) {
    outC->API_toRBC.OptionalPackets[i] = 0;
  }
  /* 1 */ EVC_init(&outC->_1_Context_1);
  /* 1 */ RemoteDMIBus_init_EnvSim(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ROOT_EVC_reset_EVC_IP_DMI(outC_ROOT_EVC_EVC_IP_DMI *outC)
{
  outC->init = kcg_true;
  /* 1 */ EVC_reset(&outC->_1_Context_1);
  /* 1 */ RemoteDMIBus_reset_EnvSim(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC_IP_DMI::ROOT_EVC */
void ROOT_EVC_EVC_IP_DMI(
  inC_ROOT_EVC_EVC_IP_DMI *inC,
  outC_ROOT_EVC_EVC_IP_DMI *outC)
{
  /* EVC_IP_DMI::ROOT_EVC */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg tmp;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &tmp,
      (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
        &cEmptyEVC2DMIBusMessage_EVC_IP_DMI);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&tmp, &outC->_L4);
  }
  /* 1 */ RemoteDMIBus_EnvSim(&tmp, &inC->API_fromTIU, &outC->Context_1);
  /* 1 */
  EVC(
    inC->EVC_reset,
    &inC->API_Odometry,
    inC->API_SystemTime,
    &inC->API_fromTrack,
    &outC->Context_1.dmiToEVC,
    &inC->API_fromTIU,
    &inC->API_mobileHWStatus,
    &inC->API_persistentData,
    &outC->_1_Context_1);
  outC->resetOut = outC->_1_Context_1.resetOut;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    &outC->_1_Context_1.API_toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->_1_Context_1.API_RTM_management);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->_L4,
    &outC->_1_Context_1.API_toDMI);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    &outC->_1_Context_1.API_toTIU);
  outC->EVC_ready = outC->_1_Context_1.EVC_ready;
  outC->debugTrainPositionNominal =
    outC->_1_Context_1.debugTrainPositionNominal;
  outC->debugTrainPositionDeltaMax =
    outC->_1_Context_1.debugTrainPositionDeltaMax;
  outC->debugTrainPositionDeltaMin =
    outC->_1_Context_1.debugTrainPositionDeltaMin;
  outC->debugPermittedSpeed = outC->_1_Context_1.debugPermittedSpeed;
  outC->debugIinterventionSpeed = outC->_1_Context_1.debugIinterventionSpeed;
  outC->debugCurrentMode = outC->_1_Context_1.debugCurrentMode;
  outC->debugCurrentLevel = outC->_1_Context_1.debugCurrentLevel;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ROOT_EVC_EVC_IP_DMI.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

