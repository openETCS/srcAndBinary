/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */ TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */ kcg_bool inputTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outputPresent */ kcg_bool *outputPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outDecodedTelegram */ Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outcenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *outcenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outNeedStore */ kcg_bool *outNeedStore)
{
  *outNeedStore = (*inTelegramStore).valid & inputTelegramPresent;
  /* 1 */ if ((*inTelegramStore).valid) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outcenterOfBalisePosition,
      &(*inTelegramStore).position);
    kcg_copy_Telegram_T_BG_Types_Pkg(
      outDecodedTelegram,
      &(*inTelegramStore).telegram);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outcenterOfBalisePosition,
      incenterOfBalisePosition);
    kcg_copy_Telegram_T_BG_Types_Pkg(outDecodedTelegram, inDecodedTelegram);
  }
  *outputPresent = inputTelegramPresent | (*inTelegramStore).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

