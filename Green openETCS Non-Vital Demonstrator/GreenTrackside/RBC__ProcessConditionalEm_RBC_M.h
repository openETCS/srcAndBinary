/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessConditionalEm_RBC_
#define _RBC__ProcessConditionalEm_RBC_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "SessionManagement__SetPosData_R.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "_148_RadioTrainTrackHeader__Get.h"
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
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::validAck */ validAck;
  SSM_ST_CONDITIONAL_EMERGENCY_ST /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */ CONDITIONAL_EMERGENCY_STOP_SM_s;
  NID_EM /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */ radioTrackTrainMessageWasSentEm;
  SessionManagement_T /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */ session;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessConditionalEm_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop */
extern void RBC__ProcessConditionalEm_RBC_M(
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessConditionalEm_ *outC);

extern void RBC__ProcessConditionalEm_reset(
  outC_RBC__ProcessConditionalEm_ *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessConditionalEm_init_(
  outC_RBC__ProcessConditionalEm_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessConditionalEm_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessConditionalEm_RBC_M.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

