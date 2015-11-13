/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTelegrams_Receive_TrackS.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams */
kcg_bool compareTelegrams_Receive_TrackS(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram1 */ Telegram_T_BG_Types_Pkg *inTelegram1,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram2 */ Telegram_T_BG_Types_Pkg *inTelegram2)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::HeaderIsEqual */
  static kcg_bool HeaderIsEqual;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */
  static kcg_bool isEqual;
  
  HeaderIsEqual = kcg_comp_TelegramHeader_T_BG_Ty(
      &(*inTelegram1).telegramheader,
      &(*inTelegram2).telegramheader);
  /* ck_HeaderIsEqual */ if (HeaderIsEqual) {
    isEqual = kcg_comp_CompressedPackets_T_Co(
        &(*inTelegram1).packets,
        &(*inTelegram2).packets);
  }
  else {
    isEqual = kcg_false;
  }
  return isEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** compareTelegrams_Receive_TrackS.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

