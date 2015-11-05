/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram */
kcg_bool CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::telegram_in */ Telegram_T_BG_Types_Pkg *telegram_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::isConsistent */
  static kcg_bool isConsistent;
  
  isConsistent = (*telegram_in).valid & (*telegram_in).checkResult & /* 1 */
    CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram_in).telegramheader);
  return isConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

