/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkTelegram_Receive_TrackSide.h"

/* Receive_TrackSide_Msg_Pkg::checkTelegram */
void checkTelegram_Receive_TrackSide(
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::inTelegramArray */ TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::BGCollector */ BGCollector_T_Receive_TrackSide *BGCollector,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outCollector */ BGCollector_T_Receive_TrackSide *outCollector,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramNotInGroup */ kcg_bool *outTelegramNotInGroup,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outBGchangedEarly */ kcg_bool *outBGchangedEarly)
{
  /* Receive_TrackSide_Msg_Pkg::checkTelegram */
  static BGCollector_T_Receive_TrackSide tmp;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newBGInitNeeded */
  static kcg_bool newBGInitNeeded;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L36 */
  static kcg_bool _L36;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L63 */
  static kcg_bool _L63;
  
  _L36 = (*newTelegram).telegramheader.nid_bg == (*BGCollector).BG_ID;
  _L63 = !_L36 & ((*BGCollector).totalTelegrams > 0);
  newBGInitNeeded = _L63 & (*BGCollector).BGMessageSent;
  /* 2 */ if (newBGInitNeeded) {
    kcg_copy_TelegramArray_T_BG_Typ(
      outTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pk);
    /* 1 */ initCollector_Receive_TrackSide(newTelegram, &tmp);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Typ(outTelegramArray, inTelegramArray);
    kcg_copy_BGCollector_T_Receive_(&tmp, BGCollector);
  }
  *outTelegramNotInGroup = !/* 1 */
    findTelegram_Receive_TrackSide_(
      (*newTelegram).telegramheader.n_pig,
      outTelegramArray,
      (kcg_bool) ((*newTelegram).valid & _L36));
  *outBGchangedEarly = _L63 & !(*BGCollector).BGMessageSent;
  /* 1 */ checkSingleBB_Receive_TrackSide(newTelegram, &tmp, outCollector);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkTelegram_Receive_TrackSide.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

