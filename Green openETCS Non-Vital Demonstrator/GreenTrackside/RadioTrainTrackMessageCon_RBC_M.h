/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RadioTrainTrackMessageCon_RBC_
#define _RadioTrainTrackMessageCon_RBC_

#include "kcg_types.h"
#include "RadioTrainTrackMessage__GetHead.h"
#include "RadioTrainTrackHeader__Get_T_TR.h"
#include "RadioTrainTrackHeader__IsPresen.h"
#include "RadioTrainTrackMessage__IsPrese.h"
#include "_87_RadioTrainTrackMessageConsi.h"
#include "RadioTrainTrackMessageConsisten.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::outIsConsistent */ outIsConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::lastReceivedRadioTrainTrackMessageTimestamp */ lastReceivedRadioTrainTrackMess;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RadioTrainTrackMessageCon_;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg */
extern void RadioTrainTrackMessageCon_RBC_M(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageCon_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackMessageCon_reset(
  outC_RadioTrainTrackMessageCon_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackMessageCon_init_(
  outC_RadioTrainTrackMessageCon_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RadioTrainTrackMessageCon_RBC_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackMessageCon_RBC_M.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

