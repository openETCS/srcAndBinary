/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_t_TM_conversio.h"

/* TM_conversions::C_P015_to_legacy_t */
void C_P015_to_legacy_t_TM_conversio(
  /* TM_conversions::C_P015_to_legacy_t::P015_in */ P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_t::P015_legacy_out */ _6_P15_Level23MovementAuthoriti *P015_legacy_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 5; i++) {
    /* 1 */
    C_P015_to_legacy_loop_TM_conver(
      i,
      P015_in,
      &(*P015_in).sections,
      &(*P015_legacy_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P015_to_legacy_t_TM_conversio.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

