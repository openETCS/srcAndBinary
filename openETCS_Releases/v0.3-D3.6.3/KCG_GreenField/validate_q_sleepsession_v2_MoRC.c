/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validate_q_sleepsession_v2_MoRC.h"

/* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2 */
kcg_bool validate_q_sleepsession_v2_MoRC(
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::mode */ M_MODE mode)
{
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::_L10 */
  static kcg_bool _L10;
  /* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2::execute */
  static kcg_bool execute;
  
  _L10 = mode == M_MODE_Sleeping;
  execute = (*p42_SessionManagement).valid &
    ((((*p42_SessionManagement).q_sleepsession ==
          Q_SLEEPSESSION_Execute_session_) & _L10) | !_L10);
  return execute;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validate_q_sleepsession_v2_MoRC.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

