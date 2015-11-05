/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
kcg_bool findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::which_pig */ N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::HeaderArray */ TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::doSearch */ kcg_bool doSearch)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
  static kcg_bool acc;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */
  static kcg_bool telegramAlreadyInGroup;
  
  /* ck_valid */ if ((*HeaderArray)[0].valid) {
    telegramAlreadyInGroup = kcg_true;
    if (doSearch) {
      for (i = 0; i < 8; i++) {
        acc = telegramAlreadyInGroup;
        /* 7 */
        simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          i,
          acc,
          &(*HeaderArray)[i],
          which_pig,
          &cond_iterw,
          &telegramAlreadyInGroup);
        if (!cond_iterw) {
          break;
        }
      }
    }
  }
  else {
    telegramAlreadyInGroup = kcg_false;
  }
  return telegramAlreadyInGroup;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

