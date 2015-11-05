/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Dif3Nominal_CheckBGConsistency_.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal */
kcg_bool Dif3Nominal_CheckBGConsistency_(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_1 */ M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::m_dup_2 */ M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal::valid */
  static kcg_bool valid;
  
  valid = (m_dup_1 == _43_M_DUP_This_balise_is_a_dupl) & (m_dup_2 ==
      M_DUP_This_balise_is_a_duplicat) & crcCheck_1 & crcCheck_2;
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Dif3Nominal_CheckBGConsistency_.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

