/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessMovementAuthority_
#define _RBC__ProcessMovementAuthority_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "SessionManagement__SetPosData_R.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "_151_RadioTrainTrackHeader__Get.h"
#include "_148_RadioTrainTrackHeader__Get.h"
#include "RadioTrackTrainMessage__GetHead.h"
#include "_100_RadioTrackTrainHeader__Get.h"
#include "RadioTrackTrainHeader__Get_T_TR.h"
#include "_77_RadioTrackTrainMessageQueue.h"
#include "_73_RadioTrackTrainMessageQueue.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::invalidAcknowledgement */ invalidAcknowledgement;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::validAcknowledgement */ validAcknowledgement;
  SSM_ST_MOVEMENT_AUTHORITY_SM /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */ MOVEMENT_AUTHORITY_SM_state_nxt;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */ radioTrackTrainMessageWasSentTi;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessMovementAuthor;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority */
extern void RBC__ProcessMovementAuthority_R(
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessMovementAuthor *outC);

extern void RBC__ProcessMovementAuthority_r(
  outC_RBC__ProcessMovementAuthor *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessMovementAuthority_i(
  outC_RBC__ProcessMovementAuthor *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessMovementAuthority_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessMovementAuthority_R.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

