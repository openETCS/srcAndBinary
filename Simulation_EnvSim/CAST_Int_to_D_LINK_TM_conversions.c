/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T13:23:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LINK_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_LINK */
D_LINK CAST_Int_to_D_LINK_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_LINK::d_link_int */kcg_int d_link_int)
{
  /* TM_conversions::CAST_Int_to_D_LINK::d_link */
  static D_LINK d_link;
  
  d_link = d_link_int;
  return d_link;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_LINK_TM_conversions.c
** Generation date: 2015-11-20T13:23:30
*************************************************************$ */
