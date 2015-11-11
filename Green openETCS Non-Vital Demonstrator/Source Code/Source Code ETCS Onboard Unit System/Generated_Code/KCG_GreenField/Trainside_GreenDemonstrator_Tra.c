/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Trainside_GreenDemonstrator_Tra.h"

#ifndef KCG_USER_DEFINED_INIT
void Trainside_init_GreenDemonstrato(outC_Trainside_GreenDemonstrato *outC)
{
  static kcg_int i;
  
  outC->EVC_ready = kcg_true;
  outC->init = kcg_true;
  outC->rem_API_currentOdometrie.valid = kcg_true;
  outC->rem_API_currentOdometrie.timestamp = 0;
  outC->rem_API_currentOdometrie.odo.o_nominal = 0;
  outC->rem_API_currentOdometrie.odo.o_min = 0;
  outC->rem_API_currentOdometrie.odo.o_max = 0;
  outC->rem_API_currentOdometrie.speed.v_safeNominal = 0;
  outC->rem_API_currentOdometrie.speed.v_rawNominal = 0;
  outC->rem_API_currentOdometrie.speed.v_lower = 0;
  outC->rem_API_currentOdometrie.speed.v_upper = 0;
  outC->rem_API_currentOdometrie.acceleration = 0;
  outC->rem_API_currentOdometrie.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->rem_API_currentOdometrie.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->rem_EVC_RTM_Management.valid = kcg_true;
  outC->rem_EVC_RTM_Management.cmd = cmdr_not_relevant_API_RadioComm;
  outC->rem_EVC_RTM_Management.networkID = 0;
  outC->PHY_VelocityInKmH = 0.0;
  outC->EVC_MessageToTIU.valid = kcg_true;
  outC->EVC_MessageToTIU.info.isolation_status.valid = kcg_true;
  outC->EVC_MessageToTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_;
  outC->EVC_MessageToTIU.info.brake_command.valid = kcg_true;
  outC->EVC_MessageToTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_define;
  outC->EVC_MessageToTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_define;
  outC->EVC_MessageToTIU.info.brake_inhibition.valid = kcg_true;
  outC->EVC_MessageToTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_T;
  outC->EVC_MessageToTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_n;
  outC->EVC_MessageToTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_T;
  outC->EVC_MessageToTIU.info.type_I_train_commands.valid = kcg_true;
  outC->EVC_MessageToTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_;
  outC->EVC_MessageToTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_define;
  outC->EVC_MessageToTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Type;
  outC->EVC_MessageToTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_def;
  outC->EVC_MessageToTIU.info.change_traction_system.valid = kcg_true;
  outC->EVC_MessageToTIU.info.change_traction_system.d_test_traction.now = 0;
  outC->EVC_MessageToTIU.info.change_traction_system.d_test_traction.distance =
    0;
  outC->EVC_MessageToTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_tracti;
  outC->EVC_MessageToTIU.info.change_traction_system.m_voltage.NID_ctraction =
    0;
  outC->EVC_MessageToTIU.info.passenger_door_control_info.valid = kcg_true;
  outC->EVC_MessageToTIU.info.passenger_door_control_info.door_control_info = 0;
  outC->EVC_MessageToTIU.info.change_of_allowed_current_consu.valid = kcg_true;
  outC->EVC_MessageToTIU.info.change_of_allowed_current_consu.d_test_current.now =
    0;
  outC->EVC_MessageToTIU.info.change_of_allowed_current_consu.d_test_current.distance =
    0;
  outC->EVC_MessageToTIU.info.change_of_allowed_current_consu.m_current.no_restriction =
    kcg_true;
  outC->EVC_MessageToTIU.info.change_of_allowed_current_consu.m_current.restriction =
    0;
  outC->API_currentTimestamp = 0;
  outC->Debug.odometry.valid = kcg_true;
  outC->Debug.odometry.timestamp = 0;
  outC->Debug.odometry.odo.o_nominal = 0;
  outC->Debug.odometry.odo.o_min = 0;
  outC->Debug.odometry.odo.o_max = 0;
  outC->Debug.odometry.speed.v_safeNominal = 0;
  outC->Debug.odometry.speed.v_rawNominal = 0;
  outC->Debug.odometry.speed.v_lower = 0;
  outC->Debug.odometry.speed.v_upper = 0;
  outC->Debug.odometry.acceleration = 0;
  outC->Debug.odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->Debug.odometry.motionDirection = unknownDirection_Obu_BasicTypes;
  outC->Debug.permittedSpeed = 0.0;
  outC->Debug.interventionSpeed = 0.0;
  outC->Debug.mode = M_MODE_Full_Supervision;
  outC->Debug.level = M_LEVEL_Level_0;
  outC->API_toGUI.emergencyBrake = kcg_true;
  outC->API_toGUI.serviceBrake = kcg_true;
  outC->API_toGUI.tractionCutOff = kcg_true;
  outC->API_toGUI.currentPositionInCm = 0;
  outC->API_toGUI.currentPositionInM = 0.0;
  outC->API_toGUI.currentVelocityInKmH = 0.0;
  outC->API_toGUI.afbActive = kcg_true;
  outC->API_toGUI.trainPositionDeltaMax = 0.0;
  outC->API_toGUI.trainPositionNominal = 0.0;
  outC->API_toGUI.trainPositionDeltaMin = 0.0;
  outC->API_toGUI.timestamp = 0;
  for (i = 0; i < 999; i++) {
    outC->API_toDMI[i] = 0;
  }
  outC->TrainPosition = 0;
  outC->MessageOut.Message.valid = kcg_true;
  outC->MessageOut.Message.nid_message = 0;
  outC->MessageOut.Message.l_message = 0;
  outC->MessageOut.Message.t_train = 0;
  outC->MessageOut.Message.nid_engine = 0;
  outC->MessageOut.Message.field1 = 0;
  outC->MessageOut.Message.field2 = 0;
  outC->MessageOut.Message.field3 = 0;
  for (i = 0; i < 50; i++) {
    outC->MessageOut.OptionalPackets[i] = 0;
  }
  /* 1 */ EVC_init(&outC->_5_Context_1);
  /* 1 */ EVC_InputBuffer_init_Toolbox_Fu(&outC->_4_Context_1);
  /* 1 */ RTM_init_Toolbox_TrainModules(&outC->_3_Context_1);
  /* 1 */ PHYSICS_MovementSimulation_init(&outC->_2_Context_1);
  /* 1 */ AFB_init_Toolbox_Physics(&outC->_1_Context_1);
  /* 1 */ TIU_init_Toolbox_TrainModules(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Trainside_reset_GreenDemonstrat(outC_Trainside_GreenDemonstrato *outC)
{
  outC->init = kcg_true;
  /* 1 */ EVC_reset(&outC->_5_Context_1);
  /* 1 */ EVC_InputBuffer_reset_Toolbox_F(&outC->_4_Context_1);
  /* 1 */ RTM_reset_Toolbox_TrainModules(&outC->_3_Context_1);
  /* 1 */ PHYSICS_MovementSimulation_rese(&outC->_2_Context_1);
  /* 1 */ AFB_reset_Toolbox_Physics(&outC->_1_Context_1);
  /* 1 */ TIU_reset_Toolbox_TrainModules(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* GreenDemonstrator::Trainside::Trainside */
void Trainside_GreenDemonstrator_Tra(
  inC_Trainside_GreenDemonstrator *inC,
  outC_Trainside_GreenDemonstrato *outC)
{
  /* GreenDemonstrator::Trainside::Trainside */
  static TIU_Output_msg_API_TIU_Pkg tmp7;
  /* GreenDemonstrator::Trainside::Trainside */
  static M_cab_signal_status_T_TIU_Types tmp6;
  /* GreenDemonstrator::Trainside::Trainside */
  static M_directioncontroller_signal_st tmp5;
  /* GreenDemonstrator::Trainside::Trainside */
  static kcg_real tmp4;
  /* GreenDemonstrator::Trainside::Trainside */
  static RadioManagement_T_API_RadioComm tmp3;
  /* GreenDemonstrator::Trainside::Trainside */
  static API_TrackSideInput_T_API_Msg_Pk tmp2;
  /* GreenDemonstrator::Trainside::Trainside */
  static odometry_T_Obu_BasicTypes_Pkg tmp1;
  /* GreenDemonstrator::Trainside::Trainside */
  static TelegramHeader_T_BG_Types_Pkg tmp;
  /* GreenDemonstrator::Trainside::Trainside::_L106 */
  static T_internal_Type_Obu_BasicTypes_ _L106;
  
  /* 1 */ if (inC->API_fromGUI.openDesk) {
    tmp6 = desk_A_is_open_TIU_Types_Pkg;
  }
  else {
    tmp6 = both_desks_are_closed_TIU_Types;
  }
  switch (2) {
    case 1 :
      tmp5 = direction_controller_in_neutral;
      break;
    case 2 :
      tmp5 = direction_controller_in_forward;
      break;
    case 3 :
      tmp5 = direction_controller_in_backwar;
      break;
    
    default :
      tmp5 = direction_controller_in_neutral;
  }
  /* last_init_ck_API_currentOdometrie */ if (outC->init) {
    kcg_copy_TIU_Output_msg_API_TIU(
      &tmp7,
      (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU1);
    _L106 = 0;
    tmp4 = 0.0;
    kcg_copy_RadioManagement_T_API_(
      &tmp3,
      (RadioManagement_T_API_RadioComm *) &cInitRTMManagement);
    outC->init = kcg_false;
    kcg_copy_odometry_T_Obu_BasicTy(
      &tmp1,
      (odometry_T_Obu_BasicTypes_Pkg *) &cInitialOdometrieValue);
  }
  else {
    kcg_copy_TIU_Output_msg_API_TIU(&tmp7, &outC->EVC_MessageToTIU);
    _L106 = outC->API_currentTimestamp;
    tmp4 = outC->PHY_VelocityInKmH;
    kcg_copy_RadioManagement_T_API_(&tmp3, &outC->rem_EVC_RTM_Management);
    kcg_copy_odometry_T_Obu_BasicTy(&tmp1, &outC->rem_API_currentOdometrie);
  }
  /* 1 */
  TIU_Toolbox_TrainModules(
    &tmp7,
    tmp6,
    tmp5,
    (kcg_bool) (inC->API_fromGUI.traction > 0.0),
    190,
    &outC->Context_1);
  outC->API_toGUI.emergencyBrake =
    outC->Context_1.emergencyBrakeActivated_To_Envi;
  outC->API_toGUI.serviceBrake =
    outC->Context_1.serviceBrakeActivated_To_Enviro;
  outC->API_toGUI.tractionCutOff =
    outC->Context_1.tractionCutOff_To_Environment;
  /* 1 */
  AFB_Toolbox_Physics(
    inC->API_fromGUI.targetSpeed,
    inC->API_fromGUI.traction,
    inC->API_fromGUI.brake,
    tmp4,
    &outC->_1_Context_1);
  outC->API_toGUI.afbActive = outC->_1_Context_1.afbActive;
  /* 1 */
  PHYSICS_MovementSimulation_Tool(
    inC->API_fromGUI.reset,
    outC->_1_Context_1.calculatedAcceleration,
    outC->Context_1.tractionCutOff_To_Environment,
    outC->Context_1.serviceBrakeActivated_To_Enviro,
    outC->Context_1.emergencyBrakeActivated_To_Envi,
    inC->API_fromGUI.initialPosition,
    inC->API_fromGUI.initialVelocity,
    cDeltaSimulationTime_Toolbox,
    kcg_false,
    kcg_false,
    cMaximumAcceleration,
    &outC->_2_Context_1);
  kcg_copy_odometry_T_Obu_BasicTy(
    &outC->Debug.odometry,
    &outC->_2_Context_1.odometry);
  outC->API_toGUI.currentPositionInM = outC->_2_Context_1.position;
  outC->PHY_VelocityInKmH = outC->_2_Context_1.velocity;
  outC->API_toGUI.currentVelocityInKmH = outC->PHY_VelocityInKmH;
  outC->API_currentTimestamp = outC->_2_Context_1.timestamp;
  outC->API_toGUI.timestamp = outC->API_currentTimestamp;
  /* 1 */
  RTM_Toolbox_TrainModules(
    _L106,
    &inC->RadioPackets_in,
    &inC->RadioMessage_in,
    &tmp3,
    &outC->_3_Context_1);
  /* 1 */ CASTLIB_BaliseHeaders_TM_conver(&inC->BaliseMessage_in.Header, &tmp);
  /* 1 */
  BTM_Toolbox_TrainModules(
    _L106,
    &tmp1,
    &inC->BaliseMessage_in.Messages,
    &tmp,
    &tmp2);
  /* 1 */
  EVC_InputBuffer_Toolbox_Functio(
    &tmp2,
    &outC->_3_Context_1.TrackMessage,
    &outC->_4_Context_1);
  /* 1 */
  EVC(
    kcg_false,
    &outC->_2_Context_1.odometry,
    outC->API_currentTimestamp,
    &outC->_4_Context_1.TrackMessageToEVC,
    &inC->API_fromDMI,
    &outC->Context_1.output_To_EVC,
    &outC->_3_Context_1.mobileHWStatus,
    (ps_dataForStartOfMission_T_API_ *) &cDataStorage_ForInit1,
    &outC->_5_Context_1);
  outC->Debug.permittedSpeed = outC->_5_Context_1.debugPermittedSpeed;
  outC->Debug.interventionSpeed = outC->_5_Context_1.debugIinterventionSpeed;
  outC->Debug.mode = outC->_5_Context_1.debugCurrentMode;
  outC->Debug.level = outC->_5_Context_1.debugCurrentLevel;
  outC->API_toGUI.trainPositionDeltaMax = (kcg_real)
      outC->_5_Context_1.debugTrainPositionDeltaMax;
  outC->API_toGUI.trainPositionNominal = (kcg_real)
      outC->_5_Context_1.debugTrainPositionNominal;
  outC->API_toGUI.trainPositionDeltaMin = (kcg_real)
      outC->_5_Context_1.debugTrainPositionDeltaMin;
  kcg_copy_M_TrainTrack_Message_T(
    &outC->MessageOut,
    &outC->_5_Context_1.API_toRBC);
  kcg_copy_EVC_to_DMI_Message_int(
    &outC->API_toDMI,
    &outC->_5_Context_1.API_toDMI);
  kcg_copy_TIU_Output_msg_API_TIU(
    &outC->EVC_MessageToTIU,
    &outC->_5_Context_1.API_toTIU);
  outC->EVC_ready = outC->_5_Context_1.EVC_ready;
  outC->TrainPosition = (kcg_int) (100.0 * outC->_2_Context_1.position);
  outC->API_toGUI.currentPositionInCm = outC->TrainPosition;
  kcg_copy_odometry_T_Obu_BasicTy(
    &outC->rem_API_currentOdometrie,
    &outC->_2_Context_1.odometry);
  kcg_copy_RadioManagement_T_API_(
    &outC->rem_EVC_RTM_Management,
    &outC->_5_Context_1.API_RTM_management);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Trainside_GreenDemonstrator_Tra.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

