/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */ Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */ Telegram_T_BG_Types_Pkg *telegram2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isConsistent */ kcg_bool *isConsistent,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram_out */ Telegram_T_BG_Types_Pkg *telegram_out)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram2);
  *isConsistent = (*telegram1).valid & /* 1 */
    Check2Headers_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram1).telegramheader,
      (*telegram1).checkResult,
      &(*telegram2).telegramheader,
      (*telegram2).checkResult) & (*telegram2).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

