/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_N_Iter_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_N_Iter */
kcg_bool Supervision_N_Iter_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::niter */N_ITER niter,
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::iterpacket */IterPacket58List_T_Packet_Types_Pkg *iterpacket)
{
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::trigger */
  static kcg_bool trigger;
  
  trigger = kcg_false;
  return trigger;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervision_N_Iter_ProvidePositionReport_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

