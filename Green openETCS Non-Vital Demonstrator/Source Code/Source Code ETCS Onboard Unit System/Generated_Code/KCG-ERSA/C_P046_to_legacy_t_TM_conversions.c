/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P046_to_legacy_t */
void C_P046_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P046_to_legacy_t::P046_in */P046_OBU_T_TM *P046_in,
  /* TM_conversions::C_P046_to_legacy_t::P046_legacy_out */_7_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *P046_legacy_out)
{
  static kcg_int i;
  
  for (i = 0; i < 7; i++) {
    /* 1 */
    C_P046_to_legacy_loop_TM_conversions(
      i,
      (*P046_in).q_dir,
      &(*P046_in).sections,
      &(*P046_legacy_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

