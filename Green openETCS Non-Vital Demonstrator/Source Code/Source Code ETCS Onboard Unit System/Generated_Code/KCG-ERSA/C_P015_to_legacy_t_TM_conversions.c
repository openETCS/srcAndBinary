/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P015_to_legacy_t */
void C_P015_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P015_to_legacy_t::P015_in */P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_t::P015_legacy_out */_5_P15_Level23MovementAuthorities_T_Packet_Types_Pkg *P015_legacy_out)
{
  static kcg_int i;
  
  for (i = 0; i < 5; i++) {
    /* 1 */
    C_P015_to_legacy_loop_TM_conversions(
      i,
      P015_in,
      &(*P015_in).sections,
      &(*P015_legacy_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

