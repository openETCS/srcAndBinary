/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif2Nominal_CheckBGConsistency_.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal */
kcg_bool Dif2Nominal_CheckBGConsistency_(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_1 */ M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::m_dup_2 */ M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal::valid */
  static kcg_bool valid;
  
  _L15 = m_dup_2 == M_DUP_No_duplicates;
  valid = ((m_dup_1 == M_DUP_No_duplicates) & (m_dup_2 ==
        M_DUP_This_balise_is_a_duplicat) & crcCheck_1 & crcCheck_2) |
    ((m_dup_1 == _44_M_DUP_This_balise_is_a_dupl) & _L15 & crcCheck_2) |
    ((m_dup_1 == M_DUP_This_balise_is_a_duplicat) & ((crcCheck_2 & _L15) |
        (m_dup_2 == _44_M_DUP_This_balise_is_a_dupl)));
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Dif2Nominal_CheckBGConsistency_.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

