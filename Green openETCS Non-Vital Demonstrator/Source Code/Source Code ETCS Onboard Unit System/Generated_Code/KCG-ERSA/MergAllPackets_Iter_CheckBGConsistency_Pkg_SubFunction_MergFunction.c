/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
void MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramArray */ TelegramArray_T_BG_Types_Pkg *telegramArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramout */ Telegram_T_BG_Types_Pkg *telegramout)
{
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */ Telegram_T_BG_Types_Pkg acc;
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */ kcg_bool cond_iterw;
  kcg_int i;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(telegramout, &(*telegramArray)[0]);
  for (i = 0; i < 7; i++) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&acc, telegramout);
    /* 1 */
    MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
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
** MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

