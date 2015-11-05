/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageAdditionalTelegram_Receiv.h"

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
void manageAdditionalTelegram_Receiv(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Typ *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */ TelegramStore_T_Receive_TrackSi *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */ kcg_bool inputTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outputPresent */ kcg_bool *outputPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outDecodedTelegram */ Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outcenterOfBalisePosition */ centerOfBalisePosition_T_BG_Typ *outcenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outNeedStore */ kcg_bool *outNeedStore)
{
  *outNeedStore = (*inTelegramStore).valid & inputTelegramPresent;
  /* 1 */ if ((*inTelegramStore).valid) {
    kcg_copy_centerOfBalisePosition(
      outcenterOfBalisePosition,
      &(*inTelegramStore).position);
    kcg_copy_Telegram_T_BG_Types_Pk(
      outDecodedTelegram,
      &(*inTelegramStore).telegram);
  }
  else {
    kcg_copy_centerOfBalisePosition(
      outcenterOfBalisePosition,
      incenterOfBalisePosition);
    kcg_copy_Telegram_T_BG_Types_Pk(outDecodedTelegram, inDecodedTelegram);
  }
  *outputPresent = inputTelegramPresent | (*inTelegramStore).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageAdditionalTelegram_Receiv.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

