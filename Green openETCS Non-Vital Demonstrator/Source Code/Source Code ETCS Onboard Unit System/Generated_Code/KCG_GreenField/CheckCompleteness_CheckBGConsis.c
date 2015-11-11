/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckCompleteness_CheckBGConsis.h"

/* CheckBGConsistency_Pkg::CheckCompleteness */
void CheckCompleteness_CheckBGConsis(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */ BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool *isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg *lastTelegram)
{
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L5 */
  static kcg_int _L5_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*bgMessage).numberBalises == 1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *isComplete = kcg_false;
    *isSingleBG = /* 1 */
      CheckSingleBG_CheckBGConsistenc(&(*bgMessage).Telegrams[0]);
    kcg_copy_Telegram_T_BG_Types_Pk(lastTelegram, &(*bgMessage).Telegrams[0]);
  }
  else {
    else_clock_IfBlock1 = !((*bgMessage).numberBalises > /* 1 */
        N_TOTAL2int_CheckBGConsistency_(
          (*bgMessage).Telegrams[0].telegramheader.n_total)) &
      ((*bgMessage).numberBalises > 0);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      *isSingleBG = kcg_false;
      /* 1 */
      CompletenessFirstCheck_CheckBGC(
        &(*bgMessage).Telegrams,
        &_L1_IfBlock1,
        lastTelegram,
        &_L5_IfBlock1);
      *isComplete = _L1_IfBlock1 & (_L5_IfBlock1 == (*bgMessage).numberBalises);
    }
    else {
      *isSingleBG = kcg_false;
      *isComplete = kcg_false;
      kcg_copy_Telegram_T_BG_Types_Pk(
        lastTelegram,
        (Telegram_T_BG_Types_Pkg *) &cTelegram_CheckBGConsistency_Pk);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckCompleteness_CheckBGConsis.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

