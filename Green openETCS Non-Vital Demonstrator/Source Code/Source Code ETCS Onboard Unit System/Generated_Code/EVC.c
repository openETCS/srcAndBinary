/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC.h"

void EVC_reset(outC_EVC *outC)
{
  outC->init = kcg_true;
  outC->init12 = kcg_true;
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
  /* 2 */ TrackAtlasNextGen_reset_TrackAtlas(&outC->Context_2);
  /* 2 */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(&outC->_8_Context_2);
  /* 1 */ manageTrainData_reset_trainData_pkg(&outC->_9_Context_1);
  /* 1 */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->_10_Context_1);
  /* 4 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&outC->Context_4);
  /* 2 */ manageDMI_Input_reset_manage_DMI_Input_Pkg(&outC->_11_Context_2);
}

/* EVC */
void EVC(inC_EVC *inC, outC_EVC *outC)
{
  static struct__78224 tmp;
  static struct__78210 tmp1;
  static struct__78204 tmp2;
  static struct__79235 tmp3;
  static struct__79190 tmp4;
  static struct__79246 tmp5;
  static struct__79262 tmp6;
  static struct__77350 tmp7;
  static struct__77870 tmp8;
  static struct__78333 tmp9;
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg tmp23;
  static trainData_T_TIU_Types_Pkg tmp22;
  static trainPosition_T_TrainPosition_Types_Pck tmp21;
  static sessionStatus_Type_Radio_Types_Pkg tmp20;
  static positionedBGs_T_TrainPosition_Types_Pck tmp19;
  static kcg_bool tmp18;
  static trainProperties_T_TrainPosition_Types_Pck tmp17;
  static L_internal_Type_Obu_BasicTypes_Pkg tmp16;
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg tmp15;
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg tmp14;
  static Brake_command_T_TIU_Types_Pkg tmp13;
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
  /* EVC::EVC_cabIsOpen */
  static kcg_bool EVC_cabIsOpen;
  /* EVC::EVC_t_Train */
  static T_TRAIN EVC_t_Train;
  /* EVC::TA_forModeLevel */
  static DataForModeAndLevel_t_TrackAtlasTypes TA_forModeLevel;
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
  /* EVC::_L1022 */
  static kcg_bool _L1022;
  /* EVC::_L1219 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1219;
  /* EVC::_L1321 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1321;
  /* EVC::_L1358 */
  static kcg_bool _L1358;
  
  outC->resetOut = inC->EVC_reset;
  if (outC->init12) {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp23,
      (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
        &cEmptyTestStatusList_DMI_Types_Pkg);
    _L938 = cNo_STM_manage_DMI_Input_Pkg;
  }
  else {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      &outC->ML_ModeAndLevel);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      &outC->DMI_currentDMIStatus);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp23,
      &outC->EVC_TextMessageStatusList);
    _L938 = outC->ML_currentNTC;
  }
  /* 2 */
  manageDMI_Input_manage_DMI_Input_Pkg(
    &inC->API_fromDMI,
    outC->resetOut,
    &tmp23,
    inC->API_SystemTime,
    _L938,
    &outC->_11_Context_2);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    &outC->_11_Context_2.currentDMIStatus);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &DMI_trainRunningNumber,
    &outC->_11_Context_2.fromDMI_TrainRunningNumber);
  outC->ML_currentNTC = outC->_11_Context_2.updatedNTC;
  if (outC->init12) {
    _L938 = 0;
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &tmp22,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
    _L1022 = kcg_true;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp21,
      (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
    tmp20 = morc_st_inactive_Radio_Types_Pkg;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp19,
      (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
    tmp18 = cNoStates_trainData_Types_pkg.validatedbyRBC;
  }
  else {
    _L938 = outC->MSG_lastRadioMsgTimestamp;
    kcg_copy_trainData_T_TIU_Types_Pkg(&tmp22, &outC->td_trainData);
    _L1022 = outC->MSG_EmergencyBrakeActive;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp21,
      &outC->CALC_TrainPosition);
    tmp20 = outC->MoRC_sessionStatus;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp19, &outC->CALC_BGs);
    tmp18 = outC->td_status.validatedbyRBC;
  }
  /* 4 */
  manageTIU_input_input_from_TIU_API_Pkg(
    &inC->API_fromTIU,
    &tmp22,
    &outC->Context_4);
  tmp9.pendingL1Transition = kcg_false;
  tmp9.pendingL12L3Transition = kcg_false;
  tmp9.pendingAckOfTrainDataFromRBC = kcg_false;
  tmp9.emergencyStopAccepted = _L1022;
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
    tmp18,
    &tmp9,
    &outC->_10_Context_1);
  EVC_t_Train = (kcg_real) inC->API_SystemTime / 1000.0;
  if (outC->init12) {
    tmp18 = kcg_false;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_L1219,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &tmp17,
      (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
    tmp16 = cEmptySpeedForDMI.location_brake_curve_starting_point;
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L1219, &outC->rep_P0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      &outC->rep_P1);
    tmp18 = outC->MoRC_newSessionEstablished;
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &tmp17,
      &outC->rem_TIU_trainProperties);
    tmp16 = outC->DMI_sdmToDMI.location_brake_curve_starting_point;
  }
  tmp8.trainStandStill = inC->API_Odometry.valid &
    (inC->API_Odometry.motionState == noMotion_Obu_BasicTypes_Pkg);
  tmp8.driverRequestModify = kcg_false;
  tmp8.communicationSessionEstablished = tmp18;
  tmp8.safeRadioConnectionLost = kcg_false;
  tmp8.approachingRBCarea = kcg_false;
  /* 1 */
  manageTrainData_trainData_pkg(
    outC->resetOut,
    &inC->API_fromTIU.info.train_data_info,
    &outC->_11_Context_2.fromDMI_TrainData,
    &outC->_11_Context_2.fromDMI_TrainDataAck,
    &outC->_10_Context_1.outputMessage,
    EVC_t_Train,
    &tmp8,
    4065801,
    &_L1219,
    &_L1321,
    &outC->_9_Context_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->td_trainData,
    &outC->_9_Context_1.actualTrainData);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &td_radioMsg,
    &outC->_9_Context_1.trainDataToRBC);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->td_status,
    &outC->_9_Context_1.updatedStatus);
  /* maintainTrainProperties */
  maintainTrainProperties_EVC_Support_Pkg(
    &tmp17,
    &DMI_trainRunningNumber,
    &outC->td_trainData,
    4065801,
    &outC->rem_TIU_trainProperties);
  /* 2 */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    &inC->API_Odometry,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG,
    &outC->_10_Context_1.outputMessage,
    &outC->rem_TIU_trainProperties,
    outC->resetOut,
    &outC->_8_Context_2);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    &outC->_8_Context_2.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    &outC->_8_Context_2.BGs);
  /* 2 */
  TrackAtlasNextGen_TrackAtlas(
    &outC->_10_Context_1.outputMessage,
    &_L993,
    outC->td_trainData.valid,
    &outC->CALC_TrainPosition,
    outC->td_trainData.trainLength,
    inC->API_SystemTime,
    tmp16,
    &inC->API_Odometry,
    &outC->_11_Context_2.outForMA,
    &outC->rem_TIU_trainProperties,
    &_L1219,
    &_L1321,
    EVC_t_Train,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_PermanentData_Pkg,
    (P003_permanent_data_T_TM_baseline2 *)
      &cP003_PermanentData_EVC_PermanentData_Pkg,
    &outC->Context_2);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &TA_forModeLevel,
    &outC->Context_2.To_ModeAndLevel);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &TA_radioMsg,
    &outC->Context_2.MA_request_out);
  /* 1 */
  trackMsg_toML_EVC_Support_Pkg(
    &outC->_10_Context_1.outputMessage,
    &outC->_10_Context_1.outCheckErrors,
    &tmp15);
  /* 1 */
  trackPackets_toML_EVC_Support_Pkg(
    &outC->_10_Context_1.outputMessage,
    &TA_forModeLevel,
    &tmp14);
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
    outC->_8_Context_2.errors.BGpassedInUnexpectedDirection;
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
    &tmp15,
    &tmp14,
    &tmp6,
    /* 1 */ convertCab_EVC_Support_Pkg(outC->Context_4.outTIUStatus.ownCab),
    kcg_false,
    &outC->_11_Context_2.ML_levelTransition,
    kcg_false,
    kcg_false,
    kcg_false,
    outC->_8_Context_2.errors.BG_LinkingConsistencyError,
    kcg_false,
    outC->Context_4.outTIUStatus.deskOpen,
    kcg_false,
    kcg_false,
    outC->td_status.validatedByDriver,
    &tmp7,
    &outC->_7_Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    &outC->_7_Context_1.Valid_Mode_And_Level);
  outC->debugCurrentLevel = outC->ML_ModeAndLevel.level;
  /* 1 */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    (P3_NationalValues_T_Packet_Types_Pkg *)
      &cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg,
    &outC->CALC_TrainPosition,
    &inC->API_Odometry,
    &outC->rem_TIU_trainProperties,
    &outC->td_trainData,
    &outC->Context_2.to_Supervision,
    (kcg_bool)
      (outC->_7_Context_1.Service_Brake_Command |
        outC->_10_Context_1.ApplyServiceBrake),
    outC->_7_Context_1.EB_Requested,
    &outC->_6_Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    &outC->_6_Context_1.sdmToDMI);
  if (outC->debugCurrentLevel == M_LEVEL_Level_NTC_specified_by_NID_NTC) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &tmp13,
      (Brake_command_T_TIU_Types_Pkg *) &cReleaseBrakeCommand);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &tmp13,
      &outC->_6_Context_1.brakeCmd);
  }
  /* 1 */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus,
    &tmp13,
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
  if (outC->init12) {
    EVC_cabIsOpen = kcg_false;
    _L1358 = kcg_false;
    tmp12 = kcg_false;
    tmp18 = cNoRadioCmd.valid;
  }
  else {
    tmp12 = outC->PROC_powerOff_to_MoRC;
    _L1358 = outC->PROC_powerUp_to_MoRC;
    EVC_cabIsOpen = outC->PROC_statusstartofmissionongoing_to_MoRC;
    tmp18 = outC->PROC_radioCmdFromProcedures.valid;
  }
  tmp4.atPowerDown = tmp12;
  tmp4.atPowerUp = _L1358;
  tmp4.atStartOfMission = kcg_false;
  tmp4.startOfMissionProcedureIsGoingOn = EVC_cabIsOpen;
  tmp4.startOfMissionProcedureCompleted = kcg_false;
  tmp4.trainIsRejectedByRBC_duringStartOfMission = kcg_false;
  tmp4.endOfMissionIsExecuted = kcg_false;
  tmp4.driverClosesTheDeskduringStartOfMission = kcg_false;
  tmp4.driverHasManuallyChangedLevel = kcg_false;
  tmp4.afterDriverEntryOfANewRadioNetworkID = kcg_false;
  tmp4.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_false;
  tmp4.isPartOfAnOngoingStartOfMissionProcedure = tmp18;
  tmp4.trainPassesALevelTransitionBorder = kcg_false;
  tmp4.trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_false;
  tmp4.trainExitedFromAnRBCArea = kcg_false;
  tmp4.modeChangeHasToBeReportedToRBC = kcg_false;
  tmp4.trainFrontInsideInAnAnnouncedRadioHole = kcg_false;
  tmp4.trainFrontReachesEndOfAnnouncedRadioHole = kcg_false;
  tmp4.OBU_hasToEstablishANewSession = kcg_false;
  tmp4.isInCommunicationSessionWithAnRIU = kcg_false;
  tmp4.errorConditionRequiringTerminationDetected = kcg_false;
  /* 1 */
  MoRC_Main_MoRC_Pck(
    inC->API_SystemTime,
    _L993.Mode,
    _L993.level,
    &tmp4,
    (radioNetWorkIDs_T_MoRC_Pck *) &cEmptyRadioNetworkIds,
    &inC->API_mobileHWStatus,
    &outC->_10_Context_1.outRadioManagement,
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
  if (outC->init12) {
    tmp18 = kcg_false;
    outC->init12 = kcg_false;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
        &cNoPersistentData);
  }
  else {
    tmp18 = outC->_L477;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      &outC->EVC_PersistentData);
  }
  /* 1 */
  Master_Procedure_ManageProcedure_Pkg(
    &_L523,
    tmp18,
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
  EVC_cabIsOpen = outC->Context_4.outTIUStatus.valid &
    outC->Context_4.outTIUStatus.deskOpen;
  if (outC->_4_Context_1.safeRadioConnectionStatus_toDriver.valid) {
    tmp11 = outC->_4_Context_1.safeRadioConnectionStatus_toDriver.status;
  }
  else {
    tmp11 = cEmptySafeRadioConnectionStatus;
  }
  if (EVC_cabIsOpen) {
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
    &outC->Context_2.to_DMI,
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
    outC->_10_Context_1.BadBaliseMessageToDMI,
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
  tmp2.levelTransitionBorderPassed = kcg_false;
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
    &outC->_10_Context_1.outputMessage,
    inC->API_SystemTime,
    &tmp,
    &tmp1,
    outC->CALC_TrainPosition.trainRunningDirectionToLRBG,
    outC->_8_Context_2.errors.BG_LinkingConsistencyError,
    outC->_10_Context_1.outCheckErrors.linkedBGError,
    outC->_10_Context_1.outCheckErrors.unlinkedBGError,
    outC->_10_Context_1.outCheckErrors.radioMessageConsistencyError,
    outC->_10_Context_1.outCheckErrors.radioSequenceError,
    kcg_false,
    kcg_false,
    outC->_8_Context_2.errors.twoConsecutiveLinkedBGs_missed,
    outC->_8_Context_2.errors.doubleRepositioningError,
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
    &outC->_10_Context_1.outputMessage,
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
  if (outC->_3_Context_1.start_ack_to_TIU) {
    outC->debugPermittedSpeed = (kcg_real) outC->DMI_sdmToDMI.permittedSpeed;
  }
  else {
    outC->debugPermittedSpeed = (kcg_real) 0;
  }
  if (outC->_10_Context_1.outputMessage.valid &
    (outC->_10_Context_1.outputMessage.source ==
      msrc_Euroradio_Common_Types_Pkg)) {
    outC->MSG_lastRadioMsgTimestamp =
      outC->_10_Context_1.outputMessage.Radio_Common_Header.receivedSystemTime;
  }
  else {
    outC->MSG_lastRadioMsgTimestamp = _L938;
  }
  if ((release_brake_TIU_Types_Pkg ==
      outC->_6_Context_1.brakeCmd.m_emergencybrake_cm) &
    outC->_6_Context_1.brakeCmd.valid) {
    outC->MSG_EmergencyBrakeActive = kcg_false;
  }
  else if ((apply_brake_TIU_Types_Pkg ==
      outC->_6_Context_1.brakeCmd.m_emergencybrake_cm) &
    outC->_6_Context_1.brakeCmd.valid) {
    outC->MSG_EmergencyBrakeActive = kcg_true;
  }
  else {
    outC->MSG_EmergencyBrakeActive = _L1022;
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
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

