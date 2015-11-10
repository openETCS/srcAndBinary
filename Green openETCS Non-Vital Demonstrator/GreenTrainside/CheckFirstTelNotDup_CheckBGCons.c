/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelNotDup_CheckBGCons.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup */
kcg_bool CheckFirstTelNotDup_CheckBGCons(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::telegramHeader_in */ TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::_L4 */
  static kcg_int _L4;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelNotDup::isTheFirst */
  static kcg_bool isTheFirst;
  
  _L4 = /* 1 */ N_PIG2int_CheckBGConsistency_Pk((*telegramHeader_in).n_pig);
  isTheFirst = (/* 1 */
      N_TOTAL2int_CheckBGConsistency_((*telegramHeader_in).n_total) == _L4) |
    (_L4 == 1);
  return isTheFirst;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckFirstTelNotDup_CheckBGCons.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

