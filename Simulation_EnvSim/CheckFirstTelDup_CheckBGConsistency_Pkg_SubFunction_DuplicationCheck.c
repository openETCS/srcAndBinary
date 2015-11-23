/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup */
kcg_bool CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::_L20 */
  static kcg_int _L20;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::CheckFirstTelDup::isTheFirst */
  static kcg_bool isTheFirst;
  
  _L20 = /* 3 */
    N_PIG2int_CheckBGConsistency_Pkg_SubFunction((*telegramHeader_in).n_pig);
  isTheFirst = ((M_DUP_This_balise_is_a_duplicate_of_the_next_balise ==
        (*telegramHeader_in).m_dup) & (/* 3 */
        N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(
          (*telegramHeader_in).n_total) - 1 == _L20)) | ((_L20 == 2) &
      ((*telegramHeader_in).m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise));
  return isTheFirst;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-11-23T09:24:22
*************************************************************$ */

