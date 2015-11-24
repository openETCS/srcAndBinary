/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P046_to_legacy_t */
void C_P046_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P046_to_legacy_t::P046_in */ P046_OBU_T_TM *P046_in,
  /* TM_conversions::C_P046_to_legacy_t::P046_legacy_out */ P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *P046_legacy_out)
{
  kcg_int i;
  
  /* 1 */ for (i = 0; i < 7; i++) {
    /* 1 */
    C_P046_to_legacy_loop_TM_conversions(
      i,
      (*P046_in).q_dir,
      &(*P046_in).sections,
      &(*P046_legacy_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

