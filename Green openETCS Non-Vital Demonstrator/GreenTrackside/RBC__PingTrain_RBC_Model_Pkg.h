/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__PingTrain_RBC_Model_Pkg_H
#define _RBC__PingTrain_RBC_Model_Pkg_H

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "PosData__Get_NID_LRBG_RBC_Sessi.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "_109_RadioTrackTrainFactory__Cr.h"
#include "RadioTrackTrainMessage__GetHead.h"
#include "RadioTrackTrainHeader__Get_T_TR.h"
#include "RadioTrackTrainMessage__IsValid.h"
#include "NationalParams__Get_T_NVCONTACT.h"
#include "DynamicConfig__GetNationalParam.h"
#include "_77_RadioTrackTrainMessageQueue.h"
#include "_76_RadioTrackTrainMessageQueue.h"
#include "_73_RadioTrackTrainMessageQueue.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__PingTrain::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__PingTrain::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__PingTrain::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* RBC_Model_Pkg::RBC__PingTrain::lastRadioTrackTrainMessageWasSentTimestamp */ lastRadioTrackTrainMessageWasSe;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__PingTrain_RBC_Model_P;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__PingTrain */
extern void RBC__PingTrain_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__PingTrain::inP42 */ P042_trackside_int_T_TM *inP42,
  /* RBC_Model_Pkg::RBC__PingTrain::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__PingTrain::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__PingTrain::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__PingTrain_RBC_Model_P *outC);

extern void RBC__PingTrain_reset_RBC_Model_(
  outC_RBC__PingTrain_RBC_Model_P *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__PingTrain_init_RBC_Model_P(
  outC_RBC__PingTrain_RBC_Model_P *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__PingTrain_RBC_Model_Pkg_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__PingTrain_RBC_Model_Pkg.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

