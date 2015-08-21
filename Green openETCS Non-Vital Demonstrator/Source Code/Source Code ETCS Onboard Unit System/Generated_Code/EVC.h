/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _EVC_H_
#define _EVC_H_

#include "kcg_types.h"
#include "collectRadioMessages_radioOutput_Pkg.h"
#include "maintainTrainProperties_EVC_Support_Pkg.h"
#include "convertCab_EVC_Support_Pkg.h"
#include "ManageLevelAndMode.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"
#include "DMI_Integrator_manage_DMI_Output_Pkg.h"
#include "MoRC_Main_MoRC_Pck.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"
#include "trackPackets_toML_EVC_Support_Pkg.h"
#include "manageTrainData_trainData_pkg.h"
#include "checkGeneralMessage_trainData_pkg.h"
#include "TrackAtlas_TrackAtlas.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* EVC::EVC_reset */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* EVC::API_Odometry */ API_Odometry;
  T_internal_Type_Obu_BasicTypes_Pkg /* EVC::API_SystemTime */ API_SystemTime;
  API_TrackSideInput_T_API_Msg_Pkg /* EVC::API_fromTrack */ API_fromTrack;
  DMI_to_EVC_Message_T_API_DMI_Pkg /* EVC::API_fromDMI */ API_fromDMI;
  TIU_Input_msg_API_TIU_Pkg /* EVC::API_fromTIU */ API_fromTIU;
  mobileHWStatus_Type_MoRC_Pck /* EVC::API_mobileHWStatus */ API_mobileHWStatus;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* EVC::API_persistentData */ API_persistentData;
} inC_EVC;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EVC::resetOut */ resetOut;
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg /* EVC::API_toEuroradio */ API_toEuroradio;
  EVC_to_DMI_Message_T_API_DMI_Pkg /* EVC::API_toDMI */ API_toDMI;
  TIU_Output_msg_API_TIU_Pkg /* EVC::API_toTIU */ API_toTIU;
  kcg_bool /* EVC::EVC_ready */ EVC_ready;
  L_internal_Type_Obu_BasicTypes_Pkg /* EVC::debugTrainPositionNominal */ debugTrainPositionNominal;
  L_internal_Type_Obu_BasicTypes_Pkg /* EVC::debugTrainPositionDeltaMax */ debugTrainPositionDeltaMax;
  L_internal_Type_Obu_BasicTypes_Pkg /* EVC::debugTrainPositionDeltaMin */ debugTrainPositionDeltaMin;
  kcg_real /* EVC::debugPermittedSpeed */ debugPermittedSpeed;
  kcg_real /* EVC::debugIinterventionSpeed */ debugIinterventionSpeed;
  M_MODE /* EVC::debugCurrentMode */ debugCurrentMode;
  M_LEVEL /* EVC::debugCurrentLevel */ debugCurrentLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init13;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  sessionStatus_Type_Radio_Types_Pkg /* EVC::MoRC_sessionStatus */ MoRC_sessionStatus;
  radioManagementMessage_T_Common_Types_Pkg /* EVC::PROC_radioCmdFromProcedures */ PROC_radioCmdFromProcedures;
  kcg_bool /* EVC::PROC_powerUp_to_MoRC */ PROC_powerUp_to_MoRC;
  kcg_bool /* EVC::PROC_statusstartofmissionongoing_to_MoRC */ PROC_statusstartofmissionongoing_to_MoRC;
  kcg_bool /* EVC::PROC_powerOff_to_MoRC */ PROC_powerOff_to_MoRC;
  DMI_EVC_status_T_DMI_Types_Pkg /* EVC::DMI_currentDMIStatus */ DMI_currentDMIStatus;
  trainPosition_T_TrainPosition_Types_Pck /* EVC::CALC_TrainPosition */ CALC_TrainPosition;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* EVC::DMI_sdmToDMI */ DMI_sdmToDMI;
  trainData_T_TIU_Types_Pkg /* EVC::td_trainData */ td_trainData;
  positionedBGs_T_TrainPosition_Types_Pck /* EVC::CALC_BGs */ CALC_BGs;
  kcg_bool /* EVC::MoRC_newSessionEstablished */ MoRC_newSessionEstablished;
  T_internal_Type_Obu_BasicTypes_Pkg /* EVC::MSG_lastRadioMsgTimestamp */ MSG_lastRadioMsgTimestamp;
  NID_NTC /* EVC::ML_currentNTC */ ML_currentNTC;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* EVC::ML_ModeAndLevel */ ML_ModeAndLevel;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* EVC::EVC_PersistentData */ EVC_PersistentData;
  kcg_bool /* EVC::ML_levelTransitionBorderPassed */ ML_levelTransitionBorderPassed;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* EVC::EVC_TextMessageStatusList */ EVC_TextMessageStatusList;
  kcg_bool /* EVC::PROC_start_ack */ PROC_start_ack;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* EVC::rep_P0 */ rep_P0;
  trainDataStatus_T_trainData_Types_pkg /* EVC::td_status */ td_status;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* EVC::rep_P1 */ rep_P1;
  kcg_bool /* EVC::_L477 */ _L477;
  trainProperties_T_TrainPosition_Types_Pck /* EVC::TIU_trainProperties */ rem_TIU_trainProperties;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_manageTIU_input_input_from_TIU_API_Pkg /* 4 */ Context_4;
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg /* 1 */ _12_Context_1;
  outC_manageDMI_Input_manage_DMI_Input_Pkg /* 2 */ _11_Context_2;
  outC_manageTrainData_trainData_pkg /* 1 */ _10_Context_1;
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg /* 2 */ Context_2;
  outC_TrackAtlas_TrackAtlas /* 1 */ _9_Context_1;
  outC_trackPackets_toML_EVC_Support_Pkg /* 1 */ _8_Context_1;
  outC_ManageLevelAndMode /* 1 */ _7_Context_1;
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg /* 1 */ _6_Context_1;
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg /* 1 */ _5_Context_1;
  outC_MoRC_Main_MoRC_Pck /* 1 */ _4_Context_1;
  outC_Master_Procedure_ManageProcedure_Pkg /* 1 */ _3_Context_1;
  outC_DMI_Integrator_manage_DMI_Output_Pkg /* 1 */ _2_Context_1;
  outC_ProvidePositionReport_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  outC_checkGeneralMessage_trainData_pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* EVC */
extern void EVC(inC_EVC *inC, outC_EVC *outC);

extern void EVC_reset(outC_EVC *outC);

#endif /* _EVC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

