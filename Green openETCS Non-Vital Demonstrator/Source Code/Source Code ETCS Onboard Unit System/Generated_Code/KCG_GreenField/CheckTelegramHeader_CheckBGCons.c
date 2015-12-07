/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTelegramHeader_CheckBGCons.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader */
kcg_bool CheckTelegramHeader_CheckBGCons(
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::telegramHeader_in */ TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::_L48 */
  static kcg_int _L48;
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::isConsistent */
  static kcg_bool isConsistent;
  
  _L48 = /* 1 */ N_TOTAL2int_CheckBGConsistency_((*telegramHeader_in).n_total);
  isConsistent = (/* 1 */
      N_PIG2int_CheckBGConsistency_Pk((*telegramHeader_in).n_pig) <= _L48) &
    (_L48 > 0) & (cTheTelegramFitsWithAll_CheckBG >=
      (*telegramHeader_in).m_mcount) & ((*telegramHeader_in).m_mcount !=
      cTheTelegramNeverFitsAnyMessage);
  return isConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckTelegramHeader_CheckBGCons.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

