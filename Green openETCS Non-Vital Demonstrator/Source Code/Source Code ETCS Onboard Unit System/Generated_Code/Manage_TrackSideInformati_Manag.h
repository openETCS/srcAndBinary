/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _Manage_TrackSideInformati_Mana
#define _Manage_TrackSideInformati_Mana

#include "kcg_types.h"
#include "CheckBGConsistency_CheckBGConsi.h"
#include "validateDataDirection_ValidateD.h"
#include "ContinuousTimeoutCheck_CheckEur.h"
#include "checkOnErrors_xdebugSupport_Pkg.h"
#include "countPackets_xdebugSupport_Pkg.h"
#include "bypassGeneralMessage_xdebugSupp.h"
#include "Receive_TrackSide_Msg_Receive_T.h"
#include "CheckEuroRadioMessage_CheckEuro.h"
#include "InformationFilter_InformationFi.h"
#include "combineForLevelChange_xdebugSup.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_ /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outputMessage */ outputMessage;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ApplyServiceBrake */ ApplyServiceBrake;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::BadBaliseMessageToDMI */ BadBaliseMessageToDMI;
  MSG_Errors_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outCheckErrors */ outCheckErrors;
  T_Data_From_Track_MASSPGradient /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::forLevelManagement */ forLevelManagement;
  ReceivedMessage_T_Common_Types_ /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outputMessageForRadioAck */ outputMessageForRadioAck;
  T_Data_From_Track_Packet_Level_ /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::Data_to_From_Track_Packets_at_ML */ Data_to_From_Track_Packets_at_M;
  /* -----------------------   local probes  ------------------------- */
  kcg_real /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::positionM */ positionM;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::debug_ErrorMSG */ debug_ErrorMSG;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::errorBG */ errorBG;
  kcg_int /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::countPackets */ countPackets;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */ rem_transitionPositionPassed;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InformationFilter_Informat /* 3 */ Context_3;
  outC_combineForLevelChange_xdeb /* 1 */ _2_Context_1;
  outC_CheckEuroRadioMessage_Chec /* 1 */ _1_Context_1;
  outC_Receive_TrackSide_Msg_Rece /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Manage_TrackSideInformati_;

/* ===========  node initialization and cycle functions  =========== */
/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
extern void Manage_TrackSideInformati_Manag(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */ kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pk *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */ kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */ T_internal_Type_Obu_BasicTypes_ tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::intrainVersion */ M_VERSION intrainVersion,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_ lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioStatus */ morcStatus_T_RCM_Session_Types_ *radioStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */ connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */ positionedBGs_T_TrainPosition_T *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */ kcg_bool inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inFilterEvents */ filterRelatedEvents_T_Common_Ty *inFilterEvents,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */ kcg_bool transitionPositionPassed,
  outC_Manage_TrackSideInformati_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_TrackSideInformati_reset(
  outC_Manage_TrackSideInformati_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_TrackSideInformati_init_(
  outC_Manage_TrackSideInformati_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Manage_TrackSideInformati_Mana */
/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_TrackSideInformati_Manag.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

