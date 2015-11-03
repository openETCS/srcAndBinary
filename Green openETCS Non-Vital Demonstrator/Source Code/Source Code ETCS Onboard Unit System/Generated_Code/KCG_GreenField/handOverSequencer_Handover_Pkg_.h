/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */
#ifndef _handOverSequencer_Handover_Pkg
#define _handOverSequencer_Handover_Pkg

#include "kcg_types.h"
#include "Read_P045_TM.h"
#include "Read_P042_TM.h"
#include "checkSessionCmd_Handover_Pkg_ha.h"
#include "p131_rbcTransitionOrder_2_p42_e.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */ p42_sessionCmd_for_acceptingRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */ p42_sessionCmd_for_handingOverR;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */ _7_p45_radioNetworkRegistration;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */ _6_p45_radioNetworkRegistration;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */ sendPositionReport_2_handingOve;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */ sendPositionReport_2_acceptingR;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */ sendTrainData_2_acceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */ useInformationFromAcceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */ bufferInformationFromAcceptingR;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */ handoverInprogress;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverFinished */ handoverFinished;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::notReady */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init4;
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ p45_radioNetworkRegistrationOrd;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */ handOver_with_2_Sessions_SM_res;
  SSM_ST_handOver_with_2_Sessions /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */ handOver_with_2_Sessions_SM_sta;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ _5_p45_radioNetworkRegistration;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */ p131_transitionOrder_loc_IfBloc;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */ handOver_with_1_Session_SM_rese;
  SSM_ST_handOver_with_1_Session_ /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */ handOver_with_1_Session_SM_stat;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder_mem */ p131_transitionOrder_mem;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 4 */ Context_4;
  outC_RisingEdge_digital /* 9 */ Context_9;
  outC_RisingEdge_digital /* 28 */ Context_28;
  outC_RisingEdge_digital /* 26 */ Context_26;
  outC_RisingEdge_digital /* 8 */ Context_8;
  outC_RisingEdge_digital /* 5 */ Context_5;
  /* ----------------- no clocks of observable data ------------------ */
} outC_handOverSequencer_Handover;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
extern void handOverSequencer_Handover_Pkg_(
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrd,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOv,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_ *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_ *morcStatusFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::maxSafeFrontEndPassesHandOverLocation */ kcg_bool maxSafeFrontEndPassesHandOverLo,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::minSafeReadEndPassesHandOverLocation */ kcg_bool minSafeReadEndPassesHandOverLoc,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  outC_handOverSequencer_Handover *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handOverSequencer_reset_Handove(
  outC_handOverSequencer_Handover *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handOverSequencer_init_Handover(
  outC_handOverSequencer_Handover *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _handOverSequencer_Handover_Pkg */
/* $**************** KCG Version 6.4 (build i21) ****************
** handOverSequencer_Handover_Pkg_.h
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

