/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */
#ifndef _ToOldRadioTrainTrackMsg_RBC_Mo
#define _ToOldRadioTrainTrackMsg_RBC_Mo

#include "kcg_types.h"
#include "ConvertHeader_RBC_Model_Pkg_Tra.h"
#include "ConvertPackets_RBC_Model_Pkg_Tr.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radi /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::outOld */ outOld;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ConvertPackets_RBC_Model_P /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToOldRadioTrainTrackMsg_RB;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg */
extern void ToOldRadioTrainTrackMsg_RBC_Mod(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg::inNew */ M_TrainTrack_Message_T_TM_radio *inNew,
  outC_ToOldRadioTrainTrackMsg_RB *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToOldRadioTrainTrackMsg_reset_R(
  outC_ToOldRadioTrainTrackMsg_RB *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToOldRadioTrainTrackMsg_init_RB(
  outC_ToOldRadioTrainTrackMsg_RB *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToOldRadioTrainTrackMsg_RBC_Mo */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToOldRadioTrainTrackMsg_RBC_Mod.h
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

