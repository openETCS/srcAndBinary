/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:32
*************************************************************$ */
#ifndef __1_EVC_H_
#define __1_EVC_H_

#include "kcg_types.h"
#include "maintainTrainProperties_EVC_MEM_Support_Pkg.h"
#include "patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg.h"
#include "MEM_MobileConnectionContext_EVC_MEM_Support_Pkg.h"
#include "MEM_MobileRegistrationContext_EVC_MEM_Support_Pkg.h"
#include "Procedure_TRIP_EVC_MEM_Support_Pkg.h"
#include "probe_RadioOutput_RadioSupport_Pkg.h"
#include "ManageLevelAndMode.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"
#include "manageDMI_Output_manage_DMI_Output_Pkg.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"
#include "ProbeEVC_EnvSim.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"
#include "setProbesBalises_xdebugSupport_Pkg.h"
#include "distanceLastBG_xdebugSupport_Pkg.h"
#include "distanceLastMSG_xdebugSupport_Pkg.h"
#include "setProbes_xdebugSupport_Pkg.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"
#include "collectRadioOutput_radioOutput_Pkg.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"
#include "MEM_combineForLevelChange_EVC_MEM_Support_Pkg.h"
#include "probePackets_EVC_MEM_Support_Pkg.h"
#include "trainData_trainData_pkg.h"
#include "checkGeneralMessage_trainData_pkg.h"
#include "probe_MsgOut_RadioSupport_Pkg.h"
#include "TrackAtlas_TrackAtlas.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------   local probes  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* EVC::probe_Odometry */ probe_Odometry;
  probesBalises_T_xdebugSupport_Pkg /* EVC::probe_Balises */ probe_Balises;
  kcg_real /* EVC::probe_distMsg */ probe_distMsg;
  kcg_real /* EVC::probe_distBG */ probe_distBG;
  NID_MESSAGE /* EVC::probe_MSGinAfterFilter */ probe_MSGinAfterFilter;
  NID_LRBG /* EVC::probe_LRBG */ probe_LRBG;
  NID_BG /* EVC::probe_BG_afterCheck */ probe_BG_afterCheck;
  NID_MESSAGE /* EVC::probe_Msg_1 */ probe_Msg_1;
  NID_MESSAGE /* EVC::probe_Msg_2 */ probe_Msg_2;
  NID_MESSAGE /* EVC::probe_Msg_3 */ probe_Msg_3;
  NID_MESSAGE /* EVC::probe_Msg_4 */ probe_Msg_4;
  NID_MESSAGE /* EVC::probe_Msg_5 */ probe_Msg_5;
  NID_MESSAGE /* EVC::probe_MSGout */ probe_MSGout;
  T_TRAIN /* EVC::probe_TTrain */ probe_TTrain;
  NID_PACKET /* EVC::probe_nid_packet2 */ probe_nid_packet2;
  NID_PACKET /* EVC::probe_nid_packet1 */ probe_nid_packet1;
  kcg_bool /* EVC::probe_newInput */ probe_newInput;
  NID_MESSAGE /* EVC::probe_MSG_in */ probe_MSG_in;
  NID_BG /* EVC::probe_BG_ID */ probe_BG_ID;
  NID_MESSAGE /* EVC::probe_lastMSG_in */ probe_lastMSG_in;
  NID_BG /* EVC::probe_lastBG_ID */ probe_lastBG_ID;
  positionErrors_T_TrainPosition_Types_Pck /* EVC::probe_PositioningErrors */ probe_PositioningErrors;
  MSG_Errors_T_Common_Types_Pkg /* EVC::probe_MsgErrors */ probe_MsgErrors;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init20;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  radioManagementMessage_T_Common_Types_Pkg /* EVC::PROC_radioCmdFromProcedures */ PROC_radioCmdFromProcedures;
  kcg_bool /* EVC::PROC_powerUp_to_MoRC */ PROC_powerUp_to_MoRC;
  kcg_bool /* EVC::PROC_statusstartofmissionongoing_to_MoRC */ PROC_statusstartofmissionongoing_to_MoRC;
  kcg_bool /* EVC::PROC_powerOff_to_MoRC */ PROC_powerOff_to_MoRC;
  DMI_EVC_status_T_DMI_Types_Pkg /* EVC::DMI_currentDMIStatus */ DMI_currentDMIStatus;
  trainPosition_T_TrainPosition_Types_Pck /* EVC::CALC_TrainPosition */ CALC_TrainPosition;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* EVC::DMI_sdmToDMI */ DMI_sdmToDMI;
  trainData_T_TIU_Types_Pkg /* EVC::td_trainData */ td_trainData;
  connection_ids_T_Handover_Pkg /* EVC::MoRC_supervisingRBC_Id */ MoRC_supervisingRBC_Id;
  positionedBGs_T_TrainPosition_Types_Pck /* EVC::CALC_BGs */ CALC_BGs;
  trainProperties_T_TrainPosition_Types_Pck /* EVC::TIU_trainProperties */ TIU_trainProperties;
  kcg_bool /* EVC::MoRC_newSessionEstablished */ MoRC_newSessionEstablished;
  T_internal_Type_Obu_BasicTypes_Pkg /* EVC::MSG_lastRadioMsgTimestamp */ MSG_lastRadioMsgTimestamp;
  NID_NTC /* EVC::EVC_currentNTC */ EVC_currentNTC;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* EVC::ML_ModeAndLevel */ ML_ModeAndLevel;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* EVC::EVC_PersistentData */ EVC_PersistentData;
  DMI_LevelList_T_DMI_Types_Pkg /* EVC::EVC_ActiveLevelList */ EVC_ActiveLevelList;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* EVC::EVC_TextMessageStatusList */ EVC_TextMessageStatusList;
  trainData_Events_T_trainData_Types_pkg /* EVC::td_events */ td_events;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* EVC::rep_P0 */ rep_P0;
  trainDataStatus_T_trainData_Types_pkg /* EVC::td_status */ td_status;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* EVC::rep_P1 */ rep_P1;
  morcStatus_T_RCM_Session_Types_Pkg /* EVC::MoRC_RadioStatus_1 */ MoRC_RadioStatus_1;
  NID_RADIO /* EVC::MoRC_RadioID_1 */ MoRC_RadioID_1;
  NID_MN /* EVC::MoRC_MN_1 */ MoRC_MN_1;
  kcg_bool /* EVC::_L477 */ _L477;
  kcg_bool /* EVC::EVC_ready */ EVC_ready;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ProbeEVC_EnvSim /* 1 */ _19_Context_1;
  outC_probe_MsgOut_RadioSupport_Pkg /* 3 */ _18_Context_3;
  outC_collectRadioOutput_radioOutput_Pkg /* 1 */ _17_Context_1;
  outC_checkGeneralMessage_trainData_pkg /* 3 */ _16_Context_3;
  outC_setProbes_xdebugSupport_Pkg /* 2 */ _15_Context_2;
  outC_distanceLastMSG_xdebugSupport_Pkg /* 2 */ _14_Context_2;
  outC_distanceLastBG_xdebugSupport_Pkg /* 2 */ _13_Context_2;
  outC_setProbesBalises_xdebugSupport_Pkg /* 2 */ _12_Context_2;
  outC_manageDMI_Output_manage_DMI_Output_Pkg /* 2 */ _11_Context_2;
  outC_Master_Procedure_ManageProcedure_Pkg /* 2 */ _10_Context_2;
  outC_MoRC_HO_MoRC_HO_Pkg /* 1 */ _9_Context_1;
  outC_ProvidePositionReport_ProvidePositionReport_Pkg /* 2 */ _8_Context_2;
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg /* 2 */ _7_Context_2;
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg /* 2 */ _6_Context_2;
  outC_ManageLevelAndMode /* 2 */ _5_Context_2;
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg /* 1 */ _4_Context_1;
  outC_TrackAtlas_TrackAtlas /* 2 */ _3_Context_2;
  outC_trainData_trainData_pkg /* 2 */ _2_Context_2;
  outC_manageDMI_Input_manage_DMI_Input_Pkg /* 3 */ _1_Context_3;
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg /* 3 */ Context_3;
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg /* 2 */ Context_2;
  outC_manageTIU_input_input_from_TIU_API_Pkg /* 5 */ Context_5;
  outC_probePackets_EVC_MEM_Support_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* EVC */ ck_every;
} outC__1_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* EVC */
extern void _1_EVC(void);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _1_EVC_reset(void);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _1_EVC_init(void);
#endif /* KCG_USER_DEFINED_INIT */

extern outC__1_EVC Ctxt__1_EVC;

/* EVC::EVC_reset */
extern kcg_bool EVC_reset;
/* EVC::API_Odometry */
extern odometry_T_Obu_BasicTypes_Pkg API_Odometry;
/* EVC::API_SystemTime */
extern T_internal_Type_Obu_BasicTypes_Pkg API_SystemTime;
/* EVC::API_fromTrack */
extern API_TrackSideInput_T_API_Msg_Pkg API_fromTrack;
/* EVC::API_fromDMI */
extern DMI_to_EVC_Message_int_T_API_DMI_Pkg API_fromDMI;
/* EVC::API_fromTIU */
extern TIU_Input_msg_API_TIU_Pkg API_fromTIU;
/* EVC::API_mobileHWStatus */
extern mobileHWStatus_Type_MoRC_Pck API_mobileHWStatus;
/* EVC::API_persistentData */
extern ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg API_persistentData;

/* EVC::debugCurrentLevel */
extern M_LEVEL debugCurrentLevel;
/* EVC::debugCurrentMode */
extern M_MODE debugCurrentMode;
/* EVC::debugIinterventionSpeed */
extern kcg_real debugIinterventionSpeed;
/* EVC::debugPermittedSpeed */
extern kcg_real debugPermittedSpeed;
/* EVC::debugTrainPositionDeltaMin */
extern L_internal_Type_Obu_BasicTypes_Pkg debugTrainPositionDeltaMin;
/* EVC::debugTrainPositionDeltaMax */
extern L_internal_Type_Obu_BasicTypes_Pkg debugTrainPositionDeltaMax;
/* EVC::debugTrainPositionNominal */
extern L_internal_Type_Obu_BasicTypes_Pkg debugTrainPositionNominal;
/* EVC::EVC_ready */
extern kcg_bool EVC_ready;
/* EVC::API_toTIU */
extern TIU_Output_msg_API_TIU_Pkg API_toTIU;
/* EVC::API_toDMI */
extern EVC_to_DMI_Message_int_T_API_DMI_Pkg API_toDMI;
/* EVC::API_RTM_management */
extern RadioManagement_T_API_RadioCommunication_Pkg API_RTM_management;
/* EVC::API_toRBC */
extern M_TrainTrack_Message_T_TM_radio_messages API_toRBC;
/* EVC::resetOut */
extern kcg_bool resetOut;

#endif /* __1_EVC_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** _1_EVC.h
** Generation date: 2015-12-07T14:52:32
*************************************************************$ */

