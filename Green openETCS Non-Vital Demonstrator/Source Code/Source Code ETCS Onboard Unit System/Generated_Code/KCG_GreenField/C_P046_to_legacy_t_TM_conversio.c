/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_t_TM_conversio.h"

/* TM_conversions::C_P046_to_legacy_t */
void C_P046_to_legacy_t_TM_conversio(
  /* TM_conversions::C_P046_to_legacy_t::P046_in */ P046_OBU_T_TM *P046_in,
  /* TM_conversions::C_P046_to_legacy_t::P046_legacy_out */ P46_ConditionalLevelTransitionO *P046_legacy_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 7; i++) {
    /* 1 */
    C_P046_to_legacy_loop_TM_conver(
      i,
      (*P046_in).q_dir,
      &(*P046_in).sections,
      &(*P046_legacy_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_to_legacy_t_TM_conversio.c
** Generation date: 2015-12-07T14:50:21
*************************************************************$ */

