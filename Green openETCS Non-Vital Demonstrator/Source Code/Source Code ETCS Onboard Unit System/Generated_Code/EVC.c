/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC.h"

void EVC_reset(outC_EVC *outC)
{
  outC->init = kcg_true;
  outC->init13 = kcg_true;
  /* 1 */ checkGeneralMessage_reset_trainData_pkg(&outC->Context_1);
  /* 1 */
  ProvidePositionReport_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ DMI_Integrator_reset_manage_DMI_Output_Pkg(&outC->_2_Context_1);
  /* 1 */ Master_Procedure_reset_ManageProcedure_Pkg(&outC->_3_Context_1);
  /* 1 */ MoRC_Main_reset_MoRC_Pck(&outC->_4_Context_1);
  /* 1 */
  TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(&outC->_5_Context_1);
  /* 1 */
  SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
    &outC->_6_Context_1);
  /* 1 */ ManageLevelAndMode_reset(&outC->_7_Context_1);
  /* 1 */ trackPackets_toML_reset_EVC_Support_Pkg(&outC->_8_Context_1);
  /* 1 */ TrackAtlas_reset_TrackAtlas(&outC->_9_Context_1);
  /* 2 */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(&outC->Context_2);
  /* 1 */ manageTrainData_reset_trainData_pkg(&outC->_10_Context_1);
  /* 2 */ manageDMI_Input_reset_manage_DMI_Input_Pkg(&outC->_11_Context_2);
  /* 1 */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->_12_Context_1);
  /* 4 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&outC->Context_4);
}

/* EVC */
void EVC(inC_EVC *inC, outC_EVC *outC)
{
  static struct__81552 tmp;
  static struct__81538 tmp1;
  static struct__81532 tmp2;
  static struct__82575 tmp3;
  static struct__82529 tmp4;
  static struct__82594 tmp5;
  static struct__82610 tmp6;
  static struct__82586 tmp7;
  static struct__81396 tmp8;
  static struct__81660 tmp9;
  static trainData_T_TIU_Types_Pkg tmp22;
  static trainPosition_T_TrainPosition_Types_Pck tmp21;
  static sessionStatus_Type_Radio_Types_Pkg tmp20;
  static positionedBGs_T_TrainPosition_Types_Pck tmp19;
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg tmp18;
  static kcg_bool tmp17;
  static trainProperties_T_TrainPosition_Types_Pck tmp16;
  static L_internal_Type_Obu_BasicTypes_Pkg tmp15;
  static Brake_command_T_TIU_Types_Pkg tmp14;
  static kcg_bool tmp13;
  static kcg_bool tmp12;
  static safeRadioConnectionStatus_Type_MoRC_Pck tmp11;
  static DMI_LevelList_T_DMI_Types_Pkg tmp10;
  /* EVC::EVC_PersistentData */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg last_EVC_PersistentData;
  /* EVC::MoRC_MessageToRBC */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg MoRC_MessageToRBC;
  /* EVC::MoRC_cmdsToMobile */
  static mobileHWCmd_Type_MoRC_Pck MoRC_cmdsToMobile;
  /* EVC::DMI_trainRunningNumber */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg DMI_trainRunningNumber;
  /* EVC::td_radioMsg */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg td_radioMsg;
  /* EVC::EVC_t_Train */
  static T_TRAIN EVC_t_Train;
  /* EVC::TA_radioMsg */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg TA_radioMsg;
  /* EVC::_L523 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L523;
  /* EVC::_L805 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L805;
  /* EVC::_L938 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L938;
  /* EVC::_L993 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L993;
  /* EVC::_L1219 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1219;
  /* EVC::_L1230 */
  static trainDataStatus_T_trainData_Types_pkg _L1230;
  /* EVC::_L1321 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1321;
  /* EVC::_L1358 */
  static kcg_bool _L1358;
  
  outC->resetOut = inC->EVC_reset;
  if (outC->init13) {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
    _L938 = 0;
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &tmp22,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
    tmp17 = kcg_false;
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L1230,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp21,
      (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
    tmp20 = morc_st_inactive_Radio_Types_Pkg;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp19,
      (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp18,
      (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
        &cEmptyTestStatusList_DMI_Types_Pkg);
    tmp15 = cNo_STM_manage_DMI_Input_Pkg;
  }
  else {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      &outC->ML_ModeAndLevel);
    _L938 = outC->MSG_lastRadioMsgTimestamp;
    kcg_copy_trainData_T_TIU_Types_Pkg(&tmp22, &outC->td_trainData);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L1230, &outC->td_status);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp21,
      &outC->CALC_TrainPosition);
    tmp20 = outC->MoRC_sessionStatus;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp19, &outC->CALC_BGs);
    tmp17 = outC->ML_levelTransitionBorderPassed;
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      &outC->DMI_currentDMIStatus);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp18,
      &outC->EVC_TextMessageStatusList);
    tmp15 = outC->ML_currentNTC;
  }
  /* 4 */
  manageTIU_input_input_from_TIU_API_Pkg(
    &inC->API_fromTIU,
    &tmp22,
    &outC->Context_4);
  tmp9.pendingL1Transition = kcg_false;
  tmp9.pendingL12L3Transition = kcg_false;
  tmp9.pendingAckOfTrainDataFromRBC = _L1230.watingForRBCResponse;
  tmp9.emergencyStopAccepted = kcg_false;
  tmp9.lastAckTextMessageId = 0;
  tmp9.pendingNTCTransition = kcg_false;
  tmp9.SPPAndGradientOnBoard = kcg_false;
  tmp9.MACoverNotFullLength = kcg_false;
  /* 1 */
  Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
    kcg_true,
    &inC->API_fromTrack,
    &inC->API_Odometry,
    outC->resetOut,
    &tmp21,
    &_L993,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.t_nvcontact,
    cOwnVersion,
    _L938,
    tmp20,
    0,
    &tmp19,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.q_nvlocacc,
    outC->Context_4.outTIUStatus.deskOpen,
    _L1230.validatedbyRBC,
    &tmp9,
    tmp17,
    &outC->_12_Context_1);
  /* 2 */
  manageDMI_Input_manage_DMI_Input_Pkg(
    &inC->API_fromDMI,
    outC->resetOut,
    &tmp18,
    inC->API_SystemTime,
    tmp15,
    &outC->_11_Context_2);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    &outC->_11_Context_2.currentDMIStatus);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &DMI_trainRunningNumber,
    &outC->_11_Context_2.fromDMI_TrainRunningNumber);
  outC->ML_currentNTC = outC->_11_Context_2.updatedNTC;
  EVC_t_Train = (kcg_real) inC->API_SystemTime / 1000.0;
  if (outC->init13) {
    tmp17 = kcg_false;
    tmp12 = kcg_false;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_L1219,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &tmp16,
      (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
    tmp15 = cEmptySpeedForDMI.location_brake_curve_starting_point;
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L1219, &outC->rep_P0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      &outC->rep_P1);
    tmp12 = outC->MoRC_newSessionEstablished;
    tmp17 = outC->EVC_ready;
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &tmp16,
      &outC->rem_TIU_trainProperties);
    tmp15 = outC->DMI_sdmToDMI.location_brake_curve_starting_point;
  }
  tmp8.trainStandStill = inC->API_Odometry.valid &
    (inC->API_Odometry.motionState == noMotion_Obu_BasicTypes_Pkg);
  tmp8.driverRequestModify = kcg_false;
  tmp8.communicationSessionEstablished = tmp12;
  tmp8.safeRadioConnectionLost = kcg_false;
  tmp8.approachingRBCarea = kcg_false;
  tmp8.MoRCreadyFlag = tmp17;
  /* 1 */
  manageTrainData_trainData_pkg(
    outC->resetOut,
    &inC->API_fromTIU.info.train_data_info,
    &outC->_11_Context_2.fromDMI_TrainData,
    &outC->_11_Context_2.fromDMI_TrainDataAck,
    &outC->_12_Context_1.outputMessageForRadioAck,
    EVC_t_Train,
    &tmp8,
    4065801,
    &_L1219,
    &_L1321,
    &outC->_10_Context_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->td_trainData,
    &outC->_10_Context_1.actualTrainData);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &td_radioMsg,
    &outC->_10_Context_1.trainDataToRBC);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->td_status,
    &outC->_10_Context_1.updatedStatus);
  /* maintainTrainProperties */
  maintainTrainProperties_EVC_Support_Pkg(
    &tmp16,
    &DMI_trainRunningNumber,
    &outC->td_trainData,
    4065801,
    &outC->rem_TIU_trainProperties);
  /* 2 */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    &inC->API_Odometry,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG,
    &outC->_12_Context_1.outputMessage,
    &outC->rem_TIU_trainProperties,
    outC->resetOut,
    &outC->Context_2);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    &outC->Context_2.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    &outC->Context_2.BGs);
  /* 1 */
  TrackAtlas_TrackAtlas(
    &outC->_12_Context_1.outputMessage,
    &_L993,
    outC->td_trainData.valid,
    &outC->CALC_TrainPosition,
    outC->td_trainData.trainLength,
    inC->API_SystemTime,
    tmp15,
    &inC->API_Odometry,
    &outC->_11_Context_2.outForMA,
    &outC->rem_TIU_trainProperties,
    &_L1219,
    &_L1321,
    EVC_t_Train,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_PermanentData_Pkg,
    (P003_permanent_data_T_TM_baseline2 *)
      &cP003_PermanentData_EVC_PermanentData_Pkg,
    &outC->_9_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &TA_radioMsg,
    &outC->_9_Context_1.MA_request_out);
  /* 1 */
  trackPackets_toML_EVC_Support_Pkg(
    &outC->_9_Context_1.To_ModeAndLevel,
    &outC->_8_Context_1);
  if (outC->init13) {
    tmp17 = kcg_false;
  }
  else {
    tmp17 = outC->PROC_start_ack;
  }
  tmp7.NTC = kcg_true;
  tmp7.L0 = kcg_true;
  tmp7.L1 = kcg_true;
  tmp7.L2 = kcg_true;
  tmp7.L3 = kcg_false;
  tmp6.Estim_front_End_overpass_SR_Dist = kcg_false;
  tmp6.Estim_Front_End_Rear_SSP = kcg_false;
  tmp6.Override_Function_Active = kcg_false;
  tmp6.EOA_Antenna_Overpass = kcg_false;
  tmp6.EOA_Front_End = kcg_false;
  tmp6.Train_Speed_Under_Overide_Limit = kcg_false;
  tmp5.BG_In_List_Expected_BG_In_SR = kcg_false;
  tmp5.BG_In_List_Expected_BG_In_SH = kcg_false;
  tmp5.Linked_BG_In_Wrong_Direction =
    outC->Context_2.errors.BGpassedInUnexpectedDirection;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &tmp5.Train_Position,
    &outC->CALC_TrainPosition);
  tmp5.Train_Speed = inC->API_Odometry.speed.v_safeNominal;
  tmp5.Train_Standstill = inC->API_Odometry.motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 1 */
  ManageLevelAndMode(
    &outC->_11_Context_2.forModesAndLevel,
    &tmp5,
    &outC->Context_4.outTIUCurrentInfo,
    &outC->_9_Context_1.To_ModeAndLevel.train_messages,
    &outC->_8_Context_1.outPacketforML,
    &tmp6,
    /* 1 */ convertCab_EVC_Support_Pkg(outC->Context_4.outTIUStatus.ownCab),
    kcg_false,
    &outC->_11_Context_2.ML_levelTransition,
    outC->_12_Context_1.outCheckErrors.BG_versionIncompatible,
    kcg_false,
    kcg_false,
    outC->Context_2.errors.BG_LinkingConsistencyError,
    kcg_false,
    outC->Context_4.outTIUStatus.deskOpen,
    kcg_false,
    kcg_false,
    outC->td_status.validatedByDriver,
    &tmp7,
    tmp17,
    &outC->_12_Context_1.forLevelManagement,
    &outC->_7_Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    &outC->_7_Context_1.Valid_Mode_And_Level);
  outC->ML_levelTransitionBorderPassed =
    outC->_7_Context_1.transitionPositionPassed;
  outC->debugCurrentLevel = outC->ML_ModeAndLevel.level;
  /* 1 */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    (P3_NationalValues_T_Packet_Types_Pkg *)
      &cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg,
    &outC->CALC_TrainPosition,
    &inC->API_Odometry,
    &outC->rem_TIU_trainProperties,
    &outC->td_trainData,
    &outC->_9_Context_1.to_Supervision,
    (kcg_bool)
      (outC->_7_Context_1.Service_Brake_Command |
        outC->_12_Context_1.ApplyServiceBrake),
    outC->_7_Context_1.EB_Requested,
    &outC->_6_Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    &outC->_6_Context_1.sdmToDMI);
  if (outC->debugCurrentLevel == M_LEVEL_Level_NTC_specified_by_NID_NTC) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &tmp14,
      (Brake_command_T_TIU_Types_Pkg *) &cReleaseBrakeCommand);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &tmp14,
      &outC->_6_Context_1.brakeCmd);
  }
  /* 1 */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus,
    &tmp14,
    (Brake_inhibition_command_T_TIU_Types_Pkg *) &cEmptyBrakeInhibitionCommand,
    (Type_I_train_commands_T_TIU_Types_Pkg *) &cEmptyTrainCommand,
    (Change_traction_system_T_TIU_Types_Pkg *) &cEmptyChangeTractionSystem,
    (Passenger_door_control_info_T_TIU_Types_Pkg *) &cPassengerDoorControlInfo,
    (Change_of_allowed_current_consumption_T_TIU_Types_Pkg *)
      &cEmptyChangeOfAllowedCurrentConsumption,
    &outC->ML_ModeAndLevel,
    &outC->_5_Context_1);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    &outC->_5_Context_1.outTIU_to_API);
  if (outC->init13) {
    tmp17 = kcg_false;
    _L1358 = kcg_false;
    tmp13 = kcg_false;
    tmp12 = cNoRadioCmd.valid;
  }
  else {
    tmp13 = outC->PROC_powerOff_to_MoRC;
    _L1358 = outC->PROC_powerUp_to_MoRC;
    tmp17 = outC->PROC_statusstartofmissionongoing_to_MoRC;
    tmp12 = outC->PROC_radioCmdFromProcedures.valid;
  }
  tmp4.atPowerDown = tmp13;
  tmp4.atPowerUp = _L1358;
  tmp4.atStartOfMission = kcg_false;
  tmp4.startOfMissionProcedureIsGoingOn = tmp17;
  tmp4.startOfMissionProcedureCompleted = kcg_false;
  tmp4.trainIsRejectedByRBC_duringStartOfMission = kcg_false;
  tmp4.endOfMissionIsExecuted = kcg_false;
  tmp4.driverClosesTheDeskduringStartOfMission = kcg_false;
  tmp4.driverHasManuallyChangedLevel = kcg_false;
  tmp4.afterDriverEntryOfANewRadioNetworkID = kcg_false;
  tmp4.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_false;
  tmp4.isPartOfAnOngoingStartOfMissionProcedure = tmp12;
  tmp4.trainPassesALevelTransitionBorder = kcg_false;
  tmp4.trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_false;
  tmp4.trainExitedFromAnRBCArea = kcg_false;
  tmp4.modeChangeHasToBeReportedToRBC = kcg_false;
  tmp4.trainFrontInsideInAnAnnouncedRadioHole = kcg_false;
  tmp4.trainFrontReachesEndOfAnnouncedRadioHole = kcg_false;
  tmp4.OBU_hasToEstablishANewSession = kcg_false;
  tmp4.isInCommunicationSessionWithAnRIU = kcg_false;
  tmp4.errorConditionRequiringTerminationDetected = kcg_false;
  tmp4.systemVersionFromTracksideSupported = kcg_true;
  /* 1 */
  MoRC_Main_MoRC_Pck(
    inC->API_SystemTime,
    _L993.Mode,
    _L993.level,
    &tmp4,
    (radioNetWorkIDs_T_MoRC_Pck *) &cEmptyRadioNetworkIds,
    &inC->API_mobileHWStatus,
    &outC->_12_Context_1.outputMessage,
    EVC_t_Train,
    cMoRCConnectionStatusTimerInterval,
    outC->rem_TIU_trainProperties.nid_engine,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cEmptyMoRC_OnboardTelefonNumbers,
    &outC->_4_Context_1);
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &MoRC_cmdsToMobile,
    &outC->_4_Context_1.cmdsToMobile);
  outC->MoRC_newSessionEstablished =
    outC->_4_Context_1.sessionSuccessfullyEstablished;
  outC->MoRC_sessionStatus = outC->_4_Context_1.sessionStatus;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &MoRC_MessageToRBC,
    &outC->_4_Context_1.MessageToRBC);
  outC->EVC_ready = outC->_4_Context_1.ready;
  if (outC->init13) {
    tmp17 = kcg_false;
    outC->init13 = kcg_false;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
        &cNoPersistentData);
  }
  else {
    tmp17 = outC->_L477;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      &outC->EVC_PersistentData);
  }
  /* 1 */
  Master_Procedure_ManageProcedure_Pkg(
    &_L523,
    tmp17,
    inC->API_SystemTime,
    &outC->ML_ModeAndLevel,
    &outC->_4_Context_1.mobileSWStatus,
    outC->MoRC_sessionStatus,
    &outC->Context_4.outTIUStatus,
    outC->CALC_TrainPosition.LRBG.valid,
    &outC->_11_Context_2.outDriverRequest,
    (kcg_bool) (outC->ML_ModeAndLevel.valid & _L523.DMI_LevelSelectedByDirver),
    &outC->_3_Context_1);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->PROC_radioCmdFromProcedures,
    &outC->_3_Context_1.request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC);
  outC->PROC_powerUp_to_MoRC = outC->_3_Context_1.powerUp_to_MoRC;
  outC->PROC_statusstartofmissionongoing_to_MoRC =
    outC->_3_Context_1.statusstartofmissionongoing_to_MoRC;
  outC->PROC_powerOff_to_MoRC = outC->_3_Context_1.powerOff_to_MoRC;
  outC->_L477 =
    outC->_3_Context_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  outC->PROC_start_ack = outC->_3_Context_1.start_ack_to_TIU;
  tmp12 = outC->Context_4.outTIUStatus.valid &
    outC->Context_4.outTIUStatus.deskOpen;
  if (outC->MoRC_newSessionEstablished) {
    tmp11 = srcs_ConnectionUp_MoRC_Pck;
  }
  else {
    tmp11 = srcs_NoConnection_MoRC_Pck;
  }
  if (tmp12) {
    if (outC->init) {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->EVC_PersistentData,
        &inC->API_persistentData);
    }
    else {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->EVC_PersistentData,
        &last_EVC_PersistentData);
    }
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &tmp10,
      &outC->EVC_PersistentData.availableLevelsList);
    outC->init = kcg_false;
  }
  else {
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &tmp10,
      (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->EVC_PersistentData,
      &last_EVC_PersistentData);
  }
  tmp3.valid = kcg_true;
  tmp3.nid_c =
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.nid_cArray[0].nid_c;
  tmp3.nid_c_valid = kcg_true;
  /* 1 */
  DMI_Integrator_manage_DMI_Output_Pkg(
    &_L523,
    inC->API_SystemTime,
    &outC->Context_4.outTIUStatus,
    &inC->API_Odometry,
    &outC->CALC_TrainPosition,
    &outC->_6_Context_1.brakeCmd,
    &outC->DMI_sdmToDMI,
    &outC->ML_ModeAndLevel,
    &tmp3,
    (movementAuthorityForDMI_T_DMI_Types_Pkg *) &cEmptyDMIMA,
    tmp11,
    &outC->td_trainData,
    &outC->_3_Context_1.DMI_Entry_Request_to_DMI,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIEVCcodedTrainData,
    &outC->_9_Context_1.to_DMI,
    (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMIIdentifierRequest,
    cOwnVersion,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIDisplayControl,
    &tmp10,
    outC->_11_Context_2.outUpdateLevelsDMI,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMIRadioNet,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIDriverIdentifier,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainRunningNumber,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData,
    outC->_12_Context_1.BadBaliseMessageToDMI,
    &outC->_7_Context_1.Data_To_DMI,
    outC->ML_currentNTC,
    &outC->_11_Context_2.outStatusList,
    &outC->_2_Context_1);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &outC->API_toDMI,
    &outC->_2_Context_1.to_DMI);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->EVC_TextMessageStatusList,
    &outC->_2_Context_1.outStatusList);
  outC->debugCurrentMode = outC->ML_ModeAndLevel.Mode;
  tmp2.currMode = outC->debugCurrentMode;
  tmp2.currLevel = outC->debugCurrentLevel;
  tmp2.levelTransitionBorderPassed = outC->ML_levelTransitionBorderPassed;
  tmp1.nid_ntc = outC->ML_currentNTC;
  tmp1.q_length = Q_LENGTH_No_train_integrity_information_available;
  tmp.newSessionEstablished = outC->MoRC_newSessionEstablished;
  /* 1 */
  ProvidePositionReport_ProvidePositionReport_Pkg(
    &outC->CALC_BGs,
    &outC->CALC_TrainPosition,
    &inC->API_Odometry,
    &outC->rem_TIU_trainProperties,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cEmptyLocationBasedEvents,
    &outC->_12_Context_1.outputMessage,
    inC->API_SystemTime,
    &tmp,
    &tmp1,
    outC->CALC_TrainPosition.trainRunningDirectionToLRBG,
    outC->Context_2.errors.BG_LinkingConsistencyError,
    outC->_12_Context_1.outCheckErrors.linkedBGError,
    outC->_12_Context_1.outCheckErrors.unlinkedBGError,
    outC->_12_Context_1.outCheckErrors.radioMessageConsistencyError,
    outC->_12_Context_1.outCheckErrors.radioSequenceError,
    kcg_false,
    kcg_false,
    outC->Context_2.errors.twoConsecutiveLinkedBGs_missed,
    outC->Context_2.errors.doubleRepositioningError,
    &tmp2,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg,
    EVC_t_Train,
    &outC->_1_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L805,
    &outC->_1_Context_1.posRep);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->rep_P0,
    &outC->_1_Context_1.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->rep_P1,
    &outC->_1_Context_1.packet1);
  /* 1 */
  checkGeneralMessage_trainData_pkg(
    &outC->_12_Context_1.outputMessage,
    &outC->Context_1);
  _L1358 = outC->Context_1.genMessageReceived;
  /* 1 */
  collectRadioMessages_radioOutput_Pkg(
    &_L805,
    &MoRC_MessageToRBC,
    &td_radioMsg,
    &MoRC_cmdsToMobile,
    &TA_radioMsg,
    &outC->ML_ModeAndLevel,
    _L1358,
    &outC->API_toEuroradio);
  outC->debugIinterventionSpeed = (kcg_real)
      outC->DMI_sdmToDMI.interventionSpeed;
  if (outC->PROC_start_ack) {
    outC->debugPermittedSpeed = (kcg_real) outC->DMI_sdmToDMI.permittedSpeed;
  }
  else {
    outC->debugPermittedSpeed = (kcg_real) 0;
  }
  if (outC->_12_Context_1.outputMessageForRadioAck.valid &
    (outC->_12_Context_1.outputMessageForRadioAck.source ==
      msrc_Euroradio_Common_Types_Pkg)) {
    outC->MSG_lastRadioMsgTimestamp =
      outC->_12_Context_1.outputMessageForRadioAck.Radio_Common_Header.receivedSystemTime;
  }
  else {
    outC->MSG_lastRadioMsgTimestamp = _L938;
  }
  outC->debugTrainPositionDeltaMax =
    outC->CALC_TrainPosition.trainPosition.d_max;
  outC->debugTrainPositionDeltaMin =
    outC->CALC_TrainPosition.trainPosition.d_min;
  outC->debugTrainPositionNominal =
    outC->CALC_TrainPosition.trainPosition.nominal;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

