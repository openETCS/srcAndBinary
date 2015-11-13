/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Headers_CheckBGConsistenc.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Headers */
kcg_bool Check2Headers_CheckBGConsistenc(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_1 */ TelegramHeader_T_BG_Types_Pkg *header_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::header_2 */ TelegramHeader_T_BG_Types_Pkg *header_2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::Check2Headers::isConsistent */
  static kcg_bool isConsistent;
  
  isConsistent = /* 1 */ CheckTelegramHeader_CheckBGCons(header_1) &
    ((*header_1).q_updown == (*header_2).q_updown) & ((*header_1).m_version ==
      (*header_2).m_version) & ((*header_1).q_media == (*header_2).q_media) &
    ((*header_1).n_total == (*header_2).n_total) & ((*header_1).nid_c ==
      (*header_2).nid_c) & ((*header_1).nid_bg == (*header_2).nid_bg) &
    ((*header_1).q_link == (*header_2).q_link) & /* 2 */
    CheckTelegramHeader_CheckBGCons(header_2) & /* 1 */
    Check2N_PIGs_CheckBGConsistency(
      (*header_1).n_pig,
      (*header_1).m_dup,
      (*header_2).n_pig,
      (*header_2).m_dup,
      crcCheck_1,
      crcCheck_2);
  return isConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check2Headers_CheckBGConsistenc.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

