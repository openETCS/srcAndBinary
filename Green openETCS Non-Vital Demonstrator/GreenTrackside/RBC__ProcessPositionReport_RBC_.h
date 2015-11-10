/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessPositionReport_RBC
#define _RBC__ProcessPositionReport_RBC

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "SessionManagement__SetPosData_R.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "PosData__Get_M_LEVEL_RBC_Sessio.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "_148_RadioTrainTrackHeader__Get.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessPositionReport::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__ProcessPositionReport::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessPositionReport::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_POSITION_REPORT_SM /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */ POSITION_REPORT_SM_state_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessPositionReport::terminateSessionInCaseOfLevelLoss */ terminateSessionInCaseOfLevelLo;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC__PingTrain_RBC_Model_P /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessPositionReport;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessPositionReport */
extern void RBC__ProcessPositionReport_RBC_(
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessPositionReport *outC);

extern void RBC__ProcessPositionReport_rese(
  outC_RBC__ProcessPositionReport *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessPositionReport_init(
  outC_RBC__ProcessPositionReport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessPositionReport_RBC */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessPositionReport_RBC_.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

