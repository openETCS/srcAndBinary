/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RBC__ProcessTripAndPostTrip_RB
#define _RBC__ProcessTripAndPostTrip_RB

#include "kcg_types.h"
#include "SessionManagement__GetPosData_R.h"
#include "PosData__Get_NID_LRBG_RBC_Sessi.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "_151_RadioTrainTrackHeader__Get.h"
#include "_148_RadioTrainTrackHeader__Get.h"
#include "_108_RadioTrackTrainFactory__Cr.h"
#include "RadioTrackTrainMessage__GetHead.h"
#include "_100_RadioTrackTrainHeader__Get.h"
#include "RadioTrackTrainHeader__Get_T_TR.h"
#include "_77_RadioTrackTrainMessageQueue.h"
#include "_73_RadioTrackTrainMessageQueue.h"
#include "RBC__ProcessModeAndLevel_RBC_Mo.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMess;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::validAck */ validAck;
  SSM_ST_TRIP_AND_POST_TRIP_SM /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */ TRIP_AND_POST_TRIP_SM_state_nxt;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */ recognitionMessageWasSentTimest;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC__ProcessModeAndLevel_R /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessTripAndPostTri;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
extern void RBC__ProcessTripAndPostTrip_RBC(
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessTripAndPostTri *outC);

extern void RBC__ProcessTripAndPostTrip_res(
  outC_RBC__ProcessTripAndPostTri *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessTripAndPostTrip_ini(
  outC_RBC__ProcessTripAndPostTri *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessTripAndPostTrip_RB */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessTripAndPostTrip_RBC.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

