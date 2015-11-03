/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _addTelegram_Receive_TrackSide_
#define _addTelegram_Receive_TrackSide_

#include "kcg_types.h"
#include "setCoordinateSystemPosition_Rec.h"
#include "setIntervalBGPosition_Receive_T.h"
#include "replaceTelegram_Receive_TrackSi.h"
#include "setFirstFree_Receive_TrackSide_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::addTelegram */
extern void addTelegram_Receive_TrackSide_M(
  /* Receive_TrackSide_Msg_Pkg::addTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::doUpdate */ kcg_bool doUpdate,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inPosition */ centerOfBalisePosition_T_BG_Typ *inPosition,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide *outCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool *outIsDuplicate);

#endif /* _addTelegram_Receive_TrackSide_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** addTelegram_Receive_TrackSide_M.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

