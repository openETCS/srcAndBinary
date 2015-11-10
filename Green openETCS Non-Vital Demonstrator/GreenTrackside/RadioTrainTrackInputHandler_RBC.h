/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _RadioTrainTrackInputHandler_RB
#define _RadioTrainTrackInputHandler_RB

#include "kcg_types.h"
#include "RadioTrainTrackFactory__CreateD.h"
#include "RadioTrainTrackMessageCon_RBC_M.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radi /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::outRadioTrainTrack */ outRadioTrainTrack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrainTrackMessageCon_ /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RadioTrainTrackInputHandle;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RadioTrainTrackInputHandler */
extern void RadioTrainTrackInputHandler_RBC(
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::inRadioTrainTrack */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrack,
  outC_RadioTrainTrackInputHandle *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackInputHandler_res(
  outC_RadioTrainTrackInputHandle *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackInputHandler_ini(
  outC_RadioTrainTrackInputHandle *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RadioTrainTrackInputHandler_RB */
/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackInputHandler_RBC.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

