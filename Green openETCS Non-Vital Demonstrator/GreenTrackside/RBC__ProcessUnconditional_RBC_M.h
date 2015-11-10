/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessUnconditional_RBC_
#define _RBC__ProcessUnconditional_RBC_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "SessionManagement__SetPosData_R.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "_148_RadioTrainTrackHeader__Get.h"
#include "RadioTrainTrackHeader__Get_Q_EM.h"
#include "RadioTrainTrackHeader__Get_NID_.h"
#include "RadioTrackTrainMessage__GetHead.h"
#include "_100_RadioTrackTrainHeader__Get.h"
#include "RadioTrackTrainHeader__Get_NID_.h"
#include "_77_RadioTrackTrainMessageQueue.h"
#include "_73_RadioTrackTrainMessageQueue.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::validAck */ validAck;
  SSM_ST_UNCONDITIONAL_EMERGENCY_ /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */ UNCONDITIONAL_EMERGENCY_STOP_SM;
  NID_EM /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */ radioTrackTrainMessageWasSentEm;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessUnconditional_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop */
extern void RBC__ProcessUnconditional_RBC_M(
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessUnconditional_ *outC);

extern void RBC__ProcessUnconditional_reset(
  outC_RBC__ProcessUnconditional_ *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessUnconditional_init_(
  outC_RBC__ProcessUnconditional_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessUnconditional_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessUnconditional_RBC_M.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

