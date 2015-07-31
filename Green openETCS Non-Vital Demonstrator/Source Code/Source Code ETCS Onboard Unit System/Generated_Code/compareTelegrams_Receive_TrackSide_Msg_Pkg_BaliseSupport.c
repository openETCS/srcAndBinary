/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams */
kcg_bool compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram1 */Telegram_T_BG_Types_Pkg *inTelegram1,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram2 */Telegram_T_BG_Types_Pkg *inTelegram2)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::HeaderIsEqual */
  static kcg_bool HeaderIsEqual;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */
  static kcg_bool isEqual;
  
  HeaderIsEqual = kcg_comp_TelegramHeader_T_BG_Types_Pkg(
      &(*inTelegram1).telegramheader,
      &(*inTelegram2).telegramheader);
  if (HeaderIsEqual) {
    isEqual = kcg_comp_CompressedPackets_T_Common_Types_Pkg(
        &(*inTelegram1).packets,
        &(*inTelegram2).packets);
  }
  else {
    isEqual = kcg_false;
  }
  return isEqual;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

