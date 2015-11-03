/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */
#ifndef _mobileBusRouter_out_Handover_P
#define _mobileBusRouter_out_Handover_P

#include "kcg_types.h"
#include "extractPositionReportFromBus_RC.h"
#include "genMsgToBus_RCM_Utils_Pkg_encod.h"
#include "mergeMsgToBus_RCM_Utils_Pkg_enc.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_Tra /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_1 */ msgBus_2_RBC_1;
  M_TrainTrackMessageBus_t_TM_Tra /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_2 */ msgBus_2_RBC_2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mergeMsgToBus_RCM_Utils_Pk /* 5 */ Context_5;
  outC_genMsgToBus_RCM_Utils_Pkg_ /* 2 */ Context_2;
  outC_genMsgToBus_RCM_Utils_Pkg_ /* 3 */ Context_3;
  outC_mergeMsgToBus_RCM_Utils_Pk /* 7 */ Context_7;
  outC_genMsgToBus_RCM_Utils_Pkg_ /* 1 */ _1_Context_1;
  outC_mergeMsgToBus_RCM_Utils_Pk /* 1 */ Context_1;
  outC_mergeMsgToBus_RCM_Utils_Pk /* 4 */ Context_4;
  /* ----------------- no clocks of observable data ------------------ */
} outC_mobileBusRouter_out_Handov;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
extern void mobileBusRouter_out_Handover_Pk(
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_1 */ msgToTrackTriggers_T_RCM_MsgTyp *morcMsgTriggersToRBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_2 */ msgToTrackTriggers_T_RCM_MsgTyp *morcMsgTriggersToRBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::handingOverRBC_is_RBC_1 */ kcg_bool handingOverRBC_is_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_acceptingRBC */ kcg_bool sendPositionReport_2_acceptingR,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_handingOverRBC */ kcg_bool sendPositionReport_2_handingOve,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_1 */ kcg_bool sendPositionReport_2_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_2 */ kcg_bool sendPositionReport_2_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendTrainData_2_acceptingRBC */ kcg_bool sendTrainData_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train */ T_TRAIN t_train,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train_global */ T_internal_Type_Obu_BasicTypes_ t_train_global,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBusToRBC_in */ M_TrainTrackMessageBus_t_TM_Tra *msgBusToRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::nid_engine */ NID_ENGINE nid_engine,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::m_version */ M_VERSION m_version,
  outC_mobileBusRouter_out_Handov *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mobileBusRouter_out_reset_Hando(
  outC_mobileBusRouter_out_Handov *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mobileBusRouter_out_init_Handov(
  outC_mobileBusRouter_out_Handov *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _mobileBusRouter_out_Handover_P */
/* $**************** KCG Version 6.4 (build i21) ****************
** mobileBusRouter_out_Handover_Pk.h
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

