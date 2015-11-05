/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckOneTelegram_CheckBGConsist.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram */
kcg_bool CheckOneTelegram_CheckBGConsist(
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::telegram_in */ Telegram_T_BG_Types_Pkg *telegram_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::isConsistent */
  static kcg_bool isConsistent;
  
  isConsistent = (*telegram_in).valid & (*telegram_in).checkResult & /* 1 */
    CheckTelegramHeader_CheckBGCons(&(*telegram_in).telegramheader);
  return isConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckOneTelegram_CheckBGConsist.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

