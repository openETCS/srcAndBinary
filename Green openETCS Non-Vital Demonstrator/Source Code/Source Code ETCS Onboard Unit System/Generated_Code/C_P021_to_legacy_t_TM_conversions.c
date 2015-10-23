/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P021_to_legacy_t */
void C_P021_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P021_to_legacy_t::P021_in */ P021_OBU_T_TM *P021_in,
  /* TM_conversions::C_P021_to_legacy_t::P021_legacy_out */ P21_GradientProfiles_T_Packet_Types_Pkg *P021_legacy_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 7; i++) {
    /* 1 */
    C_P021_to_legacy_loop_TM_conversions(
      i,
      P021_in,
      &(*P021_in).sections,
      &(*P021_legacy_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_to_legacy_t_TM_conversions.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

