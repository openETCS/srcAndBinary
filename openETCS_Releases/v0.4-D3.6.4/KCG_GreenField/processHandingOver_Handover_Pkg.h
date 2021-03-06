/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _processHandingOver_Handover_Pk
#define _processHandingOver_Handover_Pk

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFu.h"
#include "add_2_Distances_BasicLocationFu.h"
#include "scaledDLINK_2_dlink_BasicLocati.h"
#include "processRadioCtrlCmds_v2_Handove.h"
#include "mobileCtrlCmdRouter_out_Handove.h"
#include "radioStatusRouter_Handover_Pkg_.h"
#include "fishHandoverCmds_Handover_Pkg_h.h"
#include "splitInputData_Handover_Pkg_han.h"
#include "determineSupervisingRBC_Handove.h"
#include "indexOfBG_by_id_CalculateTrainP.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateT.h"
#include "EitherEdge_digital.h"
#include "locReachedOrPassed_BasicLocatio.h"
#include "handOverSequencer_Handover_Pkg_.h"
#include "changeoverSwitch_Handover_Pkg_h.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionCmds_2_MoRC_1 */ sessionCmds_2_MoRC_1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionCmds_2_MoRC_2 */ sessionCmds_2_MoRC_2;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sendPositionReport_2_handingOverRBC */ sendPositionReport_2_handingOve;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sendPositionReport_2_acceptingRBC */ sendPositionReport_2_acceptingR;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sendTrainData_2_acceptingRBC */ sendTrainData_2_acceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::bufferInformationFromAcceptingRBC */ bufferInformationFromAcceptingR;
  connection_ids_T_Handover_Pkg /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::supervisingRBC */ supervisingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::useInformationFromAcceptingRBC */ useInformationFromAcceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handingOverMobile_is_mobile_1 */ handingOverMobile_is_mobile_1;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ trainPassesA_RBC_RBC_border_Wit;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::notReady */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handoverInprogress */ handoverInprogress;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handoverFinished */ handoverFinished;
  p131_q_rbcTransitionOrder_T_Han /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L200 */ _L200;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EitherEdge_digital /* 2 */ _3_Context_2;
  outC_EitherEdge_digital /* 1 */ _2_Context_1;
  outC_handOverSequencer_Handover /* 1 */ _1_Context_1;
  outC_locReachedOrPassed_BasicLo /* 2 */ Context_2;
  outC_locReachedOrPassed_BasicLo /* 1 */ Context_1;
  outC_changeoverSwitch_Handover_ /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_processHandingOver_Handove;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::processHandingOver */
extern void processHandingOver_Handover_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_1 */ morcStatus_T_RCM_Session_Types_ *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_2 */ morcStatus_T_RCM_Session_Types_ *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  outC_processHandingOver_Handove *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void processHandingOver_reset_Handov(
  outC_processHandingOver_Handove *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void processHandingOver_init_Handove(
  outC_processHandingOver_Handove *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _processHandingOver_Handover_Pk */
/* $**************** KCG Version 6.4 (build i21) ****************
** processHandingOver_Handover_Pkg.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

