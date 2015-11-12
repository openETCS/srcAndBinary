/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_Iter_CheckBGCons.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
void MergAllPackets_Iter_CheckBGCons(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramArray */ TelegramArray_T_BG_Types_Pkg *telegramArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramout */ Telegram_T_BG_Types_Pkg *telegramout)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
  static Telegram_T_BG_Types_Pkg acc;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
  static kcg_bool cond_iterw;
  static kcg_int i;
  
  kcg_copy_Telegram_T_BG_Types_Pk(telegramout, &(*telegramArray)[0]);
  for (i = 0; i < 7; i++) {
    kcg_copy_Telegram_T_BG_Types_Pk(&acc, telegramout);
    /* 1 */
    MergAllPackets_CheckBGConsisten(
      &acc,
      &(*telegramArray)[i + 1],
      &cond_iterw,
      telegramout);
    if (!cond_iterw) {
      break;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergAllPackets_Iter_CheckBGCons.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

