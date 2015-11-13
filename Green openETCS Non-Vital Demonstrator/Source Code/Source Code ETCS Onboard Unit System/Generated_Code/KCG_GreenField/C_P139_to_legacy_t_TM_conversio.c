/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P139_to_legacy_t_TM_conversio.h"

/* TM_conversions::C_P139_to_legacy_t */
void C_P139_to_legacy_t_TM_conversio(
  /* TM_conversions::C_P139_to_legacy_t::P139_in */ P139_OBU_T_TM *P139_in,
  /* TM_conversions::C_P139_to_legacy_t::P139_legacy_out */ P139_ReversingSupervisionInform *P139_legacy_out)
{
  (*P139_legacy_out).valid = (*P139_in).valid;
  (*P139_legacy_out).q_dir = (*P139_in).q_dir;
  (*P139_legacy_out).q_scale = (*P139_in).q_scale;
  (*P139_legacy_out).d_reverse = (*P139_in).d_reverse;
  (*P139_legacy_out).v_reverse = (*P139_in).v_reverse;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P139_to_legacy_t_TM_conversio.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

