/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree */
void setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::inTelegramArray */Telegram_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::cont */kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::outTelegrams */Telegram_T_BG_Types_Pkg *outTelegrams)
{
  *cont = (*inTelegramArray).valid;
  if (*cont) {
    kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, inTelegramArray);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, newTelegram);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

