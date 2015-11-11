/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Telegrams_CheckBGConsiste.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
void Check2Telegrams_CheckBGConsiste(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */ Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */ Telegram_T_BG_Types_Pkg *telegram2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isConsistent */ kcg_bool *isConsistent,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram_out */ Telegram_T_BG_Types_Pkg *telegram_out)
{
  kcg_copy_Telegram_T_BG_Types_Pk(telegram_out, telegram2);
  *isConsistent = (*telegram1).valid & /* 1 */
    Check2Headers_CheckBGConsistenc(
      &(*telegram1).telegramheader,
      (*telegram1).checkResult,
      &(*telegram2).telegramheader,
      (*telegram2).checkResult) & (*telegram2).valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check2Telegrams_CheckBGConsiste.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

