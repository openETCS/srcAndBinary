/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_N_Iter_ProvidePosit.h"

/* ProvidePositionReport_Pkg::Supervision_N_Iter */
kcg_bool Supervision_N_Iter_ProvidePosit(
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::niter */ N_ITER niter,
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::iterpacket */ IterPacket58List_T_Packet_Types *iterpacket)
{
  /* ProvidePositionReport_Pkg::Supervision_N_Iter::trigger */
  static kcg_bool trigger;
  
  trigger = kcg_false;
  return trigger;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_N_Iter_ProvidePosit.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

