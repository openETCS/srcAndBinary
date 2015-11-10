/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessRevocationOfE_RBC_
#define _RBC__ProcessRevocationOfE_RBC_

#include "kcg_types.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "_151_RadioTrainTrackHeader__Get.h"
#include "_148_RadioTrainTrackHeader__Get.h"
#include "RadioTrackTrainMessage__GetHead.h"
#include "_100_RadioTrackTrainHeader__Get.h"
#include "RadioTrackTrainHeader__Get_T_TR.h"
#include "RadioTrackTrainHeader__Get_M_AC.h"
#include "_77_RadioTrackTrainMessageQueue.h"
#include "_73_RadioTrackTrainMessageQueue.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::validAck */ validAck;
  SSM_ST_REVOCATION_OF_EMERGENCY_ /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ REVOCATION_OF_EMERGENCY_STOP_ME;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::ackRequired */ ackRequired;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::revocationMessageWasSentTimestamp */ revocationMessageWasSentTimesta;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessRevocationOfE_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop */
extern void RBC__ProcessRevocationOfE_RBC_M(
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessRevocationOfE_ *outC);

extern void RBC__ProcessRevocationOfE_reset(
  outC_RBC__ProcessRevocationOfE_ *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessRevocationOfE_init_(
  outC_RBC__ProcessRevocationOfE_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessRevocationOfE_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessRevocationOfE_RBC_M.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

