/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_t_TM_conversio.h"

/* TM_conversions::C_P046_to_legacy_t */
void C_P046_to_legacy_t_TM_conversio(
  /* TM_conversions::C_P046_to_legacy_t::P046_in */ P046_OBU_T_TM *P046_in,
  /* TM_conversions::C_P046_to_legacy_t::P046_legacy_out */ _8_P46_ConditionalLevelTransiti *P046_legacy_out)
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
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

