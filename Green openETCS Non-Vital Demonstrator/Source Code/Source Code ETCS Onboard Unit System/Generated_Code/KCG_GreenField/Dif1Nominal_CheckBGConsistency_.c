/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif1Nominal_CheckBGConsistency_.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal */
kcg_bool Dif1Nominal_CheckBGConsistency_(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::m_dup_1 */ M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::m_dup_2 */ M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::_L6 */
  static kcg_bool _L6;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal::valid */
  static kcg_bool valid;
  
  _L6 = m_dup_2 == M_DUP_No_duplicates;
  valid = ((m_dup_1 == M_DUP_No_duplicates) & _L6 & crcCheck_1 & crcCheck_2) |
    ((crcCheck_1 | crcCheck_2) & (m_dup_1 == _44_M_DUP_This_balise_is_a_dupl) &
      (m_dup_2 == M_DUP_This_balise_is_a_duplicat)) | ((m_dup_1 ==
        M_DUP_This_balise_is_a_duplicat) & ((m_dup_2 ==
          _44_M_DUP_This_balise_is_a_dupl) | (_L6 & crcCheck_2)));
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Dif1Nominal_CheckBGConsistency_.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

