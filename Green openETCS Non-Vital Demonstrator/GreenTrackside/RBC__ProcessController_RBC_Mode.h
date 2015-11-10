/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessController_RBC_Mod
#define _RBC__ProcessController_RBC_Mod

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "PosData__Get_NID_LRBG_RBC_Sessi.h"
#include "PosData__Set_NID_LRBG_RBC_Sessi.h"
#include "SessionManagement__SetPosData_R.h"
#include "TrainData__Set_NID_ENGINE_RBC_S.h"
#include "SessionManagement__GetTrainData.h"
#include "SessionManagement__SetTrainData.h"
#include "TrainData__UpdateWithP003_RBC_S.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "TrainData__UpdateWithP011_RBC_S.h"
#include "SessionManagement__Reset_RBC_Se.h"
#include "Clock__Reset_RBC_Time_Pkg.h"
#include "_153_RadioTrainTrackHeader__Get.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "_152_RadioTrainTrackPackets__Ge.h"
#include "RadioTrainTrackMessage__GetPack.h"
#include "_151_RadioTrainTrackHeader__Get.h"
#include "RadioTrainTrackHeader__Get_T_TR.h"
#include "_148_RadioTrainTrackHeader__Get.h"
#include "RadioTrainTrackPacket003__IsVal.h"
#include "_111_RadioTrackTrainFactory__Cr.h"
#include "_110_RadioTrackTrainFactory__Cr.h"
#include "_109_RadioTrackTrainFactory__Cr.h"
#include "_107_RadioTrackTrainFactory__Cr.h"
#include "_106_RadioTrackTrainFactory__Cr.h"
#include "_105_RadioTrackTrainFactory__Cr.h"
#include "RadioTrackTrainMessage__GetHead.h"
#include "_100_RadioTrackTrainHeader__Get.h"
#include "RadioTrackTrainHeader__Get_T_TR.h"
#include "DynamicConfig__Get_M_VERSION_RB.h"
#include "MAReqParams__Get_Q_DIR_RBC_Conf.h"
#include "MAReqParams__Get_T_CYCRQST_RBC_.h"
#include "PosRepParams__Get_M_LOC_RBC_Con.h"
#include "PosRepParams__Get_Q_SCALE_RBC_C.h"
#include "DynamicConfig__GetMAReqParams_R.h"
#include "PosRepParams__Get_Q_DIR_RBC_Con.h"
#include "PosRepParams__GetIncrementalDis.h"
#include "PosRepParams__CountIncrementalD.h"
#include "MAReqParams__Get_T_TIMEOUTRQST_.h"
#include "MAReqParams__Get_T_MAR_RBC_Conf.h"
#include "DynamicConfig__GetPosRepParams_.h"
#include "PosRepParams__Get_T_CYCLOC_RBC_.h"
#include "PosRepParams__Get_D_CYCLOC_RBC_.h"
#include "_77_RadioTrackTrainMessageQueue.h"
#include "_73_RadioTrackTrainMessageQueue.h"
#include "RBC__ProcessPositionReport_RBC_.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"
#include "RBC__ProcessMovementAuthority_R.h"
#include "RBC__ProcessConditionalEm_RBC_M.h"
#include "RBC__ProcessUnconditional_RBC_M.h"
#include "RBC__ProcessRevocationOfE_RBC_M.h"
#include "RBC__ProcessGeneralMessage_RBC_.h"
#include "RBC__ProcessTripAndPostTrip_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */ outDataBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  kcg_bool init8;
  kcg_bool init9;
  kcg_bool init10;
  kcg_bool init11;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_CONTROLLER_SM /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */ CONTROLLER_SM_state_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMessage129 */ invalidAckForMessage129;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::trainDataValidated */ trainDataValidated;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMAandPosRepParams */ invalidAckForMAandPosRepParams;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessController::paramsSent */ paramsSent;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */ _12_radioTrackTrainMessageWasSe;
  SSM_ST_PROCESS_VALIDATED_TRAIN_ /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */ PROCESS_VALIDATED_TRAIN_DATA_SM;
  SSM_ST_SEND_MA_AMD_POS_REP_PARA /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */ SEND_MA_AMD_POS_REP_PARAMS_SM_s;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::radioTrackTrainMessageWasSentTimestamp */ radioTrackTrainMessageWasSentTi;
  SSM_ST_SESSION_ESTABLISHED_SM_C /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */ SESSION_ESTABLISHED_SM_state_nx;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC__ProcessGeneralMessage /* 2 */ _7_Context_2;
  outC_RBC__ProcessTripAndPostTri /* 1 */ _6_Context_1;
  outC_RBC__ProcessRevocationOfE_ /* 1 */ _5_Context_1;
  outC_RBC__ProcessMovementAuthor /* 1 */ _4_Context_1;
  outC_RBC__ProcessUnconditional_ /* 1 */ _3_Context_1;
  outC_RBC__ProcessConditionalEm_ /* 1 */ _2_Context_1;
  outC_RBC__PingTrain_RBC_Model_P /* 1 */ _1_Context_1;
  outC_RBC__ProcessPositionReport /* 1 */ Context_1;
  outC_RBC__PingTrain_RBC_Model_P /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessController_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessController */
extern void RBC__ProcessController_RBC_Mode(
  /* RBC_Model_Pkg::RBC__ProcessController::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessController::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessController::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessController_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC__ProcessController_reset_RB(
  outC_RBC__ProcessController_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessController_init_RBC(
  outC_RBC__ProcessController_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessController_RBC_Mod */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessController_RBC_Mode.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

