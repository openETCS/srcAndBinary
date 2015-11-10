/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _manageTelegram_Receive_TrackSi
#define _manageTelegram_Receive_TrackSi

#include "kcg_types.h"
#include "checkTelegram_Receive_TrackSide.h"
#include "checkInit_Receive_TrackSide_Msg.h"
#include "addTelegram_Receive_TrackSide_M.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::manageTelegram */
extern void manageTelegram_Receive_TrackSid(
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Typ *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisComplete */ kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisChangedEarly */ kcg_bool *outBGisChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outCollector */ BGCollector_T_Receive_TrackSide *outCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outStoresChanged */ kcg_bool *outStoresChanged);

#endif /* _manageTelegram_Receive_TrackSi */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageTelegram_Receive_TrackSid.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */

