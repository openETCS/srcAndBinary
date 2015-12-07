/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTelegram_Receive_TrackSid.h"

/* Receive_TrackSide_Msg_Pkg::manageTelegram */
void manageTelegram_Receive_TrackSid(
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Typ *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */ BGCollector_T_Receive_TrackSide *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisComplete */ kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisChangedEarly */ kcg_bool *outBGisChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outCollector */ BGCollector_T_Receive_TrackSide *outCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outStoresChanged */ kcg_bool *outStoresChanged)
{
  /* Receive_TrackSide_Msg_Pkg::manageTelegram */
  static BGCollector_T_Receive_TrackSide tmp;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::isNotReceivedAlready */
  static kcg_bool isNotReceivedAlready;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L53 */
  static kcg_bool _L53;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L63 */
  static BGCollector_T_Receive_TrackSide _L63;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L64 */
  static TelegramArray_T_BG_Types_Pkg _L64;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L67 */
  static kcg_bool _L67;
  
  /* 1 */ checkInit_Receive_TrackSide_Msg(newTelegram, inCollector, &tmp);
  /* 1 */
  checkTelegram_Receive_TrackSide(
    newTelegram,
    inoldTelegramArray,
    &tmp,
    &_L63,
    &_L64,
    &isNotReceivedAlready,
    outBGisChangedEarly);
  /* 4 */
  addTelegram_Receive_TrackSide_M(
    newTelegram,
    &_L63,
    &_L64,
    isNotReceivedAlready,
    incenterOfBalisePosition,
    outCollector,
    outTelegramArray,
    &_L53,
    &_L67);
  *outBGisComplete = _L53 | *outBGisChangedEarly;
  *outStoresChanged = isNotReceivedAlready | !_L67;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTelegram_Receive_TrackSid.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

