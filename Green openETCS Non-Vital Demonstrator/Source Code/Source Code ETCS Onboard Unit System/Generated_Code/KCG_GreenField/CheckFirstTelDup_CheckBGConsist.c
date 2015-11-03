/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelDup_CheckBGConsist.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup */
kcg_bool CheckFirstTelDup_CheckBGConsist(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::telegramHeader_in */ TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L20 */
  static kcg_int _L20;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::isTheFirst */
  static kcg_bool isTheFirst;
  
  _L20 = /* 3 */ N_PIG2int_CheckBGConsistency_Pk((*telegramHeader_in).n_pig);
  isTheFirst = ((_43_M_DUP_This_balise_is_a_dupl ==
        (*telegramHeader_in).m_dup) & (/* 3 */
        N_TOTAL2int_CheckBGConsistency_((*telegramHeader_in).n_total) - 1 ==
        _L20)) | ((_L20 == 2) & ((*telegramHeader_in).m_dup ==
        M_DUP_This_balise_is_a_duplicat));
  return isTheFirst;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckFirstTelDup_CheckBGConsist.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

