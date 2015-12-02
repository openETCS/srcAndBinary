/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck */
void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::iteratorIndex */ kcg_int iteratorIndex,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::accu */ kcg_bool accu,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::which_pig */ N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::cont */ kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegramAlreadyInGroup */ kcg_bool *telegramAlreadyInGroup)
{
  *telegramAlreadyInGroup = (*telegram).valid &
    ((*telegram).telegramheader.n_pig == which_pig);
  *cont = (*telegram).valid & !*telegramAlreadyInGroup;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

