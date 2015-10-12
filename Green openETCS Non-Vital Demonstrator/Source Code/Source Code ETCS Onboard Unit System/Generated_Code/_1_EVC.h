/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef __1_EVC_H_
#define __1_EVC_H_

#include "kcg_types.h"
#include "maintainTrainProperties_EVC_Support_Pkg.h"
#include "patchEmergencyBrakeMsg_EVC_Support_Pkg.h"
#include "ManageLevelAndMode.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"
#include "manageDMI_Output_manage_DMI_Output_Pkg.h"
#include "MoRC_Main_MoRC_Pck.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"
#include "collectRadioMessages_radioOutput_Pkg.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"
#include "setProbesBalises_xdebugSupport_Pkg.h"
#include "distanceLastBG_xdebugSupport_Pkg.h"
#include "distanceLastMSG_xdebugSupport_Pkg.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"
#include "trainData_trainData_pkg.h"
#include "checkGeneralMessage_trainData_pkg.h"
#include "TrackAtlas_TrackAtlas.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------   local probes  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* EVC::probe_Odometry */ probe_Odometry;
  probesBalises_T_xdebugSupport_Pkg /* EVC::probe_Balises */ probe_Balises;
  kcg_real /* EVC::probe_distMsg */ probe_distMsg;
  kcg_real /* EVC::probe_distBG */ probe_distBG;
  NID_MESSAGE /* EVC::probe_MSG */ probe_MSG;
  NID_LRBG /* EVC::probe_LRBG */ probe_LRBG;
  NID_BG /* EVC::probe_BG */ probe_BG;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init16;
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
  NID_NTC /* EVC::EVC_currentNTC */ EVC_currentNTC;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* EVC::ML_ModeAndLevel */ ML_ModeAndLevel;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* EVC::EVC_PersistentData */ EVC_PersistentData;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* EVC::EVC_TextMessageStatusList */ EVC_TextMessageStatusList;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* EVC::rep_P0 */ rep_P0;
  trainDataStatus_T_trainData_Types_pkg /* EVC::td_status */ td_status;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* EVC::rep_P1 */ rep_P1;
  kcg_bool /* EVC::_L477 */ _L477;
  trainProperties_T_TrainPosition_Types_Pck /* EVC::TIU_trainProperties */ rem_TIU_trainProperties;
  kcg_bool /* EVC::EVC_ready */ EVC_ready;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_distanceLastMSG_xdebugSupport_Pkg /* 1 */ _15_Context_1;
  outC_distanceLastBG_xdebugSupport_Pkg /* 1 */ _14_Context_1;
  outC_setProbesBalises_xdebugSupport_Pkg /* 1 */ _13_Context_1;
  outC_collectRadioMessages_radioOutput_Pkg /* 1 */ _12_Context_1;
  outC_checkGeneralMessage_trainData_pkg /* 1 */ _11_Context_1;
  outC_ProvidePositionReport_ProvidePositionReport_Pkg /* 1 */ _10_Context_1;
  outC_manageDMI_Output_manage_DMI_Output_Pkg /* 1 */ _9_Context_1;
  outC_Master_Procedure_ManageProcedure_Pkg /* 1 */ _8_Context_1;
  outC_MoRC_Main_MoRC_Pck /* 1 */ _7_Context_1;
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg /* 1 */ _6_Context_1;
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg /* 1 */ _5_Context_1;
  outC_ManageLevelAndMode /* 1 */ _4_Context_1;
  outC_TrackAtlas_TrackAtlas /* 1 */ _3_Context_1;
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg /* 2 */ _2_Context_2;
  outC_trainData_trainData_pkg /* 1 */ _1_Context_1;
  outC_manageDMI_Input_manage_DMI_Input_Pkg /* 2 */ Context_2;
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg /* 1 */ Context_1;
  outC_manageTIU_input_input_from_TIU_API_Pkg /* 4 */ Context_4;
  /* ----------------- no clocks of observable data ------------------ */
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
extern DMI_to_EVC_Message_T_API_DMI_Pkg API_fromDMI;
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
extern EVC_to_DMI_Message_T_API_DMI_Pkg API_toDMI;
/* EVC::API_toEuroradio */
extern API_EuroRadioOutput_T_API_RadioCommunication_Pkg API_toEuroradio;
/* EVC::resetOut */
extern kcg_bool resetOut;

#endif /* __1_EVC_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** _1_EVC.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

