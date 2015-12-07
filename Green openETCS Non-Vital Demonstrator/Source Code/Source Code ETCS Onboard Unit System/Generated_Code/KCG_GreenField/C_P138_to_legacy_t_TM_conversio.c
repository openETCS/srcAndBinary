/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P138_to_legacy_t_TM_conversio.h"

/* TM_conversions::C_P138_to_legacy_t */
void C_P138_to_legacy_t_TM_conversio(
  /* TM_conversions::C_P138_to_legacy_t::P138_in */ P138_OBU_T_TM *P138_in,
  /* TM_conversions::C_P138_to_legacy_t::P138_legacy_out */ P138_ReversingAreaInformation_T *P138_legacy_out)
{
  (*P138_legacy_out).valid = (*P138_in).valid;
  (*P138_legacy_out).q_dir = (*P138_in).q_dir;
  (*P138_legacy_out).q_scale = (*P138_in).q_scale;
  (*P138_legacy_out).d_startreverse = (*P138_in).d_startreverse;
  (*P138_legacy_out).l_reversearea = (*P138_in).l_reversearea;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P138_to_legacy_t_TM_conversio.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

