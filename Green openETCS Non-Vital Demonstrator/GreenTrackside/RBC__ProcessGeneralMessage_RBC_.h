/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessGeneralMessage_RBC
#define _RBC__ProcessGeneralMessage_RBC

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
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::validAck */ validAck;
  SSM_ST_GENERAL_MESSAGE_SM /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */ GENERAL_MESSAGE_SM_state_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */ ackRequired;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */ radioTrackTrainMessageWasSentTi;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessGeneralMessage;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
extern void RBC__ProcessGeneralMessage_RBC_(
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessGeneralMessage *outC);

extern void RBC__ProcessGeneralMessage_rese(
  outC_RBC__ProcessGeneralMessage *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessGeneralMessage_init(
  outC_RBC__ProcessGeneralMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessGeneralMessage_RBC */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessGeneralMessage_RBC_.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

