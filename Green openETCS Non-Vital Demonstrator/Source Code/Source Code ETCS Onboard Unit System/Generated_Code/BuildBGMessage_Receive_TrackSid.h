/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _BuildBGMessage_Receive_TrackSi
#define _BuildBGMessage_Receive_TrackSi

#include "kcg_types.h"
#include "checkOdometry_Receive_TrackSide.h"
#include "manageTelegram_Receive_TrackSid.h"
#include "manageAdditionalTelegram_Receiv.h"
#include "updateCollectorSendMessage_Rece.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BG_Message_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::outBGMessage */ outBGMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TelegramStore_T_Receive_TrackSi /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeAdditionalTelegram */ storeAdditionalTelegram;
  BGCollector_T_Receive_TrackSide /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ storeCollector;
  TelegramArray_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ storeBGTelegramArray;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_BuildBGMessage_Receive_Tra;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
extern void BuildBGMessage_Receive_TrackSid(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */ kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Typ *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_Tra *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildBGMessage_reset_Receive_Tr(
  outC_BuildBGMessage_Receive_Tra *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildBGMessage_init_Receive_Tra(
  outC_BuildBGMessage_Receive_Tra *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _BuildBGMessage_Receive_TrackSi */
/* $**************** KCG Version 6.4 (build i21) ****************
** BuildBGMessage_Receive_TrackSid.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

