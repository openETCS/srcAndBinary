/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _MoRC_HO_MoRC_HO_Pkg_H_
#define _MoRC_HO_MoRC_HO_Pkg_H_

#include "kcg_types.h"
#include "processHandingOver_Handover_Pkg.h"
#include "mobileBusRouter_out_Handover_Pk.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  morcStatus_T_RCM_Session_Types_ /* MoRC_HO_Pkg::MoRC_HO::radioStatus_1 */ radioStatus_1;
  morcStatus_T_RCM_Session_Types_ /* MoRC_HO_Pkg::MoRC_HO::radioStatus_2 */ radioStatus_2;
  mobileConnectionCmd_T_RCM_Types /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionCmd_1 */ mobileConnectionCmd_1;
  mobileConnectionCmd_T_RCM_Types /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionCmd_2 */ mobileConnectionCmd_2;
  mobileRegistrationCmd_T_RCM_Typ /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationCmd_1 */ mobileRegistrationCmd_1;
  mobileRegistrationCmd_T_RCM_Typ /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationCmd_2 */ mobileRegistrationCmd_2;
  safeRadioConnectionIndication_T /* MoRC_HO_Pkg::MoRC_HO::safeRadioIndication */ safeRadioIndication;
  connection_ids_T_Handover_Pkg /* MoRC_HO_Pkg::MoRC_HO::supervisingRBC */ supervisingRBC;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::bufferInformationFromAcceptingRBC */ bufferInformationFromAcceptingR;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ trainPassesA_RBC_RBC_border_Wit;
  M_TrainTrackMessageBus_t_TM_Tra /* MoRC_HO_Pkg::MoRC_HO::msgBus_2_RBC_1 */ msgBus_2_RBC_1;
  M_TrainTrackMessageBus_t_TM_Tra /* MoRC_HO_Pkg::MoRC_HO::msgBus_2_RBC_2 */ msgBus_2_RBC_2;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::triggerPositionReport */ triggerPositionReport;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::triggerTrainData */ triggerTrainData;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::infomDriverNoCompatibleVersionSupported */ infomDriverNoCompatibleVersionS;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_ /* MoRC_HO_Pkg::MoRC_HO::lastReceivedRadioNetworkID */ lastReceivedRadioNetworkID;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::ready */ ready;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mobileBusRouter_out_Handov /* 1 */ _2_Context_1;
  outC_MoRC_Main_v2_MoRC_Pck /* 2 */ Context_2;
  outC_MoRC_Main_v2_MoRC_Pck /* 1 */ _1_Context_1;
  outC_processHandingOver_Handove /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MoRC_HO_MoRC_HO_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_HO_Pkg::MoRC_HO */
extern void MoRC_HO_MoRC_HO_Pkg(
  /* MoRC_HO_Pkg::MoRC_HO::mode */ M_MODE mode,
  /* MoRC_HO_Pkg::MoRC_HO::level */ M_LEVEL level,
  /* MoRC_HO_Pkg::MoRC_HO::eventsAndPhases */ obuEventsAndPhases_T_RCM_Sessio *eventsAndPhases,
  /* MoRC_HO_Pkg::MoRC_HO::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_ *atPowerUpRadioNetworkID,
  /* MoRC_HO_Pkg::MoRC_HO::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_ *newRadioNetworkIDFromDriver,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_1 */ mobileRegistrationContext_T_RCM *mobileRegistrationContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_2 */ mobileRegistrationContext_T_RCM *mobileRegistrationContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_1 */ mobileConnectionContext_T_RCM_T *mobileConnectionContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_2 */ mobileConnectionContext_T_RCM_T *mobileConnectionContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* MoRC_HO_Pkg::MoRC_HO::msgBusToRBC_in */ M_TrainTrackMessageBus_t_TM_Tra *msgBusToRBC_in,
  /* MoRC_HO_Pkg::MoRC_HO::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* MoRC_HO_Pkg::MoRC_HO::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* MoRC_HO_Pkg::MoRC_HO::t_train */ T_TRAIN t_train,
  /* MoRC_HO_Pkg::MoRC_HO::t_train_global */ T_internal_Type_Obu_BasicTypes_ t_train_global,
  /* MoRC_HO_Pkg::MoRC_HO::currentTime */ T_internal_Type_Obu_BasicTypes_ currentTime,
  /* MoRC_HO_Pkg::MoRC_HO::reset */ kcg_bool reset,
  /* MoRC_HO_Pkg::MoRC_HO::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* MoRC_HO_Pkg::MoRC_HO::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* MoRC_HO_Pkg::MoRC_HO::configData */ morc_configData_T_RCM_Session_T *configData,
  /* MoRC_HO_Pkg::MoRC_HO::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* MoRC_HO_Pkg::MoRC_HO::m_version */ M_VERSION m_version,
  outC_MoRC_HO_MoRC_HO_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoRC_HO_init_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _MoRC_HO_MoRC_HO_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_HO_MoRC_HO_Pkg.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

